// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LuaHotReload.LuaHotReloadHelper.OnLuaFileHotUpdate
// ()
// Parameters:
// struct FString                 NotifyMessage                  (Parm, ZeroConstructor)

void ULuaHotReloadHelper::OnLuaFileHotUpdate(const struct FString& NotifyMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LuaHotReload.LuaHotReloadHelper.OnLuaFileHotUpdate");

	ULuaHotReloadHelper_OnLuaFileHotUpdate_Params params;
	params.NotifyMessage = NotifyMessage;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

