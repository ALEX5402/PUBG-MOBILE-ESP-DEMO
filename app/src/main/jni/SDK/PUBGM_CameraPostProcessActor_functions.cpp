// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CameraPostProcessActor.CameraPostProcessActor_C.UserConstructionScript
// ()

void ACameraPostProcessActor_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CameraPostProcessActor.CameraPostProcessActor_C.UserConstructionScript");

	ACameraPostProcessActor_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CameraPostProcessActor.CameraPostProcessActor_C.Timeline_LerpPPSettings__FinishedFunc
// ()

void ACameraPostProcessActor_C::Timeline_LerpPPSettings__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CameraPostProcessActor.CameraPostProcessActor_C.Timeline_LerpPPSettings__FinishedFunc");

	ACameraPostProcessActor_C_Timeline_LerpPPSettings__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CameraPostProcessActor.CameraPostProcessActor_C.Timeline_LerpPPSettings__UpdateFunc
// ()

void ACameraPostProcessActor_C::Timeline_LerpPPSettings__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CameraPostProcessActor.CameraPostProcessActor_C.Timeline_LerpPPSettings__UpdateFunc");

	ACameraPostProcessActor_C_Timeline_LerpPPSettings__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CameraPostProcessActor.CameraPostProcessActor_C.Event LerpPostProcessSettings
// (NetReliable, Native, Static, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APostProcessVolume*      currentPPVolumn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_CameraPostProcessSettings_type targetPPSettingsStruct         (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isReverse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACameraPostProcessActor_C::STATIC_Event_LerpPostProcessSettings(class APostProcessVolume* currentPPVolumn, const struct FBP_STRUCT_CameraPostProcessSettings_type& targetPPSettingsStruct, float Time, int ID, bool isReverse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CameraPostProcessActor.CameraPostProcessActor_C.Event LerpPostProcessSettings");

	ACameraPostProcessActor_C_Event_LerpPostProcessSettings_Params params;
	params.currentPPVolumn = currentPPVolumn;
	params.targetPPSettingsStruct = targetPPSettingsStruct;
	params.Time = Time;
	params.ID = ID;
	params.isReverse = isReverse;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CameraPostProcessActor.CameraPostProcessActor_C.ExecuteUbergraph_CameraPostProcessActor
// (Net, NetResponse, NetMulticast, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACameraPostProcessActor_C::ExecuteUbergraph_CameraPostProcessActor(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CameraPostProcessActor.CameraPostProcessActor_C.ExecuteUbergraph_CameraPostProcessActor");

	ACameraPostProcessActor_C_ExecuteUbergraph_CameraPostProcessActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

