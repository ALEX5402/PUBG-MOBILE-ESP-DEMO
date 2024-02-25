#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Skill.UTSkillStopReason
enum class EUTSkillStopReason : uint8_t
{
	UTSkillStopReason__SkillStopReason_UnKown = 0,
	UTSkillStopReason__SkillStopReason_Finished = 1,
	UTSkillStopReason__SkillStopReason_Failed = 2,
	UTSkillStopReason__SkillStopReason_Interrupted = 3,
	UTSkillStopReason__SkillStopReason_PlayerDieInterrupted = 4,
	UTSkillStopReason__SkillStopReason_PlayerDisconnect = 5,
	UTSkillStopReason__SkillStopReason_MAX = 6
};


// Enum Skill.UTPickerTargetType
enum class EUTPickerTargetType : uint8_t
{
	UTPickerTargetType__PTT_FRIEND = 0,
	UTPickerTargetType__PTT_ENEMY  = 1,
	UTPickerTargetType__PTT_ALL    = 2,
	UTPickerTargetType__PTT_Self   = 3,
	UTPickerTargetType__PTT_MAX    = 4
};


// Enum Skill.UTSkillPickerType
enum class EUTSkillPickerType : uint8_t
{
	UTSkillPickerType__SPT_SELF    = 0,
	UTSkillPickerType__SPT_TARGET  = 1,
	UTSkillPickerType__SPT_VIEWPOINT = 2,
	UTSkillPickerType__SPT_VIEWPOINT_STATIC = 3,
	UTSkillPickerType__SPT_RECT    = 4,
	UTSkillPickerType__SPT_CIRCLE  = 5,
	UTSkillPickerType__SPT_CAPSULE = 6,
	UTSkillPickerType__SPT_FAN     = 7,
	UTSkillPickerType__SPT_CROSSHAIR = 8,
	UTSkillPickerType__SPT_CUSTOM  = 9,
	UTSkillPickerType__SPT_DESTINATION = 10,
	UTSkillPickerType__SPT_VIEWPOINT_NORMAL = 11,
	UTSkillPickerType__SPT_BLACKBOARD = 12,
	UTSkillPickerType__SPT_DEFAULT = 13,
	UTSkillPickerType__SPT_MAX     = 14
};


// Enum Skill.ESkillCastType
enum class ESkillCastType : uint8_t
{
	ESkillCastType__Normal         = 0,
	ESkillCastType__Trigger        = 1,
	ESkillCastType__Passive        = 2,
	ESkillCastType__Max            = 3
};


// Enum Skill.ECDCompare
enum class ECDCompare : uint8_t
{
	ECDCompare__CDC_Bigger         = 0,
	ECDCompare__CDC_Equal          = 1,
	ECDCompare__CDC_Smaller        = 2,
	ECDCompare__CDC_MAX            = 3
};


// Enum Skill.ECDType
enum class ECDType : uint8_t
{
	ECDType__CDT_Timer             = 0,
	ECDType__CDT_Energy            = 1,
	ECDType__CDT_Point             = 2,
	ECDType__CDT_MAX               = 3
};


// Enum Skill.ESkillActionRole
enum class ESkillActionRole : uint8_t
{
	ESAR_All                       = 0,
	ESAR_Authority                 = 1,
	ESAR_Autonomous                = 2,
	ESAR_Simulated                 = 3,
	ESAR_AutonomousSimulated       = 4,
	ESAR_AutonomousAuthority       = 5,
	ESAR_MAX                       = 6
};


// Enum Skill.ESkillAddForceDirection
enum class ESkillAddForceDirection : uint8_t
{
	ESkillAddForceDirection__ESkillDir_SelfToTarget = 0,
	ESkillAddForceDirection__ESkillDir_TargetToSelf = 1,
	ESkillAddForceDirection__ESkillDir_SelfDir = 2,
	ESkillAddForceDirection__ESkillDir_TargetDir = 3,
	ESkillAddForceDirection__ESkillDir_TargetZ = 4,
	ESkillAddForceDirection__ESkillDir_SelfZ = 5,
	ESkillAddForceDirection__ESkillDir_MAX = 6
};


// Enum Skill.ESkillStage
enum class ESkillStage : uint8_t
{
	ESkillStage__None              = 0,
	ESkillStage__Prepare           = 1,
	ESkillStage__Start             = 2,
	ESkillStage__Stop              = 3,
	ESkillStage__ESkillStage_MAX   = 4
};


// Enum Skill.ESkillAttrOperator
enum class ESkillAttrOperator : uint8_t
{
	ESkillAttrOperator__None       = 0,
	ESkillAttrOperator__Plus       = 1,
	ESkillAttrOperator__Multiply   = 2,
	ESkillAttrOperator__Set        = 3,
	ESkillAttrOperator__ESkillAttrOperator_MAX = 4
};


// Enum Skill.FSkillType
enum class EFSkillType : uint8_t
{
	FSkillType__None               = 0,
	FSkillType__Medicine           = 1,
	FSkillType__Damage             = 2,
	FSkillType__FSkillType_MAX     = 3
};


// Enum Skill.ESkillIconStatus
enum class ESkillIconStatus : uint8_t
{
	ESkillIconStatus__IConBtnNone  = 0,
	ESkillIconStatus__IconBtnNormal = 1,
	ESkillIconStatus__IconBtnActive = 2,
	ESkillIconStatus__IconBtnInCD  = 3,
	ESkillIconStatus__IconBtnDown  = 4,
	ESkillIconStatus__IconBtnUp    = 5,
	ESkillIconStatus__IconBtnClick = 6,
	ESkillIconStatus__IconBtnHovered = 7,
	ESkillIconStatus__IconBtnUnHovered = 8,
	ESkillIconStatus__ESkillIconStatus_MAX = 9
};


// Enum Skill.UTSkillTargetType
enum class EUTSkillTargetType : uint8_t
{
	UTSkillTargetType__STT_FRIEND  = 0,
	UTSkillTargetType__STT_ENEMY   = 1,
	UTSkillTargetType__STT_ALL     = 2,
	UTSkillTargetType__STT_MAX     = 3
};


// Enum Skill.UTSkillEventType
enum class EUTSkillEventType : uint8_t
{
	SET_KEY_DOWN                   = 0,
	SET_KEY_UP                     = 1,
	SET_COLLIDE_TARGET             = 2,
	SET_MISS_TARGET                = 3,
	SET_HIT_TARGET                 = 4,
	SET_KILL_TARGET                = 5,
	SET_COLLIDE_ACTOR              = 6,
	SET_FINDPATH_FINISH            = 7,
	SET_SKILL_ACTIVE               = 8,
	SET_SKILL_CAST                 = 9,
	SET_SKILL_INIT                 = 10,
	SET_PHASE_START                = 11,
	SET_PHASE_FINISH               = 12,
	SET_PHASE_FINISH_EARLY         = 13,
	SET_PHASE_INTERRUPT            = 14,
	SET_SKILL_FINISH               = 15,
	SET_SKILL_CANCEL               = 16,
	SET_SKILL_CLOSE                = 17,
	SET_NO_TARGET                  = 18,
	SET_SKILL_BREAK                = 19,
	SET_NO_LOCATION                = 20,
	SET_ATTEMPT_ACTIVE             = 21,
	SET_SKILL_ACTIVE_AND_BUTTONSLOT = 22,
	SET_SKILL_CLOSE_AND_BUTTONSLOT = 23,
	SET_MAX                        = 24
};


// Enum Skill.ESynDataUpdateType
enum class ESynDataUpdateType : uint8_t
{
	ESynDataUpdateType__Add        = 0,
	ESynDataUpdateType__Remove     = 1,
	ESynDataUpdateType__Update     = 2,
	ESynDataUpdateType__ESynDataUpdateType_MAX = 3
};


// Enum Skill.ESkillMutexType
enum class ESkillMutexType : uint8_t
{
	ESMT_Y                         = 0,
	ESMT_X                         = 1,
	ESMT_XY                        = 2,
	ESMT_MAX                       = 3
};


// Enum Skill.ESkillEndConditionType
enum class ESkillEndConditionType : uint8_t
{
	ESECT_MyHP                     = 0,
	ESECT_MyHPAndSD                = 1,
	ESECT_FrinedHP                 = 2,
	ESECT_ExistsEnemy              = 3,
	ESECT_ExistsEnemy2             = 4,
	ESECT_ExistsEnemyAndFriends    = 5,
	ESECT_AnyTime                  = 6,
	ESECT_None                     = 7,
	ESECT_MAX                      = 8
};


// Enum Skill.ESkillConditionType
enum class ESkillConditionType : uint8_t
{
	ESCT_MyHP                      = 0,
	ESCT_MyHPAndSD                 = 1,
	ESCT_MyHPAndSDNoEmeny          = 2,
	ESCT_FrinedHP                  = 3,
	ESCT_ExistsEnemy               = 4,
	ESCT_ExistsEnemy2              = 5,
	ESCT_ExistsEnemyAndFriends     = 6,
	ESCT_AnyTime                   = 7,
	ESCT_None                      = 8,
	ESCT_MAX                       = 9
};


// Enum Skill.UTSkillPhaseType
enum class EUTSkillPhaseType : uint8_t
{
	UTSkillPhaseType__SPT_SEQUENCE = 0,
	UTSkillPhaseType__SPT_WAIT     = 1,
	UTSkillPhaseType__SPT_CHARGE   = 2,
	UTSkillPhaseType__SPT_Repeat   = 3,
	UTSkillPhaseType__SPT_FINAL_SKILL_PHASE = 4,
	UTSkillPhaseType__SPT_Keep     = 5,
	UTSkillPhaseType__SPT_Holding  = 6,
	UTSkillPhaseType__SPT_JUMP     = 7,
	UTSkillPhaseType__SPT_SEQUENCE_IMMEDIATELY = 8,
	UTSkillPhaseType__SPT_MAX      = 9
};


// Enum Skill.UTSkillPickerRole
enum class EUTSkillPickerRole : uint8_t
{
	UTSkillPickerRole__SPR_Authority = 0,
	UTSkillPickerRole__SPR_Autonomous = 1,
	UTSkillPickerRole__SPR_Both    = 2,
	UTSkillPickerRole__SPR_MAX     = 3
};


// Enum Skill.ESkillDebugEventType
enum class ESkillDebugEventType : uint8_t
{
	ES_SkillStart                  = 0,
	ES_SkillPhaseStart             = 1,
	ES_SkillInterrupt              = 2,
	ES_OutputStats                 = 3,
	ES_SkillEnd                    = 4,
	ES_MAX                         = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Skill.UTSkillActionCreateData
// 0x0008
struct FUTSkillActionCreateData
{
	TEnumAsByte<ESkillActionRole>                      ActionRole;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DelayTime;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Skill.UTSkillCreateData
// 0x0078
struct FUTSkillCreateData
{
	bool                                               bSkillActived;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SkillButtonSlot;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SkillGroupIndex;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              interval;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IntervalSincePrevFinish;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     CoolDownMessage;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                CoolDownMessageID;                                        // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<class UUTSkillPhase*>                       Phases;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<class UUTSkillCDBase*>                      SkillCDs;                                                 // 0x0040(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	TArray<struct FName>                               AsyncLoadingSkillUI;                                      // 0x0058(0x0010) (ZeroConstructor, Transient)
	TArray<class UUTSkillEventEffectMapForEditor*>     EditorEventEffectMap;                                     // 0x0068(0x0010) (ExportObject, ZeroConstructor, Transient)
};

// ScriptStruct Skill.UTSkillLastCastInfo
// 0x000C
struct FUTSkillLastCastInfo
{
	int                                                SkillID;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastCastTime;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastCastFinishTime;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Skill.SkillActiveRepData
// 0x0010
struct FSkillActiveRepData
{
	int                                                SkillID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SkillLevel;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SkillButtonSlot;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Skill.TeammateSkillCDRepData
// 0x0010
struct FTeammateSkillCDRepData
{
	int                                                SkillID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CDStartTime;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CDEndTime;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UseCount;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Skill.SkillDynamicState
// 0x0008
struct FSkillDynamicState
{
	int                                                SkillID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bAdd;                                                     // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Skill.SkillDynamicRepData
// 0x0010
struct FSkillDynamicRepData
{
	TArray<struct FSkillDynamicState>                  SkillData;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Skill.UTSkillSyncData_CD
// 0x0018
struct FUTSkillSyncData_CD
{
	int                                                SkillCDIndex;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<unsigned char>                              SkillSyncDatas;                                           // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Skill.SkillCDRepData
// 0x0018
struct FSkillCDRepData
{
	int                                                SkillID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FUTSkillSyncData_CD>                 CDSyncDatas;                                              // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Skill.UTSkillHitInfo
// 0x0030
struct FUTSkillHitInfo
{
	TArray<class AActor*>                              ToPawn;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class AActor*                                      FromPawn;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SkillID;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SkillPhaseID;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               Flag;                                                     // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsHeadshot;                                               // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      HitSurfaceType;                                           // 0x0022(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
	struct FVector                                     HitEnvLocation;                                           // 0x0024(0x000C) (IsPlainOldData)
};

// ScriptStruct Skill.UTSkillHitEnvInfo
// 0x0030
struct FUTSkillHitEnvInfo
{
	TArray<class AActor*>                              ToPawn;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class AActor*                                      FromPawn;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SkillID;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SkillPhaseID;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      HitSurfaceType;                                           // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FVector                                     HitEnvLocation;                                           // 0x0024(0x000C) (IsPlainOldData)
};

// ScriptStruct Skill.SkillParamater
// 0x0020
struct FSkillParamater
{
	bool                                               bUseTag;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       SkillTag;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EFSkillType                                        SkillType;                                                // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              CDRecoveryScale;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SkillRuntimeScale;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Skill.UTMutilSkillSynData
// 0x0038
struct FUTMutilSkillSynData
{
	bool                                               bEnableRepeat;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkillStop;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	uint64_t                                           CurInstanceID;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                CurSkillID;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SynID;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PhaseIndexes;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<unsigned char>                              PhaseIndexArray;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Skill.UTSkillSynSinglePhaseData
// 0x0018
struct FUTSkillSynSinglePhaseData
{
	uint64_t                                           CurInstanceID;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                CurSkillID;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurSkillPhase;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UpdateFlag;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkillStop;                                               // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct Skill.UTReplaceSkillData
// 0x0008
struct FUTReplaceSkillData
{
	int                                                OldSkillID;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NewSkillID;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Skill.MutilSkillSynData
// 0x0030
struct FMutilSkillSynData
{
	TArray<struct FUTMutilSkillSynData>                DataList;                                                 // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Skill.SkillSinglePhaseData
// 0x0030
struct FSkillSinglePhaseData
{
	TArray<struct FUTSkillSynSinglePhaseData>          DataList;                                                 // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Skill.UTSkillSimulateData
// 0x0010
struct FUTSkillSimulateData
{
	uint64_t                                           InstanceID;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bSinglePhaseRep;                                          // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Skill.UTSkillPreSetBlackboard
// 0x0050
struct FUTSkillPreSetBlackboard
{
	TMap<int, class UUAEBlackboard*>                   PreSetSkillBBData;                                        // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Skill.UTSkillExecQueue
// 0x0110
struct FUTSkillExecQueue
{
	unsigned char                                      UnknownData00[0x110];                                     // 0x0000(0x0110) MISSED OFFSET
};

// ScriptStruct Skill.UTSkillStateSyncDataParam
// 0x0002
struct FUTSkillStateSyncDataParam
{
	bool                                               bSyncActive;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSyncCD;                                                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Skill.UTSkillStateSyncData
// 0x0020
struct FUTSkillStateSyncData
{
	struct FUTSkillStateSyncDataParam                  SyncParam;                                                // 0x0000(0x0002)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                SkillID;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SkillButtonSlot;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bSkillActive;                                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	TArray<struct FUTSkillSyncData_CD>                 CDSyncDatas;                                              // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Skill.SkillConditionWarpper
// 0x0008
struct FSkillConditionWarpper
{
	class UUTSkillCondition*                           SkillCondition;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Skill.UTSkillPhaseCreateData
// 0x0088
struct FUTSkillPhaseCreateData
{
	float                                              PhaseDuration;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     TimeAdjustAttr;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              AltPhaseDuration;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CacheMouseInputTime;                                      // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMustHasTarget;                                           // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCoolDown;                                                // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	int                                                CoolDownIndex;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UUTSkillCondition*>                   PhaseConditions;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance)
	class UUTSkillPicker*                              Picker;                                                   // 0x0038(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UUTSkillEffect*>                      Actions;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance)
	TArray<class UUTSkillEffect*>                      HurtAppearances;                                          // 0x0050(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance)
	EUTSkillPhaseType                                  PhaseType;                                                // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                JumpPhaseIndex;                                           // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     EnterPhaseTipString;                                      // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UUTSkillEventEffectMapForEditor*>     EditorEventEffectMap;                                     // 0x0078(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct Skill.UTSkillPickerCreateData
// 0x0020
struct FUTSkillPickerCreateData
{
	EUTSkillPickerType                                 PickerType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FUAEBlackboardKeySelector                   PickerOriginBlackboardKey;                                // 0x0008(0x0008) (Edit, BlueprintVisible)
	EUTPickerTargetType                                PickerTargetType;                                         // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EUTSkillPickerRole                                 PickerTargetRole;                                         // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	int                                                PickerMaxCount;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeOwner;                                            // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyHero;                                                // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTrace;                                             // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUsingViewRotation;                                     // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseNewOffset;                                            // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreOwnerVehicleWhenTracePlayer;                       // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct Skill.UTSkillPickedTarget
// 0x0038
struct FUTSkillPickedTarget
{
	TWeakObjectPtr<class AActor>                       Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          TargetComponent;                                          // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsHeadshot;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HitPos;                                                   // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitEnvLocation;                                           // 0x0020(0x000C) (IsPlainOldData)
	float                                              HitAngleCos;                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      HitPhysMatType;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreTakeDamage;                                         // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct Skill.ItemSkillsConfig
// 0x0028
struct FItemSkillsConfig
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty Skill.ItemSkillsConfig.SkillTemplateClass
};

// ScriptStruct Skill.SharedDelegateWrap
// 0x0020
struct FSharedDelegateWrap
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     Outer;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Skill.MultiSharedDelegateWrap
// 0x0020
struct FMultiSharedDelegateWrap
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     Outer;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Skill.LuaEventRegistWrap
// 0x0040
struct FLuaEventRegistWrap
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	class UObject*                                     Outer;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Skill.SkillFuncNameSelector
// 0x0008
struct FSkillFuncNameSelector
{
	struct FName                                       SelectedKeyName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

// ScriptStruct Skill.UTSkillBBUploadData
// 0x0010
struct FUTSkillBBUploadData
{
	TArray<struct FUAEBlackboardKeySelector>           KeySelectors;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Skill.UTSkillInstance
// 0x00E0
struct FUTSkillInstance
{
	int                                                SkillID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurPhaseIndex;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LastPhaseIndex;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	uint64_t                                           InstanceID;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SkillSlot;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ActiveState;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SkillCDIndex;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	EUTSkillStopReason                                 StopReason;                                               // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<EUTSkillEventType>>             EventCache;                                               // 0x0030(0x0010) (ZeroConstructor)
	class UUAEBlackboard*                              Blackboard;                                               // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUTSkillCreateData                          SkillBaseData;                                            // 0x0048(0x0078)
	TWeakObjectPtr<class AUTSkill>                     CurSkill;                                                 // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UUTSkillWidget>               CurSkillWidget;                                           // 0x00C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UUTSkillManagerComponent>     OwnerComp;                                                // 0x00D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bGsListener;                                              // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
};

// ScriptStruct Skill.SkillParamaterModifier
// 0x0000 (0x0020 - 0x0020)
struct FSkillParamaterModifier : public FSkillParamater
{
	ESkillAttrOperator                                 CDRecoveryScaleOP;                                        // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESkillAttrOperator                                 SkillRuntimeScaleOp;                                      // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct Skill.SkillClassIDData
// 0x0010
struct FSkillClassIDData
{
	struct FName                                       SkillClassName;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Skill.UTSkillAutoTriggerCondition
// 0x0028
struct FUTSkillAutoTriggerCondition
{
	TEnumAsByte<ESkillConditionType>                   Condition;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Param_W;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Param_X;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Param_Y;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Param_Z;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESkillEndConditionType>                EndCondition;                                             // 0x0014(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                Param_A;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Param_B;                                                  // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Param_C;                                                  // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Param_D;                                                  // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Skill.UTSkillEventActionMap
// 0x0030
struct FUTSkillEventActionMap
{
	TEnumAsByte<EUTSkillEventType>                     SkillEventType;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UUTSkillEffect*                              Action;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UUTSkillCondition*>                   Conditions;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<class UUTSkillCondition*>                   TargetConditions;                                         // 0x0020(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct Skill.SkillFlowExecutionStep
// 0x0070
struct FSkillFlowExecutionStep
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct Skill.SkillFlowStatsLog
// 0x0020
struct FSkillFlowStatsLog
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

}

