// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_plugin.bp_pluginBPLibrary.bp_pluginTestEvent
// ()
// Parameters:
// struct FString                 jsonEventCmd                   (Parm, ZeroConstructor)

void Ubp_pluginBPLibrary::bp_pluginTestEvent(const struct FString& jsonEventCmd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_plugin.bp_pluginBPLibrary.bp_pluginTestEvent");

	Ubp_pluginBPLibrary_bp_pluginTestEvent_Params params;
	params.jsonEventCmd = jsonEventCmd;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_plugin.bp_pluginBPLibrary.bp_pluginSendEvent
// ()
// Parameters:
// struct FString                 jsonEventCmd                   (Parm, ZeroConstructor)

void Ubp_pluginBPLibrary::bp_pluginSendEvent(const struct FString& jsonEventCmd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_plugin.bp_pluginBPLibrary.bp_pluginSendEvent");

	Ubp_pluginBPLibrary_bp_pluginSendEvent_Params params;
	params.jsonEventCmd = jsonEventCmd;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_plugin.bp_pluginBPLibrary.bp_pluginLaunchMeemoFunction
// ()
// Parameters:
// struct FString                 Param                          (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float Ubp_pluginBPLibrary::bp_pluginLaunchMeemoFunction(const struct FString& Param)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_plugin.bp_pluginBPLibrary.bp_pluginLaunchMeemoFunction");

	Ubp_pluginBPLibrary_bp_pluginLaunchMeemoFunction_Params params;
	params.Param = Param;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

