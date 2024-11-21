#include "generator.h"

#include <fstream>
#include <sstream>
#include <algorithm>

// #define ENABLE_NLOHMANN_INLINE

void j2s::cGenerator::load( const char* _filepath )
{
	std::string fileSrc = loadFile( _filepath );
	m_json = nlohmann::json::parse( fileSrc );
}

void j2s::cGenerator::generate()
{
	generateStructs( "root", m_json, 0 );
}

void j2s::cGenerator::dumpStructs( FILE* _pOutFile )
{
	fprintf( _pOutFile,
			 "#include <stdint.h>\n"
			 "#include <string>\n"
			 "#include <vector>\n"
		 #ifdef ENABLE_NLOHMANN_INLINE
			 "#ifdef ENABLE_NLOHMANN_INLINE\n"
			 "#include <nlohmann/json.hpp>\n"
			 "#endif\n"
		 #endif
			 "\n"
	);

	//m_objectKeys
	for ( auto keyIter = m_objectKeys.rbegin(); keyIter != m_objectKeys.rend(); ++keyIter )
	{
		std::string objName = *keyIter;
		sObject& obj = m_objects[ objName ];

		switch ( obj.type )
		{
		case kStruct:
			dumpStructObject( _pOutFile, objName, obj.members );
			break;

		case kVariantContainer:
			dumpVariantContainer( _pOutFile, objName, obj );
			break;

		case kVariant:
		{
			for ( auto& variant : obj.variantMembers )
			{
				std::string variantName = variant.first + "_t";
				dumpStructObject( _pOutFile, variantName, variant.second );
			}
		} break;
		}
	}
}

static void removeQuotationMarks( std::string& _string )
{
	_string.erase( std::remove( _string.begin(), _string.end(), '"' ), _string.end() );
}

void j2s::cGenerator::resolveObject( const std::string& _key, nlohmann::json& _json, int _depth )
{
	using nlohmann::detail::value_t;

	std::string spacer( _depth, ' ' );
	std::string subspacer( _depth+4, ' ' );

	std::string objTypeStr = _key;
	objTypeStr += "_t";
	
	if ( _json.contains( "type" ) && _json.at( "type" ).type() == value_t::string )
	{
		// variant container
		sObject& obj = m_objects[ objTypeStr ];
		obj.type = kVariantContainer;
		std::string variantType = _json.at( "type" ).dump();
		removeQuotationMarks( variantType );

		bool firstTime = obj.members.empty();

		if ( firstTime )
		{
			printf( "%s%s\n", spacer.c_str(), objTypeStr.c_str() );
			m_objectKeys.push_back( objTypeStr );
		}
		
		for ( auto& el : _json.items() )
		{
			if ( el.value().type() == value_t::object )
			{
				std::string variantMember = el.key() + "_t";
				sObject& variant = m_objects[ variantMember ];
				variant.variantContainer = objTypeStr;
				variant.variantType = variantType;
				variant.type = kVariant;
			}
			
			if ( firstTime )
			{
				std::string typeStr = typenameToCppType( el.key(), el.value() );
				std::string keyStr = el.key();
				if ( el.key() == "class" ) keyStr = "_class";

				obj.members.push_back( { typeStr, keyStr, el.key() } );

				printf( "%s%s %s\n", subspacer.c_str(), typeStr.c_str(), keyStr.c_str() );
			}
		}
	}
	else if( m_objects.find( objTypeStr ) != m_objects.end() && m_objects.at( objTypeStr ).type == kVariant )
	{
		// variant
		sObject& obj = m_objects.at( objTypeStr );
		
		if ( obj.variantMembers.find( obj.variantType ) == obj.variantMembers.end() )
		{
			printf( "%s %s::%s\n", spacer.c_str(), objTypeStr.c_str(), obj.variantType.c_str() );
			for ( auto& el : _json.items() )
			{
				std::string typeStr = typenameToCppType( el.key(), el.value() );
				std::string keyStr = el.key();
				if ( el.key() == "class" ) keyStr = "_class";

				printf( "%s%s %s;\n", subspacer.c_str(), typeStr.c_str(), keyStr.c_str() );
				obj.variantMembers[ obj.variantType ].push_back( { typeStr, keyStr, el.key() } );
			}

			m_objectKeys.push_back( objTypeStr );
		}
	}
	else if( m_objects.find( objTypeStr ) == m_objects.end() )
	{
		sObject obj;
		obj.type = kStruct;

		printf( "%s%s %s;\n", spacer.c_str(), objTypeStr.c_str(), _key.c_str() );

		for ( auto& el : _json.items() )
		{
			std::string typeStr = typenameToCppType( el.key(), el.value() );
			std::string keyStr = el.key();
			if ( el.key() == "class" ) keyStr = "_class";

			printf( "%s%s %s;\n", subspacer.c_str(), typeStr.c_str(), keyStr.c_str() );
			
			obj.members.push_back( { typeStr, keyStr, el.key() } );
		}

		m_objectKeys.push_back( objTypeStr );
		m_objects[ objTypeStr ] = obj;
	}
}

void j2s::cGenerator::dumpStructObject( FILE* _pOutFile, const std::string& _key, memberVarList_t& _members )
{
	// struct object
	fprintf( _pOutFile, "struct %s\n{\n", _key.c_str() );
	for ( auto& m : _members )
		fprintf( _pOutFile, "    %s %s;\n", m.typeStr.c_str(), m.name.c_str() );
	fprintf( _pOutFile, "};\n" );

#ifdef ENABLE_NLOHMANN_INLINE
	// inline nlohmann::json 
	fprintf( _pOutFile, "#ifdef ENABLE_NLOHMANN_INLINE\n" );

	// to_json
	fprintf( _pOutFile, "inline void to_json(nlohmann::json& _json, const %s& _obj) {\n", _key.c_str() );
	for ( auto& m : _members )
		fprintf( _pOutFile, "    _json[\"%s\"] = _obj.%s;\n", m.jsonName.c_str(), m.name.c_str() );
	fprintf( _pOutFile, "}\n" );

	// from_json
	fprintf( _pOutFile, "inline void from_json(const nlohmann::json& _json, %s& _obj) {\n", _key.c_str() );
	for ( auto& m : _members )
	{
		const char* name = m.name.c_str();
		const char* jname = m.jsonName.c_str();
		const char* typ = m.typeStr.c_str();
		//fprintf( _pOutFile, "    if( _json.contains(\"%s\") && _json.at(\"%s\").type() != nlohmann::detail::value_t::null ) ", jname, jname );
		fprintf( _pOutFile, "    _obj.%s = _json.value<%s>(\"%s\", %s{} );\n", name, typ, jname, typ );
	}
	fprintf( _pOutFile, "}\n" );

	fprintf( _pOutFile, "#endif\n\n" );
#endif
}

void j2s::cGenerator::dumpVariantContainer( FILE* _pOutFile, const std::string& _key, sObject& _obj )
{
	std::vector<std::string> variants;

	fprintf( _pOutFile, "struct %s // variant container \n{ \n", _key.c_str() );
	for ( auto& m : _obj.members )
	{
		if ( m_objects.contains( m.typeStr ) )
		{
			variants.push_back( m.typeStr );

			fprintf( _pOutFile, "    union %s {\n", m.typeStr.c_str() );

			sObject& variantBase = m_objects[ m.typeStr ];
			for ( auto& variant : variantBase.variantMembers )
				fprintf( _pOutFile, "       %s_t %s;\n", variant.first.c_str(), variant.first.c_str() );

			fprintf( _pOutFile, "    } %s;\n", m.name.c_str() );
		}
		else
			fprintf( _pOutFile, "    %s %s;\n", m.typeStr.c_str(), m.name.c_str() );
	}
	fprintf( _pOutFile, "};\n" );


#ifdef ENABLE_NLOHMANN_INLINE
	fprintf( _pOutFile, "#ifdef ENABLE_NLOHMANN_INLINE\n" );
	// variants
	for ( auto& variantStr : variants )
	{
		sObject& variantBase = m_objects[ variantStr ];

		fprintf( _pOutFile, "inline void from_json(const nlohmann::json& _json, %s& _obj) {\n", variantStr.c_str() );
		for ( auto& variant : variantBase.variantMembers )
		{
			fprintf( _pOutFile, "    if ( _obj.type == \"%s\" ) { from_json( _json, _obj.%s ); return; }\n", variant.first.c_str(), variant.first.c_str() );

			//fprintf( _pOutFile, "       %s_t %s;\n", variant.first.c_str(), variant.first.c_str() );

		}
		fprintf( _pOutFile, "}\n" );
	}
	
	fprintf( _pOutFile, "inline void from_json(const nlohmann::json& _json, %s& _obj) {\n", _key.c_str() );
	for ( auto& m : _obj.members )
	{
		const char* name = m.name.c_str();
		const char* jname = m.jsonName.c_str();
		const char* typ = m.typeStr.c_str();
		//fprintf( _pOutFile, "    if( _json.contains(\"%s\") && _json.at(\"%s\").type() != nlohmann::detail::value_t::null ) ", jname, jname );
		fprintf( _pOutFile, "    _obj.%s = _json.value<%s>(\"%s\", %s{} );\n", name, typ, jname, typ );
	}
	fprintf( _pOutFile, "}\n" );
	fprintf( _pOutFile, "#endif\n\n" );
#endif
}

std::string j2s::cGenerator::loadFile( const char* _path )
{
	std::ifstream stream( _path );
	std::stringstream buffer;
	buffer << stream.rdbuf();
	return buffer.str();
}

std::string j2s::cGenerator::typenameToCppType( const std::string& _key, nlohmann::json& _json )
{
	using nlohmann::detail::value_t;

	switch ( _json.type() )
	{
	case value_t::object:          return _key + "_t";   break;
	case value_t::string:          return "std::string"; break;
	case value_t::boolean:         return "bool";        break;
	case value_t::number_float:    return "float";       break;
	case value_t::number_integer:  return "int32_t";     break;
	case value_t::number_unsigned: return "uint32_t";    break;
	case value_t::binary:          return "uint8_t*";    break;

	case value_t::array:
	{
		if ( !_json.empty() )
		{
			const auto& arrObj = _json.items().begin();
			return "std::vector<" + typenameToCppType( _key, arrObj.value() ) + ">";
		}
		else
		{
			return "std::vector<void*>"; // unknown vector type
		}
	} break;
	}

	return "std::string";
}

void j2s::cGenerator::generateStructs( const std::string& _key, nlohmann::json& _json, int _depth )
{
	using nlohmann::detail::value_t;

	std::string spacer( _depth, ' ' );
	std::string typeStr = typenameToCppType( _key, _json );
	std::string keyStr = _key;
	if ( _key == "class" ) keyStr = "_class";

	switch ( _json.type() )
	{
	case value_t::object:
	{
		resolveObject( keyStr, _json, _depth );
		for ( auto& el : _json.items() )
			generateStructs( el.key(), el.value(), _depth + 4 );
	} break;

	case value_t::array:
	{
		//printf( "%s%s %s", spacer.c_str(), typeStr.c_str(), keyStr.c_str() );
		for ( auto& item : _json.items() )
		{
			if ( item.value().type() == value_t::object )
				generateStructs( _key, item.value(), _depth + 4 );
			else
				break;
		}
	} break;
	}

}
