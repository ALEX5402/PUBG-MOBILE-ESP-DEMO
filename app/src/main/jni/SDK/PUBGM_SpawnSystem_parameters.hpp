#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SpawnSystem.STSpawnerBase.Thinking
struct ASTSpawnerBase_Thinking_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.Switch
struct ASTSpawnerBase_Switch_Params
{
	bool                                               IsSwitchOn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.SetSpawnerID
struct ASTSpawnerBase_SetSpawnerID_Params
{
	uint32_t                                           ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.OnUnitSpawned
struct ASTSpawnerBase_OnUnitSpawned_Params
{
	uint32_t                                           InSpawnerID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       AIPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ConfigId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.OnUnitDead
struct ASTSpawnerBase_OnUnitDead_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.OnSpawnTimingRipe
struct ASTSpawnerBase_OnSpawnTimingRipe_Params
{
	bool                                               IsRipe;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.OnSpawnerDeactivate
struct ASTSpawnerBase_OnSpawnerDeactivate_Params
{
};

// Function SpawnSystem.STSpawnerBase.OnSpawnerActivate
struct ASTSpawnerBase_OnSpawnerActivate_Params
{
};

// Function SpawnSystem.STSpawnerBase.OnRep_SpawnerID
struct ASTSpawnerBase_OnRep_SpawnerID_Params
{
};

// Function SpawnSystem.STSpawnerBase.Multicast_SpawnerSnapshot
struct ASTSpawnerBase_Multicast_SpawnerSnapshot_Params
{
	struct FString                                     Timing;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Species;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Location;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Conditions;                                               // (Parm, ZeroConstructor)
	struct FString                                     extra;                                                    // (Parm, ZeroConstructor)
};

// Function SpawnSystem.STSpawnerBase.Multicast_AlivePawnsChange
struct ASTSpawnerBase_Multicast_AlivePawnsChange_Params
{
	class APawn*                                       Unit;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBorn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAllDead;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.ModifyMaxAlive
struct ASTSpawnerBase_ModifyMaxAlive_Params
{
	int                                                NewAlive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.IsInitialized
struct ASTSpawnerBase_IsInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.IsActive
struct ASTSpawnerBase_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.InitSpawner
struct ASTSpawnerBase_InitSpawner_Params
{
};

// Function SpawnSystem.STSpawnerBase.GetTotalSpawnedNum
struct ASTSpawnerBase_GetTotalSpawnedNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.GetSpawnSystem
struct ASTSpawnerBase_GetSpawnSystem_Params
{
	class USTSpawnSubsystem*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.GetSpawnSpots
struct ASTSpawnerBase_GetSpawnSpots_Params
{
	TArray<class ASTSpawnSpot*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SpawnSystem.STSpawnerBase.GetSpawnRadius
struct ASTSpawnerBase_GetSpawnRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.GetSpawnLocation
struct ASTSpawnerBase_GetSpawnLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.GetSpawnExtent
struct ASTSpawnerBase_GetSpawnExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.GetSpawnerSnapshot
struct ASTSpawnerBase_GetSpawnerSnapshot_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SpawnSystem.STSpawnerBase.GetSpawnerID
struct ASTSpawnerBase_GetSpawnerID_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.GetSpawnerDesc
struct ASTSpawnerBase_GetSpawnerDesc_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SpawnSystem.STSpawnerBase.GetReferencedCount
struct ASTSpawnerBase_GetReferencedCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.GetMaxUnits
struct ASTSpawnerBase_GetMaxUnits_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.GetMaxAlive
struct ASTSpawnerBase_GetMaxAlive_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.GetAliveUnits
struct ASTSpawnerBase_GetAliveUnits_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SpawnSystem.STSpawnerBase.FindSpot
struct ASTSpawnerBase_FindSpot_Params
{
	struct FString                                     SpotID;                                                   // (Parm, ZeroConstructor)
	class ASTSpawnSpot*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.DeactivateSpawner
struct ASTSpawnerBase_DeactivateSpawner_Params
{
};

// Function SpawnSystem.STSpawnerBase.CheckTriggerGuest
struct ASTSpawnerBase_CheckTriggerGuest_Params
{
	class AActor*                                      Guest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.CheckOwnedUnit
struct ASTSpawnerBase_CheckOwnedUnit_Params
{
	class AActor*                                      InUnit;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnerBase.AnalyseConfigData
struct ASTSpawnerBase_AnalyseConfigData_Params
{
};

// Function SpawnSystem.STSpawnerBase.ActivateSpawner
struct ASTSpawnerBase_ActivateSpawner_Params
{
};

// Function SpawnSystem.STSpawnSubsystem.UnregisterSpawner
struct USTSpawnSubsystem_UnregisterSpawner_Params
{
	class ASTSpawnerBase*                              Spawner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STSpawnSubsystem.UnitFindSpawner
struct USTSpawnSubsystem_UnitFindSpawner_Params
{
	int                                                UnitUID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTSpawnerBase*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnSubsystem.SpawnUnit
struct USTSpawnSubsystem_SpawnUnit_Params
{
	struct FSTSpawnParam                               SpawnParam;                                               // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnSubsystem.RegisterSpawner
struct USTSpawnSubsystem_RegisterSpawner_Params
{
	class ASTSpawnerBase*                              Spawner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STSpawnSubsystem.RecordProgress
struct USTSpawnSubsystem_RecordProgress_Params
{
};

// Function SpawnSystem.STSpawnSubsystem.ReadySpawn
struct USTSpawnSubsystem_ReadySpawn_Params
{
};

// Function SpawnSystem.STSpawnSubsystem.PreCheck
struct USTSpawnSubsystem_PreCheck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnSubsystem.OrderSpawnerThinking
struct USTSpawnSubsystem_OrderSpawnerThinking_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STSpawnSubsystem.InitUnit
struct USTSpawnSubsystem_InitUnit_Params
{
	class APawn*                                       AIPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FUnitInitConfig>                     Configs;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SpawnSystem.STSpawnSubsystem.GetUnitConfigID
struct USTSpawnSubsystem_GetUnitConfigID_Params
{
	class AActor*                                      Unit;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnSubsystem.GetAllUnits
struct USTSpawnSubsystem_GetAllUnits_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SpawnSystem.STSpawnSubsystem.FindSpawner
struct USTSpawnSubsystem_FindSpawner_Params
{
	uint32_t                                           SpawnerID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTSpawnerBase*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnSubsystem.EnQueue
struct USTSpawnSubsystem_EnQueue_Params
{
	struct FSTSpawnParam                               SpawnParam;                                               // (Parm, OutParm)
	class ASTSpawnerBase*                              Spawner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STSpawnSubsystem.CleanQueue
struct USTSpawnSubsystem_CleanQueue_Params
{
};

// Function SpawnSystem.STStrategyBase.UpdateSnapshot
struct USTStrategyBase_UpdateSnapshot_Params
{
	struct FString                                     New;                                                      // (Parm, ZeroConstructor)
};

// Function SpawnSystem.STStrategyBase.TickStrategy
struct USTStrategyBase_TickStrategy_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STStrategyBase.ResetCD
struct USTStrategyBase_ResetCD_Params
{
};

// Function SpawnSystem.STStrategyBase.OnStrategyDeactivate
struct USTStrategyBase_OnStrategyDeactivate_Params
{
};

// Function SpawnSystem.STStrategyBase.OnStrategyActivate
struct USTStrategyBase_OnStrategyActivate_Params
{
};

// Function SpawnSystem.STStrategyBase.IsSTActive
struct USTStrategyBase_IsSTActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STStrategyBase.IsOnCD
struct USTStrategyBase_IsOnCD_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STStrategyBase.GetTickEnable
struct USTStrategyBase_GetTickEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STStrategyBase.GetStrategyDesc
struct USTStrategyBase_GetStrategyDesc_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SpawnSystem.STStrategyBase.GetSnapshot
struct USTStrategyBase_GetSnapshot_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SpawnSystem.STStrategyBase.GetOwnerSpawner
struct USTStrategyBase_GetOwnerSpawner_Params
{
	class ASTSpawnerBase*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STStrategyBase.DeactivateStrategy
struct USTStrategyBase_DeactivateStrategy_Params
{
};

// Function SpawnSystem.STStrategyBase.CDRemaining
struct USTStrategyBase_CDRemaining_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STStrategyBase.ActivateStrategy
struct USTStrategyBase_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STStrategyLocation.GetSpawnLocation
struct USTStrategyLocation_GetSpawnLocation_Params
{
	class AActor*                                      Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReferenceCount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpawnSpotInfo>                      OutArr;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STStrategySpecies.Supply
struct USTStrategySpecies_Supply_Params
{
	int                                                ReferencedCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpawnSpotInfo>                      SpotSpecies;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FUnitConfig>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SpawnSystem.STStrategySpecies.GeAllCacheConfigIDs
struct USTStrategySpecies_GeAllCacheConfigIDs_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SpawnSystem.STStrategySpecies.ActivateStrategy
struct USTStrategySpecies_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STStrategyTiming.TimeIsRipe
struct USTStrategyTiming_TimeIsRipe_Params
{
};

// Function SpawnSystem.SpawnSystemSettings.Get
struct USpawnSystemSettings_Get_Params
{
	class USpawnSystemSettings*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnSpot.HasModifySpecies
struct ASTSpawnSpot_HasModifySpecies_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnSpot.GetSpotWeigh
struct ASTSpawnSpot_GetSpotWeigh_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnSpot.GetSpotUnitIndex
struct ASTSpawnSpot_GetSpotUnitIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnSpot.GetSpotType
struct ASTSpawnSpot_GetSpotType_Params
{
	ESpawnSpotType                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnSpot.GetSpotSquadIndex
struct ASTSpawnSpot_GetSpotSquadIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnSpot.GetSpotID
struct ASTSpawnSpot_GetSpotID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SpawnSystem.STSpawnSystemGameplayStatics.UnitFindSpawner
struct USTSpawnSystemGameplayStatics_UnitFindSpawner_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                UnitUID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTSpawnerBase*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnSystemGameplayStatics.ProjectPointToFloorWithComplexCollisionCheck
struct USTSpawnSystemGameplayStatics_ProjectPointToFloorWithComplexCollisionCheck_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bOutHit;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OffsetHeight;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnSystemGameplayStatics.IsEditor
struct USTSpawnSystemGameplayStatics_IsEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STSpawnVisualDebug.Get
struct USTSpawnVisualDebug_Get_Params
{
	class USTSpawnVisualDebug*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STStrategyCond.LuaCheckCondition
struct USTStrategyCond_LuaCheckCondition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STStrategyCond.CheckCondition
struct USTStrategyCond_CheckCondition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STStrategyCond_Hide.CheckCondition
struct USTStrategyCond_Hide_CheckCondition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STStrategyCond_Quantity.CheckCondition
struct USTStrategyCond_Quantity_CheckCondition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STStrategyCond_Quantity.ActivateStrategy
struct USTStrategyCond_Quantity_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STStrategyLocation_Root.GetSpawnLocation
struct USTStrategyLocation_Root_GetSpawnLocation_Params
{
	class AActor*                                      Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReferenceCount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpawnSpotInfo>                      OutArr;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STStrategyLocation_Spots.GetSpawnLocation
struct USTStrategyLocation_Spots_GetSpawnLocation_Params
{
	class AActor*                                      Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReferenceCount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpawnSpotInfo>                      OutArr;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STStrategySpecies_SquadRatio.Supply
struct USTStrategySpecies_SquadRatio_Supply_Params
{
	int                                                ReferencedCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpawnSpotInfo>                      SpotSpecies;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FUnitConfig>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SpawnSystem.STStrategySpecies_SquadRatio.ReadSquadRatios
struct USTStrategySpecies_SquadRatio_ReadSquadRatios_Params
{
	int                                                ReferencedCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FUnitRatio>                          RatioConfig;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SpawnSystem.STStrategySpecies_SquadRatio.ActivateStrategy
struct USTStrategySpecies_SquadRatio_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STStrategySpecies_Static.WeightedReadUnit
struct USTStrategySpecies_Static_WeightedReadUnit_Params
{
	int                                                ReferencedCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FUnitConfig>                         Units;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SpawnSystem.STStrategySpecies_Static.WeightedReadSquad
struct USTStrategySpecies_Static_WeightedReadSquad_Params
{
	int                                                ReferencedCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSquadConfig                                SquadConfig;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FUnitConfig>                         Units;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SpawnSystem.STStrategySpecies_Static.WeightedReadGroup
struct USTStrategySpecies_Static_WeightedReadGroup_Params
{
	int                                                ReferencedCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGroupConfig                                GroupConfig;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FSquadConfig>                        Squads;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FUnitConfig>                         Units;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SpawnSystem.STStrategySpecies_Static.Supply
struct USTStrategySpecies_Static_Supply_Params
{
	int                                                ReferencedCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpawnSpotInfo>                      SpotSpecies;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FUnitConfig>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SpawnSystem.STStrategySpecies_Static.ReadSpotSpecies
struct USTStrategySpecies_Static_ReadSpotSpecies_Params
{
	int                                                ReferencedCount;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpawnSpotInfo>                      SpotSpecies;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSquadConfig>                        Squads;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FUnitConfig>                         Units;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SpawnSystem.STStrategySpecies_Static.OrderedReadUnit
struct USTStrategySpecies_Static_OrderedReadUnit_Params
{
	int                                                ReferencedCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FUnitConfig>                         Units;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SpawnSystem.STStrategySpecies_Static.OrderedReadSquad
struct USTStrategySpecies_Static_OrderedReadSquad_Params
{
	int                                                ReferencedCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSquadConfig                                SquadConfig;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FUnitConfig>                         Units;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SpawnSystem.STStrategySpecies_Static.OrderedReadGroup
struct USTStrategySpecies_Static_OrderedReadGroup_Params
{
	int                                                ReferencedCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGroupConfig                                GroupConfig;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FSquadConfig>                        Squads;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FUnitConfig>                         Units;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SpawnSystem.STStrategySpecies_Static.ManuallyReadUnit
struct USTStrategySpecies_Static_ManuallyReadUnit_Params
{
	int                                                ReferencedCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FUnitConfig>                         Units;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SpawnSystem.STStrategySpecies_Static.ActivateStrategy
struct USTStrategySpecies_Static_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STStrategyTiming_Period.TickStrategy
struct USTStrategyTiming_Period_TickStrategy_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STStrategyTiming_Period.OnReachTimer
struct USTStrategyTiming_Period_OnReachTimer_Params
{
};

// Function SpawnSystem.STStrategyTiming_Period.OnFirstDelay
struct USTStrategyTiming_Period_OnFirstDelay_Params
{
};

// Function SpawnSystem.STStrategyTiming_Period.DeactivateStrategy
struct USTStrategyTiming_Period_DeactivateStrategy_Params
{
};

// Function SpawnSystem.STStrategyTiming_Period.ActivateStrategy
struct USTStrategyTiming_Period_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STStrategyTiming_Trigger.TickStrategy
struct USTStrategyTiming_Trigger_TickStrategy_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STStrategyTiming_Trigger.ActivateStrategy
struct USTStrategyTiming_Trigger_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STStrategyTiming_Wave.TickStrategy
struct USTStrategyTiming_Wave_TickStrategy_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STStrategyTiming_Wave.ResetCD
struct USTStrategyTiming_Wave_ResetCD_Params
{
};

// Function SpawnSystem.STStrategyTiming_Wave.OnTriggerToStartWave
struct USTStrategyTiming_Wave_OnTriggerToStartWave_Params
{
	bool                                               IsRipe;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpawnSystem.STStrategyTiming_Wave.OnDelayToStartWave
struct USTStrategyTiming_Wave_OnDelayToStartWave_Params
{
};

// Function SpawnSystem.STStrategyTiming_Wave.GetCurrentWave
struct USTStrategyTiming_Wave_GetCurrentWave_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpawnSystem.STStrategyTiming_Wave.ActivateStrategy
struct USTStrategyTiming_Wave_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

