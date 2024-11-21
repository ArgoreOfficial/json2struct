#pragma once
#define _GENERATED_H
#include <stdint.h>
#include <string>
#include <vector>
#ifdef ENABLE_NLOHMANN_INLINE
#include <nlohmann/json.hpp>
#define NLOHMANN_SAFE_GET( _key, _val ) if ( _json.contains(_key) && _json.at( _key ).type() != nlohmann::detail::value_t::null ) _json.at(_key).get_to(_val)
#endif

struct segments_t
{
    uint32_t depth;
    uint32_t diameter;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const segments_t& _obj) {
    _json["depth"] = _obj.depth;
    _json["diameter"] = _obj.diameter;
}
inline void from_json(const nlohmann::json& _json, segments_t& _obj) {
    NLOHMANN_SAFE_GET( "depth", _obj.depth );
    NLOHMANN_SAFE_GET( "diameter", _obj.diameter );
}
#endif

struct azimuth_t
{
    uint32_t flags;
    float max;
    float min;
    float ratio;
    float torqueMultiplier;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const azimuth_t& _obj) {
    _json["flags"] = _obj.flags;
    _json["max"] = _obj.max;
    _json["min"] = _obj.min;
    _json["ratio"] = _obj.ratio;
    _json["torqueMultiplier"] = _obj.torqueMultiplier;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, azimuth_t& _obj) {
    NLOHMANN_SAFE_GET( "flags", _obj.flags );
    NLOHMANN_SAFE_GET( "max", _obj.max );
    NLOHMANN_SAFE_GET( "min", _obj.min );
    NLOHMANN_SAFE_GET( "ratio", _obj.ratio );
    NLOHMANN_SAFE_GET( "torqueMultiplier", _obj.torqueMultiplier );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct elevation_t
{
    uint32_t flags;
    float max;
    float min;
    float ratio;
    float torqueMultiplier;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const elevation_t& _obj) {
    _json["flags"] = _obj.flags;
    _json["max"] = _obj.max;
    _json["min"] = _obj.min;
    _json["ratio"] = _obj.ratio;
    _json["torqueMultiplier"] = _obj.torqueMultiplier;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, elevation_t& _obj) {
    NLOHMANN_SAFE_GET( "flags", _obj.flags );
    NLOHMANN_SAFE_GET( "max", _obj.max );
    NLOHMANN_SAFE_GET( "min", _obj.min );
    NLOHMANN_SAFE_GET( "ratio", _obj.ratio );
    NLOHMANN_SAFE_GET( "torqueMultiplier", _obj.torqueMultiplier );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct definition_t
{
    uint32_t penetratorConstant;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const definition_t& _obj) {
    _json["penetratorConstant"] = _obj.penetratorConstant;
}
inline void from_json(const nlohmann::json& _json, definition_t& _obj) {
    NLOHMANN_SAFE_GET( "penetratorConstant", _obj.penetratorConstant );
}
#endif

struct definition_t_t
{
    uint32_t length;
    uint32_t penetratorConstant;
    float delay;
    float explosivePower;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const definition_t_t& _obj) {
    _json["length"] = _obj.length;
    _json["penetratorConstant"] = _obj.penetratorConstant;
    _json["delay"] = _obj.delay;
    _json["explosivePower"] = _obj.explosivePower;
}
inline void from_json(const nlohmann::json& _json, definition_t_t& _obj) {
    NLOHMANN_SAFE_GET( "length", _obj.length );
    NLOHMANN_SAFE_GET( "penetratorConstant", _obj.penetratorConstant );
    NLOHMANN_SAFE_GET( "delay", _obj.delay );
    NLOHMANN_SAFE_GET( "explosivePower", _obj.explosivePower );
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
inline void to_json(nlohmann::json& _json, const header_t& _obj) {
    _json["class"] = _obj._class;
    _json["creationDate"] = _obj.creationDate;
    _json["desc"] = _obj.desc;
    _json["gameVersion"] = _obj.gameVersion;
    _json["mass"] = _obj.mass;
    _json["name"] = _obj.name;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, header_t& _obj) {
    NLOHMANN_SAFE_GET( "class", _obj._class );
    NLOHMANN_SAFE_GET( "creationDate", _obj.creationDate );
    NLOHMANN_SAFE_GET( "desc", _obj.desc );
    NLOHMANN_SAFE_GET( "gameVersion", _obj.gameVersion );
    NLOHMANN_SAFE_GET( "mass", _obj.mass );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "v", _obj.v );
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
inline void to_json(nlohmann::json& _json, const faces_t& _obj) {
    _json["t"] = _obj.t;
    _json["te"] = _obj.te;
    _json["tm"] = _obj.tm;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, faces_t& _obj) {
    NLOHMANN_SAFE_GET( "t", _obj.t );
    NLOHMANN_SAFE_GET( "te", _obj.te );
    NLOHMANN_SAFE_GET( "tm", _obj.tm );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct faces_t_t
{
    std::vector<uint32_t> t;
    uint32_t te;
    int32_t tm;
    std::vector<uint32_t> v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const faces_t_t& _obj) {
    _json["t"] = _obj.t;
    _json["te"] = _obj.te;
    _json["tm"] = _obj.tm;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, faces_t_t& _obj) {
    NLOHMANN_SAFE_GET( "t", _obj.t );
    NLOHMANN_SAFE_GET( "te", _obj.te );
    NLOHMANN_SAFE_GET( "tm", _obj.tm );
    NLOHMANN_SAFE_GET( "v", _obj.v );
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
inline void to_json(nlohmann::json& _json, const nodes_t& _obj) {
    _json["face"] = _obj.face;
    _json["faceOffset"] = _obj.faceOffset;
    _json["flags"] = _obj.flags;
    _json["next"] = _obj.next;
    _json["prev"] = _obj.prev;
    _json["profile"] = _obj.profile;
    _json["u"] = _obj.u;
    _json["v"] = _obj.v;
    _json["w"] = _obj.w;
}
inline void from_json(const nlohmann::json& _json, nodes_t& _obj) {
    NLOHMANN_SAFE_GET( "face", _obj.face );
    NLOHMANN_SAFE_GET( "faceOffset", _obj.faceOffset );
    NLOHMANN_SAFE_GET( "flags", _obj.flags );
    NLOHMANN_SAFE_GET( "next", _obj.next );
    NLOHMANN_SAFE_GET( "prev", _obj.prev );
    NLOHMANN_SAFE_GET( "profile", _obj.profile );
    NLOHMANN_SAFE_GET( "u", _obj.u );
    NLOHMANN_SAFE_GET( "v", _obj.v );
    NLOHMANN_SAFE_GET( "w", _obj.w );
}
#endif

struct nodes_t_t
{
    uint32_t face;
    uint32_t faceOffset;
    uint32_t flags;
    int32_t next;
    uint32_t prev;
    uint32_t profile;
    float u;
    float v;
    float w;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const nodes_t_t& _obj) {
    _json["face"] = _obj.face;
    _json["faceOffset"] = _obj.faceOffset;
    _json["flags"] = _obj.flags;
    _json["next"] = _obj.next;
    _json["prev"] = _obj.prev;
    _json["profile"] = _obj.profile;
    _json["u"] = _obj.u;
    _json["v"] = _obj.v;
    _json["w"] = _obj.w;
}
inline void from_json(const nlohmann::json& _json, nodes_t_t& _obj) {
    NLOHMANN_SAFE_GET( "face", _obj.face );
    NLOHMANN_SAFE_GET( "faceOffset", _obj.faceOffset );
    NLOHMANN_SAFE_GET( "flags", _obj.flags );
    NLOHMANN_SAFE_GET( "next", _obj.next );
    NLOHMANN_SAFE_GET( "prev", _obj.prev );
    NLOHMANN_SAFE_GET( "profile", _obj.profile );
    NLOHMANN_SAFE_GET( "u", _obj.u );
    NLOHMANN_SAFE_GET( "v", _obj.v );
    NLOHMANN_SAFE_GET( "w", _obj.w );
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
inline void to_json(nlohmann::json& _json, const profiles_t& _obj) {
    _json["diameter"] = _obj.diameter;
    _json["height"] = _obj.height;
    _json["model"] = _obj.model;
    _json["padding"] = _obj.padding;
    _json["spacing"] = _obj.spacing;
}
inline void from_json(const nlohmann::json& _json, profiles_t& _obj) {
    NLOHMANN_SAFE_GET( "diameter", _obj.diameter );
    NLOHMANN_SAFE_GET( "height", _obj.height );
    NLOHMANN_SAFE_GET( "model", _obj.model );
    NLOHMANN_SAFE_GET( "padding", _obj.padding );
    NLOHMANN_SAFE_GET( "spacing", _obj.spacing );
}
#endif

struct profiles_t_t
{
    float diameter;
    float height;
    uint32_t model;
    float padding;
    float spacing;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const profiles_t_t& _obj) {
    _json["diameter"] = _obj.diameter;
    _json["height"] = _obj.height;
    _json["model"] = _obj.model;
    _json["padding"] = _obj.padding;
    _json["spacing"] = _obj.spacing;
}
inline void from_json(const nlohmann::json& _json, profiles_t_t& _obj) {
    NLOHMANN_SAFE_GET( "diameter", _obj.diameter );
    NLOHMANN_SAFE_GET( "height", _obj.height );
    NLOHMANN_SAFE_GET( "model", _obj.model );
    NLOHMANN_SAFE_GET( "padding", _obj.padding );
    NLOHMANN_SAFE_GET( "spacing", _obj.spacing );
}
#endif

struct transform_t
{
    int32_t mirrorVuid;
    std::vector<float> pos;
    std::vector<float> rot;
    std::vector<float> scale;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const transform_t& _obj) {
    _json["mirrorVuid"] = _obj.mirrorVuid;
    _json["pos"] = _obj.pos;
    _json["rot"] = _obj.rot;
    _json["scale"] = _obj.scale;
}
inline void from_json(const nlohmann::json& _json, transform_t& _obj) {
    NLOHMANN_SAFE_GET( "mirrorVuid", _obj.mirrorVuid );
    NLOHMANN_SAFE_GET( "pos", _obj.pos );
    NLOHMANN_SAFE_GET( "rot", _obj.rot );
    NLOHMANN_SAFE_GET( "scale", _obj.scale );
}
#endif

struct clutchBrakingBlueprint_t
{
    uint32_t engineID;
    uint32_t leftPropulsionID;
    uint32_t rightPropulsionID;
    uint32_t transmissionID;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const clutchBrakingBlueprint_t& _obj) {
    _json["engineID"] = _obj.engineID;
    _json["leftPropulsionID"] = _obj.leftPropulsionID;
    _json["rightPropulsionID"] = _obj.rightPropulsionID;
    _json["transmissionID"] = _obj.transmissionID;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, clutchBrakingBlueprint_t& _obj) {
    NLOHMANN_SAFE_GET( "engineID", _obj.engineID );
    NLOHMANN_SAFE_GET( "leftPropulsionID", _obj.leftPropulsionID );
    NLOHMANN_SAFE_GET( "rightPropulsionID", _obj.rightPropulsionID );
    NLOHMANN_SAFE_GET( "transmissionID", _obj.transmissionID );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct connections_t
{
    uint32_t flags;
    uint32_t id;
    uint32_t providerID;
    uint32_t receiverID;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const connections_t& _obj) {
    _json["flags"] = _obj.flags;
    _json["id"] = _obj.id;
    _json["providerID"] = _obj.providerID;
    _json["receiverID"] = _obj.receiverID;
}
inline void from_json(const nlohmann::json& _json, connections_t& _obj) {
    NLOHMANN_SAFE_GET( "flags", _obj.flags );
    NLOHMANN_SAFE_GET( "id", _obj.id );
    NLOHMANN_SAFE_GET( "providerID", _obj.providerID );
    NLOHMANN_SAFE_GET( "receiverID", _obj.receiverID );
}
#endif

struct connections_t_t
{
    uint32_t flags;
    uint32_t id;
    uint32_t providerID;
    uint32_t receiverID;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const connections_t_t& _obj) {
    _json["flags"] = _obj.flags;
    _json["id"] = _obj.id;
    _json["providerID"] = _obj.providerID;
    _json["receiverID"] = _obj.receiverID;
}
inline void from_json(const nlohmann::json& _json, connections_t_t& _obj) {
    NLOHMANN_SAFE_GET( "flags", _obj.flags );
    NLOHMANN_SAFE_GET( "id", _obj.id );
    NLOHMANN_SAFE_GET( "providerID", _obj.providerID );
    NLOHMANN_SAFE_GET( "receiverID", _obj.receiverID );
}
#endif

struct modules_t
{
    uint32_t behaviourID;
    uint32_t flags;
    uint32_t id;
    int32_t mirrorID;
    uint32_t type;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const modules_t& _obj) {
    _json["behaviourID"] = _obj.behaviourID;
    _json["flags"] = _obj.flags;
    _json["id"] = _obj.id;
    _json["mirrorID"] = _obj.mirrorID;
    _json["type"] = _obj.type;
}
inline void from_json(const nlohmann::json& _json, modules_t& _obj) {
    NLOHMANN_SAFE_GET( "behaviourID", _obj.behaviourID );
    NLOHMANN_SAFE_GET( "flags", _obj.flags );
    NLOHMANN_SAFE_GET( "id", _obj.id );
    NLOHMANN_SAFE_GET( "mirrorID", _obj.mirrorID );
    NLOHMANN_SAFE_GET( "type", _obj.type );
}
#endif

struct modules_t_t
{
    int32_t behaviourID;
    uint32_t flags;
    uint32_t id;
    int32_t mirrorID;
    uint32_t type;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const modules_t_t& _obj) {
    _json["behaviourID"] = _obj.behaviourID;
    _json["flags"] = _obj.flags;
    _json["id"] = _obj.id;
    _json["mirrorID"] = _obj.mirrorID;
    _json["type"] = _obj.type;
}
inline void from_json(const nlohmann::json& _json, modules_t_t& _obj) {
    NLOHMANN_SAFE_GET( "behaviourID", _obj.behaviourID );
    NLOHMANN_SAFE_GET( "flags", _obj.flags );
    NLOHMANN_SAFE_GET( "id", _obj.id );
    NLOHMANN_SAFE_GET( "mirrorID", _obj.mirrorID );
    NLOHMANN_SAFE_GET( "type", _obj.type );
}
#endif

struct ports_t
{
    uint32_t flags;
    uint32_t id;
    uint32_t moduleID;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const ports_t& _obj) {
    _json["flags"] = _obj.flags;
    _json["id"] = _obj.id;
    _json["moduleID"] = _obj.moduleID;
}
inline void from_json(const nlohmann::json& _json, ports_t& _obj) {
    NLOHMANN_SAFE_GET( "flags", _obj.flags );
    NLOHMANN_SAFE_GET( "id", _obj.id );
    NLOHMANN_SAFE_GET( "moduleID", _obj.moduleID );
}
#endif

struct ports_t_t
{
    uint32_t flags;
    uint32_t id;
    uint32_t moduleID;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const ports_t_t& _obj) {
    _json["flags"] = _obj.flags;
    _json["id"] = _obj.id;
    _json["moduleID"] = _obj.moduleID;
}
inline void from_json(const nlohmann::json& _json, ports_t_t& _obj) {
    NLOHMANN_SAFE_GET( "flags", _obj.flags );
    NLOHMANN_SAFE_GET( "id", _obj.id );
    NLOHMANN_SAFE_GET( "moduleID", _obj.moduleID );
}
#endif

struct transform_t_t
{
    int32_t mirrorVuid;
    std::vector<float> pos;
    std::vector<float> rot;
    std::vector<float> scale;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const transform_t_t& _obj) {
    _json["mirrorVuid"] = _obj.mirrorVuid;
    _json["pos"] = _obj.pos;
    _json["rot"] = _obj.rot;
    _json["scale"] = _obj.scale;
}
inline void from_json(const nlohmann::json& _json, transform_t_t& _obj) {
    NLOHMANN_SAFE_GET( "mirrorVuid", _obj.mirrorVuid );
    NLOHMANN_SAFE_GET( "pos", _obj.pos );
    NLOHMANN_SAFE_GET( "rot", _obj.rot );
    NLOHMANN_SAFE_GET( "scale", _obj.scale );
}
#endif

struct trackInstanceInfo_t
{
    uint32_t idlerMountVuid;
    bool leftSide;
    uint32_t roadwheelArrayVuid;
    uint32_t rollerArrayVuid;
    uint32_t sprocketMountVuid;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const trackInstanceInfo_t& _obj) {
    _json["idlerMountVuid"] = _obj.idlerMountVuid;
    _json["leftSide"] = _obj.leftSide;
    _json["roadwheelArrayVuid"] = _obj.roadwheelArrayVuid;
    _json["rollerArrayVuid"] = _obj.rollerArrayVuid;
    _json["sprocketMountVuid"] = _obj.sprocketMountVuid;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, trackInstanceInfo_t& _obj) {
    NLOHMANN_SAFE_GET( "idlerMountVuid", _obj.idlerMountVuid );
    NLOHMANN_SAFE_GET( "leftSide", _obj.leftSide );
    NLOHMANN_SAFE_GET( "roadwheelArrayVuid", _obj.roadwheelArrayVuid );
    NLOHMANN_SAFE_GET( "rollerArrayVuid", _obj.rollerArrayVuid );
    NLOHMANN_SAFE_GET( "sprocketMountVuid", _obj.sprocketMountVuid );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct trackInstanceInfo_t_t
{
    uint32_t idlerMountVuid;
    bool leftSide;
    uint32_t roadwheelArrayVuid;
    uint32_t rollerArrayVuid;
    uint32_t sprocketMountVuid;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const trackInstanceInfo_t_t& _obj) {
    _json["idlerMountVuid"] = _obj.idlerMountVuid;
    _json["leftSide"] = _obj.leftSide;
    _json["roadwheelArrayVuid"] = _obj.roadwheelArrayVuid;
    _json["rollerArrayVuid"] = _obj.rollerArrayVuid;
    _json["sprocketMountVuid"] = _obj.sprocketMountVuid;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, trackInstanceInfo_t_t& _obj) {
    NLOHMANN_SAFE_GET( "idlerMountVuid", _obj.idlerMountVuid );
    NLOHMANN_SAFE_GET( "leftSide", _obj.leftSide );
    NLOHMANN_SAFE_GET( "roadwheelArrayVuid", _obj.roadwheelArrayVuid );
    NLOHMANN_SAFE_GET( "rollerArrayVuid", _obj.rollerArrayVuid );
    NLOHMANN_SAFE_GET( "sprocketMountVuid", _obj.sprocketMountVuid );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct mantletBlueprint_t
{
    uint32_t drive_vuid;
    int32_t shield_vuid;
    uint32_t trunnions_vuid;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const mantletBlueprint_t& _obj) {
    _json["drive_vuid"] = _obj.drive_vuid;
    _json["shield_vuid"] = _obj.shield_vuid;
    _json["trunnions_vuid"] = _obj.trunnions_vuid;
}
inline void from_json(const nlohmann::json& _json, mantletBlueprint_t& _obj) {
    NLOHMANN_SAFE_GET( "drive_vuid", _obj.drive_vuid );
    NLOHMANN_SAFE_GET( "shield_vuid", _obj.shield_vuid );
    NLOHMANN_SAFE_GET( "trunnions_vuid", _obj.trunnions_vuid );
}
#endif

struct segments_t_t
{
    uint32_t depth;
    uint32_t diameter;
    std::vector<segments_t> segments;
    std::string v;
    uint32_t l;
    uint32_t t0;
    uint32_t t1;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const segments_t_t& _obj) {
    _json["depth"] = _obj.depth;
    _json["diameter"] = _obj.diameter;
    _json["segments"] = _obj.segments;
    _json["v"] = _obj.v;
    _json["l"] = _obj.l;
    _json["t0"] = _obj.t0;
    _json["t1"] = _obj.t1;
}
inline void from_json(const nlohmann::json& _json, segments_t_t& _obj) {
    NLOHMANN_SAFE_GET( "depth", _obj.depth );
    NLOHMANN_SAFE_GET( "diameter", _obj.diameter );
    NLOHMANN_SAFE_GET( "segments", _obj.segments );
    NLOHMANN_SAFE_GET( "v", _obj.v );
    NLOHMANN_SAFE_GET( "l", _obj.l );
    NLOHMANN_SAFE_GET( "t0", _obj.t0 );
    NLOHMANN_SAFE_GET( "t1", _obj.t1 );
}
#endif

struct functions_t
{
    definition_t definition;
    std::string id;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const functions_t& _obj) {
    _json["definition"] = _obj.definition;
    _json["id"] = _obj.id;
}
inline void from_json(const nlohmann::json& _json, functions_t& _obj) {
    NLOHMANN_SAFE_GET( "definition", _obj.definition );
    NLOHMANN_SAFE_GET( "id", _obj.id );
}
#endif

struct functions_t_t
{
    definition_t definition;
    std::string id;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const functions_t_t& _obj) {
    _json["definition"] = _obj.definition;
    _json["id"] = _obj.id;
}
inline void from_json(const nlohmann::json& _json, functions_t_t& _obj) {
    NLOHMANN_SAFE_GET( "definition", _obj.definition );
    NLOHMANN_SAFE_GET( "id", _obj.id );
}
#endif

struct generatedProjectiles_t_t
{
    std::vector<functions_t> functions;
    std::string projectileTypeGuid;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const generatedProjectiles_t_t& _obj) {
    _json["functions"] = _obj.functions;
    _json["projectileTypeGuid"] = _obj.projectileTypeGuid;
}
inline void from_json(const nlohmann::json& _json, generatedProjectiles_t_t& _obj) {
    NLOHMANN_SAFE_GET( "functions", _obj.functions );
    NLOHMANN_SAFE_GET( "projectileTypeGuid", _obj.projectileTypeGuid );
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
inline void to_json(nlohmann::json& _json, const mesh_t& _obj) {
    _json["edgeFlags"] = _obj.edgeFlags;
    _json["edges"] = _obj.edges;
    _json["faces"] = _obj.faces;
    _json["majorVersion"] = _obj.majorVersion;
    _json["minorVersion"] = _obj.minorVersion;
    _json["vertices"] = _obj.vertices;
}
inline void from_json(const nlohmann::json& _json, mesh_t& _obj) {
    NLOHMANN_SAFE_GET( "edgeFlags", _obj.edgeFlags );
    NLOHMANN_SAFE_GET( "edges", _obj.edges );
    NLOHMANN_SAFE_GET( "faces", _obj.faces );
    NLOHMANN_SAFE_GET( "majorVersion", _obj.majorVersion );
    NLOHMANN_SAFE_GET( "minorVersion", _obj.minorVersion );
    NLOHMANN_SAFE_GET( "vertices", _obj.vertices );
}
#endif

struct rivets_t
{
    std::vector<nodes_t> nodes;
    std::vector<profiles_t> profiles;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const rivets_t& _obj) {
    _json["nodes"] = _obj.nodes;
    _json["profiles"] = _obj.profiles;
}
inline void from_json(const nlohmann::json& _json, rivets_t& _obj) {
    NLOHMANN_SAFE_GET( "nodes", _obj.nodes );
    NLOHMANN_SAFE_GET( "profiles", _obj.profiles );
}
#endif

struct mesh_t_t
{
    std::vector<uint32_t> edgeFlags;
    std::vector<uint32_t> edges;
    std::vector<faces_t> faces;
    uint32_t majorVersion;
    uint32_t minorVersion;
    std::vector<float> vertices;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const mesh_t_t& _obj) {
    _json["edgeFlags"] = _obj.edgeFlags;
    _json["edges"] = _obj.edges;
    _json["faces"] = _obj.faces;
    _json["majorVersion"] = _obj.majorVersion;
    _json["minorVersion"] = _obj.minorVersion;
    _json["vertices"] = _obj.vertices;
}
inline void from_json(const nlohmann::json& _json, mesh_t_t& _obj) {
    NLOHMANN_SAFE_GET( "edgeFlags", _obj.edgeFlags );
    NLOHMANN_SAFE_GET( "edges", _obj.edges );
    NLOHMANN_SAFE_GET( "faces", _obj.faces );
    NLOHMANN_SAFE_GET( "majorVersion", _obj.majorVersion );
    NLOHMANN_SAFE_GET( "minorVersion", _obj.minorVersion );
    NLOHMANN_SAFE_GET( "vertices", _obj.vertices );
}
#endif

struct rivets_t_t
{
    std::vector<nodes_t> nodes;
    std::vector<profiles_t> profiles;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const rivets_t_t& _obj) {
    _json["nodes"] = _obj.nodes;
    _json["profiles"] = _obj.profiles;
}
inline void from_json(const nlohmann::json& _json, rivets_t_t& _obj) {
    NLOHMANN_SAFE_GET( "nodes", _obj.nodes );
    NLOHMANN_SAFE_GET( "profiles", _obj.profiles );
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
inline void to_json(nlohmann::json& _json, const objects_t& _obj) {
    _json["flags"] = _obj.flags;
    _json["guid"] = _obj.guid;
    _json["plateStructure"] = _obj.plateStructure;
    _json["pvuid"] = _obj.pvuid;
    _json["structureBlueprintVuid"] = _obj.structureBlueprintVuid;
    _json["transform"] = _obj.transform;
    _json["vuid"] = _obj.vuid;
}
inline void from_json(const nlohmann::json& _json, objects_t& _obj) {
    NLOHMANN_SAFE_GET( "flags", _obj.flags );
    NLOHMANN_SAFE_GET( "guid", _obj.guid );
    NLOHMANN_SAFE_GET( "plateStructure", _obj.plateStructure );
    NLOHMANN_SAFE_GET( "pvuid", _obj.pvuid );
    NLOHMANN_SAFE_GET( "structureBlueprintVuid", _obj.structureBlueprintVuid );
    NLOHMANN_SAFE_GET( "transform", _obj.transform );
    NLOHMANN_SAFE_GET( "vuid", _obj.vuid );
}
#endif

struct layout_t
{
    std::vector<connections_t> connections;
    uint32_t majorVersion;
    uint32_t minorVersion;
    std::vector<float> modulePositions;
    std::vector<float> moduleRotations;
    std::vector<modules_t> modules;
    std::vector<float> portDirections;
    std::vector<float> portOffsets;
    std::vector<ports_t> ports;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const layout_t& _obj) {
    _json["connections"] = _obj.connections;
    _json["majorVersion"] = _obj.majorVersion;
    _json["minorVersion"] = _obj.minorVersion;
    _json["modulePositions"] = _obj.modulePositions;
    _json["moduleRotations"] = _obj.moduleRotations;
    _json["modules"] = _obj.modules;
    _json["portDirections"] = _obj.portDirections;
    _json["portOffsets"] = _obj.portOffsets;
    _json["ports"] = _obj.ports;
}
inline void from_json(const nlohmann::json& _json, layout_t& _obj) {
    NLOHMANN_SAFE_GET( "connections", _obj.connections );
    NLOHMANN_SAFE_GET( "majorVersion", _obj.majorVersion );
    NLOHMANN_SAFE_GET( "minorVersion", _obj.minorVersion );
    NLOHMANN_SAFE_GET( "modulePositions", _obj.modulePositions );
    NLOHMANN_SAFE_GET( "moduleRotations", _obj.moduleRotations );
    NLOHMANN_SAFE_GET( "modules", _obj.modules );
    NLOHMANN_SAFE_GET( "portDirections", _obj.portDirections );
    NLOHMANN_SAFE_GET( "portOffsets", _obj.portOffsets );
    NLOHMANN_SAFE_GET( "ports", _obj.ports );
}
#endif

struct generatedProjectiles_t
{
    std::vector<functions_t> functions;
    std::string projectileTypeGuid;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const generatedProjectiles_t& _obj) {
    _json["functions"] = _obj.functions;
    _json["projectileTypeGuid"] = _obj.projectileTypeGuid;
}
inline void from_json(const nlohmann::json& _json, generatedProjectiles_t& _obj) {
    NLOHMANN_SAFE_GET( "functions", _obj.functions );
    NLOHMANN_SAFE_GET( "projectileTypeGuid", _obj.projectileTypeGuid );
}
#endif

struct plateStructureMesh_t
{
    std::string format;
    uint32_t gridSize;
    mesh_t mesh;
    rivets_t rivets;
    uint32_t smoothAngle;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const plateStructureMesh_t& _obj) {
    _json["format"] = _obj.format;
    _json["gridSize"] = _obj.gridSize;
    _json["mesh"] = _obj.mesh;
    _json["rivets"] = _obj.rivets;
    _json["smoothAngle"] = _obj.smoothAngle;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, plateStructureMesh_t& _obj) {
    NLOHMANN_SAFE_GET( "format", _obj.format );
    NLOHMANN_SAFE_GET( "gridSize", _obj.gridSize );
    NLOHMANN_SAFE_GET( "mesh", _obj.mesh );
    NLOHMANN_SAFE_GET( "rivets", _obj.rivets );
    NLOHMANN_SAFE_GET( "smoothAngle", _obj.smoothAngle );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct powertrainBlueprint_t
{
    uint32_t controlVuid;
    layout_t layout;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const powertrainBlueprint_t& _obj) {
    _json["controlVuid"] = _obj.controlVuid;
    _json["layout"] = _obj.layout;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, powertrainBlueprint_t& _obj) {
    NLOHMANN_SAFE_GET( "controlVuid", _obj.controlVuid );
    NLOHMANN_SAFE_GET( "layout", _obj.layout );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct paintJob_t
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
inline void to_json(nlohmann::json& _json, const paintJob_t& _obj) {
    _json["b"] = _obj.b;
    _json["colourMapUrl"] = _obj.colourMapUrl;
    _json["condition"] = _obj.condition;
    _json["description"] = _obj.description;
    _json["g"] = _obj.g;
    _json["grime"] = _obj.grime;
    _json["metallic"] = _obj.metallic;
    _json["name"] = _obj.name;
    _json["r"] = _obj.r;
    _json["roughness"] = _obj.roughness;
    _json["saturation"] = _obj.saturation;
    _json["scale"] = _obj.scale;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, paintJob_t& _obj) {
    NLOHMANN_SAFE_GET( "b", _obj.b );
    NLOHMANN_SAFE_GET( "colourMapUrl", _obj.colourMapUrl );
    NLOHMANN_SAFE_GET( "condition", _obj.condition );
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "g", _obj.g );
    NLOHMANN_SAFE_GET( "grime", _obj.grime );
    NLOHMANN_SAFE_GET( "metallic", _obj.metallic );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "r", _obj.r );
    NLOHMANN_SAFE_GET( "roughness", _obj.roughness );
    NLOHMANN_SAFE_GET( "saturation", _obj.saturation );
    NLOHMANN_SAFE_GET( "scale", _obj.scale );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct chassis_t
{
    std::string description;
    uint32_t groundClearance;
    uint32_t length;
    std::string name;
    std::string v;
    uint32_t width;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const chassis_t& _obj) {
    _json["description"] = _obj.description;
    _json["groundClearance"] = _obj.groundClearance;
    _json["length"] = _obj.length;
    _json["name"] = _obj.name;
    _json["v"] = _obj.v;
    _json["width"] = _obj.width;
}
inline void from_json(const nlohmann::json& _json, chassis_t& _obj) {
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "groundClearance", _obj.groundClearance );
    NLOHMANN_SAFE_GET( "length", _obj.length );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "v", _obj.v );
    NLOHMANN_SAFE_GET( "width", _obj.width );
}
#endif

struct decalTransform_t
{
    std::string description;
    uint32_t flags;
    std::string name;
    std::string v;
    uint32_t x;
    uint32_t y;
    uint32_t z;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const decalTransform_t& _obj) {
    _json["description"] = _obj.description;
    _json["flags"] = _obj.flags;
    _json["name"] = _obj.name;
    _json["v"] = _obj.v;
    _json["x"] = _obj.x;
    _json["y"] = _obj.y;
    _json["z"] = _obj.z;
}
inline void from_json(const nlohmann::json& _json, decalTransform_t& _obj) {
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "flags", _obj.flags );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "v", _obj.v );
    NLOHMANN_SAFE_GET( "x", _obj.x );
    NLOHMANN_SAFE_GET( "y", _obj.y );
    NLOHMANN_SAFE_GET( "z", _obj.z );
}
#endif

struct structure_t
{
    float armourVolume;
    uint32_t bodyMeshVuid;
    std::string description;
    std::string name;
    bool partRepositioning;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const structure_t& _obj) {
    _json["armourVolume"] = _obj.armourVolume;
    _json["bodyMeshVuid"] = _obj.bodyMeshVuid;
    _json["description"] = _obj.description;
    _json["name"] = _obj.name;
    _json["partRepositioning"] = _obj.partRepositioning;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, structure_t& _obj) {
    NLOHMANN_SAFE_GET( "armourVolume", _obj.armourVolume );
    NLOHMANN_SAFE_GET( "bodyMeshVuid", _obj.bodyMeshVuid );
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "partRepositioning", _obj.partRepositioning );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct trackWheel_t
{
    std::string description;
    float diameter;
    std::string name;
    uint32_t perAxle;
    float spacingOnAxle;
    std::string v;
    std::string wheelID;
    float width;
    float xOffset;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const trackWheel_t& _obj) {
    _json["description"] = _obj.description;
    _json["diameter"] = _obj.diameter;
    _json["name"] = _obj.name;
    _json["perAxle"] = _obj.perAxle;
    _json["spacingOnAxle"] = _obj.spacingOnAxle;
    _json["v"] = _obj.v;
    _json["wheelID"] = _obj.wheelID;
    _json["width"] = _obj.width;
    _json["xOffset"] = _obj.xOffset;
}
inline void from_json(const nlohmann::json& _json, trackWheel_t& _obj) {
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "diameter", _obj.diameter );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "perAxle", _obj.perAxle );
    NLOHMANN_SAFE_GET( "spacingOnAxle", _obj.spacingOnAxle );
    NLOHMANN_SAFE_GET( "v", _obj.v );
    NLOHMANN_SAFE_GET( "wheelID", _obj.wheelID );
    NLOHMANN_SAFE_GET( "width", _obj.width );
    NLOHMANN_SAFE_GET( "xOffset", _obj.xOffset );
}
#endif

struct engine_t
{
    float cylinderDisplacement;
    uint32_t cylinders;
    std::string description;
    uint32_t idleRPM;
    std::string name;
    int32_t revLimit;
    uint32_t targetMaxRPM;
    uint32_t targetMinRPM;
    float tech;
    float torqueCoeff;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const engine_t& _obj) {
    _json["cylinderDisplacement"] = _obj.cylinderDisplacement;
    _json["cylinders"] = _obj.cylinders;
    _json["description"] = _obj.description;
    _json["idleRPM"] = _obj.idleRPM;
    _json["name"] = _obj.name;
    _json["revLimit"] = _obj.revLimit;
    _json["targetMaxRPM"] = _obj.targetMaxRPM;
    _json["targetMinRPM"] = _obj.targetMinRPM;
    _json["tech"] = _obj.tech;
    _json["torqueCoeff"] = _obj.torqueCoeff;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, engine_t& _obj) {
    NLOHMANN_SAFE_GET( "cylinderDisplacement", _obj.cylinderDisplacement );
    NLOHMANN_SAFE_GET( "cylinders", _obj.cylinders );
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "idleRPM", _obj.idleRPM );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "revLimit", _obj.revLimit );
    NLOHMANN_SAFE_GET( "targetMaxRPM", _obj.targetMaxRPM );
    NLOHMANN_SAFE_GET( "targetMinRPM", _obj.targetMinRPM );
    NLOHMANN_SAFE_GET( "tech", _obj.tech );
    NLOHMANN_SAFE_GET( "torqueCoeff", _obj.torqueCoeff );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct transmission_t
{
    bool autoInputTorque;
    bool autoResistanceTorque;
    std::vector<float> d;
    std::string description;
    float maxInputTorque;
    float maxResistanceTorque;
    std::string name;
    std::vector<float> r;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const transmission_t& _obj) {
    _json["autoInputTorque"] = _obj.autoInputTorque;
    _json["autoResistanceTorque"] = _obj.autoResistanceTorque;
    _json["d"] = _obj.d;
    _json["description"] = _obj.description;
    _json["maxInputTorque"] = _obj.maxInputTorque;
    _json["maxResistanceTorque"] = _obj.maxResistanceTorque;
    _json["name"] = _obj.name;
    _json["r"] = _obj.r;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, transmission_t& _obj) {
    NLOHMANN_SAFE_GET( "autoInputTorque", _obj.autoInputTorque );
    NLOHMANN_SAFE_GET( "autoResistanceTorque", _obj.autoResistanceTorque );
    NLOHMANN_SAFE_GET( "d", _obj.d );
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "maxInputTorque", _obj.maxInputTorque );
    NLOHMANN_SAFE_GET( "maxResistanceTorque", _obj.maxResistanceTorque );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "r", _obj.r );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct cannon_t
{
    uint32_t K;
    uint32_t PSI;
    uint32_t breechLength;
    uint32_t caliber;
    std::string description;
    std::string muzzle;
    float muzzleMass;
    std::string name;
    std::vector<segments_t> segments;
    uint32_t shellID;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const cannon_t& _obj) {
    _json["K"] = _obj.K;
    _json["PSI"] = _obj.PSI;
    _json["breechLength"] = _obj.breechLength;
    _json["caliber"] = _obj.caliber;
    _json["description"] = _obj.description;
    _json["muzzle"] = _obj.muzzle;
    _json["muzzleMass"] = _obj.muzzleMass;
    _json["name"] = _obj.name;
    _json["segments"] = _obj.segments;
    _json["shellID"] = _obj.shellID;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, cannon_t& _obj) {
    NLOHMANN_SAFE_GET( "K", _obj.K );
    NLOHMANN_SAFE_GET( "PSI", _obj.PSI );
    NLOHMANN_SAFE_GET( "breechLength", _obj.breechLength );
    NLOHMANN_SAFE_GET( "caliber", _obj.caliber );
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "muzzle", _obj.muzzle );
    NLOHMANN_SAFE_GET( "muzzleMass", _obj.muzzleMass );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "segments", _obj.segments );
    NLOHMANN_SAFE_GET( "shellID", _obj.shellID );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct trackWheelMount_t
{
    std::string description;
    std::string mountID;
    std::string name;
    bool rearFacing;
    float scale;
    std::string v;
    uint32_t x;
    uint32_t y;
    int32_t z;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const trackWheelMount_t& _obj) {
    _json["description"] = _obj.description;
    _json["mountID"] = _obj.mountID;
    _json["name"] = _obj.name;
    _json["rearFacing"] = _obj.rearFacing;
    _json["scale"] = _obj.scale;
    _json["v"] = _obj.v;
    _json["x"] = _obj.x;
    _json["y"] = _obj.y;
    _json["z"] = _obj.z;
}
inline void from_json(const nlohmann::json& _json, trackWheelMount_t& _obj) {
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "mountID", _obj.mountID );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "rearFacing", _obj.rearFacing );
    NLOHMANN_SAFE_GET( "scale", _obj.scale );
    NLOHMANN_SAFE_GET( "v", _obj.v );
    NLOHMANN_SAFE_GET( "x", _obj.x );
    NLOHMANN_SAFE_GET( "y", _obj.y );
    NLOHMANN_SAFE_GET( "z", _obj.z );
}
#endif

struct trackWheelArray_t
{
    float angle;
    uint32_t count;
    std::string description;
    uint32_t groupSpacing;
    uint32_t groupingOffset;
    float interleaveOverlapFraction;
    uint32_t length;
    std::string name;
    uint32_t perGroup;
    uint32_t spacing;
    uint32_t spacingMode;
    bool syncLengthEnabled;
    std::string v;
    uint32_t xOffset;
    int32_t xOrigin;
    uint32_t yOffset;
    uint32_t yOrigin;
    uint32_t zOffset;
    uint32_t zOrigin;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const trackWheelArray_t& _obj) {
    _json["angle"] = _obj.angle;
    _json["count"] = _obj.count;
    _json["description"] = _obj.description;
    _json["groupSpacing"] = _obj.groupSpacing;
    _json["groupingOffset"] = _obj.groupingOffset;
    _json["interleaveOverlapFraction"] = _obj.interleaveOverlapFraction;
    _json["length"] = _obj.length;
    _json["name"] = _obj.name;
    _json["perGroup"] = _obj.perGroup;
    _json["spacing"] = _obj.spacing;
    _json["spacingMode"] = _obj.spacingMode;
    _json["syncLengthEnabled"] = _obj.syncLengthEnabled;
    _json["v"] = _obj.v;
    _json["xOffset"] = _obj.xOffset;
    _json["xOrigin"] = _obj.xOrigin;
    _json["yOffset"] = _obj.yOffset;
    _json["yOrigin"] = _obj.yOrigin;
    _json["zOffset"] = _obj.zOffset;
    _json["zOrigin"] = _obj.zOrigin;
}
inline void from_json(const nlohmann::json& _json, trackWheelArray_t& _obj) {
    NLOHMANN_SAFE_GET( "angle", _obj.angle );
    NLOHMANN_SAFE_GET( "count", _obj.count );
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "groupSpacing", _obj.groupSpacing );
    NLOHMANN_SAFE_GET( "groupingOffset", _obj.groupingOffset );
    NLOHMANN_SAFE_GET( "interleaveOverlapFraction", _obj.interleaveOverlapFraction );
    NLOHMANN_SAFE_GET( "length", _obj.length );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "perGroup", _obj.perGroup );
    NLOHMANN_SAFE_GET( "spacing", _obj.spacing );
    NLOHMANN_SAFE_GET( "spacingMode", _obj.spacingMode );
    NLOHMANN_SAFE_GET( "syncLengthEnabled", _obj.syncLengthEnabled );
    NLOHMANN_SAFE_GET( "v", _obj.v );
    NLOHMANN_SAFE_GET( "xOffset", _obj.xOffset );
    NLOHMANN_SAFE_GET( "xOrigin", _obj.xOrigin );
    NLOHMANN_SAFE_GET( "yOffset", _obj.yOffset );
    NLOHMANN_SAFE_GET( "yOrigin", _obj.yOrigin );
    NLOHMANN_SAFE_GET( "zOffset", _obj.zOffset );
    NLOHMANN_SAFE_GET( "zOrigin", _obj.zOrigin );
}
#endif

struct track_t
{
    bool autoBrake;
    uint32_t brake;
    std::string description;
    bool frontalTransmission;
    uint32_t length;
    bool matchChassis;
    std::string name;
    bool rollersEnabled;
    float rrCoeff;
    uint32_t separation;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const track_t& _obj) {
    _json["autoBrake"] = _obj.autoBrake;
    _json["brake"] = _obj.brake;
    _json["description"] = _obj.description;
    _json["frontalTransmission"] = _obj.frontalTransmission;
    _json["length"] = _obj.length;
    _json["matchChassis"] = _obj.matchChassis;
    _json["name"] = _obj.name;
    _json["rollersEnabled"] = _obj.rollersEnabled;
    _json["rrCoeff"] = _obj.rrCoeff;
    _json["separation"] = _obj.separation;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, track_t& _obj) {
    NLOHMANN_SAFE_GET( "autoBrake", _obj.autoBrake );
    NLOHMANN_SAFE_GET( "brake", _obj.brake );
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "frontalTransmission", _obj.frontalTransmission );
    NLOHMANN_SAFE_GET( "length", _obj.length );
    NLOHMANN_SAFE_GET( "matchChassis", _obj.matchChassis );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "rollersEnabled", _obj.rollersEnabled );
    NLOHMANN_SAFE_GET( "rrCoeff", _obj.rrCoeff );
    NLOHMANN_SAFE_GET( "separation", _obj.separation );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct shellSlot_t
{
    std::string description;
    uint32_t diameter;
    std::vector<generatedProjectiles_t> generatedProjectiles;
    std::string name;
    uint32_t propellantLength;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const shellSlot_t& _obj) {
    _json["description"] = _obj.description;
    _json["diameter"] = _obj.diameter;
    _json["generatedProjectiles"] = _obj.generatedProjectiles;
    _json["name"] = _obj.name;
    _json["propellantLength"] = _obj.propellantLength;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, shellSlot_t& _obj) {
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "diameter", _obj.diameter );
    NLOHMANN_SAFE_GET( "generatedProjectiles", _obj.generatedProjectiles );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "propellantLength", _obj.propellantLength );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct trackBelt_t
{
    std::string description;
    std::string name;
    uint32_t pitch;
    std::string segmentID;
    uint32_t tension;
    std::string v;
    uint32_t x;
    uint32_t y;
    uint32_t z;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const trackBelt_t& _obj) {
    _json["description"] = _obj.description;
    _json["name"] = _obj.name;
    _json["pitch"] = _obj.pitch;
    _json["segmentID"] = _obj.segmentID;
    _json["tension"] = _obj.tension;
    _json["v"] = _obj.v;
    _json["x"] = _obj.x;
    _json["y"] = _obj.y;
    _json["z"] = _obj.z;
}
inline void from_json(const nlohmann::json& _json, trackBelt_t& _obj) {
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "pitch", _obj.pitch );
    NLOHMANN_SAFE_GET( "segmentID", _obj.segmentID );
    NLOHMANN_SAFE_GET( "tension", _obj.tension );
    NLOHMANN_SAFE_GET( "v", _obj.v );
    NLOHMANN_SAFE_GET( "x", _obj.x );
    NLOHMANN_SAFE_GET( "y", _obj.y );
    NLOHMANN_SAFE_GET( "z", _obj.z );
}
#endif

struct suspension_t
{
    uint32_t armLength;
    float damper;
    std::string description;
    std::string name;
    float targetAngle;
    float upTravelLimit;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const suspension_t& _obj) {
    _json["armLength"] = _obj.armLength;
    _json["damper"] = _obj.damper;
    _json["description"] = _obj.description;
    _json["name"] = _obj.name;
    _json["targetAngle"] = _obj.targetAngle;
    _json["upTravelLimit"] = _obj.upTravelLimit;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, suspension_t& _obj) {
    NLOHMANN_SAFE_GET( "armLength", _obj.armLength );
    NLOHMANN_SAFE_GET( "damper", _obj.damper );
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "targetAngle", _obj.targetAngle );
    NLOHMANN_SAFE_GET( "upTravelLimit", _obj.upTravelLimit );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct torsionBar_t
{
    std::string description;
    std::string name;
    uint32_t torsionBarDiameter;
    uint32_t torsionBarLength;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const torsionBar_t& _obj) {
    _json["description"] = _obj.description;
    _json["name"] = _obj.name;
    _json["torsionBarDiameter"] = _obj.torsionBarDiameter;
    _json["torsionBarLength"] = _obj.torsionBarLength;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, torsionBar_t& _obj) {
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "torsionBarDiameter", _obj.torsionBarDiameter );
    NLOHMANN_SAFE_GET( "torsionBarLength", _obj.torsionBarLength );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct layingDrive_t
{
    azimuth_t azimuth;
    std::string description;
    elevation_t elevation;
    std::string name;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const layingDrive_t& _obj) {
    _json["azimuth"] = _obj.azimuth;
    _json["description"] = _obj.description;
    _json["elevation"] = _obj.elevation;
    _json["name"] = _obj.name;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, layingDrive_t& _obj) {
    NLOHMANN_SAFE_GET( "azimuth", _obj.azimuth );
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "elevation", _obj.elevation );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct fuelTank_t
{
    std::string description;
    std::string name;
    std::string v;
    uint32_t x;
    uint32_t y;
    uint32_t z;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const fuelTank_t& _obj) {
    _json["description"] = _obj.description;
    _json["name"] = _obj.name;
    _json["v"] = _obj.v;
    _json["x"] = _obj.x;
    _json["y"] = _obj.y;
    _json["z"] = _obj.z;
}
inline void from_json(const nlohmann::json& _json, fuelTank_t& _obj) {
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "v", _obj.v );
    NLOHMANN_SAFE_GET( "x", _obj.x );
    NLOHMANN_SAFE_GET( "y", _obj.y );
    NLOHMANN_SAFE_GET( "z", _obj.z );
}
#endif

struct crewSeat_t
{
    float baseEfficiency;
    std::string description;
    std::string name;
    std::vector<uint32_t> operatedBehaviours;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const crewSeat_t& _obj) {
    _json["baseEfficiency"] = _obj.baseEfficiency;
    _json["description"] = _obj.description;
    _json["name"] = _obj.name;
    _json["operatedBehaviours"] = _obj.operatedBehaviours;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, crewSeat_t& _obj) {
    NLOHMANN_SAFE_GET( "baseEfficiency", _obj.baseEfficiency );
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "operatedBehaviours", _obj.operatedBehaviours );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct posture_t
{
    std::vector<float> bodyPosition;
    std::string description;
    std::vector<float> headPosition;
    std::vector<float> leftArmPolePosition;
    std::vector<float> leftFootPosition;
    std::vector<float> leftHandPosition;
    std::vector<float> leftLegPolePosition;
    std::vector<float> leftToesPosition;
    std::string name;
    std::vector<float> rightArmPolePosition;
    std::vector<float> rightFootPosition;
    std::vector<float> rightHandPosition;
    std::vector<float> rightLegPolePosition;
    std::vector<float> rightToesPosition;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const posture_t& _obj) {
    _json["bodyPosition"] = _obj.bodyPosition;
    _json["description"] = _obj.description;
    _json["headPosition"] = _obj.headPosition;
    _json["leftArmPolePosition"] = _obj.leftArmPolePosition;
    _json["leftFootPosition"] = _obj.leftFootPosition;
    _json["leftHandPosition"] = _obj.leftHandPosition;
    _json["leftLegPolePosition"] = _obj.leftLegPolePosition;
    _json["leftToesPosition"] = _obj.leftToesPosition;
    _json["name"] = _obj.name;
    _json["rightArmPolePosition"] = _obj.rightArmPolePosition;
    _json["rightFootPosition"] = _obj.rightFootPosition;
    _json["rightHandPosition"] = _obj.rightHandPosition;
    _json["rightLegPolePosition"] = _obj.rightLegPolePosition;
    _json["rightToesPosition"] = _obj.rightToesPosition;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, posture_t& _obj) {
    NLOHMANN_SAFE_GET( "bodyPosition", _obj.bodyPosition );
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "headPosition", _obj.headPosition );
    NLOHMANN_SAFE_GET( "leftArmPolePosition", _obj.leftArmPolePosition );
    NLOHMANN_SAFE_GET( "leftFootPosition", _obj.leftFootPosition );
    NLOHMANN_SAFE_GET( "leftHandPosition", _obj.leftHandPosition );
    NLOHMANN_SAFE_GET( "leftLegPolePosition", _obj.leftLegPolePosition );
    NLOHMANN_SAFE_GET( "leftToesPosition", _obj.leftToesPosition );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "rightArmPolePosition", _obj.rightArmPolePosition );
    NLOHMANN_SAFE_GET( "rightFootPosition", _obj.rightFootPosition );
    NLOHMANN_SAFE_GET( "rightHandPosition", _obj.rightHandPosition );
    NLOHMANN_SAFE_GET( "rightLegPolePosition", _obj.rightLegPolePosition );
    NLOHMANN_SAFE_GET( "rightToesPosition", _obj.rightToesPosition );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct turretRing_t
{
    std::string description;
    uint32_t motorVuid;
    std::string name;
    uint32_t ringDiameter;
    uint32_t ringHeight;
    uint32_t ringThickness;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const turretRing_t& _obj) {
    _json["description"] = _obj.description;
    _json["motorVuid"] = _obj.motorVuid;
    _json["name"] = _obj.name;
    _json["ringDiameter"] = _obj.ringDiameter;
    _json["ringHeight"] = _obj.ringHeight;
    _json["ringThickness"] = _obj.ringThickness;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, turretRing_t& _obj) {
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "motorVuid", _obj.motorVuid );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "ringDiameter", _obj.ringDiameter );
    NLOHMANN_SAFE_GET( "ringHeight", _obj.ringHeight );
    NLOHMANN_SAFE_GET( "ringThickness", _obj.ringThickness );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct turret_t
{
    std::string description;
    uint32_t maxRot;
    int32_t minRot;
    std::string name;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const turret_t& _obj) {
    _json["description"] = _obj.description;
    _json["maxRot"] = _obj.maxRot;
    _json["minRot"] = _obj.minRot;
    _json["name"] = _obj.name;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, turret_t& _obj) {
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "maxRot", _obj.maxRot );
    NLOHMANN_SAFE_GET( "minRot", _obj.minRot );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct motor_t
{
    std::string description;
    std::string name;
    float ratio;
    float resist;
    float torque;
    uint32_t type;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const motor_t& _obj) {
    _json["description"] = _obj.description;
    _json["name"] = _obj.name;
    _json["ratio"] = _obj.ratio;
    _json["resist"] = _obj.resist;
    _json["torque"] = _obj.torque;
    _json["type"] = _obj.type;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, motor_t& _obj) {
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "ratio", _obj.ratio );
    NLOHMANN_SAFE_GET( "resist", _obj.resist );
    NLOHMANN_SAFE_GET( "torque", _obj.torque );
    NLOHMANN_SAFE_GET( "type", _obj.type );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct turretBasket_t
{
    std::string description;
    std::string name;
    std::vector<segments_t> segments;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const turretBasket_t& _obj) {
    _json["description"] = _obj.description;
    _json["name"] = _obj.name;
    _json["segments"] = _obj.segments;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, turretBasket_t& _obj) {
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "segments", _obj.segments );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct cannonInstance_t
{
    std::vector<uint32_t> barrelVuids;
    std::string description;
    uint32_t fireDelay;
    uint32_t fireGroup;
    uint32_t flags;
    std::string name;
    int32_t sightVuid;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const cannonInstance_t& _obj) {
    _json["barrelVuids"] = _obj.barrelVuids;
    _json["description"] = _obj.description;
    _json["fireDelay"] = _obj.fireDelay;
    _json["fireGroup"] = _obj.fireGroup;
    _json["flags"] = _obj.flags;
    _json["name"] = _obj.name;
    _json["sightVuid"] = _obj.sightVuid;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, cannonInstance_t& _obj) {
    NLOHMANN_SAFE_GET( "barrelVuids", _obj.barrelVuids );
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "fireDelay", _obj.fireDelay );
    NLOHMANN_SAFE_GET( "fireGroup", _obj.fireGroup );
    NLOHMANN_SAFE_GET( "flags", _obj.flags );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "sightVuid", _obj.sightVuid );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct ammoRack_t
{
    std::string description;
    uint32_t diameter;
    uint32_t length;
    std::string name;
    uint32_t shellID;
    std::string shellTypeGuid;
    std::string v;
    uint32_t x;
    uint32_t y;
    uint32_t z;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const ammoRack_t& _obj) {
    _json["description"] = _obj.description;
    _json["diameter"] = _obj.diameter;
    _json["length"] = _obj.length;
    _json["name"] = _obj.name;
    _json["shellID"] = _obj.shellID;
    _json["shellTypeGuid"] = _obj.shellTypeGuid;
    _json["v"] = _obj.v;
    _json["x"] = _obj.x;
    _json["y"] = _obj.y;
    _json["z"] = _obj.z;
}
inline void from_json(const nlohmann::json& _json, ammoRack_t& _obj) {
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "diameter", _obj.diameter );
    NLOHMANN_SAFE_GET( "length", _obj.length );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "shellID", _obj.shellID );
    NLOHMANN_SAFE_GET( "shellTypeGuid", _obj.shellTypeGuid );
    NLOHMANN_SAFE_GET( "v", _obj.v );
    NLOHMANN_SAFE_GET( "x", _obj.x );
    NLOHMANN_SAFE_GET( "y", _obj.y );
    NLOHMANN_SAFE_GET( "z", _obj.z );
}
#endif

struct decal_t
{
    std::string description;
    std::string imageURL;
    std::string name;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const decal_t& _obj) {
    _json["description"] = _obj.description;
    _json["imageURL"] = _obj.imageURL;
    _json["name"] = _obj.name;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, decal_t& _obj) {
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "imageURL", _obj.imageURL );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct paintJobRegister_t
{
    std::string description;
    std::string name;
    std::vector<uint32_t> paintJobIDs;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const paintJobRegister_t& _obj) {
    _json["description"] = _obj.description;
    _json["name"] = _obj.name;
    _json["paintJobIDs"] = _obj.paintJobIDs;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, paintJobRegister_t& _obj) {
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "paintJobIDs", _obj.paintJobIDs );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct spareBeltSegmentArray_t
{
    uint32_t count;
    std::string description;
    std::string name;
    std::string v;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const spareBeltSegmentArray_t& _obj) {
    _json["count"] = _obj.count;
    _json["description"] = _obj.description;
    _json["name"] = _obj.name;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, spareBeltSegmentArray_t& _obj) {
    NLOHMANN_SAFE_GET( "count", _obj.count );
    NLOHMANN_SAFE_GET( "description", _obj.description );
    NLOHMANN_SAFE_GET( "name", _obj.name );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

struct meshes_t // variant container 
{ 
    struct meshData_t {
       plateStructureMesh_t plateStructureMesh;
    } meshData;
    std::string type;
    uint32_t vuid;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const meshes_t& _obj) {
    if ( _obj.type == "plateStructureMesh" ) { _json["meshData"] = _obj.meshData.plateStructureMesh; }
    _json["type"] = _obj.type;
    _json["vuid"] = _obj.vuid;
}
inline void from_json(const nlohmann::json& _json, meshes_t& _obj) {
    if ( _json["type"] == "plateStructureMesh" ) { NLOHMANN_SAFE_GET( "meshData", _obj.meshData.plateStructureMesh ); }
    _json.at("type").get_to( _obj.type );
    _json.at("vuid").get_to( _obj.vuid );
}
#endif

struct objects_t_t
{
    clutchBrakingBlueprint_t clutchBrakingBlueprint;
    uint32_t driveshaftBuilder;
    uint32_t flags;
    std::string guid;
    uint32_t powertrain;
    powertrainBlueprint_t powertrainBlueprint;
    uint32_t powertrainLayout;
    uint32_t pvuid;
    transform_t transform;
    uint32_t vuid;
    uint32_t model;
    uint32_t powertrainSteering;
    uint32_t engine;
    uint32_t engineBlueprintVuid;
    uint32_t fuelReserve;
    uint32_t powertrainNode;
    uint32_t transmission;
    uint32_t transmissionBlueprintVuid;
    uint32_t belt;
    uint32_t beltBlueprintVuid;
    uint32_t track;
    uint32_t trackBlueprintVuid;
    trackInstanceInfo_t trackInstanceInfo;
    uint32_t axle;
    uint32_t axleModel;
    uint32_t axleRod;
    uint32_t mountModel;
    uint32_t wheelArray;
    uint32_t wheelBlueprintVuid;
    uint32_t wheelMount;
    uint32_t wheelMountBlueprintVuid;
    uint32_t sharedWheelBlueprintVuid;
    uint32_t sharedWheelMountBlueprintVuid;
    uint32_t wheelMountArray;
    uint32_t wheelMountArrayBlueprintVuid;
    uint32_t fuelTank;
    uint32_t fuelTankBlueprintVuid;
    uint32_t crewSeat;
    uint32_t posture;
    uint32_t postureBlueprintVuid;
    uint32_t seatBlueprintVuid;
    uint32_t basket;
    uint32_t basketBlueprintVuid;
    uint32_t ringBlueprintVuid;
    uint32_t ringModel;
    uint32_t structureID;
    uint32_t turretRing;
    uint32_t plateStructure;
    uint32_t structureBlueprintVuid;
    uint32_t motor;
    uint32_t motorBlueprintVuid;
    uint32_t motorModel;
    uint32_t traverseConstraintsVuid;
    uint32_t mantlet;
    mantletBlueprint_t mantletBlueprint;
    uint32_t layingDrive;
    uint32_t layingDriveBlueprintVuid;
    uint32_t trunnions;
    uint32_t breech;
    uint32_t breechModel;
    uint32_t cannon;
    uint32_t cannonBlueprintVuid;
    uint32_t cannonInstanceBlueprintVuid;
    uint32_t cannonBarrelSegment;
    uint32_t sight;
    uint32_t decalBlueprintVuid;
    uint32_t decalProjectionBlueprintVuid;
    uint32_t decalScaler;
    uint32_t projectedDecal;
    uint32_t ammoRack;
    uint32_t ammoRackBlueprintVuid;
    uint32_t ammoRackModel;
    uint32_t vent;
    uint32_t exhaust;
    uint32_t beltBlueprintID;
    uint32_t blueprintID;
    uint32_t trackBeltSegmentArray;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const objects_t_t& _obj) {
    _json["clutchBrakingBlueprint"] = _obj.clutchBrakingBlueprint;
    _json["driveshaftBuilder"] = _obj.driveshaftBuilder;
    _json["flags"] = _obj.flags;
    _json["guid"] = _obj.guid;
    _json["powertrain"] = _obj.powertrain;
    _json["powertrainBlueprint"] = _obj.powertrainBlueprint;
    _json["powertrainLayout"] = _obj.powertrainLayout;
    _json["pvuid"] = _obj.pvuid;
    _json["transform"] = _obj.transform;
    _json["vuid"] = _obj.vuid;
    _json["model"] = _obj.model;
    _json["powertrainSteering"] = _obj.powertrainSteering;
    _json["engine"] = _obj.engine;
    _json["engineBlueprintVuid"] = _obj.engineBlueprintVuid;
    _json["fuelReserve"] = _obj.fuelReserve;
    _json["powertrainNode"] = _obj.powertrainNode;
    _json["transmission"] = _obj.transmission;
    _json["transmissionBlueprintVuid"] = _obj.transmissionBlueprintVuid;
    _json["belt"] = _obj.belt;
    _json["beltBlueprintVuid"] = _obj.beltBlueprintVuid;
    _json["track"] = _obj.track;
    _json["trackBlueprintVuid"] = _obj.trackBlueprintVuid;
    _json["trackInstanceInfo"] = _obj.trackInstanceInfo;
    _json["axle"] = _obj.axle;
    _json["axleModel"] = _obj.axleModel;
    _json["axleRod"] = _obj.axleRod;
    _json["mountModel"] = _obj.mountModel;
    _json["wheelArray"] = _obj.wheelArray;
    _json["wheelBlueprintVuid"] = _obj.wheelBlueprintVuid;
    _json["wheelMount"] = _obj.wheelMount;
    _json["wheelMountBlueprintVuid"] = _obj.wheelMountBlueprintVuid;
    _json["sharedWheelBlueprintVuid"] = _obj.sharedWheelBlueprintVuid;
    _json["sharedWheelMountBlueprintVuid"] = _obj.sharedWheelMountBlueprintVuid;
    _json["wheelMountArray"] = _obj.wheelMountArray;
    _json["wheelMountArrayBlueprintVuid"] = _obj.wheelMountArrayBlueprintVuid;
    _json["fuelTank"] = _obj.fuelTank;
    _json["fuelTankBlueprintVuid"] = _obj.fuelTankBlueprintVuid;
    _json["crewSeat"] = _obj.crewSeat;
    _json["posture"] = _obj.posture;
    _json["postureBlueprintVuid"] = _obj.postureBlueprintVuid;
    _json["seatBlueprintVuid"] = _obj.seatBlueprintVuid;
    _json["basket"] = _obj.basket;
    _json["basketBlueprintVuid"] = _obj.basketBlueprintVuid;
    _json["ringBlueprintVuid"] = _obj.ringBlueprintVuid;
    _json["ringModel"] = _obj.ringModel;
    _json["structureID"] = _obj.structureID;
    _json["turretRing"] = _obj.turretRing;
    _json["plateStructure"] = _obj.plateStructure;
    _json["structureBlueprintVuid"] = _obj.structureBlueprintVuid;
    _json["motor"] = _obj.motor;
    _json["motorBlueprintVuid"] = _obj.motorBlueprintVuid;
    _json["motorModel"] = _obj.motorModel;
    _json["traverseConstraintsVuid"] = _obj.traverseConstraintsVuid;
    _json["mantlet"] = _obj.mantlet;
    _json["mantletBlueprint"] = _obj.mantletBlueprint;
    _json["layingDrive"] = _obj.layingDrive;
    _json["layingDriveBlueprintVuid"] = _obj.layingDriveBlueprintVuid;
    _json["trunnions"] = _obj.trunnions;
    _json["breech"] = _obj.breech;
    _json["breechModel"] = _obj.breechModel;
    _json["cannon"] = _obj.cannon;
    _json["cannonBlueprintVuid"] = _obj.cannonBlueprintVuid;
    _json["cannonInstanceBlueprintVuid"] = _obj.cannonInstanceBlueprintVuid;
    _json["cannonBarrelSegment"] = _obj.cannonBarrelSegment;
    _json["sight"] = _obj.sight;
    _json["decalBlueprintVuid"] = _obj.decalBlueprintVuid;
    _json["decalProjectionBlueprintVuid"] = _obj.decalProjectionBlueprintVuid;
    _json["decalScaler"] = _obj.decalScaler;
    _json["projectedDecal"] = _obj.projectedDecal;
    _json["ammoRack"] = _obj.ammoRack;
    _json["ammoRackBlueprintVuid"] = _obj.ammoRackBlueprintVuid;
    _json["ammoRackModel"] = _obj.ammoRackModel;
    _json["vent"] = _obj.vent;
    _json["exhaust"] = _obj.exhaust;
    _json["beltBlueprintID"] = _obj.beltBlueprintID;
    _json["blueprintID"] = _obj.blueprintID;
    _json["trackBeltSegmentArray"] = _obj.trackBeltSegmentArray;
}
inline void from_json(const nlohmann::json& _json, objects_t_t& _obj) {
    NLOHMANN_SAFE_GET( "clutchBrakingBlueprint", _obj.clutchBrakingBlueprint );
    NLOHMANN_SAFE_GET( "driveshaftBuilder", _obj.driveshaftBuilder );
    NLOHMANN_SAFE_GET( "flags", _obj.flags );
    NLOHMANN_SAFE_GET( "guid", _obj.guid );
    NLOHMANN_SAFE_GET( "powertrain", _obj.powertrain );
    NLOHMANN_SAFE_GET( "powertrainBlueprint", _obj.powertrainBlueprint );
    NLOHMANN_SAFE_GET( "powertrainLayout", _obj.powertrainLayout );
    NLOHMANN_SAFE_GET( "pvuid", _obj.pvuid );
    NLOHMANN_SAFE_GET( "transform", _obj.transform );
    NLOHMANN_SAFE_GET( "vuid", _obj.vuid );
    NLOHMANN_SAFE_GET( "model", _obj.model );
    NLOHMANN_SAFE_GET( "powertrainSteering", _obj.powertrainSteering );
    NLOHMANN_SAFE_GET( "engine", _obj.engine );
    NLOHMANN_SAFE_GET( "engineBlueprintVuid", _obj.engineBlueprintVuid );
    NLOHMANN_SAFE_GET( "fuelReserve", _obj.fuelReserve );
    NLOHMANN_SAFE_GET( "powertrainNode", _obj.powertrainNode );
    NLOHMANN_SAFE_GET( "transmission", _obj.transmission );
    NLOHMANN_SAFE_GET( "transmissionBlueprintVuid", _obj.transmissionBlueprintVuid );
    NLOHMANN_SAFE_GET( "belt", _obj.belt );
    NLOHMANN_SAFE_GET( "beltBlueprintVuid", _obj.beltBlueprintVuid );
    NLOHMANN_SAFE_GET( "track", _obj.track );
    NLOHMANN_SAFE_GET( "trackBlueprintVuid", _obj.trackBlueprintVuid );
    NLOHMANN_SAFE_GET( "trackInstanceInfo", _obj.trackInstanceInfo );
    NLOHMANN_SAFE_GET( "axle", _obj.axle );
    NLOHMANN_SAFE_GET( "axleModel", _obj.axleModel );
    NLOHMANN_SAFE_GET( "axleRod", _obj.axleRod );
    NLOHMANN_SAFE_GET( "mountModel", _obj.mountModel );
    NLOHMANN_SAFE_GET( "wheelArray", _obj.wheelArray );
    NLOHMANN_SAFE_GET( "wheelBlueprintVuid", _obj.wheelBlueprintVuid );
    NLOHMANN_SAFE_GET( "wheelMount", _obj.wheelMount );
    NLOHMANN_SAFE_GET( "wheelMountBlueprintVuid", _obj.wheelMountBlueprintVuid );
    NLOHMANN_SAFE_GET( "sharedWheelBlueprintVuid", _obj.sharedWheelBlueprintVuid );
    NLOHMANN_SAFE_GET( "sharedWheelMountBlueprintVuid", _obj.sharedWheelMountBlueprintVuid );
    NLOHMANN_SAFE_GET( "wheelMountArray", _obj.wheelMountArray );
    NLOHMANN_SAFE_GET( "wheelMountArrayBlueprintVuid", _obj.wheelMountArrayBlueprintVuid );
    NLOHMANN_SAFE_GET( "fuelTank", _obj.fuelTank );
    NLOHMANN_SAFE_GET( "fuelTankBlueprintVuid", _obj.fuelTankBlueprintVuid );
    NLOHMANN_SAFE_GET( "crewSeat", _obj.crewSeat );
    NLOHMANN_SAFE_GET( "posture", _obj.posture );
    NLOHMANN_SAFE_GET( "postureBlueprintVuid", _obj.postureBlueprintVuid );
    NLOHMANN_SAFE_GET( "seatBlueprintVuid", _obj.seatBlueprintVuid );
    NLOHMANN_SAFE_GET( "basket", _obj.basket );
    NLOHMANN_SAFE_GET( "basketBlueprintVuid", _obj.basketBlueprintVuid );
    NLOHMANN_SAFE_GET( "ringBlueprintVuid", _obj.ringBlueprintVuid );
    NLOHMANN_SAFE_GET( "ringModel", _obj.ringModel );
    NLOHMANN_SAFE_GET( "structureID", _obj.structureID );
    NLOHMANN_SAFE_GET( "turretRing", _obj.turretRing );
    NLOHMANN_SAFE_GET( "plateStructure", _obj.plateStructure );
    NLOHMANN_SAFE_GET( "structureBlueprintVuid", _obj.structureBlueprintVuid );
    NLOHMANN_SAFE_GET( "motor", _obj.motor );
    NLOHMANN_SAFE_GET( "motorBlueprintVuid", _obj.motorBlueprintVuid );
    NLOHMANN_SAFE_GET( "motorModel", _obj.motorModel );
    NLOHMANN_SAFE_GET( "traverseConstraintsVuid", _obj.traverseConstraintsVuid );
    NLOHMANN_SAFE_GET( "mantlet", _obj.mantlet );
    NLOHMANN_SAFE_GET( "mantletBlueprint", _obj.mantletBlueprint );
    NLOHMANN_SAFE_GET( "layingDrive", _obj.layingDrive );
    NLOHMANN_SAFE_GET( "layingDriveBlueprintVuid", _obj.layingDriveBlueprintVuid );
    NLOHMANN_SAFE_GET( "trunnions", _obj.trunnions );
    NLOHMANN_SAFE_GET( "breech", _obj.breech );
    NLOHMANN_SAFE_GET( "breechModel", _obj.breechModel );
    NLOHMANN_SAFE_GET( "cannon", _obj.cannon );
    NLOHMANN_SAFE_GET( "cannonBlueprintVuid", _obj.cannonBlueprintVuid );
    NLOHMANN_SAFE_GET( "cannonInstanceBlueprintVuid", _obj.cannonInstanceBlueprintVuid );
    NLOHMANN_SAFE_GET( "cannonBarrelSegment", _obj.cannonBarrelSegment );
    NLOHMANN_SAFE_GET( "sight", _obj.sight );
    NLOHMANN_SAFE_GET( "decalBlueprintVuid", _obj.decalBlueprintVuid );
    NLOHMANN_SAFE_GET( "decalProjectionBlueprintVuid", _obj.decalProjectionBlueprintVuid );
    NLOHMANN_SAFE_GET( "decalScaler", _obj.decalScaler );
    NLOHMANN_SAFE_GET( "projectedDecal", _obj.projectedDecal );
    NLOHMANN_SAFE_GET( "ammoRack", _obj.ammoRack );
    NLOHMANN_SAFE_GET( "ammoRackBlueprintVuid", _obj.ammoRackBlueprintVuid );
    NLOHMANN_SAFE_GET( "ammoRackModel", _obj.ammoRackModel );
    NLOHMANN_SAFE_GET( "vent", _obj.vent );
    NLOHMANN_SAFE_GET( "exhaust", _obj.exhaust );
    NLOHMANN_SAFE_GET( "beltBlueprintID", _obj.beltBlueprintID );
    NLOHMANN_SAFE_GET( "blueprintID", _obj.blueprintID );
    NLOHMANN_SAFE_GET( "trackBeltSegmentArray", _obj.trackBeltSegmentArray );
}
#endif

struct blueprints_t // variant container 
{ 
    struct blueprint_t {
       paintJob_t paintJob;
       chassis_t chassis;
       decalTransform_t decalTransform;
       structure_t structure;
       trackWheel_t trackWheel;
       engine_t engine;
       transmission_t transmission;
       cannon_t cannon;
       trackWheelMount_t trackWheelMount;
       trackWheelArray_t trackWheelArray;
       track_t track;
       shellSlot_t shellSlot;
       trackBelt_t trackBelt;
       suspension_t suspension;
       torsionBar_t torsionBar;
       layingDrive_t layingDrive;
       fuelTank_t fuelTank;
       crewSeat_t crewSeat;
       posture_t posture;
       turretRing_t turretRing;
       turret_t turret;
       motor_t motor;
       turretBasket_t turretBasket;
       cannonInstance_t cannonInstance;
       ammoRack_t ammoRack;
       decal_t decal;
       paintJobRegister_t paintJobRegister;
       spareBeltSegmentArray_t spareBeltSegmentArray;
    } blueprint;
    uint32_t id;
    std::string type;
};
#ifdef ENABLE_NLOHMANN_INLINE
inline void to_json(nlohmann::json& _json, const blueprints_t& _obj) {
    if ( _obj.type == "paintJob" ) { _json["blueprint"] = _obj.blueprint.paintJob; }
    else if ( _obj.type == "chassis" ) { _json["blueprint"] = _obj.blueprint.chassis; }
    else if ( _obj.type == "decalTransform" ) { _json["blueprint"] = _obj.blueprint.decalTransform; }
    else if ( _obj.type == "structure" ) { _json["blueprint"] = _obj.blueprint.structure; }
    else if ( _obj.type == "trackWheel" ) { _json["blueprint"] = _obj.blueprint.trackWheel; }
    else if ( _obj.type == "engine" ) { _json["blueprint"] = _obj.blueprint.engine; }
    else if ( _obj.type == "transmission" ) { _json["blueprint"] = _obj.blueprint.transmission; }
    else if ( _obj.type == "cannon" ) { _json["blueprint"] = _obj.blueprint.cannon; }
    else if ( _obj.type == "trackWheelMount" ) { _json["blueprint"] = _obj.blueprint.trackWheelMount; }
    else if ( _obj.type == "trackWheelArray" ) { _json["blueprint"] = _obj.blueprint.trackWheelArray; }
    else if ( _obj.type == "track" ) { _json["blueprint"] = _obj.blueprint.track; }
    else if ( _obj.type == "shellSlot" ) { _json["blueprint"] = _obj.blueprint.shellSlot; }
    else if ( _obj.type == "trackBelt" ) { _json["blueprint"] = _obj.blueprint.trackBelt; }
    else if ( _obj.type == "suspension" ) { _json["blueprint"] = _obj.blueprint.suspension; }
    else if ( _obj.type == "torsionBar" ) { _json["blueprint"] = _obj.blueprint.torsionBar; }
    else if ( _obj.type == "layingDrive" ) { _json["blueprint"] = _obj.blueprint.layingDrive; }
    else if ( _obj.type == "fuelTank" ) { _json["blueprint"] = _obj.blueprint.fuelTank; }
    else if ( _obj.type == "crewSeat" ) { _json["blueprint"] = _obj.blueprint.crewSeat; }
    else if ( _obj.type == "posture" ) { _json["blueprint"] = _obj.blueprint.posture; }
    else if ( _obj.type == "turretRing" ) { _json["blueprint"] = _obj.blueprint.turretRing; }
    else if ( _obj.type == "turret" ) { _json["blueprint"] = _obj.blueprint.turret; }
    else if ( _obj.type == "motor" ) { _json["blueprint"] = _obj.blueprint.motor; }
    else if ( _obj.type == "turretBasket" ) { _json["blueprint"] = _obj.blueprint.turretBasket; }
    else if ( _obj.type == "cannonInstance" ) { _json["blueprint"] = _obj.blueprint.cannonInstance; }
    else if ( _obj.type == "ammoRack" ) { _json["blueprint"] = _obj.blueprint.ammoRack; }
    else if ( _obj.type == "decal" ) { _json["blueprint"] = _obj.blueprint.decal; }
    else if ( _obj.type == "paintJobRegister" ) { _json["blueprint"] = _obj.blueprint.paintJobRegister; }
    else if ( _obj.type == "spareBeltSegmentArray" ) { _json["blueprint"] = _obj.blueprint.spareBeltSegmentArray; }
    _json["id"] = _obj.id;
    _json["type"] = _obj.type;
}
inline void from_json(const nlohmann::json& _json, blueprints_t& _obj) {
    if ( _json["type"] == "paintJob" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.paintJob ); }
    else if ( _json["type"] == "chassis" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.chassis ); }
    else if ( _json["type"] == "decalTransform" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.decalTransform ); }
    else if ( _json["type"] == "structure" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.structure ); }
    else if ( _json["type"] == "trackWheel" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.trackWheel ); }
    else if ( _json["type"] == "engine" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.engine ); }
    else if ( _json["type"] == "transmission" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.transmission ); }
    else if ( _json["type"] == "cannon" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.cannon ); }
    else if ( _json["type"] == "trackWheelMount" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.trackWheelMount ); }
    else if ( _json["type"] == "trackWheelArray" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.trackWheelArray ); }
    else if ( _json["type"] == "track" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.track ); }
    else if ( _json["type"] == "shellSlot" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.shellSlot ); }
    else if ( _json["type"] == "trackBelt" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.trackBelt ); }
    else if ( _json["type"] == "suspension" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.suspension ); }
    else if ( _json["type"] == "torsionBar" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.torsionBar ); }
    else if ( _json["type"] == "layingDrive" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.layingDrive ); }
    else if ( _json["type"] == "fuelTank" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.fuelTank ); }
    else if ( _json["type"] == "crewSeat" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.crewSeat ); }
    else if ( _json["type"] == "posture" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.posture ); }
    else if ( _json["type"] == "turretRing" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.turretRing ); }
    else if ( _json["type"] == "turret" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.turret ); }
    else if ( _json["type"] == "motor" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.motor ); }
    else if ( _json["type"] == "turretBasket" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.turretBasket ); }
    else if ( _json["type"] == "cannonInstance" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.cannonInstance ); }
    else if ( _json["type"] == "ammoRack" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.ammoRack ); }
    else if ( _json["type"] == "decal" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.decal ); }
    else if ( _json["type"] == "paintJobRegister" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.paintJobRegister ); }
    else if ( _json["type"] == "spareBeltSegmentArray" ) { NLOHMANN_SAFE_GET( "blueprint", _obj.blueprint.spareBeltSegmentArray ); }
    _json.at("id").get_to( _obj.id );
    _json.at("type").get_to( _obj.type );
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
inline void to_json(nlohmann::json& _json, const root_t& _obj) {
    _json["blueprints"] = _obj.blueprints;
    _json["header"] = _obj.header;
    _json["meshes"] = _obj.meshes;
    _json["objects"] = _obj.objects;
    _json["v"] = _obj.v;
}
inline void from_json(const nlohmann::json& _json, root_t& _obj) {
    NLOHMANN_SAFE_GET( "blueprints", _obj.blueprints );
    NLOHMANN_SAFE_GET( "header", _obj.header );
    NLOHMANN_SAFE_GET( "meshes", _obj.meshes );
    NLOHMANN_SAFE_GET( "objects", _obj.objects );
    NLOHMANN_SAFE_GET( "v", _obj.v );
}
#endif

