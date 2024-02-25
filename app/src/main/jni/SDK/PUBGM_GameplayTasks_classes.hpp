#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameplayTasks.GameplayTask
// 0x0038 (0x0060 - 0x0028)
class UGameplayTask : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FName                                       InstanceName;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0038(0x0002) MISSED OFFSET
	ETaskResourceOverlapPolicy                         ResourceOverlapPolicy;                                    // 0x003A(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1D];                                      // 0x003B(0x001D) MISSED OFFSET
	class UGameplayTask*                               ChildTask;                                                // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayTasks.GameplayTask");
		return pStaticClass;
	}


	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
};


// Class GameplayTasks.GameplayTask_ClaimResource
// 0x0000 (0x0060 - 0x0060)
class UGameplayTask_ClaimResource : public UGameplayTask
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayTasks.GameplayTask_ClaimResource");
		return pStaticClass;
	}


	class UGameplayTask_ClaimResource* ClaimResources(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, TArray<class UClass*> ResourceClasses, unsigned char Priority, const struct FName& TaskInstanceName);
	class UGameplayTask_ClaimResource* ClaimResource(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, class UClass* ResourceClass, unsigned char Priority, const struct FName& TaskInstanceName);
};


// Class GameplayTasks.GameplayTask_SpawnActor
// 0x0040 (0x00A0 - 0x0060)
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    Success;                                                  // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DidNotSpawn;                                              // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET
	class UClass*                                      ClassToSpawn;                                             // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayTasks.GameplayTask_SpawnActor");
		return pStaticClass;
	}


	class UGameplayTask_SpawnActor* SpawnActor(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority);
	void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor);
};


// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// 0x0030 (0x0090 - 0x0060)
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTimeExpired;                                            // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayTasks.GameplayTask_TimeLimitedExecution");
		return pStaticClass;
	}

};


// Class GameplayTasks.GameplayTask_WaitDelay
// 0x0018 (0x0078 - 0x0060)
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayTasks.GameplayTask_WaitDelay");
		return pStaticClass;
	}


	class UGameplayTask_WaitDelay* TaskWaitDelay(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, float Time, unsigned char Priority);
	void TaskDelayDelegate__DelegateSignature();
};


// Class GameplayTasks.GameplayTaskOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayTaskOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayTasks.GameplayTaskOwnerInterface");
		return pStaticClass;
	}

};


// Class GameplayTasks.GameplayTaskResource
// 0x0008 (0x0030 - 0x0028)
class UGameplayTaskResource : public UObject
{
public:
	int                                                ManualResourceID;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int8_t                                             AutoResourceID;                                           // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bManuallySetID : 1;                                       // 0x002D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayTasks.GameplayTaskResource");
		return pStaticClass;
	}

};


// Class GameplayTasks.GameplayTasksComponent
// 0x0078 (0x0188 - 0x0110)
class UGameplayTasksComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	TArray<class UGameplayTask*>                       SimulatedTasks;                                           // 0x0118(0x0010) (Net, ZeroConstructor)
	TArray<class UGameplayTask*>                       TaskPriorityQueue;                                        // 0x0128(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0138(0x0010) MISSED OFFSET
	TArray<class UGameplayTask*>                       TickingTasks;                                             // 0x0148(0x0010) (ZeroConstructor)
	TArray<class UGameplayTask*>                       KnownTasks;                                               // 0x0158(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnClaimedResourcesChange;                                 // 0x0170(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0180(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayTasks.GameplayTasksComponent");
		return pStaticClass;
	}


	void OnRep_SimulatedTasks();
	EGameplayTaskRunResult K2_RunGameplayTask(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, class UGameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources);
};


}

