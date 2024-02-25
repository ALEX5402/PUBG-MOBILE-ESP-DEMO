#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SpawnSystem.STSpawnerBase
// 0x0160 (0x0550 - 0x03F0)
class ASTSpawnerBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x03F0(0x0068) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0458(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class USTStrategyTiming*                           SpawnTiming;                                              // 0x0468(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USTStrategyLocation*                         SpawnLocation;                                            // 0x0470(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USTStrategySpecies*                          SpawnSpecies;                                             // 0x0478(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class USTStrategyCond*>                     SpawnConditions;                                          // 0x0480(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	unsigned char                                      bUseRegion : 1;                                           // 0x0490(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0491(0x0003) MISSED OFFSET
	int                                                SpawnerCampID;                                            // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESTSpawnerVolume                                   VolumeType;                                               // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0499(0x0003) MISSED OFFSET
	float                                              SphereRadius;                                             // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxHalfExtent;                                            // 0x04A0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	class UClass*                                      SpawnSpotClass;                                           // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSpawnUnitSuccessDelegate;                               // 0x04B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	uint32_t                                           SpawnerID;                                                // 0x04C8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                MaxUnitsCount;                                            // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxAliveCount;                                            // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	struct FString                                     SpawnerDescString;                                        // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bUseAsTrigger : 1;                                        // 0x04E8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData05[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	struct FString                                     SpawnerSnapshot;                                          // 0x04F0(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<class ASTSpawnSpot*>                        SpawnSpots;                                               // 0x0500(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class AActor*>                              AlivePawns;                                               // 0x0510(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      bActive : 1;                                              // 0x0520(0x0001) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      bInitialized : 1;                                         // 0x0520(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bTimeIsRipe : 1;                                          // 0x0520(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0521(0x0003) MISSED OFFSET
	int                                                TotalSpawnedUnits;                                        // 0x0524(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USTSpawnSubsystem*                           SpawnSubsystem;                                           // 0x0528(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x10];                                      // 0x0530(0x0010) MISSED OFFSET
	int                                                WaitSpawn;                                                // 0x0540(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0xC];                                       // 0x0544(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STSpawnerBase");
		return pStaticClass;
	}


	void Thinking(float DeltaTime);
	void Switch(bool IsSwitchOn);
	void SetSpawnerID(uint32_t ID);
	void OnUnitSpawned(uint32_t InSpawnerID, class APawn* AIPawn, int ConfigId);
	void OnUnitDead(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnSpawnTimingRipe(bool IsRipe);
	void OnSpawnerDeactivate();
	void OnSpawnerActivate();
	void OnRep_SpawnerID();
	void Multicast_SpawnerSnapshot(const struct FString& Timing, const struct FString& Species, const struct FString& Location, const struct FString& Conditions, const struct FString& extra);
	void Multicast_AlivePawnsChange(class APawn* Unit, bool IsBorn, bool IsAllDead);
	void ModifyMaxAlive(int NewAlive);
	bool IsInitialized();
	bool IsActive();
	void InitSpawner();
	int GetTotalSpawnedNum();
	class USTSpawnSubsystem* GetSpawnSystem();
	TArray<class ASTSpawnSpot*> GetSpawnSpots();
	float GetSpawnRadius();
	struct FVector GetSpawnLocation();
	struct FVector GetSpawnExtent();
	struct FString GetSpawnerSnapshot();
	uint32_t GetSpawnerID();
	struct FString GetSpawnerDesc();
	int GetReferencedCount();
	int GetMaxUnits();
	int GetMaxAlive();
	TArray<class AActor*> GetAliveUnits();
	class ASTSpawnSpot* FindSpot(const struct FString& SpotID);
	void DeactivateSpawner();
	bool CheckTriggerGuest(class AActor* Guest);
	bool CheckOwnedUnit(class AActor* InUnit);
	void AnalyseConfigData();
	void ActivateSpawner();
};


// Class SpawnSystem.STSpawnSubsystem
// 0x0100 (0x0130 - 0x0030)
class USTSpawnSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	TMap<uint32_t, class ASTSpawnerBase*>              SpawnersMap;                                              // 0x0038(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0088(0x0028) MISSED OFFSET
	float                                              TickFrequency;                                            // 0x00B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ThinkTimesPerFrame;                                       // 0x00B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxWaitSpawnQueSize;                                      // 0x00B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpawnUnitInterval;                                        // 0x00BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x70];                                      // 0x00C0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STSpawnSubsystem");
		return pStaticClass;
	}


	void UnregisterSpawner(class ASTSpawnerBase* Spawner);
	class ASTSpawnerBase* UnitFindSpawner(int UnitUID);
	class AActor* SpawnUnit(const struct FSTSpawnParam& SpawnParam);
	void RegisterSpawner(class ASTSpawnerBase* Spawner);
	void RecordProgress();
	void ReadySpawn();
	bool PreCheck();
	void OrderSpawnerThinking(float DeltaTime);
	void InitUnit(class APawn* AIPawn, TArray<struct FUnitInitConfig> Configs);
	int GetUnitConfigID(class AActor* Unit);
	TArray<class AActor*> GetAllUnits();
	class ASTSpawnerBase* FindSpawner(uint32_t SpawnerID);
	void EnQueue(class ASTSpawnerBase* Spawner, struct FSTSpawnParam* SpawnParam);
	void CleanQueue();
};


// Class SpawnSystem.STStrategyBase
// 0x00B8 (0x00E0 - 0x0028)
class USTStrategyBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      bShouldCD : 1;                                            // 0x0098(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              ConfigCDDuration;                                         // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASTSpawnerBase*                              OwnerSpawner;                                             // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSTActive : 1;                                            // 0x00A8(0x0001)
	unsigned char                                      bTickEnable : 1;                                          // 0x00A8(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	float                                              CDCounter;                                                // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     OwnerName;                                                // 0x00B0(0x0010) (ZeroConstructor)
	struct FString                                     StrategyName;                                             // 0x00C0(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     StrategySnapshot;                                         // 0x00D0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyBase");
		return pStaticClass;
	}


	void UpdateSnapshot(const struct FString& New);
	void TickStrategy(float DeltaTime);
	void ResetCD();
	void OnStrategyDeactivate();
	void OnStrategyActivate();
	bool IsSTActive();
	bool IsOnCD();
	bool GetTickEnable();
	struct FString GetStrategyDesc();
	struct FString GetSnapshot();
	class ASTSpawnerBase* GetOwnerSpawner();
	void DeactivateStrategy();
	float CDRemaining();
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class SpawnSystem.STStrategyLocation
// 0x0020 (0x0100 - 0x00E0)
class USTStrategyLocation : public USTStrategyBase
{
public:
	struct FScriptDelegate                             OnGenerateSpawnLocationDelegate;                          // 0x00E0(0x0010) (ZeroConstructor, InstancedReference)
	TArray<struct FSpawnSpotInfo>                      CacheSpotInfosArray;                                      // 0x00F0(0x0010) (BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyLocation");
		return pStaticClass;
	}


	bool GetSpawnLocation(class AActor* Requester, int ReferenceCount, TArray<struct FSpawnSpotInfo>* OutArr);
};


// Class SpawnSystem.STStrategySpecies
// 0x0030 (0x0110 - 0x00E0)
class USTStrategySpecies : public USTStrategyBase
{
public:
	unsigned char                                      bUseLuaConfigs : 1;                                       // 0x00E0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	class USTSpeciesDataAsset*                         SpeciesData;                                              // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             SupplySpawnSpeciesDelegate;                               // 0x00F0(0x0010) (ZeroConstructor, InstancedReference)
	TArray<struct FUnitConfig>                         CacheSpeciesArray;                                        // 0x0100(0x0010) (BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategySpecies");
		return pStaticClass;
	}


	TArray<struct FUnitConfig> Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies);
	TArray<int> GeAllCacheConfigIDs();
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class SpawnSystem.STStrategyTiming
// 0x0010 (0x00F0 - 0x00E0)
class USTStrategyTiming : public USTStrategyBase
{
public:
	struct FScriptMulticastDelegate                    OnSpawnTimingUp;                                          // 0x00E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyTiming");
		return pStaticClass;
	}


	void TimeIsRipe();
};


// Class SpawnSystem.SpawnSystemSettings
// 0x0018 (0x0050 - 0x0038)
class USpawnSystemSettings : public UDeveloperSettings
{
public:
	float                                              TickFrequency;                                            // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              SpawnUnitInterval;                                        // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                TickingSpawnerThreshold;                                  // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShouldSpawnSystemLogout;                                 // 0x0044(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	int                                                MaxWaitSpawnQueSize;                                      // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VisualDebugRange;                                         // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.SpawnSystemSettings");
		return pStaticClass;
	}


	class USpawnSystemSettings* Get();
};


// Class SpawnSystem.STSpawnSpot
// 0x0030 (0x0420 - 0x03F0)
class ASTSpawnSpot : public AActor
{
public:
	TArray<struct FUnitInitConfig>                     SpotInitConfig;                                           // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SpotID;                                                   // 0x0400(0x0010) (ZeroConstructor)
	int                                                SpotWeigh;                                                // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESpawnSpotType                                     SpotType;                                                 // 0x0414(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	int                                                SquadIndex;                                               // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UnitIndex;                                                // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STSpawnSpot");
		return pStaticClass;
	}


	bool HasModifySpecies();
	int GetSpotWeigh();
	int GetSpotUnitIndex();
	ESpawnSpotType GetSpotType();
	int GetSpotSquadIndex();
	struct FString GetSpotID();
};


// Class SpawnSystem.STSpawnSystemGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class USTSpawnSystemGameplayStatics : public UGameplayStatics
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STSpawnSystemGameplayStatics");
		return pStaticClass;
	}


	class ASTSpawnerBase* UnitFindSpawner(class UObject* WorldContextObject, int UnitUID);
	struct FVector ProjectPointToFloorWithComplexCollisionCheck(class UObject* WorldContextObject, const struct FVector& Origin, bool bCheckComplex, float OffsetHeight, bool* bOutHit);
	bool IsEditor();
};


// Class SpawnSystem.STSpawnVisualDebug
// 0x00B8 (0x00E0 - 0x0028)
class USTSpawnVisualDebug : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STSpawnVisualDebug");
		return pStaticClass;
	}


	class USTSpawnVisualDebug* Get();
};


// Class SpawnSystem.STSpeciesDataAsset
// 0x0040 (0x0070 - 0x0030)
class USTSpeciesDataAsset : public UDataAsset
{
public:
	TArray<struct FUnitConfig>                         UnitConfig;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FSquadConfig>                        SquadConfig;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FGroupConfig>                        GroupConfig;                                              // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FSpeciesRatioStruct>                 RatioConfig;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STSpeciesDataAsset");
		return pStaticClass;
	}

};


// Class SpawnSystem.STStrategyCond
// 0x0000 (0x00E0 - 0x00E0)
class USTStrategyCond : public USTStrategyBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyCond");
		return pStaticClass;
	}


	bool LuaCheckCondition();
	bool CheckCondition();
};


// Class SpawnSystem.STStrategyCond_Hide
// 0x0028 (0x0108 - 0x00E0)
class USTStrategyCond_Hide : public USTStrategyCond
{
public:
	float                                              Radius;                                                   // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CharacterFOV;                                             // 0x00E8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      bUseLineTrace : 1;                                        // 0x00F4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	class UClass*                                      ClassFilter;                                              // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseSpawnerLoc : 1;                                       // 0x0100(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0101(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyCond_Hide");
		return pStaticClass;
	}


	bool CheckCondition();
};


// Class SpawnSystem.STStrategyCond_Quantity
// 0x0010 (0x00F0 - 0x00E0)
class USTStrategyCond_Quantity : public USTStrategyCond
{
public:
	unsigned char                                      bLimitAlive : 1;                                          // 0x00E0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCustomQuantity : 1;                                      // 0x00E0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	int                                                ThresholdQuantity;                                        // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AliveNumberLimit;                                         // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyCond_Quantity");
		return pStaticClass;
	}


	bool CheckCondition();
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class SpawnSystem.STStrategyLocation_Root
// 0x0000 (0x0100 - 0x0100)
class USTStrategyLocation_Root : public USTStrategyLocation
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyLocation_Root");
		return pStaticClass;
	}


	bool GetSpawnLocation(class AActor* Requester, int ReferenceCount, TArray<struct FSpawnSpotInfo>* OutArr);
};


// Class SpawnSystem.STStrategyLocation_Spots
// 0x0000 (0x0100 - 0x0100)
class USTStrategyLocation_Spots : public USTStrategyLocation
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyLocation_Spots");
		return pStaticClass;
	}


	bool GetSpawnLocation(class AActor* Requester, int ReferenceCount, TArray<struct FSpawnSpotInfo>* OutArr);
};


// Class SpawnSystem.STStrategySpecies_SquadRatio
// 0x0058 (0x0168 - 0x0110)
class USTStrategySpecies_SquadRatio : public USTStrategySpecies
{
public:
	int                                                RatioIndex;                                               // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x0114(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategySpecies_SquadRatio");
		return pStaticClass;
	}


	TArray<struct FUnitConfig> Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies);
	void ReadSquadRatios(int ReferencedCount, TArray<struct FUnitRatio> RatioConfig);
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class SpawnSystem.STStrategySpecies_Static
// 0x0020 (0x0130 - 0x0110)
class USTStrategySpecies_Static : public USTStrategySpecies
{
public:
	EReadSpeciesData                                   HowDataRead;                                              // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	int                                                GroupIndex;                                               // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SquadIndex;                                               // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                UnitIndex;                                                // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategySpecies_Static");
		return pStaticClass;
	}


	void WeightedReadUnit(int ReferencedCount, TArray<struct FUnitConfig> Units);
	void WeightedReadSquad(int ReferencedCount, const struct FSquadConfig& SquadConfig, TArray<struct FUnitConfig> Units);
	void WeightedReadGroup(int ReferencedCount, const struct FGroupConfig& GroupConfig, TArray<struct FSquadConfig> Squads, TArray<struct FUnitConfig> Units);
	TArray<struct FUnitConfig> Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies);
	void ReadSpotSpecies(TArray<struct FSpawnSpotInfo> SpotSpecies, TArray<struct FSquadConfig> Squads, TArray<struct FUnitConfig> Units, int* ReferencedCount);
	void OrderedReadUnit(int ReferencedCount, TArray<struct FUnitConfig> Units);
	void OrderedReadSquad(int ReferencedCount, const struct FSquadConfig& SquadConfig, TArray<struct FUnitConfig> Units);
	void OrderedReadGroup(int ReferencedCount, const struct FGroupConfig& GroupConfig, TArray<struct FSquadConfig> Squads, TArray<struct FUnitConfig> Units);
	void ManuallyReadUnit(int ReferencedCount, int Index, TArray<struct FUnitConfig> Units);
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class SpawnSystem.STStrategyTiming_Period
// 0x0020 (0x0110 - 0x00F0)
class USTStrategyTiming_Period : public USTStrategyTiming
{
public:
	unsigned char                                      bFirstDelay : 1;                                          // 0x00F0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	float                                              FirstDelayDuration;                                       // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PeriodDuration;                                           // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x00FC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyTiming_Period");
		return pStaticClass;
	}


	void TickStrategy(float DeltaTime);
	void OnReachTimer();
	void OnFirstDelay();
	void DeactivateStrategy();
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class SpawnSystem.STStrategyTiming_Trigger
// 0x0020 (0x0110 - 0x00F0)
class USTStrategyTiming_Trigger : public USTStrategyTiming
{
public:
	ESTSpawnerVolume                                   VolumeType;                                               // 0x00F0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	struct FVector                                     CenterLocation;                                           // 0x00F4(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              SphereRadius;                                             // 0x0100(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // 0x0104(0x000C) (BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyTiming_Trigger");
		return pStaticClass;
	}


	void TickStrategy(float DeltaTime);
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class SpawnSystem.STStrategyTiming_Wave
// 0x0040 (0x0130 - 0x00F0)
class USTStrategyTiming_Wave : public USTStrategyTiming
{
public:
	TArray<int>                                        ConfigWaveAlive;                                          // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                WaveInterval;                                             // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bTriggerToStart : 1;                                      // 0x0104(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDelayToStart : 1;                                        // 0x0104(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	int                                                DelayDurationToStart;                                     // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class USTStrategyTiming_Trigger*                   TriggerHelper;                                            // 0x0110(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                CurrentWave;                                              // 0x0118(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x011C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyTiming_Wave");
		return pStaticClass;
	}


	void TickStrategy(float DeltaTime);
	void ResetCD();
	void OnTriggerToStartWave(bool IsRipe);
	void OnDelayToStartWave();
	int GetCurrentWave();
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


}

