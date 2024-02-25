#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AIModule.AIController
// 0x00A0 (0x04F8 - 0x0458)
class AAIController : public AController
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0458(0x0038) MISSED OFFSET
	unsigned char                                      bStopAILogicOnUnposses : 1;                               // 0x0490(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bLOSflag : 1;                                             // 0x0490(0x0001)
	unsigned char                                      bSkipExtraLOSChecks : 1;                                  // 0x0490(0x0001)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x0490(0x0001)
	unsigned char                                      bWantsPlayerState : 1;                                    // 0x0490(0x0001)
	unsigned char                                      bSetControlRotationFromPawnOrientation : 1;               // 0x0490(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	class UPathFollowingComponent*                     PathFollowingComponent;                                   // 0x0498(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBrainComponent*                             BrainComponent;                                           // 0x04A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIPerceptionComponent*                      PerceptionComponent;                                      // 0x04A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UPawnActionsComponent*                       ActionsComp;                                              // 0x04B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlackboardComponent*                        Blackboard;                                               // 0x04B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameplayTasksComponent*                     CachedGameplayTasksComponent;                             // 0x04C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      DefaultNavigationFilterClass;                             // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    ReceiveMoveCompleted;                                     // 0x04D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x1];                                       // 0x04E0(0x0001) MISSED OFFSET
	bool                                               UseGameplayTasksComponent;                                // 0x04E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShareNavigationSystem;                                   // 0x04E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x04E3(0x0001) MISSED OFFSET
	struct FVector                                     ShareNavSysOffset;                                        // 0x04E4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bEnableActiveRegion;                                      // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIController");
		return pStaticClass;
	}


	bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent);
	void UnclaimTaskResource(class UClass* ResourceClass);
	void SetMoveBlockDetection(bool bEnable);
	bool RunBehaviorTree(class UBehaviorTree* BTAsset);
	void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
	void OnUnpossess(class APawn* UnpossessedPawn);
	void OnPossess(class APawn* PossessedPawn);
	void OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased);
	TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	TEnumAsByte<EPathFollowingRequestResult> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	void K2_SetFocus(class AActor* NewFocus);
	void K2_SetFocalPoint(const struct FVector& FP);
	void K2_ClearFocus();
	bool HasPartialPath();
	class UPathFollowingComponent* GetPathFollowingComponent();
	TEnumAsByte<EPathFollowingStatus> GetMoveStatus();
	struct FVector GetImmediateMoveDestination();
	class AActor* GetFocusActor();
	struct FVector GetFocalPointOnActor(class AActor* Actor);
	struct FVector GetFocalPoint();
	class UAIPerceptionComponent* GetAIPerceptionComponent();
	void ClaimTaskResource(class UClass* ResourceClass);
};


// Class AIModule.BTNode
// 0x0030 (0x0058 - 0x0028)
class UBTNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FString                                     NodeName;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)
	class UBehaviorTree*                               TreeAsset;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBTCompositeNode*                            ParentNode;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTNode");
		return pStaticClass;
	}

};


// Class AIModule.BTAuxiliaryNode
// 0x0000 (0x0058 - 0x0058)
class UBTAuxiliaryNode : public UBTNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTAuxiliaryNode");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator
// 0x0008 (0x0060 - 0x0058)
class UBTDecorator : public UBTAuxiliaryNode
{
public:
	unsigned char                                      UnknownData00 : 7;                                        // 0x0058(0x0001)
	unsigned char                                      bInverseCondition : 1;                                    // 0x0058(0x0001) (Edit)
	TEnumAsByte<EBTFlowAbortMode>                      FlowAbortMode;                                            // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_BlackboardBase
// 0x0028 (0x0088 - 0x0060)
class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0060(0x0028) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_BlackboardBase");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_Cooldown
// 0x0000 (0x0060 - 0x0060)
class UBTDecorator_Cooldown : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_Cooldown");
		return pStaticClass;
	}

};


// Class AIModule.BTService
// 0x0010 (0x0068 - 0x0058)
class UBTService : public UBTAuxiliaryNode
{
public:
	float                                              interval;                                                 // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCallTickOnSearchStart : 1;                               // 0x0060(0x0001) (Edit)
	unsigned char                                      bRestartTimerOnEachActivation : 1;                        // 0x0060(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTService");
		return pStaticClass;
	}

};


// Class AIModule.BTService_BlackboardBase
// 0x0028 (0x0090 - 0x0068)
class UBTService_BlackboardBase : public UBTService
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0068(0x0028) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTService_BlackboardBase");
		return pStaticClass;
	}

};


// Class AIModule.BTService_DefaultFocus
// 0x0008 (0x0098 - 0x0090)
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
public:
	unsigned char                                      FocusPriority;                                            // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTService_DefaultFocus");
		return pStaticClass;
	}

};


// Class AIModule.BTTaskNode
// 0x0018 (0x0070 - 0x0058)
class UBTTaskNode : public UBTNode
{
public:
	TArray<class UBTService*>                          Services;                                                 // 0x0058(0x0010) (ZeroConstructor)
	unsigned char                                      bIgnoreRestartSelf : 1;                                   // 0x0068(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTaskNode");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_Wait
// 0x0008 (0x0078 - 0x0070)
class UBTTask_Wait : public UBTTaskNode
{
public:
	float                                              RandomDeviation;                                          // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_Wait");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_BlackboardBase
// 0x0028 (0x0098 - 0x0070)
class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0070(0x0028) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_BlackboardBase");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_MoveTo
// 0x0018 (0x00B0 - 0x0098)
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UClass*                                      FilterClass;                                              // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ObservedBlackboardValueTolerance;                         // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bObserveBlackboardValue : 1;                              // 0x00AC(0x0001)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x00AC(0x0001) (Edit)
	unsigned char                                      bAllowPartialPath : 1;                                    // 0x00AC(0x0001) (Edit)
	unsigned char                                      bTrackMovingGoal : 1;                                     // 0x00AC(0x0001) (Edit)
	unsigned char                                      bProjectGoalLocation : 1;                                 // 0x00AC(0x0001) (Edit)
	unsigned char                                      bReachTestIncludesAgentRadius : 1;                        // 0x00AC(0x0001) (Edit)
	unsigned char                                      bReachTestIncludesGoalRadius : 1;                         // 0x00AC(0x0001) (Edit)
	unsigned char                                      bStopOnOverlap : 1;                                       // 0x00AC(0x0001) (Edit, DisableEditOnTemplate, EditConst)
	unsigned char                                      bStopOnOverlapNeedsUpdate : 1;                            // 0x00AD(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00AE(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_MoveTo");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_MoveDirectlyToward
// 0x0000 (0x00B0 - 0x00B0)
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_MoveDirectlyToward");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardComponent
// 0x00F8 (0x0208 - 0x0110)
class UBlackboardComponent : public UActorComponent
{
public:
	class UBrainComponent*                             BrainComp;                                                // 0x0110(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UBlackboardData*                             BlackboardAsset;                                          // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0120(0x0020) MISSED OFFSET
	TArray<class UBlackboardKeyType*>                  KeyInstances;                                             // 0x0140(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0xB8];                                      // 0x0150(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardComponent");
		return pStaticClass;
	}


	void SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue);
	void SetValueAsString(const struct FName& KeyName, const struct FString& StringValue);
	void SetValueAsRotator(const struct FName& KeyName, const struct FRotator& RotatorValue);
	void SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue);
	void SetValueAsName(const struct FName& KeyName, const struct FName& NameValue);
	void SetValueAsInt(const struct FName& KeyName, int IntValue);
	void SetValueAsFloat(const struct FName& KeyName, float FloatValue);
	void SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue);
	void SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue);
	void SetValueAsBool(const struct FName& KeyName, bool BoolValue);
	bool IsVectorValueSet(const struct FName& KeyName);
	struct FVector GetValueAsVector(const struct FName& KeyName);
	struct FString GetValueAsString(const struct FName& KeyName);
	struct FRotator GetValueAsRotator(const struct FName& KeyName);
	class UObject* GetValueAsObject(const struct FName& KeyName);
	struct FName GetValueAsName(const struct FName& KeyName);
	int GetValueAsInt(const struct FName& KeyName);
	float GetValueAsFloat(const struct FName& KeyName);
	unsigned char GetValueAsEnum(const struct FName& KeyName);
	class UClass* GetValueAsClass(const struct FName& KeyName);
	bool GetValueAsBool(const struct FName& KeyName);
	bool GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation);
	bool GetLocationFromEntry(const struct FName& KeyName, struct FVector* ResultLocation);
	void ClearValue(const struct FName& KeyName);
};


// Class AIModule.PathFollowingComponent
// 0x01D0 (0x02E0 - 0x0110)
class UPathFollowingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0110(0x0048) MISSED OFFSET
	class UNavMovementComponent*                       MovementComp;                                             // 0x0158(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0160(0x0008) MISSED OFFSET
	class ANavigationData*                             MyNavData;                                                // 0x0168(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x170];                                     // 0x0170(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.PathFollowingComponent");
		return pStaticClass;
	}


	void OnNavDataRegistered(class ANavigationData* NavData);
	void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	struct FVector GetPathDestination();
	TEnumAsByte<EPathFollowingAction> GetPathActionType();
};


// Class AIModule.AISense
// 0x0058 (0x0080 - 0x0028)
class UAISense : public UObject
{
public:
	float                                              DefaultExpirationAge;                                     // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	EAISenseNotifyType                                 NotifyType;                                               // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bWantsNewPawnNotification : 1;                            // 0x002D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bAutoRegisterAllPawnsAsSources : 1;                       // 0x002D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	class UAIPerceptionSystem*                         PerceptionSystemInstance;                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0038(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISense");
		return pStaticClass;
	}

};


// Class AIModule.AISenseConfig
// 0x0020 (0x0048 - 0x0028)
class UAISenseConfig : public UObject
{
public:
	struct FColor                                      DebugColor;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              MaxAge;                                                   // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bStartsEnabled : 1;                                       // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0031(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig");
		return pStaticClass;
	}

};


// Class AIModule.AISenseEvent
// 0x0000 (0x0028 - 0x0028)
class UAISenseEvent : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseEvent");
		return pStaticClass;
	}

};


// Class AIModule.CrowdFollowingComponent
// 0x0050 (0x0330 - 0x02E0)
class UCrowdFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	struct FVector                                     CrowdAgentMoveDirection;                                  // 0x02E8(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 CharacterMovement;                                        // 0x02F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           // 0x0300(0x0004) (Deprecated, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            // 0x0304(0x0004) (Deprecated, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           // 0x0308(0x0004) (Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x24];                                      // 0x030C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.CrowdFollowingComponent");
		return pStaticClass;
	}


	void SuspendCrowdSteering(bool bSuspend);
};


// Class AIModule.AIAsyncTaskBlueprintProxy
// 0x0040 (0x0068 - 0x0028)
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIAsyncTaskBlueprintProxy");
		return pStaticClass;
	}


	void OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> MovementResult);
};


// Class AIModule.AIBlueprintHelperLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIBlueprintHelperLibrary");
		return pStaticClass;
	}


	void UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
	class APawn* SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail);
	void SendAIMessage(class APawn* Target, const struct FName& Message, class UObject* MessageSource, bool bSuccess);
	void LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
	bool IsValidAIRotation(const struct FRotator& Rotation);
	bool IsValidAILocation(const struct FVector& Location);
	bool IsValidAIDirection(const struct FVector& DirectionVector);
	class UNavigationPath* GetCurrentPath(class AController* Controller);
	class UBlackboardComponent* GetBlackboard(class AActor* Target);
	class AAIController* GetAIController(class AActor* ControlledActor);
	class UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
};


// Class AIModule.AIDataProvider
// 0x0000 (0x0028 - 0x0028)
class UAIDataProvider : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIDataProvider");
		return pStaticClass;
	}

};


// Class AIModule.AIDataProvider_QueryParams
// 0x0018 (0x0040 - 0x0028)
class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIDataProvider_QueryParams");
		return pStaticClass;
	}

};


// Class AIModule.AIDataProvider_Random
// 0x0008 (0x0048 - 0x0040)
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
public:
	float                                              Max;                                                      // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInteger : 1;                                             // 0x0044(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIDataProvider_Random");
		return pStaticClass;
	}

};


// Class AIModule.AIHotSpotManager
// 0x0000 (0x0028 - 0x0028)
class UAIHotSpotManager : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIHotSpotManager");
		return pStaticClass;
	}

};


// Class AIModule.AIPerceptionComponent
// 0x00D8 (0x01E8 - 0x0110)
class UAIPerceptionComponent : public UActorComponent
{
public:
	TArray<class UAISenseConfig*>                      SensesConfig;                                             // 0x0110(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      DominantSense;                                            // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0128(0x0010) MISSED OFFSET
	class AAIController*                               AIOwner;                                                  // 0x0138(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0140(0x0080) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPerceptionUpdated;                                      // 0x01C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTargetPerceptionUpdated;                                // 0x01D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIPerceptionComponent");
		return pStaticClass;
	}


	void SetSenseEnabled(class UClass* SenseClass, bool bEnable);
	void RequestStimuliListenerUpdate();
	void OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void GetPerceivedHostileActors(TArray<class AActor*>* OutActors);
	void GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	void GetKnownPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	void GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	bool GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info);
};


// Class AIModule.AIPerceptionListenerInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPerceptionListenerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIPerceptionListenerInterface");
		return pStaticClass;
	}

};


// Class AIModule.AIPerceptionStimuliSourceComponent
// 0x0018 (0x0128 - 0x0110)
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	unsigned char                                      bAutoRegisterAsSource : 1;                                // 0x0110(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	TArray<class UClass*>                              RegisterAsSourceForSenses;                                // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIPerceptionStimuliSourceComponent");
		return pStaticClass;
	}


	void UnregisterFromSense(class UClass* SenseClass);
	void UnregisterFromPerceptionSystem();
	void RegisterWithPerceptionSystem();
	void RegisterForSense(class UClass* SenseClass);
};


// Class AIModule.AIPerceptionSystem
// 0x0108 (0x0130 - 0x0028)
class UAIPerceptionSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	TArray<class UAISense*>                            Senses;                                                   // 0x0080(0x0010) (ZeroConstructor)
	float                                              PerceptionAgingRate;                                      // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9C];                                      // 0x0094(0x009C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIPerceptionSystem");
		return pStaticClass;
	}


	void ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent);
	void ReportEvent(class UAISenseEvent* PerceptionEvent);
	bool RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AActor* Target);
	void OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	class UClass* GetSenseClassForStimulus(class UObject* WorldContextObject, const struct FAIStimulus& Stimulus);
};


// Class AIModule.AIResourceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIResourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIResourceInterface");
		return pStaticClass;
	}

};


// Class AIModule.AIResource_Movement
// 0x0000 (0x0030 - 0x0030)
class UAIResource_Movement : public UGameplayTaskResource
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIResource_Movement");
		return pStaticClass;
	}

};


// Class AIModule.AIResource_Logic
// 0x0000 (0x0030 - 0x0030)
class UAIResource_Logic : public UGameplayTaskResource
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIResource_Logic");
		return pStaticClass;
	}

};


// Class AIModule.AISense_Blueprint
// 0x0028 (0x00A8 - 0x0080)
class UAISense_Blueprint : public UAISense
{
public:
	class UClass*                                      ListenerDataType;                                         // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAIPerceptionComponent*>              ListenerContainer;                                        // 0x0088(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class UAISenseEvent*>                       UnprocessedEvents;                                        // 0x0098(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISense_Blueprint");
		return pStaticClass;
	}


	float OnUpdate(TArray<class UAISenseEvent*> EventsToProcess);
	void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void K2_OnNewPawn(class APawn* NewPawn);
	void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents);
	void GetAllListenerActors(TArray<class AActor*>* ListenerActors);
};


// Class AIModule.AISense_Damage
// 0x0010 (0x0090 - 0x0080)
class UAISense_Damage : public UAISense
{
public:
	TArray<struct FAIDamageEvent>                      RegisteredEvents;                                         // 0x0080(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISense_Damage");
		return pStaticClass;
	}


	void ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation);
};


// Class AIModule.AISense_Hearing
// 0x0068 (0x00E8 - 0x0080)
class UAISense_Hearing : public UAISense
{
public:
	TArray<struct FAINoiseEvent>                       NoiseEvents;                                              // 0x0080(0x0010) (ZeroConstructor)
	float                                              SpeedOfSoundSq;                                           // 0x0090(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x0094(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISense_Hearing");
		return pStaticClass;
	}


	void ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const struct FName& Tag);
};


// Class AIModule.AISense_Prediction
// 0x0010 (0x0090 - 0x0080)
class UAISense_Prediction : public UAISense
{
public:
	TArray<struct FAIPredictionEvent>                  RegisteredEvents;                                         // 0x0080(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISense_Prediction");
		return pStaticClass;
	}


	void RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);
	void RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime);
};


// Class AIModule.AISense_Sight
// 0x00D8 (0x0158 - 0x0080)
class UAISense_Sight : public UAISense
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0080(0x00B0) MISSED OFFSET
	int                                                MaxTracesPerTick;                                         // 0x0130(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MinQueriesPerTimeSliceCheck;                              // 0x0134(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	double                                             MaxTimeSlicePerTick;                                      // 0x0138(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HighImportanceQueryDistanceThreshold;                     // 0x0140(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	float                                              MaxQueryImportance;                                       // 0x0148(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SightLimitQueryImportance;                                // 0x014C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0150(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISense_Sight");
		return pStaticClass;
	}

};


// Class AIModule.AISense_Team
// 0x0010 (0x0090 - 0x0080)
class UAISense_Team : public UAISense
{
public:
	TArray<struct FAITeamStimulusEvent>                RegisteredEvents;                                         // 0x0080(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISense_Team");
		return pStaticClass;
	}

};


// Class AIModule.AISense_Touch
// 0x0010 (0x0090 - 0x0080)
class UAISense_Touch : public UAISense
{
public:
	TArray<struct FAITouchEvent>                       RegisteredEvents;                                         // 0x0080(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISense_Touch");
		return pStaticClass;
	}

};


// Class AIModule.AISenseBlueprintListener
// 0x0000 (0x00A8 - 0x00A8)
class UAISenseBlueprintListener : public UUserDefinedStruct
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseBlueprintListener");
		return pStaticClass;
	}

};


// Class AIModule.AISenseConfig_Blueprint
// 0x0008 (0x0050 - 0x0048)
class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Blueprint");
		return pStaticClass;
	}

};


// Class AIModule.AISenseConfig_Damage
// 0x0008 (0x0050 - 0x0048)
class UAISenseConfig_Damage : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Damage");
		return pStaticClass;
	}

};


// Class AIModule.AISenseConfig_Hearing
// 0x0018 (0x0060 - 0x0048)
class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
	float                                              HearingRange;                                             // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoSHearingRange;                                          // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUseLoSHearing : 1;                                       // 0x0058(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Hearing");
		return pStaticClass;
	}

};


// Class AIModule.AISenseConfig_Prediction
// 0x0000 (0x0048 - 0x0048)
class UAISenseConfig_Prediction : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Prediction");
		return pStaticClass;
	}

};


// Class AIModule.AISenseConfig_Sight
// 0x0020 (0x0068 - 0x0048)
class UAISenseConfig_Sight : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
	float                                              SightRadius;                                              // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              LoseSightRadius;                                          // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PeripheralVisionAngleDegrees;                             // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoSuccessRangeFromLastSeenLocation;                     // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Sight");
		return pStaticClass;
	}

};


// Class AIModule.AISenseConfig_Team
// 0x0000 (0x0048 - 0x0048)
class UAISenseConfig_Team : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Team");
		return pStaticClass;
	}

};


// Class AIModule.AISenseConfig_Touch
// 0x0000 (0x0048 - 0x0048)
class UAISenseConfig_Touch : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Touch");
		return pStaticClass;
	}

};


// Class AIModule.AISenseEvent_Damage
// 0x0030 (0x0058 - 0x0028)
class UAISenseEvent_Damage : public UAISenseEvent
{
public:
	struct FAIDamageEvent                              Event;                                                    // 0x0028(0x0030) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseEvent_Damage");
		return pStaticClass;
	}

};


// Class AIModule.AISenseEvent_Hearing
// 0x0030 (0x0058 - 0x0028)
class UAISenseEvent_Hearing : public UAISenseEvent
{
public:
	struct FAINoiseEvent                               Event;                                                    // 0x0028(0x0030) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseEvent_Hearing");
		return pStaticClass;
	}

};


// Class AIModule.AISightTargetInterface
// 0x0000 (0x0028 - 0x0028)
class UAISightTargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISightTargetInterface");
		return pStaticClass;
	}

};


// Class AIModule.AISystem
// 0x00D8 (0x0128 - 0x0050)
class UAISystem : public UAISystemBase
{
public:
	struct FSoftClassPath                              PerceptionSystemClassName;                                // 0x0050(0x0018) (Edit, Config, GlobalConfig)
	struct FSoftClassPath                              HotSpotManagerClassName;                                  // 0x0068(0x0018) (Edit, Config, GlobalConfig)
	float                                              AcceptanceRadius;                                         // 0x0080(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	float                                              PathfollowingRegularPathPointAcceptanceRadius;            // 0x0084(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	float                                              PathfollowingNavLinkAcceptanceRadius;                     // 0x0088(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bFinishMoveOnGoalOverlap;                                 // 0x008C(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAcceptPartialPaths;                                      // 0x008D(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAllowStrafing;                                           // 0x008E(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bEnableBTAITasks;                                         // 0x008F(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAllowControllersAsEQSQuerier;                            // 0x0090(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bEnableDebuggerPlugin;                                    // 0x0091(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DefaultSightCollisionChannel;                             // 0x0092(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0093(0x0005) MISSED OFFSET
	class UBehaviorTreeManager*                        BehaviorTreeManager;                                      // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UEnvQueryManager*                            EnvironmentQueryManager;                                  // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAIPerceptionSystem*                         PerceptionSystem;                                         // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UAIAsyncTaskBlueprintProxy*>          AllProxyObjects;                                          // 0x00B0(0x0010) (ZeroConstructor, Transient)
	class UAIHotSpotManager*                           HotSpotManager;                                           // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UNavLocalGridManager*                        NavLocalGrids;                                            // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x00D0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISystem");
		return pStaticClass;
	}


	void AILoggingVerbose();
	void AIIgnorePlayers();
};


// Class AIModule.AITask
// 0x0008 (0x0068 - 0x0060)
class UAITask : public UGameplayTask
{
public:
	class AAIController*                               OwnerController;                                          // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AITask");
		return pStaticClass;
	}

};


// Class AIModule.AITask_LockLogic
// 0x0000 (0x0068 - 0x0068)
class UAITask_LockLogic : public UAITask
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AITask_LockLogic");
		return pStaticClass;
	}

};


// Class AIModule.AITask_MoveTo
// 0x00A0 (0x0108 - 0x0068)
class UAITask_MoveTo : public UAITask
{
public:
	struct FScriptMulticastDelegate                    OnRequestFailed;                                          // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMoveFinished;                                           // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FAIMoveRequest                              MoveRequest;                                              // 0x0088(0x0040)
	unsigned char                                      UnknownData00[0x40];                                      // 0x00C8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AITask_MoveTo");
		return pStaticClass;
	}


	class UAITask_MoveTo* AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking);
};


// Class AIModule.AITask_RunEQS
// 0x0078 (0x00E0 - 0x0068)
class UAITask_RunEQS : public UAITask
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0068(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AITask_RunEQS");
		return pStaticClass;
	}


	class UAITask_RunEQS* RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate);
};


// Class AIModule.BehaviorTree
// 0x0038 (0x0060 - 0x0028)
class UBehaviorTree : public UObject
{
public:
	class UBTCompositeNode*                            RootNode;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlackboardData*                             BlackboardAsset;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UBTDecorator*>                        RootDecorators;                                           // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FBTDecoratorLogic>                   RootDecoratorOps;                                         // 0x0048(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BehaviorTree");
		return pStaticClass;
	}

};


// Class AIModule.BrainComponent
// 0x0060 (0x0170 - 0x0110)
class UBrainComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	class UBlackboardComponent*                        BlackboardComp;                                           // 0x0118(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AAIController*                               AIOwner;                                                  // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0128(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BrainComponent");
		return pStaticClass;
	}


	void StopLogic(const struct FString& Reason);
	void RestartLogic();
	bool IsRunning();
	bool IsPaused();
};


// Class AIModule.BehaviorTreeComponent
// 0x0138 (0x02A8 - 0x0170)
class UBehaviorTreeComponent : public UBrainComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0170(0x0020) MISSED OFFSET
	TArray<class UBTNode*>                             NodeInstances;                                            // 0x0190(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x108];                                     // 0x01A0(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BehaviorTreeComponent");
		return pStaticClass;
	}


	void SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset);
	float GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag);
	void AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
};


// Class AIModule.BehaviorTreeManager
// 0x0028 (0x0050 - 0x0028)
class UBehaviorTreeManager : public UObject
{
public:
	int                                                MaxDebuggerSteps;                                         // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FBehaviorTreeTemplateInfo>           LoadedTemplates;                                          // 0x0030(0x0010) (ZeroConstructor)
	TArray<class UBehaviorTreeComponent*>              ActiveComponents;                                         // 0x0040(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BehaviorTreeManager");
		return pStaticClass;
	}

};


// Class AIModule.BehaviorTreeTypes
// 0x0000 (0x0028 - 0x0028)
class UBehaviorTreeTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BehaviorTreeTypes");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardData
// 0x0020 (0x0050 - 0x0030)
class UBlackboardData : public UDataAsset
{
public:
	class UBlackboardData*                             Parent;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBlackboardEntry>                    Keys;                                                     // 0x0038(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bHasSynchronizedKeys : 1;                                 // 0x0048(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardData");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType
// 0x0008 (0x0030 - 0x0028)
class UBlackboardKeyType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_Bool
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Bool");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_Class
// 0x0008 (0x0038 - 0x0030)
class UBlackboardKeyType_Class : public UBlackboardKeyType
{
public:
	class UClass*                                      BaseClass;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Class");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_Enum
// 0x0020 (0x0050 - 0x0030)
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
	class UEnum*                                       EnumType;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     EnumName;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bIsEnumNameValid : 1;                                     // 0x0048(0x0001) (Edit, DisableEditOnInstance, EditConst)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Enum");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_Float
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Float : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Float");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_Int
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Int : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Int");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_Name
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Name : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Name");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_NativeEnum
// 0x0018 (0x0048 - 0x0030)
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
public:
	struct FString                                     EnumName;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UEnum*                                       EnumType;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_NativeEnum");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_Object
// 0x0008 (0x0038 - 0x0030)
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
	class UClass*                                      BaseClass;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Object");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_Rotator
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Rotator");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_String
// 0x0010 (0x0040 - 0x0030)
class UBlackboardKeyType_String : public UBlackboardKeyType
{
public:
	struct FString                                     StringValue;                                              // 0x0030(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_String");
		return pStaticClass;
	}

};


// Class AIModule.BlackboardKeyType_Vector
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Vector");
		return pStaticClass;
	}

};


// Class AIModule.BTCompositeNode
// 0x0038 (0x0090 - 0x0058)
class UBTCompositeNode : public UBTNode
{
public:
	TArray<struct FBTCompositeChild>                   Children;                                                 // 0x0058(0x0010) (ZeroConstructor)
	TArray<class UBTService*>                          Services;                                                 // 0x0068(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTCompositeNode");
		return pStaticClass;
	}

};


// Class AIModule.BTComposite_Selector
// 0x0000 (0x0090 - 0x0090)
class UBTComposite_Selector : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTComposite_Selector");
		return pStaticClass;
	}

};


// Class AIModule.BTComposite_Sequence
// 0x0000 (0x0090 - 0x0090)
class UBTComposite_Sequence : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTComposite_Sequence");
		return pStaticClass;
	}

};


// Class AIModule.BTComposite_SimpleParallel
// 0x0000 (0x0090 - 0x0090)
class UBTComposite_SimpleParallel : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTComposite_SimpleParallel");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_Blackboard
// 0x0030 (0x00B8 - 0x0088)
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	int                                                IntValue;                                                 // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     StringValue;                                              // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CachedDescription;                                        // 0x00A0(0x0010) (ZeroConstructor)
	unsigned char                                      OperationType;                                            // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBTBlackboardRestart>                  NotifyObserver;                                           // 0x00B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00B2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_Blackboard");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_BlueprintBase
// 0x0038 (0x0098 - 0x0060)
class UBTDecorator_BlueprintBase : public UBTDecorator
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FName>                               ObservedKeyNames;                                         // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x0090(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      bCheckConditionOnlyBlackBoardChanges : 1;                 // 0x0090(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIsObservingBB : 1;                                       // 0x0090(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_BlueprintBase");
		return pStaticClass;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverDeactivated(class AActor* OwnerActor);
	void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverActivated(class AActor* OwnerActor);
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionStart(class AActor* OwnerActor);
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult);
	void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	bool PerformConditionCheck(class AActor* OwnerActor);
	bool IsDecoratorObserverActive();
	bool IsDecoratorExecutionActive();
};


// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// 0x0060 (0x00C0 - 0x0060)
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      ActorToCheck;                                             // 0x0060(0x0028) (Edit)
	EGameplayContainerMatchType                        TagsToMatch;                                              // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0090(0x0020) (Edit)
	struct FString                                     CachedDescription;                                        // 0x00B0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_CheckGameplayTagsOnActor");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_CompareBBEntries
// 0x0050 (0x00B0 - 0x0060)
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKeyA;                                           // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                           // 0x0088(0x0028) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_CompareBBEntries");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_ConditionalLoop
// 0x0000 (0x00B8 - 0x00B8)
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_ConditionalLoop");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_ConeCheck
// 0x0080 (0x00E0 - 0x0060)
class UBTDecorator_ConeCheck : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      ConeDirection;                                            // 0x0088(0x0028) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x00B0(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_ConeCheck");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_DoesPathExist
// 0x0060 (0x00C0 - 0x0060)
class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKeyA;                                           // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                           // 0x0088(0x0028) (Edit)
	unsigned char                                      bUseSelf : 1;                                             // 0x00B0(0x0001)
	TEnumAsByte<EPathExistanceQueryType>               PathQueryType;                                            // 0x00B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00B2(0x0006) MISSED OFFSET
	class UClass*                                      FilterClass;                                              // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_DoesPathExist");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_ForceSuccess
// 0x0000 (0x0060 - 0x0060)
class UBTDecorator_ForceSuccess : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_ForceSuccess");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_IsAtLocation
// 0x0040 (0x00C8 - 0x0088)
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FAIDataProviderFloatValue                   ParametrizedAcceptableRadius;                             // 0x0090(0x0030) (Edit)
	EFAIDistanceType                                   GeometricDistanceType;                                    // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseParametrizedRadius : 1;                               // 0x00C1(0x0001)
	unsigned char                                      bUseNavAgentGoalLocation : 1;                             // 0x00C1(0x0001) (Edit)
	unsigned char                                      bPathFindingBasedTest : 1;                                // 0x00C1(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00C2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_IsAtLocation");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_IsBBEntryOfClass
// 0x0008 (0x0090 - 0x0088)
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      TestClass;                                                // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_IsBBEntryOfClass");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_KeepInCone
// 0x0058 (0x00B8 - 0x0060)
class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x0088(0x0028) (Edit)
	unsigned char                                      bUseSelfAsOrigin : 1;                                     // 0x00B0(0x0001)
	unsigned char                                      bUseSelfAsObserved : 1;                                   // 0x00B0(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_KeepInCone");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_Loop
// 0x0008 (0x0068 - 0x0060)
class UBTDecorator_Loop : public UBTDecorator
{
public:
	bool                                               bInfiniteLoop;                                            // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              InfiniteLoopTimeoutTime;                                  // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_Loop");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_ReachedMoveGoal
// 0x0000 (0x0060 - 0x0060)
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_ReachedMoveGoal");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_SetTagCooldown
// 0x0010 (0x0070 - 0x0060)
class UBTDecorator_SetTagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0060(0x0008) (Edit)
	float                                              CooldownDuration;                                         // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_SetTagCooldown");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_TagCooldown
// 0x0010 (0x0070 - 0x0060)
class UBTDecorator_TagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0060(0x0008) (Edit)
	float                                              CooldownDuration;                                         // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bActivatesCooldown;                                       // 0x006D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x006E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_TagCooldown");
		return pStaticClass;
	}

};


// Class AIModule.BTDecorator_TimeLimit
// 0x0000 (0x0060 - 0x0060)
class UBTDecorator_TimeLimit : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_TimeLimit");
		return pStaticClass;
	}

};


// Class AIModule.BTFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTFunctionLibrary");
		return pStaticClass;
	}


	void StopUsingExternalEvent(class UBTNode* NodeOwner);
	void StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);
	void SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value);
	void SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FString& Value);
	void SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value);
	void SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value);
	void SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FName& Value);
	void SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int Value);
	void SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value);
	void SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value);
	void SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value);
	void SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value);
	class UBlackboardComponent* GetOwnersBlackboard(class UBTNode* NodeOwner);
	class UBehaviorTreeComponent* GetOwnerComponent(class UBTNode* NodeOwner);
	struct FVector GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FString GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FRotator GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class UObject* GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FName GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	int GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	float GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	unsigned char GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class UClass* GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	bool GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class AActor* GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	void ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	void ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
};


// Class AIModule.BTService_BlueprintBase
// 0x0028 (0x0090 - 0x0068)
class UBTService_BlueprintBase : public UBTService
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x0088(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      bShowEventDetails : 1;                                    // 0x0088(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTService_BlueprintBase");
		return pStaticClass;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveSearchStart(class AActor* OwnerActor);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveActivation(class AActor* OwnerActor);
	bool IsServiceActive();
};


// Class AIModule.BTService_RunEQS
// 0x0058 (0x00E8 - 0x0090)
class UBTService_RunEQS : public UBTService_BlackboardBase
{
public:
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                               // 0x0090(0x0048) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTService_RunEQS");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_BlueprintBase
// 0x0030 (0x00A0 - 0x0070)
class UBTTask_BlueprintBase : public UBTTaskNode
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x0098(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_BlueprintBase");
		return pStaticClass;
	}


	void SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID);
	void SetFinishOnMessage(const struct FName& MessageName);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecute(class AActor* OwnerActor);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbort(class AActor* OwnerActor);
	bool IsTaskExecuting();
	bool IsTaskAborting();
	void FinishExecute(bool bSuccess);
	void FinishAbort();
};


// Class AIModule.BTTask_GameplayTaskBase
// 0x0000 (0x0070 - 0x0070)
class UBTTask_GameplayTaskBase : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_GameplayTaskBase");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_MakeNoise
// 0x0000 (0x0070 - 0x0070)
class UBTTask_MakeNoise : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_MakeNoise");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_PawnActionBase
// 0x0000 (0x0070 - 0x0070)
class UBTTask_PawnActionBase : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_PawnActionBase");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_PlayAnimation
// 0x0040 (0x00B0 - 0x0070)
class UBTTask_PlayAnimation : public UBTTaskNode
{
public:
	class UAnimationAsset*                             AnimationToPlay;                                          // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x0078(0x0001) (Edit)
	unsigned char                                      bNonBlocking : 1;                                         // 0x0078(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	class UBehaviorTreeComponent*                      MyOwnerComp;                                              // 0x0080(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      CachedSkelMesh;                                           // 0x0088(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_PlayAnimation");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_PlaySound
// 0x0008 (0x0078 - 0x0070)
class UBTTask_PlaySound : public UBTTaskNode
{
public:
	class USoundCue*                                   SoundToPlay;                                              // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_PlaySound");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_PushPawnAction
// 0x0008 (0x0078 - 0x0070)
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:
	class UPawnAction*                                 Action;                                                   // 0x0070(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_PushPawnAction");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_RotateToFaceBBEntry
// 0x0008 (0x00A0 - 0x0098)
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	float                                              Precision;                                                // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_RotateToFaceBBEntry");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_RunBehavior
// 0x0008 (0x0078 - 0x0070)
class UBTTask_RunBehavior : public UBTTaskNode
{
public:
	class UBehaviorTree*                               BehaviorAsset;                                            // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_RunBehavior");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_RunBehaviorDynamic
// 0x0018 (0x0088 - 0x0070)
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	struct FGameplayTag                                InjectionTag;                                             // 0x0070(0x0008) (Edit)
	class UBehaviorTree*                               DefaultBehaviorAsset;                                     // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               BehaviorAsset;                                            // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_RunBehaviorDynamic");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_RunEQSQuery
// 0x00B8 (0x0150 - 0x0098)
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                                   QueryTemplate;                                            // 0x0098(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x00A0(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                              // 0x00B0(0x0010) (Edit, ZeroConstructor, EditConst)
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // 0x00C0(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      EQSQueryBlackboardKey;                                    // 0x00C8(0x0028) (Edit, EditConst)
	bool                                               bUseBBKey;                                                // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                               // 0x00F8(0x0048) (Edit)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_RunEQSQuery");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_SetTagCooldown
// 0x0010 (0x0080 - 0x0070)
class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0070(0x0008) (Edit)
	bool                                               bAddToExistingDuration;                                   // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              CooldownDuration;                                         // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_SetTagCooldown");
		return pStaticClass;
	}

};


// Class AIModule.BTTask_WaitBlackboardTime
// 0x0028 (0x00A0 - 0x0078)
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0078(0x0028) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_WaitBlackboardTime");
		return pStaticClass;
	}

};


// Class AIModule.CrowdAgentInterface
// 0x0000 (0x0028 - 0x0028)
class UCrowdAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.CrowdAgentInterface");
		return pStaticClass;
	}

};


// Class AIModule.CrowdManager
// 0x00D0 (0x00F8 - 0x0028)
class UCrowdManager : public UCrowdManagerBase
{
public:
	unsigned char                                      EnabledCrowd : 1;                                         // 0x0028(0x0001) (Config)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class ANavigationData*                             MyNavData;                                                // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FCrowdAvoidanceConfig>               AvoidanceConfig;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FCrowdAvoidanceSamplingPattern>      SamplingPatterns;                                         // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	int                                                MaxAgents;                                                // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxAgentRadius;                                           // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAvoidedAgents;                                         // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAvoidedWalls;                                          // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              NavmeshCheckInterval;                                     // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PathOptimizationInterval;                                 // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              SeparationDirClamp;                                       // 0x0070(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PathOffsetRadiusMultiplier;                               // 0x0074(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01 : 4;                                        // 0x0078(0x0001)
	unsigned char                                      bResolveCollisions : 1;                                   // 0x0078(0x0001) (Edit, Config)
	unsigned char                                      UnknownData02[0x7F];                                      // 0x0079(0x007F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.CrowdManager");
		return pStaticClass;
	}

};


// Class AIModule.DetourCrowdAIController
// 0x0000 (0x04F8 - 0x04F8)
class ADetourCrowdAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.DetourCrowdAIController");
		return pStaticClass;
	}

};


// Class AIModule.EnvQuery
// 0x0018 (0x0048 - 0x0030)
class UEnvQuery : public UDataAsset
{
public:
	struct FName                                       QueryName;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEnvQueryOption*>                     Options;                                                  // 0x0038(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQuery");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryContext
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryContext");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryContext_BlueprintBase
// 0x0008 (0x0030 - 0x0028)
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryContext_BlueprintBase");
		return pStaticClass;
	}


	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation);
	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor);
	void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet);
};


// Class AIModule.EnvQueryContext_Item
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Item : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryContext_Item");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryContext_Querier
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Querier : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryContext_Querier");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryDebugHelpers
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryDebugHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryDebugHelpers");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryNode
// 0x0008 (0x0030 - 0x0028)
class UEnvQueryNode : public UObject
{
public:
	int                                                VerNum;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryNode");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryGenerator
// 0x0020 (0x0050 - 0x0030)
class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	struct FString                                     OptionName;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      ItemType;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoSortTests : 1;                                       // 0x0048(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryGenerator_ActorsOfClass
// 0x0070 (0x00C0 - 0x0050)
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
	class UClass*                                      SearchedActorClass;                                       // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderBoolValue                    GenerateOnlyActorsInRadius;                               // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SearchRadius;                                             // 0x0088(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      SearchCenter;                                             // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_ActorsOfClass");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryGenerator_BlueprintBase
// 0x0030 (0x0080 - 0x0050)
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
	struct FText                                       GeneratorsActionDescription;                              // 0x0050(0x0018) (Edit)
	class UClass*                                      Context;                                                  // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GeneratedItemType;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_BlueprintBase");
		return pStaticClass;
	}


	class UObject* GetQuerier();
	void DoItemGeneration(TArray<struct FVector> ContextLocations);
	void AddGeneratedVector(const struct FVector& GeneratedVector);
	void AddGeneratedActor(class AActor* GeneratedActor);
};


// Class AIModule.EnvQueryGenerator_Composite
// 0x0020 (0x0070 - 0x0050)
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
public:
	TArray<class UEnvQueryGenerator*>                  Generators;                                               // 0x0050(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bAllowDifferentItemTypes : 1;                             // 0x0060(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bHasMatchingItemType : 1;                                 // 0x0060(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class UClass*                                      ForcedItemType;                                           // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_Composite");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryGenerator_ProjectedPoints
// 0x0030 (0x0080 - 0x0050)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	struct FEnvTraceData                               ProjectionData;                                           // 0x0050(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_ProjectedPoints");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryGenerator_Cone
// 0x00D0 (0x0150 - 0x0080)
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   AlignedPointsDistance;                                    // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ConeDegrees;                                              // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   AngleStep;                                                // 0x00E0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   Range;                                                    // 0x0110(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      CenterActor;                                              // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeContextLocation : 1;                              // 0x0148(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0149(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_Cone");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryGenerator_CurrentLocation
// 0x0008 (0x0058 - 0x0050)
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
public:
	class UClass*                                      QueryContext;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_CurrentLocation");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryGenerator_Donut
// 0x0128 (0x01A8 - 0x0080)
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                              // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   OuterRadius;                                              // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfRings;                                            // 0x00E0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     PointsPerRing;                                            // 0x0110(0x0030) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               ArcDirection;                                             // 0x0140(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x0160(0x0030) (Edit, DisableEditOnInstance)
	bool                                               bUseSpiralPattern;                                        // 0x0190(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0191(0x0007) MISSED OFFSET
	class UClass*                                      Center;                                                   // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDefineArc : 1;                                           // 0x01A0(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_Donut");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryGenerator_OnCircle
// 0x0168 (0x01E8 - 0x0080)
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   CircleRadius;                                             // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                             // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfPoints;                                           // 0x00E0(0x0030) (Edit, DisableEditOnInstance)
	EPointOnCircleSpacingMethod                        PointOnCircleSpacingMethod;                               // 0x0110(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	struct FEnvDirection                               ArcDirection;                                             // 0x0118(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x0138(0x0030) (Edit, DisableEditOnInstance)
	float                                              AngleRadians;                                             // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	class UClass*                                      CircleCenter;                                             // 0x0170(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreAnyContextActorsWhenGeneratingCircle;              // 0x0178(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	struct FAIDataProviderFloatValue                   CircleCenterZOffset;                                      // 0x0180(0x0030) (Edit)
	struct FEnvTraceData                               TraceData;                                                // 0x01B0(0x0030) (Edit)
	unsigned char                                      bDefineArc : 1;                                           // 0x01E0(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x7];                                       // 0x01E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_OnCircle");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryGenerator_SimpleGrid
// 0x0068 (0x00E8 - 0x0080)
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   GridSize;                                                 // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                             // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      GenerateAround;                                           // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_SimpleGrid");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryGenerator_PathingGrid
// 0x0068 (0x0150 - 0x00E8)
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:
	struct FAIDataProviderBoolValue                    PathToItem;                                               // 0x00E8(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      NavigationFilter;                                         // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                      // 0x0120(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_PathingGrid");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryInstanceBlueprintWrapper
// 0x0050 (0x0078 - 0x0028)
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	int                                                QueryID;                                                  // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0034(0x0024) MISSED OFFSET
	class UClass*                                      ItemType;                                                 // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                OptionIndex;                                              // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnQueryFinishedEvent;                                     // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryInstanceBlueprintWrapper");
		return pStaticClass;
	}


	void SetNamedParam(const struct FName& ParamName, float Value);
	TArray<struct FVector> GetResultsAsLocations();
	TArray<class AActor*> GetResultsAsActors();
	float GetItemScore(int ItemIndex);
	void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
};


// Class AIModule.EnvQueryItemType
// 0x0008 (0x0030 - 0x0028)
class UEnvQueryItemType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryItemType");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryItemType_VectorBase
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryItemType_VectorBase");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryItemType_ActorBase
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryItemType_ActorBase");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryItemType_Actor
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryItemType_Actor");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryItemType_Direction
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryItemType_Direction");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryItemType_Point
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryItemType_Point");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryManager
// 0x0110 (0x0138 - 0x0028)
class UEnvQueryManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET
	TArray<struct FEnvQueryInstanceCache>              InstanceCache;                                            // 0x00A0(0x0010) (ZeroConstructor, Transient)
	TArray<class UEnvQueryContext*>                    LocalContexts;                                            // 0x00B0(0x0010) (ZeroConstructor, Transient)
	TArray<class UEnvQueryInstanceBlueprintWrapper*>   GCShieldedWrappers;                                       // 0x00C0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x54];                                      // 0x00D0(0x0054) MISSED OFFSET
	float                                              MaxAllowedTestingTime;                                    // 0x0124(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTestQueriesUsingBreadth;                                 // 0x0128(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	int                                                QueryCountWarningThreshold;                               // 0x012C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	double                                             QueryCountWarningInterval;                                // 0x0130(0x0008) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryManager");
		return pStaticClass;
	}


	class UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, class UClass* WrapperClass);
};


// Class AIModule.EnvQueryOption
// 0x0018 (0x0040 - 0x0028)
class UEnvQueryOption : public UObject
{
public:
	class UEnvQueryGenerator*                          Generator;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEnvQueryTest*>                       Tests;                                                    // 0x0030(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryOption");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTest
// 0x0190 (0x01C0 - 0x0030)
class UEnvQueryTest : public UEnvQueryNode
{
public:
	TEnumAsByte<EEnvTestPurpose>                       TestPurpose;                                              // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FString                                     TestComment;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EEnvTestFilterOperator>                MultipleContextFilterOp;                                  // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTestScoreOperator>                 MultipleContextScoreOp;                                   // 0x0049(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTestFilterType>                    FilterType;                                               // 0x004A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	struct FAIDataProviderBoolValue                    BoolValue;                                                // 0x0050(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   FloatValueMin;                                            // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   FloatValueMax;                                            // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00E0(0x0001) MISSED OFFSET
	TEnumAsByte<EEnvTestScoreEquation>                 ScoringEquation;                                          // 0x00E1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMinType;                                             // 0x00E2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMaxType;                                             // 0x00E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EEQSNormalizationType                              NormalizationType;                                        // 0x00E4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	struct FAIDataProviderFloatValue                   ScoreClampMin;                                            // 0x00E8(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ScoreClampMax;                                            // 0x0118(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ScoringFactor;                                            // 0x0148(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ReferenceValue;                                           // 0x0178(0x0030) (Edit, DisableEditOnInstance)
	bool                                               bDefineReferenceValue;                                    // 0x01A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x01A9(0x000F) MISSED OFFSET
	unsigned char                                      bWorkOnFloatValues : 1;                                   // 0x01B8(0x0001)
	unsigned char                                      UnknownData05[0x7];                                       // 0x01B9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTest_Distance
// 0x0008 (0x01C8 - 0x01C0)
class UEnvQueryTest_Distance : public UEnvQueryTest
{
public:
	class UClass*                                      DistanceTo;                                               // 0x01C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Distance");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTest_Dot
// 0x0048 (0x0208 - 0x01C0)
class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
	struct FEnvDirection                               LineA;                                                    // 0x01C0(0x0020) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               LineB;                                                    // 0x01E0(0x0020) (Edit, DisableEditOnInstance)
	EEnvTestDot                                        TestMode;                                                 // 0x0200(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAbsoluteValue;                                           // 0x0201(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0202(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Dot");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTest_GameplayTags
// 0x0070 (0x0230 - 0x01C0)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                           TagQueryToMatch;                                          // 0x01C0(0x0048) (Edit)
	bool                                               bUpdatedToUseQuery;                                       // 0x0208(0x0001) (ZeroConstructor, IsPlainOldData)
	EGameplayContainerMatchType                        TagsToMatch;                                              // 0x0209(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x020A(0x0006) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0210(0x0020)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_GameplayTags");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTest_Overlap
// 0x0018 (0x01D8 - 0x01C0)
class UEnvQueryTest_Overlap : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x01C0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Overlap");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTest_Pathfinding
// 0x0070 (0x0230 - 0x01C0)
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	class UClass*                                      Context;                                                  // 0x01C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderBoolValue                    PathFromContext;                                          // 0x01C8(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderBoolValue                    SkipUnreachable;                                          // 0x01F8(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      FilterClass;                                              // 0x0228(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Pathfinding");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTest_PathfindingBatch
// 0x0030 (0x0260 - 0x0230)
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                      // 0x0230(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_PathfindingBatch");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTest_Project
// 0x0030 (0x01F0 - 0x01C0)
class UEnvQueryTest_Project : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               ProjectionData;                                           // 0x01C0(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Project");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTest_Random
// 0x0000 (0x01C0 - 0x01C0)
class UEnvQueryTest_Random : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Random");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTest_Trace
// 0x00C8 (0x0288 - 0x01C0)
class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               TraceData;                                                // 0x01C0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderBoolValue                    TraceFromContext;                                         // 0x01F0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ItemHeightOffset;                                         // 0x0220(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ContextHeightOffset;                                      // 0x0250(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      Context;                                                  // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Trace");
		return pStaticClass;
	}

};


// Class AIModule.EnvQueryTypes
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTypes");
		return pStaticClass;
	}

};


// Class AIModule.EQSQueryResultSourceInterface
// 0x0000 (0x0028 - 0x0028)
class UEQSQueryResultSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EQSQueryResultSourceInterface");
		return pStaticClass;
	}

};


// Class AIModule.EQSRenderingComponent
// 0x0030 (0x07A0 - 0x0770)
class UEQSRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0770(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EQSRenderingComponent");
		return pStaticClass;
	}

};


// Class AIModule.EQSTestingPawn
// 0x0060 (0x0890 - 0x0830)
class AEQSTestingPawn : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0830(0x0008) MISSED OFFSET
	class UEnvQuery*                                   QueryTemplate;                                            // 0x0838(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x0840(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                              // 0x0850(0x0010) (Edit, ZeroConstructor)
	float                                              TimeLimitPerStep;                                         // 0x0860(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StepToDebugDraw;                                          // 0x0864(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EEnvQueryHightlightMode                            HighlightMode;                                            // 0x0868(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDrawLabels : 1;                                          // 0x0869(0x0001) (Edit)
	unsigned char                                      bDrawFailedItems : 1;                                     // 0x0869(0x0001) (Edit)
	unsigned char                                      bReRunQueryOnlyOnFinishedMove : 1;                        // 0x0869(0x0001) (Edit)
	unsigned char                                      bShouldBeVisibleInGame : 1;                               // 0x0869(0x0001) (Edit)
	unsigned char                                      bTickDuringGame : 1;                                      // 0x0869(0x0001) (Edit)
	TEnumAsByte<EEnvQueryRunMode>                      QueryingMode;                                             // 0x086A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x25];                                      // 0x086B(0x0025) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EQSTestingPawn");
		return pStaticClass;
	}

};


// Class AIModule.GenericTeamAgentInterface
// 0x0000 (0x0028 - 0x0028)
class UGenericTeamAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.GenericTeamAgentInterface");
		return pStaticClass;
	}

};


// Class AIModule.GridPathAIController
// 0x0000 (0x04F8 - 0x04F8)
class AGridPathAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.GridPathAIController");
		return pStaticClass;
	}

};


// Class AIModule.GridPathFollowingComponent
// 0x0030 (0x0310 - 0x02E0)
class UGridPathFollowingComponent : public UPathFollowingComponent
{
public:
	class UNavLocalGridManager*                        GridManager;                                              // 0x02E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x02E8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.GridPathFollowingComponent");
		return pStaticClass;
	}

};


// Class AIModule.NavFilter_AIControllerDefault
// 0x0000 (0x0048 - 0x0048)
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.NavFilter_AIControllerDefault");
		return pStaticClass;
	}

};


// Class AIModule.NavLocalGridManager
// 0x0030 (0x0058 - 0x0028)
class UNavLocalGridManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.NavLocalGridManager");
		return pStaticClass;
	}


	bool SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize);
	void RemoveLocalNavigationGrid(class UObject* WorldContextObject, int GridId, bool bRebuildGrids);
	bool FindLocalNavigationGridPath(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<struct FVector>* PathPoints);
	int AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<struct FVector> Locations, int Radius2D, float Height, bool bRebuildGrids);
	int AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const struct FVector& Location, int Radius2D, float Height, bool bRebuildGrids);
	int AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int Radius2D, float Height, bool bRebuildGrids);
	int AddLocalNavigationGridForBox(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int Radius2D, float Height, bool bRebuildGrids);
};


// Class AIModule.PawnAction
// 0x0070 (0x0098 - 0x0028)
class UPawnAction : public UObject
{
public:
	class UPawnAction*                                 ChildAction;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPawnAction*                                 ParentAction;                                             // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPawnActionsComponent*                       OwnerComponent;                                           // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UObject*                                     Instigator;                                               // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UBrainComponent*                             BrainComp;                                                // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0050(0x0030) MISSED OFFSET
	unsigned char                                      bAllowNewSameClassInstance : 1;                           // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bReplaceActiveSameClassInstance : 1;                      // 0x0080(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      bShouldPauseMovement : 1;                                 // 0x0080(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      bAlwaysNotifyOnFinished : 1;                              // 0x0080(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0081(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.PawnAction");
		return pStaticClass;
	}


	TEnumAsByte<EAIRequestPriority> GetActionPriority();
	void Finish(TEnumAsByte<EPawnActionResult> WithResult);
	class UPawnAction* CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);
};


// Class AIModule.PawnAction_BlueprintBase
// 0x0000 (0x0098 - 0x0098)
class UPawnAction_BlueprintBase : public UPawnAction
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.PawnAction_BlueprintBase");
		return pStaticClass;
	}


	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionPause(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
};


// Class AIModule.PawnAction_Move
// 0x0050 (0x00E8 - 0x0098)
class UPawnAction_Move : public UPawnAction
{
public:
	class AActor*                                      GoalActor;                                                // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GoalLocation;                                             // 0x00A0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              AcceptableRadius;                                         // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x00B8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bFinishOnOverlap : 1;                                     // 0x00B8(0x0001)
	unsigned char                                      bUsePathfinding : 1;                                      // 0x00B8(0x0001)
	unsigned char                                      bAllowPartialPath : 1;                                    // 0x00B8(0x0001)
	unsigned char                                      bProjectGoalToNavigation : 1;                             // 0x00B8(0x0001)
	unsigned char                                      bUpdatePathToGoal : 1;                                    // 0x00B8(0x0001)
	unsigned char                                      bAbortChildActionOnPathChange : 1;                        // 0x00B8(0x0001)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x00B9(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.PawnAction_Move");
		return pStaticClass;
	}

};


// Class AIModule.PawnAction_Repeat
// 0x0020 (0x00B8 - 0x0098)
class UPawnAction_Repeat : public UPawnAction
{
public:
	class UPawnAction*                                 ActionToRepeat;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPawnAction*                                 RecentActionCopy;                                         // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                 // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00A9(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.PawnAction_Repeat");
		return pStaticClass;
	}

};


// Class AIModule.PawnAction_Sequence
// 0x0028 (0x00C0 - 0x0098)
class UPawnAction_Sequence : public UPawnAction
{
public:
	TArray<class UPawnAction*>                         ActionSequence;                                           // 0x0098(0x0010) (ZeroConstructor)
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                 // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	class UPawnAction*                                 RecentActionCopy;                                         // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.PawnAction_Sequence");
		return pStaticClass;
	}

};


// Class AIModule.PawnAction_Wait
// 0x0010 (0x00A8 - 0x0098)
class UPawnAction_Wait : public UPawnAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.PawnAction_Wait");
		return pStaticClass;
	}

};


// Class AIModule.PawnActionsComponent
// 0x0038 (0x0148 - 0x0110)
class UPawnActionsComponent : public UActorComponent
{
public:
	class APawn*                                       ControlledPawn;                                           // 0x0110(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPawnActionStack>                    ActionStacks;                                             // 0x0118(0x0010) (ZeroConstructor)
	TArray<struct FPawnActionEvent>                    ActionEvents;                                             // 0x0128(0x0010) (ZeroConstructor)
	class UPawnAction*                                 CurrentAction;                                            // 0x0138(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0140(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.PawnActionsComponent");
		return pStaticClass;
	}


	bool K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, class UObject* Instigator);
	bool K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority);
	TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(class UPawnAction* ActionToAbort);
	TEnumAsByte<EPawnActionAbortState> K2_AbortAction(class UPawnAction* ActionToAbort);
};


// Class AIModule.PawnSensingComponent
// 0x0048 (0x0158 - 0x0110)
class UPawnSensingComponent : public UActorComponent
{
public:
	float                                              HearingThreshold;                                         // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LOSHearingThreshold;                                      // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SightRadius;                                              // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SensingInterval;                                          // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HearingMaxSoundAge;                                       // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableSensingUpdates : 1;                                // 0x0124(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOnlySensePlayers : 1;                                    // 0x0124(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSeePawns : 1;                                            // 0x0124(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bHearNoises : 1;                                          // 0x0124(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0125(0x000B) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSeePawn;                                                // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHearNoise;                                              // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              PeripheralVisionAngle;                                    // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PeripheralVisionCosine;                                   // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.PawnSensingComponent");
		return pStaticClass;
	}


	void SetSensingUpdatesEnabled(bool bEnabled);
	void SetSensingInterval(float NewSensingInterval);
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
	void SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume);
	float GetPeripheralVisionCosine();
	float GetPeripheralVisionAngle();
};


// Class AIModule.VisualLoggerExtension
// 0x0000 (0x0028 - 0x0028)
class UVisualLoggerExtension : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.VisualLoggerExtension");
		return pStaticClass;
	}

};


}

