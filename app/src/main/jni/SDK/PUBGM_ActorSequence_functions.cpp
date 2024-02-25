// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActorSequence.ActorSequenceComponent.StopPlay
// ()

void UActorSequenceComponent::StopPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ActorSequence.ActorSequenceComponent.StopPlay");

	UActorSequenceComponent_StopPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ActorSequence.ActorSequenceComponent.StartPlay
// ()
// Parameters:
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UActorSequenceComponent::StartPlay(float StartTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ActorSequence.ActorSequenceComponent.StartPlay");

	UActorSequenceComponent_StartPlay_Params params;
	params.StartTime = StartTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ActorSequence.ActorSequenceComponent.OnStopOrFinsh
// ()

void UActorSequenceComponent::OnStopOrFinsh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ActorSequence.ActorSequenceComponent.OnStopOrFinsh");

	UActorSequenceComponent_OnStopOrFinsh_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ActorSequence.ActorSequenceComponent.GetLength
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UActorSequenceComponent::GetLength()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ActorSequence.ActorSequenceComponent.GetLength");

	UActorSequenceComponent_GetLength_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

