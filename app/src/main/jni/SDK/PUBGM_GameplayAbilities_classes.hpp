#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilitySystemBlueprintLibrary");
		return pStaticClass;
	}


	bool TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	bool TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index);
	bool TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	bool TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	struct FGameplayEffectSpecHandle SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle);
	struct FGameplayEffectSpecHandle SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int StackCount);
	struct FGameplayEffectSpecHandle SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration);
	void SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
	bool NotEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
	struct FGameplayEffectSpecHandle MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel);
	struct FGameplayTargetDataFilterHandle MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor);
	bool IsValid(const struct FGameplayAttribute& Attribute);
	bool IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters);
	bool IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters);
	bool HasHitResult(const struct FGameplayCueParameters& Parameters);
	struct FTransform GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	struct FTransform GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	struct FVector GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	struct FVector GetOrigin(const struct FGameplayCueParameters& Parameters);
	float GetModifiedAttributeMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayAttribute& Attribute);
	struct FTransform GetInstigatorTransform(const struct FGameplayCueParameters& Parameters);
	class AActor* GetInstigatorActor(const struct FGameplayCueParameters& Parameters);
	struct FHitResult GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index);
	struct FHitResult GetHitResult(const struct FGameplayCueParameters& Parameters);
	bool GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal);
	bool GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction);
	float GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float GetFloatAttributeBase(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	struct FGameplayEffectContextHandle GetEffectContext(const struct FGameplayEffectSpecHandle& SpecHandle);
	int GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData);
	TArray<struct FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(const struct FGameplayEffectSpecHandle& SpecHandle);
	TArray<class AActor*> GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	int GetActorCount(const struct FGameplayCueParameters& Parameters);
	class AActor* GetActorByIndex(const struct FGameplayCueParameters& Parameters, int Index);
	float GetActiveGameplayEffectTotalDuration(const struct FActiveGameplayEffectHandle& ActiveHandle);
	float GetActiveGameplayEffectStartTime(const struct FActiveGameplayEffectHandle& ActiveHandle);
	int GetActiveGameplayEffectStackLimitCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	int GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	float GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& ActiveHandle);
	float GetActiveGameplayEffectExpectedEndTime(const struct FActiveGameplayEffectHandle& ActiveHandle);
	struct FString GetActiveGameplayEffectDebugString(const struct FActiveGameplayEffectHandle& ActiveHandle);
	class UAbilitySystemComponent* GetAbilitySystemComponent(class AActor* Actor);
	void ForwardGameplayCueToTarget(const TScriptInterface<class UGameplayCueInterface>& TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	struct FGameplayAbilityTargetDataHandle FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass);
	float EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, float baseValue, bool* bSuccess);
	float EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, bool* bSuccess);
	bool EqualEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
	void EffectContextSetOrigin(const struct FGameplayEffectContextHandle& EffectContext, const struct FVector& Origin);
	bool EffectContextIsValid(const struct FGameplayEffectContextHandle& EffectContext);
	bool EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext);
	bool EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	class UObject* EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	struct FVector EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	struct FHitResult EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext);
	void EffectContextAddHitResult(const struct FGameplayEffectContextHandle& EffectContext, const struct FHitResult& HitResult, bool bReset);
	bool DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index, class AActor* Actor);
	bool DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements* SourceTagReqs, struct FGameplayTagRequirements* TargetTagReqs);
	struct FGameplayEffectSpecHandle CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, const struct FGameplayEffectSpecHandle& GameplayEffectSpecHandle_Clone);
	struct FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& DataTag, float Magnitude);
	struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FName& DataName, float Magnitude);
	struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd);
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec);
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffect(const struct FGameplayEffectSpecHandle& SpecHandle, class UClass* LinkedGameplayEffect);
	struct FGameplayEffectSpecHandle AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	struct FGameplayEffectSpecHandle AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	struct FGameplayEffectSpecHandle AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	struct FGameplayEffectSpecHandle AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(const struct FHitResult& HitResult);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(TArray<class AActor*> ActorArray, bool OneTargetPerHandle);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(class AActor* Actor);
};


// Class GameplayAbilities.AbilitySystemComponent
// 0x0F50 (0x10D8 - 0x0188)
class UAbilitySystemComponent : public UGameplayTasksComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET
	TArray<struct FAttributeDefaults>                  DefaultStartingData;                                      // 0x0190(0x0010) (Edit, ZeroConstructor)
	TArray<class UAttributeSet*>                       SpawnedAttributes;                                        // 0x01A0(0x0010) (ExportObject, Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0xC8];                                      // 0x01B0(0x00C8) MISSED OFFSET
	float                                              OutgoingDuration;                                         // 0x0278(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IncomingDuration;                                         // 0x027C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0280(0x0028) MISSED OFFSET
	TArray<struct FString>                             ClientDebugStrings;                                       // 0x02A8(0x0010) (Net, ZeroConstructor)
	TArray<struct FString>                             ServerDebugStrings;                                       // 0x02B8(0x0010) (Net, ZeroConstructor)
	struct FGameplayAbilitySpecContainer               ActivatableAbilities;                                     // 0x02C8(0x00C8) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0390(0x0050) MISSED OFFSET
	TArray<class UGameplayAbility*>                    AllReplicatedInstancedAbilities;                          // 0x03E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x238];                                     // 0x03F0(0x0238) MISSED OFFSET
	TArray<class AGameplayAbilityTargetActor*>         SpawnedTargetActors;                                      // 0x0628(0x0010) (ZeroConstructor)
	struct FGameplayAbilityRepAnimMontage              RepAnimMontageInfo;                                       // 0x0638(0x0030) (Net)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0668(0x0008) MISSED OFFSET
	struct FGameplayAbilityLocalAnimMontage            LocalAnimMontageInfo;                                     // 0x0670(0x0030)
	unsigned char                                      UnknownData06[0xB8];                                      // 0x06A0(0x00B8) MISSED OFFSET
	class AActor*                                      OwnerActor;                                               // 0x0758(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AvatarActor;                                              // 0x0760(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x18];                                      // 0x0768(0x0018) MISSED OFFSET
	struct FActiveGameplayEffectsContainer             ActiveGameplayEffects;                                    // 0x0780(0x0428) (Net)
	struct FActiveGameplayCueContainer                 ActiveGameplayCues;                                       // 0x0BA8(0x00D0) (Net)
	struct FActiveGameplayCueContainer                 MinimalReplicationGameplayCues;                           // 0x0C78(0x00D0) (Net)
	unsigned char                                      UnknownData08[0x128];                                     // 0x0D48(0x0128) MISSED OFFSET
	TArray<unsigned char>                              BlockedAbilityBindings;                                   // 0x0E70(0x0010) (Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData09[0x128];                                     // 0x0E80(0x0128) MISSED OFFSET
	struct FMinimalReplicationTagCountMap              MinimalReplicationTags;                                   // 0x0FA8(0x0060) (Net)
	unsigned char                                      UnknownData10[0x10];                                      // 0x1008(0x0010) MISSED OFFSET
	struct FReplicatedPredictionKeyMap                 ReplicatedPredictionKeyMap;                               // 0x1018(0x00C0) (Net)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilitySystemComponent");
		return pStaticClass;
	}


	bool TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation);
	bool TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);
	void TargetConfirm();
	void TargetCancel();
	void SetUserAbilityActivationInhibited(bool NewInhibit);
	void SetActiveGameplayEffectLevelUsingQuery(const struct FGameplayEffectQuery& Query, int NewLevel);
	void SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int NewLevel);
	void ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey);
	void ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey, const struct FVector_NetQuantize100& VectorPayload);
	void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerPrintDebug_RequestWithStrings(TArray<struct FString> Strings);
	void ServerPrintDebug_Request();
	void ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey);
	void ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate);
	void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, const struct FName& SectionName, const struct FName& NextSectionName);
	void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, const struct FName& SectionName);
	void ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int StacksToRemove);
	bool RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove);
	int RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags);
	int RemoveActiveEffectsWithSourceTags(const struct FGameplayTagContainer& Tags);
	int RemoveActiveEffectsWithGrantedTags(const struct FGameplayTagContainer& Tags);
	int RemoveActiveEffectsWithAppliedTags(const struct FGameplayTagContainer& Tags);
	void OnRep_ServerDebugString();
	void OnRep_ReplicatedAnimMontage();
	void OnRep_OwningActor();
	void OnRep_ClientDebugString();
	void OnRep_ActivateAbilities();
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCuesExecuted(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueAdded_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& Parameters);
	void NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FGameplayEffectContextHandle MakeEffectContext();
	void K2_InitStats(class UClass* Attributes, class UDataTable* DataTable);
	bool IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag);
	bool GetUserAbilityActivationInhibited();
	float GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute);
	int GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
	TArray<struct FActiveGameplayEffectHandle> GetActiveEffects(const struct FGameplayEffectQuery& Query);
	void ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate);
	void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey);
	void ClientPrintDebug_Response(TArray<struct FString> Strings, int GameFlags);
	void ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey);
	void ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16_t PredictionKey);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(class UAbilitySystemComponent* Target, struct FGameplayEffectSpecHandle* SpecHandle);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle* SpecHandle);
	void AbilityConfirmOrCancel__DelegateSignature();
	void AbilityAbilityKey__DelegateSignature(int InputID);
};


// Class GameplayAbilities.AbilitySystemDebugHUD
// 0x0000 (0x04D8 - 0x04D8)
class AAbilitySystemDebugHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilitySystemDebugHUD");
		return pStaticClass;
	}

};


// Class GameplayAbilities.AbilitySystemGlobals
// 0x0210 (0x0238 - 0x0028)
class UAbilitySystemGlobals : public UObject
{
public:
	struct FSoftClassPath                              AbilitySystemGlobalsClassName;                            // 0x0028(0x0018) (Config)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET
	struct FGameplayTag                                ActivateFailCooldownTag;                                  // 0x0068(0x0008)
	struct FName                                       ActivateFailCooldownName;                                 // 0x0070(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FGameplayTag                                ActivateFailCostTag;                                      // 0x0078(0x0008)
	struct FName                                       ActivateFailCostName;                                     // 0x0080(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FGameplayTag                                ActivateFailTagsBlockedTag;                               // 0x0088(0x0008)
	struct FName                                       ActivateFailTagsBlockedName;                              // 0x0090(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FGameplayTag                                ActivateFailTagsMissingTag;                               // 0x0098(0x0008)
	struct FName                                       ActivateFailTagsMissingName;                              // 0x00A0(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FGameplayTag                                ActivateFailNetworkingTag;                                // 0x00A8(0x0008)
	struct FName                                       ActivateFailNetworkingName;                               // 0x00B0(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MinimalReplicationTagCountBits;                           // 0x00B8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowGameplayModEvaluationChannels;                      // 0x00BC(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EGameplayModEvaluationChannel                      DefaultGameplayModEvaluationChannel;                      // 0x00BD(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00BE(0x0002) MISSED OFFSET
	struct FName                                       GameplayModEvaluationChannelAliases[0xA];                 // 0x00C0(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FSoftObjectPath                             GlobalCurveTableName;                                     // 0x0110(0x0018) (Config)
	struct FSoftObjectPath                             GlobalAttributeMetaDataTableName;                         // 0x0128(0x0018) (Config)
	struct FSoftObjectPath                             GlobalAttributeSetDefaultsTableName;                      // 0x0140(0x0018) (Config)
	TArray<struct FSoftObjectPath>                     GlobalAttributeSetDefaultsTableNames;                     // 0x0158(0x0010) (ZeroConstructor, Config)
	struct FSoftObjectPath                             GlobalGameplayCueManagerClass;                            // 0x0168(0x0018) (Config)
	struct FSoftObjectPath                             GlobalGameplayCueManagerName;                             // 0x0180(0x0018) (Config)
	TArray<struct FString>                             GameplayCueNotifyPaths;                                   // 0x0198(0x0010) (ZeroConstructor, Config)
	struct FSoftObjectPath                             GameplayTagResponseTableName;                             // 0x01A8(0x0018) (Config)
	class UGameplayTagReponseTable*                    GameplayTagResponseTable;                                 // 0x01C0(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               PredictTargetGameplayEffects;                             // 0x01C8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01C9(0x0007) MISSED OFFSET
	class UCurveTable*                                 GlobalCurveTable;                                         // 0x01D0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UCurveTable*>                         GlobalAttributeDefaultsTables;                            // 0x01D8(0x0010) (ZeroConstructor)
	class UDataTable*                                  GlobalAttributeMetaDataTable;                             // 0x01E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGameplayCueManager*                         GlobalGameplayCueManager;                                 // 0x01F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x40];                                      // 0x01F8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilitySystemGlobals");
		return pStaticClass;
	}


	void ToggleIgnoreAbilitySystemCosts();
	void ToggleIgnoreAbilitySystemCooldowns();
};


// Class GameplayAbilities.AbilitySystemInterface
// 0x0000 (0x0028 - 0x0028)
class UAbilitySystemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilitySystemInterface");
		return pStaticClass;
	}

};


// Class GameplayAbilities.AttributeSet
// 0x0008 (0x0030 - 0x0028)
class UAttributeSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AttributeSet");
		return pStaticClass;
	}

};


// Class GameplayAbilities.AbilitySystemTestAttributeSet
// 0x0040 (0x0070 - 0x0030)
class UAbilitySystemTestAttributeSet : public UAttributeSet
{
public:
	float                                              Health;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Mana;                                                     // 0x0034(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxMana;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpellDamage;                                              // 0x0040(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              PhysicalDamage;                                           // 0x0044(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              CritChance;                                               // 0x0048(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              CritMultiplier;                                           // 0x004C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ArmorDamageReduction;                                     // 0x0050(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              DodgeChance;                                              // 0x0054(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LifeSteal;                                                // 0x0058(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x005C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StackingAttribute1;                                       // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StackingAttribute2;                                       // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NoStackAttribute;                                         // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilitySystemTestAttributeSet");
		return pStaticClass;
	}

};


// Class GameplayAbilities.AbilitySystemTestPawn
// 0x0020 (0x0498 - 0x0478)
class AAbilitySystemTestPawn : public ADefaultPawn
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0478(0x0018) MISSED OFFSET
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // 0x0490(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilitySystemTestPawn");
		return pStaticClass;
	}

};


// Class GameplayAbilities.AbilityTask
// 0x0018 (0x0078 - 0x0060)
class UAbilityTask : public UGameplayTask
{
public:
	class UGameplayAbility*                            Ability;                                                  // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // 0x0068(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask");
		return pStaticClass;
	}

};


// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// 0x0038 (0x00B0 - 0x0078)
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{
public:
	struct FName                                       ForceName;                                                // 0x0078(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	ERootMotionFinishVelocityMode                      FinishVelocityMode;                                       // 0x0080(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	struct FVector                                     FinishSetVelocity;                                        // 0x0084(0x000C) (Net, IsPlainOldData)
	float                                              FinishClampVelocity;                                      // 0x0090(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 MovementComponent;                                        // 0x0098(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base");
		return pStaticClass;
	}

};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// 0x0030 (0x00E0 - 0x00B0)
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector                                     WorldDirection;                                           // 0x00C0(0x000C) (Net, IsPlainOldData)
	float                                              Strength;                                                 // 0x00CC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x00D0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAdditive;                                              // 0x00D4(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	class UCurveFloat*                                 StrengthOverTime;                                         // 0x00D8(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce");
		return pStaticClass;
	}


	class UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// 0x0058 (0x0108 - 0x00B0)
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLanded;                                                 // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FRotator                                    Rotation;                                                 // 0x00D0(0x000C) (Net, IsPlainOldData)
	float                                              Distance;                                                 // 0x00DC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x00E0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x00E4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              MinimumLandedTriggerTime;                                 // 0x00E8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bFinishOnLanded;                                          // 0x00EC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x00F0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // 0x00F8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce");
		return pStaticClass;
	}


	void OnLandedCallback(const struct FHitResult& Hit);
	void Finish();
	class UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FRotator& Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve);
};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// 0x0078 (0x0128 - 0x00B0)
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	struct FVector                                     StartLocation;                                            // 0x00C8(0x000C) (Net, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x00D4(0x000C) (Net, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // 0x00E0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocationOffset;                                     // 0x00E8(0x000C) (Net, IsPlainOldData)
	ERootMotionMoveToActorTargetOffsetType             OffsetAlignment;                                          // 0x00F4(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	float                                              Duration;                                                 // 0x00F8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableDestinationReachedInterrupt;                      // 0x00FC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bSetNewMovementMode;                                      // 0x00FD(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // 0x00FE(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // 0x00FF(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                PathOffsetCurve;                                          // 0x0100(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // 0x0108(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TargetLerpSpeedHorizontalCurve;                           // 0x0110(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TargetLerpSpeedVerticalCurve;                             // 0x0118(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce");
		return pStaticClass;
	}


	void OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget);
	void OnRep_TargetLocation();
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, int TargetDataIndex, int TargetActorIndex, const struct FVector& TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class AActor* TargetActor, const struct FVector& TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// 0x0050 (0x0100 - 0x00B0)
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnTimedOut;                                               // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTimedOutAndDestinationReached;                          // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector                                     StartLocation;                                            // 0x00D0(0x000C) (Net, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x00DC(0x000C) (Net, IsPlainOldData)
	float                                              Duration;                                                 // 0x00E8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bSetNewMovementMode;                                      // 0x00EC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // 0x00ED(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // 0x00EE(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00EF(0x0001) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x00F0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce");
		return pStaticClass;
	}


	class UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// 0x0058 (0x0108 - 0x00B0)
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector                                     Location;                                                 // 0x00C0(0x000C) (Net, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	class AActor*                                      LocationActor;                                            // 0x00D0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x00D8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x00DC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x00E0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPush;                                                  // 0x00E4(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAdditive;                                              // 0x00E5(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bNoZForce;                                                // 0x00E6(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00E7(0x0001) MISSED OFFSET
	class UCurveFloat*                                 StrengthDistanceFalloff;                                  // 0x00E8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 StrengthOverTime;                                         // 0x00F0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFixedWorldDirection;                                  // 0x00F8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	struct FRotator                                    FixedWorldDirection;                                      // 0x00FC(0x000C) (Net, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce");
		return pStaticClass;
	}


	class UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, const struct FRotator& FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};


// Class GameplayAbilities.AbilityTask_MoveToLocation
// 0x0048 (0x00C0 - 0x0078)
class UAbilityTask_MoveToLocation : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnTargetLocationReached;                                  // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0088(0x0004) MISSED OFFSET
	struct FVector                                     StartLocation;                                            // 0x008C(0x000C) (Net, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0098(0x000C) (Net, IsPlainOldData)
	float                                              DurationOfMovement;                                       // 0x00A4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	class UCurveFloat*                                 LerpCurve;                                                // 0x00B0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                LerpCurveVector;                                          // 0x00B8(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_MoveToLocation");
		return pStaticClass;
	}


	class UAbilityTask_MoveToLocation* MoveToLocation(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve);
};


// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// 0x0018 (0x0090 - 0x0078)
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnSync;                                                   // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_NetworkSyncPoint");
		return pStaticClass;
	}


	class UAbilityTask_NetworkSyncPoint* WaitNetSync(class UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType);
	void OnSignalCallback();
};


// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// 0x0088 (0x0100 - 0x0078)
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCompleted;                                              // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBlendOut;                                               // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInterrupted;                                            // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancelled;                                              // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x00B8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_PlayMontageAndWait");
		return pStaticClass;
	}


	void OnMontageInterrupted();
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	class UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const struct FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale);
};


// Class GameplayAbilities.AbilityTask_Repeat
// 0x0038 (0x00B0 - 0x0078)
class UAbilityTask_Repeat : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnPerformAction;                                          // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_Repeat");
		return pStaticClass;
	}


	class UAbilityTask_Repeat* RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int TotalActionCount);
};


// Class GameplayAbilities.AbilityTask_SpawnActor
// 0x0040 (0x00B8 - 0x0078)
class UAbilityTask_SpawnActor : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    Success;                                                  // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DidNotSpawn;                                              // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0098(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_SpawnActor");
		return pStaticClass;
	}


	class UAbilityTask_SpawnActor* SpawnActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class, class AActor** SpawnedActor);
};


// Class GameplayAbilities.AbilityTask_StartAbilityState
// 0x0038 (0x00B0 - 0x0078)
class UAbilityTask_StartAbilityState : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnStateEnded;                                             // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateInterrupted;                                       // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_StartAbilityState");
		return pStaticClass;
	}


	class UAbilityTask_StartAbilityState* StartAbilityState(class UGameplayAbility* OwningAbility, const struct FName& StateName, bool bEndCurrentState);
};


// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// 0x0028 (0x00A0 - 0x0078)
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    TimeElapsed;                                              // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0088(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_VisualizeTargeting");
		return pStaticClass;
	}


	class UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, const struct FName& TaskInstanceName, float Duration);
	class UAbilityTask_VisualizeTargeting* VisualizeTargeting(class UGameplayAbility* OwningAbility, class UClass* Class, const struct FName& TaskInstanceName, float Duration);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
};


// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// 0x00B8 (0x0130 - 0x0078)
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnActivate;                                               // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0088(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAbilityActivate");
		return pStaticClass;
	}


	class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce);
	class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool IncludeTriggeredAbilities, bool TriggerOnce);
	class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
	void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);
};


// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// 0x0078 (0x00F0 - 0x0078)
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCommit;                                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0088(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAbilityCommit");
		return pStaticClass;
	}


	class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool TriggerOnce);
	class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce);
	void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);
};


// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// 0x0058 (0x00D0 - 0x0078)
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0088(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChange");
		return pStaticClass;
	}


	class UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce);
	class UAbilityTask_WaitAttributeChange* WaitForAttributeChange(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// 0x0088 (0x0100 - 0x0078)
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0088(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold");
		return pStaticClass;
	}


	class UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& AttributeNumerator, const struct FGameplayAttribute& AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// 0x0050 (0x00C8 - 0x0078)
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0088(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold");
		return pStaticClass;
	}


	class UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitCancel
// 0x0018 (0x0090 - 0x0078)
class UAbilityTask_WaitCancel : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCancel;                                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitCancel");
		return pStaticClass;
	}


	class UAbilityTask_WaitCancel* WaitCancel(class UGameplayAbility* OwningAbility);
	void OnLocalCancelCallback();
	void OnCancelCallback();
};


// Class GameplayAbilities.AbilityTask_WaitConfirm
// 0x0020 (0x0098 - 0x0078)
class UAbilityTask_WaitConfirm : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnConfirm;                                                // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitConfirm");
		return pStaticClass;
	}


	class UAbilityTask_WaitConfirm* WaitConfirm(class UGameplayAbility* OwningAbility);
	void OnConfirmCallback(class UGameplayAbility* InAbility);
};


// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// 0x0028 (0x00A0 - 0x0078)
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnConfirm;                                                // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancel;                                                 // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitConfirmCancel");
		return pStaticClass;
	}


	class UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(class UGameplayAbility* OwningAbility);
	void OnLocalConfirmCallback();
	void OnLocalCancelCallback();
	void OnConfirmCallback();
	void OnCancelCallback();
};


// Class GameplayAbilities.AbilityTask_WaitDelay
// 0x0018 (0x0090 - 0x0078)
class UAbilityTask_WaitDelay : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitDelay");
		return pStaticClass;
	}


	class UAbilityTask_WaitDelay* WaitDelay(class UGameplayAbility* OwningAbility, float Time);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// 0x0138 (0x01B0 - 0x0078)
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0078(0x0128) MISSED OFFSET
	class UAbilitySystemComponent*                     ExternalOwner;                                            // 0x01A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied");
		return pStaticClass;
	}


	void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// 0x0020 (0x01D0 - 0x01B0)
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	struct FScriptMulticastDelegate                    OnApplied;                                                // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self");
		return pStaticClass;
	}


	class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
	class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// 0x0020 (0x01D0 - 0x01B0)
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	struct FScriptMulticastDelegate                    OnApplied;                                                // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target");
		return pStaticClass;
	}


	class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
	class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// 0x00A8 (0x0120 - 0x0078)
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    bLocked;                                                  // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0088(0x0088) MISSED OFFSET
	class UAbilitySystemComponent*                     ExternalOwner;                                            // 0x0110(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity");
		return pStaticClass;
	}


	class UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// 0x0040 (0x00B8 - 0x0078)
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnRemoved;                                                // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    InvalidHandle;                                            // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0098(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved");
		return pStaticClass;
	}


	class UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectRemoved(const struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// 0x0038 (0x00B0 - 0x0078)
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    InvalidHandle;                                            // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange");
		return pStaticClass;
	}


	class UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectStackChange(const struct FActiveGameplayEffectHandle& Handle, int NewCount, int OldCount);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// 0x0030 (0x00A8 - 0x0078)
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    EventReceived;                                            // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                   // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEvent");
		return pStaticClass;
	}


	class UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// 0x0028 (0x00A0 - 0x0078)
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                   // 0x0088(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTag");
		return pStaticClass;
	}


	void GameplayTagCallback(const struct FGameplayTag& Tag, int NewCount);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// 0x0010 (0x00B0 - 0x00A0)
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
public:
	struct FScriptMulticastDelegate                    Added;                                                    // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded");
		return pStaticClass;
	}


	class UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// 0x0010 (0x00B0 - 0x00A0)
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
public:
	struct FScriptMulticastDelegate                    Removed;                                                  // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved");
		return pStaticClass;
	}


	class UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitInputPress
// 0x0020 (0x0098 - 0x0078)
class UAbilityTask_WaitInputPress : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnPress;                                                  // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitInputPress");
		return pStaticClass;
	}


	class UAbilityTask_WaitInputPress* WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);
	void OnPressCallback();
};


// Class GameplayAbilities.AbilityTask_WaitInputRelease
// 0x0020 (0x0098 - 0x0078)
class UAbilityTask_WaitInputRelease : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnRelease;                                                // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitInputRelease");
		return pStaticClass;
	}


	class UAbilityTask_WaitInputRelease* WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased);
	void OnReleaseCallback();
};


// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// 0x0020 (0x0098 - 0x0078)
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitMovementModeChange");
		return pStaticClass;
	}


	void OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	class UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode);
};


// Class GameplayAbilities.AbilityTask_WaitOverlap
// 0x0010 (0x0088 - 0x0078)
class UAbilityTask_WaitOverlap : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnOverlap;                                                // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitOverlap");
		return pStaticClass;
	}


	class UAbilityTask_WaitOverlap* WaitForOverlap(class UGameplayAbility* OwningAbility);
	void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class GameplayAbilities.AbilityTask_WaitTargetData
// 0x0040 (0x00B8 - 0x0078)
class UAbilityTask_WaitTargetData : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    ValidData;                                                // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Cancelled;                                                // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	class AGameplayAbilityTargetActor*                 TargetActor;                                              // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitTargetData");
		return pStaticClass;
	}


	class UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor);
	class UAbilityTask_WaitTargetData* WaitTargetData(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class UClass* Class);
	void OnTargetDataReplicatedCancelledCallback();
	void OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);
	void OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data);
	void OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
};


// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// 0x0028 (0x00A0 - 0x0078)
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnVelocityChage;                                          // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UMovementComponent*                          CachedMovementComponent;                                  // 0x0088(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitVelocityChange");
		return pStaticClass;
	}


	class UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, const struct FVector& Direction, float MinimumMagnitude);
};


// Class GameplayAbilities.GameplayAbility
// 0x0418 (0x0440 - 0x0028)
class UGameplayAbility : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET
	struct FGameplayTagContainer                       AbilityTags;                                              // 0x0090(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00B0(0x0018) MISSED OFFSET
	bool                                               bReplicateInputDirectly;                                  // 0x00C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x00C9(0x0028) MISSED OFFSET
	TEnumAsByte<EGameplayAbilityReplicationPolicy>     ReplicationPolicy;                                        // 0x00F1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EGameplayAbilityInstancingPolicy>      InstancingPolicy;                                         // 0x00F2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bServerRespectsRemoteAbilityCancellation;                 // 0x00F3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRetriggerInstancedAbility;                               // 0x00F4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	struct FGameplayAbilityActivationInfo              CurrentActivationInfo;                                    // 0x00F8(0x0020) (BlueprintVisible, BlueprintReadOnly)
	struct FGameplayEventData                          CurrentEventData;                                         // 0x0118(0x00A8) (BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EGameplayAbilityNetExecutionPolicy>    NetExecutionPolicy;                                       // 0x01C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	class UClass*                                      CostGameplayEffectClass;                                  // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FAbilityTriggerData>                 AbilityTriggers;                                          // 0x01D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      CooldownGameplayEffectClass;                              // 0x01E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagQuery                           CancelAbilitiesMatchingTagQuery;                          // 0x01E8(0x0048) (Edit, DisableEditOnInstance)
	struct FGameplayTagQuery                           ConstTagQuery;                                            // 0x0230(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst)
	struct FGameplayTagContainer                       CancelAbilitiesWithTag;                                   // 0x0278(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       BlockAbilitiesWithTag;                                    // 0x0298(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       ActivationOwnedTags;                                      // 0x02B8(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       ActivationRequiredTags;                                   // 0x02D8(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       ActivationBlockedTags;                                    // 0x02F8(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       SourceRequiredTags;                                       // 0x0318(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       SourceBlockedTags;                                        // 0x0338(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       TargetRequiredTags;                                       // 0x0358(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       TargetBlockedTags;                                        // 0x0378(0x0020) (Edit, DisableEditOnInstance)
	TArray<class UGameplayTask*>                       ActiveTasks;                                              // 0x0398(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x70];                                      // 0x03A8(0x0070) MISSED OFFSET
	class UAnimMontage*                                CurrentMontage;                                           // 0x0418(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsActive;                                                // 0x0420(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsCancelable;                                            // 0x0421(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x16];                                      // 0x0422(0x0016) MISSED OFFSET
	bool                                               bIsBlockingOtherAbilities;                                // 0x0438(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0439(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbility");
		return pStaticClass;
	}


	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
	void SetCanBeCanceled(bool bCanBeCanceled);
	void SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
	void RemoveGrantedByEffect();
	void MontageStop(float OverrideBlendOutTime);
	void MontageSetNextSectionName(const struct FName& FromSectionName, const struct FName& ToSectionName);
	void MontageJumpToSection(const struct FName& SectionName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(const struct FName& SocketName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag);
	void K2_OnEndAbility();
	void K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
	void K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context);
	void K2_EndAbility();
	void K2_CommitExecute();
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);
	bool K2_CommitAbility();
	bool K2_CheckAbilityCost();
	bool K2_CheckAbilityCooldown();
	void K2_CancelAbility();
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
	TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle);
	void K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_ActivateAbility();
	void InvalidateClientPredictionKey();
	class USkeletalMeshComponent* GetOwningComponentFromActorInfo();
	class AActor* GetOwningActorFromActorInfo();
	struct FGameplayEffectContextHandle GetGrantedByEffectContext();
	class UObject* GetCurrentSourceObject();
	class UAnimMontage* GetCurrentMontage();
	float GetCooldownTimeRemaining();
	struct FGameplayEffectContextHandle GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData);
	class AActor* GetAvatarActorFromActorInfo();
	struct FGameplayAbilityActorInfo GetActorInfo();
	int GetAbilityLevel();
	void EndTaskByInstanceName(const struct FName& InstanceName);
	void EndAbilityState(const struct FName& OptionalStateNameToEnd);
	void ConfirmTaskByInstanceName(const struct FName& InstanceName, bool bEndTask);
	void CancelTaskByInstanceName(const struct FName& InstanceName);
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int StacksToRemove);
	TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* GameplayEffectClass, int GameplayEffectLevel, int Stacks);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int GameplayEffectLevel, int Stacks);
};


// Class GameplayAbilities.GameplayAbility_CharacterJump
// 0x0000 (0x0440 - 0x0440)
class UGameplayAbility_CharacterJump : public UGameplayAbility
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbility_CharacterJump");
		return pStaticClass;
	}

};


// Class GameplayAbilities.GameplayAbility_Montage
// 0x0038 (0x0478 - 0x0440)
class UGameplayAbility_Montage : public UGameplayAbility
{
public:
	class UAnimMontage*                                MontageToPlay;                                            // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0448(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	struct FName                                       SectionName;                                              // 0x0450(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              GameplayEffectClassesWhileAnimating;                      // 0x0458(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UGameplayEffect*>                     GameplayEffectsWhileAnimating;                            // 0x0468(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbility_Montage");
		return pStaticClass;
	}

};


// Class GameplayAbilities.GameplayAbilityBlueprint
// 0x0000 (0x00D8 - 0x00D8)
class UGameplayAbilityBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbilityBlueprint");
		return pStaticClass;
	}

};


// Class GameplayAbilities.GameplayAbilitySet
// 0x0010 (0x0040 - 0x0030)
class UGameplayAbilitySet : public UDataAsset
{
public:
	TArray<struct FGameplayAbilityBindInfo>            Abilities;                                                // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbilitySet");
		return pStaticClass;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor
// 0x0100 (0x04F0 - 0x03F0)
class AGameplayAbilityTargetActor : public AActor
{
public:
	struct FGameplayAbilityTargetingLocationInfo       StartLocation;                                            // 0x03F0(0x0060) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0450(0x0030) MISSED OFFSET
	class APlayerController*                           MasterPC;                                                 // 0x0480(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGameplayAbility*                            OwningAbility;                                            // 0x0488(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyOnConfirmation;                                   // 0x0490(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	class AActor*                                      SourceActor;                                              // 0x0498(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FWorldReticleParameters                     ReticleParams;                                            // 0x04A0(0x000C) (BlueprintVisible)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	class UClass*                                      ReticleClass;                                             // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTargetDataFilterHandle             Filter;                                                   // 0x04B8(0x0010) (BlueprintVisible, Net)
	bool                                               bDebug;                                                   // 0x04C8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x17];                                      // 0x04C9(0x0017) MISSED OFFSET
	class UAbilitySystemComponent*                     GenericDelegateBoundASC;                                  // 0x04E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor");
		return pStaticClass;
	}


	void ConfirmTargeting();
	void CancelTargeting();
};


// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// 0x0020 (0x0510 - 0x04F0)
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
public:
	struct FCollisionProfileName                       TraceProfile;                                             // 0x04F0(0x0008) (Edit, BlueprintVisible, Config)
	bool                                               bTraceAffectsAimPitch;                                    // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x04F9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_Trace");
		return pStaticClass;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// 0x0020 (0x0530 - 0x0510)
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0510(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace");
		return pStaticClass;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// 0x0010 (0x0540 - 0x0530)
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{
public:
	class UMaterialInterface*                          PlacedActorMaterial;                                      // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0538(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement");
		return pStaticClass;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// 0x0000 (0x04F0 - 0x04F0)
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_Radius");
		return pStaticClass;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// 0x0000 (0x0510 - 0x0510)
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace");
		return pStaticClass;
	}

};


// Class GameplayAbilities.GameplayAbilityWorldReticle
// 0x0020 (0x0410 - 0x03F0)
class AGameplayAbilityWorldReticle : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03F0(0x0008) MISSED OFFSET
	bool                                               bFaceOwnerFlat;                                           // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToTargetedActor;                                     // 0x03F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTargetValid;                                           // 0x03FA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTargetAnActor;                                         // 0x03FB(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	class APlayerController*                           MasterPC;                                                 // 0x0400(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetingActor;                                           // 0x0408(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbilityWorldReticle");
		return pStaticClass;
	}


	void SetReticleMaterialParamVector(const struct FName& ParamName, const struct FVector& Value);
	void SetReticleMaterialParamFloat(const struct FName& ParamName, float Value);
	void OnValidTargetChanged(bool bNewValue);
	void OnTargetingAnActor(bool bNewValue);
	void OnParametersInitialized();
	void FaceTowardSource(bool bFaceIn2D);
};


// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// 0x0018 (0x0428 - 0x0410)
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{
public:
	class UCapsuleComponent*                           CollisionComponent;                                       // 0x0410(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UActorComponent*>                     VisualizationComponents;                                  // 0x0418(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization");
		return pStaticClass;
	}

};


// Class GameplayAbilities.GameplayCueInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayCueInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayCueInterface");
		return pStaticClass;
	}


	void ForwardGameplayCueToParent();
	void BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
};


// Class GameplayAbilities.GameplayCueManager
// 0x02C8 (0x02F8 - 0x0030)
class UGameplayCueManager : public UDataAsset
{
public:
	struct FGameplayCueObjectLibrary                   RuntimeGameplayCueObjectLibrary;                          // 0x0030(0x0058) (Transient)
	struct FGameplayCueObjectLibrary                   EditorGameplayCueObjectLibrary;                           // 0x0088(0x0058) (Transient)
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x00E0(0x01B8) MISSED OFFSET
	TArray<class UClass*>                              LoadedGameplayCueNotifyClasses;                           // 0x0298(0x0010) (ZeroConstructor, Transient)
	TArray<class UClass*>                              GameplayCueClassesForPreallocation;                       // 0x02A8(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGameplayCuePendingExecute>          PendingExecuteCues;                                       // 0x02B8(0x0010) (ZeroConstructor, Transient)
	int                                                GameplayCueSendContextCount;                              // 0x02C8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	TArray<struct FPreallocationInfo>                  PreallocationInfoList_Internal;                           // 0x02D0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x18];                                      // 0x02E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayCueManager");
		return pStaticClass;
	}

};


// Class GameplayAbilities.GameplayCueNotify_Actor
// 0x0068 (0x0458 - 0x03F0)
class AGameplayCueNotify_Actor : public AActor
{
public:
	float                                              AutoDestroyDelay;                                         // 0x03F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               WarnIfTimelineIsStillRunning;                             // 0x03F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               WarnIfLatentActionIsStillRunning;                         // 0x03F5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03F6(0x0002) MISSED OFFSET
	struct FGameplayTag                                GameplayCueTag;                                           // 0x03F8(0x0008) (Edit, DisableEditOnInstance)
	struct FGameplayTagReferenceHelper                 ReferenceHelper;                                          // 0x0400(0x0010) (Edit)
	struct FName                                       GameplayCueName;                                          // 0x0410(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoAttachToOwner;                                       // 0x0418(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOverride;                                               // 0x0419(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUniqueInstancePerInstigator;                             // 0x041A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUniqueInstancePerSourceObject;                           // 0x041B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowMultipleOnActiveEvents;                             // 0x041C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowMultipleWhileActiveEvents;                          // 0x041D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x041E(0x0002) MISSED OFFSET
	int                                                NumPreallocatedInstances;                                 // 0x0420(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x34];                                      // 0x0424(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_Actor");
		return pStaticClass;
	}


	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnOwnerDestroyed(class AActor* DestroyedActor);
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void K2_EndGameplayCue();
};


// Class GameplayAbilities.GameplayCueNotify_Static
// 0x0028 (0x0050 - 0x0028)
class UGameplayCueNotify_Static : public UObject
{
public:
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0028(0x0008) (Edit, DisableEditOnInstance)
	struct FGameplayTagReferenceHelper                 ReferenceHelper;                                          // 0x0030(0x0010) (Edit)
	struct FName                                       GameplayCueName;                                          // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsOverride;                                               // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_Static");
		return pStaticClass;
	}


	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
};


// Class GameplayAbilities.GameplayCueNotify_HitImpact
// 0x0010 (0x0060 - 0x0050)
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{
public:
	class USoundBase*                                  Sound;                                                    // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_HitImpact");
		return pStaticClass;
	}

};


// Class GameplayAbilities.GameplayCueSet
// 0x0060 (0x0090 - 0x0030)
class UGameplayCueSet : public UDataAsset
{
public:
	TArray<struct FGameplayCueNotifyData>              GameplayCueData;                                          // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayCueSet");
		return pStaticClass;
	}

};


// Class GameplayAbilities.GameplayCueTranslator
// 0x0000 (0x0028 - 0x0028)
class UGameplayCueTranslator : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayCueTranslator");
		return pStaticClass;
	}

};


// Class GameplayAbilities.GameplayCueTranslator_Test
// 0x0000 (0x0028 - 0x0028)
class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayCueTranslator_Test");
		return pStaticClass;
	}

};


// Class GameplayAbilities.GameplayEffect
// 0x0610 (0x0638 - 0x0028)
class UGameplayEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	EGameplayEffectDurationType                        DurationPolicy;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FGameplayEffectModifierMagnitude            DurationMagnitude;                                        // 0x0038(0x01C8) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              Period;                                                   // 0x0200(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bExecutePeriodicEffectOnApplication;                      // 0x0228(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	TArray<struct FGameplayModifierInfo>               Modifiers;                                                // 0x0230(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGameplayEffectExecutionDefinition>  Executions;                                               // 0x0240(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FScalableFloat                              ChanceToApplyToTarget;                                    // 0x0250(0x0028) (Edit, DisableEditOnInstance)
	TArray<class UClass*>                              ApplicationRequirements;                                  // 0x0278(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              TargetEffectClasses;                                      // 0x0288(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FConditionalGameplayEffect>          ConditionalGameplayEffects;                               // 0x0298(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              OverflowEffects;                                          // 0x02A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDenyOverflowApplication;                                 // 0x02B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClearStackOnOverflow;                                    // 0x02B9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x02BA(0x0006) MISSED OFFSET
	TArray<class UClass*>                              PrematureExpirationEffectClasses;                         // 0x02C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              RoutineExpirationEffectClasses;                           // 0x02D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bRequireModifierSuccessToTriggerCues;                     // 0x02E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSuppressStackingCues;                                    // 0x02E1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x02E2(0x0006) MISSED OFFSET
	TArray<struct FGameplayEffectCue>                  GameplayCues;                                             // 0x02E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UGameplayEffectUIData*                       UIData;                                                   // 0x02F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FInheritedTagContainer                      InheritableGameplayEffectTags;                            // 0x0300(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FInheritedTagContainer                      InheritableOwnedTagsContainer;                            // 0x0360(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagRequirements                    OngoingTagRequirements;                                   // 0x03C0(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagRequirements                    ApplicationTagRequirements;                               // 0x0400(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FInheritedTagContainer                      RemoveGameplayEffectsWithTags;                            // 0x0440(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagRequirements                    GrantedApplicationImmunityTags;                           // 0x04A0(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayEffectQuery                        GrantedApplicationImmunityQuery;                          // 0x04E0(0x0138) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0618(0x0001) MISSED OFFSET
	EGameplayEffectStackingType                        StackingType;                                             // 0x0619(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x061A(0x0002) MISSED OFFSET
	int                                                StackLimitCount;                                          // 0x061C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGameplayEffectStackingDurationPolicy              StackDurationRefreshPolicy;                               // 0x0620(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGameplayEffectStackingPeriodPolicy                StackPeriodResetPolicy;                                   // 0x0621(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGameplayEffectStackingExpirationPolicy            StackExpirationPolicy;                                    // 0x0622(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x0623(0x0005) MISSED OFFSET
	TArray<struct FGameplayAbilitySpecDef>             GrantedAbilities;                                         // 0x0628(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayEffect");
		return pStaticClass;
	}

};


// Class GameplayAbilities.GameplayEffectCalculation
// 0x0010 (0x0038 - 0x0028)
class UGameplayEffectCalculation : public UObject
{
public:
	TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture;                              // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayEffectCalculation");
		return pStaticClass;
	}

};


// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
// 0x0000 (0x0028 - 0x0028)
class UGameplayEffectCustomApplicationRequirement : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayEffectCustomApplicationRequirement");
		return pStaticClass;
	}


	bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, const struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC);
};


// Class GameplayAbilities.GameplayEffectExecutionCalculation
// 0x0008 (0x0040 - 0x0038)
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{
public:
	bool                                               bRequiresPassedInTags;                                    // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayEffectExecutionCalculation");
		return pStaticClass;
	}


	void Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput);
};


// Class GameplayAbilities.GameplayEffectTemplate
// 0x0000 (0x0638 - 0x0638)
class UGameplayEffectTemplate : public UGameplayEffect
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayEffectTemplate");
		return pStaticClass;
	}

};


// Class GameplayAbilities.GameplayEffectUIData
// 0x0000 (0x0028 - 0x0028)
class UGameplayEffectUIData : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayEffectUIData");
		return pStaticClass;
	}

};


// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// 0x0018 (0x0040 - 0x0028)
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{
public:
	struct FText                                       Description;                                              // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayEffectUIData_TextOnly");
		return pStaticClass;
	}

};


// Class GameplayAbilities.GameplayModMagnitudeCalculation
// 0x0008 (0x0040 - 0x0038)
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{
public:
	bool                                               bAllowNonNetAuthorityDependencyRegistration;              // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayModMagnitudeCalculation");
		return pStaticClass;
	}


	float CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec);
};


// Class GameplayAbilities.GameplayTagReponseTable
// 0x01A0 (0x01D0 - 0x0030)
class UGameplayTagReponseTable : public UDataAsset
{
public:
	TArray<struct FGameplayTagResponseTableEntry>      Entries;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x190];                                     // 0x0040(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayTagReponseTable");
		return pStaticClass;
	}


	void TagResponseEvent(const struct FGameplayTag& Tag, int NewCount, class UAbilitySystemComponent* ASC, int idx);
};


// Class GameplayAbilities.TickableAttributeSetInterface
// 0x0000 (0x0028 - 0x0028)
class UTickableAttributeSetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.TickableAttributeSetInterface");
		return pStaticClass;
	}

};


}

