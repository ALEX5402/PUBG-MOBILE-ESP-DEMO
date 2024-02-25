// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Spectating.OBHttpComponent.ServerGetBackPackInfo
// ()
// Parameters:
// int                            TeamID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ObserveReplicateItems          (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UOBHttpComponent::ServerGetBackPackInfo(int TeamID, TArray<int> ObserveReplicateItems)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Spectating.OBHttpComponent.ServerGetBackPackInfo");

	UOBHttpComponent_ServerGetBackPackInfo_Params params;
	params.TeamID = TeamID;
	params.ObserveReplicateItems = ObserveReplicateItems;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Spectating.OBHttpComponent.ServerGetAllPlayerThrowInfo
// ()

void UOBHttpComponent::ServerGetAllPlayerThrowInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Spectating.OBHttpComponent.ServerGetAllPlayerThrowInfo");

	UOBHttpComponent_ServerGetAllPlayerThrowInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Spectating.OBHttpComponent.ServerCollectTeammateItemList
// ()
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)

void UOBHttpComponent::ServerCollectTeammateItemList(int TeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Spectating.OBHttpComponent.ServerCollectTeammateItemList");

	UOBHttpComponent_ServerCollectTeammateItemList_Params params;
	params.TeamID = TeamID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Spectating.OBHttpComponent.PostTeamWeaponInfo
// ()
// Parameters:
// struct FString                 TeamWeaponInfoJsonStr          (Parm, ZeroConstructor)

void UOBHttpComponent::PostTeamWeaponInfo(const struct FString& TeamWeaponInfoJsonStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Spectating.OBHttpComponent.PostTeamWeaponInfo");

	UOBHttpComponent_PostTeamWeaponInfo_Params params;
	params.TeamWeaponInfoJsonStr = TeamWeaponInfoJsonStr;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Spectating.OBHttpComponent.PostTeamBackPackInfoByTeamID
// ()
// Parameters:
// int                            TeamID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ObserveReplicateItems          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UOBHttpComponent::PostTeamBackPackInfoByTeamID(int TeamID, TArray<int> ObserveReplicateItems)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Spectating.OBHttpComponent.PostTeamBackPackInfoByTeamID");

	UOBHttpComponent_PostTeamBackPackInfoByTeamID_Params params;
	params.TeamID = TeamID;
	params.ObserveReplicateItems = ObserveReplicateItems;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Spectating.OBHttpComponent.OnRep_RealTimeAPIList
// ()

void UOBHttpComponent::OnRep_RealTimeAPIList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Spectating.OBHttpComponent.OnRep_RealTimeAPIList");

	UOBHttpComponent_OnRep_RealTimeAPIList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Spectating.OBHttpComponent.OnRep_AfterMatchAPIList
// ()

void UOBHttpComponent::OnRep_AfterMatchAPIList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Spectating.OBHttpComponent.OnRep_AfterMatchAPIList");

	UOBHttpComponent_OnRep_AfterMatchAPIList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Spectating.OBHttpComponent.ClientUpdateTeammateItemList
// ()

void UOBHttpComponent::ClientUpdateTeammateItemList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Spectating.OBHttpComponent.ClientUpdateTeammateItemList");

	UOBHttpComponent_ClientUpdateTeammateItemList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Spectating.OBHttpComponent.ClientGetBackPackInfo
// ()
// Parameters:
// TArray<struct FPlayerBackPackInfo> TeamBackPackInfo               (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UOBHttpComponent::ClientGetBackPackInfo(TArray<struct FPlayerBackPackInfo> TeamBackPackInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Spectating.OBHttpComponent.ClientGetBackPackInfo");

	UOBHttpComponent_ClientGetBackPackInfo_Params params;
	params.TeamBackPackInfo = TeamBackPackInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Spectating.OBHttpComponent.ClientGetAllPlayerThrowInfo
// ()
// Parameters:
// TArray<struct FPlayerThrowInfo> AllPlayerThrowInfo             (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UOBHttpComponent::ClientGetAllPlayerThrowInfo(TArray<struct FPlayerThrowInfo> AllPlayerThrowInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Spectating.OBHttpComponent.ClientGetAllPlayerThrowInfo");

	UOBHttpComponent_ClientGetAllPlayerThrowInfo_Params params;
	params.AllPlayerThrowInfo = AllPlayerThrowInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

