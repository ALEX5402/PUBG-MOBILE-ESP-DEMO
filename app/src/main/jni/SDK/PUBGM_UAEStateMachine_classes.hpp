#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UAEStateMachine.UAEStateMachineComponent
// 0x00B8 (0x01C8 - 0x0110)
class UUAEStateMachineComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnBeforeTransientEvent;                                   // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAfterTransientEvent;                                    // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     Tag;                                                      // 0x0130(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UUAEState*>                           States;                                                   // 0x0140(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, struct FUAEStateMachineTransition> Transitions;                                              // 0x0150(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FUAETransitionState                         StartState;                                               // 0x01A0(0x0010) (Edit, DisableEditOnInstance)
	struct FUAETransitionState                         EndState;                                                 // 0x01B0(0x0010) (Edit, DisableEditOnInstance)
	class UUAEState*                                   CurrentState;                                             // 0x01C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAEStateMachine.UAEStateMachineComponent");
		return pStaticClass;
	}


	void Start();
	void SetTag(const struct FString& InTag);
	void OnTransientEvent__DelegateSignature(const struct FString& TransientEvent, const struct FString& CurrentState, const struct FString& TransientToState);
	bool IsInState(const struct FString& StateName);
	class UUAEState* GetCurrentState();
	void ForceDoEvent(const struct FString& EventName);
	void Finish();
	void DoEvent(const struct FString& EventName);
	bool CanDoEvent(const struct FString& EventName);
};


// Class UAEStateMachine.UAEState
// 0x0000 (0x0028 - 0x0028)
class UUAEState : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAEStateMachine.UAEState");
		return pStaticClass;
	}


	void Update(float DeltaTime);
	void OnLeave(class UUAEState* TranitToState);
	void OnEnter(class UUAEState* PrevState);
};


// Class UAEStateMachine.TestStatemachine
// 0x0008 (0x03F8 - 0x03F0)
class ATestStatemachine : public AActor
{
public:
	class UUAEStateMachineComponent*                   UAEStateMachineComponent;                                 // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAEStateMachine.TestStatemachine");
		return pStaticClass;
	}

};


}

