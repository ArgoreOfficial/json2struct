#include <stdint.h>
#include <string>
#include <vector>
#ifdef ENABLE_NLOHMANN_INLINE
#include <nlohmann/json.hpp>
#endif

struct transform_t
{
	int32_t mirrorVuid;
	std::vector<float> pos;
	std::vector<float> rot;
	std::vector<float> scale;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json( nlohmann::json& _json, const transform_t& _obj )
{
	_json[ "mirrorVuid" ] = _obj.mirrorVuid;
	_json[ "pos" ] = _obj.pos;
	_json[ "rot" ] = _obj.rot;
	_json[ "scale" ] = _obj.scale;
}
inline void from_json( const nlohmann::json& _json, transform_t& _obj )
{
	if ( _json.contains( "mirrorVuid" ) && _json.at( "mirrorVuid" ).type() != nlohmann::detail::value_t::null ) _obj.mirrorVuid = _json.value<int32_t>( "mirrorVuid", int32_t{} );
	if ( _json.contains( "pos" ) && _json.at( "pos" ).type() != nlohmann::detail::value_t::null ) _obj.pos = _json.value<std::vector<float>>( "pos", std::vector<float>{} );
	if ( _json.contains( "rot" ) && _json.at( "rot" ).type() != nlohmann::detail::value_t::null ) _obj.rot = _json.value<std::vector<float>>( "rot", std::vector<float>{} );
	if ( _json.contains( "scale" ) && _json.at( "scale" ).type() != nlohmann::detail::value_t::null ) _obj.scale = _json.value<std::vector<float>>( "scale", std::vector<float>{} );
}
#endif

struct objects_t
{
	uint32_t flags;
	std::string guid;
	uint32_t plateStructure;
	int32_t pvuid;
	uint32_t structureBlueprintVuid;
	transform_t transform;
	uint32_t vuid;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json( nlohmann::json& _json, const objects_t& _obj )
{
	_json[ "flags" ] = _obj.flags;
	_json[ "guid" ] = _obj.guid;
	_json[ "plateStructure" ] = _obj.plateStructure;
	_json[ "pvuid" ] = _obj.pvuid;
	_json[ "structureBlueprintVuid" ] = _obj.structureBlueprintVuid;
	_json[ "transform" ] = _obj.transform;
	_json[ "vuid" ] = _obj.vuid;
}
inline void from_json( const nlohmann::json& _json, objects_t& _obj )
{
	if ( _json.contains( "flags" ) && _json.at( "flags" ).type() != nlohmann::detail::value_t::null ) _obj.flags = _json.value<uint32_t>( "flags", uint32_t{} );
	if ( _json.contains( "guid" ) && _json.at( "guid" ).type() != nlohmann::detail::value_t::null ) _obj.guid = _json.value<std::string>( "guid", std::string{} );
	if ( _json.contains( "plateStructure" ) && _json.at( "plateStructure" ).type() != nlohmann::detail::value_t::null ) _obj.plateStructure = _json.value<uint32_t>( "plateStructure", uint32_t{} );
	if ( _json.contains( "pvuid" ) && _json.at( "pvuid" ).type() != nlohmann::detail::value_t::null ) _obj.pvuid = _json.value<int32_t>( "pvuid", int32_t{} );
	if ( _json.contains( "structureBlueprintVuid" ) && _json.at( "structureBlueprintVuid" ).type() != nlohmann::detail::value_t::null ) _obj.structureBlueprintVuid = _json.value<uint32_t>( "structureBlueprintVuid", uint32_t{} );
	if ( _json.contains( "transform" ) && _json.at( "transform" ).type() != nlohmann::detail::value_t::null ) _obj.transform = _json.value<transform_t>( "transform", transform_t{} );
	if ( _json.contains( "vuid" ) && _json.at( "vuid" ).type() != nlohmann::detail::value_t::null ) _obj.vuid = _json.value<uint32_t>( "vuid", uint32_t{} );
}
#endif

struct profiles_t
{
	float diameter;
	float height;
	uint32_t model;
	float padding;
	float spacing;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json( nlohmann::json& _json, const profiles_t& _obj )
{
	_json[ "diameter" ] = _obj.diameter;
	_json[ "height" ] = _obj.height;
	_json[ "model" ] = _obj.model;
	_json[ "padding" ] = _obj.padding;
	_json[ "spacing" ] = _obj.spacing;
}
inline void from_json( const nlohmann::json& _json, profiles_t& _obj )
{
	if ( _json.contains( "diameter" ) && _json.at( "diameter" ).type() != nlohmann::detail::value_t::null ) _obj.diameter = _json.value<float>( "diameter", float{} );
	if ( _json.contains( "height" ) && _json.at( "height" ).type() != nlohmann::detail::value_t::null ) _obj.height = _json.value<float>( "height", float{} );
	if ( _json.contains( "model" ) && _json.at( "model" ).type() != nlohmann::detail::value_t::null ) _obj.model = _json.value<uint32_t>( "model", uint32_t{} );
	if ( _json.contains( "padding" ) && _json.at( "padding" ).type() != nlohmann::detail::value_t::null ) _obj.padding = _json.value<float>( "padding", float{} );
	if ( _json.contains( "spacing" ) && _json.at( "spacing" ).type() != nlohmann::detail::value_t::null ) _obj.spacing = _json.value<float>( "spacing", float{} );
}
#endif

struct nodes_t
{
	uint32_t face;
	uint32_t faceOffset;
	uint32_t flags;
	uint32_t next;
	int32_t prev;
	uint32_t profile;
	float u;
	float v;
	float w;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json( nlohmann::json& _json, const nodes_t& _obj )
{
	_json[ "face" ] = _obj.face;
	_json[ "faceOffset" ] = _obj.faceOffset;
	_json[ "flags" ] = _obj.flags;
	_json[ "next" ] = _obj.next;
	_json[ "prev" ] = _obj.prev;
	_json[ "profile" ] = _obj.profile;
	_json[ "u" ] = _obj.u;
	_json[ "v" ] = _obj.v;
	_json[ "w" ] = _obj.w;
}
inline void from_json( const nlohmann::json& _json, nodes_t& _obj )
{
	if ( _json.contains( "face" ) && _json.at( "face" ).type() != nlohmann::detail::value_t::null ) _obj.face = _json.value<uint32_t>( "face", uint32_t{} );
	if ( _json.contains( "faceOffset" ) && _json.at( "faceOffset" ).type() != nlohmann::detail::value_t::null ) _obj.faceOffset = _json.value<uint32_t>( "faceOffset", uint32_t{} );
	if ( _json.contains( "flags" ) && _json.at( "flags" ).type() != nlohmann::detail::value_t::null ) _obj.flags = _json.value<uint32_t>( "flags", uint32_t{} );
	if ( _json.contains( "next" ) && _json.at( "next" ).type() != nlohmann::detail::value_t::null ) _obj.next = _json.value<uint32_t>( "next", uint32_t{} );
	if ( _json.contains( "prev" ) && _json.at( "prev" ).type() != nlohmann::detail::value_t::null ) _obj.prev = _json.value<int32_t>( "prev", int32_t{} );
	if ( _json.contains( "profile" ) && _json.at( "profile" ).type() != nlohmann::detail::value_t::null ) _obj.profile = _json.value<uint32_t>( "profile", uint32_t{} );
	if ( _json.contains( "u" ) && _json.at( "u" ).type() != nlohmann::detail::value_t::null ) _obj.u = _json.value<float>( "u", float{} );
	if ( _json.contains( "v" ) && _json.at( "v" ).type() != nlohmann::detail::value_t::null ) _obj.v = _json.value<float>( "v", float{} );
	if ( _json.contains( "w" ) && _json.at( "w" ).type() != nlohmann::detail::value_t::null ) _obj.w = _json.value<float>( "w", float{} );
}
#endif

struct rivets_t
{
	std::vector<nodes_t> nodes;
	std::vector<profiles_t> profiles;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json( nlohmann::json& _json, const rivets_t& _obj )
{
	_json[ "nodes" ] = _obj.nodes;
	_json[ "profiles" ] = _obj.profiles;
}
inline void from_json( const nlohmann::json& _json, rivets_t& _obj )
{
	if ( _json.contains( "nodes" ) && _json.at( "nodes" ).type() != nlohmann::detail::value_t::null ) _obj.nodes = _json.value<std::vector<nodes_t>>( "nodes", std::vector<nodes_t>{} );
	if ( _json.contains( "profiles" ) && _json.at( "profiles" ).type() != nlohmann::detail::value_t::null ) _obj.profiles = _json.value<std::vector<profiles_t>>( "profiles", std::vector<profiles_t>{} );
}
#endif

struct faces_t
{
	std::vector<uint32_t> t;
	uint32_t te;
	uint32_t tm;
	std::vector<uint32_t> v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json( nlohmann::json& _json, const faces_t& _obj )
{
	_json[ "t" ] = _obj.t;
	_json[ "te" ] = _obj.te;
	_json[ "tm" ] = _obj.tm;
	_json[ "v" ] = _obj.v;
}
inline void from_json( const nlohmann::json& _json, faces_t& _obj )
{
	if ( _json.contains( "t" ) && _json.at( "t" ).type() != nlohmann::detail::value_t::null ) _obj.t = _json.value<std::vector<uint32_t>>( "t", std::vector<uint32_t>{} );
	if ( _json.contains( "te" ) && _json.at( "te" ).type() != nlohmann::detail::value_t::null ) _obj.te = _json.value<uint32_t>( "te", uint32_t{} );
	if ( _json.contains( "tm" ) && _json.at( "tm" ).type() != nlohmann::detail::value_t::null ) _obj.tm = _json.value<uint32_t>( "tm", uint32_t{} );
	if ( _json.contains( "v" ) && _json.at( "v" ).type() != nlohmann::detail::value_t::null ) _obj.v = _json.value<std::vector<uint32_t>>( "v", std::vector<uint32_t>{} );
}
#endif

struct mesh_t
{
	std::vector<uint32_t> edgeFlags;
	std::vector<uint32_t> edges;
	std::vector<faces_t> faces;
	uint32_t majorVersion;
	uint32_t minorVersion;
	std::vector<float> vertices;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json( nlohmann::json& _json, const mesh_t& _obj )
{
	_json[ "edgeFlags" ] = _obj.edgeFlags;
	_json[ "edges" ] = _obj.edges;
	_json[ "faces" ] = _obj.faces;
	_json[ "majorVersion" ] = _obj.majorVersion;
	_json[ "minorVersion" ] = _obj.minorVersion;
	_json[ "vertices" ] = _obj.vertices;
}
inline void from_json( const nlohmann::json& _json, mesh_t& _obj )
{
	if ( _json.contains( "edgeFlags" ) && _json.at( "edgeFlags" ).type() != nlohmann::detail::value_t::null ) _obj.edgeFlags = _json.value<std::vector<uint32_t>>( "edgeFlags", std::vector<uint32_t>{} );
	if ( _json.contains( "edges" ) && _json.at( "edges" ).type() != nlohmann::detail::value_t::null ) _obj.edges = _json.value<std::vector<uint32_t>>( "edges", std::vector<uint32_t>{} );
	if ( _json.contains( "faces" ) && _json.at( "faces" ).type() != nlohmann::detail::value_t::null ) _obj.faces = _json.value<std::vector<faces_t>>( "faces", std::vector<faces_t>{} );
	if ( _json.contains( "majorVersion" ) && _json.at( "majorVersion" ).type() != nlohmann::detail::value_t::null ) _obj.majorVersion = _json.value<uint32_t>( "majorVersion", uint32_t{} );
	if ( _json.contains( "minorVersion" ) && _json.at( "minorVersion" ).type() != nlohmann::detail::value_t::null ) _obj.minorVersion = _json.value<uint32_t>( "minorVersion", uint32_t{} );
	if ( _json.contains( "vertices" ) && _json.at( "vertices" ).type() != nlohmann::detail::value_t::null ) _obj.vertices = _json.value<std::vector<float>>( "vertices", std::vector<float>{} );
}
#endif

struct meshData_t
{
	std::string format;
	uint32_t gridSize;
	mesh_t mesh;
	rivets_t rivets;
	uint32_t smoothAngle;
	std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json( nlohmann::json& _json, const meshData_t& _obj )
{
	_json[ "format" ] = _obj.format;
	_json[ "gridSize" ] = _obj.gridSize;
	_json[ "mesh" ] = _obj.mesh;
	_json[ "rivets" ] = _obj.rivets;
	_json[ "smoothAngle" ] = _obj.smoothAngle;
	_json[ "v" ] = _obj.v;
}
inline void from_json( const nlohmann::json& _json, meshData_t& _obj )
{
	if ( _json.contains( "format" ) && _json.at( "format" ).type() != nlohmann::detail::value_t::null ) _obj.format = _json.value<std::string>( "format", std::string{} );
	if ( _json.contains( "gridSize" ) && _json.at( "gridSize" ).type() != nlohmann::detail::value_t::null ) _obj.gridSize = _json.value<uint32_t>( "gridSize", uint32_t{} );
	if ( _json.contains( "mesh" ) && _json.at( "mesh" ).type() != nlohmann::detail::value_t::null ) _obj.mesh = _json.value<mesh_t>( "mesh", mesh_t{} );
	if ( _json.contains( "rivets" ) && _json.at( "rivets" ).type() != nlohmann::detail::value_t::null ) _obj.rivets = _json.value<rivets_t>( "rivets", rivets_t{} );
	if ( _json.contains( "smoothAngle" ) && _json.at( "smoothAngle" ).type() != nlohmann::detail::value_t::null ) _obj.smoothAngle = _json.value<uint32_t>( "smoothAngle", uint32_t{} );
	if ( _json.contains( "v" ) && _json.at( "v" ).type() != nlohmann::detail::value_t::null ) _obj.v = _json.value<std::string>( "v", std::string{} );
}
#endif

struct meshes_t
{
	meshData_t meshData;
	std::string type;
	uint32_t vuid;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json( nlohmann::json& _json, const meshes_t& _obj )
{
	_json[ "meshData" ] = _obj.meshData;
	_json[ "type" ] = _obj.type;
	_json[ "vuid" ] = _obj.vuid;
}
inline void from_json( const nlohmann::json& _json, meshes_t& _obj )
{
	if ( _json.contains( "meshData" ) && _json.at( "meshData" ).type() != nlohmann::detail::value_t::null ) _obj.meshData = _json.value<meshData_t>( "meshData", meshData_t{} );
	if ( _json.contains( "type" ) && _json.at( "type" ).type() != nlohmann::detail::value_t::null ) _obj.type = _json.value<std::string>( "type", std::string{} );
	if ( _json.contains( "vuid" ) && _json.at( "vuid" ).type() != nlohmann::detail::value_t::null ) _obj.vuid = _json.value<uint32_t>( "vuid", uint32_t{} );
}
#endif

struct header_t
{
	std::string _class;
	std::string creationDate;
	std::string desc;
	std::string gameVersion;
	uint32_t mass;
	std::string name;
	std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json( nlohmann::json& _json, const header_t& _obj )
{
	_json[ "class" ] = _obj._class;
	_json[ "creationDate" ] = _obj.creationDate;
	_json[ "desc" ] = _obj.desc;
	_json[ "gameVersion" ] = _obj.gameVersion;
	_json[ "mass" ] = _obj.mass;
	_json[ "name" ] = _obj.name;
	_json[ "v" ] = _obj.v;
}
inline void from_json( const nlohmann::json& _json, header_t& _obj )
{
	if ( _json.contains( "class" ) && _json.at( "class" ).type() != nlohmann::detail::value_t::null ) _obj._class = _json.value<std::string>( "class", std::string{} );
	if ( _json.contains( "creationDate" ) && _json.at( "creationDate" ).type() != nlohmann::detail::value_t::null ) _obj.creationDate = _json.value<std::string>( "creationDate", std::string{} );
	if ( _json.contains( "desc" ) && _json.at( "desc" ).type() != nlohmann::detail::value_t::null ) _obj.desc = _json.value<std::string>( "desc", std::string{} );
	if ( _json.contains( "gameVersion" ) && _json.at( "gameVersion" ).type() != nlohmann::detail::value_t::null ) _obj.gameVersion = _json.value<std::string>( "gameVersion", std::string{} );
	if ( _json.contains( "mass" ) && _json.at( "mass" ).type() != nlohmann::detail::value_t::null ) _obj.mass = _json.value<uint32_t>( "mass", uint32_t{} );
	if ( _json.contains( "name" ) && _json.at( "name" ).type() != nlohmann::detail::value_t::null ) _obj.name = _json.value<std::string>( "name", std::string{} );
	if ( _json.contains( "v" ) && _json.at( "v" ).type() != nlohmann::detail::value_t::null ) _obj.v = _json.value<std::string>( "v", std::string{} );
}
#endif

struct blueprint_t
{
	float b;
	std::string colourMapUrl;
	float condition;
	std::string description;
	float g;
	float grime;
	float metallic;
	std::string name;
	float r;
	float roughness;
	float saturation;
	float scale;
	std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json( nlohmann::json& _json, const blueprint_t& _obj )
{
	_json[ "b" ] = _obj.b;
	_json[ "colourMapUrl" ] = _obj.colourMapUrl;
	_json[ "condition" ] = _obj.condition;
	_json[ "description" ] = _obj.description;
	_json[ "g" ] = _obj.g;
	_json[ "grime" ] = _obj.grime;
	_json[ "metallic" ] = _obj.metallic;
	_json[ "name" ] = _obj.name;
	_json[ "r" ] = _obj.r;
	_json[ "roughness" ] = _obj.roughness;
	_json[ "saturation" ] = _obj.saturation;
	_json[ "scale" ] = _obj.scale;
	_json[ "v" ] = _obj.v;
}
inline void from_json( const nlohmann::json& _json, blueprint_t& _obj )
{
	if ( _json.contains( "b" ) && _json.at( "b" ).type() != nlohmann::detail::value_t::null ) _obj.b = _json.value<float>( "b", float{} );
	if ( _json.contains( "colourMapUrl" ) && _json.at( "colourMapUrl" ).type() != nlohmann::detail::value_t::null ) _obj.colourMapUrl = _json.value<std::string>( "colourMapUrl", std::string{} );
	if ( _json.contains( "condition" ) && _json.at( "condition" ).type() != nlohmann::detail::value_t::null ) _obj.condition = _json.value<float>( "condition", float{} );
	if ( _json.contains( "description" ) && _json.at( "description" ).type() != nlohmann::detail::value_t::null ) _obj.description = _json.value<std::string>( "description", std::string{} );
	if ( _json.contains( "g" ) && _json.at( "g" ).type() != nlohmann::detail::value_t::null ) _obj.g = _json.value<float>( "g", float{} );
	if ( _json.contains( "grime" ) && _json.at( "grime" ).type() != nlohmann::detail::value_t::null ) _obj.grime = _json.value<float>( "grime", float{} );
	if ( _json.contains( "metallic" ) && _json.at( "metallic" ).type() != nlohmann::detail::value_t::null ) _obj.metallic = _json.value<float>( "metallic", float{} );
	if ( _json.contains( "name" ) && _json.at( "name" ).type() != nlohmann::detail::value_t::null ) _obj.name = _json.value<std::string>( "name", std::string{} );
	if ( _json.contains( "r" ) && _json.at( "r" ).type() != nlohmann::detail::value_t::null ) _obj.r = _json.value<float>( "r", float{} );
	if ( _json.contains( "roughness" ) && _json.at( "roughness" ).type() != nlohmann::detail::value_t::null ) _obj.roughness = _json.value<float>( "roughness", float{} );
	if ( _json.contains( "saturation" ) && _json.at( "saturation" ).type() != nlohmann::detail::value_t::null ) _obj.saturation = _json.value<float>( "saturation", float{} );
	if ( _json.contains( "scale" ) && _json.at( "scale" ).type() != nlohmann::detail::value_t::null ) _obj.scale = _json.value<float>( "scale", float{} );
	if ( _json.contains( "v" ) && _json.at( "v" ).type() != nlohmann::detail::value_t::null ) _obj.v = _json.value<std::string>( "v", std::string{} );
}
#endif

struct blueprints_t
{
	blueprint_t blueprint;
	uint32_t id;
	std::string type;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json( nlohmann::json& _json, const blueprints_t& _obj )
{
	_json[ "blueprint" ] = _obj.blueprint;
	_json[ "id" ] = _obj.id;
	_json[ "type" ] = _obj.type;
}
inline void from_json( const nlohmann::json& _json, blueprints_t& _obj )
{
	if ( _json.contains( "blueprint" ) && _json.at( "blueprint" ).type() != nlohmann::detail::value_t::null ) _obj.blueprint = _json.value<blueprint_t>( "blueprint", blueprint_t{} );
	if ( _json.contains( "id" ) && _json.at( "id" ).type() != nlohmann::detail::value_t::null ) _obj.id = _json.value<uint32_t>( "id", uint32_t{} );
	if ( _json.contains( "type" ) && _json.at( "type" ).type() != nlohmann::detail::value_t::null ) _obj.type = _json.value<std::string>( "type", std::string{} );
}
#endif

struct root_t
{
	std::vector<blueprints_t> blueprints;
	header_t header;
	std::vector<meshes_t> meshes;
	std::vector<objects_t> objects;
	std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json( nlohmann::json& _json, const root_t& _obj )
{
	_json[ "blueprints" ] = _obj.blueprints;
	_json[ "header" ] = _obj.header;
	_json[ "meshes" ] = _obj.meshes;
	_json[ "objects" ] = _obj.objects;
	_json[ "v" ] = _obj.v;
}
inline void from_json( const nlohmann::json& _json, root_t& _obj )
{
	if ( _json.contains( "blueprints" ) && _json.at( "blueprints" ).type() != nlohmann::detail::value_t::null ) _obj.blueprints = _json.value<std::vector<blueprints_t>>( "blueprints", std::vector<blueprints_t>{} );
	if ( _json.contains( "header" ) && _json.at( "header" ).type() != nlohmann::detail::value_t::null ) _obj.header = _json.value<header_t>( "header", header_t{} );
	if ( _json.contains( "meshes" ) && _json.at( "meshes" ).type() != nlohmann::detail::value_t::null ) _obj.meshes = _json.value<std::vector<meshes_t>>( "meshes", std::vector<meshes_t>{} );
	if ( _json.contains( "objects" ) && _json.at( "objects" ).type() != nlohmann::detail::value_t::null ) _obj.objects = _json.value<std::vector<objects_t>>( "objects", std::vector<objects_t>{} );
	if ( _json.contains( "v" ) && _json.at( "v" ).type() != nlohmann::detail::value_t::null ) _obj.v = _json.value<std::string>( "v", std::string{} );
}
#endif

