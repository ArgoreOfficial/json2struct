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

	bool generate = true;

	if ( argc > 1 )
		path = argv[ 1 ];

	if( generate )
	{
		j2s::cGenerator generator;
		generator.load( path );

		FILE* pOutFile = fopen( "./generated.h", "w" );

		generator.generate();
		generator.dumpStructs( pOutFile );

		fclose( pOutFile );
	}
	else
	{
		std::string jsonSrc = loadFile( path );
		nlohmann::json json = nlohmann::json::parse( jsonSrc );

		//root_t root = json.get<root_t>();
		printf( "test\n" );
	}


	return 0;
}
