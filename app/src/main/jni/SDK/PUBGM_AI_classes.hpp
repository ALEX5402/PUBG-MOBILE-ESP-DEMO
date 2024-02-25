#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AI.AESpawner
// 0x0030 (0x0580 - 0x0550)
class AAESpawner : public ASTSpawnerBase
{
public:
	TArray<class UClass*>                              TeamAIClasses;                                            // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SpawnerCampItemID;                                        // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpawnerTeamID;                                            // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBotCategray>                          SpeciesCategory;                                          // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0569(0x0007) MISSED OFFSET
	TArray<class UActorComponent*>                     TeamAIComponents;                                         // 0x0570(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AESpawner");
		return pStaticClass;
	}


	void SwitchTeamAI(bool bEnable);
	void OnUnitSpawned(uint32_t InSpawnerID, class APawn* AIPawn, int ConfigId);
	void OnSpawnTimingRipe(bool IsRipe);
	void OnOwnedMobDead(class ASTExtraSimpleCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType);
	void OnOwnedFakePlayerDead(class ASTExtraBaseCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType);
	TEnumAsByte<EBotCategray> GetSpeciesCategory();
	float GetSpawnerTeamID();
	int GenerateParamID(int ConfigId, int BaseParamID);
	void DeactivateSpawner();
	void BPOnUnitSpawned(class APawn* AIPawn, int ConfigId);
	void ActivateSpawner();
};


// Class AI.AESpawnSubsystem
// 0x0080 (0x01B0 - 0x0130)
class UAESpawnSubsystem : public USTSpawnSubsystem
{
public:
	struct FMonsterParams                              CacheMobParams;                                           // 0x0130(0x0058)
	struct FFakePlayerParams                           CacheFPParams;                                            // 0x0188(0x0010)
	struct FAIPlayerParams                             CacheAIPParams;                                           // 0x0198(0x000C)
	unsigned char                                      UnknownData00[0xC];                                       // 0x01A4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AESpawnSubsystem");
		return pStaticClass;
	}


	class AActor* SpawnUnit(const struct FSTSpawnParam& SpawnParam);
	bool PreCheck();
	int GetUnitConfigID(class AActor* Unit);
};


// Class AI.AIActionExecutionComponent
// 0x0028 (0x0200 - 0x01D8)
class UAIActionExecutionComponent : public ULuaActorComponent
{
public:
	class AController*                                 OwnerController;                                          // 0x01D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ANewFakePlayerAIController*                  MyAIController;                                           // 0x01E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerController*                    MyPlayerController;                                       // 0x01E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       MyPlayerPawn;                                             // 0x01F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMLAIControllerComponent*                    MyMLAIControllerComp;                                     // 0x01F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIActionExecutionComponent");
		return pStaticClass;
	}


	void UseItem(int ItemID, int WeaponSlot);
	void SwapAttachmentItem(int ItemID, int SourceWeaponSlot, int TargetWeaponSlot);
	void SetGrenadeLastSelectID(int WeaponID);
	void SetFocusRotation(float InPitch, float InYaw, float InRoll);
	void SetCurShootingPose();
	void RescueTarget(class ASTExtraBaseCharacter* RescueCharacter);
	void OpenDoor();
	bool IsValid();
	bool IsFreeCamera();
	class APickUpWrapperActor* GetPickActorWithID(int UId);
	class ASTExtraBaseCharacter* GetOwnerBaseCharacter();
	class UBackpackComponent* GetBackpackComponent();
	void DropItem(int ItemID, int Count);
	void DoActionMove(bool IsRun, float DirectionX, float DirectionY, float DirectionZ);
	void DoActionFreeCamera(bool IsEnter, float InPitch, float InYaw, float InRoll);
	void DisuseItem(int ItemID, int WeaponSlot);
	void CloseDoor();
};


// Class AI.AIPerceptionDynamicItemComponent
// 0x0020 (0x01F8 - 0x01D8)
class UAIPerceptionDynamicItemComponent : public ULuaActorComponent
{
public:
	TArray<struct FChildDynamicItem>                   ChildArray;                                               // 0x01D8(0x0010) (Edit, ZeroConstructor)
	struct FScriptDelegate                             GetDynamicItemDurabilityDelegate;                         // 0x01E8(0x0010) (Edit, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIPerceptionDynamicItemComponent");
		return pStaticClass;
	}

};


// Class AI.AISoundCollectionComponent
// 0x0180 (0x0358 - 0x01D8)
class UAISoundCollectionComponent : public ULuaActorComponent
{
public:
	TMap<uint32_t, struct FCacheSoundState>            CacheStepSounds;                                          // 0x01D8(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FCacheSoundState>            CacheWeaponSounds;                                        // 0x0228(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FCacheSoundState>            CacheVehicleSounds;                                       // 0x0278(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FCacheSoundState>            CacheGrenadeSounds;                                       // 0x02C8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0318(0x0018) MISSED OFFSET
	float                                              ClearStepSoundTime;                                       // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClearWeaponSoundTime;                                     // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClearVehicleSoundTime;                                    // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClearGrenadeSoundTime;                                    // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StepSoundMaxNum;                                          // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WeaponSoundMaxNum;                                        // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VehicleSoundMaxNum;                                       // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GrenadeSoundMaxNum;                                       // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AController*                                 OwnerController;                                          // 0x0350(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AISoundCollectionComponent");
		return pStaticClass;
	}


	void OnCollectionHearSound(ESoundType soundType, const struct FVector& InPos, class AActor* InSourceActor);
	TArray<struct FSoundState> GetCollectSoundInfo();
};


// Class AI.AIStateInfoComponent
// 0x0A90 (0x0BA0 - 0x0110)
class UAIStateInfoComponent : public UActorComponent
{
public:
	TMap<int, int>                                     ProgressSkillConfig;                                      // 0x0110(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, bool>                                    AvailableBackpacItemTypes;                                // 0x0160(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, int>                                     GrenadeTypeConfig;                                        // 0x01B0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              VisibleAngle;                                             // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HeadOffset;                                               // 0x0204(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              NearByEnemyRange;                                         // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              FogWeatherRangeScale;                                     // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                NearByEnemyMaxNum;                                        // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSearchNearItem;                                         // 0x021C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x021D(0x0003) MISSED OFFSET
	int                                                NearbyItemMaxNum;                                         // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyMaxBoxNum;                                          // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyAirDropBoxRangeInner;                               // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyAirDropBoxRangeOuter;                               // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyDeathBoxRange;                                      // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyPickUpWrapperRange;                                 // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CacheNearbyItemRangeCoefficient;                          // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyMaxTreasureChestNum;                                // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyTreasureChestRange;                                 // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyFindBuildingRange;                                  // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ItemStateChangedRange;                                    // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsItemVisiable;                                           // 0x024C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUseItemSpotLoc;                                         // 0x024D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x024E(0x0002) MISSED OFFSET
	float                                              NearbyObstacleRange;                                      // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyThrownRange;                                        // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbySmokeRange;                                         // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyThrownMaxNum;                                       // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0260(0x0004) MISSED OFFSET
	int                                                NearbyDoorMaxNum;                                         // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyVehicleRange;                                       // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                NearbyVehicleMaxNum;                                      // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyBulletHoleRange;                                    // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyBulletHoleMaxNum;                                   // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyDynamicItemsRange;                                  // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyDynamicItemsMaxNum;                                 // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAIStateInfo                                CacheAIStateInfo;                                         // 0x0280(0x0368)
	struct FDiffAIStateInfo                            CacheDiffAIStateInfo;                                     // 0x05E8(0x0458)
	struct FRedZoneState                               CacheRedZoneInfo;                                         // 0x0A40(0x0018)
	float                                              AirAttackTotalTime;                                       // 0x0A58(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsTouchedPlayer;                                          // 0x0A5C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreTreeAIWhenNoPlayerAround;                          // 0x0A5D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0A5E(0x0002) MISSED OFFSET
	float                                              IgnoreTreeAIRadius;                                       // 0x0A60(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           FrameNo;                                                  // 0x0A64(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsCacheDiffData;                                          // 0x0A68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0A69(0x0007) MISSED OFFSET
	class AController*                                 OwnerController;                                          // 0x0A70(0x0008) (ZeroConstructor, IsPlainOldData)
	class ANewFakePlayerAIController*                  MyAIController;                                           // 0x0A78(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerController*                    MyPlayerController;                                       // 0x0A80(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAirAttackComponent*                         AirAttackComp;                                            // 0x0A88(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIActingComponent*                          AIActingComp;                                             // 0x0A90(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APawn*                                       MyOwnerPawn;                                              // 0x0A98(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABattleRoyaleGameModeBase*                   MyGameMode;                                               // 0x0AA0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x60];                                      // 0x0AA8(0x0060) MISSED OFFSET
	TArray<struct FVehicleDamageInfo>                  VehicleDamageInfo;                                        // 0x0B08(0x0010) (ZeroConstructor)
	TMap<int, class APickUpWrapperActor*>              CacheAINearByItem;                                        // 0x0B18(0x0050) (ZeroConstructor)
	struct FCacheNearbyItemState                       CacheNearbyItemState;                                     // 0x0B68(0x0020)
	class UMLAIControllerComponent*                    MyMLAIControllerComp;                                     // 0x0B88(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	uint32_t                                           CacheModeMapId;                                           // 0x0B90(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xC];                                       // 0x0B94(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIStateInfoComponent");
		return pStaticClass;
	}


	TArray<struct FItemStateData> QueryItemStates(int MaxBoxNum, int MaxItemNum, float AirDropBoxRangeInner, float AirDropBoxRangeOuter, float DeathBoxRange, float PickUpWrapperRange, float FindBuildingRange, bool InIsUseItemSpotLoc, int MaxTreasureChestNum, float TreasureChestRange);
	void OnVehicleDamageInfo(class AController* InstigatorController, class AController* VictimController, int DamageTypeId, float Damage, bool bIsFatalHealthCost, class AActor* DamageCauser, class AActor* VictimVehicle);
	void OnItemStateChanged(const struct FVector& Location);
	void OnAIStateRequestEnd();
	void OnAirAttackInfo(TEnumAsByte<EAirAttackInfo> airattacktype, int waveIndex, const struct FAirAttackOrder& InAirAttackOrder, const struct FVector& InAirAttackArea);
	bool IsValid();
	bool IsAvailableBackpacItemType(const struct FItemDefineID& DefineID);
	bool HasPlayerAround();
	struct FVector GetViewForwardVector(class ACharacter* InCharacter);
	struct FVehicleState GetVehicleStatus(class ASTExtraVehicleBase* InVehicle, class ASTExtraBaseCharacter* PawnInCar);
	struct FTLogAIShootInfo GetTLogAIShootInfo();
	TArray<struct FSoundState> GetSoundInfo();
	struct FProgressBarState GetProgressBarState();
	struct FAIPlayerInteractInfo GetPlayerInteractInfo();
	class APickUpWrapperActor* GetPickActorWithID(int UId);
	class ASTExtraBaseCharacter* GetOwnerBaseCharacter();
	TArray<struct FObstacleState> GetObstaclesState(float Range);
	TArray<struct FVehicleState> GetNearbyVehicles(class ASTExtraBaseCharacter* InPawn);
	uint32_t GetFrameNo();
	TArray<struct FDoorState> GetDoorsState(float Range, int MaxNum);
	struct FDiffAIStateInfo GetDiffAIStateInfo();
	struct FAIDamageSources GetDamageSources();
	struct FCameraState GetCameraState(class ASTExtraBaseCharacter* InCharacter);
	TArray<struct FAIStateInfo> GetAllPlayerStateInfo(class UWorld* InWorld);
	struct FAIStateInfo GetAIStateInfoInternal();
	struct FAIStateInfo GetAIStateInfo();
	TArray<struct FAIBackpackItem> GetAIPlayerBackpackItems();
	TArray<struct FAINearbyThrown> GetAINearbyThrownState(class ASTExtraBaseCharacter* InCharacter, float InRange, float InCheckAngle, int MaxNum, float InSmokeRange);
	void ClearVehicleDamageInfo();
	void ClearPlayerInteractInfo();
	void ClearDamageSources();
};


// Class AI.CustomDamageEventComponent
// 0x0138 (0x0310 - 0x01D8)
class UCustomDamageEventComponent : public ULuaActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnSpawnActor;                                             // 0x01D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x01E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AI.CustomDamageEventComponent.EventDataTable
	float                                              ActorSpawnGlobalCooldown;                                 // 0x0210(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0214(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnThrowBox;                                               // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0228(0x0004) MISSED OFFSET
	float                                              OwnerHealthPercentage;                                    // 0x022C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0230(0x0010) MISSED OFFSET
	TArray<struct FTriggeredCustomDamageEvent>         ClientEvents;                                             // 0x0240(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData04[0x70];                                      // 0x0250(0x0070) MISSED OFFSET
	TMap<struct FName, class UObject*>                 CacheUObjectMap;                                          // 0x02C0(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.CustomDamageEventComponent");
		return pStaticClass;
	}


	void OnRep_ClientEvents();
};


// Class AI.CharacterCustomDamageEventComponent
// 0x0008 (0x0318 - 0x0310)
class UCharacterCustomDamageEventComponent : public UCustomDamageEventComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0310(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.CharacterCustomDamageEventComponent");
		return pStaticClass;
	}


	void OnTakeDamageEvent(float Damage, const struct FDamageEvent& DamageEvent, class AActor* Victim, class AActor* Causer);
};


// Class AI.MLAIControllerComponent
// 0x01F0 (0x0300 - 0x0110)
class UMLAIControllerComponent : public UActorComponent
{
public:
	class UClass*                                      AIActionExcutionCompClass;                                // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AISoundCollectCompClass;                                  // 0x0118(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AIStateInfoCompClass;                                     // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIActionExecutionComponent*                 AIActionExecutionComp;                                    // 0x0128(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIStateInfoComponent*                       AIStateInfoComp;                                          // 0x0130(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAISoundCollectionComponent*                 AISoundCollectComp;                                       // 0x0138(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HearRadius;                                               // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	TMap<TEnumAsByte<ESTEPoseState>, struct FCameraViewPitchLimitData> CameraViewPitchLimitDataMap;                              // 0x0148(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FVector                                     PrePos;                                                   // 0x0198(0x000C) (IsPlainOldData)
	float                                              PreTickTime;                                              // 0x01A4(0x0004) (ZeroConstructor, IsPlainOldData)
	class AController*                                 OwnerController;                                          // 0x01A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ANewFakePlayerAIController*                  MyAIController;                                           // 0x01B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerController*                    MyPlayerController;                                       // 0x01B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x01C0(0x0014) MISSED OFFSET
	float                                              FindNavLocationRadius;                                    // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxNavLocationFindTimes;                                  // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLerpRotation;                                         // 0x01DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	float                                              LerpRotationThreshold;                                    // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsForceTargetRotation;                                    // 0x01E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01E5(0x0003) MISSED OFFSET
	float                                              FirstLerpRotationDeltaTime;                               // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FreeCameraTurnVelocity;                                   // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnVelocity;                                             // 0x01F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET
	struct FAIShootingPoseOffsetInfo                   shootingPoseOffsetInfo;                                   // 0x01F8(0x0070) (Edit)
	float                                              AutoOpenDoorRange;                                        // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x026C(0x0008) MISSED OFFSET
	bool                                               IsModifyDamageLuaOverride;                                // 0x0274(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0275(0x0003) MISSED OFFSET
	float                                              RatingDamageScaleLuaOverride;                             // 0x0278(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bShouldSendVehicleInfo;                                   // 0x027C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1B];                                      // 0x027D(0x001B) MISSED OFFSET
	bool                                               IsChangeStatePC;                                          // 0x0298(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x67];                                      // 0x0299(0x0067) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAIControllerComponent");
		return pStaticClass;
	}


	void UnBindDelegates(bool IsEndPlay);
	void SetLuaAIParamConfigString(const struct FString& InAIParamConfigString);
	void SetCurShootingPose(EAIShootingPose InCurAIShootingPose);
	void RestartFightBehaviorTree();
	bool IsValid();
	bool IsFreeCamera();
	struct FRotator GetViewRotation();
	struct FVector GetViewForwardVector();
	class ASTExtraBaseCharacter* GetOwnerBaseCharacter();
	class UBackpackComponent* GetBackpackComponent();
	class UAIStateInfoComponent* GetAIStateInfoComp();
	class UAIActionExecutionComponent* GetAIActionExecutionComp();
	void DoActionFreeCamera(bool IsEnter, float InPitch, float InYaw, float InRoll);
	bool CheckCameraViewPitchLimit(struct FRotator* InOutTargetRot);
	void BindDelegates();
};


// Class AI.MLAISubSystem
// 0x0418 (0x0448 - 0x0030)
class UMLAISubSystem : public UWorldSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnAIStateRequestEnd;                                      // 0x0030(0x0010) (ZeroConstructor, InstancedReference)
	TMap<uint32_t, struct FAIPlayerState>              CacheAIPlayerStates;                                      // 0x0040(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIPlayerInteractInfo>       CachePlayerDamageInfo;                                    // 0x0090(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FVehicleDamageInfoContainer> CacheVehicleDamageInfo;                                   // 0x00E0(0x0050) (ZeroConstructor)
	int                                                MaxCacheDamageInfoNum;                                    // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	TMap<uint32_t, struct FAIPlayerWeapon>             CacheAIPlayerWeapons;                                     // 0x0138(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIPlayerEquipment>          CacheAIPlayerEquipments;                                  // 0x0188(0x0050) (ZeroConstructor)
	TArray<class UAIStateInfoComponent*>               AIStateInfoComps;                                         // 0x01D8(0x0010) (ExportObject, ZeroConstructor)
	TArray<struct FBulletHoleRecordInfo>               CacheBulletHoles;                                         // 0x01E8(0x0010) (ZeroConstructor)
	TArray<struct FSpecialZoneState>                   CacheSpecialZones;                                        // 0x01F8(0x0010) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIPlayerState>          CacheDiffAIPlayerStates;                                  // 0x0208(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIPlayerWeapon>         CacheDiffAIPlayerWeapons;                                 // 0x0258(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIPlayerEquipment>      CacheDiffAIPlayerEquipments;                              // 0x02A8(0x0050) (ZeroConstructor)
	TMap<uint32_t, bool>                               CacheDiffAIPlayerStatesRet;                               // 0x02F8(0x0050) (ZeroConstructor)
	TMap<uint32_t, bool>                               CacheDiffAIPlayerWeaponsRet;                              // 0x0348(0x0050) (ZeroConstructor)
	TMap<uint32_t, bool>                               CacheDiffAIPlayerEquipmentsRet;                           // 0x0398(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03E8(0x0010) MISSED OFFSET
	TMap<class AActor*, class ASpecialZoneActor*>      CacheSpecialZoneParents;                                  // 0x03F8(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAISubSystem");
		return pStaticClass;
	}


	void StartRequestCache();
	void SetSpecialZoneCustomState(class AActor* InParent, int InCustomState);
	void OnVehicleDamageInfo(class AController* InstigatorController, class AController* VictimController, int DamageTypeId, float Damage, bool bIsFatalHealthCost, class AActor* DamageCauser, class AActor* VictimVehicle);
	void OnPlayerDamageInfo(class ASTExtraPlayerState* InstigatorPlayerState, class ASTExtraPlayerState* VictimPlayerState, float Damage, const struct FDamageEvent& DamageEvent, float DamageBeforeCalArmor, bool bIsFatalHealthCost, class AActor* DamageCauser);
	void OnItemStateChanged(const struct FVector& Location);
	bool IsAIBotGame();
	void EndRequestCache();
};


// Class AI.MLAITrainingComponent
// 0x0038 (0x0148 - 0x0110)
class UMLAITrainingComponent : public UActorComponent
{
public:
	bool                                               IsBeginRequestAIState;                                    // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsEndRequestAIState;                                      // 0x0111(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPauseGameAfterSendPacket;                                // 0x0112(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0113(0x0005) MISSED OFFSET
	class APlayerState*                                PauseGamePlayerState;                                     // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsPausing;                                               // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x27];                                      // 0x0121(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAITrainingComponent");
		return pStaticClass;
	}


	void StopRunnable();
	void SetPauseGamePlayerState(class APlayerState* InPlayerState);
	bool SetPause(bool bInPause, float InPauseTime);
	void SendAIStateRequest(TArray<unsigned char> Packet);
	bool IsRequestAIState();
	void InitRunnable(float InStartCollectingInterval, float InSendInterval, float InTimeOutInterval);
	void EndRequestAIState();
};


// Class AI.SpecialZoneShapeComponent
// 0x0000 (0x0770 - 0x0770)
class USpecialZoneShapeComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.SpecialZoneShapeComponent");
		return pStaticClass;
	}

};


// Class AI.SpecialZoneActor
// 0x0020 (0x0410 - 0x03F0)
class ASpecialZoneActor : public AActor
{
public:
	float                                              Radius;                                                   // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CustomState;                                              // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	class USpecialZoneShapeComponent*                  SpecialZoneShapeComponent;                                // 0x0400(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      CacheParentActor;                                         // 0x0408(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.SpecialZoneActor");
		return pStaticClass;
	}


	void UpdateCustomState(int InCustomState);
	struct FSpecialZoneState GetSpecialZoneState();
};


// Class AI.STStrategyLocation_Range
// 0x0040 (0x0140 - 0x0100)
class USTStrategyLocation_Range : public USTStrategyLocation
{
public:
	unsigned char                                      bUseNavmesh : 1;                                          // 0x0100(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	float                                              Range;                                                    // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxTryTimes;                                              // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckPlayerSight : 1;                                    // 0x010C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
	float                                              PlayerViewDistance;                                       // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // 0x0114(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	float                                              MaxLocationTraceHeightZ;                                  // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	TArray<struct FSpawnArea>                          CustomAreas;                                              // 0x0120(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.STStrategyLocation_Range");
		return pStaticClass;
	}


	void ModifyBaseLocation(const struct FVector& InLocation);
	bool GetSpawnLocation(class AActor* Requester, int ReferenceCount, TArray<struct FSpawnSpotInfo>* OutArr);
	void AddSpawnArea(const struct FSpawnArea& NewArea, bool ForceAdd);
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class AI.STStrategySpecies_Candidate
// 0x0000 (0x0110 - 0x0110)
class USTStrategySpecies_Candidate : public USTStrategySpecies
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.STStrategySpecies_Candidate");
		return pStaticClass;
	}


	TArray<struct FUnitConfig> Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies);
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class AI.STStrategySpecies_Lua
// 0x0000 (0x0110 - 0x0110)
class USTStrategySpecies_Lua : public USTStrategySpecies
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.STStrategySpecies_Lua");
		return pStaticClass;
	}


	TArray<struct FUnitConfig> Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies);
	void LuaSupply(int ReferencedCount);
};


// Class AI.STStrategyTiming_Event
// 0x0020 (0x0110 - 0x00F0)
class USTStrategyTiming_Event : public USTStrategyTiming
{
public:
	struct FString                                     EventId;                                                  // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     EventName;                                                // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.STStrategyTiming_Event");
		return pStaticClass;
	}


	void TickStrategy(float DeltaTime);
	void OnSpawnEventBroadcast();
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class AI.VehicleAIUserComponent
// 0x0000 (0x0228 - 0x0228)
class UVehicleAIUserComponent : public UVehicleUserComponentBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.VehicleAIUserComponent");
		return pStaticClass;
	}


	void ServerVehicleLeanOut(bool bLeanOut);
	void ServerExitVehicle();
	void ServerEnterVehicle(class ASTExtraVehicleBase* InVehicle, unsigned char SeatType);
	void ServerChangeVehicleSeat(int InSeatIndex);
	void MulticastExitVehicle();
	void MulticastEnterVehicle(class ASTExtraVehicleBase* InVehicle, class ASTExtraPlayerCharacter* Pawn, bool bSuccess, unsigned char SeatType, int SeatIndex);
	void MulticastChangeVehicleSeat(int InSeatIndex);
};


// Class AI.VehicleCustomDamageEventComponent
// 0x0008 (0x0318 - 0x0310)
class UVehicleCustomDamageEventComponent : public UCustomDamageEventComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0310(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.VehicleCustomDamageEventComponent");
		return pStaticClass;
	}


	void OnVehicleHPFuelChanged(float HP, float Fuel);
};


}

