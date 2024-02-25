#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Addons.EPterosaurSwoopStage
enum class EPterosaurSwoopStage : uint8_t
{
	EPterosaurSwoopStage__ESwoopStage_None = 0,
	EPterosaurSwoopStage__ESwoopStage_Ready = 1,
	EPterosaurSwoopStage__ESwoopStage_DirectionCorrect = 2,
	EPterosaurSwoopStage__ESwoopStage_SwoopMove = 3,
	EPterosaurSwoopStage__ESwoopStage_PreCatch = 4,
	EPterosaurSwoopStage__ESwoopStage_Catch = 5,
	EPterosaurSwoopStage__ESwoopStage_Finish = 6,
	EPterosaurSwoopStage__ESwoopStage_FinishNoCatch = 7,
	EPterosaurSwoopStage__ESwoopStage_FinishNoCatchWithHit = 8,
	EPterosaurSwoopStage__ESwoopStage_MAX = 9
};


// Enum Addons.EBoneDirection
enum class EBoneDirection : uint8_t
{
	ForwardDirection               = 0,
	BackWardDirection              = 1,
	LeftDirection                  = 2,
	RightDirection                 = 3,
	UpDirection                    = 4,
	DownDirection                  = 5,
	EBoneDirection_MAX             = 6
};


// Enum Addons.EBioVehicleTerrainAdaptingType
enum class EBioVehicleTerrainAdaptingType : uint8_t
{
	EBioVehicleTerrainAdaptingType__TaskThread = 0,
	EBioVehicleTerrainAdaptingType__MainThread = 1,
	EBioVehicleTerrainAdaptingType__None = 2,
	EBioVehicleTerrainAdaptingType__EBioVehicleTerrainAdaptingType_MAX = 3
};


// Enum Addons.EBioVehiclePoseType
enum class EBioVehiclePoseType : uint8_t
{
	EBioVehiclePose_UntamedIdle    = 0,
	EBioVehiclePose_Idle           = 1,
	EBioVehiclePose_RandomIdle1    = 2,
	EBioVehiclePose_RandomIdle2    = 3,
	EBioVehiclePose_Movement       = 4,
	EBioVehiclePose_Death          = 5,
	EBioVehiclePose_JumpStart      = 6,
	EBioVehiclePose_Falling        = 7,
	EBioVehiclePose_RunLanding     = 8,
	EBioVehiclePose_IdleLanding    = 9,
	EBioVehiclePose_TurnStart      = 10,
	EBioVehiclePose_Turning        = 11,
	EBioVehiclePose_TurnEnd        = 12,
	EBioVehiclePose_ExtraDeath     = 13,
	EBioVehiclePose_StartFlying    = 14,
	EBioVehiclePose_ArrestMovement = 15,
	EBioVehiclePose_FlyingAO       = 16,
	EBioVehiclePose_StartLanding1  = 17,
	EBioVehiclePose_StartLanding2  = 18,
	EBioVehiclePose_Landing1       = 19,
	EBioVehiclePose_Landing2       = 20,
	EBioVehiclePose_Landing3       = 21,
	EBioVehiclePose_TakingOff      = 22,
	EBioVehiclePose_RiseUp         = 23,
	EBioVehiclePose_RiseDown       = 24,
	EBioVehiclePose_DivingStart    = 25,
	EBioVehiclePose_Diving         = 26,
	EBioVehiclePose_DivingEnd      = 27,
	EBioVehiclePose_GroundDeath    = 28,
	EBioVehiclePose_DeathFalling   = 29,
	EBioVehiclePose_DeathFallingGround = 30,
	EBioVehiclePose_Max            = 31
};


// Enum Addons.EPterosaurMoveMode
enum class EPterosaurMoveMode : uint8_t
{
	EMove_Idle                     = 0,
	EMove_TakingOff                = 1,
	EMove_RegularFlying            = 2,
	EMove_Diving                   = 3,
	EMove_Landing                  = 4,
	EMove_SwoopDown                = 5,
	EMove_MAX                      = 6
};


// Enum Addons.EBioVehicleSkillStopReason
enum class EBioVehicleSkillStopReason : uint8_t
{
	StopReason_FINISH              = 0,
	StopReason_INTERRUPT           = 1,
	StopReason_MAX                 = 2
};


// Enum Addons.ETyranState
enum class ETyranState : uint8_t
{
	ETyranState__None              = 0,
	ETyranState__Normal            = 1,
	ETyranState__BreakOut          = 2,
	ETyranState__ETyranState_MAX   = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Addons.BioVehicleRiderAnim
// 0x0030
struct FBioVehicleRiderAnim
{
	TEnumAsByte<EBioVehiclePoseType>                   PoseType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.BioVehicleRiderAnim.AnimSoftPtr
};

// ScriptStruct Addons.FootStepEffect
// 0x0030
struct FFootStepEffect
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.FootStepEffect.ParticleTemplate
	int                                                EnableDeviceLevel;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Addons.BioVehicleMovementPostPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FBioVehicleMovementPostPhysicsTickFunction : public FTickFunction
{
	class UBioVehicleMovementComponent*                Target;                                                   // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Addons.PterosaurUpdateDistanceToLandConfig
// 0x000C
struct FPterosaurUpdateDistanceToLandConfig
{
	float                                              Height;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              interval;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSweep;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Addons.PterosaurLandingConfig
// 0x0018
struct FPterosaurLandingConfig
{
	float                                              MaxAllowedFlyingSpeed;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLandingTime;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LandingToGroundTime;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceToGroundInFixedTime;                                // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	class UCurveVector*                                LandingCurve;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Addons.AnimNode_DistanceMatching
// 0x00B8 (0x0128 - 0x0070)
struct FAnimNode_DistanceMatching : public FAnimNode_SequencePlayer
{
	float                                              Distance;                                                 // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FName                                       RootBoneName;                                             // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AcceptedDistanceError;                                    // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FFloatCurve                                 DistanceCurve;                                            // 0x0088(0x0090)
	bool                                               bHasValidDistanceCurve;                                   // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0119(0x000F) MISSED OFFSET
};

// ScriptStruct Addons.MyVectorCurve
// 0x01B0
struct FMyVectorCurve
{
	struct FFloatCurve                                 FloatCurves[0x3];                                         // 0x0000(0x0090)
};

// ScriptStruct Addons.JointCurveData
// 0x0368
struct FJointCurveData
{
	struct FName                                       JointName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMyVectorCurve                              PositionCurve;                                            // 0x0008(0x01B0)
	struct FMyVectorCurve                              VelocityCurve;                                            // 0x01B8(0x01B0)
};

// ScriptStruct Addons.AnimJointData
// 0x00F0
struct FAnimJointData
{
	int                                                AnimID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<int, struct FJointCurveData>                  JointCurveDatas;                                          // 0x0008(0x0050) (ZeroConstructor)
	bool                                               bHasValidDistanceCurve;                                   // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FFloatCurve                                 DistanceCurve;                                            // 0x0060(0x0090)
};

// ScriptStruct Addons.AnimNode_MultiPoseDistanceMatching
// 0x0050 (0x0178 - 0x0128)
struct FAnimNode_MultiPoseDistanceMatching : public FAnimNode_DistanceMatching
{
	TArray<class UAnimSequence*>                       CandidateSequences;                                       // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBoneReference>                      ConsideredBones;                                          // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              PositionWeight;                                           // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VelocityWeight;                                           // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PoseInterval;                                             // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	class UAnimPoseRecorder*                           PoseRecorder;                                             // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimJointData>                      AnimJointDatas;                                           // 0x0160(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0170(0x0008) MISSED OFFSET
};

// ScriptStruct Addons.AnimNode_PoseRecorder
// 0x0030 (0x0068 - 0x0038)
struct FAnimNode_PoseRecorder : public FAnimNode_Base
{
	class UAnimPoseRecorder*                           AnimPoseRecorder;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBoneReference>                      RecordedBones;                                            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FPoseLink                                   Source;                                                   // 0x0050(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Addons.AnimNode_SyncBlendSpacePlayer
// 0x0018 (0x0140 - 0x0128)
struct FAnimNode_SyncBlendSpacePlayer : public FAnimNode_BlendSpacePlayer
{
	class UAssetPlayerSyncNode*                        BlendSpaceSyncNode;                                       // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SyncGroupName;                                            // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLeader;                                                // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
};

// ScriptStruct Addons.AnimNode_SyncSequencePlayer
// 0x0018 (0x0088 - 0x0070)
struct FAnimNode_SyncSequencePlayer : public FAnimNode_SequencePlayer
{
	class UAssetPlayerSyncNode*                        SyncNode;                                                 // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SyncGroupName;                                            // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLeader;                                                // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
};

// ScriptStruct Addons.AnimNode_TwoLeggedIK
// 0x0638 (0x06B0 - 0x0078)
struct FAnimNode_TwoLeggedIK : public FAnimNode_SkeletalControlBase
{
	bool                                               bEnableRootAdaption;                                      // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FBoneReference                              Root;                                                     // 0x0080(0x0018) (Edit)
	float                                              RootTraceUpOffset;                                        // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RootTraceDownOffset;                                      // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RootTraceSphereRadius;                                    // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RootPositionLerpSpeed;                                    // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RootMaxHeightOffset;                                      // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<ECollisionChannel>>             SlopeAdaption_ObjectTypesToQuery;                         // 0x00B0(0x0010) (Edit, ZeroConstructor)
	bool                                               bEnableSlopeAdaption;                                     // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FBoneReference                              SpineRoot;                                                // 0x00C8(0x0018) (Edit)
	struct FBoneReference                              TailRoot;                                                 // 0x00E0(0x0018) (Edit)
	float                                              SlopeMaxPitchOffset;                                      // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlopeRotationLerpSpeed;                                   // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ECollisionChannel>>             FootAdaption_ObjectTypesToQuery;                          // 0x0100(0x0010) (Edit, ZeroConstructor)
	bool                                               bEnableFootPositionAdaption;                              // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableFootRotationAdaption;                              // 0x0111(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0112(0x0006) MISSED OFFSET
	struct FBoneReference                              IKBone_L;                                                 // 0x0118(0x0018) (Edit)
	struct FBoneReference                              FootBone_L;                                               // 0x0130(0x0018) (Edit)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
	struct FBoneSocketTarget                           JointTarget_L;                                            // 0x0150(0x0060) (Edit)
	struct FVector                                     JointTargetLocation_L;                                    // 0x01B0(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET
	struct FBoneReference                              IKBone_R;                                                 // 0x01C0(0x0018) (Edit)
	struct FBoneReference                              FootBone_R;                                               // 0x01D8(0x0018) (Edit)
	struct FBoneSocketTarget                           JointTarget_R;                                            // 0x01F0(0x0060) (Edit)
	struct FVector                                     JointTargetLocation_R;                                    // 0x0250(0x000C) (Edit, IsPlainOldData)
	float                                              FootTraceUpOffset;                                        // 0x025C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootTraceDownOffset;                                      // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootTraceSphereRadius;                                    // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootPositionLerpSpeed;                                    // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootRotationLerpSpeed;                                    // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneDirection>                        FootForwardDirectionLS;                                   // 0x0270(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0271(0x0003) MISSED OFFSET
	float                                              FootMaxPitchOffset;                                       // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootMaxRollOffset;                                        // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootMaxHeightOffset;                                      // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SkipEvaluateTimes;                                        // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0xC];                                       // 0x0284(0x000C) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         LegAdapting_L;                                            // 0x0290(0x01C0)
	struct FAnimNode_TwoBoneIK                         LegAdapting_R;                                            // 0x0450(0x01C0)
	unsigned char                                      UnknownData08[0xA0];                                      // 0x0610(0x00A0) MISSED OFFSET
};

// ScriptStruct Addons.CachedPoseMotionData
// 0x00A8
struct FCachedPoseMotionData
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct Addons.CachedBoneMotionData
// 0x0070
struct FCachedBoneMotionData
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

}

