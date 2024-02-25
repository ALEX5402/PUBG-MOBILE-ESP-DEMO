#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AI.EAISoundCollectType
enum class EAISoundCollectType : uint8_t
{
	EAISoundCollectType__AISoundCollectType_Step = 0,
	EAISoundCollectType__AISoundCollectType_Weapon = 1,
	EAISoundCollectType__AISoundCollectType_Vehicle = 2,
	EAISoundCollectType__AISoundCollectType_Horn = 3,
	EAISoundCollectType__AISoundCollectType_Grenade = 4,
	EAISoundCollectType__AISoundCollectType_MAX = 5
};


// Enum AI.ECustomDamageEventReactionType
enum class ECustomDamageEventReactionType : uint8_t
{
	ECustomDamageEventReactionType__SpawnActor = 0,
	ECustomDamageEventReactionType__ActiveParticles = 1,
	ECustomDamageEventReactionType__DetactiveParticles = 2,
	ECustomDamageEventReactionType__HideMesh = 3,
	ECustomDamageEventReactionType__HideMeshInstance = 4,
	ECustomDamageEventReactionType__HideBone = 5,
	ECustomDamageEventReactionType__ApplyPhysicalAnimationProfile = 6,
	ECustomDamageEventReactionType__SetCollisionEnabled = 7,
	ECustomDamageEventReactionType__ECustomDamageEventReactionType_MAX = 8
};


// Enum AI.ECustomDamageEventTriggerType
enum class ECustomDamageEventTriggerType : uint8_t
{
	ECustomDamageEventTriggerType__OnPassedDamageThreshold = 0,
	ECustomDamageEventTriggerType__OnAnyDamage = 1,
	ECustomDamageEventTriggerType__ECustomDamageEventTriggerType_MAX = 2
};


// Enum AI.ENearItemType
enum class ENearItemType : uint8_t
{
	ENearItemType__Box             = 0,
	ENearItemType__Item            = 1,
	ENearItemType__AirDropBox      = 2,
	ENearItemType__TreasureChest   = 3,
	ENearItemType__ENearItemType_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AI.ChildDynamicItem
// 0x0020
struct FChildDynamicItem
{
	int                                                Category;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     ChildName;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct AI.AIStateXYZ
// 0x000C
struct FAIStateXYZ
{
	float                                              X;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.SoundState
// 0x0014
struct FSoundState
{
	int                                                Type;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Location;                                                 // 0x0004(0x000C)
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.CacheSoundState
// 0x0018
struct FCacheSoundState
{
	struct FSoundState                                 SoundState;                                               // 0x0000(0x0014)
	float                                              Time;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIStateInfoBase
// 0x0010
struct FAIStateInfoBase
{
	TArray<struct FString>                             IgnoreNames;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIPlayerState
// 0x00A0 (0x00B0 - 0x0010)
struct FAIPlayerState : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	uint64_t                                           unique_id;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                expect_delivery_num;                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                remain_delivery_num;                                      // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           actor_id;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_id;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0030(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x003C(0x000C)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0048(0x000C)
	float                                              HP;                                                       // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Energy;                                                   // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              dying_hp;                                                 // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              oxygen;                                                   // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                active_weapon_slot;                                       // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                weapon_status;                                            // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_switching;                                             // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	int                                                alive_state;                                              // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kill_count;                                               // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Damages;                                                  // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_running;                                               // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_aiming;                                                // 0x007D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_left_probe;                                            // 0x007E(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_right_probe;                                           // 0x007F(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_floating;                                              // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_diving;                                                // 0x0081(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_vehicle_probe;                                         // 0x0082(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_in_vehicle;                                            // 0x0083(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_firing;                                                // 0x0084(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_holding;                                               // 0x0085(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_stun;                                                  // 0x0086(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_pose_acting;                                           // 0x0087(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_picking;                                               // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_weapon_near_wall;                                      // 0x0089(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	int                                                body_state;                                               // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                location_state;                                           // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_smoke;                                                // 0x0094(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	int                                                vehicle_role;                                             // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                player_type;                                              // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               in_delivery_pool;                                         // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	int                                                ai_level;                                                 // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_move_has_collision;                                    // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_lost_connection;                                       // 0x00A9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x00AA(0x0002) MISSED OFFSET
	int                                                revival_count;                                            // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIHeardSound
// 0x0010
struct FAIHeardSound
{
	TArray<struct FSoundState>                         heard_sound;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIDamageSources
// 0x0030
struct FAIDamageSources
{
	TArray<struct FAIStateXYZ>                         damage_source;                                            // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        damage_type;                                              // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        damage_weapon_type;                                       // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIDamageInfo
// 0x0018
struct FAIDamageInfo
{
	uint32_t                                           PlayerKey;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                damage_type;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                damage_weapon_type;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           damage_part;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              damage_before_cal_armor;                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIPlayerInteractInfo
// 0x0030
struct FAIPlayerInteractInfo
{
	TArray<struct FAIDamageInfo>                       active_damage;                                            // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FAIDamageInfo>                       passive_damage;                                           // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   kill_list;                                                // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.CameraState
// 0x0024
struct FCameraState
{
	struct FAIStateXYZ                                 Position;                                                 // 0x0000(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x000C(0x000C)
	struct FAIStateXYZ                                 view_position;                                            // 0x0018(0x000C)
};

// ScriptStruct AI.AIWeaponStateInfo
// 0x0038
struct FAIWeaponStateInfo
{
	int                                                slot_id;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Bullet;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bullet_in_backpak;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              remain_reloading;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        attachments;                                              // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FString>                             IgnoreNames;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIPlayerWeapon
// 0x0010
struct FAIPlayerWeapon
{
	TArray<struct FAIWeaponStateInfo>                  player_weapon;                                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIBackpackItem
// 0x000C
struct FAIBackpackItem
{
	int                                                Category;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIPlayerBackpack
// 0x0010
struct FAIPlayerBackpack
{
	TArray<struct FAIBackpackItem>                     backpack_item;                                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIEquipmentInfo
// 0x000C
struct FAIEquipmentInfo
{
	int                                                Category;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Durability;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIPlayerEquipment
// 0x0010
struct FAIPlayerEquipment
{
	TArray<struct FAIEquipmentInfo>                    equipment_item;                                           // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffStateInfoBase
// 0x0010
struct FDiffStateInfoBase
{
	TArray<struct FString>                             IgnoreNames;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.ProgressBarState
// 0x0010 (0x0020 - 0x0010)
struct FProgressBarState : public FDiffStateInfoBase
{
	int                                                Type;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              remain_time;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           targetid;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AINearbyPlayer
// 0x00D0 (0x00E0 - 0x0010)
struct FAINearbyPlayer : public FAIStateInfoBase
{
	struct FAIPlayerState                              State;                                                    // 0x0010(0x00B0)
	struct FAIPlayerWeapon                             Weapon;                                                   // 0x00C0(0x0010)
	struct FAIPlayerEquipment                          equipment;                                                // 0x00D0(0x0010)
};

// ScriptStruct AI.ItemStateData
// 0x0024
struct FItemStateData
{
	int                                                Type;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UId;                                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Durability;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0014(0x000C)
	uint32_t                                           player_id;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.ObstacleState
// 0x0028
struct FObstacleState
{
	int                                                Type;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HP;                                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              max_hp;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0010(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x001C(0x000C)
};

// ScriptStruct AI.AINearbyThrown
// 0x0028 (0x0038 - 0x0010)
struct FAINearbyThrown : public FDiffStateInfoBase
{
	int                                                Type;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0014(0x000C)
	float                                              remain_time;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              explode_time;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_own;                                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_held;                                                  // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	uint32_t                                           actorid;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           sourceid;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DoorState
// 0x0038
struct FDoorState
{
	struct FAIStateXYZ                                 Position;                                                 // 0x0000(0x000C)
	int                                                State;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FString>                             IgnoreNames;                                              // 0x0018(0x0010) (ZeroConstructor)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0028(0x000C)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIPlayerHitInfo
// 0x0014
struct FAIPlayerHitInfo
{
	int                                                fire_count;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hit_count;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hit_head_count;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hit_count_filter;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hit_head_filter;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.SafetyAreaState
// 0x0030
struct FSafetyAreaState
{
	int                                                State;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Center;                                                   // 0x0004(0x000C)
	float                                              Radius;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 next_center;                                              // 0x0014(0x000C)
	float                                              next_radius;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Time;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_time;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                circle_index;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.RedZoneState
// 0x0018
struct FRedZoneState
{
	struct FAIStateXYZ                                 Center;                                                   // 0x0000(0x000C)
	float                                              Radius;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              remain_time;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              start_time;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIGameState
// 0x0010
struct FAIGameState
{
	bool                                               is_over;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                alive_player_count;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Stage;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_map;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.VehicleDamageInfo
// 0x0014
struct FVehicleDamageInfo
{
	uint32_t                                           vehicle_id;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                damage_type;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_kill;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct AI.VehicleState
// 0x0090
struct FVehicleState
{
	uint32_t                                           ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0004(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0010(0x000C)
	float                                              HP;                                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              gas;                                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0024(0x000C)
	uint32_t                                           damaged_num;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Category;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_reverse;                                               // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               has_player;                                               // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_full;                                                  // 0x003A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x003B(0x0001) MISSED OFFSET
	struct FCameraState                                Camera;                                                   // 0x003C(0x0024)
	int                                                location_state;                                           // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<float>                                      wheels_hp;                                                // 0x0068(0x0010) (ZeroConstructor)
	TArray<struct FVehicleDamageInfo>                  damage_info;                                              // 0x0078(0x0010) (ZeroConstructor)
	bool                                               is_has_collision;                                         // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_using_horn;                                            // 0x0089(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x008A(0x0006) MISSED OFFSET
};

// ScriptStruct AI.AIBulletHoles
// 0x0020
struct FAIBulletHoles
{
	TArray<struct FAIStateXYZ>                         hole_pos;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FAIStateXYZ>                         hole_source_pos;                                          // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIRecipients
// 0x001C
struct FAIRecipients
{
	uint32_t                                           ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           team_id;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0008(0x000C)
	float                                              HP;                                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Type;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.SpecialZoneState
// 0x0034
struct FSpecialZoneState
{
	uint32_t                                           ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Center;                                                   // 0x0004(0x000C)
	float                                              Radius;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Type;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                custom_state;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x001C(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0028(0x000C)
};

// ScriptStruct AI.DynamicItem
// 0x0024
struct FDynamicItem
{
	int                                                Category;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ID;                                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Center;                                                   // 0x0008(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0014(0x000C)
	float                                              Durability;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIStateInfo
// 0x0358 (0x0368 - 0x0010)
struct FAIStateInfo : public FAIStateInfoBase
{
	struct FAIPlayerState                              State;                                                    // 0x0010(0x00B0)
	struct FAIHeardSound                               Sound;                                                    // 0x00C0(0x0010)
	struct FAIDamageSources                            damage_sources;                                           // 0x00D0(0x0030)
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x0100(0x0030)
	struct FCameraState                                Camera;                                                   // 0x0130(0x0024)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	struct FAIPlayerWeapon                             Weapon;                                                   // 0x0158(0x0010)
	struct FAIPlayerBackpack                           BackPack;                                                 // 0x0168(0x0010)
	struct FAIPlayerEquipment                          equipment;                                                // 0x0178(0x0010)
	struct FProgressBarState                           progress_bar;                                             // 0x0188(0x0020)
	TArray<struct FAINearbyPlayer>                     nearby_player;                                            // 0x01A8(0x0010) (ZeroConstructor)
	TArray<struct FItemStateData>                      nearby_item;                                              // 0x01B8(0x0010) (ZeroConstructor)
	TArray<struct FObstacleState>                      nearby_obstacle;                                          // 0x01C8(0x0010) (ZeroConstructor)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x01D8(0x0010) (ZeroConstructor)
	TArray<struct FDoorState>                          nearby_door;                                              // 0x01E8(0x0010) (ZeroConstructor)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x01F8(0x0014)
	struct FSafetyAreaState                            safety_area;                                              // 0x020C(0x0030)
	struct FRedZoneState                               red_zone;                                                 // 0x023C(0x0018)
	struct FAIGameState                                Game;                                                     // 0x0254(0x0010)
	uint32_t                                           Key;                                                      // 0x0264(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           deliver_target_id;                                        // 0x0268(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	struct FVehicleState                               vehicle_state;                                            // 0x0270(0x0090)
	TArray<struct FVehicleState>                       nearby_vehicles;                                          // 0x0300(0x0010) (ZeroConstructor)
	struct FAIBulletHoles                              bullet_holes;                                             // 0x0310(0x0020)
	TArray<struct FAIRecipients>                       recipients;                                               // 0x0330(0x0010) (ZeroConstructor)
	TArray<struct FSpecialZoneState>                   special_zones;                                            // 0x0340(0x0010) (ZeroConstructor)
	TArray<struct FDynamicItem>                        dynamic_items;                                            // 0x0350(0x0010) (ZeroConstructor)
	uint32_t                                           ai_style;                                                 // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffStateInfoInt32
// 0x0004
struct FDiffStateInfoInt32
{
	int                                                Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffStateInfoFloat
// 0x0004
struct FDiffStateInfoFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffStateInfoVector
// 0x000C
struct FDiffStateInfoVector
{
	struct FDiffStateInfoFloat                         X;                                                        // 0x0000(0x0004)
	struct FDiffStateInfoFloat                         Y;                                                        // 0x0004(0x0004)
	struct FDiffStateInfoFloat                         Z;                                                        // 0x0008(0x0004)
};

// ScriptStruct AI.DiffStateInfoBool
// 0x0001
struct FDiffStateInfoBool
{
	bool                                               Value;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffAIPlayerState
// 0x0080 (0x0090 - 0x0010)
struct FDiffAIPlayerState : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoInt32                         actor_id;                                                 // 0x0014(0x0004)
	struct FDiffStateInfoInt32                         team_id;                                                  // 0x0018(0x0004)
	struct FDiffStateInfoVector                        Position;                                                 // 0x001C(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x0028(0x000C)
	struct FDiffStateInfoVector                        Speed;                                                    // 0x0034(0x000C)
	struct FDiffStateInfoFloat                         HP;                                                       // 0x0040(0x0004)
	struct FDiffStateInfoFloat                         Energy;                                                   // 0x0044(0x0004)
	struct FDiffStateInfoFloat                         dying_hp;                                                 // 0x0048(0x0004)
	struct FDiffStateInfoFloat                         oxygen;                                                   // 0x004C(0x0004)
	struct FDiffStateInfoInt32                         active_weapon_slot;                                       // 0x0050(0x0004)
	struct FDiffStateInfoInt32                         weapon_status;                                            // 0x0054(0x0004)
	struct FDiffStateInfoBool                          is_switching;                                             // 0x0058(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         alive_state;                                              // 0x005C(0x0004)
	struct FDiffStateInfoInt32                         kill_count;                                               // 0x0060(0x0004)
	struct FDiffStateInfoInt32                         Damages;                                                  // 0x0064(0x0004)
	struct FDiffStateInfoBool                          is_running;                                               // 0x0068(0x0001)
	struct FDiffStateInfoBool                          is_aiming;                                                // 0x0069(0x0001)
	struct FDiffStateInfoBool                          is_left_probe;                                            // 0x006A(0x0001)
	struct FDiffStateInfoBool                          is_right_probe;                                           // 0x006B(0x0001)
	struct FDiffStateInfoBool                          is_floating;                                              // 0x006C(0x0001)
	struct FDiffStateInfoBool                          is_diving;                                                // 0x006D(0x0001)
	struct FDiffStateInfoBool                          is_vehicle_probe;                                         // 0x006E(0x0001)
	struct FDiffStateInfoBool                          is_in_vehicle;                                            // 0x006F(0x0001)
	struct FDiffStateInfoBool                          is_firing;                                                // 0x0070(0x0001)
	struct FDiffStateInfoBool                          is_holding;                                               // 0x0071(0x0001)
	struct FDiffStateInfoBool                          is_stun;                                                  // 0x0072(0x0001)
	struct FDiffStateInfoBool                          is_pose_acting;                                           // 0x0073(0x0001)
	struct FDiffStateInfoBool                          is_picking;                                               // 0x0074(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         body_state;                                               // 0x0078(0x0004)
	struct FDiffStateInfoInt32                         location_state;                                           // 0x007C(0x0004)
	struct FDiffStateInfoBool                          has_smoke;                                                // 0x0080(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         vehicle_role;                                             // 0x0084(0x0004)
	struct FDiffStateInfoInt32                         player_type;                                              // 0x0088(0x0004)
	struct FDiffStateInfoInt32                         revival_count;                                            // 0x008C(0x0004)
};

// ScriptStruct AI.DiffCameraState
// 0x0028 (0x0038 - 0x0010)
struct FDiffCameraState : public FDiffStateInfoBase
{
	struct FDiffStateInfoVector                        Position;                                                 // 0x0010(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x001C(0x000C)
	struct FDiffStateInfoVector                        view_position;                                            // 0x0028(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAIWeaponStateInfo
// 0x0028 (0x0038 - 0x0010)
struct FDiffAIWeaponStateInfo : public FDiffStateInfoBase
{
	uint32_t                                           slot_id;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoInt32                         Category;                                                 // 0x0014(0x0004)
	struct FDiffStateInfoInt32                         Type;                                                     // 0x0018(0x0004)
	struct FDiffStateInfoInt32                         Bullet;                                                   // 0x001C(0x0004)
	struct FDiffStateInfoFloat                         remain_reloading;                                         // 0x0020(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<int>                                        attachments;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerWeapon
// 0x0020 (0x0030 - 0x0010)
struct FDiffAIPlayerWeapon : public FDiffStateInfoBase
{
	TArray<struct FDiffAIWeaponStateInfo>              player_weapon;                                            // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffStateInfoUInt32
// 0x0004
struct FDiffStateInfoUInt32
{
	uint32_t                                           Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffAIBackpackItem
// 0x0010 (0x0020 - 0x0010)
struct FDiffAIBackpackItem : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Category;                                                 // 0x0010(0x0004)
	uint32_t                                           ID;                                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoUInt32                        Count;                                                    // 0x0018(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffPlayerBackpack
// 0x0020 (0x0030 - 0x0010)
struct FDiffPlayerBackpack : public FDiffStateInfoBase
{
	TArray<struct FDiffAIBackpackItem>                 backpack_item;                                            // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIEquipmentInfo
// 0x0010 (0x0020 - 0x0010)
struct FDiffAIEquipmentInfo : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Category;                                                 // 0x0010(0x0004)
	uint32_t                                           ID;                                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoFloat                         Durability;                                               // 0x0018(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAIPlayerEquipment
// 0x0020 (0x0030 - 0x0010)
struct FDiffAIPlayerEquipment : public FDiffStateInfoBase
{
	TArray<struct FDiffAIEquipmentInfo>                equipment_item;                                           // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffProgressBarState
// 0x0008 (0x0018 - 0x0010)
struct FDiffProgressBarState : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Type;                                                     // 0x0010(0x0004)
	struct FDiffStateInfoFloat                         remain_time;                                              // 0x0014(0x0004)
};

// ScriptStruct AI.DiffAINearbyPlayer
// 0x00F0 (0x0100 - 0x0010)
struct FDiffAINearbyPlayer : public FDiffStateInfoBase
{
	struct FDiffAIPlayerState                          State;                                                    // 0x0010(0x0090)
	struct FDiffAIPlayerWeapon                         Weapon;                                                   // 0x00A0(0x0030)
	struct FDiffAIPlayerEquipment                      equipment;                                                // 0x00D0(0x0030)
};

// ScriptStruct AI.DiffAINearbyPlayers
// 0x0020 (0x0030 - 0x0010)
struct FDiffAINearbyPlayers : public FDiffStateInfoBase
{
	TArray<struct FDiffAINearbyPlayer>                 Players;                                                  // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffItemStateData
// 0x0028 (0x0038 - 0x0010)
struct FDiffItemStateData : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Type;                                                     // 0x0010(0x0004)
	struct FDiffStateInfoInt32                         Category;                                                 // 0x0014(0x0004)
	struct FDiffStateInfoUInt32                        ID;                                                       // 0x0018(0x0004)
	int                                                UId;                                                      // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoVector                        Position;                                                 // 0x0020(0x000C)
	struct FDiffStateInfoFloat                         Durability;                                               // 0x002C(0x0004)
	struct FDiffStateInfoUInt32                        player_id;                                                // 0x0030(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffItemStateDatas
// 0x0020 (0x0030 - 0x0010)
struct FDiffItemStateDatas : public FDiffStateInfoBase
{
	TArray<struct FDiffItemStateData>                  Items;                                                    // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffSafetyAreaState
// 0x0030 (0x0040 - 0x0010)
struct FDiffSafetyAreaState : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         State;                                                    // 0x0010(0x0004)
	struct FDiffStateInfoVector                        Center;                                                   // 0x0014(0x000C)
	struct FDiffStateInfoFloat                         Radius;                                                   // 0x0020(0x0004)
	struct FDiffStateInfoVector                        next_center;                                              // 0x0024(0x000C)
	struct FDiffStateInfoFloat                         next_radius;                                              // 0x0030(0x0004)
	struct FDiffStateInfoInt32                         Time;                                                     // 0x0034(0x0004)
	struct FDiffStateInfoInt32                         total_time;                                               // 0x0038(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAIGameState
// 0x0008 (0x0018 - 0x0010)
struct FDiffAIGameState : public FDiffStateInfoBase
{
	struct FDiffStateInfoBool                          is_over;                                                  // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         alive_player_count;                                       // 0x0014(0x0004)
};

// ScriptStruct AI.DiffRedZoneState
// 0x0018 (0x0028 - 0x0010)
struct FDiffRedZoneState : public FDiffStateInfoBase
{
	struct FDiffStateInfoVector                        Center;                                                   // 0x0010(0x000C)
	struct FDiffStateInfoFloat                         Radius;                                                   // 0x001C(0x0004)
	struct FDiffStateInfoFloat                         remain_time;                                              // 0x0020(0x0004)
	struct FDiffStateInfoFloat                         start_time;                                               // 0x0024(0x0004)
};

// ScriptStruct AI.DiffVehicleState
// 0x0080 (0x0090 - 0x0010)
struct FDiffVehicleState : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoVector                        Position;                                                 // 0x0014(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x0020(0x000C)
	struct FDiffStateInfoFloat                         HP;                                                       // 0x002C(0x0004)
	struct FDiffStateInfoFloat                         gas;                                                      // 0x0030(0x0004)
	struct FDiffStateInfoVector                        Speed;                                                    // 0x0034(0x000C)
	struct FDiffStateInfoUInt32                        damaged_num;                                              // 0x0040(0x0004)
	struct FDiffStateInfoUInt32                        Category;                                                 // 0x0044(0x0004)
	struct FDiffStateInfoBool                          is_reverse;                                               // 0x0048(0x0001)
	struct FDiffStateInfoBool                          has_player;                                               // 0x0049(0x0001)
	struct FDiffStateInfoBool                          is_full;                                                  // 0x004A(0x0001)
	unsigned char                                      UnknownData00[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	struct FDiffCameraState                            Camera;                                                   // 0x0050(0x0038)
	struct FDiffStateInfoInt32                         location_state;                                           // 0x0088(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffVehicleStates
// 0x0020 (0x0030 - 0x0010)
struct FDiffVehicleStates : public FDiffStateInfoBase
{
	TArray<struct FDiffVehicleState>                   vehicle_states;                                           // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffSpecialZoneState
// 0x0038 (0x0048 - 0x0010)
struct FDiffSpecialZoneState : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoVector                        Center;                                                   // 0x0014(0x000C)
	struct FDiffStateInfoFloat                         Radius;                                                   // 0x0020(0x0004)
	struct FDiffStateInfoUInt32                        Type;                                                     // 0x0024(0x0004)
	struct FDiffStateInfoVector                        Position;                                                 // 0x0028(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x0034(0x000C)
	struct FDiffStateInfoInt32                         custom_state;                                             // 0x0040(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffSpecialZone
// 0x0020 (0x0030 - 0x0010)
struct FDiffSpecialZone : public FDiffStateInfoBase
{
	TArray<struct FDiffSpecialZoneState>               State;                                                    // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffDynamicItem
// 0x0028 (0x0038 - 0x0010)
struct FDiffDynamicItem : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Category;                                                 // 0x0010(0x0004)
	uint32_t                                           ID;                                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoVector                        Center;                                                   // 0x0018(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x0024(0x000C)
	struct FDiffStateInfoFloat                         Durability;                                               // 0x0030(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffDynamicItemStates
// 0x0020 (0x0030 - 0x0010)
struct FDiffDynamicItemStates : public FDiffStateInfoBase
{
	TArray<struct FDiffDynamicItem>                    dynamic_items;                                            // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIStateInfo
// 0x0448 (0x0458 - 0x0010)
struct FDiffAIStateInfo : public FDiffStateInfoBase
{
	struct FDiffAIPlayerState                          State;                                                    // 0x0010(0x0090)
	struct FAIHeardSound                               Sound;                                                    // 0x00A0(0x0010)
	struct FDiffCameraState                            Camera;                                                   // 0x00B0(0x0038)
	struct FDiffAIPlayerWeapon                         Weapon;                                                   // 0x00E8(0x0030)
	struct FDiffPlayerBackpack                         BackPack;                                                 // 0x0118(0x0030)
	struct FDiffAIPlayerEquipment                      equipment;                                                // 0x0148(0x0030)
	struct FDiffProgressBarState                       progress_bar;                                             // 0x0178(0x0018)
	struct FDiffAINearbyPlayers                        nearby_player;                                            // 0x0190(0x0030)
	struct FDiffItemStateDatas                         nearby_item;                                              // 0x01C0(0x0030)
	TArray<struct FObstacleState>                      nearby_obstacle;                                          // 0x01F0(0x0010) (ZeroConstructor)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x0200(0x0010) (ZeroConstructor)
	struct FDiffSafetyAreaState                        safety_area;                                              // 0x0210(0x0040)
	struct FDiffAIGameState                            Game;                                                     // 0x0250(0x0018)
	TArray<struct FDoorState>                          nearby_door;                                              // 0x0268(0x0010) (ZeroConstructor)
	struct FDiffRedZoneState                           red_zone;                                                 // 0x0278(0x0028)
	struct FAIDamageSources                            damage_sources;                                           // 0x02A0(0x0030)
	uint32_t                                           Key;                                                      // 0x02D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	TArray<struct FItemStateData>                      nearby_box_item;                                          // 0x02D8(0x0010) (ZeroConstructor)
	struct FDiffVehicleState                           vehicle_state;                                            // 0x02E8(0x0090)
	struct FDiffVehicleStates                          nearby_vehicles;                                          // 0x0378(0x0030)
	TArray<struct FAIRecipients>                       recipients;                                               // 0x03A8(0x0010) (ZeroConstructor)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x03B8(0x0014)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	struct FAIBulletHoles                              bullet_holes;                                             // 0x03D0(0x0020)
	struct FDiffSpecialZone                            special_zone;                                             // 0x03F0(0x0030)
	struct FDiffDynamicItemStates                      dynamic_item_states;                                      // 0x0420(0x0030)
	uint32_t                                           ai_style;                                                 // 0x0450(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
};

// ScriptStruct AI.CacheNearbyItemState
// 0x0020
struct FCacheNearbyItemState
{
	TArray<struct FItemStateData>                      States;                                                   // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     Position;                                                 // 0x0010(0x000C) (IsPlainOldData)
	bool                                               IsDirty;                                                  // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct AI.TLogAIShootInfo
// 0x000C
struct FTLogAIShootInfo
{
	int                                                TargetDistance;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TargetType;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WeaponID;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.CustomDamageEventRow
// 0x00E0 (0x00E8 - 0x0008)
struct FCustomDamageEventRow : public FTableRowBase
{
	bool                                               bProcessedLocally;                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FGuid                                       EventId;                                                  // 0x000C(0x0010) (Edit, EditConst, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClientOnly;                                              // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicate;                                               // 0x001E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyReplicateWhenRelevant;                               // 0x001F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EventTriggerType;                                         // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              TriggerCooldown;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HealthPercentageThreshold;                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerWhenDead;                                         // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EventReactionType;                                        // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	unsigned char                                      UnknownData03[0x28];                                      // 0x002E(0x0028) UNKNOWN PROPERTY: SoftClassProperty AI.CustomDamageEventRow.ActorClassToSpawn
	bool                                               bTriggersGlobalCooldown;                                  // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLockedByGlobalCooldown;                                  // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData05[0x28];                                      // 0x005A(0x0028) UNKNOWN PROPERTY: SoftClassProperty AI.CustomDamageEventRow.OnCooldownActorClassToSpawn
	bool                                               bDestroySpawnedParticlesWithOwner;                        // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FName                                       AttachComponentTag;                                       // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SpawnSocketName;                                          // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CustomSpawnTransformTag;                                  // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnAtRandomPointInBoundingBox;                         // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomSpawnRotation;                                  // 0x00A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MinToSpawn;                                               // 0x00AA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxToSpawn;                                               // 0x00AB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FName                                       ActorSpawnTag;                                            // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       MeshComponentTag;                                         // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MeshInstanceIndex;                                        // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PhysicsAssetProfileName;                                  // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CollisionPrimitiveTag;                                    // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
};

// ScriptStruct AI.TriggeredCustomDamageEvent
// 0x00F0
struct FTriggeredCustomDamageEvent
{
	struct FCustomDamageEventRow                       Event;                                                    // 0x0000(0x00E8)
	float                                              TimeTriggered;                                            // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
};

// ScriptStruct AI.VehicleDamageInfoContainer
// 0x0010
struct FVehicleDamageInfoContainer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AI.BulletHole
// 0x0018
struct FBulletHole
{
	struct FVector                                     ImpactPoint;                                              // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     SourcePoint;                                              // 0x000C(0x000C) (IsPlainOldData)
};

// ScriptStruct AI.BulletHoleRecordInfo
// 0x0008 (0x0020 - 0x0018)
struct FBulletHoleRecordInfo : public FBulletHole
{
	class APawn*                                       ShootPawn;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DebugAIParamConfig
// 0x0018
struct FDebugAIParamConfig
{
	int                                                DistMin;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DistMax;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     NameAndDegree;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIWinnerState
// 0x0008 (0x0018 - 0x0010)
struct FAIWinnerState : public FDiffStateInfoBase
{
	int                                                team_id;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                player_id;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

