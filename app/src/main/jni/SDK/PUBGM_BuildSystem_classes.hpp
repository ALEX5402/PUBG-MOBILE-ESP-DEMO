#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BuildSystem.BuildingActorBase
// 0x0198 (0x0650 - 0x04B8)
class ABuildingActorBase : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x04B8(0x001C) MISSED OFFSET
	bool                                               bCustomBlockingChannels;                                  // 0x04D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04D5(0x0003) MISSED OFFSET
	TArray<TEnumAsByte<ECollisionChannel>>             CustomBlockingChannels;                                   // 0x04D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bCheckVisibilitySkipTypes;                                // 0x04E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	TArray<class UClass*>                              VisibilitySkipTypes;                                      // 0x04F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FBuildingActorWorldSnapSetup                WorldSnapSetup;                                           // 0x0500(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              DebugHealthDistance;                                      // 0x0524(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DebugHealthOffset;                                        // 0x0528(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0534(0x0004) MISSED OFFSET
	TArray<class UClass*>                              ProhibitedActorTemplateList;                              // 0x0538(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              EnableBuildingList;                                       // 0x0548(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FSoftObjectPath                             PreBuildingEffectPath;                                    // 0x0558(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               CanBuildUnderWater;                                       // 0x0570(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldSnapToWorldGrid;                                   // 0x0571(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0572(0x0002) MISSED OFFSET
	float                                              UnderWaterMaxBuildDepth;                                  // 0x0574(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0578(0x0008) MISSED OFFSET
	struct FTransform                                  DestroyedParticleTransformOffset;                         // 0x0580(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FSoftObjectPath                             DestroyBuildingEffectPath;                                // 0x05B0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bUseExtraCenterOffset;                                    // 0x05C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseExtraCenterRotation;                                  // 0x05C9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x05CA(0x0002) MISSED OFFSET
	struct FVector                                     ActorCollisionBoxExtern;                                  // 0x05CC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ActorCollisionBoxCenter;                                  // 0x05D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ActorCollisionBoxRotator;                                 // 0x05E4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ViewLocationOffset;                                       // 0x05F0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              Health;                                                   // 0x05FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDestroyWhenZeroHealth;                                   // 0x0600(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0601(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHealthChangeNotify;                                     // 0x0608(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              MaxDeviation;                                             // 0x0618(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTraceDepth;                                            // 0x061C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDoQuadTrace;                                             // 0x0620(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBuildingActorConstructingMode>        ConstructingMode;                                         // 0x0621(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableOverlayPlace;                                      // 0x0622(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnablePitchRotatePlace;                                  // 0x0623(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoPickValidPlace;                                      // 0x0624(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0625(0x0003) MISSED OFFSET
	float                                              OverlayPlaceHeight;                                       // 0x0628(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverlayMaxHeightFromGround;                               // 0x062C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DetectDeath;                                              // 0x0630(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0634(0x0004) MISSED OFFSET
	int                                                MaxCountLimit;                                            // 0x0638(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDoDensityCheck;                                          // 0x063C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x063D(0x0003) MISSED OFFSET
	struct FString                                     LuaModPath;                                               // 0x0640(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BuildSystem.BuildingActorBase");
		return pStaticClass;
	}


	void SpawnDestroyParticle(bool bSpawnParticle, const struct FTransform& Loc, const struct FSoftObjectPath& DestroyBuildingEffectPath, class UWorld* World);
	void PlayDestroyAnimation(bool bUseParticle);
	void OnTakeDamageFromVehicle(class AActor* DamagedActor, float ForwardSpeed, class AActor* DamageCauser);
	void OnRep_Health();
	void OnPlayDestroyAnimation(bool bUseParticle);
	void OnBuildingActorDamaged(float Health);
	void OnBornAnimationPlayEndInClient();
	int GetBuildID();
	void BPOnOwnerChanged();
};


// Class BuildSystem.BuildSystemComponent
// 0x0268 (0x0440 - 0x01D8)
class UBuildSystemComponent : public ULuaActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnConstructionComplete;                                   // 0x01D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDoubleClickMode2Event;                                  // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDoubleClickMode2PercentEvent;                           // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              MaxmumConstructingDistance;                               // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x020C(0x003C) MISSED OFFSET
	class UClass*                                      BuildingSelectorClass;                                    // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      SelectBuildMeshClass;                                     // 0x0250(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdateBuildEnableTimer;                                   // 0x0258(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBuildDist;                                             // 0x025C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridGroundThreshold;                                      // 0x0260(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AIIsOpenAdsorb;                                           // 0x0264(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AIIsOpenLeftAndRightTry;                                  // 0x0265(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0266(0x0002) MISSED OFFSET
	float                                              GridGroundCheckDepth;                                     // 0x0268(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWorldGridData                              WorldGridData;                                            // 0x026C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bCanPlaceOnConstructableActor;                            // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0279(0x0003) MISSED OFFSET
	int                                                bIsFastPlacementMode;                                     // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Mode2PressTouchBuildIndex;                                // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsStartPreBuildMode2;                                    // 0x0284(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0285(0x0003) MISSED OFFSET
	struct FVector2D                                   Mode2PreBuildPos;                                         // 0x0288(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentDoubleClickDuration;                               // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ValidDoubleClickDuration;                                 // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ValidDoubleClickInterval;                                 // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ValidDoubleClickDistance;                                 // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSouldSkipOwningPlayer;                                   // 0x02A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNativeTouchActorBuildEnabled;                            // 0x02A1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNativeDoubleCkickBuildEnabled;                           // 0x02A2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x02A3(0x0005) MISSED OFFSET
	unsigned char                                      UnknownData05[0x50];                                      // 0x02A3(0x0050) UNKNOWN PROPERTY: MapProperty BuildSystem.BuildSystemComponent.ActorSelectorMap
	TArray<class UClass*>                              SkippingObjects;                                          // 0x02F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDebugDraw;                                               // 0x0308(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPickLocationDebugDraw;                                   // 0x0309(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x030A(0x0006) MISSED OFFSET
	TArray<class UClass*>                              FilterTemplates;                                          // 0x0310(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              ActorsShouldSkipVisiblityCheck;                           // 0x0320(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<ECollisionChannel>                     BuildingGridChannel;                                      // 0x0330(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0331(0x0003) MISSED OFFSET
	float                                              MaxCanAdsorbAngle;                                        // 0x0334(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SnappingDistance;                                         // 0x0338(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SnappingDetectRadius;                                     // 0x033C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AIMaxCanRotateAngle;                                      // 0x0340(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCheckPlaceActorPosSwitch;                                // 0x0344(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	float                                              FloatErrorTolerance;                                      // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	class ASelectBuildActor*                           SelectBuildActor;                                         // 0x0350(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x20];                                      // 0x0358(0x0020) MISSED OFFSET
	int                                                CachedCDOIndex;                                           // 0x0378(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	class AActor*                                      CachedCDOActor;                                           // 0x0380(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0xB8];                                      // 0x0388(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BuildSystem.BuildSystemComponent");
		return pStaticClass;
	}


	void TryAttachToMoveablePlatform(class AActor* SpawnedBuilding, const struct FVector& BuildLocation);
	void StopPlaceBuilding();
	void StartPrePlaceBuilding(int InBuildID, int AvatarID, TEnumAsByte<EBuildingViewType> viewType);
	void SkipCDTimeByBuildID(int InBuildID, float IncreaseRate);
	bool ShouldEnableDoubleTouchMode();
	void SetPrebuildEnabled(bool CanBePlaced, bool IsVisible);
	void SetBuildingData(int Index, const struct FBuildingData& InData);
	void ServerStopPlaceBuilding();
	void ServerStartPrePlaceBuilding();
	void ServerPlaceBuildActor(int BuildingIndex, const struct FVector& BuildLocation, const struct FRotator& BuildRotation, uint32_t InResult, int AvatarID);
	void S2C_SkipCDTimeByBuildID(int InBuildID, float IncreaseRate);
	void S2C_ResetBuildngCDByBuildID(int InBuildID, float InNewCDTime);
	void ResetBuildngCDByBuildID(int InBuildID, float InNewCDTime);
	void ResetBuildList();
	bool ProccessNothingHitTraceOverlap(const struct FVector& DestLocation, const struct FRotator& DestRotation, float MaxBuildDist, int buildIndex, const struct FVector& ViewLocation, struct FVector* OutLocation);
	void PlaceBuildingWithIndex(int buildIndex, int AvatarID);
	void PlaceBuildingAtLocation(int buildIndex, const struct FVector& Loc, const struct FRotator& Rot);
	void PlaceBuilding(int AvatarID);
	void OverriveDeploymentTransform(const struct FRotator& rotIn, const struct FVector& locIn, struct FRotator* rotOut, struct FVector* locOut);
	void OverrideBuildingMaxBuildDistance(float BuildingMaxDistance, bool SetAll, int BuildingID);
	void OnTouchedConstructableBoxEnded(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void OnTouchedConstructableBox(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void OnTouchActorBuild(const struct FVector2D& ScreenPosition, class APlayerController* Controller);
	void OnAsyncLoadingEffectFinished(int buildIndex);
	void OnAsyncLoadingBuildingFinished(int buildIndex);
	bool IsOverlayBuildHeightValid(const struct FVector& BuildLocation, float OverlayMaxHeightFromGround);
	bool IsInPreBuildingMode();
	bool IsCanPlaceBuildingBP(int InBuildID);
	bool IsCanPlaceBuilding(int InBuildID, TEnumAsByte<EBuildingActionType> _TYPE);
	bool IsActorProhibited(class AActor* Actor);
	struct FSoftObjectPath GetPreBuildingEffectPath(int InBuildID, int AvatarID);
	class APlayerController* GetOwnerPlayerController();
	float GetMaxDistance();
	bool GetIsHasInitData();
	int GetIndexByBuildingID(int BuildID);
	TEnumAsByte<EBuildingType> GetCurrentBuildType();
	class AActor* GetCDOByIndex(int Index);
	TArray<struct FBuildingData> GetBuildingList();
	void EnableBuildingByID(int BuildID, bool bEnable);
	void DoSceenTouchBuild(int buildIndex, const struct FVector2D& ScreenPostion, int PointerIndex, TEnumAsByte<EBuildingActionType> _TYPE, bool IsBegin, TEnumAsByte<EBuildingActionType> CustomBuildEvent);
	bool DensityCheck(const struct FBuildingActorDensityCheck& DensityCheckParmas);
	bool CheckShouldSkipByVisibility(class UPrimitiveComponent* _comp, int buildIndex);
	bool CheckPlacementWithPitch(const struct FHitResult& Hit, const struct FVector& BoxExtent, const struct FBuildingData& CurBuildData, struct FVector* OutLocation, struct FRotator* OutRotation);
	bool CheckPlacementOverlap(TArray<struct FHitResult> HitArray, const struct FVector& ViewLocation, const struct FVector& BoxExtent, const struct FBuildingData& CurBuildData, const struct FRotator& BuildRotation, const struct FRotator& ControlRot, struct FVector* OutLocation, bool* HasForbiddenObject);
	bool CheckObjectIsOneOfTheTemplate(class UObject* Obj, TArray<class UClass*> _ActorFilterTemplates);
	bool BuildAtWorldLoc(int buildIndex, const struct FTransform& tranx, const struct FVector& EndLocation, bool bUseTrace, TEnumAsByte<EBuildingActionType> BuildType);
	void AddBuildingData(const struct FBuildingData& InData);
};


// Class BuildSystem.BuildingActorInterface
// 0x0000 (0x0028 - 0x0028)
class UBuildingActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BuildSystem.BuildingActorInterface");
		return pStaticClass;
	}


	bool ShouldUseExtraRotation();
	bool ShouldUseExtraOffset();
	bool ShouldSnapToGrid();
	bool ShouldCustomBlockingChannels();
	bool ShouldCheckVisibilityTypes();
	void SetBuildingActorID(int BuildID);
	void PrebuildCDOBodyInstance(class UWorld* World, const struct FTransform& tranx);
	void NonCullingBeginPlay();
	float MaxUnderWaterBuildDepth();
	bool IsEnablePitchRotatePlace();
	bool IsEnableOverlayPlace();
	bool IsAutoPickValidPlace();
	void HandleBuildingDestroyed(class AController* InstigatedBy);
	void HandleBuildingConstructed(class AController* InstigatedBy);
	struct FBuildingActorWorldSnapSetup GetWorldSnapSetup();
	TArray<class UClass*> GetVisibilitySkipTypes();
	struct FVector GetViewLocationOffset();
	TArray<class UClass*> GetProhibitedActorTemplateList();
	struct FSoftObjectPath GetPreBuildingEffectPath();
	float GetOverlayPlaceHeight();
	float GetOverlayMaxHeightFromGround();
	float GetMaxTraceDepth();
	float GetMaxDeviation();
	float GetDetectDeath();
	struct FTransform GetDestroyedParticleTransformOffset();
	struct FBuildingActorDensityCheck GetDensityParams(const struct FVector& Location);
	TArray<TEnumAsByte<ECollisionChannel>> GetCustomBlockingChannels();
	TEnumAsByte<EBuildingActorConstructingMode> GetConstructingMode();
	int GetBuildingActorID();
	struct FRotator GetActorCollisionBoxRotator();
	struct FVector GetActorCollisionBoxExtern();
	struct FVector GetActorCollisionBoxCenter();
	bool CanDoQuadTrace();
	bool CanBuildUnderWater();
	bool BPCheckPlacement(class UWorld* World, const struct FTransform& tranx, int CheckType);
};


// Class BuildSystem.BuildingActorMgr
// 0x0010 (0x0400 - 0x03F0)
class ABuildingActorMgr : public AActor
{
public:
	TArray<struct FBuildingActorInfo>                  BuildingActorList;                                        // 0x03F0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BuildSystem.BuildingActorMgr");
		return pStaticClass;
	}


	void OnBuildingActorSpawned(class AActor* InOwnerActor, class ABuildingActorBase* InBuildingActor);
	void OnBuildingActorDestroyed(class ABuildingActorBase* InBuildingActor);
	class ABuildingActorMgr* GetInstance(class UObject* WorldContextObject);
};


// Class BuildSystem.BuildingGridComponent
// 0x0010 (0x07B0 - 0x07A0)
class UBuildingGridComponent : public UBoxComponent
{
public:
	struct FVector                                     BuildCenterOffset;                                        // 0x07A0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x07AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BuildSystem.BuildingGridComponent");
		return pStaticClass;
	}

};


// Class BuildSystem.SelectBuildActor
// 0x0010 (0x0400 - 0x03F0)
class ASelectBuildActor : public AActor
{
public:
	class UParticleSystemComponent*                    SelectBuildEffect;                                        // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BuildSystem.SelectBuildActor");
		return pStaticClass;
	}


	void SetSelectActorTemplate(class UParticleSystem* Template);
	void SetSelectActorPlacementEnable(bool PlacementEnable, bool IsVisible);
	void SetIsPlacementEnable(bool Val);
	void OnParticleLoaded();
	bool IsCurrentPlacementEnable();
	bool GetIsPlacementEnable();
};


}

