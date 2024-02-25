// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlobalLuaWidget.GlobalLuaWidget_C.GetNewLevelTaskData
// (NetReliable, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FString                 TaskId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Has                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_NewLevelTask_type BP_STRUCT_NewLevelTask_type    (Parm, OutParm)

void UGlobalLuaWidget_C::GetNewLevelTaskData(const struct FString& TaskId, bool* Has, struct FBP_STRUCT_NewLevelTask_type* BP_STRUCT_NewLevelTask_type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalLuaWidget.GlobalLuaWidget_C.GetNewLevelTaskData");

	UGlobalLuaWidget_C_GetNewLevelTaskData_Params params;
	params.TaskId = TaskId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Has != nullptr)
		*Has = params.Has;
	if (BP_STRUCT_NewLevelTask_type != nullptr)
		*BP_STRUCT_NewLevelTask_type = params.BP_STRUCT_NewLevelTask_type;
}


}

