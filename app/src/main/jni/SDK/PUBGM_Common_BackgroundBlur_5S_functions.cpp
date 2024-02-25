// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Common_BackgroundBlur_5S.Common_BackgroundBlur_5S_C.Construct
// ()

void UCommon_BackgroundBlur_5S_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_BackgroundBlur_5S.Common_BackgroundBlur_5S_C.Construct");

	UCommon_BackgroundBlur_5S_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_BackgroundBlur_5S.Common_BackgroundBlur_5S_C.ExecuteUbergraph_Common_BackgroundBlur_5S
// (Native, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_BackgroundBlur_5S_C::STATIC_ExecuteUbergraph_Common_BackgroundBlur_5S(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_BackgroundBlur_5S.Common_BackgroundBlur_5S_C.ExecuteUbergraph_Common_BackgroundBlur_5S");

	UCommon_BackgroundBlur_5S_C_ExecuteUbergraph_Common_BackgroundBlur_5S_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

