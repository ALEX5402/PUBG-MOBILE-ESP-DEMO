#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AI.AESpawner.SwitchTeamAI
struct AAESpawner_SwitchTeamAI_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AESpawner.OnUnitSpawned
struct AAESpawner_OnUnitSpawned_Params
{
	uint32_t                                           InSpawnerID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       AIPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ConfigId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AESpawner.OnSpawnTimingRipe
struct AAESpawner_OnSpawnTimingRipe_Params
{
	bool                                               IsRipe;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AESpawner.OnOwnedMobDead
struct AAESpawner_OnOwnedMobDead_Params
{
	class ASTExtraSimpleCharacter*                     DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  KillingHitInfo;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     KillingHitImpulseDir;                                     // (Parm, IsPlainOldData)
	class UClass*                                      KillingHitDamageType;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AESpawner.OnOwnedFakePlayerDead
struct AAESpawner_OnOwnedFakePlayerDead_Params
{
	class ASTExtraBaseCharacter*                       DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  KillingHitInfo;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     KillingHitImpulseDir;                                     // (Parm, IsPlainOldData)
	class UClass*                                      KillingHitDamageType;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AESpawner.GetSpeciesCategory
struct AAESpawner_GetSpeciesCategory_Params
{
	TEnumAsByte<EBotCategray>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AESpawner.GetSpawnerTeamID
struct AAESpawner_GetSpawnerTeamID_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AESpawner.GenerateParamID
struct AAESpawner_GenerateParamID_Params
{
	int                                                ConfigId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BaseParamID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AESpawner.DeactivateSpawner
struct AAESpawner_DeactivateSpawner_Params
{
};

// Function AI.AESpawner.BPOnUnitSpawned
struct AAESpawner_BPOnUnitSpawned_Params
{
	class APawn*                                       AIPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ConfigId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AESpawner.ActivateSpawner
struct AAESpawner_ActivateSpawner_Params
{
};

// Function AI.AESpawnSubsystem.SpawnUnit
struct UAESpawnSubsystem_SpawnUnit_Params
{
	struct FSTSpawnParam                               SpawnParam;                                               // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AESpawnSubsystem.PreCheck
struct UAESpawnSubsystem_PreCheck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AESpawnSubsystem.GetUnitConfigID
struct UAESpawnSubsystem_GetUnitConfigID_Params
{
	class AActor*                                      Unit;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.UseItem
struct UAIActionExecutionComponent_UseItem_Params
{
	int                                                ItemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.SwapAttachmentItem
struct UAIActionExecutionComponent_SwapAttachmentItem_Params
{
	int                                                ItemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SourceWeaponSlot;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetWeaponSlot;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.SetGrenadeLastSelectID
struct UAIActionExecutionComponent_SetGrenadeLastSelectID_Params
{
	int                                                WeaponID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.SetFocusRotation
struct UAIActionExecutionComponent_SetFocusRotation_Params
{
	float                                              InPitch;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InYaw;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRoll;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.SetCurShootingPose
struct UAIActionExecutionComponent_SetCurShootingPose_Params
{
};

// Function AI.AIActionExecutionComponent.RescueTarget
struct UAIActionExecutionComponent_RescueTarget_Params
{
	class ASTExtraBaseCharacter*                       RescueCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.OpenDoor
struct UAIActionExecutionComponent_OpenDoor_Params
{
};

// Function AI.AIActionExecutionComponent.IsValid
struct UAIActionExecutionComponent_IsValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.IsFreeCamera
struct UAIActionExecutionComponent_IsFreeCamera_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.GetPickActorWithID
struct UAIActionExecutionComponent_GetPickActorWithID_Params
{
	int                                                UId;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class APickUpWrapperActor*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.GetOwnerBaseCharacter
struct UAIActionExecutionComponent_GetOwnerBaseCharacter_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.GetBackpackComponent
struct UAIActionExecutionComponent_GetBackpackComponent_Params
{
	class UBackpackComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.DropItem
struct UAIActionExecutionComponent_DropItem_Params
{
	int                                                ItemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.DoActionMove
struct UAIActionExecutionComponent_DoActionMove_Params
{
	bool                                               IsRun;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DirectionX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DirectionY;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DirectionZ;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.DoActionFreeCamera
struct UAIActionExecutionComponent_DoActionFreeCamera_Params
{
	bool                                               IsEnter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPitch;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InYaw;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRoll;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.DisuseItem
struct UAIActionExecutionComponent_DisuseItem_Params
{
	int                                                ItemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.CloseDoor
struct UAIActionExecutionComponent_CloseDoor_Params
{
};

// Function AI.AISoundCollectionComponent.OnCollectionHearSound
struct UAISoundCollectionComponent_OnCollectionHearSound_Params
{
	ESoundType                                         soundType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InPos;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      InSourceActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AISoundCollectionComponent.GetCollectSoundInfo
struct UAISoundCollectionComponent_GetCollectSoundInfo_Params
{
	TArray<struct FSoundState>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponent.QueryItemStates
struct UAIStateInfoComponent_QueryItemStates_Params
{
	int                                                MaxBoxNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxItemNum;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AirDropBoxRangeInner;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AirDropBoxRangeOuter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeathBoxRange;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PickUpWrapperRange;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FindBuildingRange;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InIsUseItemSpotLoc;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxTreasureChestNum;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TreasureChestRange;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FItemStateData>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponent.OnVehicleDamageInfo
struct UAIStateInfoComponent_OnVehicleDamageInfo_Params
{
	class AController*                                 InstigatorController;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 VictimController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageTypeId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFatalHealthCost;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      VictimVehicle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIStateInfoComponent.OnItemStateChanged
struct UAIStateInfoComponent_OnItemStateChanged_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function AI.AIStateInfoComponent.OnAIStateRequestEnd
struct UAIStateInfoComponent_OnAIStateRequestEnd_Params
{
};

// Function AI.AIStateInfoComponent.OnAirAttackInfo
struct UAIStateInfoComponent_OnAirAttackInfo_Params
{
	TEnumAsByte<EAirAttackInfo>                        airattacktype;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                waveIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAirAttackOrder                             InAirAttackOrder;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     InAirAttackArea;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AI.AIStateInfoComponent.IsValid
struct UAIStateInfoComponent_IsValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIStateInfoComponent.IsAvailableBackpacItemType
struct UAIStateInfoComponent_IsAvailableBackpacItemType_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIStateInfoComponent.HasPlayerAround
struct UAIStateInfoComponent_HasPlayerAround_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIStateInfoComponent.GetViewForwardVector
struct UAIStateInfoComponent_GetViewForwardVector_Params
{
	class ACharacter*                                  InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AI.AIStateInfoComponent.GetVehicleStatus
struct UAIStateInfoComponent_GetVehicleStatus_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       PawnInCar;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVehicleState                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetTLogAIShootInfo
struct UAIStateInfoComponent_GetTLogAIShootInfo_Params
{
	struct FTLogAIShootInfo                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetSoundInfo
struct UAIStateInfoComponent_GetSoundInfo_Params
{
	TArray<struct FSoundState>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetProgressBarState
struct UAIStateInfoComponent_GetProgressBarState_Params
{
	struct FProgressBarState                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetPlayerInteractInfo
struct UAIStateInfoComponent_GetPlayerInteractInfo_Params
{
	struct FAIPlayerInteractInfo                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetPickActorWithID
struct UAIStateInfoComponent_GetPickActorWithID_Params
{
	int                                                UId;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class APickUpWrapperActor*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIStateInfoComponent.GetOwnerBaseCharacter
struct UAIStateInfoComponent_GetOwnerBaseCharacter_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIStateInfoComponent.GetObstaclesState
struct UAIStateInfoComponent_GetObstaclesState_Params
{
	float                                              Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FObstacleState>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetNearbyVehicles
struct UAIStateInfoComponent_GetNearbyVehicles_Params
{
	class ASTExtraBaseCharacter*                       InPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVehicleState>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetFrameNo
struct UAIStateInfoComponent_GetFrameNo_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIStateInfoComponent.GetDoorsState
struct UAIStateInfoComponent_GetDoorsState_Params
{
	float                                              Range;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxNum;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FDoorState>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetDiffAIStateInfo
struct UAIStateInfoComponent_GetDiffAIStateInfo_Params
{
	struct FDiffAIStateInfo                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetDamageSources
struct UAIStateInfoComponent_GetDamageSources_Params
{
	struct FAIDamageSources                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetCameraState
struct UAIStateInfoComponent_GetCameraState_Params
{
	class ASTExtraBaseCharacter*                       InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCameraState                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetAllPlayerStateInfo
struct UAIStateInfoComponent_GetAllPlayerStateInfo_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIStateInfo>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetAIStateInfoInternal
struct UAIStateInfoComponent_GetAIStateInfoInternal_Params
{
	struct FAIStateInfo                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetAIStateInfo
struct UAIStateInfoComponent_GetAIStateInfo_Params
{
	struct FAIStateInfo                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetAIPlayerBackpackItems
struct UAIStateInfoComponent_GetAIPlayerBackpackItems_Params
{
	TArray<struct FAIBackpackItem>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetAINearbyThrownState
struct UAIStateInfoComponent_GetAINearbyThrownState_Params
{
	class ASTExtraBaseCharacter*                       InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRange;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InCheckAngle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InSmokeRange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAINearbyThrown>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponent.ClearVehicleDamageInfo
struct UAIStateInfoComponent_ClearVehicleDamageInfo_Params
{
};

// Function AI.AIStateInfoComponent.ClearPlayerInteractInfo
struct UAIStateInfoComponent_ClearPlayerInteractInfo_Params
{
};

// Function AI.AIStateInfoComponent.ClearDamageSources
struct UAIStateInfoComponent_ClearDamageSources_Params
{
};

// Function AI.CustomDamageEventComponent.OnRep_ClientEvents
struct UCustomDamageEventComponent_OnRep_ClientEvents_Params
{
};

// Function AI.CharacterCustomDamageEventComponent.OnTakeDamageEvent
struct UCharacterCustomDamageEventComponent_OnTakeDamageEvent_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.UnBindDelegates
struct UMLAIControllerComponent_UnBindDelegates_Params
{
	bool                                               IsEndPlay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.SetLuaAIParamConfigString
struct UMLAIControllerComponent_SetLuaAIParamConfigString_Params
{
	struct FString                                     InAIParamConfigString;                                    // (Parm, ZeroConstructor)
};

// Function AI.MLAIControllerComponent.SetCurShootingPose
struct UMLAIControllerComponent_SetCurShootingPose_Params
{
	EAIShootingPose                                    InCurAIShootingPose;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.RestartFightBehaviorTree
struct UMLAIControllerComponent_RestartFightBehaviorTree_Params
{
};

// Function AI.MLAIControllerComponent.IsValid
struct UMLAIControllerComponent_IsValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.IsFreeCamera
struct UMLAIControllerComponent_IsFreeCamera_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.GetViewRotation
struct UMLAIControllerComponent_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.GetViewForwardVector
struct UMLAIControllerComponent_GetViewForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.GetOwnerBaseCharacter
struct UMLAIControllerComponent_GetOwnerBaseCharacter_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.GetBackpackComponent
struct UMLAIControllerComponent_GetBackpackComponent_Params
{
	class UBackpackComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.GetAIStateInfoComp
struct UMLAIControllerComponent_GetAIStateInfoComp_Params
{
	class UAIStateInfoComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.GetAIActionExecutionComp
struct UMLAIControllerComponent_GetAIActionExecutionComp_Params
{
	class UAIActionExecutionComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.DoActionFreeCamera
struct UMLAIControllerComponent_DoActionFreeCamera_Params
{
	bool                                               IsEnter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPitch;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InYaw;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRoll;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.CheckCameraViewPitchLimit
struct UMLAIControllerComponent_CheckCameraViewPitchLimit_Params
{
	struct FRotator                                    InOutTargetRot;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.BindDelegates
struct UMLAIControllerComponent_BindDelegates_Params
{
};

// Function AI.MLAISubSystem.StartRequestCache
struct UMLAISubSystem_StartRequestCache_Params
{
};

// Function AI.MLAISubSystem.SetSpecialZoneCustomState
struct UMLAISubSystem_SetSpecialZoneCustomState_Params
{
	class AActor*                                      InParent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InCustomState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAISubSystem.OnVehicleDamageInfo
struct UMLAISubSystem_OnVehicleDamageInfo_Params
{
	class AController*                                 InstigatorController;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 VictimController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageTypeId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFatalHealthCost;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      VictimVehicle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAISubSystem.OnPlayerDamageInfo
struct UMLAISubSystem_OnPlayerDamageInfo_Params
{
	class ASTExtraPlayerState*                         InstigatorPlayerState;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerState*                         VictimPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              DamageBeforeCalArmor;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFatalHealthCost;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAISubSystem.OnItemStateChanged
struct UMLAISubSystem_OnItemStateChanged_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function AI.MLAISubSystem.IsAIBotGame
struct UMLAISubSystem_IsAIBotGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.MLAISubSystem.EndRequestCache
struct UMLAISubSystem_EndRequestCache_Params
{
};

// Function AI.MLAITrainingComponent.StopRunnable
struct UMLAITrainingComponent_StopRunnable_Params
{
};

// Function AI.MLAITrainingComponent.SetPauseGamePlayerState
struct UMLAITrainingComponent_SetPauseGamePlayerState_Params
{
	class APlayerState*                                InPlayerState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAITrainingComponent.SetPause
struct UMLAITrainingComponent_SetPause_Params
{
	bool                                               bInPause;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPauseTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.MLAITrainingComponent.SendAIStateRequest
struct UMLAITrainingComponent_SendAIStateRequest_Params
{
	TArray<unsigned char>                              Packet;                                                   // (Parm, ZeroConstructor)
};

// Function AI.MLAITrainingComponent.IsRequestAIState
struct UMLAITrainingComponent_IsRequestAIState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.MLAITrainingComponent.InitRunnable
struct UMLAITrainingComponent_InitRunnable_Params
{
	float                                              InStartCollectingInterval;                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InSendInterval;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTimeOutInterval;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAITrainingComponent.EndRequestAIState
struct UMLAITrainingComponent_EndRequestAIState_Params
{
};

// Function AI.SpecialZoneActor.UpdateCustomState
struct ASpecialZoneActor_UpdateCustomState_Params
{
	int                                                InCustomState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.SpecialZoneActor.GetSpecialZoneState
struct ASpecialZoneActor_GetSpecialZoneState_Params
{
	struct FSpecialZoneState                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.STStrategyLocation_Range.ModifyBaseLocation
struct USTStrategyLocation_Range_ModifyBaseLocation_Params
{
	struct FVector                                     InLocation;                                               // (Parm, IsPlainOldData)
};

// Function AI.STStrategyLocation_Range.GetSpawnLocation
struct USTStrategyLocation_Range_GetSpawnLocation_Params
{
	class AActor*                                      Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReferenceCount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpawnSpotInfo>                      OutArr;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.STStrategyLocation_Range.AddSpawnArea
struct USTStrategyLocation_Range_AddSpawnArea_Params
{
	struct FSpawnArea                                  NewArea;                                                  // (Parm)
	bool                                               ForceAdd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.STStrategyLocation_Range.ActivateStrategy
struct USTStrategyLocation_Range_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.STStrategySpecies_Candidate.Supply
struct USTStrategySpecies_Candidate_Supply_Params
{
	int                                                ReferencedCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpawnSpotInfo>                      SpotSpecies;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FUnitConfig>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.STStrategySpecies_Candidate.ActivateStrategy
struct USTStrategySpecies_Candidate_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.STStrategySpecies_Lua.Supply
struct USTStrategySpecies_Lua_Supply_Params
{
	int                                                ReferencedCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpawnSpotInfo>                      SpotSpecies;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FUnitConfig>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.STStrategySpecies_Lua.LuaSupply
struct USTStrategySpecies_Lua_LuaSupply_Params
{
	int                                                ReferencedCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.STStrategyTiming_Event.TickStrategy
struct USTStrategyTiming_Event_TickStrategy_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.STStrategyTiming_Event.OnSpawnEventBroadcast
struct USTStrategyTiming_Event_OnSpawnEventBroadcast_Params
{
};

// Function AI.STStrategyTiming_Event.ActivateStrategy
struct USTStrategyTiming_Event_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.VehicleAIUserComponent.ServerVehicleLeanOut
struct UVehicleAIUserComponent_ServerVehicleLeanOut_Params
{
	bool                                               bLeanOut;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.VehicleAIUserComponent.ServerExitVehicle
struct UVehicleAIUserComponent_ServerExitVehicle_Params
{
};

// Function AI.VehicleAIUserComponent.ServerEnterVehicle
struct UVehicleAIUserComponent_ServerEnterVehicle_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.VehicleAIUserComponent.ServerChangeVehicleSeat
struct UVehicleAIUserComponent_ServerChangeVehicleSeat_Params
{
	int                                                InSeatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.VehicleAIUserComponent.MulticastExitVehicle
struct UVehicleAIUserComponent_MulticastExitVehicle_Params
{
};

// Function AI.VehicleAIUserComponent.MulticastEnterVehicle
struct UVehicleAIUserComponent_MulticastEnterVehicle_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerCharacter*                     Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.VehicleAIUserComponent.MulticastChangeVehicleSeat
struct UVehicleAIUserComponent_MulticastChangeVehicleSeat_Params
{
	int                                                InSeatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.VehicleCustomDamageEventComponent.OnVehicleHPFuelChanged
struct UVehicleCustomDamageEventComponent_OnVehicleHPFuelChanged_Params
{
	float                                              HP;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Fuel;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}

