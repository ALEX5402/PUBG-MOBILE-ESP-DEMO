#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum BuildSystem.EBuildingActionType
enum class EBuildingActionType : uint8_t
{
	EBA_PreBuild                   = 0,
	EBA_BuildAtScreenPos           = 1,
	EBA_DoubleClickBuild           = 2,
	EBA_CustomEventBuild           = 3,
	EBA_INTERNAL_SERVER_CHECK_TYPE = 4,
	EBA_Max                        = 5
};


// Enum BuildSystem.EBuildingActorConstructingMode
enum class EBuildingActorConstructingMode : uint8_t
{
	EBCM_SNAP_TO_GROUND            = 0,
	EBCM_SNAP_EVERYWHERE           = 1,
	EBCM_SNAP_MAX                  = 2
};


// Enum BuildSystem.EBuildingViewType
enum class EBuildingViewType : uint8_t
{
	EBVT_Invalid                   = 0,
	EBVT_UseController             = 1,
	EBVT_UseCamera                 = 2,
	EBVT_UseCharacter              = 3,
	EBVT_Max                       = 4
};


// Enum BuildSystem.EBuildingType
enum class EBuildingType : uint8_t
{
	EBuilding_Wall                 = 0,
	EBuilding_Stairs               = 1,
	EBuilding_Prop                 = 2,
	EBuilding_Max                  = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BuildSystem.BuildingActorWorldSnapSetup
// 0x0024
struct FBuildingActorWorldSnapSetup
{
	struct FVector                                     GridSizeScale;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Pivot;                                                    // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    SnapRotation;                                             // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct BuildSystem.WorldGridData
// 0x000C
struct FWorldGridData
{
	struct FVector                                     GridSize;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct BuildSystem.BuildingData
// 0x0048
struct FBuildingData
{
	int                                                BuildingID;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBuildingType>                         BuildingType;                                             // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FSoftObjectPath                             BuildingActorClassPath;                                   // 0x0008(0x0018) (Edit, BlueprintVisible)
	TArray<TEnumAsByte<ECollisionChannel>>             BlockingChannels;                                         // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MaxBuildDist;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CDInterval;                                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxBuildCount;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoRefreshCD;                                           // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	int                                                GroupBuildingIdForMaxBuild;                               // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct BuildSystem.BuildingActorDensityCheck
// 0x0020
struct FBuildingActorDensityCheck
{
	bool                                               bDoCheck;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FString                                     LuaModPath;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct BuildSystem.BuildingActorInfo
// 0x0018
struct FBuildingActorInfo
{
	TWeakObjectPtr<class ABuildingActorBase>           BuildingActor;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       OwnerActor;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                BuildID;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SpawnedTime;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BuildSystem.SnapGridData
// 0x0050
struct FSnapGridData
{
	struct FTransform                                  GridTransform;                                            // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x003C(0x0014) MISSED OFFSET
};

// ScriptStruct BuildSystem.BSRotatedBox
// 0x00A0
struct FBSRotatedBox
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct BuildSystem.BuildingTouchInfo
// 0x0010
struct FBuildingTouchInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct BuildSystem.QuadTracingData
// 0x0018
struct FQuadTracingData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

}

