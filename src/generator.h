#pragma once

#include <nlohmann/json.hpp>
#include <vector>
#include <string>
#include <unordered_map>
namespace j2s
{
	class cGenerator
	{
	public:
		struct sMember
		{
			std::string typeStr;
			std::string name;
			std::string jsonName;
		};
		typedef std::vector<sMember> memberVarList_t;

		enum eObjectType
		{
			kStruct,
			kVariant,
			kVariantContainer
		};

		struct sObject
		{
			eObjectType type = kStruct;
			std::string variantContainer = "";
			std::string variantType = "";
			
			memberVarList_t members;
			std::unordered_map<std::string, memberVarList_t> variantMembers;
		};


		void load( const char* _filepath );
		void generate();
		void dumpStructs( FILE* _pOutFile );

	private:

		void resolveObject( const std::string& _key, nlohmann::json& _json, int _depth );

		void dumpStructObject( FILE* _pOutFile, const std::string& _key, memberVarList_t& _members );

		std::string loadFile( const char* _path );
		std::string typenameToCppType( const std::string& _key, nlohmann::json& _json );
		void generateStructs( const std::string& _key, nlohmann::json& _json, int _depth );

		std::unordered_map<std::string, sObject> m_objects;
		std::unordered_map<std::string, std::vector<std::string>> m_variants;
		
		nlohmann::json m_json;
	};
}