#include <stdint.h>
#include <string>
#include <vector>

struct segments_t
{
    uint32_t depth;
    uint32_t diameter;
};
struct azimuth_t
{
    uint32_t flags;
    float max;
    float min;
    float ratio;
    float torqueMultiplier;
    std::string v;
};
struct elevation_t
{
    uint32_t flags;
    float max;
    float min;
    float ratio;
    float torqueMultiplier;
    std::string v;
};
struct definition_t
{
    uint32_t penetratorConstant;
};
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
struct faces_t
{
    std::vector<uint32_t> t;
    uint32_t te;
    uint32_t tm;
    std::vector<uint32_t> v;
};
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
struct profiles_t
{
    float diameter;
    float height;
    uint32_t model;
    float padding;
    float spacing;
};
struct transform_t
{
    int32_t mirrorVuid;
    std::vector<float> pos;
    std::vector<float> rot;
    std::vector<float> scale;
};
struct clutchBrakingBlueprint_t
{
    uint32_t engineID;
    uint32_t leftPropulsionID;
    uint32_t rightPropulsionID;
    uint32_t transmissionID;
    std::string v;
};
struct connections_t
{
    uint32_t flags;
    uint32_t id;
    uint32_t providerID;
    uint32_t receiverID;
};
struct modules_t
{
    uint32_t behaviourID;
    uint32_t flags;
    uint32_t id;
    int32_t mirrorID;
    uint32_t type;
};
struct ports_t
{
    uint32_t flags;
    uint32_t id;
    uint32_t moduleID;
};
struct trackInstanceInfo_t
{
    uint32_t idlerMountVuid;
    bool leftSide;
    uint32_t roadwheelArrayVuid;
    uint32_t rollerArrayVuid;
    uint32_t sprocketMountVuid;
    std::string v;
};
struct mantletBlueprint_t
{
    uint32_t drive_vuid;
    int32_t shield_vuid;
    uint32_t trunnions_vuid;
};
struct functions_t
{
    definition_t definition;
    std::string id;
};
struct mesh_t
{
    std::vector<uint32_t> edgeFlags;
    std::vector<uint32_t> edges;
    std::vector<faces_t> faces;
    uint32_t majorVersion;
    uint32_t minorVersion;
    std::vector<float> vertices;
};
struct rivets_t
{
    std::vector<nodes_t> nodes;
    std::vector<profiles_t> profiles;
};
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
struct generatedProjectiles_t
{
    std::vector<functions_t> functions;
    std::string projectileTypeGuid;
};
struct plateStructureMesh_t
{
    std::string format;
    uint32_t gridSize;
    mesh_t mesh;
    rivets_t rivets;
    uint32_t smoothAngle;
    std::string v;
};
struct powertrainBlueprint_t
{
    uint32_t controlVuid;
    layout_t layout;
    std::string v;
};
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
struct chassis_t
{
    std::string description;
    uint32_t groundClearance;
    uint32_t length;
    std::string name;
    std::string v;
    uint32_t width;
};
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
struct structure_t
{
    float armourVolume;
    uint32_t bodyMeshVuid;
    std::string description;
    std::string name;
    bool partRepositioning;
    std::string v;
};
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
struct shellSlot_t
{
    std::string description;
    uint32_t diameter;
    std::vector<generatedProjectiles_t> generatedProjectiles;
    std::string name;
    uint32_t propellantLength;
    std::string v;
};
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
struct torsionBar_t
{
    std::string description;
    std::string name;
    uint32_t torsionBarDiameter;
    uint32_t torsionBarLength;
    std::string v;
};
struct layingDrive_t
{
    azimuth_t azimuth;
    std::string description;
    elevation_t elevation;
    std::string name;
    std::string v;
};
struct fuelTank_t
{
    std::string description;
    std::string name;
    std::string v;
    uint32_t x;
    uint32_t y;
    uint32_t z;
};
struct crewSeat_t
{
    float baseEfficiency;
    std::string description;
    std::string name;
    std::vector<uint32_t> operatedBehaviours;
    std::string v;
};
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
struct turret_t
{
    std::string description;
    uint32_t maxRot;
    int32_t minRot;
    std::string name;
    std::string v;
};
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
struct turretBasket_t
{
    std::string description;
    std::string name;
    std::vector<segments_t> segments;
    std::string v;
};
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
struct decal_t
{
    std::string description;
    std::string imageURL;
    std::string name;
    std::string v;
};
struct paintJobRegister_t
{
    std::string description;
    std::string name;
    std::vector<uint32_t> paintJobIDs;
    std::string v;
};
struct spareBeltSegmentArray_t
{
    uint32_t count;
    std::string description;
    std::string name;
    std::string v;
};
struct meshes_t // variant container 
{ 
    union meshData_t {
       plateStructureMesh_t plateStructureMesh;
    } meshData;
    std::string type;
    uint32_t vuid;
};
struct blueprints_t // variant container 
{ 
    union blueprint_t {
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
struct root_t
{
    std::vector<blueprints_t> blueprints;
    header_t header;
    std::vector<meshes_t> meshes;
    std::vector<objects_t> objects;
    std::string v;
};
