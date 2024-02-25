// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Editor_login.Editor_login_C.SetFpsByIndex
// (NetRequest, Exec, Event, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            idx                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEditor_login_C::SetFpsByIndex(int idx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Editor_login.Editor_login_C.SetFpsByIndex");

	AEditor_login_C_SetFpsByIndex_Params params;
	params.idx = idx;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Editor_login.Editor_login_C.InpActEvt_Android_Back_K2Node_InputKeyEvent_8
// (NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AEditor_login_C::STATIC_InpActEvt_Android_Back_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Editor_login.Editor_login_C.InpActEvt_Android_Back_K2Node_InputKeyEvent_8");

	AEditor_login_C_InpActEvt_Android_Back_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Editor_login.Editor_login_C.InpActEvt_E_K2Node_InputKeyEvent_7
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AEditor_login_C::STATIC_InpActEvt_E_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Editor_login.Editor_login_C.InpActEvt_E_K2Node_InputKeyEvent_7");

	AEditor_login_C_InpActEvt_E_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Editor_login.Editor_login_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_6
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AEditor_login_C::STATIC_InpActEvt_BackSpace_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Editor_login.Editor_login_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_6");

	AEditor_login_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Editor_login.Editor_login_C.InpActEvt_B_K2Node_InputKeyEvent_5
// (NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AEditor_login_C::STATIC_InpActEvt_B_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Editor_login.Editor_login_C.InpActEvt_B_K2Node_InputKeyEvent_5");

	AEditor_login_C_InpActEvt_B_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Editor_login.Editor_login_C.ReceiveBeginPlay
// ()

void AEditor_login_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Editor_login.Editor_login_C.ReceiveBeginPlay");

	AEditor_login_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Editor_login.Editor_login_C.ExecuteUbergraph_Editor_login
// (NetReliable, Exec, Event, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEditor_login_C::ExecuteUbergraph_Editor_login(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Editor_login.Editor_login_C.ExecuteUbergraph_Editor_login");

	AEditor_login_C_ExecuteUbergraph_Editor_login_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

