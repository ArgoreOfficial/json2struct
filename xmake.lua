set_languages( "cxx20" )
set_symbols( "debug" );

add_rules("plugin.vsxmake.autoupdate")

set_targetdir "bin"
set_objectdir "build/obj"

add_requires("nlohmann_json")

target "json2struct"
    set_kind "binary"
    set_default(true)

    add_packages("nlohmann_json")

    add_files( "src/**.cpp" )
    add_headerfiles( "src/**.h" )
target_end()