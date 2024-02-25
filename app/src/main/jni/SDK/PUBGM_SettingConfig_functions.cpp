// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SettingConfig.SettingConfig_C.ConditionSetFireGyroData
// (NetReliable, NetRequest, Exec, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, NetValidate)

void USettingConfig_C::STATIC_ConditionSetFireGyroData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SettingConfig.SettingConfig_C.ConditionSetFireGyroData");

	USettingConfig_C_ConditionSetFireGyroData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SettingConfig.SettingConfig_C.Init
// (Net, Exec, Event, NetMulticast, Private, HasDefaults, DLLImport, BlueprintPure, Const)

void USettingConfig_C::Init()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SettingConfig.SettingConfig_C.Init");

	USettingConfig_C_Init_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

