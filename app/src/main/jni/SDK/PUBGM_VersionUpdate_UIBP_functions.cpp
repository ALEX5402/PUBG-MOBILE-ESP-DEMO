// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VersionUpdate_UIBP.VersionUpdate_UIBP_C.Construct
// ()

void UVersionUpdate_UIBP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VersionUpdate_UIBP.VersionUpdate_UIBP_C.Construct");

	UVersionUpdate_UIBP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function VersionUpdate_UIBP.VersionUpdate_UIBP_C.ExecuteUbergraph_VersionUpdate_UIBP
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVersionUpdate_UIBP_C::ExecuteUbergraph_VersionUpdate_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VersionUpdate_UIBP.VersionUpdate_UIBP_C.ExecuteUbergraph_VersionUpdate_UIBP");

	UVersionUpdate_UIBP_C_ExecuteUbergraph_VersionUpdate_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

