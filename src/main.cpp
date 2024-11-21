#include <stdio.h>

#include "generator.h"
#include <fstream>
#include <sstream>

#define ENABLE_NLOHMANN_INLINE
#include "generated.h"

static std::string loadFile( const char* _path )
{
	std::ifstream stream( _path );
	std::stringstream buffer;
	buffer << stream.rdbuf();
	return buffer.str();
}

int main( int argc, char* argv[] )
{
	char* path = (char*)"./test.blueprint";

	if ( argc > 1 )
		path = argv[ 1 ];

#ifdef _GENERATED_H
	std::string jsonSrc = loadFile( path );
	nlohmann::json json = nlohmann::json::parse( jsonSrc );

	root_t root = json.get<root_t>();

	FILE* pOutFile = fopen( "generated.json", "w" );
	std::string dump = json.dump();
	fwrite( dump.c_str(), sizeof( char ), dump.size(), pOutFile );

	printf( "" );
#else
	j2s::cGenerator generator;
	generator.load( path );

	FILE* pOutFile = fopen( "../src/generated.h", "w" );

	generator.generate();
	generator.dumpStructs( pOutFile );

	fclose( pOutFile );
#endif

	return 0;
}
