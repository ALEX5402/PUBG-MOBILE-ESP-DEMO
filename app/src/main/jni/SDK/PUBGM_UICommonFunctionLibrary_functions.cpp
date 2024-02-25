// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation
// (NetRequest, Event, NetResponse, Static, MulticastDelegate, Public, Protected, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUICommonFunctionLibrary_C::STATIC_SetAdaptation(class UWidget* Widget, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation");

	UUICommonFunctionLibrary_C_SetAdaptation_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

