#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Addons.AssetPlayerSyncNode.SetGroupTimer
struct UAssetPlayerSyncNode_SetGroupTimer_Params
{
	struct FName                                       GroupName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InternalTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.AssetPlayerSyncNode.SetGroupIndex
struct UAssetPlayerSyncNode_SetGroupIndex_Params
{
	struct FName                                       GroupName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.AssetPlayerSyncNode.GetGroupTime
struct UAssetPlayerSyncNode_GetGroupTime_Params
{
	struct FName                                       GroupName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.AssetPlayerSyncNode.GetGroupIndex
struct UAssetPlayerSyncNode_GetGroupIndex_Params
{
	struct FName                                       GroupName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleAnimInstanceBase.UpdateTerrainAdapting
struct UBioVehicleAnimInstanceBase_UpdateTerrainAdapting_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleAnimInstanceBase.TraceQuery
struct UBioVehicleAnimInstanceBase_TraceQuery_Params
{
};

// Function Addons.BioVehicleAnimInstanceBase.NotifyDriverToDoTransition
struct UBioVehicleAnimInstanceBase_NotifyDriverToDoTransition_Params
{
	struct FString                                     ToStateMachineName;                                       // (Parm, ZeroConstructor)
};

// Function Addons.BioVehicleAnimInstanceBase.LuaOnAnimLodChanged
struct UBioVehicleAnimInstanceBase_LuaOnAnimLodChanged_Params
{
	int                                                NewAnimLod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleAnimInstanceBase.LuaInitializeWithDeviceLevel
struct UBioVehicleAnimInstanceBase_LuaInitializeWithDeviceLevel_Params
{
	int                                                DeviceLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleAnimInstanceBase.LuaInitializeAnimation
struct UBioVehicleAnimInstanceBase_LuaInitializeAnimation_Params
{
};

// Function Addons.BioVehicleAnimInstanceBase.LuaCacheAnimVarWithAnimList
struct UBioVehicleAnimInstanceBase_LuaCacheAnimVarWithAnimList_Params
{
	class UBioVehicleAnimListComponent*                RiderAnimListComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.BioVehicleAnimInstanceBase.GetDriverAnimInstance
struct UBioVehicleAnimInstanceBase_GetDriverAnimInstance_Params
{
	class UBioVehicleRiderAnimInstanceBase*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleAnimInstanceBase.CacheAnimVarWithAnimList
struct UBioVehicleAnimInstanceBase_CacheAnimVarWithAnimList_Params
{
	class UBioVehicleAnimListComponent*                AnimListComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.BioVehicleAnimInstanceBase.BoneTrace
struct UBioVehicleAnimInstanceBase_BoneTrace_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              UpOffset;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DownOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TraceSphereRadius;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactPoint;                                              // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     ImpactNormal;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.StopJumping
struct ABioVehicleBase_StopJumping_Params
{
};

// Function Addons.BioVehicleBase.SetSimulatePhysics
struct ABioVehicleBase_SetSimulatePhysics_Params
{
	bool                                               bSimulate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.SetReplicateMovement
struct ABioVehicleBase_SetReplicateMovement_Params
{
	bool                                               bInReplicateMovement;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.SetHandBrake
struct ABioVehicleBase_SetHandBrake_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.SetBoosting
struct ABioVehicleBase_SetBoosting_Params
{
	bool                                               bEnalbed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.ServerResetToPosition
struct ABioVehicleBase_ServerResetToPosition_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.OnWalkingOffLedge
struct ABioVehicleBase_OnWalkingOffLedge_Params
{
	struct FVector                                     PreviousFloorImpactNormal;                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     PreviousFloorContactNormal;                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     PreviousLocation;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              TimeDelta;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.OnTakingDamage
struct ABioVehicleBase_OnTakingDamage_Params
{
	class AActor*                                      HitActor;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitInstigator;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.OnRep_ReplicatedBasedMovement
struct ABioVehicleBase_OnRep_ReplicatedBasedMovement_Params
{
};

// Function Addons.BioVehicleBase.OnRep_HasBeenTamed
struct ABioVehicleBase_OnRep_HasBeenTamed_Params
{
};

// Function Addons.BioVehicleBase.OnRep_FuelExhausted
struct ABioVehicleBase_OnRep_FuelExhausted_Params
{
	bool                                               bPrevFuelExhausted;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.OnLaunched
struct ABioVehicleBase_OnLaunched_Params
{
	struct FVector                                     LaunchVelocity;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bXYOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bZOverride;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.OnLanded
struct ABioVehicleBase_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.OnJumped
struct ABioVehicleBase_OnJumped_Params
{
};

// Function Addons.BioVehicleBase.OnExitingVehicleOnServer
struct ABioVehicleBase_OnExitingVehicleOnServer_Params
{
};

// Function Addons.BioVehicleBase.OnEnteringVehicleOnServer
struct ABioVehicleBase_OnEnteringVehicleOnServer_Params
{
	bool                                               IsSucc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.OnAnimListLoadFinished
struct ABioVehicleBase_OnAnimListLoadFinished_Params
{
	class UBioVehicleAnimListComponent*                AnimListComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.BioVehicleBase.MoveUp
struct ABioVehicleBase_MoveUp_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.LaunchCharacter
struct ABioVehicleBase_LaunchCharacter_Params
{
	struct FVector                                     LaunchVelocity;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bXYOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bZOverride;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.K2_UpdateCustomMovement
struct ABioVehicleBase_K2_UpdateCustomMovement_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.K2_OnMovementModeChanged
struct ABioVehicleBase_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.Jump
struct ABioVehicleBase_Jump_Params
{
};

// Function Addons.BioVehicleBase.IsPlayingRootMotion
struct ABioVehicleBase_IsPlayingRootMotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.IsJumpProvidingForce
struct ABioVehicleBase_IsJumpProvidingForce_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.HandleOnRiderAnimInstanceActive
struct ABioVehicleBase_HandleOnRiderAnimInstanceActive_Params
{
	class UAnimInstance*                               ActivedAnimInstance;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.HandleOnClientBeenTamed
struct ABioVehicleBase_HandleOnClientBeenTamed_Params
{
};

// Function Addons.BioVehicleBase.GetVehicleOriginToLand
struct ABioVehicleBase_GetVehicleOriginToLand_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetVehicleBreakOutState
struct ABioVehicleBase_GetVehicleBreakOutState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetRotationInputDir
struct ABioVehicleBase_GetRotationInputDir_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetPlayerLookAtRotation
struct ABioVehicleBase_GetPlayerLookAtRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetConsumeFuelRate
struct ABioVehicleBase_GetConsumeFuelRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetBodyShapeComponent
struct ABioVehicleBase_GetBodyShapeComponent_Params
{
	class UBoxComponent*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetBioVehicleMovement
struct ABioVehicleBase_GetBioVehicleMovement_Params
{
	class UBioVehicleMovementComponent*                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.BioVehicleBase.GetBaseTranslationOffset
struct ABioVehicleBase_GetBaseTranslationOffset_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.ExitVehicle
struct ABioVehicleBase_ExitVehicle_Params
{
};

// Function Addons.BioVehicleBase.EnterVehicle
struct ABioVehicleBase_EnterVehicle_Params
{
	bool                                               IsSucc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.ClientEnterVehicle
struct ABioVehicleBase_ClientEnterVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.CanJumpInternal
struct ABioVehicleBase_CanJumpInternal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.CanJump
struct ABioVehicleBase_CanJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.CanConsumeFuel
struct ABioVehicleBase_CanConsumeFuel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.CanCharacterEnterVehicle
struct ABioVehicleBase_CanCharacterEnterVehicle_Params
{
	class ASTExtraPlayerCharacter*                     InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.CacheInitialMeshOffset
struct ABioVehicleBase_CacheInitialMeshOffset_Params
{
	struct FVector                                     MeshRelativeLocation;                                     // (Parm, IsPlainOldData)
	struct FRotator                                    MeshRelativeRotation;                                     // (Parm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.BroadCastPlayingRandomIdleAnim
struct ABioVehicleBase_BroadCastPlayingRandomIdleAnim_Params
{
	int                                                RandomIdleAnim;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleBase.BPCanCharacterEnterVehicle
struct ABioVehicleBase_BPCanCharacterEnterVehicle_Params
{
	class ASTExtraPlayerCharacter*                     InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleBase.ActiveFootParticleEffect
struct ABioVehicleBase_ActiveFootParticleEffect_Params
{
	struct FName                                       EffectName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActivedLocation;                                          // (Parm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.UnpackAccelerationToInput
struct UBioVehicleMovementComponent_UnpackAccelerationToInput_Params
{
	struct FVector                                     InAccel;                                                  // (Parm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetWalkableFloorZ
struct UBioVehicleMovementComponent_SetWalkableFloorZ_Params
{
	float                                              InWalkableFloorZ;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetWalkableFloorAngle
struct UBioVehicleMovementComponent_SetWalkableFloorAngle_Params
{
	float                                              InWalkableFloorAngle;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetThrottleInput
struct UBioVehicleMovementComponent_SetThrottleInput_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetSteeringInput
struct UBioVehicleMovementComponent_SetSteeringInput_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetRisingInput
struct UBioVehicleMovementComponent_SetRisingInput_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetMovementMode
struct UBioVehicleMovementComponent_SetMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetGroupsToIgnoreMask
struct UBioVehicleMovementComponent_SetGroupsToIgnoreMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetGroupsToIgnore
struct UBioVehicleMovementComponent_SetGroupsToIgnore_Params
{
	int                                                GroupFlags;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetGroupsToAvoidMask
struct UBioVehicleMovementComponent_SetGroupsToAvoidMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetGroupsToAvoid
struct UBioVehicleMovementComponent_SetGroupsToAvoid_Params
{
	int                                                GroupFlags;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetAvoidanceGroupMask
struct UBioVehicleMovementComponent_SetAvoidanceGroupMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetAvoidanceGroup
struct UBioVehicleMovementComponent_SetAvoidanceGroup_Params
{
	int                                                GroupFlags;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetAvoidanceEnabled
struct UBioVehicleMovementComponent_SetAvoidanceEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.SetAcceptInput
struct UBioVehicleMovementComponent_SetAcceptInput_Params
{
	bool                                               bIsAccept;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerSetThrottleInput
struct UBioVehicleMovementComponent_ServerSetThrottleInput_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerSetSteeringInput
struct UBioVehicleMovementComponent_ServerSetSteeringInput_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerSetRisingInput
struct UBioVehicleMovementComponent_ServerSetRisingInput_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerMoveOld
struct UBioVehicleMovementComponent_ServerMoveOld_Params
{
	float                                              OldTimeStamp;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       OldAccel;                                                 // (Parm)
	unsigned char                                      OldMoveFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerMoveDualHybridRootMotion
struct UBioVehicleMovementComponent_ServerMoveDualHybridRootMotion_Params
{
	float                                              TimeStamp0;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel0;                                                 // (Parm)
	unsigned char                                      PendingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	unsigned char                                      NewFlags;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ClientMovementBase;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientBaseBoneName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerMoveDual
struct UBioVehicleMovementComponent_ServerMoveDual_Params
{
	float                                              TimeStamp0;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel0;                                                 // (Parm)
	unsigned char                                      PendingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	unsigned char                                      NewFlags;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ClientMovementBase;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientBaseBoneName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ServerMove
struct UBioVehicleMovementComponent_ServerMove_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	unsigned char                                      CompressedMoveFlags;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientRoll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ClientMovementBase;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientBaseBoneName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.PackInputToAcceleration
struct UBioVehicleMovementComponent_PackInputToAcceleration_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.K2_GetWalkableFloorZ
struct UBioVehicleMovementComponent_K2_GetWalkableFloorZ_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.K2_GetWalkableFloorAngle
struct UBioVehicleMovementComponent_K2_GetWalkableFloorAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.K2_GetModifiedMaxAcceleration
struct UBioVehicleMovementComponent_K2_GetModifiedMaxAcceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.K2_FindFloor
struct UBioVehicleMovementComponent_K2_FindFloor_Params
{
	struct FVector                                     CapsuleLocation;                                          // (Parm, IsPlainOldData)
	struct FFindFloorResult                            FloorResult;                                              // (Parm, OutParm)
};

// Function Addons.BioVehicleMovementComponent.K2_ComputeFloorDist
struct UBioVehicleMovementComponent_K2_ComputeFloorDist_Params
{
	struct FVector                                     CapsuleLocation;                                          // (Parm, IsPlainOldData)
	float                                              LineDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SweepDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SweepRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFindFloorResult                            FloorResult;                                              // (Parm, OutParm)
};

// Function Addons.BioVehicleMovementComponent.IsWalking
struct UBioVehicleMovementComponent_IsWalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.IsWalkable
struct UBioVehicleMovementComponent_IsWalkable_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.IsSwimming
struct UBioVehicleMovementComponent_IsSwimming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.IsSeriousInjuriedAllowJumping
struct UBioVehicleMovementComponent_IsSeriousInjuriedAllowJumping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.HandleOnSeatDetached
struct UBioVehicleMovementComponent_HandleOnSeatDetached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.HandleOnSeatChanged
struct UBioVehicleMovementComponent_HandleOnSeatChanged_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            LastSeatType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LastSeatIdx;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            NewSeatType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewSeatIdx;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.HandleOnSeatAttached
struct UBioVehicleMovementComponent_HandleOnSeatAttached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.HandleOnExitVehicleAnim
struct UBioVehicleMovementComponent_HandleOnExitVehicleAnim_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatInx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetWalkingDecResistance
struct UBioVehicleMovementComponent_GetWalkingDecResistance_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetWalkingAccResistance
struct UBioVehicleMovementComponent_GetWalkingAccResistance_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetValidPerchRadius
struct UBioVehicleMovementComponent_GetValidPerchRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetThrottleInput
struct UBioVehicleMovementComponent_GetThrottleInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetSteeringInput
struct UBioVehicleMovementComponent_GetSteeringInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetSlopeSpeedFactor
struct UBioVehicleMovementComponent_GetSlopeSpeedFactor_Params
{
	float                                              Slope;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetRisingInput
struct UBioVehicleMovementComponent_GetRisingInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetPredictVelocity
struct UBioVehicleMovementComponent_GetPredictVelocity_Params
{
	float                                              PredictTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetPerchRadiusThreshold
struct UBioVehicleMovementComponent_GetPerchRadiusThreshold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetMovementBase
struct UBioVehicleMovementComponent_GetMovementBase_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetMinAnalogSpeed
struct UBioVehicleMovementComponent_GetMinAnalogSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetMaxJumpHeightWithJumpTime
struct UBioVehicleMovementComponent_GetMaxJumpHeightWithJumpTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetMaxJumpHeight
struct UBioVehicleMovementComponent_GetMaxJumpHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetMaxBrakingDeceleration
struct UBioVehicleMovementComponent_GetMaxBrakingDeceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetMaxAcceleration
struct UBioVehicleMovementComponent_GetMaxAcceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetJumpVelocityZ
struct UBioVehicleMovementComponent_GetJumpVelocityZ_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetJumpingHeightBySpeed
struct UBioVehicleMovementComponent_GetJumpingHeightBySpeed_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetJumpingHeightByObsHeight
struct UBioVehicleMovementComponent_GetJumpingHeightByObsHeight_Params
{
	float                                              ObsHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetImpartedMovementBaseVelocity
struct UBioVehicleMovementComponent_GetImpartedMovementBaseVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetDesireAcceleration
struct UBioVehicleMovementComponent_GetDesireAcceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetCurrentAcceleration
struct UBioVehicleMovementComponent_GetCurrentAcceleration_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetBreakAcceleration
struct UBioVehicleMovementComponent_GetBreakAcceleration_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetAngularVelocityByCurve
struct UBioVehicleMovementComponent_GetAngularVelocityByCurve_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AsForce;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.GetAnalogInputModifier
struct UBioVehicleMovementComponent_GetAnalogInputModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.DisableMovement
struct UBioVehicleMovementComponent_DisableMovement_Params
{
};

// Function Addons.BioVehicleMovementComponent.DealWithCustomAction
struct UBioVehicleMovementComponent_DealWithCustomAction_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClientVeryShortAdjustPosition
struct UBioVehicleMovementComponent_ClientVeryShortAdjustPosition_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         NewBase;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClientAdjustRootMotionSourcePosition
struct UBioVehicleMovementComponent_ClientAdjustRootMotionSourcePosition_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRootMotionSourceGroup                      ServerRootMotion;                                         // (Parm)
	bool                                               bHasAnimRootMotion;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ServerMontageTrackPosition;                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ServerLoc;                                                // (Parm, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ServerRotation;                                           // (Parm)
	float                                              ServerVelZ;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ServerBase;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ServerBoneName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClientAdjustRootMotionPosition
struct UBioVehicleMovementComponent_ClientAdjustRootMotionPosition_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ServerMontageTrackPosition;                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ServerLoc;                                                // (Parm, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ServerRotation;                                           // (Parm)
	float                                              ServerVelZ;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ServerBase;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ServerBoneName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClientAdjustPositionAndRotation
struct UBioVehicleMovementComponent_ClientAdjustPositionAndRotation_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, IsPlainOldData)
	struct FRotator                                    NewRot;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     NewVel;                                                   // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         NewBase;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClientAdjustPosition
struct UBioVehicleMovementComponent_ClientAdjustPosition_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     NewVel;                                                   // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         NewBase;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClientAckGoodMove
struct UBioVehicleMovementComponent_ClientAckGoodMove_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.ClearAccumulatedForces
struct UBioVehicleMovementComponent_ClearAccumulatedForces_Params
{
};

// Function Addons.BioVehicleMovementComponent.CapsuleTouched
struct UBioVehicleMovementComponent_CapsuleTouched_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.CalcVelocity
struct UBioVehicleMovementComponent_CalcVelocity_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFluid;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDeceleration;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.CalculateVelocityWithResistance
struct UBioVehicleMovementComponent_CalculateVelocityWithResistance_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFluid;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.CalculateCurrentForwardSpeed
struct UBioVehicleMovementComponent_CalculateCurrentForwardSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.AddImpulse
struct UBioVehicleMovementComponent_AddImpulse_Params
{
	struct FVector                                     Impulse;                                                  // (Parm, IsPlainOldData)
	bool                                               bVelocityChange;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.AddForce
struct UBioVehicleMovementComponent_AddForce_Params
{
	struct FVector                                     force;                                                    // (Parm, IsPlainOldData)
};

// Function Addons.BioVehicleMovementComponent.AddDirectionalBrakingAcceleration
struct UBioVehicleMovementComponent_AddDirectionalBrakingAcceleration_Params
{
	struct FVector                                     BrakingAcceleration;                                      // (Parm, IsPlainOldData)
};

// Function Addons.BioVehicleRiderAnimInstanceBase.LuaInitializeAnimation
struct UBioVehicleRiderAnimInstanceBase_LuaInitializeAnimation_Params
{
};

// Function Addons.BioVehicleRiderAnimInstanceBase.LuaCacheAnimVarWithAnimList
struct UBioVehicleRiderAnimInstanceBase_LuaCacheAnimVarWithAnimList_Params
{
	class UBioVehicleAnimListComponent*                RiderAnimListComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.BioVehicleRiderAnimInstanceBase.DoTransition
struct UBioVehicleRiderAnimInstanceBase_DoTransition_Params
{
	struct FString                                     State;                                                    // (Parm, ZeroConstructor)
};

// Function Addons.BioVehicleRiderAnimInstanceBase.ConfirmTransition
struct UBioVehicleRiderAnimInstanceBase_ConfirmTransition_Params
{
	struct FString                                     State;                                                    // (Parm, ZeroConstructor)
};

// Function Addons.BioVehicleRiderAnimInstanceBase.CacheAnimVarWithAnimList
struct UBioVehicleRiderAnimInstanceBase_CacheAnimVarWithAnimList_Params
{
	class UBioVehicleAnimListComponent*                RiderAnimListComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Addons.DistanceMatchingComponent.ServerOnDistanceMatchSuccess
struct UDistanceMatchingComponent_ServerOnDistanceMatchSuccess_Params
{
	struct FVector                                     PredictedStopLocation;                                    // (Parm, IsPlainOldData)
};

// Function Addons.DistanceMatchingComponent.PredictStopLocation
struct UDistanceMatchingComponent_PredictStopLocation_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.DistanceMatchingComponent.OnEndAccelerating
struct UDistanceMatchingComponent_OnEndAccelerating_Params
{
};

// Function Addons.DistanceMatchingComponent.GetBioVehicleAnimInstance
struct UDistanceMatchingComponent_GetBioVehicleAnimInstance_Params
{
	class UAnimInstance*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.DistanceMatchingComponent.BroadCastOnDistanceMatchSuccess
struct UDistanceMatchingComponent_BroadCastOnDistanceMatchSuccess_Params
{
	struct FVector                                     PredictedStopLocation;                                    // (Parm, IsPlainOldData)
};

// Function Addons.DistanceMatchingInterface.OnDistanceMatchingSuccess
struct UDistanceMatchingInterface_OnDistanceMatchingSuccess_Params
{
	struct FVector                                     PredictedStopLocation;                                    // (Parm, IsPlainOldData)
};

// Function Addons.LandingCreatureAnimInstance.SetJump
struct ULandingCreatureAnimInstance_SetJump_Params
{
};

// Function Addons.LandingCreatureAnimInstance.ResetStop
struct ULandingCreatureAnimInstance_ResetStop_Params
{
};

// Function Addons.LandingCreatureAnimInstance.ResetJump
struct ULandingCreatureAnimInstance_ResetJump_Params
{
};

// Function Addons.LandingCreatureAnimInstance.ResetDoRandomIdle
struct ULandingCreatureAnimInstance_ResetDoRandomIdle_Params
{
};

// Function Addons.LandingCreatureAnimInstance.DoRandomIdle
struct ULandingCreatureAnimInstance_DoRandomIdle_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.MonsterRaptorAnimInstance.OnResetPlayedIdleIndex
struct UMonsterRaptorAnimInstance_OnResetPlayedIdleIndex_Params
{
	int                                                NewIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurAnimInstance.ResetStartFlying
struct UPterosaurAnimInstance_ResetStartFlying_Params
{
};

// Function Addons.PterosaurAnimInstance.OnStartFlying
struct UPterosaurAnimInstance_OnStartFlying_Params
{
};

// Function Addons.PterosaurMovementComponent.UpdateVerticalHeight
struct UPterosaurMovementComponent_UpdateVerticalHeight_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.StartTakingOff
struct UPterosaurMovementComponent_StartTakingOff_Params
{
};

// Function Addons.PterosaurMovementComponent.StartSwoopDown
struct UPterosaurMovementComponent_StartSwoopDown_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.StartLanding
struct UPterosaurMovementComponent_StartLanding_Params
{
};

// Function Addons.PterosaurMovementComponent.StartFlyingDive
struct UPterosaurMovementComponent_StartFlyingDive_Params
{
};

// Function Addons.PterosaurMovementComponent.SetServerDiveDirection
struct UPterosaurMovementComponent_SetServerDiveDirection_Params
{
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.SetMovementMode
struct UPterosaurMovementComponent_SetMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.SetAutoLanding
struct UPterosaurMovementComponent_SetAutoLanding_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsTakingOff
struct UPterosaurMovementComponent_IsTakingOff_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsSwoopDown
struct UPterosaurMovementComponent_IsSwoopDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsSwoopCatching
struct UPterosaurMovementComponent_IsSwoopCatching_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsStrugglingToLand
struct UPterosaurMovementComponent_IsStrugglingToLand_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsLocalSwoopingDown
struct UPterosaurMovementComponent_IsLocalSwoopingDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsLandingWalking
struct UPterosaurMovementComponent_IsLandingWalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsLanding
struct UPterosaurMovementComponent_IsLanding_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsDiving
struct UPterosaurMovementComponent_IsDiving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.IsCurveMoving
struct UPterosaurMovementComponent_IsCurveMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.GetMoveState
struct UPterosaurMovementComponent_GetMoveState_Params
{
	TEnumAsByte<EPterosaurMoveMode>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.GetDistanceToLand
struct UPterosaurMovementComponent_GetDistanceToLand_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.ExitSwoopDown
struct UPterosaurMovementComponent_ExitSwoopDown_Params
{
};

// Function Addons.PterosaurMovementComponent.ExitLanding
struct UPterosaurMovementComponent_ExitLanding_Params
{
};

// Function Addons.PterosaurMovementComponent.EndTakingOff
struct UPterosaurMovementComponent_EndTakingOff_Params
{
};

// Function Addons.PterosaurMovementComponent.EndSwoopDown
struct UPterosaurMovementComponent_EndSwoopDown_Params
{
	bool                                               bRestVelocity;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.EndLanding
struct UPterosaurMovementComponent_EndLanding_Params
{
};

// Function Addons.PterosaurMovementComponent.EndFlyingDive
struct UPterosaurMovementComponent_EndFlyingDive_Params
{
};

// Function Addons.PterosaurMovementComponent.DealWithCustomAction
struct UPterosaurMovementComponent_DealWithCustomAction_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.CheckCanStartFlyingDive
struct UPterosaurMovementComponent_CheckCanStartFlyingDive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.CalculateFlyingVelocity
struct UPterosaurMovementComponent_CalculateFlyingVelocity_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.CalculateFlyingAcceleration
struct UPterosaurMovementComponent_CalculateFlyingAcceleration_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurMovementComponent.CalculateDivingVelocity
struct UPterosaurMovementComponent_CalculateDivingVelocity_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.TryFlyingDive
struct APterosaurVehicle_TryFlyingDive_Params
{
	bool                                               bTry;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.TryCancelSwoopDown
struct APterosaurVehicle_TryCancelSwoopDown_Params
{
};

// Function Addons.PterosaurVehicle.SetBoosting
struct APterosaurVehicle_SetBoosting_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.ServerSwoopDown
struct APterosaurVehicle_ServerSwoopDown_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
	bool                                               IsForceEnd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.ServerReleaseCharacter
struct APterosaurVehicle_ServerReleaseCharacter_Params
{
	class ASTExtraBaseCharacter*                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.OnRep_SyncSwoopCatchState
struct APterosaurVehicle_OnRep_SyncSwoopCatchState_Params
{
};

// Function Addons.PterosaurVehicle.OnPterosaurSwoopStateChanged
struct APterosaurVehicle_OnPterosaurSwoopStateChanged_Params
{
	EPterosaurSwoopStage                               NewStage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.OnPterosaurPrepareCatch
struct APterosaurVehicle_OnPterosaurPrepareCatch_Params
{
};

// Function Addons.PterosaurVehicle.OnClientExitFromPterosaur
struct APterosaurVehicle_OnClientExitFromPterosaur_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.MultiCast_SwoopDown
struct APterosaurVehicle_MultiCast_SwoopDown_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.MultiCast_SplineCorrect
struct APterosaurVehicle_MultiCast_SplineCorrect_Params
{
	struct FVector                                     SyncLocation;                                             // (Parm, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
	TArray<struct FVector>                             SplinePoints;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Addons.PterosaurVehicle.IsSwoopDown
struct APterosaurVehicle_IsSwoopDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.IsSwoopCoolDown
struct APterosaurVehicle_IsSwoopCoolDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.IsSwoopCatching
struct APterosaurVehicle_IsSwoopCatching_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.HandleOnSeatDetached
struct APterosaurVehicle_HandleOnSeatDetached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.HandleOnSeatAttached
struct APterosaurVehicle_HandleOnSeatAttached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.GetPterosaurMovementComponent
struct APterosaurVehicle_GetPterosaurMovementComponent_Params
{
	class UPterosaurMovementComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.GetConsumeFuelRate
struct APterosaurVehicle_GetConsumeFuelRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.ForceCatchCharacter
struct APterosaurVehicle_ForceCatchCharacter_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.DoSwoopDown
struct APterosaurVehicle_DoSwoopDown_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.CanConsumeFuel
struct APterosaurVehicle_CanConsumeFuel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.PterosaurVehicle.BroadCastOnPterosaurPrepareCatch
struct APterosaurVehicle_BroadCastOnPterosaurPrepareCatch_Params
{
};

// Function Addons.PterosaurVehicle.BPOnPterosaurSwoopStateChanged
struct APterosaurVehicle_BPOnPterosaurSwoopStateChanged_Params
{
	unsigned char                                      NewStage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.RaptorDriverAnimInstance.OnOwnedRaptorJumped
struct URaptorDriverAnimInstance_OnOwnedRaptorJumped_Params
{
};

// Function Addons.RaptorMovementComponent.GetWalkingAccResistance
struct URaptorMovementComponent_GetWalkingAccResistance_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.RaptorMovementComponent.GetMaxAcceleration
struct URaptorMovementComponent_GetMaxAcceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.RaptorVehicle.SetHandBrake
struct ARaptorVehicle_SetHandBrake_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.RaptorVehicle.SetBoosting
struct ARaptorVehicle_SetBoosting_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.RaptorVehicle.ServerSetHandBrake
struct ARaptorVehicle_ServerSetHandBrake_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.RaptorVehicle.MulticastDoJump
struct ARaptorVehicle_MulticastDoJump_Params
{
};

// Function Addons.RaptorVehicle.MoveRight
struct ARaptorVehicle_MoveRight_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.RaptorVehicle.MoveForward
struct ARaptorVehicle_MoveForward_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.RaptorVehicle.GetRaptorMovementComponent
struct ARaptorVehicle_GetRaptorMovementComponent_Params
{
	class URaptorMovementComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.RaptorVehicle.DoJump
struct ARaptorVehicle_DoJump_Params
{
};

// Function Addons.TRexVehicleDamageComponent.HandleFootOverlapVehicle
struct UTRexVehicleDamageComponent_HandleFootOverlapVehicle_Params
{
	class ASTExtraVehicleBase*                         OverlappedVehicle;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             DamageCollision;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FOverlapResult                              OverlapResult;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function Addons.TRexVehicleDamageComponent.HandleFootOverlapCharacter
struct UTRexVehicleDamageComponent_HandleFootOverlapCharacter_Params
{
	class ASTExtraBaseCharacter*                       OverlappedCharacter;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             DamageCollision;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FOverlapResult                              OverlapResult;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexAnimInstance.ResetStartMoving
struct UTyrannosaurusRexAnimInstance_ResetStartMoving_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.ShowRoarOverSpeedTips
struct ATyrannosaurusRexVehicle_ShowRoarOverSpeedTips_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.ShakeNearbyPlayerCamera
struct ATyrannosaurusRexVehicle_ShakeNearbyPlayerCamera_Params
{
	class UClass*                                      CameraShakeClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.ServerStopRoar
struct ATyrannosaurusRexVehicle_ServerStopRoar_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.ServerRoar
struct ATyrannosaurusRexVehicle_ServerRoar_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.ServerBreakOut
struct ATyrannosaurusRexVehicle_ServerBreakOut_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.PrepareApplyRoarAttack
struct ATyrannosaurusRexVehicle_PrepareApplyRoarAttack_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.OnTRexHPCHanged
struct ATyrannosaurusRexVehicle_OnTRexHPCHanged_Params
{
	float                                              NewHP;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HPMax;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.OnRoarFinished
struct ATyrannosaurusRexVehicle_OnRoarFinished_Params
{
	TEnumAsByte<EBioVehicleSkillStopReason>            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.OnRep_bIsRoaring
struct ATyrannosaurusRexVehicle_OnRep_bIsRoaring_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.GetVehicleMovement
struct ATyrannosaurusRexVehicle_GetVehicleMovement_Params
{
	class URaptorMovementComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.GetVehicleBreakOutState
struct ATyrannosaurusRexVehicle_GetVehicleBreakOutState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.GetNearlyPlayers
struct ATyrannosaurusRexVehicle_GetNearlyPlayers_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ASTExtraBaseCharacter*>               Results;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.EndRoarAttack
struct ATyrannosaurusRexVehicle_EndRoarAttack_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.ClientHandleVehicleDead
struct ATyrannosaurusRexVehicle_ClientHandleVehicleDead_Params
{
	bool                                               VehicleDeadDirection;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.CheckCanApplyDamageTo
struct ATyrannosaurusRexVehicle_CheckCanApplyDamageTo_Params
{
	class ASTExtraBaseCharacter*                       Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.CallClientDrawDebugSphere
struct ATyrannosaurusRexVehicle_CallClientDrawDebugSphere_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.BroadCastStopMontage
struct ATyrannosaurusRexVehicle_BroadCastStopMontage_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.BroadCastPlayRoarMontage
struct ATyrannosaurusRexVehicle_BroadCastPlayRoarMontage_Params
{
};

// Function Addons.TyrannosaurusRexVehicle.BroadCastClientDrawSphere
struct ATyrannosaurusRexVehicle_BroadCastClientDrawSphere_Params
{
	struct FVector                                     Center;                                                   // (Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.BreakOut
struct ATyrannosaurusRexVehicle_BreakOut_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.ApplyRoarAttackToSpecifiedCharacter
struct ATyrannosaurusRexVehicle_ApplyRoarAttackToSpecifiedCharacter_Params
{
	class ASTExtraBaseCharacter*                       TargetCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Addons.TyrannosaurusRexVehicle.ApplyRoarAttack
struct ATyrannosaurusRexVehicle_ApplyRoarAttack_Params
{
};

}

