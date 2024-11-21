#include <stdio.h>

#include <nlohmann/json.hpp>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <vector>


typedef std::vector<std::pair<std::string, std::string>> memberVarList_t;


std::unordered_map<std::string, memberVarList_t> objectStructs;

std::string loadFile( const char* _path );
std::string typenameToCppType( const std::string& _key, nlohmann::detail::value_t _type );
void createStructFromObject( const std::string& _key, nlohmann::json& _json );
void dumpJsonKeys( const std::string& _key, nlohmann::json& _json, int _depth );

void dumpStructs();



int main( int argc, char* argv[] )
{
	char* path = "./test.blueprint";

	if ( argc > 1 )
		path = argv[ 1 ];

	std::string fileSrc = loadFile( path );
	nlohmann::json json = nlohmann::json::parse( fileSrc );

	dumpJsonKeys( "root", json, 0);
	dumpStructs();

	return 0;
}

std::string loadFile( const char* _path )
{
	std::ifstream stream( _path );
	std::stringstream buffer;
	buffer << stream.rdbuf();
	return buffer.str();
}

std::string typenameToCppType( const std::string& _key, nlohmann::json& _json )
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
		auto& arrObj = _json.items().begin();
		return "std::vector<" + typenameToCppType( _key, arrObj.value() ) + ">";
	} break;
	}
}

void createStructFromObject( const std::string& _key, nlohmann::json& _json )
{
	memberVarList_t members;

	for ( auto& el : _json.items() )
	{
		std::string typeStr = typenameToCppType( el.key(), el.value() );
		std::string keyStr = el.key();
		if ( el.key() == "class" ) keyStr = "_class";
		
		members.push_back( { typeStr, keyStr } );
	}

	objectStructs[ _key + "_t" ] = members;
}

void dumpJsonKeys( const std::string& _key, nlohmann::json& _json, int _depth )
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
		createStructFromObject( keyStr, _json );
		printf( "%s%s {\n", spacer.c_str(), typeStr.c_str() );
		for ( auto& el : _json.items() )
			dumpJsonKeys( el.key(), el.value(), _depth + 4 );
		printf( "%s} %s;\n", spacer.c_str(), keyStr.c_str() );
	} break;

	case value_t::array:
	{
		printf( "%s%s %s", spacer.c_str(), typeStr.c_str(), keyStr.c_str() );
		auto& arrObj = _json.items().begin();

		if ( arrObj.value().type() == value_t::object )
		{
			printf( "\n" );
			dumpJsonKeys( _key, arrObj.value(), _depth + 4 );
		}
		else
			printf( ";\n" );
		// else dumpJsonKeys( "ARRAY TYPE", arrObj.value(), _depth + 4);
	} break;

	default:
		printf( "%s%s %s;\n", spacer.c_str(), typeStr.c_str(), keyStr.c_str() );
	}

}

void dumpStructs()
{
	for ( auto& s : objectStructs )
	{
		printf( "struct %s\n{\n", s.first.c_str() );
		for ( auto& m : s.second )
		{
			printf( "    %s %s;\n", m.first.c_str(), m.second.c_str() );
		}
		printf( "};\n\n" );
	}
}
