#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ZLevel.ZLevelData
// 0x00F0 (0x04E0 - 0x03F0)
class AZLevelData : public AActor
{
public:
	struct FGameLevelDesc                              LevelDesc;                                                // 0x03F0(0x0018) (Edit)
	TArray<struct FString>                             TargetClassPaths;                                         // 0x0408(0x0010) (Edit, ZeroConstructor)
	struct FString                                     LeveDirectorFilePath;                                     // 0x0418(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<ELevelEndCondType>                     EndCondType;                                              // 0x0428(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0429(0x0007) MISSED OFFSET
	struct FString                                     EndCondPar;                                               // 0x0430(0x0010) (Edit, ZeroConstructor)
	bool                                               IsLastLevel;                                              // 0x0440(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	int                                                DiffcultPerc;                                             // 0x0444(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UZPVECircle*>                         PVECircleConfigs;                                         // 0x0448(0x0010) (Edit, ExportObject, ZeroConstructor)
	TArray<class UZPVERelifePoint*>                    PVERelifePoints;                                          // 0x0458(0x0010) (Edit, ExportObject, ZeroConstructor)
	TArray<class UZMonsterSpotGroup*>                  MonsterSpotGroups;                                        // 0x0468(0x0010) (Edit, ExportObject, ZeroConstructor)
	TArray<struct FVector>                             TaskPointLocations;                                       // 0x0478(0x0010) (Edit, ZeroConstructor)
	TArray<struct FRelifePoint>                        PVERelifePointsInfo;                                      // 0x0488(0x0010) (Edit, ZeroConstructor)
	TArray<struct FPVECircle>                          PVECircleInfo;                                            // 0x0498(0x0010) (Edit, ZeroConstructor)
	TArray<struct FMonsterWave>                        MonsterWaveCfg;                                           // 0x04A8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FLevelData>                          CfgList;                                                  // 0x04B8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FLevelObjets>                        LevelAddObjs;                                             // 0x04C8(0x0010) (Edit, ZeroConstructor)
	int                                                CurComponentNameIndex;                                    // 0x04D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZLevelData");
		return pStaticClass;
	}


	void ReBindLevelDataComponent();
	void CheckMonsterSpotIsOnLand(class UZMonsterSpot* MonsterSpot, class UZMonsterSpotGroup* SpotGroup);
};


// Class ZLevel.ZSpotSceneComponent
// 0x0000 (0x02D0 - 0x02D0)
class UZSpotSceneComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZSpotSceneComponent");
		return pStaticClass;
	}

};


// Class ZLevel.ZMonsterRoadPoint
// 0x0010 (0x02E0 - 0x02D0)
class UZMonsterRoadPoint : public UZSpotSceneComponent
{
public:
	int                                                Radius;                                                   // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x02D4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZMonsterRoadPoint");
		return pStaticClass;
	}

};


// Class ZLevel.ZMonsterSpot
// 0x0030 (0x0300 - 0x02D0)
class UZMonsterSpot : public UZSpotSceneComponent
{
public:
	struct FString                                     Desc;                                                     // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      MonsterSpotType;                                          // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02E1(0x0007) MISSED OFFSET
	TArray<class UZMonsterRoadPoint*>                  RoadPointList;                                            // 0x02E8(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	unsigned char                                      SpotRadius;                                               // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZMonsterSpot");
		return pStaticClass;
	}

};


// Class ZLevel.ZMonsterSpotGroup
// 0x0020 (0x02F0 - 0x02D0)
class UZMonsterSpotGroup : public USceneComponent
{
public:
	struct FString                                     Desc;                                                     // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UZMonsterSpot*>                       SpotList;                                                 // 0x02E0(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZMonsterSpotGroup");
		return pStaticClass;
	}

};


// Class ZLevel.ZPVECircle
// 0x0020 (0x02F0 - 0x02D0)
class UZPVECircle : public UZSpotSceneComponent
{
public:
	struct FVector2D                                   targetPos;                                                // 0x02D0(0x0008) (Edit, IsPlainOldData)
	float                                              Radius;                                                   // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveTime;                                                 // 0x02DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Pain;                                                     // 0x02E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x02E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZPVECircle");
		return pStaticClass;
	}

};


// Class ZLevel.ZPVERelifePoint
// 0x0010 (0x02E0 - 0x02D0)
class UZPVERelifePoint : public UZSpotSceneComponent
{
public:
	bool                                               IsActivePoint;                                            // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x02D1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZPVERelifePoint");
		return pStaticClass;
	}

};


}

