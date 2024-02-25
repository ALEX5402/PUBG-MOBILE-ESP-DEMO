// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Com_MsgBox_Small_5S_UIBP.Com_MsgBox_Small_5S_UIBP_C.SetButtonOkState
// (NetRequest, Native, Static, NetMulticast, MulticastDelegate, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bInIsEnabled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCom_MsgBox_Small_5S_UIBP_C::STATIC_SetButtonOkState(bool bInIsEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Com_MsgBox_Small_5S_UIBP.Com_MsgBox_Small_5S_UIBP_C.SetButtonOkState");

	UCom_MsgBox_Small_5S_UIBP_C_SetButtonOkState_Params params;
	params.bInIsEnabled = bInIsEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

