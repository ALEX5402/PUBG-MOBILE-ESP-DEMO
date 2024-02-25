#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Skill.UTSkillBaseWidget
// 0x0038 (0x0060 - 0x0028)
class UUTSkillBaseWidget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	bool                                               bWidgetEnabled;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FString                                     EffectName;                                               // 0x0038(0x0010) (Edit, ZeroConstructor, EditConst)
	class AActor*                                      BuffTargetActor;                                          // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AUTSkill>                     OwnerSkill;                                               // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UActorComponent*                             CurOwnerActorComponent;                                   // 0x0058(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillBaseWidget");
		return pStaticClass;
	}


	void SetValueAsWeakObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue);
	void SetValueAsVector(const struct FUAEBlackboardKeySelector& Key, const struct FVector& VectorValue);
	void SetValueAsString(const struct FUAEBlackboardKeySelector& Key, const struct FString& StringValue);
	void SetValueAsRotator(const struct FUAEBlackboardKeySelector& Key, const struct FRotator& RotatorValue);
	void SetValueAsObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue);
	void SetValueAsName(const struct FUAEBlackboardKeySelector& Key, const struct FName& NameValue);
	void SetValueAsInt(const struct FUAEBlackboardKeySelector& Key, int IntValue);
	void SetValueAsFloat(const struct FUAEBlackboardKeySelector& Key, float FloatValue);
	void SetValueAsEnum(const struct FUAEBlackboardKeySelector& Key, unsigned char EnumValue);
	void SetValueAsClass(const struct FUAEBlackboardKeySelector& Key, class UClass* ClassValue);
	void SetValueAsBool(const struct FUAEBlackboardKeySelector& Key, bool BoolValue);
	bool IsExistWeakObject(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistVector(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistString(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistRotator(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistObject(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistName(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistInt(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistFloat(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistEnum(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistClass(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistBool(const struct FUAEBlackboardKeySelector& Key);
	class UObject* GetValueAsWeakObject(const struct FUAEBlackboardKeySelector& Key);
	class AActor* GetValueAsWeakActor(const struct FUAEBlackboardKeySelector& Key);
	struct FVector GetValueAsVector(const struct FUAEBlackboardKeySelector& Key);
	struct FString GetValueAsString(const struct FUAEBlackboardKeySelector& Key);
	struct FRotator GetValueAsRotator(const struct FUAEBlackboardKeySelector& Key);
	class UObject* GetValueAsObject(const struct FUAEBlackboardKeySelector& Key);
	struct FName GetValueAsName(const struct FUAEBlackboardKeySelector& Key);
	int GetValueAsInt(const struct FUAEBlackboardKeySelector& Key);
	float GetValueAsFloat(const struct FUAEBlackboardKeySelector& Key);
	unsigned char GetValueAsEnum(const struct FUAEBlackboardKeySelector& Key);
	class UClass* GetValueAsClass(const struct FUAEBlackboardKeySelector& Key);
	bool GetValueAsBool(const struct FUAEBlackboardKeySelector& Key);
	class AActor* GetValueAsActor(const struct FUAEBlackboardKeySelector& Key);
	class UUAEBlackboard* GetUAEBlackboardBySkillComp(class UUTSkillManagerComponent* InOwnerSkillManager);
	class UUAEBlackboard* GetUAEBlackboard();
	class UUTSkillManagerComponent* GetOwnerSkillManager();
	class AActor* GetOwnerPawn();
	TMap<TWeakObjectPtr<class AActor>, class UUAEBlackboard*> GetActorBlackboardBySkillComp(class UUTSkillManagerComponent* InOwnerSkillManager);
	TMap<TWeakObjectPtr<class AActor>, class UUAEBlackboard*> GetActorBlackboard();
};


// Class Skill.UTSkillCondition
// 0x0008 (0x0068 - 0x0060)
class UUTSkillCondition : public UUTSkillBaseWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillCondition");
		return pStaticClass;
	}


	void PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	bool IsTargetOK(class UActorComponent* SkillManagerComponent, class AActor* Target);
	bool IsOK_Internal();
	bool IsOK(class UActorComponent* SkillManagerComponent);
	class AUTSkill* GetOwnerSkill();
};


// Class Skill.UTSkillEffect
// 0x0018 (0x0078 - 0x0060)
class UUTSkillEffect : public UUTSkillBaseWidget
{
public:
	float                                              fADScale;                                                 // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fAPScale;                                                 // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             CacheSoftObject;                                          // 0x0068(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillEffect");
		return pStaticClass;
	}


	void UpdateAction(class UUTSkillManagerComponent* SkillManagerComponent, float DeltaSeconds);
	void UndoAction(class UUTSkillManagerComponent* SkillManagerComponent);
	void PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void OnAsyncLoadSoftPathDone();
	class AUTSkill* GetOwnerSkill();
	void DoHurtAppearance(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim);
	bool DoAction(class UUTSkillManagerComponent* SkillManagerComponent);
};


// Class Skill.UTSkillAction
// 0x0028 (0x00A0 - 0x0078)
class UUTSkillAction : public UUTSkillEffect
{
public:
	struct FUTSkillActionCreateData                    BaseData;                                                 // 0x0078(0x0008) (Edit)
	class UUTSkillAction*                              OwnerPeriodAction;                                        // 0x0080(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0088(0x0001) MISSED OFFSET
	bool                                               bClearTimerAfterReset;                                    // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x008A(0x0006) MISSED OFFSET
	class UObject*                                     EventObj;                                                 // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillAction");
		return pStaticClass;
	}


	void UpdateAction_Internal(float DeltaSeconds);
	void UpdateAction(class UUTSkillManagerComponent* SkillManagerComponent, float DeltaSeconds);
	void UndoAction_Internal();
	void UndoAction(class UUTSkillManagerComponent* SkillManagerComponent);
	void TimerRealDoAction(class UUTSkillManagerComponent* SkillManagerComponent);
	void Reset_Internal();
	void Reset(class UActorComponent* SkillManagerComponent);
	bool RealDoAction_Internal();
	bool RealDoAction(class UUTSkillManagerComponent* SkillManagerComponent);
	void PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void OnAsyncLoadAssetDone(class UUTSkillManagerComponent* SkillManagerComponent);
	bool JudgeNeedPhaseWait();
	bool DoAction(class UUTSkillManagerComponent* SkillManagerComponent);
};


// Class Skill.UTSkill
// 0x01E8 (0x06A0 - 0x04B8)
class AUTSkill : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04B8(0x0010) MISSED OFFSET
	bool                                               bNeedSync;                                                // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	struct FString                                     SkillName;                                                // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       SkillGroup;                                               // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSinglePhaseRep;                                          // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESkillCastType                                     SkillCastType;                                            // 0x04E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldMonopolize;                                        // 0x04EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMonopolizeSelf;                                          // 0x04EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // 0x04EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SkillTemplateID;                                          // 0x04F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET
	struct FString                                     SkillDescription;                                         // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SkillDetailDes;                                           // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bMeleeSkill;                                              // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckFirstPhaseConditions;                               // 0x0519(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedAutonomousClientSimulate;                            // 0x051A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepCastingWhenDisconnect;                               // 0x051B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClearInputCache;                                         // 0x051C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x051D(0x0003) MISSED OFFSET
	struct FUTSkillCreateData                          BaseData;                                                 // 0x0520(0x0078) (Edit, BlueprintVisible)
	int                                                SkillCategory;                                            // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseNewSkillCD;                                           // 0x059C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x059D(0x0003) MISSED OFFSET
	TArray<struct FUAEBlackboardParameter>             BlackboardParamList;                                      // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bSetBlackboardDefaultData;                                // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGsListener;                                              // 0x05B1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRecycleWhenStop;                                         // 0x05B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x05B3(0x0005) MISSED OFFSET
	struct FString                                     SkillTimeScaleAttrName;                                   // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class UObject*, int>                          InstancedNodeNameToMemoryMap;                             // 0x05C8(0x0050) (ZeroConstructor)
	int                                                InstancedNodesTotalSize;                                  // 0x0618(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x061C(0x0004) MISSED OFFSET
	TArray<struct FString>                             ParentFolderPath;                                         // 0x0620(0x0010) (ZeroConstructor)
	int64_t                                            LastEditBluePrintTime;                                    // 0x0630(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                CurComponentNameIndex;                                    // 0x0638(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsSkillEnabled;                                           // 0x063C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x53];                                      // 0x063D(0x0053) MISSED OFFSET
	TWeakObjectPtr<class UUTSkillManagerComponent>     SpecificSkillCompRef;                                     // 0x0690(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UUAEBlackboard>               SpecificBlackBlackRef;                                    // 0x0698(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkill");
		return pStaticClass;
	}


	void StopSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex);
	void ResetSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex);
	bool OnEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<EUTSkillEventType> TheEventType, int PhaseIndex);
	bool IsEnableSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent);
	bool IsCDOK(class UUTSkillManagerComponent* SkillManagerComponent);
	class UUTSkillManagerComponent* GetSpecificSkillManager();
	class UUAEBlackboard* GetSpecificBlackboard();
	class UUTSkillPhase* GetSkillPhaseByName(const struct FString& PhaseName);
	class UUTSkillPhase* GetSkillPhase(int PhaseIndex);
	class UUTSkillBaseWidget* GetSkillEffectByPhaseName(const struct FString& PhaseName, const struct FString& EffectName);
	class UUTSkillBaseWidget* GetSkillEffectByPhaseIndex(int PhaseIndex, const struct FString& EffectName);
	float GetSkillDurationScale(class UUTSkillManagerComponent* SkillManagerComponent);
	float GetRestCoolDownTime(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex);
	void DoSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex);
	bool CanBePlayed(class UUTSkillManagerComponent* SkillManagerComponent, bool bShowErrorMsg);
};


// Class Skill.UTSkillManagerComponent
// 0x07A0 (0x0978 - 0x01D8)
class UUTSkillManagerComponent : public ULuaActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x01D8(0x0058) MISSED OFFSET
	class APawn*                                       OwnerPawn;                                                // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0238(0x0020) MISSED OFFSET
	bool                                               bEnableSkillCoolDown;                                     // 0x0258(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	class AActor*                                      OwnerActor;                                               // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DestroySkillsOnDie;                                       // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	TMap<int, TWeakObjectPtr<class AUTSkill>>          SkillIDToSkills;                                          // 0x0270(0x0050) (ZeroConstructor, Transient)
	TMap<int, class UUAEBlackboard*>                   SkillIDBlackboardMap;                                     // 0x02C0(0x0050) (ZeroConstructor, Transient)
	TMap<TWeakObjectPtr<class AActor>, class UUAEBlackboard*> ActorBlackboardMap;                                       // 0x0310(0x0050) (ZeroConstructor)
	struct FScriptMulticastDelegate                    ChangeActorBlackboard;                                    // 0x0360(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TMap<int, struct FUTSkillCreateData>               SkillBaseDataMaps;                                        // 0x0370(0x0050) (ZeroConstructor)
	TArray<struct FUTSkillLastCastInfo>                LastCastArray;                                            // 0x03C0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnSkillCast;                                              // 0x03D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TMap<int, int>                                     IDToSyncSkillActiveStateData;                             // 0x03E0(0x0050) (ZeroConstructor)
	TArray<struct FSkillActiveRepData>                 SyncSkillActiveStateDatas;                                // 0x0430(0x0010) (Net, ZeroConstructor)
	TMap<int, int>                                     IDToSyncSkillCDDatas;                                     // 0x0440(0x0050) (ZeroConstructor)
	TMap<int, int>                                     ButtonSlotToSkillID;                                      // 0x0490(0x0050) (ZeroConstructor)
	struct FTeammateSkillCDRepData                     TeammateSkillCDRepData;                                   // 0x04E0(0x0010)
	struct FSkillDynamicRepData                        SyncDynamicRepData;                                       // 0x04F0(0x0010) (Net)
	TArray<struct FSkillCDRepData>                     SyncSkillCDDatas;                                         // 0x0500(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0510(0x0008) MISSED OFFSET
	struct FUTSkillHitInfo                             SkillHitInfo;                                             // 0x0518(0x0030) (Net)
	struct FUTSkillHitEnvInfo                          SkillHitEnvInfo;                                          // 0x0548(0x0030)
	TArray<struct FString>                             MutexMontageGroupBeenPlayed;                              // 0x0578(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0588(0x0004) MISSED OFFSET
	int                                                SkillSynRandomSeed;                                       // 0x058C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               SkillSynRandStream;                                       // 0x0590(0x0008)
	int                                                SkillSynRandomSeedExpireCount;                            // 0x0598(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	TMap<struct FString, struct FTimerHandle>          SkillTimerMap;                                            // 0x05A0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData07[0x8];                                       // 0x05F0(0x0008) MISSED OFFSET
	TArray<struct FSkillParamater>                     SkillParamaters;                                          // 0x05F8(0x0010) (Net, ZeroConstructor)
	TArray<struct FUTMutilSkillSynData>                SkillSynData;                                             // 0x0608(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	unsigned char                                      UnknownData08[0x10];                                      // 0x0618(0x0010) MISSED OFFSET
	TArray<struct FUTSkillSynSinglePhaseData>          SkillSynSinglePhaseData;                                  // 0x0628(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	unsigned char                                      UnknownData09[0x28];                                      // 0x0638(0x0028) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSkillInitSignature;                                     // 0x0660(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkillStartEvent;                                          // 0x0670(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkillStopEvent;                                           // 0x0680(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkillLevelChangeEvent;                                    // 0x0690(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<int>                                        PendingRemoveSkillID;                                     // 0x06A0(0x0010) (ZeroConstructor)
	TMap<int, unsigned char>                           CurSKillLevels;                                           // 0x06B0(0x0050) (ZeroConstructor, Transient)
	TArray<struct FUTReplaceSkillData>                 ReplacedSkillDatas;                                       // 0x0700(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	struct FMutilSkillSynData                          NewSkillSynData;                                          // 0x0710(0x0030) (BlueprintVisible, Net)
	struct FSkillSinglePhaseData                       NewSkillSinglePhaseData;                                  // 0x0740(0x0030) (BlueprintVisible, Net)
	bool                                               bEnablePendingStopSkill;                                  // 0x0770(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0771(0x0007) MISSED OFFSET
	TMap<int, struct FUTSkillSimulateData>             PendingRemoveSkillInstMap;                                // 0x0778(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData11[0x50];                                      // 0x07C8(0x0050) UNKNOWN PROPERTY: SetProperty Skill.UTSkillManagerComponent.AsyncLoadingSkillInst
	struct FUTSkillPreSetBlackboard                    SkillPreSetBlackboard;                                    // 0x0818(0x0050)
	struct FUTSkillExecQueue                           SkillExecQueue;                                           // 0x0868(0x0110)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillManagerComponent");
		return pStaticClass;
	}


	bool UseSkillInstance();
	void UpdateSyncSkillCDData(int SkillID);
	void UpdateSyncSkillActiveState(int SkillID);
	void UnRegisterActorBlackBorad(class AActor* InActor);
	void TryDeleteOneSkill(int SkillID, bool IsImmediately);
	void TryAddOneSkill(int SkillID, bool bActive, int ButtonSlot);
	void TriggerEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType);
	bool TraceTarget(const struct FVector& StartTrace, const struct FVector& EndTrace, EUTPickerTargetType TargetType, float Radius, class AActor** TargetActor);
	void SyncOneSkillState(bool RepSkillCD, bool RepSkillActiveState, int RequestID);
	bool StopSkillWithSlot(int SkillSlot, EUTSkillStopReason StopReason);
	void StopSkillSpecific(class AUTSkill* Skill, EUTSkillStopReason StopReason);
	void StopSkillAll(EUTSkillStopReason StopReason);
	int StopSkill_WithID(int SkillID, EUTSkillStopReason StopReason);
	void StopSkill(int SkillID, EUTSkillStopReason StopReason);
	bool ShouldTriggerEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType);
	bool SetupOwnerAndSystem();
	void SetSkillState(TArray<struct FUTSkillStateSyncData> InSyncStateDatas);
	void SetSkillOwner(class AActor* tempActor);
	void SetSkillLevel(int SkillID, int SkillLevel);
	bool SetSkillActive(int SkillID, bool bActive, bool bForceSet, int ButtonSlot);
	void SetCurSkill(int SkillID, int SkillSlot);
	void SetAutoSkillID(int InSkillID);
	void ServerTriggerEvent_WithParams(int SkillID, TEnumAsByte<EUTSkillEventType> EventType, uint64_t InstID, TArray<struct FUAEBlackboardKeySelector> KeySelectors, TArray<unsigned char> Content);
	void ServerTriggerEvent_WithID(int SkillID, TEnumAsByte<EUTSkillEventType> EventType, uint64_t InstID);
	void ServerTriggerEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType);
	void ServerStopAllSkill(EUTSkillStopReason Reason);
	bool ServerStartSkill(int SkillID, bool bAutoCast);
	void ServerNotifyRandomSeed(int Seed);
	void ResetTeammateSkillCDData();
	void ResetSkillCoolDown(int SkillID, int CDIndex);
	void ResetAllSkillCoolDown();
	void RequestSkillStates(bool RepSkillCD, bool RepSkillActiveState, TArray<int> RequestIDs);
	void RepSkillHitInfo();
	void RepOneSkillSynData(int SkillSlot, int InLastSkillID);
	void RepLastCastTime();
	void ReplaceSkill(int OldSkillID, int NewSkillID);
	void RemoveReplacedSkill(int OldSkillID);
	void RemoveAllSkillUIWidget();
	void RegisterActorBlackBorad(class AActor* InActor, class UUAEBlackboard* RegisterBlackboard);
	int RandRangeSyn(int StartIndex, int EndIndex);
	class AUTSkill* QuerySkill(int SkillID, bool bOnlyQuery);
	void PlayHurtSkillEffect(const struct FUTSkillHitInfo& TheSkillHitInfo);
	void OnStopSkill(class AUTSkill* Skill, EUTSkillStopReason StopReason);
	void OnRespawned();
	void OnRep_SkillSynSinglePhaseData();
	void OnRep_SkillSynData();
	void OnRep_SkillHitInfo();
	void OnRep_SkillCDDatas();
	void OnRep_SkillActiveState();
	void OnRep_ReplaceSkill();
	void OnRep_NewSkillSynData();
	void OnRep_NewSkillSinglePhaseData();
	void OnRep_DynamicRepData();
	void OnRecycled();
	void OnInterruptSkill(class AUTSkill* Skill, EUTSkillStopReason StopReason);
	bool IsUsingSkill(int SkillID);
	bool IsSkillCanUse();
	bool IsSkillActived(int SkillID);
	bool IsReadyToCastSkill(int SkillID);
	bool IsEnableSkillCoolDown();
	bool IsCurrentUseSkillID(int InSkillID);
	bool IsCastingSkillID(int InSkillID);
	bool IsCastingSkill();
	bool HandleTriggerParamsEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType);
	void HandleSkillStop(int SkillID, EUTSkillStopReason StopReason);
	void HandleSkillStart(int SkillID);
	class UUAEBlackboard* GetUAEBlackboardBySkillId(int SkillID);
	class UUAEBlackboard* GetUAEBlackboard(class AUTSkill* InSkill);
	class UUTSkillWidget* GetSkillWidget(int SkillID);
	TArray<struct FUTSkillStateSyncData> GetSkillState();
	int GetSkillSlotBySkillID(int SkillID);
	int GetSkillSlotBySkill(class AUTSkill* Skill);
	TArray<class AUTSkill*> GetSkillsByGroup(const struct FName& SkillGroup);
	int GetSkillLevel(int SkillID);
	int GetSkillIDFromSkillIndex(int InSkillIndex);
	int GetSkillIDByClass(class UClass* SkillClass);
	TArray<struct FString> GetSkillExecString();
	int GetSkillCurPhase(class AUTSkill* Skill);
	class AUTSkill* GetSkillByName(const struct FString& SkillName);
	class AUTSkill* GetSkillByClassName(const struct FString& SkillClassName);
	int GetSkillButtonSlot(int SkillID);
	struct FUTSkillCreateData GetSkillBaseData(int SkillID);
	class AUTSkill* GetSkill(int SkillID);
	int GetReplacedSkill(int OldSkillID);
	TEnumAsByte<ENetRole> GetRealOwnerRoleSafety();
	TEnumAsByte<ESkillMutexType> GetMutexRelation(int TempSkillID, int InSkillID);
	float GetLastCastTime(int SkillID);
	float GetLastCastFinishTime(int SkillID);
	TArray<int> GetCurUsingSkillIDS();
	TArray<class AUTSkill*> GetCurSkills();
	class UUTSkillPhase* GetCurSkillPhase(int InSkillSlot);
	TArray<int> GetCurSkillIDs();
	int GetCurSkillID(class AUTSkill* Skill);
	class AUTSkill* GetCurSkill(int InSkillSlot);
	TArray<int> GetCurMonopolizeSkills();
	TArray<int> GetCurAllSkillIDs();
	int GetButtonSlotSkillID(int ButtonSlot);
	int FindRelatedCurSkillID(int SkillID, bool bPeekSlotIndex, int* OutRelatedSkillSlot);
	void DynamicRemoveSkill(int InSkillID);
	void DynamicAddSkill(int InSkillID);
	void ClientStopOneSkill(uint64_t InstID, int SkillID, bool bSinglePhaseRep);
	void ClientStartSkill(int SkillID, bool bAutoCast);
	void ClientSimulateOneSkill(uint64_t InstID, int SkillID, int PhaseIndex);
	void ClearSkill();
	void ClearRepParams();
	void ClearInitParams();
	void CacheSkillWidget(int SkillID, class UUTSkillWidget* Widget);
};


// Class Skill.UTSkillEventEffectMapForEditor
// 0x0048 (0x00A8 - 0x0060)
class UUTSkillEventEffectMapForEditor : public UUTSkillBaseWidget
{
public:
	TEnumAsByte<EUTSkillEventType>                     SkillEventType;                                           // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	TArray<struct FName>                               InterestedOwnerTags;                                      // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       PreEventActionTag;                                        // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUTSkillEffect*                              SkillEffect;                                              // 0x0080(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FSkillConditionWarpper>              Conditions;                                               // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSkillConditionWarpper>              TargetConditions;                                         // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillEventEffectMapForEditor");
		return pStaticClass;
	}

};


// Class Skill.UTSkillInterface
// 0x0000 (0x0028 - 0x0028)
class UUTSkillInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillInterface");
		return pStaticClass;
	}


	bool HasSkillToken(int SkillID);
	void HandleSkillStart(int SkillID);
	void HandleSkillEnd(int SkillID, EUTSkillStopReason Reason);
	class UUTSkillManagerComponent* GetSkillManager();
	void ClearSkillToken(int SkillID);
	void ClearAllSkillToken();
	void AddSkillToken(int SkillID);
};


// Class Skill.UTSkillPhase
// 0x00E8 (0x0110 - 0x0028)
class UUTSkillPhase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FString                                     PhaseName;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     PhaseDescription;                                         // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bPhaseEnabled;                                            // 0x0050(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	TWeakObjectPtr<class AUTSkill>                     OwnerSkill;                                               // 0x0054(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PhaseIndex;                                               // 0x005C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0060(0x0018) MISSED OFFSET
	int                                                ActionsTopHalfCount;                                      // 0x0078(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FUTSkillPhaseCreateData                     BaseData;                                                 // 0x0080(0x0088) (Edit)
	class UUTSkillPicker*                              InEffectPickerOnAction;                                   // 0x0108(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillPhase");
		return pStaticClass;
	}


	bool TryJumpToPhase(class UUTSkillManagerComponent* SkillManagerComponent, int PhaseId);
	void StopPhase(class UUTSkillManagerComponent* SkillManagerComponent);
	void StartPhase(class UUTSkillManagerComponent* SkillManagerComponent);
	void RepeatPhase(class UUTSkillManagerComponent* SkillManagerComponent);
	bool PlaySkillHurtEffect(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim);
	bool PlaySkillHurtAppearances(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim);
	void PickTargets(class UUTSkillManagerComponent* SkillManagerComponent);
	bool OnEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<EUTSkillEventType> TheEventType);
	bool OnCustomEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<EUTSkillEventType> TheEventType);
	float GetChargePhaseRate(class UUTSkillManagerComponent* SkillManagerComponent);
	bool ForceStopPhase(class UUTSkillManagerComponent* SkillManagerComponent);
	bool ClearAttachments();
	void AfterStartPhase(class UUTSkillManagerComponent* SkillManagerComponent);
};


// Class Skill.UTSkillPicker
// 0x0050 (0x00B0 - 0x0060)
class UUTSkillPicker : public UUTSkillBaseWidget
{
public:
	struct FUTSkillPickerCreateData                    BaseData;                                                 // 0x0060(0x0020) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	TArray<struct FUTSkillPickedTarget>                PickedResultTargets;                                      // 0x0090(0x0010) (ZeroConstructor, Transient)
	TArray<class UUTSkillPickerFilter*>                Filters;                                                  // 0x00A0(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillPicker");
		return pStaticClass;
	}


	bool PickTargetsInner(const struct FVector& OriginPoint);
	bool PickTargets(const struct FVector& OriginPoint);
};


// Class Skill.UTSkillPickerFilter
// 0x0000 (0x0028 - 0x0028)
class UUTSkillPickerFilter : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillPickerFilter");
		return pStaticClass;
	}


	void HandleFilterArray(class AActor* Owner, TArray<struct FUTSkillPickedTarget>* inArray);
};


// Class Skill.UTSkillWidget
// 0x0018 (0x04A8 - 0x0490)
class UUTSkillWidget : public ULuaUAEUserWidget
{
public:
	class UUTSkillManagerComponent*                    SkillManager;                                             // 0x0490(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SkillID;                                                  // 0x0498(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TickInterval;                                             // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTick;                                              // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillWidget");
		return pStaticClass;
	}


	void TriggerPassiveEvent(TEnumAsByte<EUTSkillEventType> SkillEvent);
	void TriggerEvent(TEnumAsByte<EUTSkillEventType> SkillEvent);
	void SetSkillManager(class UUTSkillManagerComponent* Manager);
	void SetSkillID(int InSkillID);
	void RemoveSelf();
	class UUTSkillManagerComponent* GetSkillManager();
	int GetSkillID();
	TArray<class UUTSkillCDBase*> GetSkillCDBases();
	class AUTSkill* GetSkill();
	class APlayerController* GetLocalPlayerController();
};


// Class Skill.UTSkillLocationPicker
// 0x0000 (0x0060 - 0x0060)
class UUTSkillLocationPicker : public UUTSkillBaseWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillLocationPicker");
		return pStaticClass;
	}

};


// Class Skill.AddNewSkillToOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UAddNewSkillToOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.AddNewSkillToOwnerInterface");
		return pStaticClass;
	}


	TArray<struct FItemSkillsConfig> GetSkillTemplates();
};


// Class Skill.SharedDelegate
// 0x0020 (0x0048 - 0x0028)
class USharedDelegate : public UObject
{
public:
	class UObject*                                     FunctionOuter;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.SharedDelegate");
		return pStaticClass;
	}


	void EventTrigger();
};


// Class Skill.LuaEventSharedDelegate
// 0x0000 (0x0048 - 0x0048)
class ULuaEventSharedDelegate : public USharedDelegate
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.LuaEventSharedDelegate");
		return pStaticClass;
	}

};


// Class Skill.SharedDelegateManager
// 0x00F0 (0x0120 - 0x0030)
class USharedDelegateManager : public UWorldSubsystem
{
public:
	TMap<struct FSharedDelegateWrap, class USharedDelegate*> DelegateMap;                                              // 0x0030(0x0050) (ZeroConstructor)
	TMap<struct FMultiSharedDelegateWrap, class USharedDelegate*> MultiDelegateMap;                                         // 0x0080(0x0050) (ZeroConstructor)
	TMap<struct FLuaEventRegistWrap, class ULuaEventSharedDelegate*> LuaEventRegistMap;                                        // 0x00D0(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.SharedDelegateManager");
		return pStaticClass;
	}

};


// Class Skill.SkillNodeLuaInterface
// 0x0000 (0x0028 - 0x0028)
class USkillNodeLuaInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.SkillNodeLuaInterface");
		return pStaticClass;
	}

};


// Class Skill.UTSkillAction_Lua
// 0x00C8 (0x0168 - 0x00A0)
class UUTSkillAction_Lua : public UUTSkillAction
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00A0(0x0068) MISSED OFFSET
	TMap<struct FName, struct FString>                 ActionParams;                                             // 0x0108(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaFilePath;                                              // 0x0158(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillAction_Lua");
		return pStaticClass;
	}

};


// Class Skill.UTSkillBlackboardInterface
// 0x0000 (0x0028 - 0x0028)
class UUTSkillBlackboardInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillBlackboardInterface");
		return pStaticClass;
	}


	void SetValueAsWeakObject(int SkillID, const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue);
	void SetValueAsVector(int SkillID, const struct FUAEBlackboardKeySelector& Key, const struct FVector& VectorValue);
	void SetValueAsString(int SkillID, const struct FUAEBlackboardKeySelector& Key, const struct FString& StringValue);
	void SetValueAsRotator(int SkillID, const struct FUAEBlackboardKeySelector& Key, const struct FRotator& VectorValue);
	void SetValueAsObject(int SkillID, const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue);
	void SetValueAsName(int SkillID, const struct FUAEBlackboardKeySelector& Key, const struct FName& NameValue);
	void SetValueAsInt(int SkillID, const struct FUAEBlackboardKeySelector& Key, int IntValue);
	void SetValueAsFloat(int SkillID, const struct FUAEBlackboardKeySelector& Key, float FloatValue);
	void SetValueAsEnum(int SkillID, const struct FUAEBlackboardKeySelector& Key, unsigned char EnumValue);
	void SetValueAsClass(int SkillID, const struct FUAEBlackboardKeySelector& Key, class UClass* ClassValue);
	void SetValueAsBool(int SkillID, const struct FUAEBlackboardKeySelector& Key, bool BoolValue);
	bool IsExistWeakObject(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistVector(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistString(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistRotator(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistObject(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistName(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistInt(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistFloat(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistEnum(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistClass(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistBool(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	struct FVector GetValueAsVector(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	struct FString GetValueAsString(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	struct FRotator GetValueAsRotator(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	struct FName GetValueAsName(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	int GetValueAsInt(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	float GetValueAsFloat(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	unsigned char GetValueAsEnum(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	class UClass* GetValueAsClass(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool GetValueAsBool(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	class UUAEBlackboard* GetUAEBlackboardBySkillId(int SkillID);
};


// Class Skill.UTSkillCDBase
// 0x0028 (0x00C8 - 0x00A0)
class UUTSkillCDBase : public ULuaObject
{
public:
	TWeakObjectPtr<class UUTSkillManagerComponent>     OwnerSkillManager;                                        // 0x00A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class AUTSkill>                     OwnerSkill;                                               // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              SyncContent;                                              // 0x00B0(0x0010) (ZeroConstructor)
	bool                                               bIgnoreCastSkillCheck;                                    // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillCDBase");
		return pStaticClass;
	}


	void BindLua(const struct FString& luaPath);
};


// Class Skill.UTSkillCondition_Lua
// 0x00C8 (0x0130 - 0x0068)
class UUTSkillCondition_Lua : public UUTSkillCondition
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0068(0x0068) MISSED OFFSET
	TMap<struct FName, struct FString>                 ConditionParams;                                          // 0x00D0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaFilePath;                                              // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillCondition_Lua");
		return pStaticClass;
	}

};


// Class Skill.UTSkillEvent
// 0x0008 (0x0030 - 0x0028)
class UUTSkillEvent : public UObject
{
public:
	TEnumAsByte<EUTSkillEventType>                     SkillEventType;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillEvent");
		return pStaticClass;
	}

};


// Class Skill.UTSkillInstancedNodeContainerInterface
// 0x0000 (0x0028 - 0x0028)
class UUTSkillInstancedNodeContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillInstancedNodeContainerInterface");
		return pStaticClass;
	}

};


// Class Skill.UTSkillInstancedNodeInterface
// 0x0000 (0x0028 - 0x0028)
class UUTSkillInstancedNodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillInstancedNodeInterface");
		return pStaticClass;
	}

};


// Class Skill.UTSkillFunctionBase
// 0x0018 (0x0078 - 0x0060)
class UUTSkillFunctionBase : public UUTSkillBaseWidget
{
public:
	struct FSkillFuncNameSelector                      DoActionFuncKey;                                          // 0x0060(0x0008) (Edit, BlueprintVisible)
	struct FSkillFuncNameSelector                      UndoActionFuncKey;                                        // 0x0068(0x0008) (Edit, BlueprintVisible)
	struct FSkillFuncNameSelector                      ConditionFuncKey;                                         // 0x0070(0x0008) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillFunctionBase");
		return pStaticClass;
	}

};


// Class Skill.UTSkillSpecificAction
// 0x0010 (0x00B0 - 0x00A0)
class UUTSkillSpecificAction : public UUTSkillAction
{
public:
	struct FSkillFuncNameSelector                      DoActionFuncKey;                                          // 0x00A0(0x0008) (Edit, BlueprintVisible)
	struct FSkillFuncNameSelector                      UndoActionFuncKey;                                        // 0x00A8(0x0008) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillSpecificAction");
		return pStaticClass;
	}


	void UpdateAction_Internal(float DeltaSeconds);
	void UndoAction_Internal();
	void Reset_Internal();
	bool RealDoAction_Internal();
	void PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
};


// Class Skill.UTSkillSpecificCondition
// 0x0008 (0x0070 - 0x0068)
class UUTSkillSpecificCondition : public UUTSkillCondition
{
public:
	struct FSkillFuncNameSelector                      ConditionFuncKey;                                         // 0x0068(0x0008) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillSpecificCondition");
		return pStaticClass;
	}

};


// Class Skill.SkillUtil
// 0x0000 (0x0028 - 0x0028)
class USkillUtil : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.SkillUtil");
		return pStaticClass;
	}

};


}

