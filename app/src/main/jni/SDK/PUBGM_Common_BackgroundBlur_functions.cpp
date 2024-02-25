// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Common_BackgroundBlur.Common_BackgroundBlur_C.Construct
// ()

void UCommon_BackgroundBlur_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_BackgroundBlur.Common_BackgroundBlur_C.Construct");

	UCommon_BackgroundBlur_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_BackgroundBlur.Common_BackgroundBlur_C.ExecuteUbergraph_Common_BackgroundBlur
// (NetReliable, NetResponse, Static, Public, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_BackgroundBlur_C::STATIC_ExecuteUbergraph_Common_BackgroundBlur(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_BackgroundBlur.Common_BackgroundBlur_C.ExecuteUbergraph_Common_BackgroundBlur");

	UCommon_BackgroundBlur_C_ExecuteUbergraph_Common_BackgroundBlur_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

