#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Spectating.OBHttpComponent.ServerGetBackPackInfo
struct UOBHttpComponent_ServerGetBackPackInfo_Params
{
	int                                                TeamID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ObserveReplicateItems;                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Spectating.OBHttpComponent.ServerGetAllPlayerThrowInfo
struct UOBHttpComponent_ServerGetAllPlayerThrowInfo_Params
{
};

// Function Spectating.OBHttpComponent.ServerCollectTeammateItemList
struct UOBHttpComponent_ServerCollectTeammateItemList_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spectating.OBHttpComponent.PostTeamWeaponInfo
struct UOBHttpComponent_PostTeamWeaponInfo_Params
{
	struct FString                                     TeamWeaponInfoJsonStr;                                    // (Parm, ZeroConstructor)
};

// Function Spectating.OBHttpComponent.PostTeamBackPackInfoByTeamID
struct UOBHttpComponent_PostTeamBackPackInfoByTeamID_Params
{
	int                                                TeamID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ObserveReplicateItems;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Spectating.OBHttpComponent.OnRep_RealTimeAPIList
struct UOBHttpComponent_OnRep_RealTimeAPIList_Params
{
};

// Function Spectating.OBHttpComponent.OnRep_AfterMatchAPIList
struct UOBHttpComponent_OnRep_AfterMatchAPIList_Params
{
};

// Function Spectating.OBHttpComponent.ClientUpdateTeammateItemList
struct UOBHttpComponent_ClientUpdateTeammateItemList_Params
{
};

// Function Spectating.OBHttpComponent.ClientGetBackPackInfo
struct UOBHttpComponent_ClientGetBackPackInfo_Params
{
	TArray<struct FPlayerBackPackInfo>                 TeamBackPackInfo;                                         // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Spectating.OBHttpComponent.ClientGetAllPlayerThrowInfo
struct UOBHttpComponent_ClientGetAllPlayerThrowInfo_Params
{
	TArray<struct FPlayerThrowInfo>                    AllPlayerThrowInfo;                                       // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

}

