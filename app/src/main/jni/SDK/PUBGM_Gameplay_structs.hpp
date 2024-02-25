#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Gameplay.EBattleItemOperationType
enum class EBattleItemOperationType : uint8_t
{
	EBattleItemOperationType__Pickup = 0,
	EBattleItemOperationType__Drop = 1,
	EBattleItemOperationType__Use  = 2,
	EBattleItemOperationType__Disuse = 3,
	EBattleItemOperationType__Enable = 4,
	EBattleItemOperationType__Disable = 5,
	EBattleItemOperationType__EBattleItemOperationType_MAX = 6
};


// Enum Gameplay.EBattleItemOperationFailedReason
enum class EBattleItemOperationFailedReason : uint8_t
{
	EBattleItemOperationFailedReason__PickupFailed_Default = 0,
	EBattleItemOperationFailedReason__PickupFailed_CapacityExceeded = 1,
	EBattleItemOperationFailedReason__PickupFailed_ItemCountExceeded = 2,
	EBattleItemOperationFailedReason__PickupFailed_PickupLimitExceeded = 3,
	EBattleItemOperationFailedReason__DropFailed_Default = 4,
	EBattleItemOperationFailedReason__UseFailed_Default = 5,
	EBattleItemOperationFailedReason__UseFailed_CapacityExceeded = 6,
	EBattleItemOperationFailedReason__UseFailed_SafeBagCapacityExceeded = 7,
	EBattleItemOperationFailedReason__DisuseFailed_Default = 8,
	EBattleItemOperationFailedReason__DisuseFailed_CapacityExceeded = 9,
	EBattleItemOperationFailedReason__DisuseFailed_SafeBagCapacityExceeded = 10,
	EBattleItemOperationFailedReason__EBattleItemOperationFailedReason_MAX = 11
};


// Enum Gameplay.EObserverEnemyTraceType
enum class EObserverEnemyTraceType : uint8_t
{
	EObserverEnemyTraceType__None  = 0,
	EObserverEnemyTraceType__FriendObserve = 1,
	EObserverEnemyTraceType__DeathObserve = 2,
	EObserverEnemyTraceType__Both  = 3,
	EObserverEnemyTraceType__EObserverEnemyTraceType_MAX = 4
};


// Enum Gameplay.ECharacterAnimType
enum class ECharacterAnimType : uint8_t
{
	ECharAnim_Move                 = 0,
	ECharAnim_Aim                  = 1,
	ECharAnim_ToStand              = 2,
	ECharAnim_ToCrouch             = 3,
	ECharAnim_ToProne              = 4,
	ECharAnim_PickM                = 5,
	ECharAnim_PickL                = 6,
	ECharAnim_Equip_Primary        = 7,
	ECharAnim_Equip_Secondary      = 8,
	ECharAnim_Equip_Pistol         = 9,
	ECharAnim_Equip_Melee          = 10,
	ECharAnim_Equip_Thrown         = 11,
	ECharAnim_Hurt                 = 12,
	ECharAnim_Reload               = 13,
	ECharAnim_TacticsReload        = 14,
	ECharAnim_JuggleStypeReload    = 15,
	ECharAnim_ReloadType1          = 16,
	ECharAnim_Fire_Single          = 17,
	ECharAnim_Fire_Burst           = 18,
	ECharAnim_Fire_Auto            = 19,
	ECharAnim_Accumulate           = 20,
	ECharAnim_PostFire             = 21,
	ECharAnim_Turn_L               = 22,
	ECharAnim_Turn_R               = 23,
	ECharAnim_PullingPlug          = 24,
	ECharAnim_PutDownWeapon        = 25,
	ECharAnim_WeaponIdle           = 26,
	ECharAnim_VehWeaponIdle        = 27,
	ECharAnim_VehWeaponIdle_Down   = 28,
	ECharAnim_VehWeaponAim         = 29,
	ECharAnim_VehWeaponReload      = 30,
	ECharAnim_Peek                 = 31,
	ECharAnim_PeekScope            = 32,
	ECharAnim_PeekLeftAim          = 33,
	ECharAnim_PeekRightAim         = 34,
	ECharAnim_ForegripAnim         = 35,
	ECharAnim_Fire_Scope           = 36,
	ECharAnim_SprintToProne        = 37,
	ECharAnim_OpenDoor             = 38,
	ECharAnim_Shovel               = 39,
	ECharAnim_StandbyIdle          = 40,
	ECharAnim_StandbyIdle01        = 41,
	ECharAnim_ColdStandbyIdle      = 42,
	ECharAnim_ColdStandbyIdle01    = 43,
	ECharAnim_MovementUpBodyOverride = 44,
	ECharAnim_GrenadeLaunchAnim    = 45,
	ECharAnim_GrenadeLaunchReload  = 46,
	ECharAnim_GrenadeLaunchTacticsReload = 47,
	ECharAnim_FillGas              = 48,
	ECharAnim_DropWeapon           = 49,
	ECharAnim_ShoulderWeaponIdle   = 50,
	ECharAnim_BeCarriedBackMove    = 51,
	ECharAnim_BeCarriedBackPickM   = 52,
	ECharAnim_BeCarriedBackPickL   = 53,
	ECharAnim_BeCarriedBackOpenDoor = 54,
	ECharAnim_ScopeBlendAnim       = 55,
	ECharAnim_MovementLowerBodyOverride = 56,
	ECharAnim_Max                  = 57
};


// Enum Gameplay.ECharacterMoveDragReason
enum class ECharacterMoveDragReason : uint8_t
{
	ECharacterMoveDragReason__CMDR_UnknowReason = 0,
	ECharacterMoveDragReason__CMDR_ExceedsDistance = 1,
	ECharacterMoveDragReason__CMDR_MovementModeError = 2,
	ECharacterMoveDragReason__CMDR_PassWall = 3,
	ECharacterMoveDragReason__CMDR_Imprisonment = 4,
	ECharacterMoveDragReason__CMDR_ServerControlPunish = 5,
	ECharacterMoveDragReason__CMDR_ClientLocAndRotErrorProne = 6,
	ECharacterMoveDragReason__CMDR_ResolvingTimeDiscrepancy = 7,
	ECharacterMoveDragReason__CMDR_ExceedMaxZMove = 8,
	ECharacterMoveDragReason__CMDR_OtherSecurity = 9,
	ECharacterMoveDragReason__CMDR_LagPktOrSpeedOverLimit = 10,
	ECharacterMoveDragReason__CMDR_MAX = 11
};


// Enum Gameplay.ECharacterGender
enum class ECharacterGender : uint8_t
{
	ECharacterGender__Male         = 0,
	ECharacterGender__Female       = 1,
	ECharacterGender__ECharacterGender_MAX = 2
};


// Enum Gameplay.ECharacterPoseType
enum class ECharacterPoseType : uint8_t
{
	ECharPose_Stand                = 0,
	ECharPose_Crouch               = 1,
	ECharPose_Prone                = 2,
	ECharPose_Max                  = 3
};


// Enum Gameplay.ECharAnimEventType
enum class ECharAnimEventType : uint8_t
{
	ECharAnimEvent_PoseChange      = 0,
	ECharAnimEvent_PickUp          = 1,
	ECharAnimEvent_Fire            = 2,
	ECharAnimEvent_Reload          = 3,
	ECharAnimEvent_Switch          = 4,
	ECharAnimEvent_Peek            = 5,
	ECharAnimEvent_PeekAim         = 6,
	ECharAnimEvent_Bolt            = 7,
	ECharAnimEvent_FillGas         = 8,
	ECharAnimEvent_DropWeapon      = 9,
	ECharAnimEvent_BeCarriedBackPickUp = 10,
	ECharAnimEvent_PostFire        = 11,
	ECharAnimEvent_Max             = 12
};


// Enum Gameplay.ECharacterJumpType
enum class ECharacterJumpType : uint8_t
{
	ECharJump_InPlace              = 0,
	ECharJump_Forward              = 1,
	ECharJump_Max                  = 2
};


// Enum Gameplay.ECharacterVehicleAnimType
enum class ECharacterVehicleAnimType : uint8_t
{
	ECharVehAnim_Idle              = 0,
	ECharVehAnim_IdleWithWeapon    = 1,
	ECharVehAnim_LeanOut           = 2,
	ECharVehAnim_LeanIn            = 3,
	ECharVehAnim_Aim               = 4,
	ECharVehAnim_Scope             = 5,
	ECharVehAnim_AimFPPCommon      = 6,
	ECharVehAnim_MotorbikeIdle     = 7,
	ECharVehAnim_MotorbikeVacate   = 8,
	ECharVehAnim_MotorbikeDriverLeaning = 9,
	ECharVehAnim_MotorbikeDriverLeaningLowSpeed = 10,
	ECharVehAnim_MotorbikeDriverLeaningGroundPitch = 11,
	ECharVehAnim_MotorbikePassengerIdleBaseDriverOff = 12,
	ECharVehAnim_MotorbikePassengerIdleBaseWithGunDriverOff = 13,
	ECharVehAnim_MotorbikePassengerIdleBaseWithMeleeDriverOff = 14,
	ECharVehAnim_MotorbikePassengerIdleBaseWithThrowObjDriverOff = 15,
	ECharVehAnim_MotorbikePassengerDriverOffAim = 16,
	ECharVehAnim_MotorbikePassengerIdleLeaning = 17,
	ECharVehAnim_MotorbikePassengerIdleBaseDriverOn = 18,
	ECharVehAnim_MotorbikePassengerIdleBaseWithGunDriverOn = 19,
	ECharVehAnim_MotorbikePassengerIdleBaseWithMeleeDriverOn = 20,
	ECharVehAnim_MotorbikePassengerIdleBaseWithThrowObjDriverOn = 21,
	ECharVehAnim_Jump0             = 22,
	ECharVehAnim_Jump1             = 23,
	ECharVehAnim_Jump2             = 24,
	ECharVehAnim_Jump3             = 25,
	ECharVehAnim_SpeedUpByFoot     = 26,
	ECharVehAnim_BrakeByFoot       = 27,
	ECharVehAnim_Falling           = 28,
	ECharVehAnim_FallLand_Additve  = 29,
	ECharVehAnim_FallLand_Hard     = 30,
	ECharVehAnim_Enter             = 31,
	ECharVehAnim_Enter2            = 32,
	ECharVehAnim_Leave             = 33,
	ECharVehAnim_StandIdle         = 34,
	ECharVehAnim_IdleProne         = 35,
	ECharVehAnim_EnterProne        = 36,
	ECharVehAnim_LeaveProne        = 37,
	ECharVehAnim_VehicleWeaponReload = 38,
	ECharVehAnim_VehicleWeaponFire = 39,
	ECharVehAnim_VehicleWeaponAimOffset = 40,
	ECharVehAnim_VehicleWeaponEquip = 41,
	ECharVehAnim_VehicleWeaponUnEquip = 42,
	ECharVehAnim_MotorgliderIdle   = 43,
	ECharVehAnim_MotorgliderSteer  = 44,
	ECharVehAnim_IdleWithWeapon_Down = 45,
	ECharVehAnim_DriverFoward      = 46,
	ECharVehAnim_Bike_NormalDriveAnim = 47,
	ECharVehAnim_Bike_SprintDriveAnim = 48,
	ECharVehAnim_Bike_SpeedLeaningAnim = 49,
	ECharVehAnim_Bike_DriveLeaningHorizontalAnim = 50,
	ECharVehAnim_Bike_DriveLeaningVerticalAnim = 51,
	ECharVehAnim_Bike_DriveAnticipation = 52,
	ECharVehAnim_Bike_AirLeaningHorizontal = 53,
	ECharVehAnim_Bike_AirLeaningVertical = 54,
	ECharVehAnim_Bike_DriveHeadAO  = 55,
	ECharVehAnim_Bike_DriveSteering = 56,
	ECharVehAnim_Max               = 57
};


// Enum Gameplay.ECharacterParachuteAnimType
enum class ECharacterParachuteAnimType : uint8_t
{
	ECharParachuteAnim_FreeFalling = 0,
	ECharParachuteAnim_Parachute   = 1,
	ECharParachuteAnim_ParachuteEnter = 2,
	ECharParachuteAnim_ParachuteLand = 3,
	ECharParachuteAnim_FreeFallingTurn = 4,
	ECharParachuteAnim_FreeFallingStart = 5,
	ECharParachuteAnim_FreeFallingShake = 6,
	ECharParachuteAnim_Max         = 7
};


// Enum Gameplay.EMentorPlayerType
enum class EMentorPlayerType : uint8_t
{
	EMentorPlayerType__MPT_NormalPlayer = 0,
	EMentorPlayerType__MPT_Veteran = 1,
	EMentorPlayerType__MPT_Recruit = 2,
	EMentorPlayerType__MPT_MAX     = 3
};


// Enum Gameplay.EEventCounterDefine
enum class EEventCounterDefine : uint8_t
{
	EEventCounterDefine__PlayerGotoSnowMountain = 0,
	EEventCounterDefine__PlayerGotoIceLand = 1,
	EEventCounterDefine__PlayerUseMoveablePlatform = 2,
	EEventCounterDefine__PlayerTurboDrop = 3,
	EEventCounterDefine__PlayerWingedFlightCount = 4,
	EEventCounterDefine__PlayerWingedFlightTotalDist = 5,
	EEventCounterDefine__PlayerUseCoin = 6,
	EEventCounterDefine__PlayerEasterEgg = 7,
	EEventCounterDefine__PlayerDuckGameTime = 8,
	EEventCounterDefine__PlayerBeeGameTime = 9,
	EEventCounterDefine__PlayerDuckGameCount = 10,
	EEventCounterDefine__PlayerBeeGameCount = 11,
	EEventCounterDefine__PlayerBlindBoxCount = 12,
	EEventCounterDefine__PlayerDuckShootingRangeCount = 13,
	EEventCounterDefine__PlayerPlaygroundSpringJumpCount = 14,
	EEventCounterDefine__PlayerTownSpringJumpCount = 15,
	EEventCounterDefine__PlayerMakeFiresNum = 16,
	EEventCounterDefine__PlayerChichenBBQNum = 17,
	EEventCounterDefine__PlayerUseKFNum = 18,
	EEventCounterDefine__PlayerUseUAVNum = 19,
	EEventCounterDefine__PlayerKFUsingTime = 20,
	EEventCounterDefine__PlayerUAVUsingTime = 21,
	EEventCounterDefine__PlayerSkateboardUsingCount = 22,
	EEventCounterDefine__PlayerSkateboardUsingTime = 23,
	EEventCounterDefine__PlayerSkateboardUsingDistance = 24,
	EEventCounterDefine__PlayerOpenTreasureBoxCount = 25,
	EEventCounterDefine__PlayerEatCakeCount = 26,
	EEventCounterDefine__PlayerUseDrinkMachineCount = 27,
	EEventCounterDefine__PlayerUseLeapPlatformCount = 28,
	EEventCounterDefine__PlayerPrayTotemsCount = 29,
	EEventCounterDefine__PlayerPickupMushroomCount = 30,
	EEventCounterDefine__PlayerUseBallonCount = 31,
	EEventCounterDefine__PlayerUseQuickSight = 32,
	EEventCounterDefine__PlayerPickingFruitCount = 33,
	EEventCounterDefine__PlayerInteractivePowerTotemCount = 34,
	EEventCounterDefine__PlayerInteractiveStrategyTotemCount = 35,
	EEventCounterDefine__PlayerInteractiveGuardTotemCount = 36,
	EEventCounterDefine__PlayerUseLookOutCount = 37,
	EEventCounterDefine__PlayerDancingInIslandCount = 38,
	EEventCounterDefine__PlayerFirstEnterVehicleType = 39,
	EEventCounterDefine__PlayerFirstEnterVehicleTime = 40,
	EEventCounterDefine__PlayerPlayVideoCount = 41,
	EEventCounterDefine__PlayerTakeBoatInWaterFallCount = 42,
	EEventCounterDefine__PlayerAceTaskStatusStat = 43,
	EEventCounterDefine__PlayerAcePillar1RewardTime = 44,
	EEventCounterDefine__PlayerAcePillar2RewardTime = 45,
	EEventCounterDefine__PlayerAcePillar3RewardTime = 46,
	EEventCounterDefine__PlayerAcePillar4RewardTime = 47,
	EEventCounterDefine__PlayerAcePillar5RewardTime = 48,
	EEventCounterDefine__PlayerAcePillarTotalCount = 49,
	EEventCounterDefine__PlayerDamageSteelDoorCount = 50,
	EEventCounterDefine__PlayerShowAceTaskPanelCount = 51,
	EEventCounterDefine__PlayerKillMetroAICount = 52,
	EEventCounterDefine__PlayerEnterUndergroundCount = 53,
	EEventCounterDefine__PlayerEnterRadiationCount = 54,
	EEventCounterDefine__PlayerUseSnowCockGrenadeCount = 55,
	EEventCounterDefine__PlayerUseSnowmanGrenadeCount = 56,
	EEventCounterDefine__PlayerEnterFloatIceCount = 57,
	EEventCounterDefine__PlayerInteractPineCount = 58,
	EEventCounterDefine__PlayerEnterWinterHouseCount = 59,
	EEventCounterDefine__PlayerEnterIceGardenCount = 60,
	EEventCounterDefine__PlayerDestroyPaperWallWithStickyBombCount = 61,
	EEventCounterDefine__PlayerUsePanzerFaustCount = 62,
	EEventCounterDefine__PlayerKillMonsterCount = 63,
	EEventCounterDefine__PlayerUseCrystalCount = 64,
	EEventCounterDefine__PlayerEnterDestroyedApex = 65,
	EEventCounterDefine__PlayerCollectLightBallCount = 66,
	EEventCounterDefine__PlayerKilledInSectManCount = 67,
	EEventCounterDefine__PlayerUseTeleport = 68,
	EEventCounterDefine__TeleportFromTrain = 69,
	EEventCounterDefine__A1StationEnter = 70,
	EEventCounterDefine__A1StationExit = 71,
	EEventCounterDefine__A2StationEnter = 72,
	EEventCounterDefine__A2StationExit = 73,
	EEventCounterDefine__A3StationEnter = 74,
	EEventCounterDefine__A3StationExit = 75,
	EEventCounterDefine__A4StationEnter = 76,
	EEventCounterDefine__A4StationExit = 77,
	EEventCounterDefine__A5StationEnter = 78,
	EEventCounterDefine__A5StationExit = 79,
	EEventCounterDefine__A6StationEnter = 80,
	EEventCounterDefine__A6StationExit = 81,
	EEventCounterDefine__B1StationEnter = 82,
	EEventCounterDefine__B1StationExit = 83,
	EEventCounterDefine__B2StationEnter = 84,
	EEventCounterDefine__B2StationExit = 85,
	EEventCounterDefine__B3StationEnter = 86,
	EEventCounterDefine__B3StationExit = 87,
	EEventCounterDefine__B4StationEnter = 88,
	EEventCounterDefine__B4StationExit = 89,
	EEventCounterDefine__C1StationEnter = 90,
	EEventCounterDefine__C1StationExit = 91,
	EEventCounterDefine__C2StationEnter = 92,
	EEventCounterDefine__C2StationExit = 93,
	EEventCounterDefine__C3StationEnter = 94,
	EEventCounterDefine__C3StationExit = 95,
	EEventCounterDefine__C4StationEnter = 96,
	EEventCounterDefine__C4StationExit = 97,
	EEventCounterDefine__C5StationEnter = 98,
	EEventCounterDefine__C5StationExit = 99,
	EEventCounterDefine__D1StationEnter = 100,
	EEventCounterDefine__D1StationExit = 101,
	EEventCounterDefine__D2StationEnter = 102,
	EEventCounterDefine__D2StationExit = 103,
	EEventCounterDefine__D3StationEnter = 104,
	EEventCounterDefine__D3StationExit = 105,
	EEventCounterDefine__D4StationEnter = 106,
	EEventCounterDefine__D4StationExit = 107,
	EEventCounterDefine__D5StationEnter = 108,
	EEventCounterDefine__D5StationExit = 109,
	EEventCounterDefine__EEventCounterDefine_MAX = 110
};


// Enum Gameplay.ETLog_BackpackEquipmentSlotType
enum class ETLog_BackpackEquipmentSlotType : uint8_t
{
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_None = 0,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_WeaponSlot1 = 1,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_WeaponSlot2 = 2,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_HelmetSlot = 3,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_ArmorSlot = 4,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_BagSlot = 5,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon1GunPoint = 6,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon1Grip = 7,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon1Magazine = 8,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon1Gunstock = 9,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon1OpticalSight = 10,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon2GunPoint = 11,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon2Grip = 12,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon2Magazine = 13,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon2Gunstock = 14,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon2OpticalSight = 15,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_MAX = 16
};


// Enum Gameplay.EPickUpCheckResult
enum class EPickUpCheckResult : uint8_t
{
	EPickUpCheckResult__EPUFR_OK   = 0,
	EPickUpCheckResult__EPUFR_DelayAdd = 1,
	EPickUpCheckResult__EPUFR_Forbidden = 2,
	EPickUpCheckResult__EPUFR_MAX  = 3
};


// Enum Gameplay.EWeaponDistanceType
enum class EWeaponDistanceType : uint8_t
{
	EWeaponDistanceType__Gun       = 0,
	EWeaponDistanceType__CloseCombat = 1,
	EWeaponDistanceType__Thrown    = 2,
	EWeaponDistanceType__EWeaponDistanceType_MAX = 3
};


// Enum Gameplay.ELobbyCharacterAnimType
enum class ELobbyCharacterAnimType : uint8_t
{
	ELobbyCharAnim_Boy             = 0,
	ELobbyCharAnim_Girl            = 1,
	ELobbyCharAnim_Max             = 2
};


// Enum Gameplay.EDIYProjectDirection
enum class EDIYProjectDirection : uint8_t
{
	EDIYProjectDirection__X        = 0,
	EDIYProjectDirection__X_       = 1,
	EDIYProjectDirection__Y        = 2,
	EDIYProjectDirection__Y_       = 3,
	EDIYProjectDirection__Z        = 4,
	EDIYProjectDirection__Z_       = 5,
	EDIYProjectDirection__EDIYProjectDirection_MAX = 6
};


// Enum Gameplay.EBattleDataType
enum class EBattleDataType : uint8_t
{
	EBattleDataType__None          = 0,
	EBattleDataType__All           = 1,
	EBattleDataType__SimpleAll     = 2,
	EBattleDataType__PlayerInfo    = 3,
	EBattleDataType__SimplePlayerInfo = 4,
	EBattleDataType__WeaponAvatar  = 5,
	EBattleDataType__WeaponAvatarDIY = 6,
	EBattleDataType__EBattleDataType_MAX = 7
};


// Enum Gameplay.EVehicleMoveDragReason
enum class EVehicleMoveDragReason : uint8_t
{
	EVehicleMoveDragReason__Unknown = 0,
	EVehicleMoveDragReason__ServerCorrection = 1,
	EVehicleMoveDragReason__PunishBySecurity = 2,
	EVehicleMoveDragReason__BeyondErrorThreshold = 3,
	EVehicleMoveDragReason__CorrectionWithoutPassengers = 4,
	EVehicleMoveDragReason__UseReplicatedMovementWhenRepMovementTimeout = 5,
	EVehicleMoveDragReason__UseReplicatedLocAndRotWhenRepMovementTimeout = 6,
	EVehicleMoveDragReason__StopSimulateWhenRepMovementTimeout = 7,
	EVehicleMoveDragReason__EVehicleMoveDragReason_MAX = 8
};


// Enum Gameplay.EDeathMatchSubModeType
enum class EDeathMatchSubModeType : uint8_t
{
	EDeathMatchSubModeType__DeathMatch = 0,
	EDeathMatchSubModeType__HardPoint = 1,
	EDeathMatchSubModeType__ArmsRace = 2,
	EDeathMatchSubModeType__EDeathMatchSubModeType_MAX = 3
};


// Enum Gameplay.EAntiMoveSpecialFlags
enum class EAntiMoveSpecialFlags : uint8_t
{
	StandOnMovableBase             = 0,
	EAntiMoveSpecialFlags_MAX      = 1
};


// Enum Gameplay.EIDCardDestroyReasonType
enum class EIDCardDestroyReasonType : uint8_t
{
	EDRT_Revived                   = 0,
	EDRT_Timeout                   = 1,
	EDRT_PlayerExit                = 2,
	EDRT_TeamTerminated            = 3,
	EDRT_MAX                       = 4
};


// Enum Gameplay.ERevivalFailedReasonType
enum class ERevivalFailedReasonType : uint8_t
{
	ERFRT_Succeed                  = 0,
	ERFRT_PlayerDead               = 1,
	ERFRT_Cancel                   = 2,
	ERFRT_IDCardDestroyed          = 3,
	ERFRT_Interrupt                = 4,
	ERFRT_BeHit                    = 5,
	ERFRT_Max_DoNothing            = 6,
	ERFRT_MAX                      = 7
};


// Enum Gameplay.ERealtimeReportType
enum class ERealtimeReportType : uint8_t
{
	ERealtimeReportType__CharMove1 = 0,
	ERealtimeReportType__ERealtimeReportType_MAX = 1
};


// Enum Gameplay.ERealtimePunishType
enum class ERealtimePunishType : uint8_t
{
	ERealtimePunishType__Invalid   = 0,
	ERealtimePunishType__CharMove  = 1,
	ERealtimePunishType__AutoAim   = 2,
	ERealtimePunishType__Vehicle   = 3,
	ERealtimePunishType__ServerControlMove = 4,
	ERealtimePunishType__ERealtimePunishType_MAX = 5
};


// Enum Gameplay.EPrisonBreak
enum class EPrisonBreak : uint8_t
{
	EPrisonBreak__ClientMaxSpeed   = 0,
	EPrisonBreak__ClientDamageRate = 1,
	EPrisonBreak__ClientParachuteSpeed = 2,
	EPrisonBreak__ClientCoronaDataEmpty = 3,
	EPrisonBreak__ClientCoronaDataCrcErr = 4,
	EPrisonBreak__EPrisonBreak_MAX = 5
};


// Enum Gameplay.ERegionType
enum class ERegionType : uint8_t
{
	SizeInvalid                    = 0,
	SizeSmall                      = 1,
	SizeMedium                     = 2,
	SizeLarge                      = 3,
	ERegionType_MAX                = 4
};


// Enum Gameplay.EVehicleSpotRandomType
enum class EVehicleSpotRandomType : uint8_t
{
	Vehicle_TotalCount             = 0,
	Vehicle_Probability            = 1,
	Vehicle_MAX                    = 2
};


// Enum Gameplay.ESpotType
enum class ESpotType : uint8_t
{
	ESpotType_A                    = 0,
	ESpotType_B                    = 1,
	ESpotType_C                    = 2,
	ESpotType_D                    = 3,
	ESpotType_E                    = 4,
	ESpotType_F                    = 5,
	ESpotType_G                    = 6,
	ESpotType_H                    = 7,
	ESpotType_I                    = 8,
	ESpotType_J                    = 9,
	ESpotType_K                    = 10,
	ESpotType_L                    = 11,
	ESpotType_M                    = 12,
	ESpotType_N                    = 13,
	ESpotType_O                    = 14,
	ESpotType_P                    = 15,
	ESpotType_Q                    = 16,
	ESpotType_R                    = 17,
	ESpotType_S                    = 18,
	ESpotType_T                    = 19,
	ESpotType_U                    = 20,
	ESpotType_V                    = 21,
	ESpotType_W                    = 22,
	ESpotType_X                    = 23,
	ESpotType_Y                    = 24,
	ESpotType_Z                    = 25,
	ESpotType_MAX                  = 26
};


// Enum Gameplay.ESpotGroupType
enum class ESpotGroupType : uint8_t
{
	ESpotGroup_A                   = 0,
	ESpotGroup_B                   = 1,
	ESpotGroup_C                   = 2,
	ESpotGroup_D                   = 3,
	ESpotGroup_E                   = 4,
	ESpotGroup_F                   = 5,
	ESpotGroup_G                   = 6,
	ESpotGroup_H                   = 7,
	ESpotGroup_I                   = 8,
	ESpotGroup_J                   = 9,
	ESpotGroup_K                   = 10,
	ESpotGroup_L                   = 11,
	ESpotGroup_M                   = 12,
	ESpotGroup_N                   = 13,
	ESpotGroup_O                   = 14,
	ESpotGroup_P                   = 15,
	ESpotGroup_Q                   = 16,
	ESpotGroup_R                   = 17,
	ESpotGroup_S                   = 18,
	ESpotGroup_T                   = 19,
	ESpotGroup_U                   = 20,
	ESpotGroup_V                   = 21,
	ESpotGroup_W                   = 22,
	ESpotGroup_X                   = 23,
	ESpotGroup_Y                   = 24,
	ESpotGroup_Z                   = 25,
	ESpotGroup_MAX                 = 26
};


// Enum Gameplay.ESVehAnimVehicleType
enum class ESVehAnimVehicleType : uint8_t
{
	ESVehAnimVehicleType__Anim_VT_Unknown = 0,
	ESVehAnimVehicleType__Anim_VT_Motorbike = 1,
	ESVehAnimVehicleType__Anim_VT_Motorbike_SideCart = 2,
	ESVehAnimVehicleType__Anim_VT_Dacia = 3,
	ESVehAnimVehicleType__Anim_VT_UAZ = 4,
	ESVehAnimVehicleType__Anim_VT_Buggy = 5,
	ESVehAnimVehicleType__Anim_VT_PG117 = 6,
	ESVehAnimVehicleType__Anim_VT_Aquarail = 7,
	ESVehAnimVehicleType__Anim_VT_MiniBus = 8,
	ESVehAnimVehicleType__Anim_VT_PickUp = 9,
	ESVehAnimVehicleType__Anim_VT_Mirado = 10,
	ESVehAnimVehicleType__Anim_VT_Rony = 11,
	ESVehAnimVehicleType__Anim_VT_Surfboard = 12,
	ESVehAnimVehicleType__Anim_VT_UH60 = 13,
	ESVehAnimVehicleType__Anim_VT_Amphibious = 14,
	ESVehAnimVehicleType__Anim_VT_Tuk = 15,
	ESVehAnimVehicleType__Anim_VT_Scooter = 16,
	ESVehAnimVehicleType__Anim_VT_Motorglider = 17,
	ESVehAnimVehicleType__Anim_VT_MAX = 18
};


// Enum Gameplay.ECharacterAnimTypeAsynLoaded
enum class ECharacterAnimTypeAsynLoaded : uint8_t
{
	ECharAnimAsyn_Swim_Up          = 0,
	ECharAnimAsyn_Swim_Down        = 1,
	ECharAnimAsyn_Max              = 2
};


// Enum Gameplay.ECharacterViewType
enum class ECharacterViewType : uint8_t
{
	ECharacterView_TPPandFPP       = 0,
	ECharacterView_TPP             = 1,
	ECharacterView_FPP             = 2,
	ECharacterView_Max             = 3
};


// Enum Gameplay.EVehicleSeatType
enum class EVehicleSeatType : uint8_t
{
	EVehSeatType_Driver            = 0,
	EVehSeatType_Left              = 1,
	EVehSeatType_Right             = 2,
	EVehSeatType_Max               = 3
};


// Enum Gameplay.EVehicleType
enum class EVehicleType : uint8_t
{
	EVehType_Buggy                 = 0,
	EVehType_UAZ                   = 1,
	EVehType_Motorcycle            = 2,
	EVehType_Dacia                 = 3,
	EVehType_PG                    = 4,
	EVehType_Max                   = 5
};


// Enum Gameplay.ECharacterShovelPhase
enum class ECharacterShovelPhase : uint8_t
{
	ECharacterShovelPhase__ECharShovel_Enter = 0,
	ECharacterShovelPhase__ECharShovel_Shoveling = 1,
	ECharacterShovelPhase__ECharShovel_Leave = 2,
	ECharacterShovelPhase__ECharShovel_Crouch_Leave = 3,
	ECharacterShovelPhase__ECharShovel_Max = 4
};


// Enum Gameplay.ECharacterJumpPhase
enum class ECharacterJumpPhase : uint8_t
{
	EJumpPhase_PreJump             = 0,
	EJumpPhase_FallLoop0           = 1,
	EJumpPhase_FallLoop1           = 2,
	EJumpPhase_Land0               = 3,
	EJumpPhase_Land1               = 4,
	EJumpPhase_GrenadeJump         = 5,
	EJumpPhase_GrenadeJump01       = 6,
	EJumpPhase_GrenadeFall         = 7,
	EJumpPhase_GrenadeFall01       = 8,
	EJumpPhase_Max                 = 9
};


// Enum Gameplay.ECharaAnimListType
enum class ECharaAnimListType : uint8_t
{
	ECharaAnimListType_TPP         = 0,
	ECharaAnimListType_FPP         = 1,
	ECharaAnimListType_Jump        = 2,
	ECharaAnimListType_JumpFPP     = 3,
	ECharaAnimListType_Shield      = 4,
	EcharaAnimListType_Vehicle     = 5,
	ECharaAnimListType_Shovel      = 6,
	ECharaAnimListType_ShovelFPP   = 7,
	ECharaAnimListType_Max         = 8
};


// Enum Gameplay.ECharacterShieldAnimType
enum class ECharacterShieldAnimType : uint8_t
{
	ECharShieldAnim_Move           = 0,
	ECharShieldAnim_Aim            = 1,
	ECharShieldAnim_ToStand        = 2,
	ECharShieldAnim_ToCrouch       = 3,
	ECharShieldAnim_PickM          = 4,
	ECharShieldAnim_PickL          = 5,
	ECharShieldAnim_Turn_L         = 6,
	ECharShieldAnim_Turn_R         = 7,
	ECharShieldAnim_InPlace_PreJump = 8,
	ECharShieldAnim_InPlace_FallLoop0 = 9,
	ECharShieldAnim_InPlace_FallLoop1 = 10,
	ECharShieldAnim_InPlace_Land0  = 11,
	ECharShieldAnim_InPlace_Land1  = 12,
	ECharShieldAnim_Forward_PreJump = 13,
	ECharShieldAnim_Forward_FallLoop0 = 14,
	ECharShieldAnim_Forward_FallLoop1 = 15,
	ECharShieldAnim_Forward_Land0  = 16,
	ECharShieldAnim_Forward_Land1  = 17,
	ECharShieldAnim_Max            = 18
};


// Enum Gameplay.EBornItemFlag
enum class EBornItemFlag : uint8_t
{
	CANCARRYONPLANE                = 0,
	EBornItemFlag_MAX              = 1
};


// Enum Gameplay.EGameOverReason
enum class EGameOverReason : uint8_t
{
	EGameOverReason__Exit          = 0,
	EGameOverReason__NoJoinPlayers = 1,
	EGameOverReason__NoActivePlayers = 2,
	EGameOverReason__NoActivePlayersButHaveObservers = 3,
	EGameOverReason__InterruptGame = 4,
	EGameOverReason__EGameOverReason_MAX = 5
};


// Enum Gameplay.EIndependentSpotType
enum class EIndependentSpotType : uint8_t
{
	EIndependentSpotType__ItemSpot = 0,
	EIndependentSpotType__VehicleSpot = 1,
	EIndependentSpotType__EIndependentSpotType_MAX = 2
};


// Enum Gameplay.ECharSpecialLevelSequenceType
enum class ECharSpecialLevelSequenceType : uint8_t
{
	ECharSpecLvSeq_WeaponCheck     = 0,
	ECharSpecLvSeq_Max             = 1
};


// Enum Gameplay.ECharacterShowSceneType
enum class ECharacterShowSceneType : uint8_t
{
	ECharacterShowSceneType_Lobby  = 0,
	ECharacterShowSceneType_GameEndAvatarScene = 1,
	ECharacterShowSceneType_LobbyWithCar = 2,
	ECharacterShowSceneType_LobbySystem = 3,
	ECharacterShowSceneType_LobbyPure = 4,
	ECharacterShowSceneType_Max    = 5
};


// Enum Gameplay.ELobbyCharacterPosIndex
enum class ELobbyCharacterPosIndex : uint8_t
{
	Self                           = 0,
	Second                         = 1,
	Third                          = 2,
	Fourth                         = 3,
	ELobbyCharacterPosIndex_Max    = 4
};


// Enum Gameplay.EActorSpawnType
enum class EActorSpawnType : uint8_t
{
	EStatic_Config                 = 0,
	EDynamic_Generator             = 1,
	LevelEvent_Trrigger            = 2,
	EActorSpawnType_MAX            = 3
};


// Enum Gameplay.EMonsterBornType
enum class EMonsterBornType : uint8_t
{
	EMonsterBornType_Burrow        = 0,
	EMonsterBornType_ClimbWall     = 1,
	EMonsterBornType_Fall          = 2,
	EMonsterBornType_ProneToStand  = 3,
	EMonsterBornType_Garbage       = 4,
	EMonsterBornType_BreakWall     = 5,
	EMonsterBornType_LyingOnTheGround = 6,
	EMonsterBornType_Max           = 7
};


// Enum Gameplay.EWeatherType
enum class EWeatherType : uint8_t
{
	EWeatherType_None              = 0,
	EWeatherType_Sunday            = 1,
	EWeatherType_Rainy             = 2,
	EWeatherType_Foggy             = 3,
	EWeatherType_Dark              = 4,
	EWeatherType_Night             = 5,
	EWeatherType_DayToNight        = 6,
	EWeatherType_SnowToSquall      = 7,
	EWeatherType_SnowToSquall2     = 8,
	EWeatherType_Aurora            = 9,
	EWeatherType_Max               = 10
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Gameplay.GameModePlayerItem
// 0x0018
struct FGameModePlayerItem
{
	int                                                ItemTableID;                                              // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        AdditionIntData;                                          // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.GameModePlayerUpassInfo
// 0x0038
struct FGameModePlayerUpassInfo
{
	int                                                updateTime;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                upassLevel;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                upassScore;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               isBattleTitle;                                            // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               isUI;                                                     // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               battleShow;                                               // 0x000E(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               isBuy;                                                    // 0x000F(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FString                                     iconUrl;                                                  // 0x0010(0x0010) (ZeroConstructor)
	bool                                               mainSwitch;                                               // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                upassKeepBuy;                                             // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                upassCurValue;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                pass_type;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                nUpassPrimePlusCard;                                      // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.GameModePlayerPetInfo
// 0x0020
struct FGameModePlayerPetInfo
{
	int                                                PetId;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PetLevel;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PetCfgId;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PetColor;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        PetAvatarList;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.GameModePlayerTaskData
// 0x0018
struct FGameModePlayerTaskData
{
	int                                                task_id;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                process;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ext_info;                                                 // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.DSSwitchInfo
// 0x0018
struct FDSSwitchInfo
{
	int                                                KeyNum;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     SValue;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Gameplay.DistanceDragData
// 0x0018
struct FDistanceDragData
{
	float                                              CX;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CY;                                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CZ;                                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SX;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SY;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SZ;                                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.CharacterMoveDrag
// 0x0068
struct FCharacterMoveDrag
{
	int                                                Minute;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<unsigned char, int>                           ReasonCount;                                              // 0x0008(0x0050) (ZeroConstructor)
	TArray<struct FDistanceDragData>                   ExceedsDistances;                                         // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.CharacterSimulateMoveDrag
// 0x0010
struct FCharacterSimulateMoveDrag
{
	int                                                Minute;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DragCount;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShakeCount;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.CharacterMoveDragData
// 0x0020
struct FCharacterMoveDragData
{
	TArray<struct FCharacterMoveDrag>                  Drag;                                                     // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FCharacterSimulateMoveDrag>          SimulateDrag;                                             // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.ParachuteDragData
// 0x0008
struct FParachuteDragData
{
	uint32_t                                           MyDrag;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           OtherDrag;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.VehicleMoveDrag
// 0x0028
struct FVehicleMoveDrag
{
	int                                                Minute;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      VehicleType;                                              // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<unsigned char>                              Reasons;                                                  // 0x0008(0x0010) (ZeroConstructor)
	TArray<int>                                        Counters;                                                 // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.VehicleMoveDragData
// 0x0020
struct FVehicleMoveDragData
{
	TArray<struct FVehicleMoveDrag>                    MoveDrag;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FVehicleMoveDrag>                    SimulatedMoveDrag;                                        // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.CharacterShootVerifyData
// 0x0050
struct FCharacterShootVerifyData
{
	TMap<unsigned char, int>                           ShootVerifyFailed;                                        // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Gameplay.CharacterShootVerifyStat
// 0x0050
struct FCharacterShootVerifyStat
{
	TMap<unsigned char, int>                           ShootVerifyStat;                                          // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Gameplay.DynamicTriggerTransform
// 0x0018
struct FDynamicTriggerTransform
{
	struct FVector                                     Loc;                                                      // 0x0000(0x000C) (IsPlainOldData)
	struct FRotator                                    Rot;                                                      // 0x000C(0x000C) (IsPlainOldData)
};

// ScriptStruct Gameplay.DynamicTriggerConfig
// 0x0020
struct FDynamicTriggerConfig
{
	TArray<struct FDynamicTriggerTransform>            Transforms;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     TriggerClassPath;                                         // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.DynamicBuildingGroupTransform
// 0x0018
struct FDynamicBuildingGroupTransform
{
	float                                              LocX;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LocY;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LocZ;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RotX;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RotY;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RotZ;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.DynamicLoadItem
// 0x0040
struct FDynamicLoadItem
{
	TArray<struct FDynamicBuildingGroupTransform>      TransArray;                                               // 0x0000(0x0010) (ZeroConstructor)
	int                                                ActID;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     Path;                                                     // 0x0018(0x0010) (ZeroConstructor)
	bool                                               IsClearAfterStart;                                        // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsPlayerStartPot;                                         // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	TArray<int>                                        PosIdxList;                                               // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.DynamicLoadActors
// 0x0010
struct FDynamicLoadActors
{
	TArray<class AActor*>                              ActorArray;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.VehicleAvatarReplaceCfg
// 0x0030
struct FVehicleAvatarReplaceCfg
{
	int                                                OriginID;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        SkinIDList;                                               // 0x0008(0x0010) (ZeroConstructor)
	TArray<float>                                      ProbabilityDistribute;                                    // 0x0018(0x0010) (ZeroConstructor)
	int                                                MaxNum;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentNum;                                               // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.AirDropBoxInOb
// 0x0014
struct FAirDropBoxInOb
{
	int                                                boxId;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Flying;                                                   // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsEmpty;                                                  // 0x0005(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FVector                                     pos;                                                      // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct Gameplay.AdvertisementActorConfig
// 0x0050
struct FAdvertisementActorConfig
{
	struct FString                                     ResPath;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     HttpImgPath;                                              // 0x0010(0x0010) (ZeroConstructor)
	struct FVector                                     Loc;                                                      // 0x0020(0x000C) (IsPlainOldData)
	struct FRotator                                    Rot;                                                      // 0x002C(0x000C) (IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0038(0x000C) (IsPlainOldData)
	int                                                ID;                                                       // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CulDistance;                                              // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.MissionBoardConfig
// 0x0050
struct FMissionBoardConfig
{
	struct FString                                     ResPath;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     Loc;                                                      // 0x0010(0x000C) (IsPlainOldData)
	struct FRotator                                    Rot;                                                      // 0x001C(0x000C) (IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0028(0x000C) (IsPlainOldData)
	float                                              Progress;                                                 // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     CountOrTime;                                              // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                TipId;                                                    // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.SeasonStatueData
// 0x0078
struct FSeasonStatueData
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FVector                                     Loc;                                                      // 0x0010(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // 0x001C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0028(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     Nation;                                                   // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                AGender;                                                  // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Head;                                                     // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Hair;                                                     // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WeaponID;                                                 // 0x0054(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        AvatarList;                                               // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FGameModePlayerItem>                 AvatarWithAdditionList;                                   // 0x0068(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.StatueBaseData
// 0x0068
struct FStatueBaseData
{
	struct FString                                     ClassPath;                                                // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     MatPath;                                                  // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     TeamFlag;                                                 // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     TeamName;                                                 // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FVector                                     Loc;                                                      // 0x0040(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // 0x004C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0058(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.CharacterOverrideAttrData
// 0x0018
struct FCharacterOverrideAttrData
{
	struct FString                                     AttrName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	float                                              AttrValue;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.DSCorpsInfo
// 0x0020
struct FDSCorpsInfo
{
	uint64_t                                           CorpsID;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     CorpsName;                                                // 0x0008(0x0010) (ZeroConstructor)
	int                                                Icon;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SegmentLevel;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.VehicleReportEntry
// 0x0018
struct FVehicleReportEntry
{
	uint32_t                                           VehicleID;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                VehicleShapeType;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsDestroyed;                                              // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              FirstAttackedTime;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastAttackedTime;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Drived;                                                   // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.GameModeCorpsDetailData
// 0x0030
struct FGameModeCorpsDetailData
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                CorpsHeadIcon;                                            // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                KilledNum;                                                // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SegmentLevel;                                             // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RealtimeRank;                                             // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DefeatPlayerNum;                                          // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TotalDamage;                                              // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SurvivalTime;                                             // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.GameModeTeamBattleResultData
// 0x00D8
struct FGameModeTeamBattleResultData
{
	struct FString                                     Reason;                                                   // 0x0000(0x0010) (ZeroConstructor)
	int                                                RemainTeamCount;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RemainAlivePlayerCount;                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlaneDirectionX;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlaneDirectionY;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               PlayersLogoutTime;                                        // 0x0020(0x0050) (ZeroConstructor)
	TMap<struct FString, float>                        PlayersOnlineTime;                                        // 0x0070(0x0050) (ZeroConstructor)
	TArray<struct FGameModeCorpsDetailData>            RealTimeCorpsRank;                                        // 0x00C0(0x0010) (ZeroConstructor)
	bool                                               bIsGameTerminator;                                        // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
};

// ScriptStruct Gameplay.BattleData
// 0x0008
struct FBattleData
{
	int                                                WatcherNum;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CircleNum;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.CollectedEventData
// 0x0050
struct FCollectedEventData
{
	TMap<struct FString, struct FString>               KeyValueMap;                                              // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.GameModeParams
// 0x0010
struct FGameModeParams
{
	struct FName                                       CurrentGameModeState;                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaxKillTime;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.DSAIDropItem
// 0x0010
struct FDSAIDropItem
{
	uint64_t                                           UId;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Time;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             hlv;                                                      // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.DSAIDropInfo
// 0x0020
struct FDSAIDropInfo
{
	uint64_t                                           BattleID;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                nts;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FDSAIDropItem>                       ais;                                                      // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.RealtimeVerifyInfo
// 0x0078
struct FRealtimeVerifyInfo
{
	uint16_t                                           AreaID;                                                   // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0008(0x0010) (ZeroConstructor)
	int                                                HitCountsNoAI;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HeadshotCountsNoAI;                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShotCounts;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Kills;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PrisonBreaks;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MoveSpeedAcc1;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MoveSpeedAcc2;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                JumpMaxHeight2;                                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SkeletonLengthCheckInvaildNum;                            // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MuzzleAndOwnerPosInVaildNum;                              // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ImpactActorPosOffsetBigNum;                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalImpactCharacterNum;                                  // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WeaponScopeHeightBigNum;                                  // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WeaponScopeDisBigNum;                                     // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OwnerHeadAndMuzzleBlockNum;                               // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ImpactPointAndBulletDisBigNum;                            // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShootVerifyInvalidNum;                                    // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalSkeletonLengthMax;                                   // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeAccTotal;                                             // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TimeAccTimes;                                             // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SpeedQuickCheck;                                          // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ShootVerifyClientHitAABBCount;                            // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ShootVerifyDSAABBMissCount;                               // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlayerZ;                                                  // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.HeartBeatData
// 0x0018
struct FHeartBeatData
{
	int                                                AlivePlayerNum;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AINum;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MonsterNum;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ConnectionNum;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OnlineNum;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HighPingNum;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.KnockOutData
// 0x0010
struct FKnockOutData
{
	uint64_t                                           AttackerID;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Times;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.TLog_PickUpItemFlow
// 0x0038
struct FTLog_PickUpItemFlow
{
	int                                                ItemSpesificID;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit, IsPlainOldData)
	int                                                SourceType;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AdditionalParam;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     TimeStr;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor)
	uint64_t                                           InstanceID;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.TLog_BornLandGrenadeData
// 0x0010
struct FTLog_BornLandGrenadeData
{
	int                                                PickupCount;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ThrowCount;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                HitOthersCount;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                HitedByOthersCount;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.AIDeliveryInfo
// 0x0010
struct FAIDeliveryInfo
{
	int                                                DeliveryStartTime;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                DeliveryArrivalTime;                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EventTypeId;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.AIDeliveryTlogData
// 0x0058
struct FAIDeliveryTlogData
{
	uint64_t                                           UId;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<uint32_t, struct FAIDeliveryInfo>             DeliveryMap;                                              // 0x0008(0x0050) (ZeroConstructor)
};

// ScriptStruct Gameplay.GameModeLikeResultData
// 0x0018
struct FGameModeLikeResultData
{
	TArray<uint32_t>                                   Like;                                                     // 0x0000(0x0010) (ZeroConstructor)
	uint64_t                                           UId;                                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModeTeammateLableCheckData
// 0x0010
struct FGameModeTeammateLableCheckData
{
	uint32_t                                           Mask;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	uint64_t                                           UId;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.UseItemFlow
// 0x0058
struct FUseItemFlow
{
	int                                                ItemSpesificID;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                UseCount;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<int, int>                                     AreaCountMap;                                             // 0x0008(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct Gameplay.UseBuffFlow
// 0x0058
struct FUseBuffFlow
{
	int                                                BuffID;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                UseCount;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<int, int>                                     AreaCountMap;                                             // 0x0008(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct Gameplay.BuildingEnterFlow
// 0x0058
struct FBuildingEnterFlow
{
	int                                                BuildingID;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EnterCount;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<int, int>                                     AreaCountMap;                                             // 0x0008(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct Gameplay.TLog_PropEquipUnequipFlow
// 0x0018
struct FTLog_PropEquipUnequipFlow
{
	int                                                ItemSpesificID;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ETLog_BackpackEquipmentSlotType                    SlotType;                                                 // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEquip;                                                   // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FString                                     TimeStr;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Gameplay.TLog_SpecialStats
// 0x0008
struct FTLog_SpecialStats
{
	float                                              MonsterDamageInNight1;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MonsterDamageInNight2;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.VehicleDriveDisData
// 0x0030
struct FVehicleDriveDisData
{
	uint64_t                                           DriverID;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                VehicleType;                                              // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AvatarID;                                                 // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DriveDistance;                                            // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DriveTime;                                                // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VehicleJumpDistanceMax;                                   // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<uint64_t>                                   PeopleInCar;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.EquipmentData
// 0x0070
struct FEquipmentData
{
	int                                                HelmetID;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorID;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BackPackID;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MainWeapon1ID;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MainWeapon1AttachmentsID;                                 // 0x0010(0x0010) (ZeroConstructor)
	int                                                MainWeapon2ID;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<int>                                        MainWeapon2AttachmentsID;                                 // 0x0028(0x0010) (ZeroConstructor)
	int                                                ViceWeaponID;                                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<int>                                        ViceWeaponAttachmentsID;                                  // 0x0040(0x0010) (ZeroConstructor)
	int                                                CloseWeaponID;                                            // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<int>                                        ThrowWeaponsID;                                           // 0x0058(0x0010) (ZeroConstructor)
	int8_t                                             IsLuckyClothing;                                          // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
};

// ScriptStruct Gameplay.ReportCollection
// 0x0008
struct FReportCollection
{
	int                                                item_id;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.WeaponDamageRecord
// 0x0060
struct FWeaponDamageRecord
{
	int                                                WeaponID;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalDamage;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FireCount;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HeadShootCount;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LimbsShootCount;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BodyShootCount;                                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HandShootCount;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FootShootCount;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UniqueHitCount;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<int>                                        HitDistanceArray;                                         // 0x0028(0x0010) (ZeroConstructor)
	int                                                TotalUseTime;                                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalOwnTime;                                             // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillCount;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KnockNumber;                                              // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Associations;                                             // 0x0048(0x0010) (ZeroConstructor)
	int                                                AvatarID;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DIYPlanID;                                                // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.SpecialPickItemState
// 0x0008
struct FSpecialPickItemState
{
	int                                                item_id;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsCollectionCompleted;                                   // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.DestroyVehicleWheelFlow
// 0x0008
struct FDestroyVehicleWheelFlow
{
	int                                                AreaID;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                UseCount;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.ActivityEventReportData
// 0x0014
struct FActivityEventReportData
{
	unsigned char                                      EventId;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Count;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (IsPlainOldData)
};

// ScriptStruct Gameplay.TLog_KillInfo
// 0x0028
struct FTLog_KillInfo
{
	int                                                FakePlayerID;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DeadTime;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AILastFightTime;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<int>                                        PlayerAreas;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
	int                                                ArmorID;                                                  // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                HelmetID;                                                 // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayEmoteData
// 0x0008
struct FPlayEmoteData
{
	int                                                EmoteIndex;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AreaID;                                                   // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModePlayerAliasInfo
// 0x0048
struct FGameModePlayerAliasInfo
{
	int                                                aliasID;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     aliasTitle;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     aliasNation;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                aliasRank;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     aliasPartnerName;                                         // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                aliasPartnerRelation;                                     // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                aliasRankID;                                              // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.TLog_Micphone
// 0x0018
struct FTLog_Micphone
{
	float                                              TeammateMicrophoneTime;                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TeammateSpeakerTime;                                      // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnemyMicrophoneTime;                                      // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnemySpeakerTime;                                         // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TeammateInterphoneTime;                                   // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnemyInterphoneTime;                                      // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.DamageInfo
// 0x0090
struct FDamageInfo
{
	uint32_t                                           DamageType;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsHeadshot;                                              // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              Distance;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Time;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           DamageValue;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AttackerID;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AttackerLoc;                                              // 0x0018(0x000C) (IsPlainOldData)
	uint32_t                                           AttackerBulletNumInClip;                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AttackerSightType;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AttackerWeaponType;                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AttackerWeaponScopeID;                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AttackerShotTimes;                                        // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           AttackerState;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bAttackerMoving;                                          // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	uint64_t                                           VictimID;                                                 // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           VictimType;                                               // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           VictimDeliveryType;                                       // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           CircleIndex;                                              // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     VictimLoc;                                                // 0x005C(0x000C) (IsPlainOldData)
	uint32_t                                           VictimState;                                              // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bVictimInWater;                                           // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	int                                                VictimVehicleType;                                        // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VictimVelocity;                                           // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AttackerAreaID;                                           // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AlivePlayerNum;                                           // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           VictimTeamID;                                             // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FloorType;                                                // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AttackerWeaponAvatarID;                                   // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AttackerVehicleShapeType;                                 // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameBaseInfo
// 0x0080
struct FGameBaseInfo
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     GameAppID;                                                // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0020(0x0010) (ZeroConstructor)
	uint16_t                                           AreaID;                                                   // 0x0030(0x0002) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0032(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0033(0x0005) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0038(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     UserName;                                                 // 0x0050(0x0010) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FString                                     PicUrl;                                                   // 0x0070(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.HitFlow
// 0x0038
struct FHitFlow
{
	int                                                AimType;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Distance;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IsKill;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bFallOnGround;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<unsigned char>                              PlayerStates;                                             // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      HitPos;                                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsAI;                                                     // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x002A(0x000E) MISSED OFFSET
};

// ScriptStruct Gameplay.WeaponReport
// 0x0068
struct FWeaponReport
{
	int                                                WeaponID;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FireCount;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AdsFireCount;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitCount;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UniqueHitCount;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillCount;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalDamage;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalMonsterDamage;                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalRealPlayerDamage;                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalNormalAIDamage;                                      // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalMLAIDamage;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalOwnTime;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalUseTime;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KnockDownCount;                                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HeadShootCount;                                           // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillAICount;                                              // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KnockDownAICount;                                         // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HeadShootAICount;                                         // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitAICount;                                               // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UniqueHitAICount;                                         // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UseCount;                                                 // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FHitFlow>                            HitFlow;                                                  // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.OnePlayerWeapon
// 0x0020
struct FOnePlayerWeapon
{
	struct FString                                     PlayerID;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FWeaponReport>                       Weapons;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.GameModeTeammateBattleResultData
// 0x01C0
struct FGameModeTeammateBattleResultData
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	uint64_t                                           UId;                                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Kill;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AIKills;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     State;                                                    // 0x0020(0x0010) (ZeroConstructor)
	float                                              travelDistance;                                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              marchDistance;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DriveDistance;                                            // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MonsterCatchupDistance;                                   // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HealAmount;                                               // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AssistNum;                                                // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<uint64_t>                                   AssistTeammatesList;                                      // 0x0050(0x0010) (ZeroConstructor)
	int                                                HeadShotNum;                                              // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HeadShotNumNoAI;                                          // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              surviveTime;                                              // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                rescueTimes;                                              // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<uint64_t>                                   RescueTeammatesList;                                      // 0x0070(0x0010) (ZeroConstructor)
	int                                                DestroyVehicles;                                          // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	TArray<struct FString>                             KillFlow;                                                 // 0x0088(0x0010) (ZeroConstructor)
	TArray<struct FString>                             KnockOutFlow;                                             // 0x0098(0x0010) (ZeroConstructor)
	float                                              OutsideBlueCircleTime;                                    // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<struct FVehicleDriveDisData>                VehicleDriveDisDataArray;                                 // 0x00B0(0x0010) (ZeroConstructor)
	int                                                FirstOpenedAirDropBoxNum;                                 // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HitEnemyHeadAmount;                                       // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalBeenDamageAmount;                                    // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	TArray<struct FPlayEmoteData>                      FPlayEmoteDataArray;                                      // 0x00D0(0x0010) (ZeroConstructor)
	int                                                FirstOpenedPlayerTombBoxNum;                              // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InDamageAmount;                                           // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ProneTimes;                                               // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CrouchTimes;                                              // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                JumpTimes;                                                // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillMonsterNum;                                           // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<int, int>                                     MonsterID2KillNum;                                        // 0x00F8(0x0050) (ZeroConstructor)
	int                                                LightCandleNum;                                           // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	TMap<int, int>                                     ActivityButtonCount;                                      // 0x0150(0x0050) (ZeroConstructor)
	float                                              TotalDamageAmountToMonsters;                              // 0x01A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalDamageAmountFromMonsters;                            // 0x01A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MonsterHeadShotKilledTimes;                               // 0x01A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeMonsterDownTimes;                                       // 0x01AC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsGameTerminator;                                        // 0x01B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x01B1(0x0003) MISSED OFFSET
	int                                                mainWeaponID;                                             // 0x01B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxWeaponAccurate;                                        // 0x01B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxWeaponHeadShotRate;                                    // 0x01BC(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.KillAnimalData
// 0x0008
struct FKillAnimalData
{
	unsigned char                                      AnimalType;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                KillNum;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModePlayerBattleResultData_SuperCold
// 0x0038
struct FGameModePlayerBattleResultData_SuperCold
{
	int                                                MakeFiresNum;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DeerBBQNum;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChichenBBQNum;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UseKFNum;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UseUAVNum;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KFUsingTime;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UAVUsingTime;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SkateboardUsingCount;                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SkateboardUsingTime;                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SkateboardUsingDistance;                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FKillAnimalData>                     AnimalKillFlow;                                           // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.GrenadeDamageRecordItem
// 0x0018
struct FGrenadeDamageRecordItem
{
	int                                                WeaponID;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalDamage;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FireCount;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillCount;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KnockNumber;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AvatarID;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GrenadeDamageRecord
// 0x0028
struct FGrenadeDamageRecord
{
	int                                                HitCount;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        HitDistanceArray;                                         // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FGrenadeDamageRecordItem>            Grenades;                                                 // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.KniveDamageRecordItem
// 0x001C
struct FKniveDamageRecordItem
{
	int                                                WeaponID;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalDamage;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillCount;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KnockNumber;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AvatarID;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalUseTime;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalOwnTime;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.KniveDamageRecord
// 0x0028
struct FKniveDamageRecord
{
	int                                                HeadShootCount;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LimbsShootCount;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BodyShootCount;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HandShootCount;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FootShootCount;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FKniveDamageRecordItem>              Knives;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.SpecialWeaponRecord
// 0x0008
struct FSpecialWeaponRecord
{
	int                                                WeaponID;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FireCount;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModePlayerBattleResultData
// 0x0600
struct FGameModePlayerBattleResultData
{
	struct FString                                     Reason;                                                   // 0x0000(0x0010) (ZeroConstructor)
	int                                                RemainingPlayerCount;                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalPlayerCount;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RemainingTeamCount;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalTeamCount;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OnlineTime;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsSolo;                                                   // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsSafeExit;                                               // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	uint64_t                                           Killer;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           killer_ig_uid;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           KillerAIDisplayUID;                                       // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     KillerName;                                               // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     BeKilledOpenID;                                           // 0x0050(0x0010) (ZeroConstructor)
	uint32_t                                           KillerType;                                               // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           KillerDeliveryType;                                       // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillerWeaponID;                                           // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           DeadCircleIndex;                                          // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotNum;                                       // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotAndHitPlayerNum;                           // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotAndHitPlayerNumNoAI;                       // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotHeadNum;                                   // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotHeadNumNoAI;                               // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HealTimes;                                                // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             KillFlow;                                                 // 0x0088(0x0010) (ZeroConstructor)
	TArray<struct FString>                             KnockOutFlow;                                             // 0x0098(0x0010) (ZeroConstructor)
	TArray<struct FTLog_PickUpItemFlow>                TLog_PickUpItemFlowData;                                  // 0x00A8(0x0010) (ZeroConstructor)
	TMap<int, struct FTLog_BornLandGrenadeData>        TLog_BornLandGrenadeData;                                 // 0x00B8(0x0050) (ZeroConstructor)
	int                                                PickUpItemTimes;                                          // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	TMap<int, int>                                     TLog_BulletCount;                                         // 0x0110(0x0050) (ZeroConstructor)
	uint64_t                                           parachute_leader_uid;                                     // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FUseItemFlow>                        UseItemFlow;                                              // 0x0168(0x0010) (ZeroConstructor)
	TArray<struct FUseBuffFlow>                        UseBuffFlow;                                              // 0x0178(0x0010) (ZeroConstructor)
	TArray<struct FBuildingEnterFlow>                  BuildingEnterFlow;                                        // 0x0188(0x0010) (ZeroConstructor)
	TArray<struct FDestroyVehicleWheelFlow>            DestroyVehicleWheelFlow;                                  // 0x0198(0x0010) (ZeroConstructor)
	int                                                destroyVehicleNum;                                        // 0x01A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                is_escape;                                                // 0x01AC(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTLog_KillInfo>                      PlayerKillAIInfo;                                         // 0x01B0(0x0010) (ZeroConstructor)
	TArray<struct FTLog_KillInfo>                      PlayerNearDeathDuoToAI;                                   // 0x01C0(0x0010) (ZeroConstructor)
	struct FTLog_KillInfo                              AIKillPlayerInfo;                                         // 0x01D0(0x0028)
	TArray<struct FGameModeTeammateBattleResultData>   TeammateList;                                             // 0x01F8(0x0010) (ZeroConstructor)
	TArray<struct FGameModeLikeResultData>             Like;                                                     // 0x0208(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   BeLiked;                                                  // 0x0218(0x0010) (ZeroConstructor)
	uint32_t                                           Switch;                                                   // 0x0228(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	TArray<uint32_t>                                   Self;                                                     // 0x0230(0x0010) (ZeroConstructor)
	TArray<struct FGameModeTeammateLableCheckData>     LabelCheck;                                               // 0x0240(0x0010) (ZeroConstructor)
	struct FVector                                     LandLocation;                                             // 0x0250(0x000C) (IsPlainOldData)
	int                                                LandTime;                                                 // 0x025C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ParachuteLocation;                                        // 0x0260(0x000C) (IsPlainOldData)
	struct FVector                                     DeadLocation;                                             // 0x026C(0x000C) (IsPlainOldData)
	struct FString                                     DeadDamangeType;                                          // 0x0278(0x0010) (ZeroConstructor)
	int                                                PveDeadAttacker;                                          // 0x0288(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PveStageId;                                               // 0x028C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     DeadTimeStr;                                              // 0x0290(0x0010) (ZeroConstructor)
	struct FString                                     logoutime;                                                // 0x02A0(0x0010) (ZeroConstructor)
	float                                              Pronetime;                                                // 0x02B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BeInWaterTime;                                            // 0x02B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SwimmingDistance;                                         // 0x02B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeDownTimes;                                              // 0x02BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeSavedTimes;                                             // 0x02C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PickUpAirDrops;                                           // 0x02C4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FEquipmentData                              EquipmentData;                                            // 0x02C8(0x0070)
	int                                                Rank;                                                     // 0x0338(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalScore;                                               // 0x033C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ProneTimes;                                               // 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CrouchTimes;                                              // 0x0344(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                JumpTimes;                                                // 0x0348(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TouchDownAreaID;                                          // 0x034C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TouchDownLocTypeID;                                       // 0x0350(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	TArray<int>                                        TouchDownAreaList;                                        // 0x0358(0x0010) (ZeroConstructor)
	TArray<struct FGameModePlayerTaskData>             CompletedTaskList;                                        // 0x0368(0x0010) (ZeroConstructor)
	TArray<struct FReportCollection>                   SpecialCollectionList;                                    // 0x0378(0x0010) (ZeroConstructor)
	TArray<struct FWeaponDamageRecord>                 WeaponDamageRecordList;                                   // 0x0388(0x0010) (ZeroConstructor)
	struct FGrenadeDamageRecord                        GrenadeDamageRecord;                                      // 0x0398(0x0028)
	struct FKniveDamageRecord                          KniveDamageRecord;                                        // 0x03C0(0x0028)
	TArray<int>                                        SecretAreaIDList;                                         // 0x03E8(0x0010) (ZeroConstructor)
	int                                                KillNumInVehicle;                                         // 0x03F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalSprintDistance;                                      // 0x03FC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalBeenDamageAmount;                                    // 0x0400(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DestroyVehicleWheelNum;                                   // 0x0404(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BuildFlow;                                                // 0x0408(0x0010) (ZeroConstructor)
	TArray<int>                                        DestroyShelterFlow;                                       // 0x0418(0x0010) (ZeroConstructor)
	float                                              ShelterTakeDamage;                                        // 0x0428(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HitShelterDamage;                                         // 0x042C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FVehicleDriveDisData>                VehicleDriveDisDataArray;                                 // 0x0430(0x0010) (ZeroConstructor)
	TArray<struct FKnockOutData>                       KnockOutList;                                             // 0x0440(0x0010) (ZeroConstructor)
	bool                                               IsKickedFromGame;                                         // 0x0450(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0451(0x0003) MISSED OFFSET
	int                                                KillMonsterNum;                                           // 0x0454(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LightCandleNum;                                           // 0x0458(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillMagicWalkAI;                                          // 0x045C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SendMagicWalkAI;                                          // 0x0460(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BattleStateTime;                                          // 0x0464(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsGameTerminator;                                        // 0x0468(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	TMap<int, int>                                     ActivityButtonCount;                                      // 0x0470(0x0050) (ZeroConstructor)
	struct FTLog_SpecialStats                          TLog_SpecialStats;                                        // 0x04C0(0x0008)
	float                                              TotalDamage;                                              // 0x04C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MeleeKillTimes;                                           // 0x04CC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MeleeDamageAmount;                                        // 0x04D0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RangedDamagedAmount;                                      // 0x04D4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VehicleDamageAmount;                                      // 0x04D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OpenAirDropBoxesNum;                                      // 0x04DC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FollowState;                                              // 0x04E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	TArray<struct FString>                             DestroyVehicleFlow;                                       // 0x04E8(0x0010) (ZeroConstructor)
	int                                                UseHelicoperNum;                                          // 0x04F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              UseHelicoperDistance;                                     // 0x04FC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RevivalNum;                                               // 0x0500(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeRevivedNum;                                             // 0x0504(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DrivingHelicopterTime;                                    // 0x0508(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InHelicopterTime;                                         // 0x050C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SnowBoardJumpActionCount;                                 // 0x0510(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EmoteOnTelpherCount;                                      // 0x0514(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        FindBlackMonsterIDs;                                      // 0x0518(0x0010) (ZeroConstructor)
	int                                                KillSnowManCount;                                         // 0x0528(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x052C(0x0004) MISSED OFFSET
	TMap<EEventCounterDefine, int>                     EventCounterMap;                                          // 0x0530(0x0050) (ZeroConstructor)
	TMap<int, int>                                     GeneralCounterMap;                                        // 0x0580(0x0050) (ZeroConstructor)
	struct FTLog_Micphone                              MicphoneTlog;                                             // 0x05D0(0x0018)
	int                                                NormalItemNum;                                            // 0x05E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SeniorItemNum;                                            // 0x05EC(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FSpecialWeaponRecord>                SpecicalWeaponRecordList;                                 // 0x05F0(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.WeatherInfo
// 0x0018
struct FWeatherInfo
{
	struct FString                                     WeatherLevelName;                                         // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                WeatherID;                                                // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeatherTime;                                              // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerNetStats
// 0x0040
struct FPlayerNetStats
{
	struct FString                                     ClientAddr;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     LocalAddr;                                                // 0x0010(0x0010) (ZeroConstructor)
	float                                              AvgPing;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxPing;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HighPingPercent;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x002C(0x0014) MISSED OFFSET
};

// ScriptStruct Gameplay.PlayerOBInfo
// 0x0038
struct FPlayerOBInfo
{
	bool                                               IsEnableOB;                                               // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	uint64_t                                           UId;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ZoneID;                                                   // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BattleMode;                                               // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ValidBattleInfo;                                          // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                GameCount;                                                // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WinCount;                                                 // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TopTenCount;                                              // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                KillNum;                                                  // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              KDNum;                                                    // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.GameModePlayerRolewearInfo
// 0x0018
struct FGameModePlayerRolewearInfo
{
	TArray<struct FGameModePlayerItem>                 RolewearInfo;                                             // 0x0000(0x0010) (ZeroConstructor)
	bool                                               IsLocked;                                                 // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Gameplay.GameModePlayerConsumableAvatar
// 0x0010
struct FGameModePlayerConsumableAvatar
{
	int                                                GrenadeAvatarShoulei;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GrenadeAvatarSmoke;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GrenadeAvatarStun;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GrenadeAvatarBurn;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModePlayerKnapsackSingleInfo
// 0x0060
struct FGameModePlayerKnapsackSingleInfo
{
	int                                                Parachute;                                                // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BagSkin;                                                  // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HelmetSkin;                                               // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FlySkin;                                                  // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                GrenadeSkin;                                              // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGameModePlayerConsumableAvatar             ConsumableAvatarList;                                     // 0x0014(0x0010) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FGameModePlayerItem>                 WeaponList;                                               // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FGameModePlayerItem>                 VehicleSkinList;                                          // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FGameModePlayerItem>                 BackPackPendantList;                                      // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                ShowVehicleSkin;                                          // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WingmanSkin;                                              // 0x005C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModePlayerKnapsackExtInfo
// 0x0068
struct FGameModePlayerKnapsackExtInfo
{
	struct FGameModePlayerKnapsackSingleInfo           KnapsackExtInfo;                                          // 0x0000(0x0060) (BlueprintVisible, BlueprintReadOnly)
	bool                                               IsLocked;                                                 // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                WearIndex;                                                // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModePlayeWeaponSchemeSlotInfo
// 0x0020
struct FGameModePlayeWeaponSchemeSlotInfo
{
	int                                                SlotIndex;                                                // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<int>                                        AttachList;                                               // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Gameplay.GameModePlayeWeaponSchemeInfo
// 0x0018
struct FGameModePlayeWeaponSchemeInfo
{
	int                                                SchemeIndex;                                              // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsLocked;                                                 // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<struct FGameModePlayeWeaponSchemeSlotInfo>  SlotList;                                                 // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Gameplay.GameModePlayerItems
// 0x0010
struct FGameModePlayerItems
{
	TArray<struct FGameModePlayerItem>                 Items;                                                    // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.VehicleAvatarStyle
// 0x0010
struct FVehicleAvatarStyle
{
	int                                                ModelID;                                                  // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ColorID;                                                  // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PatternID;                                                // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ParticleID;                                               // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.VehicleAvatarData
// 0x0028
struct FVehicleAvatarData
{
	int                                                VehicleSkinID;                                            // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        VehicleStyleIDList;                                       // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FVehicleAvatarStyle>                 VehicleAvatarStyle;                                       // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.GameModePlayerEquipmentAvatar
// 0x000C
struct FGameModePlayerEquipmentAvatar
{
	int                                                BagAvatar;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HelmetAvatar;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArmorAvatar;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModeWeaponAvatarData
// 0x0008
struct FGameModeWeaponAvatarData
{
	int                                                ParentID;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AvatarSpecificID;                                         // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.VehicleAvatarSkinList
// 0x0010
struct FVehicleAvatarSkinList
{
	TArray<int>                                        SkinList;                                                 // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.GameModePlayerExpressionItem
// 0x0000 (0x0018 - 0x0018)
struct FGameModePlayerExpressionItem : public FGameModePlayerItem
{

};

// ScriptStruct Gameplay.GameModeWeaponDIYPlanData
// 0x0008
struct FGameModeWeaponDIYPlanData
{
	int                                                WeaponAvatarID;                                           // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PlanID;                                                   // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.SpecialPickItem
// 0x000C
struct FSpecialPickItem
{
	int                                                item_id;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                cur_count;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_count;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.DailyTaskStoreInfo
// 0x000C
struct FDailyTaskStoreInfo
{
	int                                                TaskId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                State;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Progress;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.LobbyWatchInfo
// 0x0008
struct FLobbyWatchInfo
{
	uint32_t                                           WatchedPlayerKey;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsHawkEyeSpectator;                                      // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.GameModePlayerBanChat
// 0x0018
struct FGameModePlayerBanChat
{
	int                                                end_time;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Reason;                                                   // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.AchievementPrize
// 0x000C
struct FAchievementPrize
{
	int                                                MedalAvatarID;                                            // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NotifyTitleAvatarID;                                      // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ScoreBoardAvatarID;                                       // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModePlayerParams
// 0x03A0
struct FGameModePlayerParams
{
	bool                                               bEnablePlaneBanner;                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     PlanetailResLink;                                         // 0x0008(0x0010) (ZeroConstructor)
	uint64_t                                           UId;                                                      // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // 0x0020(0x0010) (ZeroConstructor)
	int8_t                                             PlatID;                                                   // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FName                                       PlayerType;                                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x0040(0x0010) (ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int64_t                                            IdxInTeam;                                                // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerBornPointID;                                        // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bTeamLeader;                                              // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsGM;                                                    // 0x0065(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      gender;                                                   // 0x0066(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0067(0x0001) MISSED OFFSET
	struct FString                                     PIC_URL;                                                  // 0x0068(0x0010) (ZeroConstructor)
	int                                                Level;                                                    // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Segment_Level;                                            // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AceImprintShowId;                                         // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AceImprintBaseId;                                         // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AvatarBoxId;                                              // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bAIPlayer;                                                // 0x008C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	uint64_t                                           MLAIDisplayUID;                                           // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGameModePlayerItem>                 ItemList;                                                 // 0x0098(0x0010) (ZeroConstructor)
	TArray<struct FGameModePlayerItem>                 fireworksInfo;                                            // 0x00A8(0x0010) (ZeroConstructor)
	TArray<int>                                        equip_plating_list;                                       // 0x00B8(0x0010) (ZeroConstructor)
	TArray<struct FGameModePlayerRolewearInfo>         AllWear;                                                  // 0x00C8(0x0010) (ZeroConstructor)
	int                                                RolewearIndex;                                            // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	TArray<struct FGameModePlayerExpressionItem>       ExpressionItemList;                                       // 0x00E0(0x0010) (ZeroConstructor)
	TArray<struct FGameModePlayerTaskData>             TaskDataList;                                             // 0x00F0(0x0010) (ZeroConstructor)
	TArray<struct FGameModePlayerItem>                 WeaponAvatarList;                                         // 0x0100(0x0010) (ZeroConstructor)
	TArray<struct FGameModePlayerItem>                 VehicleAvatarList;                                        // 0x0110(0x0010) (ZeroConstructor)
	TArray<struct FVehicleAvatarData>                  VehicleAdvanceAvatarList;                                 // 0x0120(0x0010) (ZeroConstructor)
	struct FGameModePlayerEquipmentAvatar              EquipmentAvatar;                                          // 0x0130(0x000C)
	unsigned char                                      UnknownData05[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	TArray<struct FGameModeWeaponDIYPlanData>          WeaponDIYPlanData;                                        // 0x0140(0x0010) (ZeroConstructor)
	int                                                VehicleSkinInReady;                                       // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	struct FGameModePlayerAliasInfo                    AliasInfo;                                                // 0x0158(0x0048)
	struct FGameModePlayerUpassInfo                    UpassInfo;                                                // 0x01A0(0x0038)
	struct FGameModePlayerPetInfo                      PetInfo;                                                  // 0x01D8(0x0020)
	TArray<struct FGameModePlayerKnapsackExtInfo>      KnapsackExtInfoList;                                      // 0x01F8(0x0010) (ZeroConstructor)
	TArray<struct FGameModePlayeWeaponSchemeInfo>      WeaponSchemeInfoList;                                     // 0x0208(0x0010) (ZeroConstructor)
	int                                                CurWeaponSchemeIndex;                                     // 0x0218(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PveLevel;                                                 // 0x021C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        CharSkillList;                                            // 0x0220(0x0010) (ZeroConstructor)
	struct FGameModePlayerBanChat                      banChat;                                                  // 0x0230(0x0018)
	struct FGameModePlayerBanChat                      banTarget;                                                // 0x0248(0x0018)
	TArray<struct FSpecialPickItem>                    SpecialPickItem;                                          // 0x0260(0x0010) (ZeroConstructor)
	struct FAchievementPrize                           EquippedAchievementPrize;                                 // 0x0270(0x000C)
	unsigned char                                      UnknownData07[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	TArray<int>                                        audioChat;                                                // 0x0280(0x0010) (ZeroConstructor)
	struct FName                                       CurrentPlayerState;                                       // 0x0290(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CurrentCharacterState;                                    // 0x0298(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              SyncedTimestamp;                                          // 0x02A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DestinyValue;                                             // 0x02A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WarmScore;                                                // 0x02A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AIAllocMarkValue;                                         // 0x02AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LeaderCount;                                              // 0x02B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	uint64_t                                           LastGameLeaderUID;                                        // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<uint64_t>                                   LastGameTeammatesUID;                                     // 0x02C0(0x0010) (ZeroConstructor)
	uint64_t                                           LastGameBattleID;                                         // 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              RatingScore;                                              // 0x02D8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bDoPlayerUseAutoFollow;                                   // 0x02DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	float                                              MaxRankingScore;                                          // 0x02E0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ObserverFlags;                                            // 0x02E4(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           WatchPlayerKey;                                           // 0x02E8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsHawkEyeSpectator;                                      // 0x02F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x02F1(0x0003) MISSED OFFSET
	int                                                HawkEyeSpectateMaxMatchCount;                             // 0x02F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HawkEyeSpectateUsedMatchCount;                            // 0x02F8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlatformGender;                                           // 0x02FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x02FD(0x0003) MISSED OFFSET
	int                                                planeAvatarId;                                            // 0x0300(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DyeDebugFlag;                                             // 0x0304(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Nation;                                                   // 0x0308(0x0010) (ZeroConstructor)
	int                                                MatchLabel;                                               // 0x0318(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AnchorPlatColorID;                                        // 0x031C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AnchorPlatResID;                                          // 0x0320(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               OnlyTeammateSeeAvatar;                                    // 0x0324(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0325(0x0003) MISSED OFFSET
	int64_t                                            LastGameResultTime;                                       // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            CorpsID;                                                  // 0x0330(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            CampID;                                                   // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bUsedSimulation;                                          // 0x0340(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRoomCanKickPlayer;                                       // 0x0341(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanDownloadInBattle;                                     // 0x0342(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x5];                                       // 0x0343(0x0005) MISSED OFFSET
	struct FString                                     IpCountryStr;                                             // 0x0348(0x0010) (ZeroConstructor)
	bool                                               bRoomOwner;                                               // 0x0358(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	int                                                VeteranRecruitIndex;                                      // 0x035C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MatchStrategyLabel;                                       // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	TArray<struct FDailyTaskStoreInfo>                 DailyTaskStoreList;                                       // 0x0368(0x0010) (ZeroConstructor)
	int                                                LandId;                                                   // 0x0378(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FollowType;                                               // 0x037C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           FollowUID;                                                // 0x0380(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TaskSyncToDsTs;                                           // 0x0388(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	uint64_t                                           LuckmateUID;                                              // 0x0390(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                CollectedEventType;                                       // 0x0398(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.UAEWindowRepData
// 0x0050
struct FUAEWindowRepData
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (IsPlainOldData)
	struct FString                                     PathToLoad;                                               // 0x0030(0x0010) (ZeroConstructor)
	int                                                ID;                                                       // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBroken;                                                  // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	class APawn*                                       LastInstigatorPawn;                                       // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.SpotWeight
// 0x0018
struct FSpotWeight
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Weight;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.SpotTypeProperty
// 0x0038
struct FSpotTypeProperty
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SpotPercentMin;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpotPercentMax;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpotPercentDot;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemPerSpotMin;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemPerSpotMax;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpotWeight>                         WeightsPerValue;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSpotWeight>                         WeightsPerCategory;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.SpotGroupProperty
// 0x0028
struct FSpotGroupProperty
{
	TEnumAsByte<ESpotGroupType>                        SpotGroupType;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SpotGroupPercent;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpotTypeProperty>                   SpotTypeProperties;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bRepeatGenerateItem;                                      // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              RepeatGenerateItemCDMin;                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RepeatGenerateItemCDMax;                                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.ItemGenerateSpawnClass
// 0x00D8
struct FItemGenerateSpawnClass
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      ItemClass;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemPath;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemCount;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     MetaData;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ItemValue;                                                // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     ItemCategory;                                             // 0x0048(0x0010) (ZeroConstructor)
	bool                                               bRepeatGenerateItem;                                      // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsNearItem;                                               // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	struct FVector                                     SpotGenerateLoc;                                          // 0x005C(0x000C) (IsPlainOldData)
	struct FVector                                     SpotGroupLoc;                                             // 0x0068(0x000C) (IsPlainOldData)
	struct FRotator                                    SpotRotator;                                              // 0x0074(0x000C) (IsPlainOldData)
	int                                                SpotPercent;                                              // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FString                                     SpotDefaultTag;                                           // 0x0088(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	class AActor*                                      HostActor;                                                // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      AttachedActor;                                            // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x14];                                      // 0x00B0(0x0014) MISSED OFFSET
	int                                                SpotIndex;                                                // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Random;                                                   // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsStickToTheGround;                                       // 0x00C9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x00CA(0x0002) MISSED OFFSET
	struct FVector                                     RelativeLoc;                                              // 0x00CC(0x000C) (IsPlainOldData)
};

// ScriptStruct Gameplay.CustomAccessoriesData
// 0x000C
struct FCustomAccessoriesData
{
	int                                                WeaponID;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.SpecialPickInfo
// 0x000C
struct FSpecialPickInfo
{
	int                                                item_id;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                cur_count;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                total_count;                                              // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.BattleItemNet
// 0x0048
struct FBattleItemNet
{
	struct FItemDefineID                               DefineID;                                                 // 0x0000(0x0018)
	int                                                Count;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bEquipping;                                               // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	EItemStoreArea                                     ItemStoreArea;                                            // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	TArray<struct FBattleItemAdditionalData>           AdditionalData;                                           // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FItemAssociation>                    Associations;                                             // 0x0030(0x0010) (ZeroConstructor)
	int                                                Durability;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.NetArrayUnit
// 0x0050
struct FNetArrayUnit
{
	struct FBattleItemNet                              Unit;                                                     // 0x0000(0x0048)
	bool                                               bMarkDelete;                                              // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Gameplay.IncNetArray
// 0x0020
struct FIncNetArray
{
	TArray<struct FNetArrayUnit>                       IncArray;                                                 // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Gameplay.ItemOperationInfo
// 0x0020
struct FItemOperationInfo
{
	struct FItemDefineID                               DefineID;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	EBattleItemOperationType                           BattleItemOperationType;                                  // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Reason;                                                   // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	int                                                Count;                                                    // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GroupSpotComponentArray
// 0x0018
struct FGroupSpotComponentArray
{
	TEnumAsByte<ESpotGroupType>                        GroupType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UGroupSpotSceneComponent*>            AllGroupComponents;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct Gameplay.WorldTileSpotArray
// 0x0018
struct FWorldTileSpotArray
{
	int                                                WorldCompositionID;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class USpotSceneComponent*>                 AllSpotComponents;                                        // 0x0008(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct Gameplay.ItemRegionCircle
// 0x0038
struct FItemRegionCircle
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiusSquared2D;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0014(0x0024) MISSED OFFSET
};

// ScriptStruct Gameplay.ItemSpawnData
// 0x0070
struct FItemSpawnData
{
	struct FName                                       RowName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                KeyID;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     ItemValue;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ItemCategory;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemWeight;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     ItemPath;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemStackCount;                                           // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     ItemTogetherPath;                                         // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemTogetherStackCount;                                   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemTogetherCountMin;                                     // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemTogetherCountMax;                                     // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.GroupTypeSceneComponents
// 0x0018
struct FGroupTypeSceneComponents
{
	int                                                GroupType;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class USceneComponent*>                     SceneComponents;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct Gameplay.ItemSpawnClass
// 0x0010
struct FItemSpawnClass
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemCount;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.ItemGroupStatisticsData
// 0x0018 (0x0020 - 0x0008)
struct FItemGroupStatisticsData : public FTableRowBase
{
	TEnumAsByte<ESpotGroupType>                        SpotGroupType;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                AllGroupSpotCount;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidGroupSpotCount;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllSpotCount;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidSpotCount;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.ItemSpotStatisticsData
// 0x0010 (0x0018 - 0x0008)
struct FItemSpotStatisticsData : public FTableRowBase
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                AllSpotCount;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidSpotCount;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.BuildingStatisticsData
// 0x0078 (0x0080 - 0x0008)
struct FBuildingStatisticsData : public FTableRowBase
{
	struct FString                                     BuildingName;                                             // 0x0008(0x0010) (ZeroConstructor)
	float                                              BuildingLocationX;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BuildingLocationY;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllGroupSpotCount;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidGroupSpotCount;                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllSpotCount;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidSpotCount;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<TEnumAsByte<ESpotType>, struct FItemSpotStatisticsData> SpotStatisticsData;                                       // 0x0030(0x0050) (ZeroConstructor)
};

// ScriptStruct Gameplay.ItemClassStatisticsData
// 0x0030 (0x0038 - 0x0008)
struct FItemClassStatisticsData : public FTableRowBase
{
	struct FString                                     ItemPath;                                                 // 0x0008(0x0010) (ZeroConstructor)
	bool                                               bValidPath;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                ItemCount;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemTogetherPath;                                         // 0x0020(0x0010) (ZeroConstructor)
	int                                                ItemTogetherCount;                                        // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bValidTogetherPath;                                       // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.AreaItemStatisticsData
// 0x0048 (0x0050 - 0x0008)
struct FAreaItemStatisticsData : public FTableRowBase
{
	struct FString                                     ItemName;                                                 // 0x0008(0x0010) (ZeroConstructor)
	int                                                UId;                                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GroupType;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SpotType;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     AreaName;                                                 // 0x0028(0x0010) (ZeroConstructor)
	struct FVector                                     Location;                                                 // 0x0038(0x000C) (IsPlainOldData)
	float                                              X;                                                        // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GameTime;                                                 // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.ItemGenerateStatisticsData
// 0x0110
struct FItemGenerateStatisticsData
{
	int                                                AllGroupSpotCount;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidGroupSpotCount;                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllSpotCount;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidSpotCount;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<TEnumAsByte<ESpotGroupType>, struct FItemGroupStatisticsData> GroupStatisticsData;                                      // 0x0010(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FBuildingStatisticsData> BuildingStatisticsData;                                   // 0x0060(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FItemClassStatisticsData> ItemStatisticsData;                                       // 0x00B0(0x0050) (ZeroConstructor)
	TArray<struct FAreaItemStatisticsData>             AreaItemStatisticsData;                                   // 0x0100(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.ExtraItemSpawn
// 0x0028
struct FExtraItemSpawn
{
	int                                                SpawnPercent;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     SpawnItemValue;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SpawnItemCategory;                                        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.ItemGenerateSpawnData
// 0x0068
struct FItemGenerateSpawnData
{
	int                                                KeyID;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     ItemValue;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ItemCategory;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemWeight;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     ItemPath;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemStackCount;                                           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     ItemTogetherPath;                                         // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemTogetherStackCount;                                   // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemTogetherCountMin;                                     // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemTogetherCountMax;                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.ItemGenerateSpawnDataArray
// 0x0020
struct FItemGenerateSpawnDataArray
{
	struct FString                                     ValueCatetory;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemGenerateSpawnData>              AllGenerateSpawnDatas;                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.RepeatItemSpotData
// 0x0118
struct FRepeatItemSpotData
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
	float                                              RepeatGenerateCD;                                         // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	int64_t                                            LastGenerateItemTime;                                     // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, int>                          CacheItemValeCategory;                                    // 0x00C8(0x0050) (ZeroConstructor)
};

// ScriptStruct Gameplay.GenerateItemLimit
// 0x0018
struct FGenerateItemLimit
{
	int                                                ItemID;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemNum;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     WrapperPath;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.AreaItemsLimitEdit
// 0x0028
struct FAreaItemsLimitEdit
{
	int                                                AreaX;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AreaY;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FGenerateItemLimit>                  ItemsMaxLimitEdit;                                        // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FGenerateItemLimit>                  ItemsMinLimitEdit;                                        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.AreaItemsNum
// 0x0018
struct FAreaItemsNum
{
	int                                                LimitNum;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurNum;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     WrapperPath;                                              // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.AreaItemsLimit
// 0x00C0
struct FAreaItemsLimit
{
	struct FRegionID                                   RegionID;                                                 // 0x0000(0x000C)
	bool                                               IsBeginGenerateItem;                                      // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsCheckRecoverItem;                                       // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	TArray<struct FVector>                             AvailablePosi;                                            // 0x0010(0x0010) (ZeroConstructor)
	TMap<int, struct FAreaItemsNum>                    ItemsMaxLimit;                                            // 0x0020(0x0050) (ZeroConstructor)
	TMap<int, struct FAreaItemsNum>                    ItemsMinLimit;                                            // 0x0070(0x0050) (ZeroConstructor)
};

// ScriptStruct Gameplay.CustomSpotConfig
// 0x001C
struct FCustomSpotConfig
{
	bool                                               bGenerateAtBeginning;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGroupNumCtrl;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                NeedGroupMin;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NeedGroupMax;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpotPerGroupNumCtrl;                                     // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                NeedSpotPerGroupMin;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NeedSpotPerGroupMax;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCookedRotator;                                        // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.DynamicSpotConfig
// 0x0058
struct FDynamicSpotConfig
{
	struct FString                                     Comment;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bDefaultEnable;                                           // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     DynamicSpotPath;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FCustomSpotConfig                           CustomSpotConfig;                                         // 0x0028(0x001C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FSpotGroupProperty>                  SpotGroupProperties;                                      // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.PrimeItemCircleConfig
// 0x0010
struct FPrimeItemCircleConfig
{
	TArray<struct FSpotGroupProperty>                  PrimeItemCircleProperties;                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.CharacterAnimTypeAsynLoadedPhaseData
// 0x0060
struct FCharacterAnimTypeAsynLoadedPhaseData
{
	struct FString                                     PhaseName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0010(0x0050) UNKNOWN PROPERTY: MapProperty Gameplay.CharacterAnimTypeAsynLoadedPhaseData.PhaseAnimSoftPtr
};

// ScriptStruct Gameplay.CharacterAsynLoadedTypeAnim
// 0x0078
struct FCharacterAsynLoadedTypeAnim
{
	TEnumAsByte<ECharacterAnimTypeAsynLoaded>          AnimTypeAsynLoaded;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     AnimsCatorgeryName;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FCharacterAnimTypeAsynLoadedPhaseData       Anim;                                                     // 0x0018(0x0060) (Edit, BlueprintVisible)
};

// ScriptStruct Gameplay.CharCustomAnimData
// 0x0058
struct FCharCustomAnimData
{
	struct FUAEBlackboardKeySelector                   CustomAnimType;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Gameplay.CharCustomAnimData.CustomAnimSoftPtr
	class UAnimationAsset*                             CustomAnim;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     CustomAnimName;                                           // 0x0038(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

// ScriptStruct Gameplay.CharParachuteAnimData
// 0x0048
struct FCharParachuteAnimData
{
	TEnumAsByte<ECharacterParachuteAnimType>           ParachuteAnimType;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Gameplay.CharParachuteAnimData.ParachuteAnimSoftPtr
	class UAnimationAsset*                             ParachuteAnim;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct Gameplay.ChararacterPoseAnimData
// 0x0030
struct FChararacterPoseAnimData
{
	TEnumAsByte<ECharacterPoseType>                    PoseType;                                                 // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Gameplay.ChararacterPoseAnimData.PoseAnimSoftPtr
};

// ScriptStruct Gameplay.CharacterMovementAnimData
// 0x00A0
struct FCharacterMovementAnimData
{
	TEnumAsByte<ECharacterAnimType>                    AnimType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       AnimTypeName;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FChararacterPoseAnimData                    PoseAnim_Stand;                                           // 0x0010(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FChararacterPoseAnimData                    PoseAnim_Crouch;                                          // 0x0040(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FChararacterPoseAnimData                    PoseAnim_Prone;                                           // 0x0070(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Gameplay.CharacterShieldAnimData
// 0x00A0
struct FCharacterShieldAnimData
{
	TEnumAsByte<ECharacterShieldAnimType>              AnimType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       AnimTypeName;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FChararacterPoseAnimData                    PoseAnim_Stand;                                           // 0x0010(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FChararacterPoseAnimData                    PoseAnim_Crouch;                                          // 0x0040(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FChararacterPoseAnimData                    PoseAnim_Prone;                                           // 0x0070(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Gameplay.ChararacterJumpPhaseData
// 0x0030
struct FChararacterJumpPhaseData
{
	TEnumAsByte<ECharacterJumpPhase>                   JumpPhase;                                                // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Gameplay.ChararacterJumpPhaseData.PhaseAnimSoftPtr
};

// ScriptStruct Gameplay.CharacterJumpAnimData
// 0x01C0
struct FCharacterJumpAnimData
{
	TEnumAsByte<ECharacterJumpType>                    JumpType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       JumpTypeName;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FChararacterJumpPhaseData                   JumpPhase_PreJump;                                        // 0x0010(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FChararacterJumpPhaseData                   JumpPhase_FallLoop0;                                      // 0x0040(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FChararacterJumpPhaseData                   JumpPhase_FallLoop1;                                      // 0x0070(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FChararacterJumpPhaseData                   JumpPhase_Land0;                                          // 0x00A0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FChararacterJumpPhaseData                   JumpPhase_Land1;                                          // 0x00D0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FChararacterJumpPhaseData                   JumpPhase_GrenadeJump_1;                                  // 0x0100(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FChararacterJumpPhaseData                   JumpPhase_GrenadeJump_2;                                  // 0x0130(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FChararacterJumpPhaseData                   JumpPhase_GrenadeFall_1;                                  // 0x0160(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FChararacterJumpPhaseData                   JumpPhase_GrenadeFall_2;                                  // 0x0190(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Gameplay.CharacterShovelPhaseData
// 0x0030
struct FCharacterShovelPhaseData
{
	ECharacterShovelPhase                              ShovelPhase;                                              // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Gameplay.CharacterShovelPhaseData.PhaseAnimSoftPtr
};

// ScriptStruct Gameplay.CharacterShovelAnimData
// 0x00C0
struct FCharacterShovelAnimData
{
	struct FCharacterShovelPhaseData                   ShovelPhase_Enter;                                        // 0x0000(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FCharacterShovelPhaseData                   ShovelPhase_Shoveling;                                    // 0x0030(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FCharacterShovelPhaseData                   ShovelPhase_Leave;                                        // 0x0060(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FCharacterShovelPhaseData                   ShovelPhase_Crouch_Leave;                                 // 0x0090(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Gameplay.CharAnimModifyData
// 0x0038
struct FCharAnimModifyData
{
	int                                                AppliedGameMode;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECharaAnimListType>                    ModifyAnimListType;                                       // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECharacterAnimType>                    AnimType;                                                 // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECharacterPoseType>                    PoseType;                                                 // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECharacterJumpType>                    JumpType;                                                 // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECharacterJumpPhase>                   JumpPhase;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0009(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Gameplay.CharAnimModifyData.PoseAnimSoftPtr
};

// ScriptStruct Gameplay.CharacterVehAnimModifyData
// 0x0038
struct FCharacterVehAnimModifyData
{
	ESVehAnimVehicleType                               VehicleType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SeatIdx;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECharacterVehicleAnimType>             VehicleAnimType;                                          // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x0009(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Gameplay.CharacterVehAnimModifyData.VehicleAnimSoftPtr
};

// ScriptStruct Gameplay.GetAnimUtil
// 0x0020
struct FGetAnimUtil
{
	TArray<struct FSoftObjectPath>                     PendingList;                                              // 0x0000(0x0010) (ZeroConstructor, Transient)
	class UUAECharacterAnimListSubSystem*              AnimListSubSystem;                                        // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Gameplay.AsyncLoadCharAnimParams
// 0x0028
struct FAsyncLoadCharAnimParams
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Gameplay.PlayerAnimData
// 0x0010
struct FPlayerAnimData
{
	class UAnimationAsset*                             Animation;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.VehCharAnimData
// 0x0040
struct FVehCharAnimData
{
	TEnumAsByte<ECharacterVehicleAnimType>             VehAnimType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Gameplay.VehCharAnimData.VehAnimSoftPtr
	unsigned char                                      UnknownData02[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Gameplay.AsyncLoadCharVehAnimParams
// 0x0018
struct FAsyncLoadCharVehAnimParams
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Gameplay.SeqActorBindingData
// 0x0018
struct FSeqActorBindingData
{
	struct FString                                     TrackName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      BindingActor;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Gameplay.LobbyCharacterGenderWeaponAnimData
// 0x0078
struct FLobbyCharacterGenderWeaponAnimData
{
	TEnumAsByte<ELobbyCharacterAnimType>               GenderType;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     GenderTypeName;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Gameplay.LobbyCharacterGenderWeaponAnimData.WeaponAnimSoftPtr
	unsigned char                                      UnknownData02[0x28];                                      // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Gameplay.LobbyCharacterGenderWeaponAnimData.WeaponAddAnimSoftPtr
	unsigned char                                      UnknownData03[0x10];                                      // 0x0068(0x0010) UNKNOWN PROPERTY: ArrayProperty Gameplay.LobbyCharacterGenderWeaponAnimData.WeaponPlayAnimSoftPtrArray
};

// ScriptStruct Gameplay.LobbyCharacterWeaponAnimData
// 0x0028
struct FLobbyCharacterWeaponAnimData
{
	TEnumAsByte<ELobbyCharacterPosIndex>               PosIndex;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     CharPosName;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FLobbyCharacterGenderWeaponAnimData> GenderWeaponAnimList;                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Gameplay.LobbyAsyncLoadCharAnimParams
// 0x0020
struct FLobbyAsyncLoadCharAnimParams
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Gameplay.UAESpawnActorParam
// 0x0090
struct FUAESpawnActorParam
{
	int                                                TemplateID;                                               // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      ActorClass;                                               // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // 0x0010(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    SpawnRotator;                                             // 0x001C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpawnOffsetLoc;                                           // 0x0028(0x000C) (BlueprintVisible, IsPlainOldData)
	ESpawnActorCollisionHandlingMethod                 CollisionHandling;                                        // 0x0034(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              RandomRadius;                                             // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RandomRotYaw;                                             // 0x003C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	TArray<class UClass*>                              TraceAvoidClass;                                          // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor)
	class AActor*                                      Owner;                                                    // 0x0050(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Instigator;                                               // 0x0058(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     MakerName;                                                // 0x0060(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               IsTracePos;                                               // 0x0070(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsHalfCapsulePull;                                        // 0x0071(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EActorSpawnType>                       SpawnType;                                                // 0x0072(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0073(0x0001) MISSED OFFSET
	int                                                ZTraceOffset;                                             // 0x0074(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MonsterBornType;                                          // 0x0078(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MonsterFrontBornType;                                     // 0x007C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFeatureSetType                                    FeatureSetType;                                           // 0x0080(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0081(0x000F) MISSED OFFSET
};

// ScriptStruct Gameplay.BackupVehicleSpotData
// 0x0024
struct FBackupVehicleSpotData
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpotGroupType>                        SpotGroupType;                                            // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FVector                                     SpotGenerateLoc;                                          // 0x0008(0x000C) (IsPlainOldData)
	struct FRotator                                    SpotRotator;                                              // 0x0014(0x000C) (IsPlainOldData)
	bool                                               bRandomRotation;                                          // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUsed;                                                    // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
};

// ScriptStruct Gameplay.VehicleSpotProperty
// 0x0038
struct FVehicleSpotProperty
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FSpotWeight>                         WeightsPerCategory;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                FuelPercentMin;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FuelPercentMax;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bActiveByStartVolume;                                     // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVehicleSpotRandomType>                RandomType;                                               // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              TotalCountMultiplierWithPalyerCount;                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalCountRangeMin;                                       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalCountRangeMax;                                       // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProbabilityPersent;                                       // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProbabilityPersentWithPalyerCount;                        // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.TreasureBoxSpotProperty
// 0x0020
struct FTreasureBoxSpotProperty
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FSpotWeight>                         WeightsPerCategory;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TotalCountRangeMin;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalCountRangeMax;                                       // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.VehicleSpotComponentArray
// 0x0018
struct FVehicleSpotComponentArray
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UVehicleSpotSceneComponent*>          AllSpots;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct Gameplay.VehicleGenerateSpawnData
// 0x0030
struct FVehicleGenerateSpawnData
{
	int                                                KeyID;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     VehicleType;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     VehiclePath;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                VehicleWeight;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SnapFloor;                                                // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.VehicleGenerateSpawnDataArray
// 0x0020
struct FVehicleGenerateSpawnDataArray
{
	struct FString                                     Catetory;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVehicleGenerateSpawnData>           AllGenerateSpawnDatas;                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.VehicleSpotStatisticsData
// 0x0028 (0x0030 - 0x0008)
struct FVehicleSpotStatisticsData : public FTableRowBase
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     VehiclePath;                                              // 0x0010(0x0010) (ZeroConstructor)
	float                                              VehicleLocationX;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VehicleLocationY;                                         // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VehicleLocationZ;                                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.VehicleClassStatisticsData
// 0x0018 (0x0020 - 0x0008)
struct FVehicleClassStatisticsData : public FTableRowBase
{
	struct FString                                     VehiclePath;                                              // 0x0008(0x0010) (ZeroConstructor)
	bool                                               bValidPath;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                AllVehicleCount;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.VehicleGenerateStatisticsData
// 0x0060
struct FVehicleGenerateStatisticsData
{
	TArray<struct FVehicleSpotStatisticsData>          VehicleSpotStatisticsData;                                // 0x0000(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FVehicleClassStatisticsData> VehicleClassStatisticsData;                               // 0x0010(0x0050) (ZeroConstructor)
};

// ScriptStruct Gameplay.VehicleGenerateRandomInfo
// 0x0028
struct FVehicleGenerateRandomInfo
{
	struct FString                                     VehicleType;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     VehiclePath;                                              // 0x0010(0x0010) (ZeroConstructor)
	float                                              FuelPercent;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               SnapFloor;                                                // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bActiveByStartVolume;                                     // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
};

// ScriptStruct Gameplay.GameModeStateChangedParams
// 0x0010
struct FGameModeStateChangedParams
{
	struct FName                                       GameModeState;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bAliveOnNonePlayer;                                       // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Gameplay.CircleDataMining
// 0x0014
struct FCircleDataMining
{
	struct FVector                                     WhiteCircleCenter;                                        // 0x0000(0x000C) (IsPlainOldData)
	bool                                               bDestinyCircle;                                           // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                LeftPlayerNum;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.WatchFlow
// 0x0010
struct FWatchFlow
{
	uint64_t                                           UId;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           sec;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.GameWatchReport
// 0x0038
struct FGameWatchReport
{
	uint16_t                                           AreaID;                                                   // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0008(0x0010) (ZeroConstructor)
	uint64_t                                           player_uid;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              total_time;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FWatchFlow>                          watch_flow;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.GameDataMining
// 0x0048
struct FGameDataMining
{
	struct FString                                     BattleID;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     PlaneStartPoint;                                          // 0x0010(0x000C) (IsPlainOldData)
	struct FVector                                     PlaneEndPoint;                                            // 0x001C(0x000C) (IsPlainOldData)
	TArray<struct FCircleDataMining>                   CircleDataMining;                                         // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FGameWatchReport>                    WatchReport;                                              // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.GameModePlayerShowUpassInfo
// 0x00A0
struct FGameModePlayerShowUpassInfo
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                updateTime;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                upassLevel;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                upassScore;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                planeAvatarId;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isBattleTitle;                                            // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isUI;                                                     // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               battleShow;                                               // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isBuy;                                                    // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     iconUrl;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Nation;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FGameModePlayerAliasInfo                    AliasInfo;                                                // 0x0048(0x0048) (Edit, BlueprintVisible)
	int                                                upassKeepBuy;                                             // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                upassCurValue;                                            // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                pass_type;                                                // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                nUpassPrimePlusCard;                                      // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.DIYParamData
// 0x0030
struct FDIYParamData
{
	int                                                Direction;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ColorID;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Opacity;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleX;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleY;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffSetX;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffSetY;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UClipX;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UClipY;                                                   // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VClipX;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VClipY;                                                   // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.DIYOneTexData
// 0x0034
struct FDIYOneTexData
{
	int                                                TexPathID;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDIYParamData                               DIYParam;                                                 // 0x0004(0x0030) (Edit, BlueprintVisible)
};

// ScriptStruct Gameplay.DIYMergedTexData
// 0x0048
struct FDIYMergedTexData
{
	TArray<struct FDIYOneTexData>                      TextureList;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TexPathID;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDIYParamData                               DIYParam;                                                 // 0x0014(0x0030) (Edit, BlueprintVisible)
	int                                                SlotID;                                                   // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.ResponResult
// 0x0001
struct FResponResult
{
	bool                                               bResponed;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.WeaponDIYData
// 0x004F (0x0050 - 0x0001)
struct FWeaponDIYData : public FResponResult
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                WeaponID;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlanID;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FDIYMergedTexData>                   DIYData;                                                  // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        MatParam;                                                 // 0x0020(0x0010) (ZeroConstructor)
	TArray<int>                                        MirroParam;                                               // 0x0030(0x0010) (ZeroConstructor)
	TArray<int>                                        SlotMatParam;                                             // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.TLog_ActivityEventType
// 0x0010
struct FTLog_ActivityEventType
{
	unsigned char                                      ActivityEventID;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     ActivityEventLoc;                                         // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerVehAnimList
// 0x0160
struct FPlayerVehAnimList
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	int                                                FrameCounter;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             IdleAnim;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             IdleMotorbikeAnim;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             VacateMotorbikeAnim;                                      // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             IdleMotorBikeDirverLeaningAnim;                           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             IdleMotorBikeDirverLeaningLowSpeedAnim;                   // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             MotorBikeDirverLeaningGroundPitchAnim;                    // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             PassengerMotorBikeIdleBaseDriverOffAnim;                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             PassengerMotorBikeIdleBaseWithGunDriverOffAnim;           // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             PassengerMotorBikeIdleBaseWithMeleeDriverOffAnim;         // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             PassengerMotorBikeIdleBaseWithThrowObjDriverOffAnim;      // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             PassengerDriverOffAimAim;                                 // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             PassengerMotorBikeIdleLeaningAnim;                        // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             PassengerMotorBikeIdleBaseDriverOnAnim;                   // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             PassengerMotorBikeIdleBaseWithGunDriverOnAnim;            // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             PassengerMotorBikeIdleBaseWithMeleeDriverOnAnim;          // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             PassengerMotorBikeIdleBaseWithThrowObjDriverOnAnim;       // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             LeanOutAnim;                                              // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             LeanInAnim;                                               // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             AimAnim;                                                  // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             WeaponIdleAddition;                                       // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             WeaponAimAddition;                                        // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             WeaponReloadAddition;                                     // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             SurfBoard_IdleAnim;                                       // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             SurfBoard_MoveAnim;                                       // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             SurfBoard_JumpAnim;                                       // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             SurfBoard_LandAnim;                                       // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             SurfBoard_JumpLeftTurnAnim;                               // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             SurfBoard_JumpRightTurnAnim;                              // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             Ski_JumpStationary;                                       // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             Ski_DownTurnLR;                                           // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             Ski_DownTurnRL;                                           // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             Ski_DownTurnFD;                                           // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             Ski_Falling;                                              // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             Ski_DownFallLandingAdditive;                              // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             Ski_DownFallLandingHard;                                  // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             VehicleWeaponIdleAnim;                                    // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             VehicleWeaponEquipAnim;                                   // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             VehicleWeaponUnEquipAnim;                                 // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             VehicleWeaponReloadAnim;                                  // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             VehicleWeaponAimOffsetAnim;                               // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             MotorgliderSteerAnim;                                     // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             MotorgliderIdleAnim;                                      // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             VehicleDriverForwardAnim;                                 // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.AnchorPlatData
// 0x0008
struct FAnchorPlatData
{
	int                                                AnchorPlatResID;                                          // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AnchorPlatColorID;                                        // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModeAIPlayerParams
// 0x0010 (0x03B0 - 0x03A0)
struct FGameModeAIPlayerParams : public FGameModePlayerParams
{
	int8_t                                             AIType;                                                   // 0x039C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	uint32_t                                           AILevel;                                                  // 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bMLAIPlayer;                                              // 0x03A4(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMLDelivery;                                              // 0x03A5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03A6(0x0002) MISSED OFFSET
	uint32_t                                           MLBotType;                                                // 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.BuildMaterialData
// 0x0008
struct FBuildMaterialData
{
	int                                                MatID;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MatCount;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.MonsterTreasureBoxData
// 0x0018
struct FMonsterTreasureBoxData
{
	float                                              BoxStartTime;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxLocation;                                              // 0x0004(0x000C) (IsPlainOldData)
	uint64_t                                           BoxStartPlayer;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerBaseInfoInOB
// 0x0024
struct FPlayerBaseInfoInOB
{
	struct FVector_NetQuantize                         Location;                                                 // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly)
	int                                                Health;                                                   // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HealthMax;                                                // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LiveState;                                                // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                KillNum;                                                  // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                KillNumBeforeDie;                                         // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerStaticInfoInOB
// 0x0048
struct FPlayerStaticInfoInOB
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     PlayerOpenID;                                             // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     PicUrl;                                                   // 0x0020(0x0010) (ZeroConstructor)
	int                                                TeamID;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IndexInMap;                                               // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	uint64_t                                           UId;                                                      // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.AllStarReportData
// 0x0008
struct FAllStarReportData
{
	bool                                               bShowReportFlag;                                          // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                BeReportedNum;                                            // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.TaskAwardItemInfo
// 0x0008
struct FTaskAwardItemInfo
{
	int                                                ItemID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ItemNum;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.DailyTaskAwardInfo
// 0x0018
struct FDailyTaskAwardInfo
{
	int                                                TaskId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FTaskAwardItemInfo>                  AwardList;                                                // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.DailyTaskReportInfo
// 0x0030
struct FDailyTaskReportInfo
{
	uint64_t                                           UId;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TaskSyncToDsTs;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FDailyTaskStoreInfo>                 TaskInfo;                                                 // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FDailyTaskAwardInfo>                 RewardInfo;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.PlayerInfoInOB
// 0x007C (0x00A0 - 0x0024)
struct FPlayerInfoInOB : public FPlayerBaseInfoInOB
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	uint64_t                                           UId;                                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     PlayerOpenID;                                             // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PicUrl;                                                   // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               ShowPicUrl;                                               // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                TeamID;                                                   // 0x0064(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     TeamName;                                                 // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TWeakObjectPtr<class APawn>                        Character;                                                // 0x0078(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFiring;                                                 // 0x0080(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasDied;                                                 // 0x0081(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1E];                                      // 0x0082(0x001E) MISSED OFFSET
};

// ScriptStruct Gameplay.ParachuteData
// 0x0090
struct FParachuteData
{
	uint64_t                                           UId;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              SlideDuration;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      FollowState;                                              // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FVector                                     ClientLandLocation;                                       // 0x0010(0x000C) (IsPlainOldData)
	struct FVector                                     ClientLocation;                                           // 0x001C(0x000C) (IsPlainOldData)
	struct FVector                                     ServerLandLocation;                                       // 0x0028(0x000C) (IsPlainOldData)
	float                                              SlideStartTime;                                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SlideEndTime;                                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     InputCount;                                               // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     PositionCheck;                                            // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     ClientPositionDiff;                                       // 0x0060(0x0010) (ZeroConstructor)
	float                                              LastCorrectionTime;                                       // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastCorrectionHeight;                                     // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastCorrectionLocation;                                   // 0x0078(0x000C) (IsPlainOldData)
	struct FVector                                     LastCorrectedLocation;                                    // 0x0084(0x000C) (IsPlainOldData)
};

// ScriptStruct Gameplay.PlayBaseInfo
// 0x0030
struct FPlayBaseInfo
{
	uint64_t                                           RoleID;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // 0x0008(0x0010) (ZeroConstructor)
	int8_t                                             PlatID;                                                   // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0019(0x0001) MISSED OFFSET
	uint16_t                                           AreaID;                                                   // 0x001A(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.IntPosition2D
// 0x0008
struct FIntPosition2D
{
	int                                                X;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerPositionFlow
// 0x0048
struct FPlayerPositionFlow
{
	struct FPlayBaseInfo                               PlayerBaseInfo;                                           // 0x0000(0x0030)
	int                                                FirstPointTimestamp;                                      // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FIntPosition2D>                      PointList;                                                // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.VehicleMovePoint
// 0x0028
struct FVehicleMovePoint
{
	uint32_t                                           UniqueId;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             Type;                                                     // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                X;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Speed;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             VehicleN2oUse;                                            // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             VehicleCarPetUse;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	int                                                VehicleMoveDistance;                                      // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TimeStamp;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.VehicleMoveFlow
// 0x0040
struct FVehicleMoveFlow
{
	uint64_t                                           RoleID;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // 0x0008(0x0010) (ZeroConstructor)
	int8_t                                             PlatID;                                                   // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0019(0x0001) MISSED OFFSET
	uint16_t                                           AreaID;                                                   // 0x001A(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FVehicleMovePoint>                   PointList;                                                // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.OBSingleWeaponRecord
// 0x0010
struct FOBSingleWeaponRecord
{
	int                                                OBSingleWeaponRecord_WeaponID;                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalDamage;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillCount;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KnockDownCount;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.OBPlayerWeaponRecord
// 0x0018
struct FOBPlayerWeaponRecord
{
	uint64_t                                           OBPlayerWeaponRecord_UID;                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FOBSingleWeaponRecord>               WeaponReport;                                             // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.AIPlayerInfoInOB
// 0x0020
struct FAIPlayerInfoInOB
{
	struct FString                                     PlayerKey;                                                // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TeamID;                                                   // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class APawn>                        Character;                                                // 0x0014(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.FriendObserver
// 0x0018
struct FFriendObserver
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      gender;                                                   // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Gameplay.InfectionSpringUseData
// 0x001C
struct FInfectionSpringUseData
{
	int                                                SpringTag;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NormalPlayerUseTimes;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AvengerPlayerUseTimes;                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MotherZombieUseTimes;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NormalZombieUseTimes;                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InvisibleZombieUseTimes;                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ThrowerZombieUseTimes;                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.InfectionPlayerDeadTlogData
// 0x0020
struct FInfectionPlayerDeadTlogData
{
	int                                                DeadPawnSubType;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DeadPosiX;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DeadPosiY;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DeadPosiZ;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillPawnSubType;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              KillPosiX;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              KillPosiY;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              KillPosiZ;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.InfectionRoundTlogGuidData
// 0x000C
struct FInfectionRoundTlogGuidData
{
	int                                                GuidTriggerCount;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GuidHandCloseCount;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GuidArriveCloseCount;                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.VehicleCampKills
// 0x0008
struct FVehicleCampKills
{
	int                                                CampID;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Kills;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.MemBTResultData
// 0x0058
struct FMemBTResultData
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           Kill;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     State;                                                    // 0x0018(0x0010) (ZeroConstructor)
	float                                              travelDistance;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              surviveTime;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AssistNum;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HeadShotNum;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           rescueTimes;                                              // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HealAmount;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	uint64_t                                           UId;                                                      // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             ShouldShowAddFriendBtn;                                   // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct Gameplay.ResultRatingData
// 0x0018
struct FResultRatingData
{
	int                                                rank_rating;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kill_rating;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                win_rating;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                change_rank_rating;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                change_kill_rating;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                change_win_rating;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.BattleResultData
// 0x0088
struct FBattleResultData
{
	struct FString                                     Reason;                                                   // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           RemainingPlayerCount;                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TotalPlayerCount;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           RemainingTeamCount;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TotalTeamCount;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsSolo;                                                   // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	uint32_t                                           ShootWeaponShotNum;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ShootWeaponShotAndHitPlayerNum;                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HealTimes;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              marchDistance;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DriveDistance;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           destroyVehicleNum;                                        // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           add_exp;                                                  // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           add_gold;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	uint64_t                                           battle_id;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           max_game_num;                                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           person_rank;                                              // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           team_rank;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<struct FMemBTResultData>                    BP_ARRAY_TeammateList;                                    // 0x0060(0x0010) (ZeroConstructor)
	struct FResultRatingData                           BP_STRUCT_BTRating;                                       // 0x0070(0x0018)
};

// ScriptStruct Gameplay.AIstrategyPlayerInfo
// 0x0010
struct FAIstrategyPlayerInfo
{
	TArray<uint64_t>                                   PlayerInfo;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.AIstrategyPlayerTeam
// 0x0020
struct FAIstrategyPlayerTeam
{
	TArray<struct FAIstrategyPlayerInfo>               teamMember;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FString>                             countries;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.AIStrategyInfo
// 0x0038
struct FAIStrategyInfo
{
	int64_t                                            TS;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             circle;                                                   // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	uint64_t                                           BattleID;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MapId;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                rai;                                                      // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                fai;                                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                zone;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FAIstrategyPlayerTeam>               Teams;                                                    // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.AvatarBackpack
// 0x0020
struct FAvatarBackpack
{
	TArray<int>                                        WeaponAvatarList;                                         // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        VehicleAvatarList;                                        // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.PlayerAvatarData
// 0x0017 (0x0018 - 0x0001)
struct FPlayerAvatarData : public FResponResult
{
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FAvatarBackpack>                     AvatarBackpackData;                                       // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.PlayerInfoData
// 0x00C7 (0x00C8 - 0x0001)
struct FPlayerInfoData : public FResponResult
{
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     PlayerType;                                               // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     PlayerName;                                               // 0x0018(0x0010) (ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsGM;                                                    // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerGender;                                             // 0x002D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	int                                                TeamID;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	int64_t                                            CampID;                                                   // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerBornPointID;                                        // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FGameModePlayerItem>                 ItemList;                                                 // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FGameModePlayerExpressionItem>       ExpressionItemList;                                       // 0x0058(0x0010) (ZeroConstructor)
	struct FGameModePlayerEquipmentAvatar              EquipmentAvatar;                                          // 0x0068(0x000C)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	TArray<struct FGameModePlayerRolewearInfo>         AllWear;                                                  // 0x0078(0x0010) (ZeroConstructor)
	struct FGameModePlayerUpassInfo                    UpassInfo;                                                // 0x0088(0x0038)
	int                                                planeAvatarId;                                            // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RolewearIndex;                                            // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.CollectedEventKeysValues
// 0x0020
struct FCollectedEventKeysValues
{
	TArray<struct FString>                             Keys;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             Values;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.GenerateOneMonsterFlow
// 0x0010
struct FGenerateOneMonsterFlow
{
	int                                                MonsterID;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GenerateNum;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DeadNum;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KilledByPlayerNum;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GenerateMonsterPhaseFlow
// 0x0018
struct FGenerateMonsterPhaseFlow
{
	int                                                WeatherID;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FGenerateOneMonsterFlow>             GenerateOneMonsterFlowList;                               // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.GenerateMonsterFlow
// 0x0028
struct FGenerateMonsterFlow
{
	struct FString                                     BattleID;                                                 // 0x0000(0x0010) (ZeroConstructor)
	int                                                BattleMode;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FGenerateMonsterPhaseFlow>           GenerateMonsterPhaseList;                                 // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.PlayerID
// 0x0010
struct FPlayerID
{
	struct FName                                       PlayerType;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.CharacterStateChangedParams
// 0x0018
struct FCharacterStateChangedParams
{
	struct FPlayerID                                   PlayerID;                                                 // 0x0000(0x0010)
	struct FName                                       CharacterState;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.CharacterTeamIDChangedParams
// 0x0018
struct FCharacterTeamIDChangedParams
{
	struct FPlayerID                                   PlayerID;                                                 // 0x0000(0x0010)
	int                                                TeamID;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.PlayerStateChangedParams
// 0x0038
struct FPlayerStateChangedParams
{
	struct FPlayerID                                   PlayerID;                                                 // 0x0000(0x0010)
	struct FName                                       PlayerState;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     BanMsg;                                                   // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.ItemTableStruct
// 0x00B0
struct FItemTableStruct
{
	int                                                ItemID;                                                   // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ItemType;                                                 // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ItemSubType;                                              // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BPID;                                                     // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Durability;                                               // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AIFullVaule;                                              // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Equippable;                                               // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Consumable;                                               // 0x0019(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AutoEquipandDrop;                                         // 0x001A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	int                                                MaxCount;                                                 // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WeightforOrder;                                           // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                UnitWeight_f;                                             // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RedEmotionFightId;                                        // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     PickupSound;                                              // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DropSound;                                                // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     EquipSound;                                               // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     UnEquipSound;                                             // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PickUpBank;                                               // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DropBank;                                                 // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     EquipBank;                                                // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     UnEquipBank;                                              // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Gameplay.PickUpCountSettingTableStruct
// 0x0008
struct FPickUpCountSettingTableStruct
{
	int                                                ItemID;                                                   // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PickUpMaxCount;                                           // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.BackpackMappingTableStruct
// 0x0020
struct FBackpackMappingTableStruct
{
	int                                                SkinId;                                                   // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ItemIDLv1;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ItemIDLv2;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ItemIDLv3;                                                // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SkinItemIDLv1;                                            // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SkinItemIDLv2;                                            // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SkinItemIDLv3;                                            // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LobbyShowItemID;                                          // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.WeaponAttachmentsTableStruct
// 0x007C
struct FWeaponAttachmentsTableStruct
{
	int                                                KeyID;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Muzzle1ID;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Muzzle2ID;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Muzzle3ID;                                                // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Muzzle4ID;                                                // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Muzzle5ID;                                                // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Muzzle6ID;                                                // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Upper1ID;                                                 // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Upper2ID;                                                 // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Upper3ID;                                                 // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Upper4ID;                                                 // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Upper5ID;                                                 // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Upper6ID;                                                 // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Upper7ID;                                                 // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Stock1ID;                                                 // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Stock2ID;                                                 // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Magazine1ID;                                              // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Magazine2ID;                                              // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Magazine3ID;                                              // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Magazine4ID;                                              // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Magazine5ID;                                              // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Magazine6ID;                                              // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Lower1ID;                                                 // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Lower2ID;                                                 // 0x005C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Lower3ID;                                                 // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Lower4ID;                                                 // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Lower5ID;                                                 // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BulletID;                                                 // 0x006C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ProposeBulletNum;                                         // 0x0070(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AIMinAttackDist;                                          // 0x0074(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AIMaxAttackDist;                                          // 0x0078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModePatchTableData
// 0x0140
struct FGameModePatchTableData
{
	TMap<int, struct FItemTableStruct>                 Item;                                                     // 0x0000(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, struct FPickUpCountSettingTableStruct>   PickUpCountSetting;                                       // 0x0050(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, struct FBackpackMappingTableStruct>      BackpackMapping;                                          // 0x00A0(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, struct FWeaponAttachmentsTableStruct>    WeaponAttachments;                                        // 0x00F0(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Gameplay.DSNetSaturateResult
// 0x0010
struct FDSNetSaturateResult
{
	float                                              SaturateTime;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	uint64_t                                           SaturateFrames;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModeIslandParams
// 0x0014
struct FGameModeIslandParams
{
	int                                                IslandDefaultLifeTime;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IslandSpecialLifeTime;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IslandMinimumPlayerNum;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IslandMinimumAliveTime;                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IslandInactivePlayerKickoutTime;                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.DynamicBattleRankInfo
// 0x0010
struct FDynamicBattleRankInfo
{
	int                                                BattleRank;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	uint64_t                                           PlayerUID;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.InfectionRoundPlayerTlogData
// 0x00F8
struct FInfectionRoundPlayerTlogData
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	uint16_t                                           AreaID;                                                   // 0x0038(0x0002) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x003A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     country;                                                  // 0x0058(0x0010) (ZeroConstructor)
	uint64_t                                           CharacterID;                                              // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	uint64_t                                           RoleID;                                                   // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleTypeEnd;                                              // 0x0089(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	uint32_t                                           RoleTypeSwitchTime;                                       // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlayerJumpHeightMax;                                      // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlayerJumpSpeedMax;                                       // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerMoveDistance;                                       // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerMoveTime;                                           // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      PlayerMoveSpeedArray;                                     // 0x00A0(0x0010) (ZeroConstructor)
	uint32_t                                           PlayerKilled;                                             // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerHurtCount;                                          // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerDamageCount;                                        // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           KillingCount;                                             // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AssistCount;                                              // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           GunKillingTimes;                                          // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HeadshotCounts;                                           // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           GunHitTimes;                                              // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           GunShotTimes;                                             // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           MovingDistance;                                           // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HealAmount;                                               // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           CureCount;                                                // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           CareRoundCheckUp;                                         // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           KillZombiesCount;                                         // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           KillHumanCount;                                           // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damage4Avenger;                                           // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Headshot4Avenger;                                         // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.InfectionRoundTlogData
// 0x00E8
struct FInfectionRoundTlogData
{
	int                                                Round;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WinCamp;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlayTime;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnRevenger;                                           // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              RevengerExistTime;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RevengerDoSkillCount;                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ZombieReviveCount;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NormalZombieDoSkillCount;                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InvisibleZombieDoSkillCount;                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ThrowerZombieDoSkillCount;                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MotherZombieDoSkillCount;                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FInfectionPlayerDeadTlogData>        DeadList;                                                 // 0x0030(0x0010) (ZeroConstructor)
	int                                                NormalZombieChooseTimes;                                  // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InvisibleZombieChooseTimes;                               // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ZombieLevelList;                                          // 0x0048(0x0010) (ZeroConstructor)
	TArray<int>                                        EnhancerUserList;                                         // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FInfectionSpringUseData>             SpringUseList;                                            // 0x0068(0x0010) (ZeroConstructor)
	TMap<int, struct FInfectionRoundTlogGuidData>      GuidCount;                                                // 0x0078(0x0050) (ZeroConstructor)
	int                                                PlayerNumber;                                             // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ZombieAbsorbingTime;                                      // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RevengerAbsorbingTime;                                    // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	TArray<struct FInfectionRoundPlayerTlogData>       playerList;                                               // 0x00D8(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.InfectionZombieLevelData
// 0x0008
struct FInfectionZombieLevelData
{
	int                                                Level;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.InfectionPlayerBattleResultData
// 0x0088
struct FInfectionPlayerBattleResultData
{
	uint64_t                                           UId;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0010(0x0010) (ZeroConstructor)
	int                                                PlayerScore;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Kills;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Infections;                                               // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageAmount;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RoundNum;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GamePlayTime;                                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeMatrixMonsterTimes;                                     // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeRevengerPlayerTimes;                                    // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RevengerPlayerKillWinTimes;                               // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeMonsterWinTimes;                                        // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BePersonWinTimes;                                         // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UseSpringJumpTimes;                                       // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UseEnhancerTimes;                                         // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageToMonster;                                          // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageToRevengerPlayer;                                   // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChooseZombieFirstTimes;                                   // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChooseZombieSecondTimes;                                  // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalDamage;                                              // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalSprintDistance;                                      // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OpenAirDropBoxesNum;                                      // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	TArray<struct FString>                             KillFlow;                                                 // 0x0078(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.InfectionBattleResultData
// 0x0028
struct FInfectionBattleResultData
{
	TArray<struct FInfectionPlayerBattleResultData>    playerList;                                               // 0x0000(0x0010) (ZeroConstructor)
	int                                                PlayTime;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillZombieNum;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InfectedHumanNum;                                         // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BecomeHeroNum;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           EscapePlayerUid;                                          // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.VehiclePlayerBattleResultData
// 0x0098
struct FVehiclePlayerBattleResultData
{
	uint64_t                                           UId;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TeamID;                                                   // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CampID;                                                   // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Distance;                                                 // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                KillNum;                                                  // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AssistKillNum;                                            // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DriverKillNum;                                            // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShooterKillNum;                                           // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BeKillNum;                                                // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TeamKillNum;                                              // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                GetItemNum;                                               // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                OpenTreasureNum;                                          // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShootTreasureNum;                                         // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FUseItemFlow>                        UseItemFlow;                                              // 0x0058(0x0010) (ZeroConstructor)
	int                                                StrikeKillVehicleNum;                                     // 0x0068(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemKillVehicleNum;                                       // 0x006C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GunKillVehicleNum;                                        // 0x0070(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CauseDamage;                                              // 0x0074(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                GemStoneCount;                                            // 0x0078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasFinished;                                              // 0x007C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	float                                              FinishedTime;                                             // 0x0080(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsEscape;                                                 // 0x0084(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	int                                                VehicleID;                                                // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                VehicleShapeType;                                         // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ExitPlayerPlayTime;                                       // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.VehicleBattleVehicleStatiscs
// 0x0018
struct FVehicleBattleVehicleStatiscs
{
	int                                                VehicleID;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChooseTimes;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DeadTimes;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Kills;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VehicleWeaponDamage;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HitDamage;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.VehicleBattleWeaponStatiscs
// 0x0010
struct FVehicleBattleWeaponStatiscs
{
	int                                                WeaponID;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChooseTimes;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalDamage;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Kills;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.VehicleBattleResultData
// 0x0068
struct FVehicleBattleResultData
{
	TArray<struct FVehiclePlayerBattleResultData>      playerList;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FVehicleCampKills>                   VehicleCampKills;                                         // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                WinCampID;                                                // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GamePlayTime;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MatchPointNum;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WinCampTreasureScore;                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FailCampTreasureScore;                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FVehicleBattleVehicleStatiscs>       VehicleStaticsList;                                       // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FVehicleBattleWeaponStatiscs>        WeaponStatiscsList;                                       // 0x0048(0x0010) (ZeroConstructor)
	int                                                VehicleStuckResetTimes;                                   // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HealthPropItemTimes;                                      // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NormalPropItemTimes;                                      // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SuperPropItemTimes;                                       // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.VehicleReportList
// 0x0010
struct FVehicleReportList
{
	TArray<struct FVehicleReportEntry>                 VehicleReports;                                           // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.AIProxyNetInfo
// 0x0008
struct FAIProxyNetInfo
{
	uint32_t                                           MaxBufferUsedSize;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxSendSpeed;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.WeaponAntiData
// 0x0018
struct FWeaponAntiData
{
	uint16_t                                           MuzzleFloorHeight;                                        // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            MuzzleActorHeadHeight;                                    // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           ImplactPointAndActorDis;                                  // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           ImplactPointAndBulletDis;                                 // 0x0006(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           ImplactPoinPosChange;                                     // 0x0008(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           BulletAndGunAngle;                                        // 0x000A(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           NetDelay;                                                 // 0x000C(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	uint32_t                                           ShooterPosDis;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           VictmPosDis;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.AntiCheatDetailData
// 0x0028
struct FAntiCheatDetailData
{
	uint16_t                                           AreaID;                                                   // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FWeaponAntiData>                     WeaponAntiDataList;                                       // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.AntiMoveCheatFlow
// 0x0028
struct FAntiMoveCheatFlow
{
	uint16_t                                           AreaID;                                                   // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0008(0x0010) (ZeroConstructor)
	int                                                CheatType1;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CheatType2;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CheatType3;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Ping;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.AntiCheatMovementRawData
// 0x0018
struct FAntiCheatMovementRawData
{
	int16_t                                            MinVelocity;                                              // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            MaxVelocity;                                              // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            AvgVelocity;                                              // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	uint64_t                                           PlayerStatus;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int16_t                                            PlayerPing;                                               // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SpecialFlags;                                             // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
};

// ScriptStruct Gameplay.ZNQBattleResultData
// 0x004C
struct FZNQBattleResultData
{
	int                                                DuckGameCount;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BeeGameCount;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BlindBoxCount;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DuckShootingRangeCount;                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ActivedDuckGameNum;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ActivedBeeGameNum;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ActivedBlindBoxNum;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ActivedDuckShootingRangeNum;                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxCoinCarried;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ParachutePlaygroundPlayer;                                // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DuckGameHighCount;                                        // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DuckGameMiddleCount;                                      // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DuckGameLowCount;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BeeGameHighCount;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BeeGameMiddleCount;                                       // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BeeGameLowCount;                                          // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DuckShootingRangeHighCount;                               // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DuckShootingRangeMiddleCount;                             // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DuckShootingRangeLowCount;                                // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.HardPointActorTeamScoreResultData
// 0x0008
struct FHardPointActorTeamScoreResultData
{
	int                                                TeamID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.TLog_HardPointActorFlow
// 0x0028
struct FTLog_HardPointActorFlow
{
	int                                                HardPointID;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ActivatedTime;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        OccupiedTeamSequenceRecords;                              // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FHardPointActorTeamScoreResultData>  TeamScoreDataList;                                        // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.HardPointPlayerBattleResultData
// 0x0030
struct FHardPointPlayerBattleResultData
{
	uint64_t                                           UId;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                OccupyScore;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OccupyTime;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OccupyNum;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageToTheInHardPointEnemy;                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PickUpWeaponBoxNum;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FTLog_PickUpItemFlow>                PickUpItemFlowData;                                       // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.HardPointTeamBattleResultData
// 0x0018
struct FHardPointTeamBattleResultData
{
	int                                                TeamID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FHardPointPlayerBattleResultData>    TeamPlayerResultDatas;                                    // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.HardPointBattleResultData
// 0x0028
struct FHardPointBattleResultData
{
	float                                              HardPointEnterOccupiedStateMaxTime;                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalPoint;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTLog_HardPointActorFlow>            HardPointActorFlowList;                                   // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FHardPointTeamBattleResultData>      TeamResultDatas;                                          // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.DeathMatchPlayerBattleResultData
// 0x0258
struct FDeathMatchPlayerBattleResultData
{
	uint64_t                                           UId;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0010(0x0010) (ZeroConstructor)
	int                                                TeamID;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerScore;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Kills;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                rescueTimes;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<uint64_t>                                   RescueTeammatesList;                                      // 0x0038(0x0010) (ZeroConstructor)
	int                                                Assists;                                                  // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<uint64_t>                                   AssistTeammatesList;                                      // 0x0050(0x0010) (ZeroConstructor)
	int                                                OccupyScore;                                              // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Deaths;                                                   // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxContinuouKills;                                        // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SuperGodNum;                                              // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RevengeNum;                                               // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DieInBaseRegionNum;                                       // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageAmount;                                             // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HeadShotNum;                                              // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotNum;                                       // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotAndHitPlayerNum;                           // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GunKillingTimes;                                          // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MeleeKillTimes;                                           // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RangedDamagedAmount;                                      // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MeleeDamageAmount;                                        // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MovingDistance;                                           // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HealAmount;                                               // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CureCount;                                                // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FEquipmentData                              EquipmentData;                                            // 0x00A8(0x0070)
	TArray<uint64_t>                                   TeamMemberList;                                           // 0x0118(0x0010) (ZeroConstructor)
	TMap<int, int>                                     MedalList;                                                // 0x0128(0x0050) (ZeroConstructor)
	float                                              surviveTime;                                              // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x017C(0x0004) MISSED OFFSET
	TArray<struct FTLog_PickUpItemFlow>                TLog_PickUpItemFlowData;                                  // 0x0180(0x0010) (ZeroConstructor)
	TArray<struct FUseItemFlow>                        UseItemFlow;                                              // 0x0190(0x0010) (ZeroConstructor)
	float                                              TotalDamage;                                              // 0x01A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalSprintDistance;                                      // 0x01A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OpenAirDropBoxesNum;                                      // 0x01A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
	struct FOnePlayerWeapon                            WeaponRecord;                                             // 0x01B0(0x0020)
	float                                              Pronetime;                                                // 0x01D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x01D4(0x0004) MISSED OFFSET
	TArray<struct FString>                             KillFlow;                                                 // 0x01D8(0x0010) (ZeroConstructor)
	bool                                               HasEscape;                                                // 0x01E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x01E9(0x0007) MISSED OFFSET
	struct FString                                     VsReadinessSwitchFlow;                                    // 0x01F0(0x0010) (ZeroConstructor)
	int                                                CostGold;                                                 // 0x0200(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	TMap<int, int>                                     GeneralCounterMap;                                        // 0x0208(0x0050) (ZeroConstructor)
};

// ScriptStruct Gameplay.DeathMatchTeamBattleResultData
// 0x0030
struct FDeathMatchTeamBattleResultData
{
	int                                                TeamID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Result;                                                   // 0x0008(0x0010) (ZeroConstructor)
	int                                                TeamRank;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamScore;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FDeathMatchPlayerBattleResultData>   TeamPlayerResultDatas;                                    // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.BRTDMWinLevelInfoTeamScoreResultData
// 0x0008
struct FBRTDMWinLevelInfoTeamScoreResultData
{
	int                                                LevelIndex;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WinBornArea;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.DeathMatchBattleResultData
// 0x0058
struct FDeathMatchBattleResultData
{
	EDeathMatchSubModeType                             SubModeType;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FDeathMatchTeamBattleResultData>     TeamResultDatas;                                          // 0x0008(0x0010) (ZeroConstructor)
	int                                                PlayerNumber;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RealPlayerNumber;                                         // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayTime;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	uint64_t                                           FirstKillPlayer;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           LastKillPlayer;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     VsTeamGameFlow;                                           // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FBRTDMWinLevelInfoTeamScoreResultData> WinLevelInfo;                                             // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.AirDropBoxDataItem
// 0x0008
struct FAirDropBoxDataItem
{
	int                                                ItemSpesificID;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.AirDropBoxData
// 0x0038
struct FAirDropBoxData
{
	int                                                AirDropBoxId;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FAirDropBoxDataItem>                 DataList;                                                 // 0x0008(0x0010) (ZeroConstructor)
	int                                                Reason;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	uint64_t                                           CallerPlayerID;                                           // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0028(0x000C) (IsPlainOldData)
	float                                              DropTime;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.AirDropBoxDataFlow
// 0x0020
struct FAirDropBoxDataFlow
{
	TArray<struct FAirDropBoxData>                     AirDropBoxDataList;                                       // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     BattleID;                                                 // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.CustomCircleParams
// 0x001C
struct FCustomCircleParams
{
	int                                                Stage;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DelayTime;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SafeZoneAppeartime;                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LastTime;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CircleDamage;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BlueCircleRadius;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WhiteCircleRadius;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.RoomCustomParams
// 0x0040
struct FRoomCustomParams
{
	int                                                CircleSpeedMultiplicator;                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoOpendoor;                                            // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoPickup;                                              // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAudioVisual;                                             // 0x0006(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowSkull;                                               // 0x0007(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoAimAt;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bGunRemoveBullet;                                         // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	int                                                BlueCircleDamageMultiplicator;                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseFirstWhiteCircleDelayTime;                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseFirstSafeZoneAppearTime;                              // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseFirstWhiteCircleRadiusMultiplicator;                  // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0013(0x0001) MISSED OFFSET
	int                                                FirstWhiteCircleDelayTime;                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FirstSafeZoneAppearTime;                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FirstWhiteCircleRadiusMultiplicator;                      // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               EnableRedZone;                                            // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FCustomCircleParams>                 CustomCircleParamsList;                                   // 0x0028(0x0010) (ZeroConstructor)
	bool                                               bFuzzyInformation;                                        // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Gameplay.BattleCustomConfig
// 0x0018
struct FBattleCustomConfig
{
	struct FString                                     Config;                                                   // 0x0000(0x0010) (ZeroConstructor)
	float                                              Value;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.GameModeGameOverData
// 0x0001
struct FGameModeGameOverData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Gameplay.SingleWeaponConfig
// 0x0018
struct FSingleWeaponConfig
{
	int                                                WeaponID;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        AttachMentIDList;                                         // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Gameplay.PlayerWeaponsConfig
// 0x0020
struct FPlayerWeaponsConfig
{
	struct FString                                     ConfigName;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FSingleWeaponConfig>                 WeaponDataList;                                           // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Gameplay.PlayerTotalWeaponsConfig
// 0x0018
struct FPlayerTotalWeaponsConfig
{
	int                                                DefaultSelectedIndex;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FPlayerWeaponsConfig>                WeaponsConfigList;                                        // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.BornItem
// 0x000C
struct FBornItem
{
	int                                                BornItemID;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BornItemCount;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BornItemFlags;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModePlayerItemAttachData
// 0x0010
struct FGameModePlayerItemAttachData
{
	int                                                SlotIndex;                                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	uint64_t                                           InstanceID;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModePlayerItemPackInfo
// 0x0030
struct FGameModePlayerItemPackInfo
{
	int                                                SlotIndex;                                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	uint64_t                                           InstanceID;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ItemDurability;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FGameModePlayerItemAttachData>       AttachList;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.GameModePlayerWeaponAttachData
// 0x0010
struct FGameModePlayerWeaponAttachData
{
	int                                                SlotIndex;                                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	uint64_t                                           InstanceID;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModePlayerWeaponPackInfo
// 0x0030
struct FGameModePlayerWeaponPackInfo
{
	int                                                SlotIndex;                                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	uint64_t                                           InstanceID;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                WeaponDurability;                                         // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FGameModePlayerWeaponAttachData>     AttachList;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.GameModePlayerArmorAttachData
// 0x0010
struct FGameModePlayerArmorAttachData
{
	int                                                SlotIndex;                                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	uint64_t                                           InstanceID;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModePlayerArmorPackInfo
// 0x0028
struct FGameModePlayerArmorPackInfo
{
	int                                                ItemID;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	uint64_t                                           InstanceID;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ItemDurability;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FGameModePlayerArmorAttachData>      AttachList;                                               // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.SocialIslandGameResult
// 0x0070
struct FSocialIslandGameResult
{
	uint64_t                                           UId;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FDailyTaskStoreInfo>                 TaskInfo;                                                 // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FDailyTaskAwardInfo>                 RewardInfo;                                               // 0x0020(0x0010) (ZeroConstructor)
	int                                                HighScoreCount;                                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TrainCount;                                               // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalTargetScore;                                         // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<uint64_t>                                   Interaction;                                              // 0x0040(0x0010) (ZeroConstructor)
	int                                                StayTime;                                                 // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<int>                                        DuelDurations;                                            // 0x0058(0x0010) (ZeroConstructor)
	int                                                DuelApplyCount;                                           // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DuelStartCount;                                           // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerOBBattleInfo
// 0x0030
struct FPlayerOBBattleInfo
{
	uint64_t                                           UId;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                BattleMode;                                               // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ValidBattleInfo;                                          // 0x000C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                GameCount;                                                // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WinCount;                                                 // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TopTenCount;                                              // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                KillNum;                                                  // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     KDNum;                                                    // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.ParachuteInfo
// 0x0028
struct FParachuteInfo
{
	int                                                LeaderCount;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	uint64_t                                           LastGameLeaderUID;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<uint64_t>                                   LastGameTeammatesUID;                                     // 0x0010(0x0010) (ZeroConstructor)
	uint64_t                                           LastGameBattleID;                                         // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PickUpSpecialItemFlow
// 0x0008
struct FPickUpSpecialItemFlow
{
	int                                                ItemSpesificID;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                pickCount;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.HeavyWeaponBoxItemFlow
// 0x0020
struct FHeavyWeaponBoxItemFlow
{
	struct FString                                     BoxName;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        ItemIdList;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.HeavyWeaponBoxOpenPlayerFlow
// 0x0028
struct FHeavyWeaponBoxOpenPlayerFlow
{
	struct FString                                     BoxName;                                                  // 0x0000(0x0010) (ZeroConstructor)
	int                                                WaitTimeFromActiveToOpen;                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	int64_t                                            UId;                                                      // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TeamID;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.HeavyWeaponBoxActivationFlow
// 0x0018
struct FHeavyWeaponBoxActivationFlow
{
	struct FString                                     BoxName;                                                  // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            ActiveTime;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.HeavyWeaponBoxSpawnFlow
// 0x0028
struct FHeavyWeaponBoxSpawnFlow
{
	struct FString                                     BoxName;                                                  // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            SpawnTime;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     SpawnLocation;                                            // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.ItemGenerateTableRow
// 0x0038 (0x0040 - 0x0008)
struct FItemGenerateTableRow : public FTableRowBase
{
	int                                                ID;                                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     Value;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Catetory;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemGenerateSpawnData>              AllGenerateSpawnDatas;                                    // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.ItemSpotSceneComponentArray
// 0x0018
struct FItemSpotSceneComponentArray
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UItemSpotSceneComponent*>             AllSpots;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct Gameplay.RevivalRecordBaseInfo
// 0x0040
struct FRevivalRecordBaseInfo
{
	struct FString                                     OpenID;                                                   // 0x0000(0x0010) (ZeroConstructor)
	uint16_t                                           AreaID;                                                   // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0028(0x0010) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.ReportIDCardDestroyFlow
// 0x0018 (0x0058 - 0x0040)
struct FReportIDCardDestroyFlow : public FRevivalRecordBaseInfo
{
	unsigned char                                      DestroyReason;                                            // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FString                                     DestroyTime;                                              // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.ReportIDCardPickUpFlow
// 0x0010 (0x0050 - 0x0040)
struct FReportIDCardPickUpFlow : public FRevivalRecordBaseInfo
{
	uint64_t                                           PickerUID;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                RemainingCountDown;                                       // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.ReportIDCardProduceFlow
// 0x0010 (0x0050 - 0x0040)
struct FReportIDCardProduceFlow : public FRevivalRecordBaseInfo
{
	struct FString                                     DeathTime;                                                // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.PlayerRevivalInfo
// 0x0018
struct FPlayerRevivalInfo
{
	int64_t                                            RevivedPlayerUID;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            PickerUID;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                TimeAfterIDCardPicked;                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.ReportRevivalFlow
// 0x0038 (0x0078 - 0x0040)
struct FReportRevivalFlow : public FRevivalRecordBaseInfo
{
	unsigned char                                      RevivalFailedReason;                                      // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FString                                     TowerLocation;                                            // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     RevivalTime;                                              // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FPlayerRevivalInfo>                  PlayerRevivalInfos;                                       // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.TssAntiFlow
// 0x0018
struct FTssAntiFlow
{
	int                                                GunID;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillAICnt;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillRealPlayerCnt;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ShotTime;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SendIndex;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ErrorCode;                                                // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.PlayerNetworkData
// 0x0010
struct FPlayerNetworkData
{
	uint64_t                                           UId;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                TotalOutOfOrderPackets;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxOutOfOrderPacketsPerSec;                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.ClientNetworkData
// 0x0030
struct FClientNetworkData
{
	uint64_t                                           UId;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                AvgPing;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxPing;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MinPing;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LostPackRate;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AvgNoOutlier;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StdNoOutlier;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumNoOutlier;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InLoss;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OutLoss;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.NetworkData
// 0x002C
struct FNetworkData
{
	int                                                AlivePlayerNum;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ConnectionNum;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OnlineNum;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HighPingNum;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NoConPktPerSec;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NoConBadPktPerSec;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DisConPktPerSec;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WorstFrameMSPerSec;                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BlockNonConnBurst;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BlockNetConnBurst;                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropPktCntPerSec;                                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.EquipmentFlow
// 0x0078
struct FEquipmentFlow
{
	uint64_t                                           UId;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                EventType;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GameTime;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MainWeapon1ID;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MainWeapon2ID;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ViceWeaponID;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HelmetID;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                VestID;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BackPackID;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<int, int>                                     Equipments;                                               // 0x0028(0x0050) (ZeroConstructor)
};

// ScriptStruct Gameplay.SecMrpcsFlow
// 0x0088
struct FSecMrpcsFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	int8_t                                             PlatID;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0039(0x0001) MISSED OFFSET
	uint16_t                                           AreaID;                                                   // 0x003A(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     UserName;                                                 // 0x0058(0x0010) (ZeroConstructor)
	uint64_t                                           SvrRoleID;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SecMrpcsFlowID;                                           // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FString                                     MrpcsFlowStr;                                             // 0x0078(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.ClientSecMrpcsFlow
// 0x0018
struct FClientSecMrpcsFlow
{
	unsigned char                                      SecMrpcsFlowID;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<unsigned char>                              MrpcsFlowData;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.GameMisKillFlow
// 0x0080
struct FGameMisKillFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	uint64_t                                           MyRoleID;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MyOpenID;                                                 // 0x0030(0x0010) (ZeroConstructor)
	uint16_t                                           AreaID;                                                   // 0x0040(0x0002) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0042(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0043(0x0005) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0048(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     DeadDamangeType;                                          // 0x0060(0x0010) (ZeroConstructor)
	uint64_t                                           TeammateRoleID;                                           // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                bConfirmMisKill;                                          // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.GameEndReport
// 0x00B0
struct FGameEndReport
{
	int                                                PvePoliceOfficeTriggerCount;                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PveZombieGrenadeCount;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PveGenerateZombieByNoTeamMate;                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NoneAIGameTime;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<int, int>                                     AISpawnCountMap;                                          // 0x0010(0x0050) (ZeroConstructor)
	TMap<int, int>                                     AIEnterFightingCountMap;                                  // 0x0060(0x0050) (ZeroConstructor)
};

// ScriptStruct Gameplay.VerifyInfoFlow
// 0x0040
struct FVerifyInfoFlow
{
	struct FString                                     GameAppID;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0010(0x0010) (ZeroConstructor)
	uint64_t                                           UId;                                                      // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           BattleID;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                LocationX;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationY;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationZ;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.GvoiceTeamQuit
// 0x0030
struct FGvoiceTeamQuit
{
	struct FString                                     GVoiceTeamID;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     GVoiceRoomID;                                             // 0x0010(0x0010) (ZeroConstructor)
	int                                                GVoiceTeamMemberID;                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GVoiceRoomMemberID;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           UId;                                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GvoiceTeamCreate
// 0x0030
struct FGvoiceTeamCreate
{
	struct FString                                     GVoiceTeamID;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     GVoiceRoomID;                                             // 0x0010(0x0010) (ZeroConstructor)
	int                                                GVoiceTeamMemberID;                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GVoiceRoomMemberID;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           UId;                                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.WatchGamePlayerInfoClickFlow
// 0x0010
struct FWatchGamePlayerInfoClickFlow
{
	uint64_t                                           WatchPlayer_UID;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                WatchTimes;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameSetting_BasicSetting
// 0x002C
struct FGameSetting_BasicSetting
{
	int                                                CrossHairColor;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               AimAssist;                                                // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               WallFeedBack;                                             // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	int                                                SingleShotWeaponShootMode;                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShotGunShootMode;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               LeftRightShoot;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                LRShootMode;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               LRShootSniperSwitch;                                      // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                LeftHandFire;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Gyroscope;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               AutoOpenDoor;                                             // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IntelligentDrugs;                                         // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ActorAnimationSwitch;                                     // 0x0026(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               FPViewSwitch;                                             // 0x0027(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ShoulderEnable;                                           // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ShoulderMode;                                             // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
};

// ScriptStruct Gameplay.GameSetting_ArtQuality
// 0x0008
struct FGameSetting_ArtQuality
{
	int                                                ArtStyle;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               AntiAliasingSwitch;                                       // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.GameSetting_Operate
// 0x0008
struct FGameSetting_Operate
{
	int                                                FireMode;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Touch_3D_Switcher;                                        // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.GameSetting_Vehicle
// 0x0008
struct FGameSetting_Vehicle
{
	int                                                VehicleControlMode;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DrivingViewMode;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameSetting_Sensibility_FreeCam
// 0x000C
struct FGameSetting_Sensibility_FreeCam
{
	float                                              VehicleEye;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ParachuteEye;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CamFpFreeEye;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameSetting_Sensibility_Cam
// 0x0028
struct FGameSetting_Sensibility_Cam
{
	float                                              CamLensSenNoneSniper;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CamLensSenNoneSniperFP;                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CamLensSenRedDotSniper;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CamLensSen2XSniper;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CamLensSen3XSniper;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CamLensSen4XSniper;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CamLensSen6XSniper;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CamLensSen8XSniper;                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CamLensSenShoulderSniper;                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CamLensSenShoulderSniperFP;                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameSetting_Sensibility_Fire
// 0x0028
struct FGameSetting_Sensibility_Fire
{
	float                                              FireCamLensSenNoneSniper;                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSenNoneSniperFP;                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSenRedDotSniper;                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSen2XSniper;                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSen3XSniper;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSen4XSniper;                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSen6XSniper;                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSen8XSniper;                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSenShoulderSniper;                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSenShoulderSniperFP;                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameSetting_Sensibility_Gyroscope
// 0x0028
struct FGameSetting_Sensibility_Gyroscope
{
	float                                              GyroscopeSenNoneSniper;                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSenNoneSniperFP;                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSenRedDotSniper;                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSen2XSniper;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSen3XSniper;                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSen4XSniper;                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSen6XSniper;                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSen8XSniper;                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeShoulderSniper;                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeShoulderSniperFP;                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameSetting_Sensibility
// 0x0088
struct FGameSetting_Sensibility
{
	int                                                CameraLensSensibility;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGameSetting_Sensibility_FreeCam            Sens_FreeCamera;                                          // 0x0004(0x000C)
	struct FGameSetting_Sensibility_Cam                Sens_Camera;                                              // 0x0010(0x0028)
	struct FGameSetting_Sensibility_Fire               Sens_Fire;                                                // 0x0038(0x0028)
	struct FGameSetting_Sensibility_Gyroscope          Sens_Gyroscope;                                           // 0x0060(0x0028)
};

// ScriptStruct Gameplay.GameSetting_PickUp_Drug
// 0x0018
struct FGameSetting_PickUp_Drug
{
	int                                                MedicalTreatment;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Bandage;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PainKiller;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Adrenaline;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyDrink;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FirstAidKit;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.Gamesetting_PickUp_Grenade
// 0x0010
struct FGamesetting_PickUp_Grenade
{
	int                                                IncendiaryBomb;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShockBomb;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SmokeBomb;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GrenadeFragmented;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameSetting_PickUp_WeaponBullet
// 0x0008
struct FGameSetting_PickUp_WeaponBullet
{
	int                                                WeaponID;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletCount;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameSetting_PickUp
// 0x0040
struct FGameSetting_PickUp
{
	bool                                               AutoPickUpSwitcher;                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               AutoPickupPistol;                                         // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FGameSetting_PickUp_Drug                    Drug;                                                     // 0x0004(0x0018)
	struct FGamesetting_PickUp_Grenade                 Grenade;                                                  // 0x001C(0x0010)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FGameSetting_PickUp_WeaponBullet>    WeaponBulletList;                                         // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.GameSetting
// 0x0118
struct FGameSetting
{
	uint64_t                                           RoleID;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGameSetting_BasicSetting                   BasicSetting;                                             // 0x0008(0x002C)
	struct FGameSetting_ArtQuality                     ArtQuality;                                               // 0x0034(0x0008)
	struct FGameSetting_Operate                        Operate;                                                  // 0x003C(0x0008)
	struct FGameSetting_Vehicle                        Vehicle;                                                  // 0x0044(0x0008)
	struct FGameSetting_Sensibility                    Sensibility;                                              // 0x004C(0x0088)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FGameSetting_PickUp                         PickUp;                                                   // 0x00D8(0x0040)
};

// ScriptStruct Gameplay.RecoilInfo
// 0x0036
struct FRecoilInfo
{
	int16_t                                            VerticalRecoilMin;                                        // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            VerticalRecoilMax;                                        // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            VerticalRecoilVariation;                                  // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            VerticalRecoveryModifier;                                 // 0x0006(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            VerticalRecoveryClamp;                                    // 0x0008(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            VerticalRecoveryMax;                                      // 0x000A(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            LeftMax;                                                  // 0x000C(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            RightMax;                                                 // 0x000E(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            HorizontalTendency;                                       // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            BulletPerSwitch;                                          // 0x0012(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            TimePerSwitch;                                            // 0x0014(0x0002) (ZeroConstructor, IsPlainOldData)
	bool                                               SwitchOnTime;                                             // 0x0016(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	int16_t                                            RecoilSpeedVertical;                                      // 0x0018(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            RecoilSpeedHorizontal;                                    // 0x001A(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            RecovertySpeedVertical;                                   // 0x001C(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            RecoilValueClimb;                                         // 0x001E(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            RecoilValueFail;                                          // 0x0020(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            RecoilModifierStand;                                      // 0x0022(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            RecoilModifierCrouch;                                     // 0x0024(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            RecoilModifierProne;                                      // 0x0026(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            RecoilHorizontalMinScalar;                                // 0x0028(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            BurstEmptyDelay;                                          // 0x002A(0x0002) (ZeroConstructor, IsPlainOldData)
	bool                                               ShootSightReturn;                                         // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x002D(0x0001) MISSED OFFSET
	int16_t                                            ShootSightReturnSpeed;                                    // 0x002E(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            AccessoriesVRecoilFactor;                                 // 0x0030(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            AccessoriesHRecoilFactor;                                 // 0x0032(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            AccessoriesRecoveryFactor;                                // 0x0034(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.SecPlayerKillFlow
// 0x0108
struct FSecPlayerKillFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	int8_t                                             PlatID;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0039(0x0001) MISSED OFFSET
	uint16_t                                           AreaID;                                                   // 0x003A(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     UserName;                                                 // 0x0058(0x0010) (ZeroConstructor)
	uint64_t                                           SvrRoleID;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             SecPlayerKillFlowID;                                      // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	int                                                GunID;                                                    // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           KilledPlayerRoleID;                                       // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FRecoilInfo                                 RecoilInfo;                                               // 0x0088(0x0036)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00BE(0x0002) MISSED OFFSET
	int                                                LocationX;                                                // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationY;                                                // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationZ;                                                // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KilledLocationX;                                          // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KilledLocationY;                                          // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KilledLocationZ;                                          // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BornPointID;                                              // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KilledBornPointID;                                        // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FString                                     GameModeID;                                               // 0x00E8(0x0010) (ZeroConstructor)
	uint64_t                                           PawnState;                                                // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           KilledPawnState;                                          // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.ClientSecPlayerKillFlow
// 0x0090
struct FClientSecPlayerKillFlow
{
	int64_t                                            ClientStartTime;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             SecPlayerKillFlowID;                                      // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                GunID;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           KilledPlayerKey;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRecoilInfo                                 RecoilInfo;                                               // 0x0014(0x0036)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	int                                                LocationX;                                                // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationY;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationZ;                                                // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KilledLocationX;                                          // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KilledLocationY;                                          // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KilledLocationZ;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KilledTeamID;                                             // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FString                                     GameModeID;                                               // 0x0070(0x0010) (ZeroConstructor)
	uint64_t                                           PawnState;                                                // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           KilledPawnState;                                          // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PosAndTime
// 0x0018
struct FPosAndTime
{
	int                                                LocationX;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationY;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationZ;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Time;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           PlayerState;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerRouteFlow
// 0x0078
struct FPlayerRouteFlow
{
	struct FString                                     GameAppID;                                                // 0x0000(0x0010) (ZeroConstructor)
	int8_t                                             PlatID;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     OpenID;                                                   // 0x0018(0x0010) (ZeroConstructor)
	uint64_t                                           UId;                                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           BattleID;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             SeasonID;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FPosAndTime>                         Route;                                                    // 0x0050(0x0010) (ZeroConstructor)
	struct FPosAndTime                                 End;                                                      // 0x0060(0x0018)
};

// ScriptStruct Gameplay.PlayerBehaviorFlow
// 0x0098
struct FPlayerBehaviorFlow
{
	uint64_t                                           FrameCounter;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           BattleID;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsTargetPlayer;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0018(0x0010) (ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           RelevantPlayerKey;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationX;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationY;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationZ;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RotationP;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RotationY;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RotationR;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Stats;                                                    // 0x0048(0x0010) (ZeroConstructor)
	bool                                               IsDying;                                                  // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              Breath;                                                   // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SpeedX;                                                   // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SpeedY;                                                   // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SpeedZ;                                                   // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Energy;                                                   // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentWeaponID;                                          // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Ammo;                                                     // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SightId;                                                  // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsBeAttacking;                                            // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                BeAttackDirX;                                             // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeAttackDirY;                                             // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeAttackDirZ;                                             // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MedicineId;                                               // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsHaveSound;                                              // 0x0094(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.HurtFlow
// 0x0120
struct FHurtFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	int8_t                                             PlatID;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0039(0x0001) MISSED OFFSET
	uint16_t                                           AreaID;                                                   // 0x003A(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<int>                                        MrpcsFlow;                                                // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0078(0x0010) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FString                                     EnemyOpenID;                                              // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     EnemyUserName;                                            // 0x00A8(0x0010) (ZeroConstructor)
	uint64_t                                           EnemyRoleID;                                              // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                EnemyRoleType;                                            // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HurtTime;                                                 // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HurtType;                                                 // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitType;                                                  // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageStart;                                              // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageReduce;                                             // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorDef;                                                 // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HPstart;                                                  // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HPEnd;                                                    // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPStart1;                                            // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPEnd1;                                              // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPStart2;                                            // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPEnd2;                                              // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CarHPStart;                                               // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CarHPEnd;                                                 // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FallHeight;                                               // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HypoxiaTime;                                              // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HypoxiaHurtTotal;                                         // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerKilled;                                             // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorKill;                                                // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CarKill;                                                  // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IfIsAI;                                                   // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CircleIndex;                                              // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HurtFlowID;                                               // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.SecAttackFlow
// 0x00C0
struct FSecAttackFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	int8_t                                             PlatID;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0039(0x0001) MISSED OFFSET
	uint16_t                                           AreaID;                                                   // 0x003A(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           RoleID;                                                   // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TargetUserName;                                           // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     TargetOpenID;                                             // 0x0078(0x0010) (ZeroConstructor)
	uint64_t                                           TargetRoleID;                                             // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     HitPart;                                                  // 0x0090(0x0010) (ZeroConstructor)
	int                                                GunID;                                                    // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerKill;                                               // 0x00A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	uint64_t                                           AttackFlowID;                                             // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                KillAICnt;                                                // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillRealPlayerCnt;                                        // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int16_t                                            BulletDown;                                               // 0x00B8(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET
};

// ScriptStruct Gameplay.AttackFlow
// 0x01C8
struct FAttackFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	uint16_t                                           AreaID;                                                   // 0x0038(0x0002) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x003A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<int>                                        MrpcsFlow;                                                // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0078(0x0010) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FString                                     TargetOpenID;                                             // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     TargetUserName;                                           // 0x00A8(0x0010) (ZeroConstructor)
	uint64_t                                           TargetRoleID;                                             // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             TargetRoleType;                                           // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FString                                     GunName;                                                  // 0x00C8(0x0010) (ZeroConstructor)
	struct FString                                     GunPartsType;                                             // 0x00D8(0x0010) (ZeroConstructor)
	int8_t                                             SightType;                                                // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	int                                                BulletSpeed;                                              // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             MagazineMax;                                              // 0x00F0(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             MagazineLeft;                                             // 0x00F1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x00F2(0x0002) MISSED OFFSET
	int                                                ShotFrequency;                                            // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletDamage;                                             // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int16_t                                            BulletDown;                                               // 0x00FC(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      BulletDamageReduce;                                       // 0x00FE(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x00FF(0x0001) MISSED OFFSET
	int                                                Recoil;                                                   // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ReloadTime;                                               // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerState;                                              // 0x0108(0x0010) (ZeroConstructor)
	unsigned char                                      ShotPose;                                                 // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      FireType;                                                 // 0x0119(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHoldBreath : 1;                                          // 0x011A(0x0001)
	unsigned char                                      Sideways;                                                 // 0x011B(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                ShootingDeviationX;                                       // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShootingDeviationY;                                       // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ZeroDistance;                                             // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ShotTime;                                                 // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitTime;                                                  // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionX;                                          // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionY;                                          // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionZ;                                          // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GunPositionX;                                             // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GunPositionY;                                             // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GunPositionZ;                                             // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletsBornPositionX;                                     // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletsBornPositionY;                                     // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletsBornPositionZ;                                     // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           LastHitTime;                                              // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           BulletFlyDistance;                                        // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           BulletFlyTime;                                            // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitPositionX;                                             // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitPositionY;                                             // 0x0164(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitPositionZ;                                             // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HitPart;                                                  // 0x016C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHitCar : 1;                                              // 0x016D(0x0001)
	unsigned char                                      bTireOut : 1;                                             // 0x016D(0x0001)
	unsigned char                                      BulletCost;                                               // 0x016E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x016F(0x0001) MISSED OFFSET
	int                                                HPstart;                                                  // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HPEnd;                                                    // 0x0174(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPStart;                                             // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPEnd;                                               // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CarHPStart;                                               // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CarHPEnd;                                                 // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerKill;                                               // 0x0188(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bArmorKill : 1;                                           // 0x0189(0x0001)
	unsigned char                                      bCarKill : 1;                                             // 0x0189(0x0001)
	unsigned char                                      UnknownData08[0x2];                                       // 0x018A(0x0002) MISSED OFFSET
	int                                                RecoilMoveX;                                              // 0x018C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoilMoveY;                                              // 0x0190(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WeaponAimFOV;                                             // 0x0194(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletDamageDebuff;                                       // 0x0198(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletDamageBuff;                                         // 0x019C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AtackFlowID;                                              // 0x01A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimSpeed;                                             // 0x01A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimSpeedRateMax;                                      // 0x01A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimRangeMax;                                          // 0x01AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimRangeRateMax;                                      // 0x01B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GunID;                                                    // 0x01B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IfIsOnCar;                                                // 0x01B8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               InMoveablePlatform;                                       // 0x01BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x01BD(0x0003) MISSED OFFSET
	int                                                KillAICnt;                                                // 0x01C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillRealPlayerCnt;                                        // 0x01C4(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.AimFlow
// 0x0128
struct FAimFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	uint16_t                                           AreaID;                                                   // 0x0038(0x0002) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x003A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<int>                                        MrpcsFlow;                                                // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0078(0x0010) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	int                                                AimTime;                                                  // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ShotCDTime;                                               // 0x0098(0x0010) (ZeroConstructor)
	int                                                ShotCount;                                                // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShotHitCount;                                             // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShotHeadHitCount;                                         // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShotPersonHitCount;                                       // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShotPersonKillCount;                                      // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FString                                     HitDistance;                                              // 0x00C0(0x0010) (ZeroConstructor)
	struct FString                                     HitEachDistance;                                          // 0x00D0(0x0010) (ZeroConstructor)
	struct FString                                     HitAngle;                                                 // 0x00E0(0x0010) (ZeroConstructor)
	struct FString                                     HitEachCdTime;                                            // 0x00F0(0x0010) (ZeroConstructor)
	struct FString                                     HitPartInfo;                                              // 0x0100(0x0010) (ZeroConstructor)
	struct FString                                     PlayerState;                                              // 0x0110(0x0010) (ZeroConstructor)
	unsigned char                                      bHoldBreath : 1;                                          // 0x0120(0x0001)
	int8_t                                             SightType;                                                // 0x0121(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0122(0x0002) MISSED OFFSET
	uint32_t                                           AimFlowID;                                                // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameEndFlow
// 0x0200
struct FGameEndFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	uint16_t                                           AreaID;                                                   // 0x0038(0x0002) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x003A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<int>                                        MrpcsFlow;                                                // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0078(0x0010) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FString                                     ClientVersion;                                            // 0x0098(0x0010) (ZeroConstructor)
	uint32_t                                           OverTime;                                                 // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             EndType;                                                  // 0x00AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      KillCount;                                                // 0x00AD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AssistsCount;                                             // 0x00AE(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DropCount;                                                // 0x00AF(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SaveCount;                                                // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      RebornCount;                                              // 0x00B1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AliveType : 1;                                            // 0x00B2(0x0001)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00B3(0x0001) MISSED OFFSET
	int                                                GoldGet;                                                  // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DiamondGet;                                               // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ExpGet;                                                   // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WinRank;                                                  // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TotalPlayers;                                             // 0x00C1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	int                                                PlayerRank;                                               // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RankEnd;                                                  // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TeamPlayer1;                                              // 0x00D0(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer2;                                              // 0x00E0(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer3;                                              // 0x00F0(0x0010) (ZeroConstructor)
	unsigned char                                      TeamPlayer1AliveType : 1;                                 // 0x0100(0x0001)
	unsigned char                                      TeamPlayer2AliveType : 1;                                 // 0x0100(0x0001)
	unsigned char                                      TeamPlayer3AliveType : 1;                                 // 0x0100(0x0001)
	unsigned char                                      TeamPlayer1Kill;                                          // 0x0101(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamPlayer2Kill;                                          // 0x0102(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamPlayer3Kill;                                          // 0x0103(0x0001) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           GameEndFlowID;                                            // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AIKillCount;                                              // 0x0108(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      KillHeadShotCount;                                        // 0x0109(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      RoundCircleCount;                                         // 0x010A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerLastKillGet;                                        // 0x010B(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                ChangeWearingCount;                                       // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ChangeWearingCountInReady;                                // 0x0110(0x0010) (ZeroConstructor)
	TArray<int>                                        ChangeWearingCountInBattle;                               // 0x0120(0x0010) (ZeroConstructor)
	float                                              AllowChangeWearingTime;                                   // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BattleStateTime;                                          // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        UseQuickMsgIDArray;                                       // 0x0138(0x0010) (ZeroConstructor)
	TArray<int>                                        UseQuickMsgCountArray;                                    // 0x0148(0x0010) (ZeroConstructor)
	TArray<int>                                        UseWheelMsgIDArray;                                       // 0x0158(0x0010) (ZeroConstructor)
	TArray<int>                                        UseWheelMsgCountArray;                                    // 0x0168(0x0010) (ZeroConstructor)
	TArray<int>                                        InexistentAvatarStat;                                     // 0x0178(0x0010) (ZeroConstructor)
	TArray<int>                                        InexistentAvatarInBornStat;                               // 0x0188(0x0010) (ZeroConstructor)
	TArray<int>                                        InexistentWeaponAvatarStat;                               // 0x0198(0x0010) (ZeroConstructor)
	TArray<int>                                        InexistentVehicleAvatarStat;                              // 0x01A8(0x0010) (ZeroConstructor)
	int                                                InexistentPlaneAvatarStat;                                // 0x01B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InexistentEmoteAvatarStat;                                // 0x01BC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShowMsgCnt;                                               // 0x01C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UserConfirmCnt;                                           // 0x01C1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UserCancelCnt;                                            // 0x01C2(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UserDoNothingCnt;                                         // 0x01C3(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              FPSBeforeAdapt;                                           // 0x01C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FPSAfterAdapt;                                            // 0x01C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TeammateMicrophoneTime;                                   // 0x01CC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TeammateSpeakerTime;                                      // 0x01D0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnemyMicrophoneTime;                                      // 0x01D4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnemySpeakerTime;                                         // 0x01D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TeammateInterphoneTime;                                   // 0x01DC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnemyInterphoneTime;                                      // 0x01E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerUseQuickSight;                                      // 0x01E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerUseShoulderCnt;                                     // 0x01E5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x01E6(0x0002) MISSED OFFSET
	int                                                MaxVehicleToLandHeight;                                   // 0x01E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxVehicleInAirInterval;                                  // 0x01EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerMoveSpeedMax;                                       // 0x01F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpHeightMax;                                      // 0x01F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpSpeedMax;                                       // 0x01F8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.TeammatHurtFlowNode
// 0x0060
struct FTeammatHurtFlowNode
{
	struct FString                                     HurtPlayerName;                                           // 0x0000(0x0010) (ZeroConstructor)
	int                                                GameModeType;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     MakeHurtPlayerName;                                       // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     DataTimes;                                                // 0x0028(0x0010) (ZeroConstructor)
	uint16_t                                           AreaID;                                                   // 0x0038(0x0002) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x003A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.TeammatHurtFlow
// 0x0010
struct FTeammatHurtFlow
{
	TArray<struct FTeammatHurtFlowNode>                TeammatHurtList;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.ForbitPickFlowNode
// 0x0048
struct FForbitPickFlowNode
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (ZeroConstructor)
	uint16_t                                           AreaID;                                                   // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	TArray<int>                                        forbitNumList;                                            // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.ForbitPickFlow
// 0x0010
struct FForbitPickFlow
{
	TArray<struct FForbitPickFlowNode>                 forbitList;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.ClientGameEndFlow
// 0x0148
struct FClientGameEndFlow
{
	int64_t                                            ClientStartTime;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     ClientVersion;                                            // 0x0018(0x0010) (ZeroConstructor)
	uint32_t                                           OverTime;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             EndType;                                                  // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      KillCount;                                                // 0x002D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AssistsCount;                                             // 0x002E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DropCount;                                                // 0x002F(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SaveCount;                                                // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      RebornCount;                                              // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AliveType : 1;                                            // 0x0032(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0033(0x0001) MISSED OFFSET
	int                                                GoldGet;                                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DiamondGet;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ExpGet;                                                   // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WinRank;                                                  // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TotalPlayers;                                             // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	int                                                PlayerRank;                                               // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RankEnd;                                                  // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TeamPlayer1;                                              // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer2;                                              // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer3;                                              // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      TeamPlayer1AliveType : 1;                                 // 0x0080(0x0001)
	unsigned char                                      TeamPlayer2AliveType : 1;                                 // 0x0080(0x0001)
	unsigned char                                      TeamPlayer3AliveType : 1;                                 // 0x0080(0x0001)
	unsigned char                                      TeamPlayer1Kill;                                          // 0x0081(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamPlayer2Kill;                                          // 0x0082(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamPlayer3Kill;                                          // 0x0083(0x0001) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           GameEndFlowID;                                            // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      RoundCircleCount;                                         // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	TArray<int>                                        UseQuickMsgIDArray;                                       // 0x0090(0x0010) (ZeroConstructor)
	TArray<int>                                        UseQuickMsgCountArray;                                    // 0x00A0(0x0010) (ZeroConstructor)
	TArray<int>                                        UseWheelMsgIDArray;                                       // 0x00B0(0x0010) (ZeroConstructor)
	TArray<int>                                        UseWheelMsgCountArray;                                    // 0x00C0(0x0010) (ZeroConstructor)
	TArray<int>                                        InexistentAvatarStat;                                     // 0x00D0(0x0010) (ZeroConstructor)
	TArray<int>                                        InexistentAvatarInBornStat;                               // 0x00E0(0x0010) (ZeroConstructor)
	TArray<int>                                        InexistentWeaponAvatarStat;                               // 0x00F0(0x0010) (ZeroConstructor)
	TArray<int>                                        InexistentVehicleAvatarStat;                              // 0x0100(0x0010) (ZeroConstructor)
	int                                                InexistentPlaneAvatarStat;                                // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InexistentEmoteAvatarStat;                                // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShowMsgCnt;                                               // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UserConfirmCnt;                                           // 0x0119(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UserCancelCnt;                                            // 0x011A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UserDoNothingCnt;                                         // 0x011B(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              FPSBeforeAdapt;                                           // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FPSAfterAdapt;                                            // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TeammateMicrophoneTime;                                   // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TeammateSpeakerTime;                                      // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnemyMicrophoneTime;                                      // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnemySpeakerTime;                                         // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TeammateInterphoneTime;                                   // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnemyInterphoneTime;                                      // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerUseQuickSight;                                      // 0x013C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerUseShoulderCnt;                                     // 0x013D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x013E(0x0002) MISSED OFFSET
	int                                                PlayerMoveSpeedMax;                                       // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.InexistentAvatarFlow
// 0x01E0
struct FInexistentAvatarFlow
{
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0000(0x01E0) MISSED OFFSET
};

// ScriptStruct Gameplay.CircleFlow
// 0x02A0
struct FCircleFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	uint16_t                                           AreaID;                                                   // 0x0038(0x0002) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x003A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<int>                                        MrpcsFlow;                                                // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     PicUrl;                                                   // 0x0088(0x0010) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	uint32_t                                           GameStartTime;                                            // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           NewCircleBornTime;                                        // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCirclePositionX;                                       // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCirclePositionY;                                       // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCirclePositionRadius;                                  // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCircleCount;                                           // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionX;                                          // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionY;                                          // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionZ;                                          // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerHP;                                                 // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           OldCircleMoveTime;                                        // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           OldCircleMoveEndTime;                                     // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerOutTime;                                            // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonCount;                                        // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonMin;                                          // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonMax;                                          // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonAvg;                                          // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonTotal;                                        // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonDrop;                                         // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonDead;                                         // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryCount;                                            // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryMin;                                              // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryMax;                                              // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryTotal;                                            // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryCount;                                      // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryMin;                                        // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryMax;                                        // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryTotal;                                      // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyStartLv;                                            // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyStartTime;                                          // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FString                                     EnergyItemUse;                                            // 0x0120(0x0010) (ZeroConstructor)
	int                                                EnergyLvTimeInfo;                                         // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FString                                     EnergyRunFastTime;                                        // 0x0138(0x0010) (ZeroConstructor)
	struct FString                                     EnergyRecoveryLvTimeInfo;                                 // 0x0148(0x0010) (ZeroConstructor)
	int                                                EnergyEndLv;                                              // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyEndTime;                                            // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerMoveDis;                                            // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSpeedMax;                                           // 0x0164(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSpeedAvg;                                           // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCarSpeedMax;                                        // 0x016C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCarSpeedAvg;                                        // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSquatMoveDis;                                       // 0x0174(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSquatMoveTime;                                      // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCreepMoveDis;                                       // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCreepMoveTime;                                      // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerRunMoveDis;                                         // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerRunMoveTime;                                        // 0x0188(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerDriveMoveDis;                                       // 0x018C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerDriveMoveTime;                                      // 0x0190(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCar;                                                // 0x0194(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCameraDistanceMax;                                  // 0x0198(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SecCircleFlowID;                                          // 0x019C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecordType;                                               // 0x01A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoAimType;                                              // 0x01A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x01A5(0x0003) MISSED OFFSET
	int                                                AutoAimTime;                                              // 0x01A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerKillCount;                                          // 0x01AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerKillAICount;                                        // 0x01B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerHeadKillCount;                                      // 0x01B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerKillRealPlayerCount;                                // 0x01B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerKillMLDeliverAICount;                               // 0x01BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerKillMLAICount;                                      // 0x01C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerKillBehaviorTreeDeliverAICount;                     // 0x01C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerKillBehaviorTreeAICount;                            // 0x01C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillerType;                                               // 0x01CC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KnockDownRealPlayerCount;                                 // 0x01D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KnockDownMLDeliverAICount;                                // 0x01D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KnockDownMLAICount;                                       // 0x01D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KnockDownBehaviorTreeDeliverAICount;                      // 0x01DC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KnockDownBehaviorTreeAICount;                             // 0x01E0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeKnockDownRealPlayerCount;                               // 0x01E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeKnockDownMLDeliverAICount;                              // 0x01E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeKnockDownMLAICount;                                     // 0x01EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeKnockDownBehaviorTreeDeliverAICount;                    // 0x01F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeKnockDownBehaviorTreeAICount;                           // 0x01F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageRealPlayerAmount;                                   // 0x01F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageMLDeliverAIAmount;                                  // 0x01FC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageMLAIAmount;                                         // 0x0200(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageBehaviorTreeDeliverAIAmount;                        // 0x0204(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageBehaviorTreeAIAmount;                               // 0x0208(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageFromRealPlayerAmount;                               // 0x020C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageFromMLDeliverAIAmount;                              // 0x0210(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageFromMLAIAmount;                                     // 0x0214(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageFromBehaviorTreeDeliverAIAmount;                    // 0x0218(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageFromBehaviorTreeAIAmount;                           // 0x021C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AssistCount;                                              // 0x0220(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AirDropCount;                                             // 0x0224(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PickUpItemTimes;                                          // 0x0228(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RescueCount;                                              // 0x022C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShotWeaponCount;                                          // 0x0230(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerHatID;                                              // 0x0234(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerMaskID;                                             // 0x0238(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerShirtID;                                            // 0x023C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPantsID;                                            // 0x0240(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MedicineEnergyCnt;                                        // 0x0244(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MedicineAdrenalineCnt;                                    // 0x0248(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MedicinePainkillerCnt;                                    // 0x024C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MedicineBandageCnt;                                       // 0x0250(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MedicineFirstAidKitCnt;                                   // 0x0254(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MedicineTreatmentCnt;                                     // 0x0258(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OccupiedCapacity;                                         // 0x025C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ArmorPoints;                                              // 0x0260(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TeammateNum;                                              // 0x0264(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MainWeaponId1;                                            // 0x0268(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MainWeaponBulletId1;                                      // 0x026C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MainWeaponBulletNum1;                                     // 0x0270(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MainWeaponId2;                                            // 0x0274(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MainWeaponBulletId2;                                      // 0x0278(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MainWeaponBulletNum2;                                     // 0x027C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubWeaponID;                                              // 0x0280(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubWeaponBulletId;                                        // 0x0284(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubWeaponBulletNum;                                       // 0x0288(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
	struct FString                                     MrpcsFlowStr;                                             // 0x0290(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.ClientCircleFlow
// 0x0140
struct FClientCircleFlow
{
	int64_t                                            ClientStartTime;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     PicUrl;                                                   // 0x0018(0x0010) (ZeroConstructor)
	uint32_t                                           GameStartTime;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           NewCircleBornTime;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCirclePositionX;                                       // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCirclePositionY;                                       // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCirclePositionRadius;                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCircleCount;                                           // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionX;                                          // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionY;                                          // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionZ;                                          // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerHP;                                                 // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           OldCircleMoveTime;                                        // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           OldCircleMoveEndTime;                                     // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerOutTime;                                            // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonCount;                                        // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonMin;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonMax;                                          // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonAvg;                                          // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonTotal;                                        // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonDrop;                                         // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonDead;                                         // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryCount;                                            // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryMin;                                              // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryMax;                                              // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryTotal;                                            // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryCount;                                      // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryMin;                                        // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryMax;                                        // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryTotal;                                      // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyStartLv;                                            // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyStartTime;                                          // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     EnergyItemUse;                                            // 0x00A0(0x0010) (ZeroConstructor)
	int                                                EnergyLvTimeInfo;                                         // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	struct FString                                     EnergyRunFastTime;                                        // 0x00B8(0x0010) (ZeroConstructor)
	struct FString                                     EnergyRecoveryLvTimeInfo;                                 // 0x00C8(0x0010) (ZeroConstructor)
	int                                                EnergyEndLv;                                              // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyEndTime;                                            // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerMoveDis;                                            // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSpeedMax;                                           // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSpeedAvg;                                           // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCarSpeedMax;                                        // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCarSpeedAvg;                                        // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSquatMoveDis;                                       // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSquatMoveTime;                                      // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCreepMoveDis;                                       // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCreepMoveTime;                                      // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerRunMoveDis;                                         // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerRunMoveTime;                                        // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerDriveMoveDis;                                       // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerDriveMoveTime;                                      // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCar;                                                // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCameraDistanceMax;                                  // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SecCircleFlowID;                                          // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecordType;                                               // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoAimType;                                              // 0x0124(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
	int                                                AutoAimTime;                                              // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	TArray<unsigned char>                              MrpcsFlowData;                                            // 0x0130(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.JumpFlow
// 0x0150
struct FJumpFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	uint16_t                                           AreaID;                                                   // 0x0038(0x0002) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x003A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<int>                                        MrpcsFlow;                                                // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0078(0x0010) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FString                                     PicUrl;                                                   // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x00A8(0x0010) (ZeroConstructor)
	int8_t                                             WeatherID;                                                // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	int64_t                                            GameStartTime;                                            // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           StartJumpTime;                                            // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           EndJumpTime;                                              // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerJumpTime;                                           // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerOpenTime;                                           // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerLandTime;                                           // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionX;                                      // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionY;                                      // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionZ;                                      // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionX;                                       // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionY;                                       // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionZ;                                       // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionX;                                      // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionY;                                      // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionZ;                                      // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerLandDistance;                                       // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerSpeedMax1;                                          // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerSpeedMax2;                                          // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FString                                     GVoiceTeamID;                                             // 0x0110(0x0010) (ZeroConstructor)
	struct FString                                     GVoiceRoomID;                                             // 0x0120(0x0010) (ZeroConstructor)
	int                                                GVoiceTeamMemberID;                                       // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GVoiceRoomMemberID;                                       // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     FollowPlayerUID;                                          // 0x0138(0x0010) (ZeroConstructor)
	uint32_t                                           ExitFollowTime;                                           // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.ClientJumpFlow
// 0x00C0
struct FClientJumpFlow
{
	int64_t                                            ClientStartTime;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0018(0x0010) (ZeroConstructor)
	int8_t                                             WeatherID;                                                // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	int64_t                                            GameStartTime;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           StartJumpTime;                                            // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           EndJumpTime;                                              // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerJumpTime;                                           // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerOpenTime;                                           // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerLandTime;                                           // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     FollowPlayerUID;                                          // 0x0050(0x0010) (ZeroConstructor)
	uint32_t                                           ExitFollowTime;                                           // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionX;                                      // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionY;                                      // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionZ;                                      // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionX;                                       // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionY;                                       // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionZ;                                       // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionX;                                      // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionY;                                      // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionZ;                                      // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerLandDistance;                                       // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerSpeedMax1;                                          // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerSpeedMax2;                                          // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FString                                     GVoiceTeamID;                                             // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     GVoiceRoomID;                                             // 0x00A8(0x0010) (ZeroConstructor)
	int                                                GVoiceTeamMemberID;                                       // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GVoiceRoomMemberID;                                       // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameStartFlow
// 0x01B8
struct FGameStartFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	uint16_t                                           AreaID;                                                   // 0x0038(0x0002) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x003A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<int>                                        MrpcsFlow;                                                // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0078(0x0010) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FString                                     PicUrl;                                                   // 0x0098(0x0010) (ZeroConstructor)
	uint32_t                                           SvrUserMoney1;                                            // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SvrUserMoney2;                                            // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SvrUserMoney3;                                            // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SvrRoundRank;                                             // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SvrRoundRank1;                                            // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SvrRoundRank2;                                            // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SvrRoundRank3;                                            // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	uint64_t                                           SvrRoleID;                                                // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             SvrRoleType;                                              // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	struct FString                                     SvrMapName;                                               // 0x00D8(0x0010) (ZeroConstructor)
	int8_t                                             SvrWeatherid;                                             // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	struct FString                                     SvrItemList;                                              // 0x00F0(0x0010) (ZeroConstructor)
	int64_t                                            WaitStartTime;                                            // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            WaitEndTime;                                              // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MapName;                                                  // 0x0110(0x0010) (ZeroConstructor)
	int8_t                                             WeatherID;                                                // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	struct FString                                     ItemList;                                                 // 0x0128(0x0010) (ZeroConstructor)
	int8_t                                             GameType;                                                 // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             TeamType;                                                 // 0x0139(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoMatch;                                                // 0x013A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerCount;                                              // 0x013B(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TeamPlayer1;                                              // 0x0140(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer2;                                              // 0x0150(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer3;                                              // 0x0160(0x0010) (ZeroConstructor)
	int                                                TeamPlayer1Rank;                                          // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamPlayer2Rank;                                          // 0x0174(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamPlayer3Rank;                                          // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SecGameStartFlowFlowID;                                   // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GVoiceTeamID;                                             // 0x0180(0x0010) (ZeroConstructor)
	struct FString                                     GVoiceRoomID;                                             // 0x0190(0x0010) (ZeroConstructor)
	int                                                GVoiceTeamMemberID;                                       // 0x01A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GVoiceRoomMemberID;                                       // 0x01A4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     IP;                                                       // 0x01A8(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.ClientGameStartFlow
// 0x00A8
struct FClientGameStartFlow
{
	int64_t                                            ClientStartTime;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0018(0x0010) (ZeroConstructor)
	int8_t                                             WeatherID;                                                // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     ItemList;                                                 // 0x0030(0x0010) (ZeroConstructor)
	int8_t                                             TeamType;                                                 // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                TeamID;                                                   // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TeamPlayer1;                                              // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer2;                                              // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer3;                                              // 0x0068(0x0010) (ZeroConstructor)
	uint32_t                                           SecGameStartFlowFlowID;                                   // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FString                                     GVoiceTeamID;                                             // 0x0080(0x0010) (ZeroConstructor)
	struct FString                                     GVoiceRoomID;                                             // 0x0090(0x0010) (ZeroConstructor)
	int                                                GVoiceTeamMemberID;                                       // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GVoiceRoomMemberID;                                       // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.IntPosition3D
// 0x000C
struct FIntPosition3D
{
	int                                                X;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.VehicleSpotDebugData
// 0x0038
struct FVehicleSpotDebugData
{
	struct FString                                     VehicleSpotName;                                          // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpotGroupType>                        SpotGroupType;                                            // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	struct FString                                     VehiclePath;                                              // 0x0018(0x0010) (ZeroConstructor)
	float                                              VehicleLocationX;                                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VehicleLocationY;                                         // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VehicleLocationZ;                                         // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.SpotStatisticsData
// 0x0050 (0x0058 - 0x0008)
struct FSpotStatisticsData : public FTableRowBase
{
	TEnumAsByte<ESpotGroupType>                        GroupType;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FString                                     AreaName;                                                 // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     SpotDefaultTag;                                           // 0x0020(0x0010) (ZeroConstructor)
	struct FVector                                     Location;                                                 // 0x0030(0x000C) (IsPlainOldData)
	float                                              X;                                                        // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               RandomRot;                                                // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FRotator                                    Rotator;                                                  // 0x004C(0x000C) (IsPlainOldData)
};

// ScriptStruct Gameplay.CharacterAnimStartAsynLoadParam
// 0x0002
struct FCharacterAnimStartAsynLoadParam
{
	TEnumAsByte<ECharacterAnimTypeAsynLoaded>          AnimType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterViewType>                    CharacterViewType;                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.CharacterAnimAsynLoadCompleteParam
// 0x0048
struct FCharacterAnimAsynLoadCompleteParam
{
	TEnumAsByte<ECharacterAnimTypeAsynLoaded>          AnimTypeAsynLoaded;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     AnimsCatorgeryName;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<ECharacterViewType>                    CharacterViewType;                                        // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x0019(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Gameplay.CharacterAnimAsynLoadCompleteParam.SoftPtrAnimation
};

// ScriptStruct Gameplay.SpawnItemStat
// 0x0038
struct FSpawnItemStat
{
	struct FString                                     ItemCategory;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     ItemValue;                                                // 0x0010(0x0010) (ZeroConstructor)
	int                                                Together;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TriggerName;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.DamageMatchGroup
// 0x0050
struct FDamageMatchGroup
{
	TMap<int, float>                                   DamageMatchPairs;                                         // 0x0000(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Gameplay.LevelSequenceConfig
// 0x00E8
struct FLevelSequenceConfig
{
	struct FSoftClassPath                              SequenceActorTemplate;                                    // 0x0000(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Gameplay.LevelSequenceConfig.LevelSequence
	float                                              LevelSequenceDuration;                                    // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TMap<struct FString, struct FString>               TrackBindingInfos;                                        // 0x0048(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FString, struct FSoftObjectPath>       TrackBindingObjects;                                      // 0x0098(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.CharSpecialLevelSequenceData
// 0x00F0
struct FCharSpecialLevelSequenceData
{
	TEnumAsByte<ECharSpecialLevelSequenceType>         LevelSequenceType;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FLevelSequenceConfig                        LevelSequenceConfig;                                      // 0x0008(0x00E8) (Edit, BlueprintVisible, DisableEditOnInstance)
};

// ScriptStruct Gameplay.PlayerFiringList
// 0x0010
struct FPlayerFiringList
{
	uint64_t                                           PlayerFiringIndexLow;                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           PlayerFiringIndexHigh;                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerBreathInfoList
// 0x0020
struct FPlayerBreathInfoList
{
	uint64_t                                           PlayerIndexLow;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           PlayerIndexHigh;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              BreathList;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.PlayerKeyIndexForSort
// 0x0008
struct FPlayerKeyIndexForSort
{
	uint32_t                                           PlayerKey;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Index;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlanAGPlayerReportData
// 0x0030
struct FPlanAGPlayerReportData
{
	uint64_t                                           UId;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TwoTargetScore;                                           // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FiveTargetScore;                                          // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FourColorTargetScore;                                     // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GophersTargetScore;                                       // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DishTargetScore;                                          // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AirdropTargetScore;                                       // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpeedUpTargetNum;                                         // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BulletNum;                                                // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentCityShootingAccuracy;                              // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlanAGTeamReportData
// 0x0088
struct FPlanAGTeamReportData
{
	int                                                TeamID;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TwoTargetScore;                                           // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FiveTargetScore;                                          // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FourColorTargetScore;                                     // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GophersTargetScore;                                       // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DishTargetScore;                                          // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AirdropTargetScore;                                       // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpeedUpTargetNum;                                         // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentCityTwoTargetScore;                                // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentCityFiveTargetScore;                               // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentCityFourColorTargetScore;                          // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentCityGophersTargetScore;                            // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentCityDishTargetScore;                               // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentCityAirdropTargetScore;                            // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentCitySpeedUpTargetNum;                              // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShootingAccuracy;                                         // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TeamChecktime;                                            // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeamOrder;                                                // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentCityStayTime;                                      // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverTime;                                                 // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      StageCompletedTime;                                       // 0x0050(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<float>                                      EnterStageTimeStamp;                                      // 0x0060(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                VehicleResetNum;                                          // 0x0070(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Fuel;                                                     // 0x0074(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FuelMax;                                                  // 0x0078(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Speed;                                                    // 0x007C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RefuelingTime;                                            // 0x0080(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CompletionProgress;                                       // 0x0084(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.TeamInfoInOB
// 0x0038
struct FTeamInfoInOB
{
	int                                                TeamID;                                                   // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     TeamName;                                                 // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               IsShowLogo;                                               // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     LogoPicUrl;                                               // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                KillNum;                                                  // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LiveMemberNum;                                            // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerAfterMatchAPI
// 0x003C
struct FPlayerAfterMatchAPI
{
	uint32_t                                           PlayerKey;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InDamage;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Heal;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HeadShotNum;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SurvivalTime;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DriveDistance;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                marchDistance;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Assists;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OutsideBlueCircleTime;                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Knockouts;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                rescueTimes;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UseSmokeGrenadeNum;                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UseFragGrenadeNum;                                        // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UseBurnGrenadeNum;                                        // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UseFlashGrenadeNum;                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerRealTimeAPI
// 0x0020
struct FPlayerRealTimeAPI
{
	uint32_t                                           PlayerKey;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GotAirDropNum;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxKillDistance;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Damage;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillNumInVehicle;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillNumByGrenade;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsOutsideBlueCircle;                                      // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.UAESpotDataSerialize
// 0x01B0
struct FUAESpotDataSerialize
{
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x0000(0x01B0) MISSED OFFSET
};

// ScriptStruct Gameplay.UAEWindowPackageData
// 0x0060
struct FUAEWindowPackageData
{
	TWeakObjectPtr<class AUAEHouseActor>               HouseActor;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      WindowClass;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUAEWindowRepData                           WindowData;                                               // 0x0010(0x0050)
};

// ScriptStruct Gameplay.TotalWeaponReport
// 0x0028
struct FTotalWeaponReport
{
	struct FString                                     BattleID;                                                 // 0x0000(0x0010) (ZeroConstructor)
	int                                                BattleMode;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FOnePlayerWeapon>                    TotalWeaponRecord;                                        // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.WeatherLevelInfo
// 0x0020
struct FWeatherLevelInfo
{
	int                                                WeatherID;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     WeatherLevelName;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              WeatherTime;                                              // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WeatherSyncCount;                                         // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

