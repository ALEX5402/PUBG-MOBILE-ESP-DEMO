#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Addons.AnimPoseRecorder
// 0x00C0 (0x00E8 - 0x0028)
class UAnimPoseRecorder : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.AnimPoseRecorder");
		return pStaticClass;
	}

};


// Class Addons.AssetPlayerSyncNode
// 0x00A0 (0x00C8 - 0x0028)
class UAssetPlayerSyncNode : public UObject
{
public:
	TMap<struct FName, float>                          SyncGroupInternalTimerMap;                                // 0x0028(0x0050) (ZeroConstructor, Transient)
	TMap<struct FName, int>                            SyncGroupSequenceIndexMap;                                // 0x0078(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.AssetPlayerSyncNode");
		return pStaticClass;
	}


	void SetGroupTimer(const struct FName& GroupName, float InternalTime);
	void SetGroupIndex(const struct FName& GroupName, int SequenceIndex);
	float GetGroupTime(const struct FName& GroupName);
	int GetGroupIndex(const struct FName& GroupName);
};


// Class Addons.BioVehicleAnimInstanceBase
// 0x0240 (0x0600 - 0x03C0)
class UBioVehicleAnimInstanceBase : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x03C0(0x0060) MISSED OFFSET
	TArray<float>                                      LOD_Level_DistanceFactor;                                 // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bEnableTerrainAdapting;                                   // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableRootPositionAdaption;                              // 0x0431(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableRootRotationAdaption;                              // 0x0432(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableFootPositionAdaption;                              // 0x0433(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableFootRotationAdaption;                              // 0x0434(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0435(0x0003) MISSED OFFSET
	TMap<int, int>                                     DeviceLevelToEvaluateSkipMap;                             // 0x0438(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                DefaultSkipEvaluateTimes;                                 // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	class ABioVehicleBase*                             OwnerVehicle;                                             // 0x0490(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsServer;                                                // 0x0498(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsDead;                                                  // 0x0499(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHasBeenTamed;                                            // 0x049A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bAnimVarHasCached;                                        // 0x049B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHasDrivers;                                              // 0x049C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasAnyPassengers;                                        // 0x049D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x049E(0x0002) MISSED OFFSET
	float                                              CurrentDistanceFactor;                                    // 0x04A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                EvaluateSkipTimes;                                        // 0x04A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                AnimLOD;                                                  // 0x04A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAnimLODChanged;                                         // 0x04B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAnimSequence*                               DeathAnim;                                                // 0x04C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UBioVehicleRiderAnimInstanceBase> DriverAnimInstance;                                       // 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x04D0(0x0008) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x04D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<TEnumAsByte<ECollisionChannel>>             TerrainAdaption_ObjectTypesToQuery;                       // 0x04E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bShouldUseSkipQueryOpt;                                   // 0x04F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x04F9(0x0007) MISSED OFFSET
	struct FName                                       RootTraceBoneName;                                        // 0x0500(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RootTraceSphereRadius;                                    // 0x0508(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RootOffsetMaxZ;                                           // 0x050C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RootOffsetMaxPitch;                                       // 0x0510(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RootPositionLerpSpeed;                                    // 0x0514(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RootRotationLerpSpeed;                                    // 0x0518(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RootTraceUpOffset;                                        // 0x051C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RootTraceDownOffset;                                      // 0x0520(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	struct FName                                       LeftFootTraceBoneName;                                    // 0x0528(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightFootTraceBoneName;                                   // 0x0530(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootTraceSphereRadius;                                    // 0x0538(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootPositionLerpSpeed;                                    // 0x053C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootRotationLerpSpeed;                                    // 0x0540(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootOffsetMaxZ;                                           // 0x0544(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootOffsetMaxPitch;                                       // 0x0548(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootOffsetMaxRoll;                                        // 0x054C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootTraceUpOffset;                                        // 0x0550(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootTraceDownOffset;                                      // 0x0554(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EBioVehicleTerrainAdaptingType                     TerrainAdaptingType;                                      // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0559(0x0003) MISSED OFFSET
	float                                              LeftFootOffsetZ;                                          // 0x055C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    LeftFootRotatorOffset;                                    // 0x0560(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	float                                              RightFootOffsetZ;                                         // 0x056C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    RightFootRotatorOffset;                                   // 0x0570(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	float                                              RootOffsetZ;                                              // 0x057C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              RootOffsetPitch;                                          // 0x0580(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7C];                                      // 0x0584(0x007C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleAnimInstanceBase");
		return pStaticClass;
	}


	void UpdateTerrainAdapting(float DeltaSeconds);
	void TraceQuery();
	void NotifyDriverToDoTransition(const struct FString& ToStateMachineName);
	void LuaOnAnimLodChanged(int NewAnimLod);
	void LuaInitializeWithDeviceLevel(int DeviceLevel);
	void LuaInitializeAnimation();
	void LuaCacheAnimVarWithAnimList(class UBioVehicleAnimListComponent* RiderAnimListComponent);
	class UBioVehicleRiderAnimInstanceBase* GetDriverAnimInstance();
	void CacheAnimVarWithAnimList(class UBioVehicleAnimListComponent* AnimListComponent);
	bool BoneTrace(const struct FName& BoneName, float UpOffset, float DownOffset, float TraceSphereRadius, struct FVector* ImpactPoint, struct FVector* ImpactNormal);
};


// Class Addons.BioVehicleAnimListComponent
// 0x0080 (0x0190 - 0x0110)
class UBioVehicleAnimListComponent : public UActorComponent
{
public:
	bool                                               bEnableAnimListOnDS;                                      // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	TArray<struct FBioVehicleRiderAnim>                BioVehicleRiderAnimData;                                  // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnAnimListLoadingFinished;                                // 0x0128(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0138(0x0008) MISSED OFFSET
	TMap<TEnumAsByte<EBioVehiclePoseType>, class UAnimationAsset*> BioVehicleRiderAnimDataMap;                               // 0x0140(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleAnimListComponent");
		return pStaticClass;
	}

};


// Class Addons.BioVehicleBase
// 0x0370 (0x17C0 - 0x1450)
class ABioVehicleBase : public ASTExtraVehicleBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1450(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBioVehicleFrozen;                                       // 0x1458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBioVehicleRunOutFuel;                                   // 0x1468(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bFuelExhausted;                                           // 0x1478(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1479(0x0007) MISSED OFFSET
	class UBioVehicleMovementComponent*                VehicleMovement;                                          // 0x1480(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x1488(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BodyBoxComponent;                                         // 0x1490(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           HeadCapsuleComponent;                                     // 0x1498(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UVehicleSpringArmComponent*                  BioVehicleSpringArm;                                      // 0x14A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBeginAccelerate;                                        // 0x14A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndAccelerate;                                          // 0x14B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bHasAcceleration;                                         // 0x14C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHasAccelerationLastFrame;                                // 0x14C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1E];                                      // 0x14CA(0x001E) MISSED OFFSET
	struct FBasedMovementInfo                          BasedMovement;                                            // 0x14E8(0x0030)
	struct FBasedMovementInfo                          ReplicatedBasedMovement;                                  // 0x1518(0x0030) (Net)
	struct FVector                                     BaseTranslationOffset;                                    // 0x1548(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x1554(0x000C) MISSED OFFSET
	struct FQuat                                       BaseRotationOffset;                                       // 0x1560(0x0010) (IsPlainOldData)
	bool                                               bInBaseReplication;                                       // 0x1570(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x1571(0x000F) MISSED OFFSET
	struct FRootMotionMovementParams                   ClientRootMotionParams;                                   // 0x1580(0x0040) (Transient)
	bool                                               bCanVehicleJump;                                          // 0x15C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSimGravityDisabled : 1;                                  // 0x15C1(0x0001)
	unsigned char                                      bPressedJump : 1;                                         // 0x15C1(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bWasJumping : 1;                                          // 0x15C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst)
	unsigned char                                      UnknownData05[0x2];                                       // 0x15C2(0x0002) MISSED OFFSET
	float                                              JumpKeyHoldTime;                                          // 0x15C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              JumpForceTimeRemaining;                                   // 0x15C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              ProxyJumpForceStartedTime;                                // 0x15CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              JumpMaxHoldTime;                                          // 0x15D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                JumpMaxCount;                                             // 0x15D4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                JumpCurrentCount;                                         // 0x15D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              BioVehicleLaunchCollDownTime;                             // 0x15DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnReachedJumpApex;                                        // 0x15E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData06[0x10];                                      // 0x15F0(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    MovementModeChangedDelegate;                              // 0x1600(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBioVehicleJumped;                                       // 0x1610(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCharacterMovementUpdated;                               // 0x1620(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      ReplicatedMovementMode;                                   // 0x1630(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bClientCheckEncroachmentOnNetUpdate : 1;                  // 0x1631(0x0001) (Transient)
	unsigned char                                      bClientUpdating : 1;                                      // 0x1631(0x0001) (Transient)
	unsigned char                                      bClientWasFalling : 1;                                    // 0x1631(0x0001) (Transient)
	unsigned char                                      UnknownData07[0xA];                                       // 0x1632(0x000A) MISSED OFFSET
	bool                                               HasBeenTamed;                                             // 0x163C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0xF];                                       // 0x163D(0x000F) MISSED OFFSET
	bool                                               bCanbeDamagedByTrex;                                      // 0x164C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldGenerateStaticDeadBodyWhileDeath;                  // 0x164D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x164E(0x0002) MISSED OFFSET
	float                                              OverlapTestScale;                                         // 0x1650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x1654(0x0004) MISSED OFFSET
	struct FName                                       AnimCompTagName;                                          // 0x1658(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBioVehicleBeenTamed;                                    // 0x1660(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	class USkeletalMesh*                               UntamedMesh;                                              // 0x1670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               TamedMesh;                                                // 0x1678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FFootStepEffect>         FootStepEffects;                                          // 0x1680(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, class UParticleSystemComponent*> FootStepEffectRuntimeData;                                // 0x16D0(0x0050) (ExportObject, ZeroConstructor, Transient)
	struct FScriptMulticastDelegate                    OnAnimInstanceActive;                                     // 0x1720(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bShouldPlayRandomIdleWhilePassengersOn;                   // 0x1730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x1731(0x0003) MISSED OFFSET
	float                                              RandomIdleResetTimeMin;                                   // 0x1734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomIdleResetTimeMax;                                   // 0x1738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RandomIdleIndexMin;                                       // 0x173C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RandomIdleIndexMax;                                       // 0x1740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x1744(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBioVehicleDoRandomIdle;                                 // 0x1748(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData13[0x8];                                       // 0x1758(0x0008) MISSED OFFSET
	bool                                               bEnableSimulatedOptimize;                                 // 0x1760(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x1761(0x0007) MISSED OFFSET
	TArray<struct FSimulateThresholds>                 BioVehicleSimulateThresholds;                             // 0x1768(0x0010) (ZeroConstructor, Config)
	bool                                               bEnableCollisionOptimization;                             // 0x1778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x1779(0x0003) MISSED OFFSET
	float                                              OpenCollisionMinDistSq;                                   // 0x177C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShooterOpenCollisionMaxCosTheta;                          // 0x1780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x1784(0x0004) MISSED OFFSET
	TArray<struct FOpenCollisionLODAngle>              BioVehicleCollisionDistSqAngles;                          // 0x1788(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CheckCollisionOpenInternal;                               // 0x1798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x179C(0x0004) MISSED OFFSET
	struct FName                                       CreatureVehicleMesh_ProfileName;                          // 0x17A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugCollisionLine;                                      // 0x17A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0xF];                                       // 0x17A9(0x000F) MISSED OFFSET
	class ASTExtraBaseCharacter*                       CacheNearlyCharacer;                                      // 0x17B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleBase");
		return pStaticClass;
	}


	void StopJumping();
	void SetSimulatePhysics(bool bSimulate);
	void SetReplicateMovement(bool bInReplicateMovement);
	void SetHandBrake(float Rate);
	void SetBoosting(bool bEnalbed);
	void ServerResetToPosition(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void OnWalkingOffLedge(const struct FVector& PreviousFloorImpactNormal, const struct FVector& PreviousFloorContactNormal, const struct FVector& PreviousLocation, float TimeDelta);
	void OnTakingDamage(class AActor* HitActor, class AActor* HitInstigator, const struct FHitResult& HitInfo, const struct FVector& ImpulseDir, float Damage);
	void OnRep_ReplicatedBasedMovement();
	void OnRep_HasBeenTamed();
	void OnRep_FuelExhausted(bool bPrevFuelExhausted);
	void OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	void OnLanded(const struct FHitResult& Hit);
	void OnJumped();
	void OnExitingVehicleOnServer();
	void OnEnteringVehicleOnServer(bool IsSucc);
	void OnAnimListLoadFinished(class UBioVehicleAnimListComponent* AnimListComponent);
	void MoveUp(float Rate);
	void LaunchCharacter(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	void K2_UpdateCustomMovement(float DeltaTime);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
	void Jump();
	bool IsPlayingRootMotion();
	bool IsJumpProvidingForce();
	void HandleOnRiderAnimInstanceActive(class UAnimInstance* ActivedAnimInstance);
	void HandleOnClientBeenTamed();
	float GetVehicleOriginToLand();
	bool GetVehicleBreakOutState();
	struct FVector GetRotationInputDir();
	struct FRotator GetPlayerLookAtRotation();
	float GetConsumeFuelRate();
	class UBoxComponent* GetBodyShapeComponent();
	class UBioVehicleMovementComponent* GetBioVehicleMovement();
	struct FVector GetBaseTranslationOffset();
	void ExitVehicle();
	void EnterVehicle(bool IsSucc);
	void ClientEnterVehicle(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	bool CanJumpInternal();
	bool CanJump();
	bool CanConsumeFuel();
	bool CanCharacterEnterVehicle(class ASTExtraPlayerCharacter* InCharacter, ESTExtraVehicleSeatType SeatType);
	void CacheInitialMeshOffset(const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation);
	void BroadCastPlayingRandomIdleAnim(int RandomIdleAnim);
	bool BPCanCharacterEnterVehicle(class ASTExtraPlayerCharacter* InCharacter);
	void ActiveFootParticleEffect(const struct FName& EffectName, const struct FVector& ActivedLocation);
};


// Class Addons.BioVehicleDamageComponent
// 0x0020 (0x04F0 - 0x04D0)
class UBioVehicleDamageComponent : public UVehicleDamageComponent
{
public:
	float                                              MaxHitByVehicleImpulseVelocity;                           // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinHitByVehicleImpulseVelocity;                           // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseSelfCD;                                            // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x04DC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleDamageComponent");
		return pStaticClass;
	}

};


// Class Addons.BioVehicleMovementComponent
// 0x0960 (0x0AF0 - 0x0190)
class UBioVehicleMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0190(0x0010) MISSED OFFSET
	unsigned char                                      bHasRequestedVelocity : 1;                                // 0x01A0(0x0001) (Transient)
	unsigned char                                      bNeedSLerpRequestedVelocity : 1;                          // 0x01A0(0x0001) (Transient)
	unsigned char                                      bRequestedMoveWithMaxSpeed : 1;                           // 0x01A0(0x0001) (Transient)
	unsigned char                                      bWasAvoidanceUpdated : 1;                                 // 0x01A0(0x0001) (Transient)
	unsigned char                                      UnknownData01 : 2;                                        // 0x01A0(0x0001)
	unsigned char                                      bProjectNavMeshWalking : 1;                               // 0x01A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bProjectNavMeshOnBothWorldChannels : 1;                   // 0x01A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bNeedSlowDownRequestedVelocity : 1;                       // 0x01A1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x2];                                       // 0x01A2(0x0002) MISSED OFFSET
	float                                              SlowDownRequestedVelocityFactor;                          // 0x01A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x01A8(0x0010) MISSED OFFSET
	float                                              GravityScale;                                             // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x01BC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CustomMovementMode;                                       // 0x01BD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x22];                                      // 0x01BE(0x0022) MISSED OFFSET
	float                                              MaxStepHeight;                                            // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkableFloorAngle;                                       // 0x01E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkableFloorZ;                                           // 0x01E8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              WalkableHeadHitZ;                                         // 0x01EC(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              StepForwardMinDelta;                                      // 0x01F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GroundFriction;                                           // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkSpeed;                                             // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkSpeedCrouched;                                     // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanStandOnOthervehicle;                                  // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0201(0x0003) MISSED OFFSET
	float                                              MaxSwimSpeed;                                             // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlySpeed;                                              // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyBackSpeed;                                          // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxCustomMovementSpeed;                                   // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinAnalogWalkSpeed;                                       // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingFrictionFactor;                                    // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingFriction;                                          // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationWalking;                               // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationFalling;                               // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationSwimming;                              // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwimFriction;                                             // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationFlying;                                // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAirControl;                                        // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0239(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CurveAirControl;                                          // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AirControl;                                               // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirControlBoostMultiplier;                                // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirControlBoostVelocityThreshold;                         // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingLateralFriction;                                   // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrouchedHalfHeight;                                       // 0x0258(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Buoyancy;                                                 // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwimVelocityZLimitScale;                                  // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatingUpZ;                                              // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PerchRadiusThreshold;                                     // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PerchAdditionalHeight;                                    // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationRate;                                             // 0x0270(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SmoothRotationLerpFactor;                                 // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotateToCameraLerpSpeed;                                  // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DeltaRotated;                                             // 0x0284(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      bUseControllerDesiredRotation : 1;                        // 0x0290(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOrientRotationToMovement : 1;                            // 0x0290(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bNeedBackward : 1;                                        // 0x0290(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSweepWhileNavWalking : 1;                                // 0x0290(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAutoFloatingUp : 1;                                      // 0x0290(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSeriousInjuried : 1;                                     // 0x0290(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bJumpAllowedWhenSeriousInjuried : 1;                      // 0x0290(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData07 : 1;                                        // 0x0290(0x0001)
	unsigned char                                      bMovementInProgress : 1;                                  // 0x0291(0x0001)
	unsigned char                                      bEnableScopedMovementUpdates : 1;                         // 0x0291(0x0001) (Edit)
	unsigned char                                      bForceMaxAccel : 1;                                       // 0x0291(0x0001)
	unsigned char                                      bRunPhysicsWithNoController : 1;                          // 0x0291(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bForceNextFloorCheck : 1;                                 // 0x0291(0x0001) (Edit, BlueprintVisible, DisableEditOnTemplate, EditConst)
	unsigned char                                      bShrinkProxyCapsule : 1;                                  // 0x0291(0x0001)
	unsigned char                                      bCanWalkOffLedges : 1;                                    // 0x0291(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanWalkOffLedgesWhenCrouching : 1;                       // 0x0291(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0292(0x0002) MISSED OFFSET
	float                                              HeadCollisionScaleOnDS;                                   // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWalkingBlockHeadSlide;                                   // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWalkingDoubleCheckWhenPenetrate;                         // 0x0299(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x029A(0x0002) MISSED OFFSET
	float                                              WalkingHeadPenetrateCheckRadius;                          // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkingHeadPenetrateCheckHeight;                          // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFallingBlockHeadSlide;                                   // 0x02A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoubleCheckSlide;                                        // 0x02A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x02A6(0x0002) MISSED OFFSET
	float                                              HeadSlideCollisionScaleHeight;                            // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadSlideCollisionScaleRadius;                            // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadSlideFallingCollisionScale;                           // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHeadCheckSlope;                                          // 0x02B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowBodySlideSurface;                                    // 0x02B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEableHeadBlockVelocityLimit;                             // 0x02B6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x02B7(0x0001) MISSED OFFSET
	float                                              HeadBlockLimitVelocity;                                   // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEableHeadBlockLimitThrottle;                             // 0x02BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLastHeadWalkingCheck;                                    // 0x02BD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x02BE(0x0002) MISSED OFFSET
	float                                              bLastHeadRotationCheck;                                   // 0x02C0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bClientResolveServerPenetration;                          // 0x02C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13 : 1;                                        // 0x02C5(0x0001)
	unsigned char                                      bNetworkSkipProxyPredictionOnNetUpdate : 1;               // 0x02C5(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bForceNoSimulatePrediction : 1;                           // 0x02C5(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bDeferUpdateMoveComponent : 1;                            // 0x02C5(0x0001)
	unsigned char                                      UnknownData14[0x2];                                       // 0x02C6(0x0002) MISSED OFFSET
	class USceneComponent*                             DeferredUpdatedMoveComponent;                             // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MaxOutOfWaterStepHeight;                                  // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OutofWaterZ;                                              // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnablePhysicsInteraction;                                // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTouchForceScaledToMass;                                  // 0x02DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPushForceScaledToMass;                                   // 0x02DE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPushForceUsingZOffset;                                   // 0x02DF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePushForceToVelocity;                                // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	float                                              StandingDownwardForceScale;                               // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitialPushForceFactor;                                   // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PushForceFactor;                                          // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PushForcePointZOffsetFactor;                              // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TouchForceFactor;                                         // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinTouchForce;                                            // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTouchForce;                                            // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RepulsionForce;                                           // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	struct FVector                                     Acceleration;                                             // 0x0308(0x000C) (Net, IsPlainOldData)
	struct FVector                                     PendingDirectionalBrakingAccelerationToApply;             // 0x0314(0x000C) (Net, IsPlainOldData)
	struct FVector                                     LastUpdateLocation;                                       // 0x0320(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	struct FQuat                                       LastUpdateRotation;                                       // 0x0330(0x0010) (IsPlainOldData)
	struct FVector                                     LastUpdateVelocity;                                       // 0x0340(0x000C) (IsPlainOldData)
	float                                              ServerLastTransformUpdateTimeStamp;                       // 0x034C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     PendingImpulseToApply;                                    // 0x0350(0x000C) (IsPlainOldData)
	struct FVector                                     PendingForceToApply;                                      // 0x035C(0x000C) (IsPlainOldData)
	float                                              AnalogInputModifier;                                      // 0x0368(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x8];                                       // 0x036C(0x0008) MISSED OFFSET
	float                                              MaxSimulationTimeStep;                                    // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxSimulationIterations;                                  // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDepenetrationWithGeometry;                             // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDepenetrationWithGeometryAsProxy;                      // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDepenetrationWithPawn;                                 // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDepenetrationWithPawnAsProxy;                          // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NetworkSimulatedSmoothLocationTime;                       // 0x038C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetworkSimulatedSmoothRotationTime;                       // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ListenServerNetworkSimulatedSmoothLocationTime;           // 0x0394(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ListenServerNetworkSimulatedSmoothRotationTime;           // 0x0398(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetProxyShrinkRadius;                                     // 0x039C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetProxyShrinkHalfHeight;                                 // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetworkMaxSmoothUpdateDistance;                           // 0x03A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetworkMaxSmoothScale;                                    // 0x03A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetworkNoSmoothUpdateDistance;                            // 0x03AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReplaySmoothUseInterp;                                   // 0x03B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ENetworkSmoothingMode                              NetworkSmoothingMode;                                     // 0x03B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0x03B2(0x0002) MISSED OFFSET
	float                                              LedgeCheckThreshold;                                      // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpOutOfWaterPitch;                                      // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	struct FFindFloorResult                            CurrentFloor;                                             // 0x03C0(0x00A8) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	TEnumAsByte<EMovementMode>                         DefaultLandMovementMode;                                  // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         DefaultWaterMovementMode;                                 // 0x0469(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         GroundMovementMode;                                       // 0x046A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bMaintainHorizontalGroundVelocity : 1;                    // 0x046B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bImpartBaseVelocityX : 1;                                 // 0x046B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bImpartBaseVelocityY : 1;                                 // 0x046B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bImpartBaseVelocityZ : 1;                                 // 0x046B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bImpartBaseAngularVelocity : 1;                           // 0x046B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bJustTeleported : 1;                                      // 0x046B(0x0001) (Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst)
	unsigned char                                      bNetworkUpdateReceived : 1;                               // 0x046B(0x0001) (Transient)
	unsigned char                                      bNetworkMovementModeChanged : 1;                          // 0x046B(0x0001) (Transient)
	unsigned char                                      bIgnoreClientMovementErrorChecksAndCorrection : 1;        // 0x046C(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      bNotifyApex : 1;                                          // 0x046C(0x0001) (Edit, BlueprintVisible, EditConst)
	unsigned char                                      bCheatFlying : 1;                                         // 0x046C(0x0001)
	unsigned char                                      bWantsToCrouch : 1;                                       // 0x046C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bCustomAction0 : 1;                                       // 0x046C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bCrouchMaintainsBaseLocation : 1;                         // 0x046C(0x0001) (Edit, BlueprintVisible, DisableEditOnTemplate, EditConst)
	unsigned char                                      bIgnoreBaseRotation : 1;                                  // 0x046C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bFastAttachedMove : 1;                                    // 0x046C(0x0001)
	unsigned char                                      bAlwaysCheckFloor : 1;                                    // 0x046D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseFlatBaseForFloorChecks : 1;                           // 0x046D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPerformingJumpOff : 1;                                   // 0x046D(0x0001)
	unsigned char                                      bWantsToLeaveNavWalking : 1;                              // 0x046D(0x0001)
	unsigned char                                      bUseRVOAvoidance : 1;                                     // 0x046D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bRequestedMoveUseAcceleration : 1;                        // 0x046D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData21[0x2];                                       // 0x046E(0x0002) MISSED OFFSET
	float                                              AvoidanceConsiderationRadius;                             // 0x0470(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RequestedVelocity;                                        // 0x0474(0x000C) (Transient, IsPlainOldData)
	int                                                AvoidanceUID;                                             // 0x0480(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           // 0x0484(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            // 0x0488(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           // 0x048C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              AvoidanceWeight;                                          // 0x0490(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PendingLaunchVelocity;                                    // 0x0494(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData22[0xB0];                                      // 0x04A0(0x00B0) MISSED OFFSET
	float                                              NavMeshProjectionInterval;                                // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavMeshProjectionTimer;                                   // 0x0554(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              NavMeshProjectionInterpSpeed;                             // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavMeshProjectionHeightScaleUp;                           // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavMeshProjectionHeightScaleDown;                         // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavWalkingFloorDistTolerance;                             // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavRotationFactor;                                        // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavWantedSpeed;                                           // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bForceBraking : 1;                                        // 0x0570(0x0001) (Deprecated)
	unsigned char                                      UnknownData23[0x3];                                       // 0x0571(0x0003) MISSED OFFSET
	float                                              CrouchedSpeedMultiplier;                                  // 0x0574(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              UpperImpactNormalScale;                                   // 0x0578(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x057C(0x0004) MISSED OFFSET
	struct FBioVehicleMovementPostPhysicsTickFunction  PostPhysicsTickFunction;                                  // 0x0580(0x0058)
	bool                                               bEnableSimulatedVelocity;                                 // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpectatorSmoothVelocity;                                 // 0x05D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x2];                                       // 0x05DA(0x0002) MISSED OFFSET
	float                                              ClientServerVelocitySizeSquareThreshold;                  // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDSSmoothVelocity;                                        // 0x05E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAdjustClientWithRotation;                                // 0x05E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x12];                                      // 0x05E2(0x0012) MISSED OFFSET
	bool                                               EnabledResetPredictionData;                               // 0x05F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27[0x13];                                      // 0x05F5(0x0013) MISSED OFFSET
	float                                              MinTimeBetweenTimeStampResets;                            // 0x0608(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0x4];                                       // 0x060C(0x0004) MISSED OFFSET
	struct FRootMotionSourceGroup                      CurrentRootMotion;                                        // 0x0610(0x0100) (Transient)
	unsigned char                                      UnknownData29[0x90];                                      // 0x0710(0x0090) MISSED OFFSET
	struct FRootMotionMovementParams                   RootMotionParams;                                         // 0x07A0(0x0040) (Transient)
	struct FVector                                     AnimRootMotionVelocity;                                   // 0x07E0(0x000C) (Transient, IsPlainOldData)
	bool                                               bWasSimulatingRootMotion;                                 // 0x07EC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bAllowPhysicsRotationDuringAnimRootMotion : 1;            // 0x07ED(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData30[0x2];                                       // 0x07EE(0x0002) MISSED OFFSET
	class ABioVehicleBase*                             VehicleOwner;                                             // 0x07F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData31[0x10];                                      // 0x07F8(0x0010) MISSED OFFSET
	bool                                               bIsAcceptInput;                                           // 0x0808(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x0809(0x0003) MISSED OFFSET
	float                                              NetThrottleInput;                                         // 0x080C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              NetSteeringInput;                                         // 0x0810(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              NetRisingInput;                                           // 0x0814(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData33[0xC];                                       // 0x0818(0x000C) MISSED OFFSET
	float                                              ForwardSpeed;                                             // 0x0824(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              AngularSpeed;                                             // 0x0828(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              HandBrakeRate;                                            // 0x082C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenCustomBodyBox;                                       // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenCustomHeadCapsule;                                   // 0x0831(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotationCheckHeadCapsule;                                // 0x0832(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockRevertTransfrom;                                    // 0x0833(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloorCheckXReduce;                                        // 0x0834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFollowBasedVehicle;                                      // 0x0838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanWalkOnBioVehicle;                                     // 0x0839(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData34[0x6];                                       // 0x083A(0x0006) MISSED OFFSET
	class UCurveFloat*                                 AngularVelocityCurve;                                     // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 AccResistanceCurve;                                       // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DecResistanceCurve;                                       // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 BreakAccelerationCurve;                                   // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 SlopeSpeedFactorCurve;                                    // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultAcceleration;                                      // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBackAcceleration;                                      // 0x086C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularAcceleration;                                      // 0x0870(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultAngularVelocity;                                   // 0x0874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultResistanceCoefficient;                             // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultStaticResistance;                                  // 0x087C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultBrakeAcceleration;                                 // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultSpeed;                                             // 0x0884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBackSpeed;                                             // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeltaDotFactor;                                           // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlopeBlockDotFactorMax;                                   // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlopeBlockDotFactorMin;                                   // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingHeadResolveSpeed;                                  // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData35[0x4];                                       // 0x089C(0x0004) MISSED OFFSET
	float                                              SeriousInjuredSpeedFactor;                                // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData36[0x1];                                       // 0x08A4(0x0001) MISSED OFFSET
	unsigned char                                      bDisableOBSmooth : 1;                                     // 0x08A5(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData37[0x2];                                       // 0x08A6(0x0002) MISSED OFFSET
	float                                              MinJumpSpeed;                                             // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceClientNoCombineWhenRot;                             // 0x08AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceClientNoCombineWhenJump;                            // 0x08AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceClientNoCombineWhenHeadBlock;                       // 0x08AE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceClientNoCombineWhenStepup;                          // 0x08AF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadBlockNoCombineInterval;                               // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StepUpNoCombineInterval;                                  // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData38[0x8];                                       // 0x08B8(0x0008) MISSED OFFSET
	unsigned char                                      NoCombineDeviceLevel;                                     // 0x08C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x08C1(0x0003) MISSED OFFSET
	float                                              NoCombineSecondsPerFrame;                                 // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutonomousMoveWeakNetScaleMSecsMin;                       // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutonomousMoveWeakNetScaleMSecsMax;                       // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutonomousMoveWeakNetScaleRate;                           // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bServerMoveCheckPassWall;                                 // 0x08D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeleportIgnoreCheckPassWall;                             // 0x08D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData40[0x2];                                       // 0x08D6(0x0002) MISSED OFFSET
	float                                              RadiusScaleWhenCheckPassWall;                             // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightScaleWhenCheckPassWall;                             // 0x08DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnablePenetrationResolve;                                // 0x08E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x08E1(0x0003) MISSED OFFSET
	int                                                PenetrationUnResolveCount;                                // 0x08E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PenetrationUnResolveDistanceSq;                           // 0x08E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PenetrationResolveValidDistanceSq;                        // 0x08EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PenetrationResolveValidDistanceMax;                       // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData42[0xC];                                       // 0x08F4(0x000C) MISSED OFFSET
	struct FResolvePenetrationMoveData                 ResolvePenetrationMove;                                   // 0x0900(0x0050) (Transient)
	struct FResolvePenetrationParams                   ResolvePenetrationParams;                                 // 0x0950(0x0058) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData43[0x38];                                      // 0x09A8(0x0038) MISSED OFFSET
	struct FResolvePenetrationMoveData                 LastResolvePenetrationMove;                               // 0x09E0(0x0050) (Transient)
	unsigned char                                      UnknownData44[0x30];                                      // 0x0A30(0x0030) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBioVehicleResolvePenetrationDelegate;                   // 0x0A60(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData45[0xC];                                       // 0x0A70(0x000C) MISSED OFFSET
	float                                              DefaultJumpHeight;                                        // 0x0A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 JumpingHeightCurve;                                       // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 JumpingHeightByObsHeightCurve;                            // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsControlJumpHeight : 1;                                 // 0x0A90(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bApplyGravityWhileJumping : 1;                            // 0x0A90(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData46[0x3];                                       // 0x0A91(0x0003) MISSED OFFSET
	float                                              JumpHorizontalVelocityScale;                              // 0x0A94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StandByJumpSpeed;                                         // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StandByJumpSpeedZ;                                        // 0x0A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpZVelocity;                                            // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpOffJumpZFactor;                                       // 0x0AA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpOffVelocityScale;                                     // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSimulateZeroVelocityDeferFindFloor;                      // 0x0AAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData47[0x3];                                       // 0x0AAD(0x0003) MISSED OFFSET
	float                                              SimulateFindFloorInternal;                                // 0x0AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SimulateOptimizeCountsNum;                                // 0x0AB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData48[0x4];                                       // 0x0AB8(0x0004) MISSED OFFSET
	bool                                               bUseSelfLocDiffThreshold;                                 // 0x0ABC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData49[0x3];                                       // 0x0ABD(0x0003) MISSED OFFSET
	float                                              MaxAllowedLocDiffSquare;                                  // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceApplyServerMovementMode;                            // 0x0AC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bServerCheckJumpZLocDiff;                                 // 0x0AC5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData50[0x2];                                       // 0x0AC6(0x0002) MISSED OFFSET
	float                                              JumpProtectionZThreshold;                                 // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSimulateProtection;                                      // 0x0ACC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData51[0x3];                                       // 0x0ACD(0x0003) MISSED OFFSET
	float                                              SimulateProtectionInterval;                               // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData52[0x18];                                      // 0x0AD4(0x0018) MISSED OFFSET
	bool                                               bSimulateMovement;                                        // 0x0AEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData53[0x3];                                       // 0x0AED(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleMovementComponent");
		return pStaticClass;
	}


	void UnpackAccelerationToInput(const struct FVector& InAccel);
	void SetWalkableFloorZ(float InWalkableFloorZ);
	void SetWalkableFloorAngle(float InWalkableFloorAngle);
	void SetThrottleInput(float Rate);
	void SetSteeringInput(float Rate);
	void SetRisingInput(float Rate);
	void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode);
	void SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToIgnore(int GroupFlags);
	void SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToAvoid(int GroupFlags);
	void SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);
	void SetAvoidanceGroup(int GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void SetAcceptInput(bool bIsAccept);
	void ServerSetThrottleInput(float Rate);
	void ServerSetSteeringInput(float Rate);
	void ServerSetRisingInput(float Rate);
	void ServerMoveOld(float OldTimeStamp, const struct FVector_NetQuantize10& OldAccel, unsigned char OldMoveFlags);
	void ServerMoveDualHybridRootMotion(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	void ServerMoveDual(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	void ServerMove(float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	struct FVector PackInputToAcceleration();
	float K2_GetWalkableFloorZ();
	float K2_GetWalkableFloorAngle();
	float K2_GetModifiedMaxAcceleration();
	void K2_FindFloor(const struct FVector& CapsuleLocation, struct FFindFloorResult* FloorResult);
	void K2_ComputeFloorDist(const struct FVector& CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, struct FFindFloorResult* FloorResult);
	bool IsWalking();
	bool IsWalkable(const struct FHitResult& Hit);
	bool IsSwimming();
	bool IsSeriousInjuriedAllowJumping();
	void HandleOnSeatDetached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	void HandleOnSeatChanged(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType LastSeatType, int LastSeatIdx, ESTExtraVehicleSeatType NewSeatType, int NewSeatIdx);
	void HandleOnSeatAttached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	void HandleOnExitVehicleAnim(class ASTExtraPlayerCharacter* Character, int SeatInx);
	float GetWalkingDecResistance(float Speed);
	float GetWalkingAccResistance(float Speed);
	float GetValidPerchRadius();
	float GetThrottleInput();
	float GetSteeringInput();
	float GetSlopeSpeedFactor(float Slope);
	float GetRisingInput();
	struct FVector GetPredictVelocity(float PredictTime);
	float GetPerchRadiusThreshold();
	class UPrimitiveComponent* GetMovementBase();
	float GetMinAnalogSpeed();
	float GetMaxJumpHeightWithJumpTime();
	float GetMaxJumpHeight();
	float GetMaxBrakingDeceleration();
	float GetMaxAcceleration();
	float GetJumpVelocityZ();
	float GetJumpingHeightBySpeed(float Speed);
	float GetJumpingHeightByObsHeight(float ObsHeight);
	struct FVector GetImpartedMovementBaseVelocity();
	float GetDesireAcceleration();
	struct FVector GetCurrentAcceleration();
	float GetBreakAcceleration(float Speed);
	float GetAngularVelocityByCurve(float Speed, bool AsForce);
	float GetAnalogInputModifier();
	void DisableMovement();
	void DealWithCustomAction(float DeltaTime);
	void ClientVeryShortAdjustPosition(float TimeStamp, const struct FVector& NewLoc, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustRootMotionSourcePosition(float TimeStamp, const struct FRootMotionSourceGroup& ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustRootMotionPosition(float TimeStamp, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustPositionAndRotation(float TimeStamp, const struct FVector& NewLoc, const struct FRotator& NewRot, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustPosition(float TimeStamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAckGoodMove(float TimeStamp);
	void ClearAccumulatedForces();
	void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);
	void CalculateVelocityWithResistance(float DeltaTime, bool bFluid);
	float CalculateCurrentForwardSpeed();
	void AddImpulse(const struct FVector& Impulse, bool bVelocityChange);
	void AddForce(const struct FVector& force);
	void AddDirectionalBrakingAcceleration(const struct FVector& BrakingAcceleration);
};


// Class Addons.BioVehicleRiderAnimInstanceBase
// 0x0140 (0x0560 - 0x0420)
class UBioVehicleRiderAnimInstanceBase : public UCharacterAnimStateBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0420(0x0060) MISSED OFFSET
	bool                                               bAnimVarHasCached;                                        // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	class UAnimMontage*                                MountAnimMontage;                                         // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     TransPropertyPrefix;                                      // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bIsDead;                                                  // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableTerrainAdaption;                                   // 0x04A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x04A2(0x0002) MISSED OFFSET
	int                                                AnimLOD;                                                  // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0xA0];                                      // 0x04A8(0x00A0) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0548(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0558(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleRiderAnimInstanceBase");
		return pStaticClass;
	}


	void LuaInitializeAnimation();
	void LuaCacheAnimVarWithAnimList(class UBioVehicleAnimListComponent* RiderAnimListComponent);
	void DoTransition(const struct FString& State);
	void ConfirmTransition(const struct FString& State);
	void CacheAnimVarWithAnimList(class UBioVehicleAnimListComponent* RiderAnimListComponent);
};


// Class Addons.BioVehicleSkeletalMeshComponent
// 0x0000 (0x0F30 - 0x0F30)
class UBioVehicleSkeletalMeshComponent : public UUAESkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleSkeletalMeshComponent");
		return pStaticClass;
	}

};


// Class Addons.DinosaurMonsterAnimInstanceBase
// 0x0000 (0x0640 - 0x0640)
class UDinosaurMonsterAnimInstanceBase : public USTExtraMonsterAnimInstance
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.DinosaurMonsterAnimInstanceBase");
		return pStaticClass;
	}

};


// Class Addons.DistanceMatchingComponent
// 0x0048 (0x0158 - 0x0110)
class UDistanceMatchingComponent : public UActorComponent
{
public:
	bool                                               bEnableDistanceMatching;                                  // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	float                                              SpeedThreshold;                                           // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SweepUpOffset;                                            // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SweepDownOffset;                                          // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PredictedLocation;                                        // 0x0120(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDistanceMatchSuccess;                                   // 0x0130(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bShouldOnlyDistanceMatchingOnAutonomousProxy;             // 0x0140(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
	class UBioVehicleMovementComponent*                BioVehicleMovement;                                       // 0x0148(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0150(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.DistanceMatchingComponent");
		return pStaticClass;
	}


	void ServerOnDistanceMatchSuccess(const struct FVector& PredictedStopLocation);
	bool PredictStopLocation(struct FVector* OutLocation);
	void OnEndAccelerating();
	class UAnimInstance* GetBioVehicleAnimInstance();
	void BroadCastOnDistanceMatchSuccess(const struct FVector& PredictedStopLocation);
};


// Class Addons.DistanceMatchingInterface
// 0x0000 (0x0028 - 0x0028)
class UDistanceMatchingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.DistanceMatchingInterface");
		return pStaticClass;
	}


	void OnDistanceMatchingSuccess(const struct FVector& PredictedStopLocation);
};


// Class Addons.LandingCreatureAnimInstance
// 0x0110 (0x0710 - 0x0600)
class ULandingCreatureAnimInstance : public UBioVehicleAnimInstanceBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0600(0x0008) MISSED OFFSET
	float                                              MaxDirection;                                             // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionLerpSpeed;                                       // 0x060C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedLerpSpeed;                                           // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlockedSpeed;                                             // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RunStopSpeedThreshold;                                    // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LegIKAlphaLerpSpeed;                                      // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABioVehicleBase*                             OwnerDinosaur;                                            // 0x0620(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnLandingCreatureJump;                                    // 0x0628(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              ThrottleInput;                                            // 0x0638(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SteeringInput;                                            // 0x063C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasAcceleration;                                         // 0x0640(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsJumping;                                               // 0x0641(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunStopping;                                           // 0x0642(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsStopping;                                              // 0x0643(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x0644(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldUseExtraDeadAnim;                                  // 0x0645(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0646(0x0002) MISSED OFFSET
	int                                                RandomIdleIndex;                                          // 0x0648(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDoRandomIdle;                                            // 0x064C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x064D(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x0650(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x0654(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LegIKAlpha;                                               // 0x0658(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x065C(0x0004) MISSED OFFSET
	class UAnimPoseRecorder*                           AnimPoseRecorder;                                         // 0x0660(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDistanceMatching;                                  // 0x0668(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0669(0x0003) MISSED OFFSET
	struct FVector                                     PredictedStopPoint;                                       // 0x066C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	float                                              DistanceFromStopPoint;                                    // 0x0678(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x067C(0x0004) MISSED OFFSET
	class UAnimSequence*                               ExtraDeathAnim;                                           // 0x0680(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UntamedIdleAnim;                                          // 0x0688(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               IdleAnim;                                                 // 0x0690(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim1;                                          // 0x0698(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim2;                                          // 0x06A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 MovementAnim;                                             // 0x06A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               JumpStartAnim;                                            // 0x06B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FallingAnim;                                              // 0x06B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               IdleLandingAnim;                                          // 0x06C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunLandingAnim;                                           // 0x06C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurnStartAnim;                                            // 0x06D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurningAnim;                                              // 0x06D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurnEndAnim;                                              // 0x06E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x28];                                      // 0x06E8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.LandingCreatureAnimInstance");
		return pStaticClass;
	}


	void SetJump();
	void ResetStop();
	void ResetJump();
	void ResetDoRandomIdle();
	void DoRandomIdle(int Index);
};


// Class Addons.MonsterRaptorAnimInstance
// 0x0040 (0x0680 - 0x0640)
class UMonsterRaptorAnimInstance : public UDinosaurMonsterAnimInstanceBase
{
public:
	bool                                               bResetIdleState;                                          // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0641(0x0003) MISSED OFFSET
	int                                                PlayedIdleIndex;                                          // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<int>                                        NotBattleIdleIndex;                                       // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        BattleIdleIndex;                                          // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                DefaultBattleIdleIndex;                                   // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultNotBattleIdleIndex;                                // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasLockedTarget;                                         // 0x0670(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bInBattle;                                                // 0x0671(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0672(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.MonsterRaptorAnimInstance");
		return pStaticClass;
	}


	void OnResetPlayedIdleIndex(int NewIndex);
};


// Class Addons.PterosaurAnimInstance
// 0x0140 (0x0740 - 0x0600)
class UPterosaurAnimInstance : public UBioVehicleAnimInstanceBase
{
public:
	class APterosaurVehicle*                           OwnerDinosaur;                                            // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HorizontalSpeedLerpSpeed;                                 // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalSpeedLerpSpeed;                                   // 0x060C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinStartLeanRollSpeed;                                    // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinStartLeanPitchSpeed;                                   // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartFlyingSpeedThreshold;                                // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDirection;                                             // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwoopDirectionThreshold;                                  // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionLerpSpeed;                                       // 0x0624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLeanAnglePitch;                                        // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLeanAngleRoll;                                         // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeanAngleRollLerpSpeed;                                   // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeanAnglePitchLerpSpeed;                                  // 0x0634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAssetPlayerSyncNode*                        BlendSpaceSyncNode;                                       // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EPterosaurMoveMode>                    MoveState;                                                // 0x0640(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPterosaurSwoopStage                               SwoopStage;                                               // 0x0641(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0642(0x0002) MISSED OFFSET
	int                                                LandingIndex;                                             // 0x0644(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasCatchedPassenger;                                     // 0x0648(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsLanding;                                               // 0x0649(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsGroundDead;                                            // 0x064A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwoopingDown;                                          // 0x064B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x064C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x064D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTryingToLand;                                          // 0x064E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartFlying;                                             // 0x064F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalSpeed;                                               // 0x0650(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalSpeed;                                          // 0x0654(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x0658(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x065C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SteeringInput;                                            // 0x0660(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RisingInput;                                              // 0x0664(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x0668(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadYawDelta;                                             // 0x066C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadPitchDelta;                                           // 0x0670(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadYawInterpolateSpeed;                                  // 0x0674(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadPitchInterpolateSpeed;                                // 0x0678(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BodyLeanAngleRoll;                                        // 0x067C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BodyLeanAnglePitch;                                       // 0x0680(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0684(0x0004) MISSED OFFSET
	class UBlendSpace*                                 ArrestMovementAnim;                                       // 0x0688(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UntamedIdleAnim;                                          // 0x0690(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               GroundIdleAnim;                                           // 0x0698(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim1;                                          // 0x06A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim2;                                          // 0x06A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 MovementAnim;                                             // 0x06B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 FlyingAO_Anim;                                            // 0x06B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartFlyingAnim;                                          // 0x06C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartLandingAnim1;                                        // 0x06C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartLandingAnim2;                                        // 0x06D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim1;                                             // 0x06D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim2;                                             // 0x06E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim3;                                             // 0x06E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TakingOffAnim;                                            // 0x06F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RiseUpAnim;                                               // 0x06F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RiseDownAnim;                                             // 0x0700(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingStartAnim;                                          // 0x0708(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingAnim;                                               // 0x0710(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingEndAnim;                                            // 0x0718(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               GroundDeathAnim;                                          // 0x0720(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DeathFallingAnim;                                         // 0x0728(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DeathFallingGround;                                       // 0x0730(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0738(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PterosaurAnimInstance");
		return pStaticClass;
	}


	void ResetStartFlying();
	void OnStartFlying();
};


// Class Addons.PterosaurCatchedPassengerAnimInstance
// 0x0020 (0x0580 - 0x0560)
class UPterosaurCatchedPassengerAnimInstance : public UBioVehicleRiderAnimInstanceBase
{
public:
	float                                              TotalSpeed;                                               // 0x0560(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalSpeed;                                          // 0x0564(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x0568(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x056C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 MovementAnim;                                             // 0x0570(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0578(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PterosaurCatchedPassengerAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.PterosaurDriverAnimInstance
// 0x00B0 (0x0610 - 0x0560)
class UPterosaurDriverAnimInstance : public UBioVehicleRiderAnimInstanceBase
{
public:
	int                                                LandingIndex;                                             // 0x0560(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x0564(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartFlying;                                             // 0x0565(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTryingToLand;                                          // 0x0566(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasCatchedPassenger;                                     // 0x0567(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalSpeed;                                               // 0x0568(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalSpeed;                                          // 0x056C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x0570(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x0574(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SteeringInput;                                            // 0x0578(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RisingInput;                                              // 0x057C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x0580(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BodyLeanAngleRoll;                                        // 0x0584(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BodyLeanAnglePitch;                                       // 0x0588(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPterosaurMoveMode>                    MoveState;                                                // 0x058C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x058D(0x0003) MISSED OFFSET
	class UAnimSequence*                               GroundIdleAnim;                                           // 0x0590(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 MovementAnim;                                             // 0x0598(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 CatchPassengerMovementAnim;                               // 0x05A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartFlyingAnim;                                          // 0x05A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartLandingAnim1;                                        // 0x05B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartLandingAnim2;                                        // 0x05B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim1;                                             // 0x05C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim2;                                             // 0x05C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim3;                                             // 0x05D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TakingOffAnim;                                            // 0x05D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RiseUpAnim;                                               // 0x05E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RiseDownAnim;                                             // 0x05E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingStartAnim;                                          // 0x05F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingAnim;                                               // 0x05F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingEndAnim;                                            // 0x0600(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPterosaurAnimInstance>       OwnedPterosuarAnimInstance;                               // 0x0608(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PterosaurDriverAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.PterosaurMovementComponent
// 0x0260 (0x0D50 - 0x0AF0)
class UPterosaurMovementComponent : public UBioVehicleMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AF0(0x0004) MISSED OFFSET
	TEnumAsByte<EPterosaurMoveMode>                    NetMoveState;                                             // 0x0AF4(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0AF5(0x000F) MISSED OFFSET
	float                                              MaxFlyAcceleration;                                       // 0x0B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlySteeringRotationSpeed;                                 // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0B0C(0x0010) MISSED OFFSET
	float                                              MaxUpSpeed;                                               // 0x0B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDownSpeed;                                             // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0B24(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPterosaurSwoopDownStageChanged;                         // 0x0B28(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FPterosaurUpdateDistanceToLandConfig> UpdateGroundDistanceConfigs;                              // 0x0B38(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIgnoreHeightLimit;                                       // 0x0B48(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0B49(0x0003) MISSED OFFSET
	float                                              MaxFlyingZ;                                               // 0x0B4C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckLandingGround;                                      // 0x0B50(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0B51(0x0003) MISSED OFFSET
	float                                              DistanceToLand;                                           // 0x0B54(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LastCheckGroundInterval;                                  // 0x0B58(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xC];                                       // 0x0B5C(0x000C) MISSED OFFSET
	bool                                               bTopBlocked;                                              // 0x0B68(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0B69(0x0003) MISSED OFFSET
	float                                              MaxTraceDownHeight;                                       // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyingHeight;                                          // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinFlyingHeight;                                          // 0x0B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyingHeightThres;                                        // 0x0B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SwoopClimbOffset;                                         // 0x0B7C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      bSwoopUsePathRotation : 1;                                // 0x0B88(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0B89(0x0003) MISSED OFFSET
	float                                              SyncRotationSpeed;                                        // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SyncRotationMoveSpeed;                                    // 0x0B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SyncRotationAcceptableAngle;                              // 0x0B94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SplineActorClass;                                         // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSwoopDownSpeed;                                        // 0x0BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineCurveTangentLength;                                 // 0x0BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreCatchEnterDistance;                                    // 0x0BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0BAC(0x0004) MISSED OFFSET
	TArray<float>                                      ModifyEnterSplinePointDistanceArr;                        // 0x0BB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UCurveFloat*                                 SwoopSpeedCurve;                                          // 0x0BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SwoopSpeedSafeRange;                                      // 0x0BC8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TMap<struct FVector2D, struct FVector2D>           DirectionCorrectMoveSpeedMap;                             // 0x0BD0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DistThresholdWhenInputAllowed;                            // 0x0C20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSwoopMoveDuration;                                     // 0x0C24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwoopMoveBlockedDurationThreshold;                        // 0x0C28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x14];                                      // 0x0C2C(0x0014) MISSED OFFSET
	struct FVector                                     DiveStartDirection;                                       // 0x0C40(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     DiveDirection;                                            // 0x0C4C(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              MaxDiveSpeed;                                             // 0x0C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDiveTime;                                              // 0x0C5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DiveTurnTime;                                             // 0x0C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DivingCoolDown;                                           // 0x0C64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDivingResetCamera;                                       // 0x0C68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x37];                                      // 0x0C69(0x0037) MISSED OFFSET
	class UCurveVector*                                SpeedCurve;                                               // 0x0CA0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                PositionCurve;                                            // 0x0CA8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x30];                                      // 0x0CB0(0x0030) MISSED OFFSET
	class UCurveVector*                                LandingCurve;                                             // 0x0CE0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              MaxTakeOffTime;                                           // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0CEC(0x0004) MISSED OFFSET
	class UCurveVector*                                TakeOffCurve;                                             // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DivingCurve;                                              // 0x0CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SwoopingDownVelocity;                                     // 0x0D00(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bSwoopTurnLeft;                                           // 0x0D0C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0D0D(0x0003) MISSED OFFSET
	int                                                LandingConfigIndex;                                       // 0x0D10(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0D14(0x0004) MISSED OFFSET
	TArray<struct FPterosaurLandingConfig>             LandingConfigs;                                           // 0x0D18(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AActor*                                      CacheSplineActor;                                         // 0x0D28(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x8];                                       // 0x0D30(0x0008) MISSED OFFSET
	float                                              MaxAutoLandingTime;                                       // 0x0D38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              bNoDriverForceNoSimulate;                                 // 0x0D3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              bNoDriverForceLanding;                                    // 0x0D40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              bCheckClientFlyingHeight;                                 // 0x0D44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x8];                                       // 0x0D48(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PterosaurMovementComponent");
		return pStaticClass;
	}


	void UpdateVerticalHeight(float DeltaTime);
	void StartTakingOff();
	void StartSwoopDown(const struct FVector& TargetLocation);
	void StartLanding();
	void StartFlyingDive();
	void SetServerDiveDirection(const struct FVector& Direction);
	void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode);
	void SetAutoLanding(float Value);
	bool IsTakingOff();
	bool IsSwoopDown();
	bool IsSwoopCatching();
	bool IsStrugglingToLand();
	bool IsLocalSwoopingDown();
	bool IsLandingWalking();
	bool IsLanding();
	bool IsDiving();
	bool IsCurveMoving();
	TEnumAsByte<EPterosaurMoveMode> GetMoveState();
	float GetDistanceToLand();
	void ExitSwoopDown();
	void ExitLanding();
	void EndTakingOff();
	void EndSwoopDown(bool bRestVelocity);
	void EndLanding();
	void EndFlyingDive();
	void DealWithCustomAction(float DeltaTime);
	bool CheckCanStartFlyingDive();
	void CalculateFlyingVelocity(float DeltaTime);
	void CalculateFlyingAcceleration(float DeltaTime);
	void CalculateDivingVelocity(float DeltaTime);
};


// Class Addons.PterosaurVehicle
// 0x00D0 (0x1890 - 0x17C0)
class APterosaurVehicle : public ABioVehicleBase
{
public:
	float                                              OpenParachuteHeightInPterosuar;                           // 0x17C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CanOpenParachuteHeightInPterosaur;                        // 0x17C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceOpenParachuteHeightInPterosaur;                      // 0x17C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloseParachuteHeightInPterosaur;                          // 0x17CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkipOpenParachuteHeightInPterosuar;                       // 0x17D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxExecSwoopCatchDistance;                                // 0x17D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinExecSwoopCatchDistance2D;                              // 0x17D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxCatchableDistance;                                     // 0x17DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwoopCatchCoolDown;                                       // 0x17E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldIgnoreHitPlayerWhenSwoopDown;                      // 0x17E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SyncSwoopCatchState;                                      // 0x17E5(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x17E6(0x0002) MISSED OFFSET
	class ASTExtraBaseCharacter*                       ArrestCharacter;                                          // 0x17E8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetCatchLocation;                                      // 0x17F0(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x17FC(0x0004) MISSED OFFSET
	class UPterosaurMovementComponent*                 PterosaurMoveComponent;                                   // 0x1800(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DiveReadyTime;                                            // 0x1808(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x180C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPterosaurVehicleDive;                                   // 0x1810(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPterosaurVehicleDiveEnd;                                // 0x1820(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPterosaurVehicleGroundDead;                             // 0x1830(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPterosaurVehicleTopBlocked;                             // 0x1840(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x8];                                       // 0x1850(0x0008) MISSED OFFSET
	bool                                               bIsGroundDead;                                            // 0x1858(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x1859(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPterosaurVehicleDead;                                   // 0x1860(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAnimMontage*                                CatchPassengerAnim;                                       // 0x1870(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                PrepareCatchPassengerAnim;                                // 0x1878(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDynamicOptimizeActorComponents*             DynamicOptimizeComponent;                                 // 0x1880(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x1888(0x0004) MISSED OFFSET
	float                                              FlyingHoverConsumeFuelRate;                               // 0x188C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PterosaurVehicle");
		return pStaticClass;
	}


	void TryFlyingDive(bool bTry);
	void TryCancelSwoopDown();
	void SetBoosting(bool bEnabled);
	void ServerSwoopDown(const struct FVector& TargetLocation, bool IsForceEnd);
	void ServerReleaseCharacter(class ASTExtraBaseCharacter* Requester);
	void OnRep_SyncSwoopCatchState();
	void OnPterosaurSwoopStateChanged(EPterosaurSwoopStage NewStage, const struct FVector& TargetLocation);
	void OnPterosaurPrepareCatch();
	void OnClientExitFromPterosaur(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	void MultiCast_SwoopDown(const struct FVector& TargetLocation);
	void MultiCast_SplineCorrect(const struct FVector& SyncLocation, const struct FVector& TargetLocation, TArray<struct FVector> SplinePoints);
	bool IsSwoopDown();
	bool IsSwoopCoolDown();
	bool IsSwoopCatching();
	void HandleOnSeatDetached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	void HandleOnSeatAttached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	class UPterosaurMovementComponent* GetPterosaurMovementComponent();
	float GetConsumeFuelRate();
	bool ForceCatchCharacter(class ASTExtraBaseCharacter* Character);
	bool DoSwoopDown(const struct FVector& TargetLocation);
	bool CanConsumeFuel();
	void BroadCastOnPterosaurPrepareCatch();
	void BPOnPterosaurSwoopStateChanged(unsigned char NewStage);
};


// Class Addons.RaptorAnimInstance
// 0x00C0 (0x07D0 - 0x0710)
class URaptorAnimInstance : public ULandingCreatureAnimInstance
{
public:
	float                                              TiltTraceDeltaTime;                                       // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HeadTiltBoneNum;                                          // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 HeadTiltCurve;                                            // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadBlockHeightOffset;                                    // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadBlockForwardStartOffset;                              // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadBlockForwardEndOffset;                                // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadBlockTraceRadius;                                     // 0x072C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadTiltRotateSpeed;                                      // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadTiltMaxAngle;                                         // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TailTiltBoneNum;                                          // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PitchYawDegreeThreshold;                                  // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UCurveFloat*>                         TailTiltCurves;                                           // 0x0740(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              TailBlockHeightOffset;                                    // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TailBlockForwardStartOffset;                              // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TailBlockForwardEndOffset;                                // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TailBlockTraceRadius;                                     // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TailTiltRotateSpeed;                                      // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TailTiltMaxAngle;                                         // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAssetPlayerSyncNode*                        AssetPlayerSyncNode;                                      // 0x0768(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableHeadTilt;                                          // 0x0770(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableTailTilt;                                          // 0x0771(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHeadBlocked;                                             // 0x0772(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTailBlocked;                                             // 0x0773(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadYawDelta;                                             // 0x0774(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadYawDeltaPerBone;                                      // 0x0778(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x077C(0x0004) MISSED OFFSET
	TArray<float>                                      TailYawDeltaPerBone;                                      // 0x0780(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<float>                                      TailPitchDeltaPerBone;                                    // 0x0790(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              ObstacleDegree;                                           // 0x07A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x07A4(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.RaptorAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.RaptorDriverAnimInstance
// 0x00E0 (0x0640 - 0x0560)
class URaptorDriverAnimInstance : public UBioVehicleRiderAnimInstanceBase
{
public:
	struct FName                                       RightHandSaddleSocketName;                                // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x0568(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              SteeringInput;                                            // 0x056C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableNewStateMachine;                                   // 0x0570(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasAcceleration;                                         // 0x0571(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsJumping;                                               // 0x0572(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsStopping;                                              // 0x0573(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsRunStopping;                                           // 0x0574(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bDoRandomIdle;                                            // 0x0575(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0576(0x0002) MISSED OFFSET
	int                                                RandomIdleIndex;                                          // 0x0578(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x057C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x057D(0x0003) MISSED OFFSET
	class UAssetPlayerSyncNode*                        AssetPlayerSyncNode;                                      // 0x0580(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Speed;                                                    // 0x0588(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Direction;                                                // 0x058C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              BodyLeanAngle;                                            // 0x0590(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HeadPitchDelta;                                           // 0x0594(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HeadYawDelta;                                             // 0x0598(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     LeftHandEffectorLocation;                                 // 0x059C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FVector                                     RightHandEffectorLocation;                                // 0x05A8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	float                                              HandIkAlpha;                                              // 0x05B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableHandIK;                                            // 0x05B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableDistanceMatching;                                  // 0x05B9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x05BA(0x0006) MISSED OFFSET
	class UAnimSequence*                               IdleAnim;                                                 // 0x05C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunStopLAnim;                                             // 0x05C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunStopRAnim;                                             // 0x05D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkStopLAnim;                                            // 0x05D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkStopRAnim;                                            // 0x05E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim1;                                          // 0x05E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim2;                                          // 0x05F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 MovementAnim;                                             // 0x05F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               JumpStartAnim;                                            // 0x0600(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FallingAnim;                                              // 0x0608(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               IdleLandingAnim;                                          // 0x0610(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunLandingAnim;                                           // 0x0618(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurnStartAnim;                                            // 0x0620(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurningAnim;                                              // 0x0628(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurnEndAnim;                                              // 0x0630(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class URaptorAnimInstance>          OwnedRaptorAnimInstance;                                  // 0x0638(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.RaptorDriverAnimInstance");
		return pStaticClass;
	}


	void OnOwnedRaptorJumped();
};


// Class Addons.RaptorMovementComponent
// 0x0050 (0x0B40 - 0x0AF0)
class URaptorMovementComponent : public UBioVehicleMovementComponent
{
public:
	float                                              AngularSpeedInterpSpeed;                                  // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpotRotator;                                              // 0x0AF4(0x000C) (IsPlainOldData)
	float                                              SpotTurnStartTime;                                        // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotTurnEndTime;                                          // 0x0B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              targetAngularSpeed;                                       // 0x0B08(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotTurnAngularSpeed;                                     // 0x0B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fBeginTurnInterpSpeed;                                    // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fEndTurnInterpSpeed;                                      // 0x0B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularSpeedLerpFactor;                                   // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RightToLeftSpeedLerpFactor;                               // 0x0B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LowSpeedRotationThreshold;                                // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsRotateTolerance;                                   // 0x0B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanAdjustMovementFloor;                                  // 0x0B28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B29(0x0003) MISSED OFFSET
	float                                              BreakOutAcclerationRate;                                  // 0x0B2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BreakOutVelocityRate;                                     // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B34(0x0004) MISSED OFFSET
	class UCurveFloat*                                 BreakOutAccResistanceCurve;                               // 0x0B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.RaptorMovementComponent");
		return pStaticClass;
	}


	float GetWalkingAccResistance(float Speed);
	float GetMaxAcceleration();
};


// Class Addons.RaptorVehicle
// 0x0030 (0x17F0 - 0x17C0)
class ARaptorVehicle : public ABioVehicleBase
{
public:
	class URaptorMovementComponent*                    RaptorMovementComponent;                                  // 0x17C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnReachStopPoint;                                         // 0x17C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FName                                       LeftFootBoneName;                                         // 0x17D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightFootBoneName;                                        // 0x17E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanRideWhenSwimming;                                     // 0x17E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x17E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.RaptorVehicle");
		return pStaticClass;
	}


	void SetHandBrake(float Rate);
	void SetBoosting(bool bEnabled);
	void ServerSetHandBrake(float Rate);
	void MulticastDoJump();
	void MoveRight(float Rate);
	void MoveForward(float Rate);
	class URaptorMovementComponent* GetRaptorMovementComponent();
	void DoJump();
};


// Class Addons.TRexVehicleDamageComponent
// 0x00B0 (0x05A0 - 0x04F0)
class UTRexVehicleDamageComponent : public UBioVehicleDamageComponent
{
public:
	struct FName                                       BlockComponentTag;                                        // 0x04F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ImpulseOnCharacter;                                       // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04F9(0x0007) MISSED OFFSET
	class UCurveFloat*                                 VehicleHitCharcterImpulseCurve;                           // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultImpuleScale;                                       // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseCharacterZScale;                                   // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BioDamageVehicleCooldownTime;                             // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultHitVehicleDamage;                                  // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCollisionLocation;                                    // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0519(0x0007) MISSED OFFSET
	class ATyrannosaurusRexVehicle*                    OwnerVehicle;                                             // 0x0520(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<class AActor*, float>                         BioDamageVehicleTimes;                                    // 0x0528(0x0050) (ZeroConstructor)
	TArray<class ASTExtraVehicleBase*>                 LastOverlapedVehicles;                                    // 0x0578(0x0010) (ZeroConstructor)
	TArray<class UActorComponent*>                     DamageCollisions;                                         // 0x0588(0x0010) (ExportObject, ZeroConstructor)
	class UPrimitiveComponent*                         BlockCollision;                                           // 0x0598(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.TRexVehicleDamageComponent");
		return pStaticClass;
	}


	void HandleFootOverlapVehicle(class ASTExtraVehicleBase* OverlappedVehicle, class UShapeComponent* DamageCollision, struct FOverlapResult* OverlapResult);
	void HandleFootOverlapCharacter(class ASTExtraBaseCharacter* OverlappedCharacter, class UShapeComponent* DamageCollision, struct FOverlapResult* OverlapResult);
};


// Class Addons.TyrannosaurusRexAnimInstance
// 0x0030 (0x0740 - 0x0710)
class UTyrannosaurusRexAnimInstance : public ULandingCreatureAnimInstance
{
public:
	float                                              SprintSpeed;                                              // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPlayRate;                                              // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPlayRate;                                              // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x071C(0x0004) MISSED OFFSET
	class ATyrannosaurusRexVehicle*                    TRex;                                                     // 0x0720(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStartMoving;                                             // 0x0728(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0729(0x0003) MISSED OFFSET
	float                                              WalkPlayRate;                                             // 0x072C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RunPlayRate;                                              // 0x0730(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintPlayRate;                                           // 0x0734(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0738(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.TyrannosaurusRexAnimInstance");
		return pStaticClass;
	}


	void ResetStartMoving();
};


// Class Addons.TyrannosaurusRexVehicle
// 0x01F0 (0x19B0 - 0x17C0)
class ATyrannosaurusRexVehicle : public ABioVehicleBase
{
public:
	class UBoxComponent*                               BrokenShapeComponent;                                     // 0x17C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              NearbyRadius;                                             // 0x17C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x17CC(0x0004) MISSED OFFSET
	struct FName                                       RoarDetectSocket;                                         // 0x17D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarSpeedThreshold;                                       // 0x17D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarCD;                                                   // 0x17DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarStartAttackTime;                                      // 0x17E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarEndAttackTime;                                        // 0x17E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarAttackDeltaTime;                                      // 0x17E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarDamage;                                               // 0x17EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RoarMontage;                                              // 0x17F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RoarCameraShake;                                          // 0x17F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnTRexApplyRoarAttack;                                    // 0x1800(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnServerTRexStartRoar;                                    // 0x1810(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnServerTRexFinishRoar;                                   // 0x1820(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAkAudioEvent*                               TRexRoarAudioEvent;                                       // 0x1830(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TRexBodyMatSlotName;                                      // 0x1838(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ShelfMatSlotName;                                         // 0x1840(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           BodyNormalMaterial;                                       // 0x1848(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           ShelfNormalMaterial;                                      // 0x1850(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           BodyInjuredMaterial;                                      // 0x1858(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           ShelfInjuredMaterial;                                     // 0x1860(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           BodySeverelyInjuredMaterial;                              // 0x1868(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           ShelfSeverelyInjuredMaterial;                             // 0x1870(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnServerTRexBreakOut;                                     // 0x1878(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              TRexBreakOutCD;                                           // 0x1888(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TRexBreakOutInterval;                                     // 0x188C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          LightInjuredMat;                                          // 0x1890(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          HeavyInjuredMat;                                          // 0x1898(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ModifyPhysCD;                                             // 0x18A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ETyranState                                        STCurWalkState;                                           // 0x18A4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x18A5(0x0003) MISSED OFFSET
	struct FName                                       BrokenCapsuleSocket;                                      // 0x18A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrokenCapsuleRadius;                                      // 0x18B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrokenCapsuleHeight;                                      // 0x18B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrokenDelayTime;                                          // 0x18B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DragOffsetZ;                                              // 0x18BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             DragOffsets;                                              // 0x18C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DeadAfterTime;                                            // 0x18D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x18D4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    BioVehicleDestroyDelegate;                                // 0x18D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               DeadDirection;                                            // 0x18E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2B];                                      // 0x18E9(0x002B) MISSED OFFSET
	float                                              RoarCurrentCD;                                            // 0x1914(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsRoaring;                                               // 0x1918(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x1919(0x000F) MISSED OFFSET
	TMap<class AActor*, float>                         BioModifyVehicleTimes;                                    // 0x1928(0x0050) (ZeroConstructor)
	class URaptorMovementComponent*                    TRexMovementComponent;                                    // 0x1978(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HurtInterval;                                             // 0x1980(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x1984(0x0004) MISSED OFFSET
	float                                              HurtDamageAmount;                                         // 0x1988(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0xC];                                       // 0x198C(0x000C) MISSED OFFSET
	class UAnimMontage*                                HurtMontage;                                              // 0x1998(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LeftFootBoneName;                                         // 0x19A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightFootBoneName;                                        // 0x19A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.TyrannosaurusRexVehicle");
		return pStaticClass;
	}


	void ShowRoarOverSpeedTips();
	void ShakeNearbyPlayerCamera(class UClass* CameraShakeClass, float Radius);
	void ServerStopRoar();
	void ServerRoar();
	void ServerBreakOut(bool bEnable);
	void PrepareApplyRoarAttack();
	void OnTRexHPCHanged(float NewHP, float HPMax);
	void OnRoarFinished(TEnumAsByte<EBioVehicleSkillStopReason> Reason);
	void OnRep_bIsRoaring();
	class URaptorMovementComponent* GetVehicleMovement();
	bool GetVehicleBreakOutState();
	bool GetNearlyPlayers(float Radius, TArray<class ASTExtraBaseCharacter*>* Results);
	void EndRoarAttack();
	void ClientHandleVehicleDead(bool VehicleDeadDirection);
	bool CheckCanApplyDamageTo(class ASTExtraBaseCharacter* Target);
	void CallClientDrawDebugSphere(const struct FVector& Location, float DeltaTime);
	void BroadCastStopMontage();
	void BroadCastPlayRoarMontage();
	void BroadCastClientDrawSphere(const struct FVector& Center, float Radius);
	void BreakOut(bool bEnable);
	void ApplyRoarAttackToSpecifiedCharacter(class ASTExtraBaseCharacter* TargetCharacter);
	void ApplyRoarAttack();
};


}

