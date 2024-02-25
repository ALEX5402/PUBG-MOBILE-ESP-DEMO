// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.AddWidgetInternal
// (Event, Static, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UUserWidget**            Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIContainer_BP_C::STATIC_AddWidgetInternal(class UUserWidget** Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.AddWidgetInternal");

	UGlobalUIContainer_BP_C_AddWidgetInternal_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.RemoveWidgetInternal
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Protected, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget**            Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIContainer_BP_C::STATIC_RemoveWidgetInternal(class UUserWidget** Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.RemoveWidgetInternal");

	UGlobalUIContainer_BP_C_RemoveWidgetInternal_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.AddWidgetWithZOrderInternal
// (NetReliable, Native, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UUserWidget**            Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ZOrder                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIContainer_BP_C::STATIC_AddWidgetWithZOrderInternal(class UUserWidget** Widget, int* ZOrder)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.AddWidgetWithZOrderInternal");

	UGlobalUIContainer_BP_C_AddWidgetWithZOrderInternal_Params params;
	params.Widget = Widget;
	params.ZOrder = ZOrder;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.ExecuteUbergraph_GlobalUIContainer_BP
// (Net, NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIContainer_BP_C::ExecuteUbergraph_GlobalUIContainer_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.ExecuteUbergraph_GlobalUIContainer_BP");

	UGlobalUIContainer_BP_C_ExecuteUbergraph_GlobalUIContainer_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

