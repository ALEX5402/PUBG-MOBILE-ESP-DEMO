// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gameplay.UAERegionActor.ReceivedPlayerActiveRegionsChanged
// ()
// Parameters:
// bool                           bEnter                         (Parm, ZeroConstructor, IsPlainOldData)

void AUAERegionActor::ReceivedPlayerActiveRegionsChanged(bool bEnter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAERegionActor.ReceivedPlayerActiveRegionsChanged");

	AUAERegionActor_ReceivedPlayerActiveRegionsChanged_Params params;
	params.bEnter = bEnter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAECharacter.SetNetCullDistanceSquared
// ()
// Parameters:
// float                          fNetCullDistanceSquared        (Parm, ZeroConstructor, IsPlainOldData)

void AUAECharacter::SetNetCullDistanceSquared(float fNetCullDistanceSquared)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.SetNetCullDistanceSquared");

	AUAECharacter_SetNetCullDistanceSquared_Params params;
	params.fNetCullDistanceSquared = fNetCullDistanceSquared;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAECharacter.SendLuaDSToClient
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AUAECharacter::SendLuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.SendLuaDSToClient");

	AUAECharacter_SendLuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAECharacter.RPC_LuaDSToClient
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AUAECharacter::RPC_LuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.RPC_LuaDSToClient");

	AUAECharacter_RPC_LuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAECharacter.OnRep_UseWholeModel
// ()

void AUAECharacter::OnRep_UseWholeModel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.OnRep_UseWholeModel");

	AUAECharacter_OnRep_UseWholeModel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAECharacter.OnRep_TeamID
// ()

void AUAECharacter::OnRep_TeamID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.OnRep_TeamID");

	AUAECharacter_OnRep_TeamID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAECharacter.OnRep_PlayerUID
// ()

void AUAECharacter::OnRep_PlayerUID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.OnRep_PlayerUID");

	AUAECharacter_OnRep_PlayerUID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAECharacter.OnRep_PlayerKey
// ()

void AUAECharacter::OnRep_PlayerKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.OnRep_PlayerKey");

	AUAECharacter_OnRep_PlayerKey_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAECharacter.OnRep_MLAIPlayerUID
// ()

void AUAECharacter::OnRep_MLAIPlayerUID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.OnRep_MLAIPlayerUID");

	AUAECharacter_OnRep_MLAIPlayerUID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAECharacter.OnRep_CampID
// ()

void AUAECharacter::OnRep_CampID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.OnRep_CampID");

	AUAECharacter_OnRep_CampID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAECharacter.IsDefaultCharType
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAECharacter::IsDefaultCharType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.IsDefaultCharType");

	AUAECharacter_IsDefaultCharType_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAECharacter.GetTeamId
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAECharacter::GetTeamId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetTeamId");

	AUAECharacter_GetTeamId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAECharacter.GetPlayerKey
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AUAECharacter::GetPlayerKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetPlayerKey");

	AUAECharacter_GetPlayerKey_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAECharacter.GetNonSimulatedComponents_OnFighting
// ()
// Parameters:
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> AUAECharacter::GetNonSimulatedComponents_OnFighting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetNonSimulatedComponents_OnFighting");

	AUAECharacter_GetNonSimulatedComponents_OnFighting_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAECharacter.GetNonSimulatedComponents_NonTeammates
// ()
// Parameters:
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> AUAECharacter::GetNonSimulatedComponents_NonTeammates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetNonSimulatedComponents_NonTeammates");

	AUAECharacter_GetNonSimulatedComponents_NonTeammates_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAECharacter.GetNonSimulatedComponents
// ()
// Parameters:
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> AUAECharacter::GetNonSimulatedComponents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetNonSimulatedComponents");

	AUAECharacter_GetNonSimulatedComponents_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAECharacter.GetNonDedicatedComponents
// ()
// Parameters:
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> AUAECharacter::GetNonDedicatedComponents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetNonDedicatedComponents");

	AUAECharacter_GetNonDedicatedComponents_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAECharacter.GetMovementBaseComponent
// ()
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* AUAECharacter::GetMovementBaseComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetMovementBaseComponent");

	AUAECharacter_GetMovementBaseComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAECharacter.GetCampId
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAECharacter::GetCampId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetCampId");

	AUAECharacter_GetCampId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAECharacter.ClientAcknowledgeReconnection_3
// ()
// Parameters:
// uint32_t                       Token                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAECharacter::ClientAcknowledgeReconnection_3(uint32_t Token)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.ClientAcknowledgeReconnection_3");

	AUAECharacter_ClientAcknowledgeReconnection_3_Params params;
	params.Token = Token;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.WriteStatistics
// ()

void AUAEGameMode::WriteStatistics()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.WriteStatistics");

	AUAEGameMode_WriteStatistics_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.SyncPlayerNames
// ()

void AUAEGameMode::SyncPlayerNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SyncPlayerNames");

	AUAEGameMode_SyncPlayerNames_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.SyncNewCorpsData
// ()
// Parameters:
// TArray<struct FDSCorpsInfo>    OutCorpsData                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AUAEGameMode::SyncNewCorpsData(TArray<struct FDSCorpsInfo> OutCorpsData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SyncNewCorpsData");

	AUAEGameMode_SyncNewCorpsData_Params params;
	params.OutCorpsData = OutCorpsData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.SpawnUAEPawnFor
// ()
// Parameters:
// class AController*             NewPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Trans                          (Parm, IsPlainOldData)
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* AUAEGameMode::SpawnUAEPawnFor(class AController* NewPlayer, const struct FTransform& Trans)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SpawnUAEPawnFor");

	AUAEGameMode_SpawnUAEPawnFor_Params params;
	params.NewPlayer = NewPlayer;
	params.Trans = Trans;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.SetVehicleReportEntry
// ()
// Parameters:
// uint32_t                       InUniqueID                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVehicleReportEntry     InEntry                        (Parm)

void AUAEGameMode::SetVehicleReportEntry(uint32_t InUniqueID, const struct FVehicleReportEntry& InEntry)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SetVehicleReportEntry");

	AUAEGameMode_SetVehicleReportEntry_Params params;
	params.InUniqueID = InUniqueID;
	params.InEntry = InEntry;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.SetPlayerOpenId
// ()
// Parameters:
// uint32_t                       InPlayerKey                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InPlayerOpenID                 (Parm, ZeroConstructor)

void AUAEGameMode::SetPlayerOpenId(uint32_t InPlayerKey, const struct FString& InPlayerOpenID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SetPlayerOpenId");

	AUAEGameMode_SetPlayerOpenId_Params params;
	params.InPlayerKey = InPlayerKey;
	params.InPlayerOpenID = InPlayerOpenID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.SetMaxWeaponReportNum
// ()
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::SetMaxWeaponReportNum(int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SetMaxWeaponReportNum");

	AUAEGameMode_SetMaxWeaponReportNum_Params params;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.SetKillerPlayerKey
// ()
// Parameters:
// class AController*             VictimPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       KillerPlayerKey                (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::SetKillerPlayerKey(class AController* VictimPlayer, uint32_t KillerPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SetKillerPlayerKey");

	AUAEGameMode_SetKillerPlayerKey_Params params;
	params.VictimPlayer = VictimPlayer;
	params.KillerPlayerKey = KillerPlayerKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.SetGameEndReportData
// ()

void AUAEGameMode::SetGameEndReportData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SetGameEndReportData");

	AUAEGameMode_SetGameEndReportData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.RetrieveTeamBattleResultData
// ()
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameModeTeamBattleResultData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameModeTeamBattleResultData AUAEGameMode::RetrieveTeamBattleResultData(int TeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RetrieveTeamBattleResultData");

	AUAEGameMode_RetrieveTeamBattleResultData_Params params;
	params.TeamID = TeamID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.RetrieveBattleData
// ()
// Parameters:
// struct FBattleData             OutBattleData                  (Parm, OutParm)

void AUAEGameMode::RetrieveBattleData(struct FBattleData* OutBattleData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RetrieveBattleData");

	AUAEGameMode_RetrieveBattleData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutBattleData != nullptr)
		*OutBattleData = params.OutBattleData;
}


// Function Gameplay.UAEGameMode.RestartPlayerAtPlayerStart
// ()
// Parameters:
// class AController*             NewPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  StartSpot                      (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::RestartPlayerAtPlayerStart(class AController* NewPlayer, class AActor* StartSpot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RestartPlayerAtPlayerStart");

	AUAEGameMode_RestartPlayerAtPlayerStart_Params params;
	params.NewPlayer = NewPlayer;
	params.StartSpot = StartSpot;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.ResetGameParamsFromGameMode
// ()

void AUAEGameMode::ResetGameParamsFromGameMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.ResetGameParamsFromGameMode");

	AUAEGameMode_ResetGameParamsFromGameMode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.Rescue
// ()
// Parameters:
// class APawn*                   RescueWho                      (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   Hero                           (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::Rescue(class APawn* RescueWho, class APawn* Hero)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.Rescue");

	AUAEGameMode_Rescue_Params params;
	params.RescueWho = RescueWho;
	params.Hero = Hero;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.ReportCollectedEventDataWithPlayerValidation
// ()
// Parameters:
// class AUAEPlayerController*    UAEPlayerController            (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  EventId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         CollectReportedEventDataCallback (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEGameMode::ReportCollectedEventDataWithPlayerValidation(class AUAEPlayerController* UAEPlayerController, unsigned char EventId, const struct FScriptDelegate& CollectReportedEventDataCallback)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.ReportCollectedEventDataWithPlayerValidation");

	AUAEGameMode_ReportCollectedEventDataWithPlayerValidation_Params params;
	params.UAEPlayerController = UAEPlayerController;
	params.EventId = EventId;
	params.CollectReportedEventDataCallback = CollectReportedEventDataCallback;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.ReportCollectedEventDataWithPlayersValidation
// ()
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  EventId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         CollectReportedEventDataCallback (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEGameMode::ReportCollectedEventDataWithPlayersValidation(class UWorld* World, unsigned char EventId, const struct FScriptDelegate& CollectReportedEventDataCallback)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.ReportCollectedEventDataWithPlayersValidation");

	AUAEGameMode_ReportCollectedEventDataWithPlayersValidation_Params params;
	params.World = World;
	params.EventId = EventId;
	params.CollectReportedEventDataCallback = CollectReportedEventDataCallback;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.ReportCollectedEventData
// ()
// Parameters:
// struct FString                 UId                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// unsigned char                  EventId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FCollectedEventData     Data                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEGameMode::ReportCollectedEventData(const struct FString& UId, unsigned char EventId, const struct FCollectedEventData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.ReportCollectedEventData");

	AUAEGameMode_ReportCollectedEventData_Params params;
	params.UId = UId;
	params.EventId = EventId;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.RegisterItemGroupSpotsByTag
// ()
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// class UGroupSpotSceneComponent* GroupSpotComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AUAEGameMode::RegisterItemGroupSpotsByTag(const struct FName& Tag, class UGroupSpotSceneComponent* GroupSpotComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RegisterItemGroupSpotsByTag");

	AUAEGameMode_RegisterItemGroupSpotsByTag_Params params;
	params.Tag = Tag;
	params.GroupSpotComponent = GroupSpotComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.RegisterItemGroupSpots
// ()
// Parameters:
// class UGroupSpotSceneComponent* GroupSpotComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AUAEGameMode::RegisterItemGroupSpots(class UGroupSpotSceneComponent* GroupSpotComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RegisterItemGroupSpots");

	AUAEGameMode_RegisterItemGroupSpots_Params params;
	params.GroupSpotComponent = GroupSpotComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.RefreshWorldActiveRange
// ()

void AUAEGameMode::RefreshWorldActiveRange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RefreshWorldActiveRange");

	AUAEGameMode_RefreshWorldActiveRange_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.RefreshWatchTeammates
// ()
// Parameters:
// class AUAEPlayerController*    InController                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            InTeamID                       (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::RefreshWatchTeammates(class AUAEPlayerController* InController, int InTeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RefreshWatchTeammates");

	AUAEGameMode_RefreshWatchTeammates_Params params;
	params.InController = InController;
	params.InTeamID = InTeamID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.RefreshPlayerNames
// ()
// Parameters:
// uint32_t                       InPlayerKey                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InPlayerName                   (Parm, ZeroConstructor)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLogin                        (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       UId                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            IdxInTeam                      (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::RefreshPlayerNames(uint32_t InPlayerKey, const struct FString& InPlayerName, int TeamID, bool IsLogin, uint64_t UId, int IdxInTeam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RefreshPlayerNames");

	AUAEGameMode_RefreshPlayerNames_Params params;
	params.InPlayerKey = InPlayerKey;
	params.InPlayerName = InPlayerName;
	params.TeamID = TeamID;
	params.IsLogin = IsLogin;
	params.UId = UId;
	params.IdxInTeam = IdxInTeam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.RecoardAlivePlayerNum
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEGameMode::RecoardAlivePlayerNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RecoardAlivePlayerNum");

	AUAEGameMode_RecoardAlivePlayerNum_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.PreCreatePlayerController
// ()
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* AUAEGameMode::PreCreatePlayerController(uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.PreCreatePlayerController");

	AUAEGameMode_PreCreatePlayerController_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.OnStandAloneGameEnd
// ()

void AUAEGameMode::OnStandAloneGameEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnStandAloneGameEnd");

	AUAEGameMode_OnStandAloneGameEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.OnReportNetworkData
// ()

void AUAEGameMode::OnReportNetworkData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnReportNetworkData");

	AUAEGameMode_OnReportNetworkData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.OnPlayerFiring
// ()
// Parameters:
// uint32_t                       InPlayerKey                    (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::OnPlayerFiring(uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnPlayerFiring");

	AUAEGameMode_OnPlayerFiring_Params params;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.OnPlayerControlDestroyEnd
// ()
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::OnPlayerControlDestroyEnd(uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnPlayerControlDestroyEnd");

	AUAEGameMode_OnPlayerControlDestroyEnd_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.OnPlayerBreathChange
// ()
// Parameters:
// uint32_t                       InPlayerKey                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          InBreath                       (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::OnPlayerBreathChange(uint32_t InPlayerKey, float InBreath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnPlayerBreathChange");

	AUAEGameMode_OnPlayerBreathChange_Params params;
	params.InPlayerKey = InPlayerKey;
	params.InBreath = InBreath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.OnObserverLogout
// ()
// Parameters:
// class AUAEPlayerController*    InController                   (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::OnObserverLogout(class AUAEPlayerController* InController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnObserverLogout");

	AUAEGameMode_OnObserverLogout_Params params;
	params.InController = InController;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.OnObserverLogin
// ()
// Parameters:
// class AUAEPlayerController*    InController                   (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::OnObserverLogin(class AUAEPlayerController* InController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnObserverLogin");

	AUAEGameMode_OnObserverLogin_Params params;
	params.InController = InController;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.OnMsg
// ()
// Parameters:
// struct FString                 Msg                            (Parm, ZeroConstructor)

void AUAEGameMode::OnMsg(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnMsg");

	AUAEGameMode_OnMsg_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.OnAirDropBoxLanded
// ()
// Parameters:
// int                            boxId                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 pos                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AUAEGameMode::OnAirDropBoxLanded(int boxId, const struct FVector& pos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnAirDropBoxLanded");

	AUAEGameMode_OnAirDropBoxLanded_Params params;
	params.boxId = boxId;
	params.pos = pos;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.OnAirDropBoxEmpty
// ()
// Parameters:
// int                            boxId                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::OnAirDropBoxEmpty(int boxId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnAirDropBoxEmpty");

	AUAEGameMode_OnAirDropBoxEmpty_Params params;
	params.boxId = boxId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.NotifyPlayerExitWhenNotStarted
// ()
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Reason                         (Parm, ZeroConstructor)

void AUAEGameMode::NotifyPlayerExitWhenNotStarted(uint32_t PlayerKey, const struct FName& PlayerType, const struct FString& Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyPlayerExitWhenNotStarted");

	AUAEGameMode_NotifyPlayerExitWhenNotStarted_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.NotifyPlayerExit
// ()
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDestroyPlayerController       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDestroyCharacter              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSendFailure                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FailureMessage                 (Parm, ZeroConstructor)

void AUAEGameMode::NotifyPlayerExit(uint32_t PlayerKey, const struct FName& PlayerType, bool bDestroyPlayerController, bool bDestroyCharacter, bool bSendFailure, const struct FString& FailureMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyPlayerExit");

	AUAEGameMode_NotifyPlayerExit_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;
	params.bDestroyPlayerController = bDestroyPlayerController;
	params.bDestroyCharacter = bDestroyCharacter;
	params.bSendFailure = bSendFailure;
	params.FailureMessage = FailureMessage;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.NotifyPlayerAbleToExitSafely
// ()
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::NotifyPlayerAbleToExitSafely(uint32_t PlayerKey, const struct FName& PlayerType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyPlayerAbleToExitSafely");

	AUAEGameMode_NotifyPlayerAbleToExitSafely_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.NotifyGameModeParamsChanged
// ()
// Parameters:
// struct FGameModeParams         GameModeParams                 (ConstParm, Parm, OutParm, ReferenceParm)

void AUAEGameMode::NotifyGameModeParamsChanged(const struct FGameModeParams& GameModeParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyGameModeParamsChanged");

	AUAEGameMode_NotifyGameModeParamsChanged_Params params;
	params.GameModeParams = GameModeParams;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.NotifyGameModeLuckmate
// ()
// Parameters:
// int64_t                        MyUID                          (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        LuckmateUID                    (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::NotifyGameModeLuckmate(int64_t MyUID, int64_t LuckmateUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyGameModeLuckmate");

	AUAEGameMode_NotifyGameModeLuckmate_Params params;
	params.MyUID = MyUID;
	params.LuckmateUID = LuckmateUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.NotifyGameModeInit
// ()

void AUAEGameMode::NotifyGameModeInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyGameModeInit");

	AUAEGameMode_NotifyGameModeInit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.NotifyExistPlayerReEnter
// ()
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::NotifyExistPlayerReEnter(uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyExistPlayerReEnter");

	AUAEGameMode_NotifyExistPlayerReEnter_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.NotifyAIPlayerEnter
// ()
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsMLAI                         (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::NotifyAIPlayerEnter(uint32_t PlayerKey, bool IsMLAI)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyAIPlayerEnter");

	AUAEGameMode_NotifyAIPlayerEnter_Params params;
	params.PlayerKey = PlayerKey;
	params.IsMLAI = IsMLAI;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.NotifyAIDropInfo
// ()
// Parameters:
// int                            NewAI                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FDSAIDropInfo           Info                           (ConstParm, Parm, OutParm, ReferenceParm)

void AUAEGameMode::NotifyAIDropInfo(int NewAI, const struct FDSAIDropInfo& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyAIDropInfo");

	AUAEGameMode_NotifyAIDropInfo_Params params;
	params.NewAI = NewAI;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.ModifyVehicleDamage
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  VictimVehicle                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AUAEGameMode::ModifyVehicleDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* VictimVehicle, class AActor* DamageCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.ModifyVehicleDamage");

	AUAEGameMode_ModifyVehicleDamage_Params params;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.VictimVehicle = VictimVehicle;
	params.DamageCauser = DamageCauser;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.ModifyDamage
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             VictimController               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AUAEGameMode::ModifyDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AController* VictimController, class AActor* DamageCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.ModifyDamage");

	AUAEGameMode_ModifyDamage_Params params;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.VictimController = VictimController;
	params.DamageCauser = DamageCauser;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.Killed
// ()
// Parameters:
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             VictimPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   VictimPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)

void AUAEGameMode::Killed(class AController* Killer, class AController* VictimPlayer, class APawn* VictimPawn, const struct FDamageEvent& DamageEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.Killed");

	AUAEGameMode_Killed_Params params;
	params.Killer = Killer;
	params.VictimPlayer = VictimPlayer;
	params.VictimPawn = VictimPawn;
	params.DamageEvent = DamageEvent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.IsSatisfyGeneratorArea
// ()
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEGameMode::IsSatisfyGeneratorArea(const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.IsSatisfyGeneratorArea");

	AUAEGameMode_IsSatisfyGeneratorArea_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.IsPlayerCollectedEventDataReportingEnabled
// ()
// Parameters:
// class AUAEPlayerController*    UAEPlayerController            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEGameMode::IsPlayerCollectedEventDataReportingEnabled(class AUAEPlayerController* UAEPlayerController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.IsPlayerCollectedEventDataReportingEnabled");

	AUAEGameMode_IsPlayerCollectedEventDataReportingEnabled_Params params;
	params.UAEPlayerController = UAEPlayerController;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.IsCollectedEventEnabled
// ()
// Parameters:
// unsigned char                  EventId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEGameMode::IsCollectedEventEnabled(unsigned char EventId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.IsCollectedEventEnabled");

	AUAEGameMode_IsCollectedEventEnabled_Params params;
	params.EventId = EventId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.InitWorldActiveRange
// ()

void AUAEGameMode::InitWorldActiveRange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitWorldActiveRange");

	AUAEGameMode_InitWorldActiveRange_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.InitSeasonStatue
// ()

void AUAEGameMode::InitSeasonStatue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitSeasonStatue");

	AUAEGameMode_InitSeasonStatue_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.InitMissionBoard
// ()

void AUAEGameMode::InitMissionBoard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitMissionBoard");

	AUAEGameMode_InitMissionBoard_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.InitGenerator
// ()

void AUAEGameMode::InitGenerator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitGenerator");

	AUAEGameMode_InitGenerator_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.InitGameParamsFromGameMode
// ()

void AUAEGameMode::InitGameParamsFromGameMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitGameParamsFromGameMode");

	AUAEGameMode_InitGameParamsFromGameMode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.InitDynamicTriggers
// ()

void AUAEGameMode::InitDynamicTriggers()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitDynamicTriggers");

	AUAEGameMode_InitDynamicTriggers_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.InitDynamicBuildingGroups
// ()

void AUAEGameMode::InitDynamicBuildingGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitDynamicBuildingGroups");

	AUAEGameMode_InitDynamicBuildingGroups_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.InitBornWithApple
// ()

void AUAEGameMode::InitBornWithApple()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitBornWithApple");

	AUAEGameMode_InitBornWithApple_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.Heartbeat
// ()

void AUAEGameMode::Heartbeat()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.Heartbeat");

	AUAEGameMode_Heartbeat_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.HasVehicleReportEntry
// ()
// Parameters:
// uint32_t                       InUniqueID                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEGameMode::HasVehicleReportEntry(uint32_t InUniqueID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.HasVehicleReportEntry");

	AUAEGameMode_HasVehicleReportEntry_Params params;
	params.InUniqueID = InUniqueID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.HasDynamicBuildingGroup
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEGameMode::HasDynamicBuildingGroup()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.HasDynamicBuildingGroup");

	AUAEGameMode_HasDynamicBuildingGroup_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.HandlePlayerPaintDecalResponse
// ()
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            DecalId                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::HandlePlayerPaintDecalResponse(uint32_t PlayerKey, const struct FName& PlayerType, int Result, int DecalId, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.HandlePlayerPaintDecalResponse");

	AUAEGameMode_HandlePlayerPaintDecalResponse_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;
	params.Result = Result;
	params.DecalId = DecalId;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.GotoNearDeath
// ()
// Parameters:
// class AController*             DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   VictimPawn                     (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::GotoNearDeath(class AController* DamageInstigator, class APawn* VictimPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GotoNearDeath");

	AUAEGameMode_GotoNearDeath_Params params;
	params.DamageInstigator = DamageInstigator;
	params.VictimPawn = VictimPawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.GetVehicleReportEntry
// ()
// Parameters:
// uint32_t                       InUniqueID                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVehicleReportEntry     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleReportEntry AUAEGameMode::GetVehicleReportEntry(uint32_t InUniqueID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetVehicleReportEntry");

	AUAEGameMode_GetVehicleReportEntry_Params params;
	params.InUniqueID = InUniqueID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.GetSurvivingTeamCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEGameMode::GetSurvivingTeamCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetSurvivingTeamCount");

	AUAEGameMode_GetSurvivingTeamCount_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.GetSurvivingCharacterCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEGameMode::GetSurvivingCharacterCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetSurvivingCharacterCount");

	AUAEGameMode_GetSurvivingCharacterCount_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.GetPlayerStateListWithTeamID
// ()
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AUAEPlayerState*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AUAEPlayerState*> AUAEGameMode::GetPlayerStateListWithTeamID(int TeamID, const struct FName& PlayerType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetPlayerStateListWithTeamID");

	AUAEGameMode_GetPlayerStateListWithTeamID_Params params;
	params.TeamID = TeamID;
	params.PlayerType = PlayerType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.GetPlayerRealtimeVerifyInfo
// ()
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRealtimeVerifyInfo     RealtimeVerifyInfo             (Parm, OutParm)

void AUAEGameMode::GetPlayerRealtimeVerifyInfo(uint32_t PlayerKey, struct FRealtimeVerifyInfo* RealtimeVerifyInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetPlayerRealtimeVerifyInfo");

	AUAEGameMode_GetPlayerRealtimeVerifyInfo_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (RealtimeVerifyInfo != nullptr)
		*RealtimeVerifyInfo = params.RealtimeVerifyInfo;
}


// Function Gameplay.UAEGameMode.GetPlayerControllerWithUID
// ()
// Parameters:
// uint64_t                       UId                            (Parm, ZeroConstructor, IsPlainOldData)
// class AUAEPlayerController*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUAEPlayerController* AUAEGameMode::GetPlayerControllerWithUID(uint64_t UId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetPlayerControllerWithUID");

	AUAEGameMode_GetPlayerControllerWithUID_Params params;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.GetPlayerControllerListWithTeamID
// ()
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AUAEPlayerController*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AUAEPlayerController*> AUAEGameMode::GetPlayerControllerListWithTeamID(int TeamID, const struct FName& PlayerType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetPlayerControllerListWithTeamID");

	AUAEGameMode_GetPlayerControllerListWithTeamID_Params params;
	params.TeamID = TeamID;
	params.PlayerType = PlayerType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.GetPlayerAndRealAiNum
// ()
// Parameters:
// struct FHeartBeatData          Data                           (Parm, OutParm)

void AUAEGameMode::GetPlayerAndRealAiNum(struct FHeartBeatData* Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetPlayerAndRealAiNum");

	AUAEGameMode_GetPlayerAndRealAiNum_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function Gameplay.UAEGameMode.GetObserverControllerList
// ()
// Parameters:
// TArray<class AUAEPlayerController*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AUAEPlayerController*> AUAEGameMode::GetObserverControllerList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetObserverControllerList");

	AUAEGameMode_GetObserverControllerList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.GetMonsterNum
// ()
// Parameters:
// struct FHeartBeatData          Data                           (Parm, OutParm)

void AUAEGameMode::GetMonsterNum(struct FHeartBeatData* Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetMonsterNum");

	AUAEGameMode_GetMonsterNum_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function Gameplay.UAEGameMode.GetMaxWeaponReportNum
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEGameMode::GetMaxWeaponReportNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetMaxWeaponReportNum");

	AUAEGameMode_GetMaxWeaponReportNum_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.GetClassicPlaneDirection
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AUAEGameMode::GetClassicPlaneDirection()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetClassicPlaneDirection");

	AUAEGameMode_GetClassicPlaneDirection_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.FindPlayerStateWithPlayerKey
// ()
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AUAEPlayerState*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUAEPlayerState* AUAEGameMode::FindPlayerStateWithPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.FindPlayerStateWithPlayerKey");

	AUAEGameMode_FindPlayerStateWithPlayerKey_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.FindPlayerControllerWithPlayerKey
// ()
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AUAEPlayerController*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUAEPlayerController* AUAEGameMode::FindPlayerControllerWithPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.FindPlayerControllerWithPlayerKey");

	AUAEGameMode_FindPlayerControllerWithPlayerKey_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.FindPlayerControllerByUId
// ()
// Parameters:
// uint64_t                       UId                            (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* AUAEGameMode::FindPlayerControllerByUId(uint64_t UId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.FindPlayerControllerByUId");

	AUAEGameMode_FindPlayerControllerByUId_Params params;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.FindControllerWithPlayerKey
// ()
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AController* AUAEGameMode::FindControllerWithPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.FindControllerWithPlayerKey");

	AUAEGameMode_FindControllerWithPlayerKey_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.DestroyNoActiveWorldActor
// ()
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::DestroyNoActiveWorldActor(struct FVector* Location, float* Radius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.DestroyNoActiveWorldActor");

	AUAEGameMode_DestroyNoActiveWorldActor_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Radius != nullptr)
		*Radius = params.Radius;
}


// Function Gameplay.UAEGameMode.DestroyCharacterForPlayerController
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::DestroyCharacterForPlayerController(class APlayerController* PC)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.DestroyCharacterForPlayerController");

	AUAEGameMode_DestroyCharacterForPlayerController_Params params;
	params.PC = PC;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.DestroyAllPickUpObjs
// ()

void AUAEGameMode::DestroyAllPickUpObjs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.DestroyAllPickUpObjs");

	AUAEGameMode_DestroyAllPickUpObjs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.DeleteSeasonStatue
// ()

void AUAEGameMode::DeleteSeasonStatue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.DeleteSeasonStatue");

	AUAEGameMode_DeleteSeasonStatue_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.DeleteDynamicLoadItem
// ()

void AUAEGameMode::DeleteDynamicLoadItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.DeleteDynamicLoadItem");

	AUAEGameMode_DeleteDynamicLoadItem_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.DebugEnterFriendObserver
// ()
// Parameters:
// class AUAEPlayerController*    InController                   (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::DebugEnterFriendObserver(class AUAEPlayerController* InController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.DebugEnterFriendObserver");

	AUAEGameMode_DebugEnterFriendObserver_Params params;
	params.InController = InController;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.CreateDynamicBuildingGroups
// ()
// Parameters:
// struct FVector                 Offset                         (Parm, IsPlainOldData)

void AUAEGameMode::CreateDynamicBuildingGroups(const struct FVector& Offset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.CreateDynamicBuildingGroups");

	AUAEGameMode_CreateDynamicBuildingGroups_Params params;
	params.Offset = Offset;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Gameplay.UAEGameMode.CollectReportedEventDataCallback__DelegateSignature
// ()
// Parameters:
// class AUAEGameMode*            UAEGameMode                    (Parm, ZeroConstructor, IsPlainOldData)
// class AUAEPlayerController*    UAEPlayerController            (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  EventId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FCollectedEventData     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCollectedEventData AUAEGameMode::CollectReportedEventDataCallback__DelegateSignature(class AUAEGameMode* UAEGameMode, class AUAEPlayerController* UAEPlayerController, unsigned char EventId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Gameplay.UAEGameMode.CollectReportedEventDataCallback__DelegateSignature");

	AUAEGameMode_CollectReportedEventDataCallback__DelegateSignature_Params params;
	params.UAEGameMode = UAEGameMode;
	params.UAEPlayerController = UAEPlayerController;
	params.EventId = EventId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.ChangeName
// ()
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 NewName                        (Parm, ZeroConstructor)
// bool                           bNameChange                    (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::ChangeName(class AController* Controller, const struct FString& NewName, bool bNameChange)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.ChangeName");

	AUAEGameMode_ChangeName_Params params;
	params.Controller = Controller;
	params.NewName = NewName;
	params.bNameChange = bNameChange;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.AddAirDropBox
// ()
// Parameters:
// int                            boxId                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 pos                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AUAEGameMode::AddAirDropBox(int boxId, const struct FVector& pos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.AddAirDropBox");

	AUAEGameMode_AddAirDropBox_Params params;
	params.boxId = boxId;
	params.pos = pos;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameState.SendLuaDSToClient
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AUAEGameState::SendLuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameState.SendLuaDSToClient");

	AUAEGameState_SendLuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameState.RPC_LuaDSToClient
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AUAEGameState::RPC_LuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameState.RPC_LuaDSToClient");

	AUAEGameState_RPC_LuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameState.CheckDSSwitchOpen
// ()
// Parameters:
// int                            SwitchId                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEGameState::CheckDSSwitchOpen(int SwitchId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameState.CheckDSSwitchOpen");

	AUAEGameState_CheckDSSwitchOpen_Params params;
	params.SwitchId = SwitchId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerState.SetGVMemberIDServerCall
// ()
// Parameters:
// int                            memberID                       (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::SetGVMemberIDServerCall(int memberID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.SetGVMemberIDServerCall");

	AUAEPlayerState_SetGVMemberIDServerCall_Params params;
	params.memberID = memberID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.SetGVMemberID
// ()
// Parameters:
// int                            memberID                       (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::SetGVMemberID(int memberID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.SetGVMemberID");

	AUAEPlayerState_SetGVMemberID_Params params;
	params.memberID = memberID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.SetDeliveryResult
// ()
// Parameters:
// uint32_t                       InDeliverPlayerKey             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInSuccess                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            EventTypeId                    (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::SetDeliveryResult(uint32_t InDeliverPlayerKey, bool bInSuccess, int EventTypeId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.SetDeliveryResult");

	AUAEPlayerState_SetDeliveryResult_Params params;
	params.InDeliverPlayerKey = InDeliverPlayerKey;
	params.bInSuccess = bInSuccess;
	params.EventTypeId = EventTypeId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.SendLuaDSToClient
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AUAEPlayerState::SendLuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.SendLuaDSToClient");

	AUAEPlayerState_SendLuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.RPC_ServerAddGeneralCount
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            InCount                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::RPC_ServerAddGeneralCount(int ID, int InCount, bool bReset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.RPC_ServerAddGeneralCount");

	AUAEPlayerState_RPC_ServerAddGeneralCount_Params params;
	params.ID = ID;
	params.InCount = InCount;
	params.bReset = bReset;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.RPC_LuaDSToClient
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AUAEPlayerState::RPC_LuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.RPC_LuaDSToClient");

	AUAEPlayerState_RPC_LuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.ReportTaskExtInfo
// ()
// Parameters:
// int                            TaskId                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ExtInfo                        (Parm, ZeroConstructor)

void AUAEPlayerState::ReportTaskExtInfo(int TaskId, const struct FString& ExtInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportTaskExtInfo");

	AUAEPlayerState_ReportTaskExtInfo_Params params;
	params.TaskId = TaskId;
	params.ExtInfo = ExtInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.ReportTaskData
// ()
// Parameters:
// int                            TaskId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            process                        (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::ReportTaskData(int TaskId, int process)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportTaskData");

	AUAEPlayerState_ReportTaskData_Params params;
	params.TaskId = TaskId;
	params.process = process;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.ReportSpecialCollection
// ()
// Parameters:
// int                            ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::ReportSpecialCollection(int ItemID, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportSpecialCollection");

	AUAEPlayerState_ReportSpecialCollection_Params params;
	params.ItemID = ItemID;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.ReportSecretAreaID
// ()
// Parameters:
// int                            SecretAreaID                   (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::ReportSecretAreaID(int SecretAreaID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportSecretAreaID");

	AUAEPlayerState_ReportSecretAreaID_Params params;
	params.SecretAreaID = SecretAreaID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.ReportLikeTeammate
// ()
// Parameters:
// int64_t                        BeLikeUID                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            LikeType                       (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::ReportLikeTeammate(int64_t BeLikeUID, int LikeType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLikeTeammate");

	AUAEPlayerState_ReportLikeTeammate_Params params;
	params.BeLikeUID = BeLikeUID;
	params.LikeType = LikeType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.ReportLikeSwitch
// ()
// Parameters:
// int                            SwitchSetting                  (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::ReportLikeSwitch(int SwitchSetting)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLikeSwitch");

	AUAEPlayerState_ReportLikeSwitch_Params params;
	params.SwitchSetting = SwitchSetting;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.ReportLikeSelf
// ()
// Parameters:
// int                            LikeType                       (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::ReportLikeSelf(int LikeType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLikeSelf");

	AUAEPlayerState_ReportLikeSelf_Params params;
	params.LikeType = LikeType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.ReportLandLocType
// ()
// Parameters:
// int                            TouchDownLocType               (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::ReportLandLocType(int TouchDownLocType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLandLocType");

	AUAEPlayerState_ReportLandLocType_Params params;
	params.TouchDownLocType = TouchDownLocType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.ReportLandAreaList
// ()
// Parameters:
// TArray<int>                    TouchDownAreaIDs               (Parm, OutParm, ZeroConstructor)

void AUAEPlayerState::ReportLandAreaList(TArray<int>* TouchDownAreaIDs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLandAreaList");

	AUAEPlayerState_ReportLandAreaList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TouchDownAreaIDs != nullptr)
		*TouchDownAreaIDs = params.TouchDownAreaIDs;
}


// Function Gameplay.UAEPlayerState.ReportLandArea
// ()
// Parameters:
// int                            TouchDownArea                  (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::ReportLandArea(int TouchDownArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLandArea");

	AUAEPlayerState_ReportLandArea_Params params;
	params.TouchDownArea = TouchDownArea;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.ReportLabelCheck
// ()
// Parameters:
// int                            TeammateUID                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::ReportLabelCheck(int TeammateUID, int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLabelCheck");

	AUAEPlayerState_ReportLabelCheck_Params params;
	params.TeammateUID = TeammateUID;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.RecordUseHelicoper
// ()
// Parameters:
// uint32_t                       UseHelicoperId                 (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::RecordUseHelicoper(uint32_t UseHelicoperId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.RecordUseHelicoper");

	AUAEPlayerState_RecordUseHelicoper_Params params;
	params.UseHelicoperId = UseHelicoperId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.OnRepCampIDBP
// ()

void AUAEPlayerState::OnRepCampIDBP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRepCampIDBP");

	AUAEPlayerState_OnRepCampIDBP_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.OnRep_VeteranRecruitIndex
// ()

void AUAEPlayerState::OnRep_VeteranRecruitIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_VeteranRecruitIndex");

	AUAEPlayerState_OnRep_VeteranRecruitIndex_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.OnRep_UpdateKillMonsterNum
// ()

void AUAEPlayerState::OnRep_UpdateKillMonsterNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_UpdateKillMonsterNum");

	AUAEPlayerState_OnRep_UpdateKillMonsterNum_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.OnRep_UID
// ()

void AUAEPlayerState::OnRep_UID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_UID");

	AUAEPlayerState_OnRep_UID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.OnRep_TeamID
// ()

void AUAEPlayerState::OnRep_TeamID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_TeamID");

	AUAEPlayerState_OnRep_TeamID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.OnRep_RescueTimesChange
// ()

void AUAEPlayerState::OnRep_RescueTimesChange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_RescueTimesChange");

	AUAEPlayerState_OnRep_RescueTimesChange_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.OnRep_PlayerKillsChange
// ()

void AUAEPlayerState::OnRep_PlayerKillsChange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_PlayerKillsChange");

	AUAEPlayerState_OnRep_PlayerKillsChange_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.OnRep_PlayerKey
// ()

void AUAEPlayerState::OnRep_PlayerKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_PlayerKey");

	AUAEPlayerState_OnRep_PlayerKey_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.OnRep_MLAIDisplayUID
// ()

void AUAEPlayerState::OnRep_MLAIDisplayUID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_MLAIDisplayUID");

	AUAEPlayerState_OnRep_MLAIDisplayUID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.OnRep_MatchLabel
// ()

void AUAEPlayerState::OnRep_MatchLabel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_MatchLabel");

	AUAEPlayerState_OnRep_MatchLabel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.OnRep_CollectItemRecord
// ()

void AUAEPlayerState::OnRep_CollectItemRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_CollectItemRecord");

	AUAEPlayerState_OnRep_CollectItemRecord_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.OnRep_CampID
// ()

void AUAEPlayerState::OnRep_CampID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_CampID");

	AUAEPlayerState_OnRep_CampID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.OnRep_AliasInfo
// ()

void AUAEPlayerState::OnRep_AliasInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_AliasInfo");

	AUAEPlayerState_OnRep_AliasInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.OnClientVeteranRecruitIndexUpdated
// ()

void AUAEPlayerState::OnClientVeteranRecruitIndexUpdated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnClientVeteranRecruitIndexUpdated");

	AUAEPlayerState_OnClientVeteranRecruitIndexUpdated_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.IsSpecialPickItemCollectionCompleted
// ()
// Parameters:
// int                            ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerState::IsSpecialPickItemCollectionCompleted(int ItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.IsSpecialPickItemCollectionCompleted");

	AUAEPlayerState_IsSpecialPickItemCollectionCompleted_Params params;
	params.ItemID = ItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerState.IsSpecialPickItem
// ()
// Parameters:
// int                            ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerState::IsSpecialPickItem(int ItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.IsSpecialPickItem");

	AUAEPlayerState_IsSpecialPickItem_Params params;
	params.ItemID = ItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerState.IsNearDeathDamageInfoValid
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerState::IsNearDeathDamageInfoValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.IsNearDeathDamageInfoValid");

	AUAEPlayerState_IsNearDeathDamageInfoValid_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerState.IsItemForbidMerge
// ()
// Parameters:
// int                            ItemResId                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerState::IsItemForbidMerge(int ItemResId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.IsItemForbidMerge");

	AUAEPlayerState_IsItemForbidMerge_Params params;
	params.ItemResId = ItemResId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerState.IsDeathDamageInfoValid
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerState::IsDeathDamageInfoValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.IsDeathDamageInfoValid");

	AUAEPlayerState_IsDeathDamageInfoValid_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerState.GetWeaponRecordData
// ()
// Parameters:
// struct FOnePlayerWeapon        OutWeaponInfo                  (Parm, OutParm)

void AUAEPlayerState::GetWeaponRecordData(struct FOnePlayerWeapon* OutWeaponInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetWeaponRecordData");

	AUAEPlayerState_GetWeaponRecordData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutWeaponInfo != nullptr)
		*OutWeaponInfo = params.OutWeaponInfo;
}


// Function Gameplay.UAEPlayerState.GetVeteranPlayerLevel
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEPlayerState::GetVeteranPlayerLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetVeteranPlayerLevel");

	AUAEPlayerState_GetVeteranPlayerLevel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerState.GetUserIDByMemberID
// ()
// Parameters:
// int                            memberID                       (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t AUAEPlayerState::GetUserIDByMemberID(int memberID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetUserIDByMemberID");

	AUAEPlayerState_GetUserIDByMemberID_Params params;
	params.memberID = memberID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerState.GetUIDString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AUAEPlayerState::GetUIDString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetUIDString");

	AUAEPlayerState_GetUIDString_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerState.GetTeammateBattleResultData
// ()
// Parameters:
// struct FGameModeTeammateBattleResultData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameModeTeammateBattleResultData AUAEPlayerState::GetTeammateBattleResultData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetTeammateBattleResultData");

	AUAEPlayerState_GetTeammateBattleResultData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerState.GetTeamId
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEPlayerState::GetTeamId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetTeamId");

	AUAEPlayerState_GetTeamId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerState.GetRank
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEPlayerState::GetRank()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetRank");

	AUAEPlayerState_GetRank_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerState.GetPlayerKey
// ()
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t AUAEPlayerState::GetPlayerKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetPlayerKey");

	AUAEPlayerState_GetPlayerKey_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerState.GetPlayerBattleResultData_SuperCold
// ()
// Parameters:
// struct FGameModePlayerBattleResultData_SuperCold ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameModePlayerBattleResultData_SuperCold AUAEPlayerState::GetPlayerBattleResultData_SuperCold()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetPlayerBattleResultData_SuperCold");

	AUAEPlayerState_GetPlayerBattleResultData_SuperCold_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerState.GetPlayerBattleResultData
// ()
// Parameters:
// struct FGameModePlayerBattleResultData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameModePlayerBattleResultData AUAEPlayerState::GetPlayerBattleResultData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetPlayerBattleResultData");

	AUAEPlayerState_GetPlayerBattleResultData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerState.GetMentorPlayerType
// ()
// Parameters:
// EMentorPlayerType              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMentorPlayerType AUAEPlayerState::GetMentorPlayerType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetMentorPlayerType");

	AUAEPlayerState_GetMentorPlayerType_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerState.ForceUpdateCampCharacterList
// ()

void AUAEPlayerState::ForceUpdateCampCharacterList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ForceUpdateCampCharacterList");

	AUAEPlayerState_ForceUpdateCampCharacterList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.CopyNearDeathDamageInfo
// ()

void AUAEPlayerState::CopyNearDeathDamageInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.CopyNearDeathDamageInfo");

	AUAEPlayerState_CopyNearDeathDamageInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.CopyDeathDamageInfo
// ()

void AUAEPlayerState::CopyDeathDamageInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.CopyDeathDamageInfo");

	AUAEPlayerState_CopyDeathDamageInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.ClearTlogData
// ()

void AUAEPlayerState::ClearTlogData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ClearTlogData");

	AUAEPlayerState_ClearTlogData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.ClearKillNum
// ()

void AUAEPlayerState::ClearKillNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ClearKillNum");

	AUAEPlayerState_ClearKillNum_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.ChangeCollectItemRecord
// ()
// Parameters:
// int                            InItemID                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InNewState                     (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::ChangeCollectItemRecord(int InItemID, bool InNewState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ChangeCollectItemRecord");

	AUAEPlayerState_ChangeCollectItemRecord_Params params;
	params.InItemID = InItemID;
	params.InNewState = InNewState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.AddGeneralCount
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            InCount                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::AddGeneralCount(int ID, int InCount, bool bReset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.AddGeneralCount");

	AUAEPlayerState_AddGeneralCount_Params params;
	params.ID = ID;
	params.InCount = InCount;
	params.bReset = bReset;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.AddEventCount
// ()
// Parameters:
// unsigned char                  EventId                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InCount                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::AddEventCount(unsigned char EventId, int InCount, bool bReset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.AddEventCount");

	AUAEPlayerState_AddEventCount_Params params;
	params.EventId = EventId;
	params.InCount = InCount;
	params.bReset = bReset;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.UseingWeaponScheme
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::UseingWeaponScheme()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.UseingWeaponScheme");

	AUAEPlayerController_UseingWeaponScheme_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.TestShowLongTimeNoOperation
// ()

void AUAEPlayerController::TestShowLongTimeNoOperation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.TestShowLongTimeNoOperation");

	AUAEPlayerController_TestShowLongTimeNoOperation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.TestShowConfirmDialogOfMisKill
// ()

void AUAEPlayerController::TestShowConfirmDialogOfMisKill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.TestShowConfirmDialogOfMisKill");

	AUAEPlayerController_TestShowConfirmDialogOfMisKill_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.TestCastUIMsgWithPara
// ()
// Parameters:
// struct FString                 strMsg                         (Parm, ZeroConstructor)
// struct FString                 module                         (Parm, ZeroConstructor)
// int                            TestID                         (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::TestCastUIMsgWithPara(const struct FString& strMsg, const struct FString& module, int TestID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.TestCastUIMsgWithPara");

	AUAEPlayerController_TestCastUIMsgWithPara_Params params;
	params.strMsg = strMsg;
	params.module = module;
	params.TestID = TestID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.SyncDailyTaskStoreInfo
// ()
// Parameters:
// TArray<struct FDailyTaskStoreInfo> NewDailyTaskStoreList          (Parm, ZeroConstructor)

void AUAEPlayerController::SyncDailyTaskStoreInfo(TArray<struct FDailyTaskStoreInfo> NewDailyTaskStoreList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SyncDailyTaskStoreInfo");

	AUAEPlayerController_SyncDailyTaskStoreInfo_Params params;
	params.NewDailyTaskStoreList = NewDailyTaskStoreList;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.SetUsedSimulationCVar
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::SetUsedSimulationCVar(bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SetUsedSimulationCVar");

	AUAEPlayerController_SetUsedSimulationCVar_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.SetTargetMsgReceiveDelegate
// ()
// Parameters:
// class UGameInstance*           InGameInstance                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         InDelegate                     (Parm, ZeroConstructor)

void AUAEPlayerController::SetTargetMsgReceiveDelegate(class UGameInstance* InGameInstance, const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SetTargetMsgReceiveDelegate");

	AUAEPlayerController_SetTargetMsgReceiveDelegate_Params params;
	params.InGameInstance = InGameInstance;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.SetPanels
// ()
// Parameters:
// TArray<class UUAEUserWidget*>  panels                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AUAEPlayerController::SetPanels(TArray<class UUAEUserWidget*> panels)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SetPanels");

	AUAEPlayerController_SetPanels_Params params;
	params.panels = panels;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.SetIsInPetSpectator
// ()
// Parameters:
// bool                           inIsInPetSpectator             (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::SetIsInPetSpectator(bool inIsInPetSpectator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SetIsInPetSpectator");

	AUAEPlayerController_SetIsInPetSpectator_Params params;
	params.inIsInPetSpectator = inIsInPetSpectator;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.SetDSMsgReceiveDelegate
// ()
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, ZeroConstructor)

void AUAEPlayerController::SetDSMsgReceiveDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SetDSMsgReceiveDelegate");

	AUAEPlayerController_SetDSMsgReceiveDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.SetClientMsgReceiveDelegate
// ()
// Parameters:
// class UGameInstance*           InGameInstance                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         InDelegate                     (Parm, ZeroConstructor)

void AUAEPlayerController::SetClientMsgReceiveDelegate(class UGameInstance* InGameInstance, const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SetClientMsgReceiveDelegate");

	AUAEPlayerController_SetClientMsgReceiveDelegate_Params params;
	params.InGameInstance = InGameInstance;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ServerSetVoiceId
// ()
// Parameters:
// int                            VoiceID                        (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::ServerSetVoiceId(int VoiceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerSetVoiceId");

	AUAEPlayerController_ServerSetVoiceId_Params params;
	params.VoiceID = VoiceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ServerKickSelf
// ()

void AUAEPlayerController::ServerKickSelf()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerKickSelf");

	AUAEPlayerController_ServerKickSelf_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ServerGotoSpectating
// ()
// Parameters:
// class APawn*                   ViewTarget                     (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::ServerGotoSpectating(class APawn* ViewTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerGotoSpectating");

	AUAEPlayerController_ServerGotoSpectating_Params params;
	params.ViewTarget = ViewTarget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ServerExitGame
// ()

void AUAEPlayerController::ServerExitGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerExitGame");

	AUAEPlayerController_ServerExitGame_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ServerAcknowledgeReconnection_2
// ()
// Parameters:
// uint32_t                       Token                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::ServerAcknowledgeReconnection_2(uint32_t Token)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerAcknowledgeReconnection_2");

	AUAEPlayerController_ServerAcknowledgeReconnection_2_Params params;
	params.Token = Token;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.SendNetObjectPathNameMappingHashToServer
// ()
// Parameters:
// uint32_t                       VersionHash                    (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::SendNetObjectPathNameMappingHashToServer(uint32_t VersionHash)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SendNetObjectPathNameMappingHashToServer");

	AUAEPlayerController_SendNetObjectPathNameMappingHashToServer_Params params;
	params.VersionHash = VersionHash;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.SendLuaDSToClient
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AUAEPlayerController::SendLuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SendLuaDSToClient");

	AUAEPlayerController_SendLuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.SendLuaClientToDS
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AUAEPlayerController::SendLuaClientToDS(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SendLuaClientToDS");

	AUAEPlayerController_SendLuaClientToDS_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.RPC_Server_SyncClientNetInfo
// ()
// Parameters:
// int                            InLoss                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutLoss                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InNetworkType                  (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::RPC_Server_SyncClientNetInfo(int InLoss, int OutLoss, int InNetworkType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.RPC_Server_SyncClientNetInfo");

	AUAEPlayerController_RPC_Server_SyncClientNetInfo_Params params;
	params.InLoss = InLoss;
	params.OutLoss = OutLoss;
	params.InNetworkType = InNetworkType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.RPC_Server_ReportClientNetInfo
// ()
// Parameters:
// int                            AvgPing                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxPing                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            MinPing                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            LostPackRate                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            AvgNoOutlier                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            StdNoOutlier                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumNoOutlier                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            InLoss                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutLoss                        (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::RPC_Server_ReportClientNetInfo(int AvgPing, int MaxPing, int MinPing, int LostPackRate, int AvgNoOutlier, int StdNoOutlier, int NumNoOutlier, int InLoss, int OutLoss)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.RPC_Server_ReportClientNetInfo");

	AUAEPlayerController_RPC_Server_ReportClientNetInfo_Params params;
	params.AvgPing = AvgPing;
	params.MaxPing = MaxPing;
	params.MinPing = MinPing;
	params.LostPackRate = LostPackRate;
	params.AvgNoOutlier = AvgNoOutlier;
	params.StdNoOutlier = StdNoOutlier;
	params.NumNoOutlier = NumNoOutlier;
	params.InLoss = InLoss;
	params.OutLoss = OutLoss;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.RPC_LuaDSToClient
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AUAEPlayerController::RPC_LuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.RPC_LuaDSToClient");

	AUAEPlayerController_RPC_LuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.RPC_LuaClientToDS
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AUAEPlayerController::RPC_LuaClientToDS(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.RPC_LuaClientToDS");

	AUAEPlayerController_RPC_LuaClientToDS_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.Respawn
// ()

void AUAEPlayerController::Respawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.Respawn");

	AUAEPlayerController_Respawn_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ResetUsedSimulationCVar
// ()

void AUAEPlayerController::ResetUsedSimulationCVar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ResetUsedSimulationCVar");

	AUAEPlayerController_ResetUsedSimulationCVar_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ReleaseInGameUI
// ()

void AUAEPlayerController::ReleaseInGameUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ReleaseInGameUI");

	AUAEPlayerController_ReleaseInGameUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ReceivePostLoginInit
// ()

void AUAEPlayerController::ReceivePostLoginInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ReceivePostLoginInit");

	AUAEPlayerController_ReceivePostLoginInit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.PrintStatistics
// ()

void AUAEPlayerController::PrintStatistics()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.PrintStatistics");

	AUAEPlayerController_PrintStatistics_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.PlayerStartIDReceived
// ()

void AUAEPlayerController::PlayerStartIDReceived()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.PlayerStartIDReceived");

	AUAEPlayerController_PlayerStartIDReceived_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_WeaponAvatarDataList
// ()

void AUAEPlayerController::OnRep_WeaponAvatarDataList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_WeaponAvatarDataList");

	AUAEPlayerController_OnRep_WeaponAvatarDataList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_UsingNetObjectPathNameMappingCSV
// ()

void AUAEPlayerController::OnRep_UsingNetObjectPathNameMappingCSV()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_UsingNetObjectPathNameMappingCSV");

	AUAEPlayerController_OnRep_UsingNetObjectPathNameMappingCSV_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_UsedSimulation
// ()

void AUAEPlayerController::OnRep_UsedSimulation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_UsedSimulation");

	AUAEPlayerController_OnRep_UsedSimulation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_PveLevel
// ()

void AUAEPlayerController::OnRep_PveLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_PveLevel");

	AUAEPlayerController_OnRep_PveLevel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_PlayerOBInfoList
// ()

void AUAEPlayerController::OnRep_PlayerOBInfoList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_PlayerOBInfoList");

	AUAEPlayerController_OnRep_PlayerOBInfoList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_LobbyWatchInfo
// ()

void AUAEPlayerController::OnRep_LobbyWatchInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_LobbyWatchInfo");

	AUAEPlayerController_OnRep_LobbyWatchInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_LastGameResultTime
// ()

void AUAEPlayerController::OnRep_LastGameResultTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_LastGameResultTime");

	AUAEPlayerController_OnRep_LastGameResultTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_IsSpectatingEnemy
// ()

void AUAEPlayerController::OnRep_IsSpectatingEnemy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_IsSpectatingEnemy");

	AUAEPlayerController_OnRep_IsSpectatingEnemy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_IsSpectating
// ()

void AUAEPlayerController::OnRep_IsSpectating()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_IsSpectating");

	AUAEPlayerController_OnRep_IsSpectating_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_IsObserver
// ()

void AUAEPlayerController::OnRep_IsObserver()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_IsObserver");

	AUAEPlayerController_OnRep_IsObserver_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_InitialWeaponSchemeInfo
// ()

void AUAEPlayerController::OnRep_InitialWeaponSchemeInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_InitialWeaponSchemeInfo");

	AUAEPlayerController_OnRep_InitialWeaponSchemeInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_InitialEquipmentAvatar
// ()

void AUAEPlayerController::OnRep_InitialEquipmentAvatar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_InitialEquipmentAvatar");

	AUAEPlayerController_OnRep_InitialEquipmentAvatar_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_InitialConsumableAvatar
// ()

void AUAEPlayerController::OnRep_InitialConsumableAvatar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_InitialConsumableAvatar");

	AUAEPlayerController_OnRep_InitialConsumableAvatar_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_FriendObservers
// ()

void AUAEPlayerController::OnRep_FriendObservers()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_FriendObservers");

	AUAEPlayerController_OnRep_FriendObservers_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_CurWeaponSchemeIndex
// ()

void AUAEPlayerController::OnRep_CurWeaponSchemeIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_CurWeaponSchemeIndex");

	AUAEPlayerController_OnRep_CurWeaponSchemeIndex_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_bRoomOwner
// ()

void AUAEPlayerController::OnRep_bRoomOwner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_bRoomOwner");

	AUAEPlayerController_OnRep_bRoomOwner_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnNetObjectPathNameMappingTableAsyncLoad
// ()

void AUAEPlayerController::OnNetObjectPathNameMappingTableAsyncLoad()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnNetObjectPathNameMappingTableAsyncLoad");

	AUAEPlayerController_OnNetObjectPathNameMappingTableAsyncLoad_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.NotifyEnterBattle
// ()

void AUAEPlayerController::NotifyEnterBattle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.NotifyEnterBattle");

	AUAEPlayerController_NotifyEnterBattle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.KickSelf
// ()

void AUAEPlayerController::KickSelf()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.KickSelf");

	AUAEPlayerController_KickSelf_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.IsTeammateSpectator
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsTeammateSpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsTeammateSpectator");

	AUAEPlayerController_IsTeammateSpectator_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.IsSpectatorOrDemoPlayer
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsSpectatorOrDemoPlayer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsSpectatorOrDemoPlayer");

	AUAEPlayerController_IsSpectatorOrDemoPlayer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.IsSpectator
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsSpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsSpectator");

	AUAEPlayerController_IsSpectator_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.IsRoomMode
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsRoomMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsRoomMode");

	AUAEPlayerController_IsRoomMode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.IsPureSpectator
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsPureSpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsPureSpectator");

	AUAEPlayerController_IsPureSpectator_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.IsObserver
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsObserver()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsObserver");

	AUAEPlayerController_IsObserver_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.IsInSpectatingEnemy
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsInSpectatingEnemy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsInSpectatingEnemy");

	AUAEPlayerController_IsInSpectatingEnemy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.IsInSpectating
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsInSpectating()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsInSpectating");

	AUAEPlayerController_IsInSpectating_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.IsInPetSpectator
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsInPetSpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsInPetSpectator");

	AUAEPlayerController_IsInPetSpectator_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.IsHawkEyeSpectator
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsHawkEyeSpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsHawkEyeSpectator");

	AUAEPlayerController_IsHawkEyeSpectator_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.IsFriendOrEnemySpectator
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsFriendOrEnemySpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsFriendOrEnemySpectator");

	AUAEPlayerController_IsFriendOrEnemySpectator_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.IsFriendObserver
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsFriendObserver()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsFriendObserver");

	AUAEPlayerController_IsFriendObserver_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.IsExited
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsExited()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsExited");

	AUAEPlayerController_IsExited_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.IsDemoRecSpectator
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsDemoRecSpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsDemoRecSpectator");

	AUAEPlayerController_IsDemoRecSpectator_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.IsDemoPlaySpectator
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsDemoPlaySpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsDemoPlaySpectator");

	AUAEPlayerController_IsDemoPlaySpectator_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.IsDemoPlayGlobalObserver
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsDemoPlayGlobalObserver()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsDemoPlayGlobalObserver");

	AUAEPlayerController_IsDemoPlayGlobalObserver_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.IsDeathSpectator
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsDeathSpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsDeathSpectator");

	AUAEPlayerController_IsDeathSpectator_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.InitWithPlayerParams
// ()
// Parameters:
// struct FGameModePlayerParams   Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void AUAEPlayerController::InitWithPlayerParams(const struct FGameModePlayerParams& Params)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitWithPlayerParams");

	AUAEPlayerController_InitWithPlayerParams_Params params;
	params.Params = Params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.InitWeaponAvatarItems
// ()

void AUAEPlayerController::InitWeaponAvatarItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitWeaponAvatarItems");

	AUAEPlayerController_InitWeaponAvatarItems_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.InitVehicleMusicList
// ()

void AUAEPlayerController::InitVehicleMusicList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitVehicleMusicList");

	AUAEPlayerController_InitVehicleMusicList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.InitVehicleAvatarSkinList
// ()

void AUAEPlayerController::InitVehicleAvatarSkinList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitVehicleAvatarSkinList");

	AUAEPlayerController_InitVehicleAvatarSkinList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.InitVehicleAvatarList
// ()

void AUAEPlayerController::InitVehicleAvatarList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitVehicleAvatarList");

	AUAEPlayerController_InitVehicleAvatarList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.InitVehicleAdvanceAvatarList
// ()

void AUAEPlayerController::InitVehicleAdvanceAvatarList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitVehicleAdvanceAvatarList");

	AUAEPlayerController_InitVehicleAdvanceAvatarList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.InitIngameUI
// ()

void AUAEPlayerController::InitIngameUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitIngameUI");

	AUAEPlayerController_InitIngameUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.InitGrenadeAvatarList
// ()
// Parameters:
// bool                           ReInitial                      (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::InitGrenadeAvatarList(bool ReInitial)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitGrenadeAvatarList");

	AUAEPlayerController_InitGrenadeAvatarList_Params params;
	params.ReInitial = ReInitial;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.GotoSpectating
// ()
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEPlayerController::GotoSpectating(int PlayerID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GotoSpectating");

	AUAEPlayerController_GotoSpectating_Params params;
	params.PlayerID = PlayerID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.GetWeaponPandentReflect
// ()
// Parameters:
// int                            wraponID                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            pendantID                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::GetWeaponPandentReflect(int wraponID, int* pendantID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetWeaponPandentReflect");

	AUAEPlayerController_GetWeaponPandentReflect_Params params;
	params.wraponID = wraponID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (pendantID != nullptr)
		*pendantID = params.pendantID;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.GetWeaponAvatarItemId
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEPlayerController::GetWeaponAvatarItemId(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetWeaponAvatarItemId");

	AUAEPlayerController_GetWeaponAvatarItemId_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.GetVisibleLevelsLoadedName
// ()
// Parameters:
// TArray<struct FString>         VisibleLevels                  (Parm, OutParm, ZeroConstructor)

void AUAEPlayerController::GetVisibleLevelsLoadedName(TArray<struct FString>* VisibleLevels)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetVisibleLevelsLoadedName");

	AUAEPlayerController_GetVisibleLevelsLoadedName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (VisibleLevels != nullptr)
		*VisibleLevels = params.VisibleLevels;
}


// Function Gameplay.UAEPlayerController.GetLobbyWatchedPlayerKeyAsString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AUAEPlayerController::GetLobbyWatchedPlayerKeyAsString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetLobbyWatchedPlayerKeyAsString");

	AUAEPlayerController_GetLobbyWatchedPlayerKeyAsString_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.GetDailyTaskStoreInfoByTaskId
// ()
// Parameters:
// int                            TaskId                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDailyTaskStoreInfo     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDailyTaskStoreInfo AUAEPlayerController::GetDailyTaskStoreInfoByTaskId(int TaskId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetDailyTaskStoreInfoByTaskId");

	AUAEPlayerController_GetDailyTaskStoreInfoByTaskId_Params params;
	params.TaskId = TaskId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.GetCurrentWeaponSchemeMainSlotItemId
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEPlayerController::GetCurrentWeaponSchemeMainSlotItemId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetCurrentWeaponSchemeMainSlotItemId");

	AUAEPlayerController_GetCurrentWeaponSchemeMainSlotItemId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.GetCurrentOBPlayerKey
// ()
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t AUAEPlayerController::GetCurrentOBPlayerKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetCurrentOBPlayerKey");

	AUAEPlayerController_GetCurrentOBPlayerKey_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.GetCurrentOBPlayerInfoIndex
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEPlayerController::GetCurrentOBPlayerInfoIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetCurrentOBPlayerInfoIndex");

	AUAEPlayerController_GetCurrentOBPlayerInfoIndex_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.ForceNetReady
// ()

void AUAEPlayerController::ForceNetReady()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ForceNetReady");

	AUAEPlayerController_ForceNetReady_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ExitGame
// ()

void AUAEPlayerController::ExitGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ExitGame");

	AUAEPlayerController_ExitGame_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ExhaustCPU
// ()

void AUAEPlayerController::ExhaustCPU()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ExhaustCPU");

	AUAEPlayerController_ExhaustCPU_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ExecDSCommand
// ()
// Parameters:
// struct FString                 DSCommand                      (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AUAEPlayerController::ExecDSCommand(const struct FString& DSCommand)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ExecDSCommand");

	AUAEPlayerController_ExecDSCommand_Params params;
	params.DSCommand = DSCommand;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ExcuteIntRecord
// ()
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::ExcuteIntRecord(const struct FString& Key, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ExcuteIntRecord");

	AUAEPlayerController_ExcuteIntRecord_Params params;
	params.Key = Key;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ExcuteIntCounterRecord
// ()
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::ExcuteIntCounterRecord(const struct FString& Key, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ExcuteIntCounterRecord");

	AUAEPlayerController_ExcuteIntCounterRecord_Params params;
	params.Key = Key;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.EnableInGameUI
// ()

void AUAEPlayerController::EnableInGameUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.EnableInGameUI");

	AUAEPlayerController_EnableInGameUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.DumpUAENetActors
// ()

void AUAEPlayerController::DumpUAENetActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpUAENetActors");

	AUAEPlayerController_DumpUAENetActors_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.DumpRegions
// ()

void AUAEPlayerController::DumpRegions()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpRegions");

	AUAEPlayerController_DumpRegions_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.DumpNetActors
// ()

void AUAEPlayerController::DumpNetActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpNetActors");

	AUAEPlayerController_DumpNetActors_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.DumpCharacters
// ()

void AUAEPlayerController::DumpCharacters()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpCharacters");

	AUAEPlayerController_DumpCharacters_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.DumpAllUI
// ()

void AUAEPlayerController::DumpAllUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpAllUI");

	AUAEPlayerController_DumpAllUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.DumpAllObjects
// ()

void AUAEPlayerController::DumpAllObjects()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpAllObjects");

	AUAEPlayerController_DumpAllObjects_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.DumpAllActors
// ()

void AUAEPlayerController::DumpAllActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpAllActors");

	AUAEPlayerController_DumpAllActors_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.DoCrash
// ()

void AUAEPlayerController::DoCrash()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DoCrash");

	AUAEPlayerController_DoCrash_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.DisableInGameUI
// ()

void AUAEPlayerController::DisableInGameUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DisableInGameUI");

	AUAEPlayerController_DisableInGameUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.DelayEnterBattleCheck
// ()

void AUAEPlayerController::DelayEnterBattleCheck()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DelayEnterBattleCheck");

	AUAEPlayerController_DelayEnterBattleCheck_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.DealWithPickUpFailed
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)

void AUAEPlayerController::DealWithPickUpFailed(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DealWithPickUpFailed");

	AUAEPlayerController_DealWithPickUpFailed_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ClientShowTeammateEscapeNotice
// ()

void AUAEPlayerController::ClientShowTeammateEscapeNotice()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientShowTeammateEscapeNotice");

	AUAEPlayerController_ClientShowTeammateEscapeNotice_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsgWithStrings
// ()
// Parameters:
// struct FString                 strMsg                         (Parm, ZeroConstructor)
// struct FString                 module                         (Parm, ZeroConstructor)
// int                            TipsID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Param1                         (Parm, ZeroConstructor)
// struct FString                 Param2                         (Parm, ZeroConstructor)

void AUAEPlayerController::ClientRPC_CastUIMsgWithStrings(const struct FString& strMsg, const struct FString& module, int TipsID, const struct FString& Param1, const struct FString& Param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsgWithStrings");

	AUAEPlayerController_ClientRPC_CastUIMsgWithStrings_Params params;
	params.strMsg = strMsg;
	params.module = module;
	params.TipsID = TipsID;
	params.Param1 = Param1;
	params.Param2 = Param2;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsgParams
// ()
// Parameters:
// struct FString                 strMsg                         (Parm, ZeroConstructor)
// struct FString                 module                         (Parm, ZeroConstructor)
// int                            Type                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::ClientRPC_CastUIMsgParams(const struct FString& strMsg, const struct FString& module, int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsgParams");

	AUAEPlayerController_ClientRPC_CastUIMsgParams_Params params;
	params.strMsg = strMsg;
	params.module = module;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsg
// ()
// Parameters:
// struct FString                 strMsg                         (Parm, ZeroConstructor)
// struct FString                 module                         (Parm, ZeroConstructor)

void AUAEPlayerController::ClientRPC_CastUIMsg(const struct FString& strMsg, const struct FString& module)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsg");

	AUAEPlayerController_ClientRPC_CastUIMsg_Params params;
	params.strMsg = strMsg;
	params.module = module;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ClientInitPlayerOBInfoButton
// ()

void AUAEPlayerController::ClientInitPlayerOBInfoButton()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientInitPlayerOBInfoButton");

	AUAEPlayerController_ClientInitPlayerOBInfoButton_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ClientBroadcastRespawnComplete
// ()

void AUAEPlayerController::ClientBroadcastRespawnComplete()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientBroadcastRespawnComplete");

	AUAEPlayerController_ClientBroadcastRespawnComplete_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ClientBroadcastReconnectionSuccessful
// ()

void AUAEPlayerController::ClientBroadcastReconnectionSuccessful()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientBroadcastReconnectionSuccessful");

	AUAEPlayerController_ClientBroadcastReconnectionSuccessful_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ClientAcknowledgeReconnection_4
// ()
// Parameters:
// uint32_t                       Token                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::ClientAcknowledgeReconnection_4(uint32_t Token)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientAcknowledgeReconnection_4");

	AUAEPlayerController_ClientAcknowledgeReconnection_4_Params params;
	params.Token = Token;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.CheckPlayerOBInfoButtonInit
// ()

void AUAEPlayerController::CheckPlayerOBInfoButtonInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.CheckPlayerOBInfoButtonInit");

	AUAEPlayerController_CheckPlayerOBInfoButtonInit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.CheckAcknowledgedPawn
// ()
// Parameters:
// class APawn*                   InPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::CheckAcknowledgedPawn(class APawn* InPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.CheckAcknowledgedPawn");

	AUAEPlayerController_CheckAcknowledgedPawn_Params params;
	params.InPawn = InPawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.CastUIMsg
// ()
// Parameters:
// struct FString                 strMsg                         (Parm, ZeroConstructor)
// struct FString                 module                         (Parm, ZeroConstructor)

void AUAEPlayerController::CastUIMsg(const struct FString& strMsg, const struct FString& module)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.CastUIMsg");

	AUAEPlayerController_CastUIMsg_Params params;
	params.strMsg = strMsg;
	params.module = module;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.CanPickUpItem
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// EPickUpCheckResult             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPickUpCheckResult AUAEPlayerController::CanPickUpItem(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.CanPickUpItem");

	AUAEPlayerController_CanPickUpItem_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.BroadcastUIMessage
// ()
// Parameters:
// struct FString                 MessageName                    (Parm, ZeroConstructor)
// int                            TipsIDOrType                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Param1                         (Parm, ZeroConstructor)
// struct FString                 Param2                         (Parm, ZeroConstructor)

void AUAEPlayerController::BroadcastUIMessage(const struct FString& MessageName, int TipsIDOrType, const struct FString& Param1, const struct FString& Param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.BroadcastUIMessage");

	AUAEPlayerController_BroadcastUIMessage_Params params;
	params.MessageName = MessageName;
	params.TipsIDOrType = TipsIDOrType;
	params.Param1 = Param1;
	params.Param2 = Param2;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.BroadcastRespawnComplete
// ()

void AUAEPlayerController::BroadcastRespawnComplete()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.BroadcastRespawnComplete");

	AUAEPlayerController_BroadcastRespawnComplete_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEHouseActor.RecordBreakWindowTlog
// ()
// Parameters:
// class APlayerController*       EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)

void AUAEHouseActor::RecordBreakWindowTlog(class APlayerController* EventInstigator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEHouseActor.RecordBreakWindowTlog");

	AUAEHouseActor_RecordBreakWindowTlog_Params params;
	params.EventInstigator = EventInstigator;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEHouseActor.ProcessWindowCreateList
// ()

void AUAEHouseActor::ProcessWindowCreateList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEHouseActor.ProcessWindowCreateList");

	AUAEHouseActor_ProcessWindowCreateList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEHouseActor.OnRep_WindowList
// ()

void AUAEHouseActor::OnRep_WindowList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEHouseActor.OnRep_WindowList");

	AUAEHouseActor_OnRep_WindowList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEHouseActor.ClearWindowList
// ()

void AUAEHouseActor::ClearWindowList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEHouseActor.ClearWindowList");

	AUAEHouseActor_ClearWindowList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEHouseActor.BroadcastWindowRepDataUpdated
// ()
// Parameters:
// struct FUAEWindowRepData       InRepData                      (Parm)

void AUAEHouseActor::BroadcastWindowRepDataUpdated(const struct FUAEWindowRepData& InRepData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEHouseActor.BroadcastWindowRepDataUpdated");

	AUAEHouseActor_BroadcastWindowRepDataUpdated_Params params;
	params.InRepData = InRepData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.GroupSpotSceneComponent.SetGroupValid
// ()
// Parameters:
// bool                           Valid                          (Parm, ZeroConstructor, IsPlainOldData)

void UGroupSpotSceneComponent::SetGroupValid(bool Valid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GroupSpotSceneComponent.SetGroupValid");

	UGroupSpotSceneComponent_SetGroupValid_Params params;
	params.Valid = Valid;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.GroupSpotSceneComponent.IsValidGroup
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGroupSpotSceneComponent::IsValidGroup()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GroupSpotSceneComponent.IsValidGroup");

	UGroupSpotSceneComponent_IsValidGroup_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.GroupSpotSceneComponent.FindWorldCompositionID
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGroupSpotSceneComponent::FindWorldCompositionID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GroupSpotSceneComponent.FindWorldCompositionID");

	UGroupSpotSceneComponent_FindWorldCompositionID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.GroupSpotSceneComponent.DoPickUp
// ()

void UGroupSpotSceneComponent::DoPickUp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GroupSpotSceneComponent.DoPickUp");

	UGroupSpotSceneComponent_DoPickUp_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGroupSpotSceneComponent.SetGroupProperty
// ()
// Parameters:
// class UItemGeneratorComponent* Generator                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FSpotGroupProperty      Property                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemGroupSpotSceneComponent::SetGroupProperty(class UItemGeneratorComponent* Generator, const struct FSpotGroupProperty& Property)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.SetGroupProperty");

	UItemGroupSpotSceneComponent_SetGroupProperty_Params params;
	params.Generator = Generator;
	params.Property = Property;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGroupSpotSceneComponent.RepeatSpots
// ()

void UItemGroupSpotSceneComponent::RepeatSpots()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.RepeatSpots");

	UItemGroupSpotSceneComponent_RepeatSpots_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGroupSpotSceneComponent.RepeatSingleSpot
// ()
// Parameters:
// class UItemSpotSceneComponent* Spot                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemGroupSpotSceneComponent::RepeatSingleSpot(class UItemSpotSceneComponent* Spot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.RepeatSingleSpot");

	UItemGroupSpotSceneComponent_RepeatSingleSpot_Params params;
	params.Spot = Spot;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGroupSpotSceneComponent.RandomSpotByType
// ()
// Parameters:
// TEnumAsByte<ESpotType>         SpotType                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UItemSpotSceneComponent*> AllSpots                       (Parm, OutParm, ZeroConstructor)
// struct FSpotTypeProperty       Property                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemGroupSpotSceneComponent::RandomSpotByType(TEnumAsByte<ESpotType> SpotType, const struct FSpotTypeProperty& Property, TArray<class UItemSpotSceneComponent*>* AllSpots)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.RandomSpotByType");

	UItemGroupSpotSceneComponent_RandomSpotByType_Params params;
	params.SpotType = SpotType;
	params.Property = Property;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AllSpots != nullptr)
		*AllSpots = params.AllSpots;
}


// Function Gameplay.ItemGroupSpotSceneComponent.RandomSingleSpot
// ()
// Parameters:
// TArray<class UItemSpotSceneComponent*> Spots                          (Parm, OutParm, ZeroConstructor)
// struct FSpotTypeProperty       Property                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemGroupSpotSceneComponent::RandomSingleSpot(const struct FSpotTypeProperty& Property, TArray<class UItemSpotSceneComponent*>* Spots)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.RandomSingleSpot");

	UItemGroupSpotSceneComponent_RandomSingleSpot_Params params;
	params.Property = Property;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Spots != nullptr)
		*Spots = params.Spots;
}


// Function Gameplay.ItemGroupSpotSceneComponent.RandomRepeatGenerateItemCD
// ()
// Parameters:
// struct FSpotGroupProperty      GroupProperty                  (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UItemGroupSpotSceneComponent::RandomRepeatGenerateItemCD(const struct FSpotGroupProperty& GroupProperty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.RandomRepeatGenerateItemCD");

	UItemGroupSpotSceneComponent_RandomRepeatGenerateItemCD_Params params;
	params.GroupProperty = GroupProperty;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.SpotSceneComponent.SetSpotValid
// ()
// Parameters:
// bool                           Valid                          (Parm, ZeroConstructor, IsPlainOldData)

void USpotSceneComponent::SetSpotValid(bool Valid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.SetSpotValid");

	USpotSceneComponent_SetSpotValid_Params params;
	params.Valid = Valid;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.SpotSceneComponent.LineTraceSingle
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (ConstParm, Parm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, IsPlainOldData)
// bool                           bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpotSceneComponent::LineTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf, struct FHitResult* OutHit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.LineTraceSingle");

	USpotSceneComponent_LineTraceSingle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bIgnoreSelf = bIgnoreSelf;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Gameplay.SpotSceneComponent.IsSpotValid
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpotSceneComponent::IsSpotValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.IsSpotValid");

	USpotSceneComponent_IsSpotValid_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.SpotSceneComponent.GetRandomCategory
// ()
// Parameters:
// TArray<struct FSpotWeight>     SpotWeights                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USpotSceneComponent::GetRandomCategory(TArray<struct FSpotWeight> SpotWeights)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.GetRandomCategory");

	USpotSceneComponent_GetRandomCategory_Params params;
	params.SpotWeights = SpotWeights;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.SpotSceneComponent.GenerateSpot
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpotSceneComponent::GenerateSpot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.GenerateSpot");

	USpotSceneComponent_GenerateSpot_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.SpotSceneComponent.GenerateActor
// ()
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorLocation                  (Parm, OutParm, IsPlainOldData)
// struct FRotator                ActorRotator                   (Parm, OutParm, IsPlainOldData)
// ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USpotSceneComponent::GenerateActor(class UClass* ActorClass, ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod, struct FVector* ActorLocation, struct FRotator* ActorRotator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.GenerateActor");

	USpotSceneComponent_GenerateActor_Params params;
	params.ActorClass = ActorClass;
	params.SpawnActorCollisionHandlingMethod = SpawnActorCollisionHandlingMethod;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ActorLocation != nullptr)
		*ActorLocation = params.ActorLocation;
	if (ActorRotator != nullptr)
		*ActorRotator = params.ActorRotator;

	return params.ReturnValue;
}


// Function Gameplay.ItemSpotSceneComponent.SetSpotProperty
// ()
// Parameters:
// int                            CompositionID                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESpotGroupType>    GroupType                      (Parm, ZeroConstructor, IsPlainOldData)
// class UItemGeneratorComponent* Generator                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FSpotTypeProperty       Property                       (ConstParm, Parm, OutParm, ReferenceParm)
// class UGroupSpotSceneComponent* Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           RepeatGenerateItem             (Parm, ZeroConstructor, IsPlainOldData)

void UItemSpotSceneComponent::SetSpotProperty(int CompositionID, TEnumAsByte<ESpotGroupType> GroupType, class UItemGeneratorComponent* Generator, const struct FSpotTypeProperty& Property, class UGroupSpotSceneComponent* Component, bool RepeatGenerateItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.SetSpotProperty");

	UItemSpotSceneComponent_SetSpotProperty_Params params;
	params.CompositionID = CompositionID;
	params.GroupType = GroupType;
	params.Generator = Generator;
	params.Property = Property;
	params.Component = Component;
	params.RepeatGenerateItem = RepeatGenerateItem;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemSpotSceneComponent.RepeatSpotProperty
// ()
// Parameters:
// struct FSpotTypeProperty       Property                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemSpotSceneComponent::RepeatSpotProperty(const struct FSpotTypeProperty& Property)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.RepeatSpotProperty");

	UItemSpotSceneComponent_RepeatSpotProperty_Params params;
	params.Property = Property;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemSpotSceneComponent.GenerateSpot
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemSpotSceneComponent::GenerateSpot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.GenerateSpot");

	UItemSpotSceneComponent_GenerateSpot_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemSpotSceneComponent.GenerateItems
// ()
// Parameters:
// TArray<struct FItemGenerateSpawnClass> AllItemClass                   (Parm, OutParm, ZeroConstructor)

void UItemSpotSceneComponent::GenerateItems(TArray<struct FItemGenerateSpawnClass>* AllItemClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.GenerateItems");

	UItemSpotSceneComponent_GenerateItems_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AllItemClass != nullptr)
		*AllItemClass = params.AllItemClass;
}


// Function Gameplay.ItemSpotSceneComponent.DoPickUp
// ()
// Parameters:
// struct FString                 ItemValue                      (Parm, ZeroConstructor)
// struct FString                 ItemCategory                   (Parm, ZeroConstructor)

void UItemSpotSceneComponent::DoPickUp(const struct FString& ItemValue, const struct FString& ItemCategory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.DoPickUp");

	UItemSpotSceneComponent_DoPickUp_Params params;
	params.ItemValue = ItemValue;
	params.ItemCategory = ItemCategory;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemSpotSceneComponent.CountCacheItemValeCategory
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UItemSpotSceneComponent::CountCacheItemValeCategory()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.CountCacheItemValeCategory");

	UItemSpotSceneComponent_CountCacheItemValeCategory_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemSpotSceneComponent.ClearCacheItems
// ()

void UItemSpotSceneComponent::ClearCacheItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.ClearCacheItems");

	UItemSpotSceneComponent_ClearCacheItems_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEGameplayStatics.GetGameBridge
// ()
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayDelegates*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayDelegates* UUAEGameplayStatics::GetGameBridge(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameplayStatics.GetGameBridge");

	UUAEGameplayStatics_GetGameBridge_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEProjectile.WorkAsBuffApplierEvent
// ()
// Parameters:
// struct FString                 BuffName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class APawn*                   BuffTarget                     (Parm, ZeroConstructor, IsPlainOldData)

void AUAEProjectile::WorkAsBuffApplierEvent(const struct FString& BuffName, class APawn* BuffTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.WorkAsBuffApplierEvent");

	AUAEProjectile_WorkAsBuffApplierEvent_Params params;
	params.BuffName = BuffName;
	params.BuffTarget = BuffTarget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEProjectile.TimeoutExplodeMulticast_CPP
// ()

void AUAEProjectile::TimeoutExplodeMulticast_CPP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.TimeoutExplodeMulticast_CPP");

	AUAEProjectile_TimeoutExplodeMulticast_CPP_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEProjectile.TimeoutExplodeMulticast_BPEvent
// ()

void AUAEProjectile::TimeoutExplodeMulticast_BPEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.TimeoutExplodeMulticast_BPEvent");

	AUAEProjectile_TimeoutExplodeMulticast_BPEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEProjectile.SetActorInitialRelativeOffset
// ()
// Parameters:
// struct FVector                 Offset                         (Parm, IsPlainOldData)
// struct FVector                 StandOffset                    (Parm, IsPlainOldData)
// struct FVector                 CrouchOffset                   (Parm, IsPlainOldData)
// struct FVector                 ProneOffset                    (Parm, IsPlainOldData)
// TEnumAsByte<ECharacterPoseType> PrevoisOwnerPose               (Parm, ZeroConstructor, IsPlainOldData)

void AUAEProjectile::SetActorInitialRelativeOffset(const struct FVector& Offset, const struct FVector& StandOffset, const struct FVector& CrouchOffset, const struct FVector& ProneOffset, TEnumAsByte<ECharacterPoseType> PrevoisOwnerPose)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.SetActorInitialRelativeOffset");

	AUAEProjectile_SetActorInitialRelativeOffset_Params params;
	params.Offset = Offset;
	params.StandOffset = StandOffset;
	params.CrouchOffset = CrouchOffset;
	params.ProneOffset = ProneOffset;
	params.PrevoisOwnerPose = PrevoisOwnerPose;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEProjectile.ServerNotifyGroundEventOnClient
// ()

void AUAEProjectile::ServerNotifyGroundEventOnClient()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.ServerNotifyGroundEventOnClient");

	AUAEProjectile_ServerNotifyGroundEventOnClient_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEProjectile.OnRep_IsServerAlreadyExplodedCpp
// ()

void AUAEProjectile::OnRep_IsServerAlreadyExplodedCpp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.OnRep_IsServerAlreadyExplodedCpp");

	AUAEProjectile_OnRep_IsServerAlreadyExplodedCpp_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEProjectile.OnRep_IsGroundedOnServerCpp
// ()

void AUAEProjectile::OnRep_IsGroundedOnServerCpp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.OnRep_IsGroundedOnServerCpp");

	AUAEProjectile_OnRep_IsGroundedOnServerCpp_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEProjectile.OnProjectileStopOnServer
// ()

void AUAEProjectile::OnProjectileStopOnServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.OnProjectileStopOnServer");

	AUAEProjectile_OnProjectileStopOnServer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEProjectile.OnProjectileStopOnClient
// ()

void AUAEProjectile::OnProjectileStopOnClient()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.OnProjectileStopOnClient");

	AUAEProjectile_OnProjectileStopOnClient_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEProjectile.IsServerAlreadyExplodedCppNotify
// ()

void AUAEProjectile::IsServerAlreadyExplodedCppNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.IsServerAlreadyExplodedCppNotify");

	AUAEProjectile_IsServerAlreadyExplodedCppNotify_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEProjectile.IsOwnerAutomous
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEProjectile::IsOwnerAutomous()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.IsOwnerAutomous");

	AUAEProjectile_IsOwnerAutomous_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEProjectile.GlassDetect
// ()
// Parameters:
// struct FVector                 Start                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AUAEProjectile::GlassDetect(const struct FVector& Start, const struct FVector& End)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.GlassDetect");

	AUAEProjectile_GlassDetect_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEProjectile.GetRemainingEffectTime
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AUAEProjectile::GetRemainingEffectTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.GetRemainingEffectTime");

	AUAEProjectile_GetRemainingEffectTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEProjectile.CallExplode
// ()

void AUAEProjectile::CallExplode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.CallExplode");

	AUAEProjectile_CallExplode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEProjectile.BroadcastClientExplode
// ()

void AUAEProjectile::BroadcastClientExplode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.BroadcastClientExplode");

	AUAEProjectile_BroadcastClientExplode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.UseItem
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FBattleItemUseTarget    Target                         (Parm)
// EBattleItemUseReason           Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::UseItem(const struct FItemDefineID& DefineID, const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.UseItem");

	UBackpackComponent_UseItem_Params params;
	params.DefineID = DefineID;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.UpdateCapacity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBackpackComponent::UpdateCapacity()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.UpdateCapacity");

	UBackpackComponent_UpdateCapacity_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.UnlockUpdateItemListReceive
// ()

void UBackpackComponent::UnlockUpdateItemListReceive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.UnlockUpdateItemListReceive");

	UBackpackComponent_UnlockUpdateItemListReceive_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.TryMergeItemHandles
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// EItemStoreArea                 InItemStoreArea                (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::TryMergeItemHandles(const struct FItemDefineID& DefineID, EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.TryMergeItemHandles");

	UBackpackComponent_TryMergeItemHandles_Params params;
	params.DefineID = DefineID;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.TakeItem
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCallHandleDrop                (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::TakeItem(const struct FItemDefineID& DefineID, int Count, bool bCallHandleDrop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.TakeItem");

	UBackpackComponent_TakeItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;
	params.bCallHandleDrop = bCallHandleDrop;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.SwapItem
// ()
// Parameters:
// struct FItemDefineID           DefineID1                      (Parm)
// struct FItemDefineID           DefineID2                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::SwapItem(const struct FItemDefineID& DefineID1, const struct FItemDefineID& DefineID2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.SwapItem");

	UBackpackComponent_SwapItem_Params params;
	params.DefineID1 = DefineID1;
	params.DefineID2 = DefineID2;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.ServerSetShowBounty
// ()
// Parameters:
// bool                           bInShowBounty                  (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ServerSetShowBounty(bool bInShowBounty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ServerSetShowBounty");

	UBackpackComponent_ServerSetShowBounty_Params params;
	params.bInShowBounty = bInShowBounty;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.ServerSetCustomAccessories
// ()
// Parameters:
// int                            WeaponItemID                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID                         (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ServerSetCustomAccessories(int WeaponItemID, int Index, int ItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ServerSetCustomAccessories");

	UBackpackComponent_ServerSetCustomAccessories_Params params;
	params.WeaponItemID = WeaponItemID;
	params.Index = Index;
	params.ItemID = ItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.ServerEnableItem
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// bool                           bUse                           (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ServerEnableItem(const struct FItemDefineID& DefineID, bool bUse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ServerEnableItem");

	UBackpackComponent_ServerEnableItem_Params params;
	params.DefineID = DefineID;
	params.bUse = bUse;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.ReturnItem
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCallHandlePickup              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::ReturnItem(const struct FItemDefineID& DefineID, int Count, bool bCallHandlePickup)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ReturnItem");

	UBackpackComponent_ReturnItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;
	params.bCallHandlePickup = bCallHandlePickup;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.RemoveItemHandle
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::RemoveItemHandle(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.RemoveItemHandle");

	UBackpackComponent_RemoveItemHandle_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.ReceiveItemList
// ()

void UBackpackComponent::ReceiveItemList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ReceiveItemList");

	UBackpackComponent_ReceiveItemList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.ReceiveCapacity
// ()

void UBackpackComponent::ReceiveCapacity()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ReceiveCapacity");

	UBackpackComponent_ReceiveCapacity_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.PreCheckCanPickupBagAvatar
// ()
// Parameters:
// class UBattleItemHandleBase*   NewHandle                      (Parm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandleBase*   OldHandle                      (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemUseReason           reson                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::PreCheckCanPickupBagAvatar(class UBattleItemHandleBase* NewHandle, class UBattleItemHandleBase* OldHandle, EBattleItemUseReason reson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PreCheckCanPickupBagAvatar");

	UBackpackComponent_PreCheckCanPickupBagAvatar_Params params;
	params.NewHandle = NewHandle;
	params.OldHandle = OldHandle;
	params.reson = reson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.PostItemHandleEquippingState
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bEquipping                     (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::PostItemHandleEquippingState(const struct FItemDefineID& DefineID, bool bEquipping)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PostItemHandleEquippingState");

	UBackpackComponent_PostItemHandleEquippingState_Params params;
	params.DefineID = DefineID;
	params.bEquipping = bEquipping;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.PickupItemFromWrapperDetail
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FBattleItemPickupInfo   PickupInfo                     (Parm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemClientPickupType    BattleItemClientPickupType     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::PickupItemFromWrapperDetail(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PickupItemFromWrapperDetail");

	UBackpackComponent_PickupItemFromWrapperDetail_Params params;
	params.DefineID = DefineID;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;
	params.BattleItemClientPickupType = BattleItemClientPickupType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.PickUpItem_Default
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FBattleItemPickupInfo   PickupInfo                     (Parm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::PickUpItem_Default(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PickUpItem_Default");

	UBackpackComponent_PickUpItem_Default_Params params;
	params.DefineID = DefineID;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.PickupItem
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FBattleItemPickupInfo   PickupInfo                     (Parm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemClientPickupType    BattleItemClientPickupType     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::PickupItem(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PickupItem");

	UBackpackComponent_PickupItem_Params params;
	params.DefineID = DefineID;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;
	params.BattleItemClientPickupType = BattleItemClientPickupType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.PickupBattleItemOnPlane
// ()

void UBackpackComponent::PickupBattleItemOnPlane()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PickupBattleItemOnPlane");

	UBackpackComponent_PickupBattleItemOnPlane_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.PickItem_IntoSafetyBox
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FBattleItemPickupInfo   PickupInfo                     (Parm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::PickItem_IntoSafetyBox(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PickItem_IntoSafetyBox");

	UBackpackComponent_PickItem_IntoSafetyBox_Params params;
	params.DefineID = DefineID;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.PickItem_IntoBackpack
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FBattleItemPickupInfo   PickupInfo                     (Parm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::PickItem_IntoBackpack(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PickItem_IntoBackpack");

	UBackpackComponent_PickItem_IntoBackpack_Params params;
	params.DefineID = DefineID;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.OnRep_specialCountLimit
// ()

void UBackpackComponent::OnRep_specialCountLimit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.OnRep_specialCountLimit");

	UBackpackComponent_OnRep_specialCountLimit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.OnRep_ItemListNet
// ()

void UBackpackComponent::OnRep_ItemListNet()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.OnRep_ItemListNet");

	UBackpackComponent_OnRep_ItemListNet_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.OnRep_Capacity
// ()

void UBackpackComponent::OnRep_Capacity()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.OnRep_Capacity");

	UBackpackComponent_OnRep_Capacity_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.NotifyItemUpdated
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)

void UBackpackComponent::NotifyItemUpdated(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NotifyItemUpdated");

	UBackpackComponent_NotifyItemUpdated_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.NotifyItemRemoved
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)

void UBackpackComponent::NotifyItemRemoved(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NotifyItemRemoved");

	UBackpackComponent_NotifyItemRemoved_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.NotifyItemListUpdated
// ()

void UBackpackComponent::NotifyItemListUpdated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NotifyItemListUpdated");

	UBackpackComponent_NotifyItemListUpdated_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.NotifyCapacityUpdated
// ()

void UBackpackComponent::NotifyCapacityUpdated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NotifyCapacityUpdated");

	UBackpackComponent_NotifyCapacityUpdated_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.NewItemHandle
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// class UBattleItemHandleBase*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBattleItemHandleBase* UBackpackComponent::NewItemHandle(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NewItemHandle");

	UBackpackComponent_NewItemHandle_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.NewItemDefineID
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FItemDefineID           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemDefineID UBackpackComponent::NewItemDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NewItemDefineID");

	UBackpackComponent_NewItemDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.ModifyItemHandleEquippingState
// ()
// Parameters:
// class UItemHandleBase*         ItemHandle                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEquipping                     (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ModifyItemHandleEquippingState(class UItemHandleBase* ItemHandle, bool bEquipping)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ModifyItemHandleEquippingState");

	UBackpackComponent_ModifyItemHandleEquippingState_Params params;
	params.ItemHandle = ItemHandle;
	params.bEquipping = bEquipping;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.ModifyItemHandleCount
// ()
// Parameters:
// class UItemHandleBase*         ItemHandle                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ModifyItemHandleCount(class UItemHandleBase* ItemHandle, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ModifyItemHandleCount");

	UBackpackComponent_ModifyItemHandleCount_Params params;
	params.ItemHandle = ItemHandle;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.ModifyAutoPickClipType
// ()
// Parameters:
// int                            InAutoPickClipType             (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ModifyAutoPickClipType(int InAutoPickClipType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ModifyAutoPickClipType");

	UBackpackComponent_ModifyAutoPickClipType_Params params;
	params.InAutoPickClipType = InAutoPickClipType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.ModifyAimNotAutoUse
// ()
// Parameters:
// bool                           bAdd                           (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ModifyAimNotAutoUse(bool bAdd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ModifyAimNotAutoUse");

	UBackpackComponent_ModifyAimNotAutoUse_Params params;
	params.bAdd = bAdd;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.LockUpdateItemListReceive
// ()

void UBackpackComponent::LockUpdateItemListReceive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.LockUpdateItemListReceive");

	UBackpackComponent_LockUpdateItemListReceive_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.ItemNet2Data
// ()
// Parameters:
// struct FNetArrayUnit           NetItem                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBackpackComponent::ItemNet2Data(const struct FNetArrayUnit& NetItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ItemNet2Data");

	UBackpackComponent_ItemNet2Data_Params params;
	params.NetItem = NetItem;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.IsNeedToShowInBackpack
// ()
// Parameters:
// int                            TypeDefineID                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::IsNeedToShowInBackpack(int TypeDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsNeedToShowInBackpack");

	UBackpackComponent_IsNeedToShowInBackpack_Params params;
	params.TypeDefineID = TypeDefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.IsItemListUpdatedHasSomeItemTypes
// ()
// Parameters:
// TArray<int>                    ItemTypes                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::IsItemListUpdatedHasSomeItemTypes(TArray<int> ItemTypes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsItemListUpdatedHasSomeItemTypes");

	UBackpackComponent_IsItemListUpdatedHasSomeItemTypes_Params params;
	params.ItemTypes = ItemTypes;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.IsItemListUpdatedHasSomeItemSubTypes
// ()
// Parameters:
// TArray<int>                    ItemSubTypes                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::IsItemListUpdatedHasSomeItemSubTypes(TArray<int> ItemSubTypes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsItemListUpdatedHasSomeItemSubTypes");

	UBackpackComponent_IsItemListUpdatedHasSomeItemSubTypes_Params params;
	params.ItemSubTypes = ItemSubTypes;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.IsItemListUpdatedHasSomeItems
// ()
// Parameters:
// TArray<int>                    ItemTypeSpecificIDs            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::IsItemListUpdatedHasSomeItems(TArray<int> ItemTypeSpecificIDs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsItemListUpdatedHasSomeItems");

	UBackpackComponent_IsItemListUpdatedHasSomeItems_Params params;
	params.ItemTypeSpecificIDs = ItemTypeSpecificIDs;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.IsItemListUpdatedHasOneItemType
// ()
// Parameters:
// int                            ItemType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::IsItemListUpdatedHasOneItemType(int ItemType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsItemListUpdatedHasOneItemType");

	UBackpackComponent_IsItemListUpdatedHasOneItemType_Params params;
	params.ItemType = ItemType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.IsItemListUpdatedHasOneItemSubType
// ()
// Parameters:
// int                            ItemSubType                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::IsItemListUpdatedHasOneItemSubType(int ItemSubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsItemListUpdatedHasOneItemSubType");

	UBackpackComponent_IsItemListUpdatedHasOneItemSubType_Params params;
	params.ItemSubType = ItemSubType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.IsItemListUpdatedHasOneItem
// ()
// Parameters:
// int                            ItemTypeSpecificID             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::IsItemListUpdatedHasOneItem(int ItemTypeSpecificID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsItemListUpdatedHasOneItem");

	UBackpackComponent_IsItemListUpdatedHasOneItem_Params params;
	params.ItemTypeSpecificID = ItemTypeSpecificID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.IsItemExist
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::IsItemExist(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsItemExist");

	UBackpackComponent_IsItemExist_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.IsEnableWeaponAttachmentBindToWeapon
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::IsEnableWeaponAttachmentBindToWeapon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsEnableWeaponAttachmentBindToWeapon");

	UBackpackComponent_IsEnableWeaponAttachmentBindToWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.IsCustomIgnoreAccessories
// ()
// Parameters:
// int                            WeaponID                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::IsCustomIgnoreAccessories(int WeaponID, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsCustomIgnoreAccessories");

	UBackpackComponent_IsCustomIgnoreAccessories_Params params;
	params.WeaponID = WeaponID;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.IsCustomAccessories
// ()
// Parameters:
// int                            WeaponID                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::IsCustomAccessories(int WeaponID, int ItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsCustomAccessories");

	UBackpackComponent_IsCustomAccessories_Params params;
	params.WeaponID = WeaponID;
	params.ItemID = ItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.IsBackPackContainItemId
// ()
// Parameters:
// int                            ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::IsBackPackContainItemId(int ItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsBackPackContainItemId");

	UBackpackComponent_IsBackPackContainItemId_Params params;
	params.ItemID = ItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.IsAutoUse
// ()
// Parameters:
// int                            ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::IsAutoUse(int ItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsAutoUse");

	UBackpackComponent_IsAutoUse_Params params;
	params.ItemID = ItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.HasUnEquipItemByDefindIdRange
// ()
// Parameters:
// int                            LowValue                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            HighValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::HasUnEquipItemByDefindIdRange(int LowValue, int HighValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.HasUnEquipItemByDefindIdRange");

	UBackpackComponent_HasUnEquipItemByDefindIdRange_Params params;
	params.LowValue = LowValue;
	params.HighValue = HighValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.HasTagSub
// ()
// Parameters:
// int                            ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TagName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::HasTagSub(int ItemID, const struct FName& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.HasTagSub");

	UBackpackComponent_HasTagSub_Params params;
	params.ItemID = ItemID;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.HasItemBySubType
// ()
// Parameters:
// int                            SubType                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::HasItemBySubType(int SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.HasItemBySubType");

	UBackpackComponent_HasItemBySubType_Params params;
	params.SubType = SubType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.HasItemByDefineID
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::HasItemByDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.HasItemByDefineID");

	UBackpackComponent_HasItemByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.HasItemByDefindIdRange
// ()
// Parameters:
// int                            LowValue                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            HighValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::HasItemByDefindIdRange(int LowValue, int HighValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.HasItemByDefindIdRange");

	UBackpackComponent_HasItemByDefindIdRange_Params params;
	params.LowValue = LowValue;
	params.HighValue = HighValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.HandleDropInDisuse
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// class UBattleItemHandleBase*   ItemHandle                     (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemDisuseReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          OccupiedCapacityBeforeDisuse   (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::HandleDropInDisuse(const struct FItemDefineID& DefineID, class UBattleItemHandleBase* ItemHandle, EBattleItemDisuseReason Reason, float OccupiedCapacityBeforeDisuse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.HandleDropInDisuse");

	UBackpackComponent_HandleDropInDisuse_Params params;
	params.DefineID = DefineID;
	params.ItemHandle = ItemHandle;
	params.Reason = Reason;
	params.OccupiedCapacityBeforeDisuse = OccupiedCapacityBeforeDisuse;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.GetWorld_BP
// ()
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UBackpackComponent::GetWorld_BP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetWorld_BP");

	UBackpackComponent_GetWorld_BP_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetUnEquipItemNumByItemId
// ()
// Parameters:
// int                            ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::GetUnEquipItemNumByItemId(int ItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetUnEquipItemNumByItemId");

	UBackpackComponent_GetUnEquipItemNumByItemId_Params params;
	params.ItemID = ItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetSpecialItemNow
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FSpecialPickInfo        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSpecialPickInfo UBackpackComponent::GetSpecialItemNow(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetSpecialItemNow");

	UBackpackComponent_GetSpecialItemNow_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetSpecialItemBefore
// ()
// Parameters:
// int                            ItemResId                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FSpecialPickInfo        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSpecialPickInfo UBackpackComponent::GetSpecialItemBefore(int ItemResId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetSpecialItemBefore");

	UBackpackComponent_GetSpecialItemBefore_Params params;
	params.ItemResId = ItemResId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetSafetyBoxCapacity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBackpackComponent::GetSafetyBoxCapacity()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetSafetyBoxCapacity");

	UBackpackComponent_GetSafetyBoxCapacity_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetLeastElectrictyBattleItemData
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// EBattleItemAdditionalDataType  AdditionalDataNameType         (Parm, ZeroConstructor, IsPlainOldData)
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBackpackComponent::GetLeastElectrictyBattleItemData(const struct FItemDefineID& DefineID, EBattleItemAdditionalDataType AdditionalDataNameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetLeastElectrictyBattleItemData");

	UBackpackComponent_GetLeastElectrictyBattleItemData_Params params;
	params.DefineID = DefineID;
	params.AdditionalDataNameType = AdditionalDataNameType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetItemSubType
// ()
// Parameters:
// int                            ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::GetItemSubType(int ItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemSubType");

	UBackpackComponent_GetItemSubType_Params params;
	params.ItemID = ItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetItemListByDefineID
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FBattleItemData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBattleItemData> UBackpackComponent::GetItemListByDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemListByDefineID");

	UBackpackComponent_GetItemListByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetItemHandleMap
// ()
// Parameters:
// TMap<struct FItemDefineID, class UItemHandleBase*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<struct FItemDefineID, class UItemHandleBase*> UBackpackComponent::GetItemHandleMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemHandleMap");

	UBackpackComponent_GetItemHandleMap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetItemHandleList
// ()
// Parameters:
// TArray<class UItemHandleBase*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UItemHandleBase*> UBackpackComponent::GetItemHandleList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemHandleList");

	UBackpackComponent_GetItemHandleList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetItemCountByType
// ()
// Parameters:
// int                            InItemType                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::GetItemCountByType(int InItemType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemCountByType");

	UBackpackComponent_GetItemCountByType_Params params;
	params.InItemType = InItemType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetItemCountByItemSpecialID
// ()
// Parameters:
// int                            InItemSpecialID                (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::GetItemCountByItemSpecialID(int InItemSpecialID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemCountByItemSpecialID");

	UBackpackComponent_GetItemCountByItemSpecialID_Params params;
	params.InItemSpecialID = InItemSpecialID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetItemByDefineID
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBackpackComponent::GetItemByDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemByDefineID");

	UBackpackComponent_GetItemByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetItemAssociateWeights
// ()
// Parameters:
// struct FBattleItemData         InItemData                     (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBackpackComponent::GetItemAssociateWeights(const struct FBattleItemData& InItemData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemAssociateWeights");

	UBackpackComponent_GetItemAssociateWeights_Params params;
	params.InItemData = InItemData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetFirstItemBySubType
// ()
// Parameters:
// int                            SubType                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBackpackComponent::GetFirstItemBySubType(int SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetFirstItemBySubType");

	UBackpackComponent_GetFirstItemBySubType_Params params;
	params.SubType = SubType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetFirstItemByDefineIDIgnoreInstance
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBackpackComponent::GetFirstItemByDefineIDIgnoreInstance(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetFirstItemByDefineIDIgnoreInstance");

	UBackpackComponent_GetFirstItemByDefineIDIgnoreInstance_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetBattleItemFeatureDataByDefineID
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBattleItemFeatureData  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemFeatureData UBackpackComponent::GetBattleItemFeatureDataByDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetBattleItemFeatureDataByDefineID");

	UBackpackComponent_GetBattleItemFeatureDataByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetAllItemList
// ()
// Parameters:
// EItemStoreArea                 InItemStoreArea                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBattleItemData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBattleItemData> UBackpackComponent::GetAllItemList(EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetAllItemList");

	UBackpackComponent_GetAllItemList_Params params;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetAIPickupType
// ()
// Parameters:
// int                            ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemClientPickupType    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EBattleItemClientPickupType UBackpackComponent::GetAIPickupType(int ItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetAIPickupType");

	UBackpackComponent_GetAIPickupType_Params params;
	params.ItemID = ItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.ForceNetUpdate
// ()

void UBackpackComponent::ForceNetUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ForceNetUpdate");

	UBackpackComponent_ForceNetUpdate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.DropItem
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemDropReason          Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::DropItem(const struct FItemDefineID& DefineID, int Count, EBattleItemDropReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.DropItem");

	UBackpackComponent_DropItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.DisuseItem
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// EBattleItemDisuseReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::DisuseItem(const struct FItemDefineID& DefineID, EBattleItemDisuseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.DisuseItem");

	UBackpackComponent_DisuseItem_Params params;
	params.DefineID = DefineID;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.CreateItemHandleInternal
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// class UBattleItemHandleBase*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBattleItemHandleBase* UBackpackComponent::CreateItemHandleInternal(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CreateItemHandleInternal");

	UBackpackComponent_CreateItemHandleInternal_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.CreateItemHandle
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// class UItemHandleBase*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItemHandleBase* UBackpackComponent::CreateItemHandle(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CreateItemHandle");

	UBackpackComponent_CreateItemHandle_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.ConsumeItem
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::ConsumeItem(const struct FItemDefineID& DefineID, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ConsumeItem");

	UBackpackComponent_ConsumeItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.ClientBroadcastItemOperationFailedDelegate
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, ReferenceParm)
// EBattleItemOperationType       OperationType                  (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemOperationFailedReason FailedReason                   (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ClientBroadcastItemOperationFailedDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, EBattleItemOperationFailedReason FailedReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ClientBroadcastItemOperationFailedDelegate");

	UBackpackComponent_ClientBroadcastItemOperationFailedDelegate_Params params;
	params.DefineID = DefineID;
	params.OperationType = OperationType;
	params.FailedReason = FailedReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.ClientBroadcastItemOperationDelegate
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, ReferenceParm)
// EBattleItemOperationType       OperationType                  (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ClientBroadcastItemOperationDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, unsigned char Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ClientBroadcastItemOperationDelegate");

	UBackpackComponent_ClientBroadcastItemOperationDelegate_Params params;
	params.DefineID = DefineID;
	params.OperationType = OperationType;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.CheckSpecialMaxCountForItem
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::CheckSpecialMaxCountForItem(const struct FItemDefineID& DefineID, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CheckSpecialMaxCountForItem");

	UBackpackComponent_CheckSpecialMaxCountForItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.CheckSkillPropItemCanBePickup
// ()
// Parameters:
// class UBackpackComponent*      BackpackComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemDefineID           DefineID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::CheckSkillPropItemCanBePickup(class UBackpackComponent* BackpackComp, const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CheckSkillPropItemCanBePickup");

	UBackpackComponent_CheckSkillPropItemCanBePickup_Params params;
	params.BackpackComp = BackpackComp;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.CheckPickUpItemDefaultSuccess
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bPickupSucc                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoEquip                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::CheckPickUpItemDefaultSuccess(const struct FItemDefineID& DefineID, bool bPickupSucc, bool bAutoEquip)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CheckPickUpItemDefaultSuccess");

	UBackpackComponent_CheckPickUpItemDefaultSuccess_Params params;
	params.DefineID = DefineID;
	params.bPickupSucc = bPickupSucc;
	params.bAutoEquip = bAutoEquip;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.CheckLeftLimitCountForItem
// ()
// Parameters:
// int                            InItemID                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            InCount                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::CheckLeftLimitCountForItem(int InItemID, int InCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CheckLeftLimitCountForItem");

	UBackpackComponent_CheckLeftLimitCountForItem_Params params;
	params.InItemID = InItemID;
	params.InCount = InCount;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.CheckItemEmptyInBackpack
// ()
// Parameters:
// int                            InItemID                       (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::CheckItemEmptyInBackpack(int InItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CheckItemEmptyInBackpack");

	UBackpackComponent_CheckItemEmptyInBackpack_Params params;
	params.InItemID = InItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.CheckCapacityForItem
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// EItemStoreArea                 InItemStoreArea                (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::CheckCapacityForItem(const struct FItemDefineID& DefineID, int Count, EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CheckCapacityForItem");

	UBackpackComponent_CheckCapacityForItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.ChangeItemStoreArea
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            InItemNum                      (Parm, ZeroConstructor, IsPlainOldData)
// EItemStoreArea                 InItemStoreArea                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::ChangeItemStoreArea(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ChangeItemStoreArea");

	UBackpackComponent_ChangeItemStoreArea_Params params;
	params.DefineID = DefineID;
	params.InItemNum = InItemNum;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.CanDisuseToBackpack
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::CanDisuseToBackpack(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CanDisuseToBackpack");

	UBackpackComponent_CanDisuseToBackpack_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.CacheItemAssociationBeforeDisuse
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// EBattleItemDisuseReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::CacheItemAssociationBeforeDisuse(const struct FItemDefineID& DefineID, EBattleItemDisuseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CacheItemAssociationBeforeDisuse");

	UBackpackComponent_CacheItemAssociationBeforeDisuse_Params params;
	params.DefineID = DefineID;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.BroadcastItemOperCountDelegate
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// EBattleItemOperationType       OperationType                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::BroadcastItemOperCountDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.BroadcastItemOperCountDelegate");

	UBackpackComponent_BroadcastItemOperCountDelegate_Params params;
	params.DefineID = DefineID;
	params.OperationType = OperationType;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.BroadcastItemOperationInfoDelegate
// ()
// Parameters:
// struct FItemOperationInfo      ItemOperationInfo              (ConstParm, Parm, OutParm, ReferenceParm)

void UBackpackComponent::BroadcastItemOperationInfoDelegate(const struct FItemOperationInfo& ItemOperationInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.BroadcastItemOperationInfoDelegate");

	UBackpackComponent_BroadcastItemOperationInfoDelegate_Params params;
	params.ItemOperationInfo = ItemOperationInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.BroadcastItemOperationFailedDelegate
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// EBattleItemOperationType       OperationType                  (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemOperationFailedReason FailedReason                   (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::BroadcastItemOperationFailedDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, EBattleItemOperationFailedReason FailedReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.BroadcastItemOperationFailedDelegate");

	UBackpackComponent_BroadcastItemOperationFailedDelegate_Params params;
	params.DefineID = DefineID;
	params.OperationType = OperationType;
	params.FailedReason = FailedReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.BroadcastItemOperationDelegate
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// EBattleItemOperationType       OperationType                  (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::BroadcastItemOperationDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, unsigned char Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.BroadcastItemOperationDelegate");

	UBackpackComponent_BroadcastItemOperationDelegate_Params params;
	params.DefineID = DefineID;
	params.OperationType = OperationType;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.AddItemHandle
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// class UItemHandleBase*         ItemHandle                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::AddItemHandle(const struct FItemDefineID& DefineID, class UItemHandleBase* ItemHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.AddItemHandle");

	UBackpackComponent_AddItemHandle_Params params;
	params.DefineID = DefineID;
	params.ItemHandle = ItemHandle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.AddBattleItemPickupOnPlane
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm, OutParm)
// struct FBattleItemPickupInfo   PickupInfo                     (Parm, OutParm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemClientPickupType    BattleItemClientPickupType     (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::AddBattleItemPickupOnPlane(EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType, struct FItemDefineID* DefineID, struct FBattleItemPickupInfo* PickupInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.AddBattleItemPickupOnPlane");

	UBackpackComponent_AddBattleItemPickupOnPlane_Params params;
	params.Reason = Reason;
	params.BattleItemClientPickupType = BattleItemClientPickupType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DefineID != nullptr)
		*DefineID = params.DefineID;
	if (PickupInfo != nullptr)
		*PickupInfo = params.PickupInfo;
}


// Function Gameplay.BaseGeneratorComponent.RegisterWorldTileSpot
// ()
// Parameters:
// class USpotSceneComponent*     Spot                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseGeneratorComponent::RegisterWorldTileSpot(class USpotSceneComponent* Spot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.RegisterWorldTileSpot");

	UBaseGeneratorComponent_RegisterWorldTileSpot_Params params;
	params.Spot = Spot;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BaseGeneratorComponent.RegisterSpotComponentToTick
// ()
// Parameters:
// class USpotSceneComponent*     SpotComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseGeneratorComponent::RegisterSpotComponentToTick(class USpotSceneComponent* SpotComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.RegisterSpotComponentToTick");

	UBaseGeneratorComponent_RegisterSpotComponentToTick_Params params;
	params.SpotComponent = SpotComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BaseGeneratorComponent.RegisterGroupSpotComponent
// ()
// Parameters:
// class UGroupSpotSceneComponent* GroupSpotComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseGeneratorComponent::RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.RegisterGroupSpotComponent");

	UBaseGeneratorComponent_RegisterGroupSpotComponent_Params params;
	params.GroupSpotComponent = GroupSpotComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BaseGeneratorComponent.GetRandomCategory
// ()
// Parameters:
// TArray<struct FSpotWeight>     SpotWeights                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBaseGeneratorComponent::GetRandomCategory(TArray<struct FSpotWeight> SpotWeights)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.GetRandomCategory");

	UBaseGeneratorComponent_GetRandomCategory_Params params;
	params.SpotWeights = SpotWeights;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BaseGeneratorComponent.GeneratorWorldTileSpots
// ()
// Parameters:
// struct FWorldTileSpotArray     SpotArray                      (Parm, OutParm)

void UBaseGeneratorComponent::GeneratorWorldTileSpots(struct FWorldTileSpotArray* SpotArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.GeneratorWorldTileSpots");

	UBaseGeneratorComponent_GeneratorWorldTileSpots_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SpotArray != nullptr)
		*SpotArray = params.SpotArray;
}


// Function Gameplay.BaseGeneratorComponent.GenerateSpots
// ()

void UBaseGeneratorComponent::GenerateSpots()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.GenerateSpots");

	UBaseGeneratorComponent_GenerateSpots_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BaseGeneratorComponent.GenerateSpotOnTick
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBaseGeneratorComponent::GenerateSpotOnTick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.GenerateSpotOnTick");

	UBaseGeneratorComponent_GenerateSpotOnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.BaseGeneratorComponent.GeneratePickupActor
// ()
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorLocation                  (Parm, OutParm, IsPlainOldData)
// struct FRotator                ActorRotator                   (Parm, OutParm, IsPlainOldData)
// ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemGenerateSpawnClass ItemData                       (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UBaseGeneratorComponent::GeneratePickupActor(class UClass* ActorClass, ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod, const struct FItemGenerateSpawnClass& ItemData, struct FVector* ActorLocation, struct FRotator* ActorRotator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.GeneratePickupActor");

	UBaseGeneratorComponent_GeneratePickupActor_Params params;
	params.ActorClass = ActorClass;
	params.SpawnActorCollisionHandlingMethod = SpawnActorCollisionHandlingMethod;
	params.ItemData = ItemData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ActorLocation != nullptr)
		*ActorLocation = params.ActorLocation;
	if (ActorRotator != nullptr)
		*ActorRotator = params.ActorRotator;

	return params.ReturnValue;
}


// Function Gameplay.BaseGeneratorComponent.CheckTileLevelsVisible
// ()

void UBaseGeneratorComponent::CheckTileLevelsVisible()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.CheckTileLevelsVisible");

	UBaseGeneratorComponent_CheckTileLevelsVisible_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.GeneratorActorAIInterface.RegisterAIPickupPoint
// ()
// Parameters:
// struct FVector                 BuildingLoc                    (Parm, IsPlainOldData)
// struct FVector                 SpotLoc                        (Parm, IsPlainOldData)
// class AActor*                  PickUpActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UGeneratorActorAIInterface::RegisterAIPickupPoint(const struct FVector& BuildingLoc, const struct FVector& SpotLoc, class AActor* PickUpActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GeneratorActorAIInterface.RegisterAIPickupPoint");

	UGeneratorActorAIInterface_RegisterAIPickupPoint_Params params;
	params.BuildingLoc = BuildingLoc;
	params.SpotLoc = SpotLoc;
	params.PickUpActor = PickUpActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.GeneratorActorInterface.SetExtendData
// ()
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGeneratorActorInterface::SetExtendData(const struct FString& Key, int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GeneratorActorInterface.SetExtendData");

	UGeneratorActorInterface_SetExtendData_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.GeneratorActorInterface.SetAttachedActor
// ()
// Parameters:
// class AActor*                  AttachedActor                  (Parm, ZeroConstructor, IsPlainOldData)

void UGeneratorActorInterface::SetAttachedActor(class AActor* AttachedActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GeneratorActorInterface.SetAttachedActor");

	UGeneratorActorInterface_SetAttachedActor_Params params;
	params.AttachedActor = AttachedActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.GeneratorActorInterface.InitDataNew
// ()
// Parameters:
// int                            ItemCount                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Value                          (Parm, ZeroConstructor)
// struct FString                 Category                       (Parm, ZeroConstructor)
// bool                           RepeatGenerateItem             (Parm, ZeroConstructor, IsPlainOldData)
// int                            SpotDataIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UGeneratorActorInterface::InitDataNew(int ItemCount, const struct FString& Value, const struct FString& Category, bool RepeatGenerateItem, int SpotDataIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GeneratorActorInterface.InitDataNew");

	UGeneratorActorInterface_InitDataNew_Params params;
	params.ItemCount = ItemCount;
	params.Value = Value;
	params.Category = Category;
	params.RepeatGenerateItem = RepeatGenerateItem;
	params.SpotDataIndex = SpotDataIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.GeneratorActorInterface.InitData
// ()
// Parameters:
// class UItemSpotSceneComponent* ItemSpotSceneComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ItemCount                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Value                          (Parm, ZeroConstructor)
// struct FString                 Category                       (Parm, ZeroConstructor)
// bool                           RepeatGenerateItem             (Parm, ZeroConstructor, IsPlainOldData)

void UGeneratorActorInterface::InitData(class UItemSpotSceneComponent* ItemSpotSceneComponent, int ItemCount, const struct FString& Value, const struct FString& Category, bool RepeatGenerateItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GeneratorActorInterface.InitData");

	UGeneratorActorInterface_InitData_Params params;
	params.ItemSpotSceneComponent = ItemSpotSceneComponent;
	params.ItemCount = ItemCount;
	params.Value = Value;
	params.Category = Category;
	params.RepeatGenerateItem = RepeatGenerateItem;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.GeneratorActorInterface.GetItemId
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGeneratorActorInterface::GetItemId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GeneratorActorInterface.GetItemId");

	UGeneratorActorInterface_GetItemId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.GeneratorVehicleInterface.SetSafeSpawn
// ()
// Parameters:
// bool                           ab_IsSafeSpawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UGeneratorVehicleInterface::SetSafeSpawn(bool ab_IsSafeSpawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GeneratorVehicleInterface.SetSafeSpawn");

	UGeneratorVehicleInterface_SetSafeSpawn_Params params;
	params.ab_IsSafeSpawn = ab_IsSafeSpawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.GeneratorVehicleInterface.InitVehicle
// ()
// Parameters:
// int                            FuelPercent                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEngineOn                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInHouse                       (Parm, ZeroConstructor, IsPlainOldData)

void UGeneratorVehicleInterface::InitVehicle(int FuelPercent, bool bEngineOn, bool bInHouse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GeneratorVehicleInterface.InitVehicle");

	UGeneratorVehicleInterface_InitVehicle_Params params;
	params.FuelPercent = FuelPercent;
	params.bEngineOn = bEngineOn;
	params.bInHouse = bInHouse;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.GeneratorVehicleInterface.CheckSpawnLocation
// ()
// Parameters:
// struct FVector                 SpawnLocation                  (Parm, IsPlainOldData)
// float                          MaxSpawnDistance               (Parm, ZeroConstructor, IsPlainOldData)

void UGeneratorVehicleInterface::CheckSpawnLocation(const struct FVector& SpawnLocation, float MaxSpawnDistance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GeneratorVehicleInterface.CheckSpawnLocation");

	UGeneratorVehicleInterface_CheckSpawnLocation_Params params;
	params.SpawnLocation = SpawnLocation;
	params.MaxSpawnDistance = MaxSpawnDistance;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.GlobalConfigActor.Init
// ()

void AGlobalConfigActor::Init()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GlobalConfigActor.Init");

	AGlobalConfigActor_Init_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ImplItemRegionInterface.GetRegion
// ()
// Parameters:
// struct FString                 Tag                            (Parm, ZeroConstructor)
// struct FItemRegionCircle       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemRegionCircle UImplItemRegionInterface::GetRegion(const struct FString& Tag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ImplItemRegionInterface.GetRegion");

	UImplItemRegionInterface_GetRegion_Params params;
	params.Tag = Tag;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemConfigActorComponent.RegisterGroupSceneComponent
// ()
// Parameters:
// int                            GroupType                      (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         GroupSceneComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemConfigActorComponent::RegisterGroupSceneComponent(int GroupType, class USceneComponent* GroupSceneComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.RegisterGroupSceneComponent");

	UItemConfigActorComponent_RegisterGroupSceneComponent_Params params;
	params.GroupType = GroupType;
	params.GroupSceneComponent = GroupSceneComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemConfigActorComponent.RandomItemSpawnClass
// ()
// Parameters:
// struct FString                 ItemValue                      (Parm, ZeroConstructor)
// struct FString                 ItemCategory                   (Parm, ZeroConstructor)
// TArray<struct FItemSpawnClass> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FItemSpawnClass> UItemConfigActorComponent::RandomItemSpawnClass(const struct FString& ItemValue, const struct FString& ItemCategory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.RandomItemSpawnClass");

	UItemConfigActorComponent_RandomItemSpawnClass_Params params;
	params.ItemValue = ItemValue;
	params.ItemCategory = ItemCategory;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponents
// ()
// Parameters:
// int                            GroupType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Persent                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USceneComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class USceneComponent*> UItemConfigActorComponent::RandomGroupSceneComponents(int GroupType, int Persent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponents");

	UItemConfigActorComponent_RandomGroupSceneComponents_Params params;
	params.GroupType = GroupType;
	params.Persent = Persent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponent
// ()
// Parameters:
// TArray<class USceneComponent*> AllGroups                      (Parm, ZeroConstructor)
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UItemConfigActorComponent::RandomGroupSceneComponent(TArray<class USceneComponent*> AllGroups)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponent");

	UItemConfigActorComponent_RandomGroupSceneComponent_Params params;
	params.AllGroups = AllGroups;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemConfigActorComponent.LoadActorClass
// ()
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UItemConfigActorComponent::LoadActorClass(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.LoadActorClass");

	UItemConfigActorComponent_LoadActorClass_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemConfigActorComponent.GetItemSpawnClass
// ()
// Parameters:
// struct FItemSpawnData          Data                           (Parm)
// TArray<struct FItemSpawnClass> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FItemSpawnClass> UItemConfigActorComponent::GetItemSpawnClass(const struct FItemSpawnData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.GetItemSpawnClass");

	UItemConfigActorComponent_GetItemSpawnClass_Params params;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemCountArea.IsInArea
// ()
// Parameters:
// struct FVector                 Position                       (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AItemCountArea::IsInArea(struct FVector* Position)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemCountArea.IsInArea");

	AItemCountArea_IsInArea_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.WriteItemSpotStatisticsDatas
// ()

void UItemGeneratorComponent::WriteItemSpotStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteItemSpotStatisticsDatas");

	UItemGeneratorComponent_WriteItemSpotStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.WriteItemClassStatisticsDatas_V15
// ()

void UItemGeneratorComponent::WriteItemClassStatisticsDatas_V15()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteItemClassStatisticsDatas_V15");

	UItemGeneratorComponent_WriteItemClassStatisticsDatas_V15_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.WriteItemClassStatisticsDatas
// ()

void UItemGeneratorComponent::WriteItemClassStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteItemClassStatisticsDatas");

	UItemGeneratorComponent_WriteItemClassStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.WriteGroupStatisticsDatas
// ()

void UItemGeneratorComponent::WriteGroupStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteGroupStatisticsDatas");

	UItemGeneratorComponent_WriteGroupStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.WriteBuildingStatisticsDatas
// ()

void UItemGeneratorComponent::WriteBuildingStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteBuildingStatisticsDatas");

	UItemGeneratorComponent_WriteBuildingStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.WriteAreaItemStatisticsDatas
// ()

void UItemGeneratorComponent::WriteAreaItemStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteAreaItemStatisticsDatas");

	UItemGeneratorComponent_WriteAreaItemStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.WriteAllStatisticsDatasToLog
// ()

void UItemGeneratorComponent::WriteAllStatisticsDatasToLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteAllStatisticsDatasToLog");

	UItemGeneratorComponent_WriteAllStatisticsDatasToLog_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.WriteAllStatisticsDatas
// ()

void UItemGeneratorComponent::WriteAllStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteAllStatisticsDatas");

	UItemGeneratorComponent_WriteAllStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.SetCatetoryRate
// ()
// Parameters:
// TMap<struct FString, float>    Rates                          (Parm, ZeroConstructor)

void UItemGeneratorComponent::SetCatetoryRate(TMap<struct FString, float> Rates)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.SetCatetoryRate");

	UItemGeneratorComponent_SetCatetoryRate_Params params;
	params.Rates = Rates;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.RemoveSpotInfo
// ()
// Parameters:
// bool                           bFirstEnterState               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemGeneratorComponent::RemoveSpotInfo(bool bFirstEnterState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RemoveSpotInfo");

	UItemGeneratorComponent_RemoveSpotInfo_Params params;
	params.bFirstEnterState = bFirstEnterState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.RemoveItemOnTick
// ()

void UItemGeneratorComponent::RemoveItemOnTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RemoveItemOnTick");

	UItemGeneratorComponent_RemoveItemOnTick_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.RemoveDropGround
// ()
// Parameters:
// bool                           bFirstEnterState               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemGeneratorComponent::RemoveDropGround(bool bFirstEnterState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RemoveDropGround");

	UItemGeneratorComponent_RemoveDropGround_Params params;
	params.bFirstEnterState = bFirstEnterState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.RegisterItemGenerateSpawnData
// ()
// Parameters:
// struct FItemGenerateSpawnData  Data                           (Parm)

void UItemGeneratorComponent::RegisterItemGenerateSpawnData(const struct FItemGenerateSpawnData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RegisterItemGenerateSpawnData");

	UItemGeneratorComponent_RegisterItemGenerateSpawnData_Params params;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.RegisterBornIslandItem
// ()
// Parameters:
// class AActor*                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemGeneratorComponent::RegisterBornIslandItem(class AActor* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RegisterBornIslandItem");

	UItemGeneratorComponent_RegisterBornIslandItem_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.ReadItemGenerateTable
// ()
// Parameters:
// struct FString                 TablePath                      (Parm, ZeroConstructor)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UItemGeneratorComponent::ReadItemGenerateTable(const struct FString& TablePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.ReadItemGenerateTable");

	UItemGeneratorComponent_ReadItemGenerateTable_Params params;
	params.TablePath = TablePath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.ReAddAllSpot
// ()

void UItemGeneratorComponent::ReAddAllSpot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.ReAddAllSpot");

	UItemGeneratorComponent_ReAddAllSpot_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.RandomSingleGroup
// ()
// Parameters:
// TArray<class UGroupSpotSceneComponent*> Groups                         (Parm, OutParm, ZeroConstructor)
// struct FSpotGroupProperty      GroupProperty                  (ConstParm, Parm, OutParm, ReferenceParm)
// class UItemGroupSpotSceneComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UItemGroupSpotSceneComponent* UItemGeneratorComponent::RandomSingleGroup(const struct FSpotGroupProperty& GroupProperty, TArray<class UGroupSpotSceneComponent*>* Groups)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RandomSingleGroup");

	UItemGeneratorComponent_RandomSingleGroup_Params params;
	params.GroupProperty = GroupProperty;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Groups != nullptr)
		*Groups = params.Groups;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.RandomGroupsByType
// ()
// Parameters:
// struct FSpotGroupProperty      GroupProperty                  (ConstParm, Parm, OutParm, ReferenceParm)

void UItemGeneratorComponent::RandomGroupsByType(const struct FSpotGroupProperty& GroupProperty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RandomGroupsByType");

	UItemGeneratorComponent_RandomGroupsByType_Params params;
	params.GroupProperty = GroupProperty;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.RandomBornIslandGroups
// ()

void UItemGeneratorComponent::RandomBornIslandGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RandomBornIslandGroups");

	UItemGeneratorComponent_RandomBornIslandGroups_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.OnAsyncLoadItemClassFinish
// ()
// Parameters:
// struct FItemGenerateSpawnClass SpawnClass                     (Parm)

void UItemGeneratorComponent::OnAsyncLoadItemClassFinish(const struct FItemGenerateSpawnClass& SpawnClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.OnAsyncLoadItemClassFinish");

	UItemGeneratorComponent_OnAsyncLoadItemClassFinish_Params params;
	params.SpawnClass = SpawnClass;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.LuaCustomFunctionAfterGenerate
// ()
// Parameters:
// struct FItemGenerateSpawnClass SpawnClass                     (Parm, OutParm)
// class AActor*                  ItemActor                      (Parm, ZeroConstructor, IsPlainOldData)

void UItemGeneratorComponent::LuaCustomFunctionAfterGenerate(class AActor* ItemActor, struct FItemGenerateSpawnClass* SpawnClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.LuaCustomFunctionAfterGenerate");

	UItemGeneratorComponent_LuaCustomFunctionAfterGenerate_Params params;
	params.ItemActor = ItemActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SpawnClass != nullptr)
		*SpawnClass = params.SpawnClass;
}


// Function Gameplay.ItemGeneratorComponent.LuaAddRandomItemClassArray
// ()
// Parameters:
// struct FItemGenerateSpawnClass SpawnClass                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemGeneratorComponent::LuaAddRandomItemClassArray(const struct FItemGenerateSpawnClass& SpawnClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.LuaAddRandomItemClassArray");

	UItemGeneratorComponent_LuaAddRandomItemClassArray_Params params;
	params.SpawnClass = SpawnClass;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.LoadItemGenerateTable
// ()

void UItemGeneratorComponent::LoadItemGenerateTable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.LoadItemGenerateTable");

	UItemGeneratorComponent_LoadItemGenerateTable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.IsCatetoryEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemGeneratorComponent::IsCatetoryEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.IsCatetoryEnabled");

	UItemGeneratorComponent_IsCatetoryEnabled_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.InitCatetorys
// ()

void UItemGeneratorComponent::InitCatetorys()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.InitCatetorys");

	UItemGeneratorComponent_InitCatetorys_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.InitCategoryEx
// ()

void UItemGeneratorComponent::InitCategoryEx()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.InitCategoryEx");

	UItemGeneratorComponent_InitCategoryEx_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.GMGenerateAllSpot
// ()
// Parameters:
// struct FString                 ItemPath                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemGeneratorComponent::GMGenerateAllSpot(const struct FString& ItemPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GMGenerateAllSpot");

	UItemGeneratorComponent_GMGenerateAllSpot_Params params;
	params.ItemPath = ItemPath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.GetSpotTags
// ()
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UItemGeneratorComponent::GetSpotTags()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetSpotTags");

	UItemGeneratorComponent_GetSpotTags_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.GetSpotLocsByTag
// ()
// Parameters:
// struct FString                 ExTag                          (Parm, ZeroConstructor)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UItemGeneratorComponent::GetSpotLocsByTag(const struct FString& ExTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetSpotLocsByTag");

	UItemGeneratorComponent_GetSpotLocsByTag_Params params;
	params.ExTag = ExTag;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.GetSpotLocInPolygon
// ()
// Parameters:
// TArray<struct FVector>         Anchors                        (Parm, ZeroConstructor)
// TArray<struct FVector>         OutLocs                        (Parm, OutParm, ZeroConstructor)
// int                            RandomNum                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UItemGeneratorComponent::GetSpotLocInPolygon(TArray<struct FVector> Anchors, int RandomNum, TArray<struct FVector>* OutLocs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetSpotLocInPolygon");

	UItemGeneratorComponent_GetSpotLocInPolygon_Params params;
	params.Anchors = Anchors;
	params.RandomNum = RandomNum;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutLocs != nullptr)
		*OutLocs = params.OutLocs;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.GetSpotLocInCircle
// ()
// Parameters:
// struct FVector                 Center                         (Parm, IsPlainOldData)
// int                            Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         OutLocs                        (Parm, OutParm, ZeroConstructor)
// int                            RandomNum                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UItemGeneratorComponent::GetSpotLocInCircle(const struct FVector& Center, int Radius, int RandomNum, TArray<struct FVector>* OutLocs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetSpotLocInCircle");

	UItemGeneratorComponent_GetSpotLocInCircle_Params params;
	params.Center = Center;
	params.Radius = Radius;
	params.RandomNum = RandomNum;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutLocs != nullptr)
		*OutLocs = params.OutLocs;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.GetSpotGroupPropertyByGroupType
// ()
// Parameters:
// TEnumAsByte<ESpotGroupType>    SpotGroupType                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FSpotGroupProperty      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSpotGroupProperty UItemGeneratorComponent::GetSpotGroupPropertyByGroupType(TEnumAsByte<ESpotGroupType> SpotGroupType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetSpotGroupPropertyByGroupType");

	UItemGeneratorComponent_GetSpotGroupPropertyByGroupType_Params params;
	params.SpotGroupType = SpotGroupType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.GetRandomItemClassArray
// ()
// Parameters:
// struct FString                 Value                          (Parm, OutParm, ZeroConstructor)
// struct FString                 Category                       (Parm, OutParm, ZeroConstructor)
// TArray<struct FItemGenerateSpawnClass> Results                        (Parm, OutParm, ZeroConstructor)
// bool                           RepeatGenerateItem             (Parm, ZeroConstructor, IsPlainOldData)
// class UItemSpotSceneComponent* SpotComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemGeneratorComponent::GetRandomItemClassArray(bool RepeatGenerateItem, class UItemSpotSceneComponent* SpotComponent, struct FString* Value, struct FString* Category, TArray<struct FItemGenerateSpawnClass>* Results)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetRandomItemClassArray");

	UItemGeneratorComponent_GetRandomItemClassArray_Params params;
	params.RepeatGenerateItem = RepeatGenerateItem;
	params.SpotComponent = SpotComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (Category != nullptr)
		*Category = params.Category;
	if (Results != nullptr)
		*Results = params.Results;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.GetItemDefineID
// ()
// Parameters:
// class UClass*                  PickUpClass                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UItemGeneratorComponent::GetItemDefineID(class UClass* PickUpClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetItemDefineID");

	UItemGeneratorComponent_GetItemDefineID_Params params;
	params.PickUpClass = PickUpClass;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.GetCatetoryRate
// ()
// Parameters:
// struct FString                 Catetory                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UItemGeneratorComponent::GetCatetoryRate(const struct FString& Catetory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetCatetoryRate");

	UItemGeneratorComponent_GetCatetoryRate_Params params;
	params.Catetory = Catetory;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.GenerateSpotOnTick
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UItemGeneratorComponent::GenerateSpotOnTick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GenerateSpotOnTick");

	UItemGeneratorComponent_GenerateSpotOnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.FindASpawnLoc
// ()
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceStart                     (ConstParm, Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UItemGeneratorComponent::FindASpawnLoc(class UWorld* InWorld, const struct FVector& TraceStart)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.FindASpawnLoc");

	UItemGeneratorComponent_FindASpawnLoc_Params params;
	params.InWorld = InWorld;
	params.TraceStart = TraceStart;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.EnableRemoveItem
// ()

void UItemGeneratorComponent::EnableRemoveItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.EnableRemoveItem");

	UItemGeneratorComponent_EnableRemoveItem_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.EnableRefreshAllSpot
// ()

void UItemGeneratorComponent::EnableRefreshAllSpot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.EnableRefreshAllSpot");

	UItemGeneratorComponent_EnableRefreshAllSpot_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.EnablePrimeItemPolygon
// ()
// Parameters:
// TArray<struct FVector>         Anchors                        (Parm, ZeroConstructor)
// int                            PrimeConfigIndex               (Parm, ZeroConstructor, IsPlainOldData)

void UItemGeneratorComponent::EnablePrimeItemPolygon(TArray<struct FVector> Anchors, int PrimeConfigIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.EnablePrimeItemPolygon");

	UItemGeneratorComponent_EnablePrimeItemPolygon_Params params;
	params.Anchors = Anchors;
	params.PrimeConfigIndex = PrimeConfigIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.EnablePrimeItemCircle
// ()
// Parameters:
// struct FVector                 Center                         (Parm, IsPlainOldData)
// int                            Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            PrimeConfigIndex               (Parm, ZeroConstructor, IsPlainOldData)

void UItemGeneratorComponent::EnablePrimeItemCircle(const struct FVector& Center, int Radius, int PrimeConfigIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.EnablePrimeItemCircle");

	UItemGeneratorComponent_EnablePrimeItemCircle_Params params;
	params.Center = Center;
	params.Radius = Radius;
	params.PrimeConfigIndex = PrimeConfigIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.EnableDynamicSpotConfigByIndex
// ()
// Parameters:
// int                            DynamicIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void UItemGeneratorComponent::EnableDynamicSpotConfigByIndex(int DynamicIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.EnableDynamicSpotConfigByIndex");

	UItemGeneratorComponent_EnableDynamicSpotConfigByIndex_Params params;
	params.DynamicIndex = DynamicIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.DoPickUp
// ()
// Parameters:
// int                            ItemSpotDataIndex              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Value                          (Parm, ZeroConstructor)
// struct FString                 Category                       (Parm, ZeroConstructor)

void UItemGeneratorComponent::DoPickUp(int ItemSpotDataIndex, const struct FString& Value, const struct FString& Category)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.DoPickUp");

	UItemGeneratorComponent_DoPickUp_Params params;
	params.ItemSpotDataIndex = ItemSpotDataIndex;
	params.Value = Value;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.DeleteBornIslandItems
// ()

void UItemGeneratorComponent::DeleteBornIslandItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.DeleteBornIslandItems");

	UItemGeneratorComponent_DeleteBornIslandItems_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.CheckShouldGenerateItem
// ()
// Parameters:
// int                            ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemGeneratorComponent::CheckShouldGenerateItem(int ItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.CheckShouldGenerateItem");

	UItemGeneratorComponent_CheckShouldGenerateItem_Params params;
	params.ItemID = ItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.CheckRecoverItems
// ()

void UItemGeneratorComponent::CheckRecoverItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.CheckRecoverItems");

	UItemGeneratorComponent_CheckRecoverItems_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.CheckInPolygon
// ()
// Parameters:
// struct FVector                 pos                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TArray<struct FVector>         Anchors                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemGeneratorComponent::CheckInPolygon(const struct FVector& pos, TArray<struct FVector> Anchors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.CheckInPolygon");

	UItemGeneratorComponent_CheckInPolygon_Params params;
	params.pos = pos;
	params.Anchors = Anchors;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.CheckInCircle
// ()
// Parameters:
// struct FVector                 pos                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Center                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemGeneratorComponent::CheckInCircle(const struct FVector& pos, const struct FVector& Center, int* Radius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.CheckInCircle");

	UItemGeneratorComponent_CheckInCircle_Params params;
	params.pos = pos;
	params.Center = Center;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.AddIgnoreItemClassPath
// ()
// Parameters:
// TArray<struct FString>         IgnoreItemClassList            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemGeneratorComponent::AddIgnoreItemClassPath(TArray<struct FString> IgnoreItemClassList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.AddIgnoreItemClassPath");

	UItemGeneratorComponent_AddIgnoreItemClassPath_Params params;
	params.IgnoreItemClassList = IgnoreItemClassList;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.AddDropGround
// ()
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)

void UItemGeneratorComponent::AddDropGround(class AActor* InActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.AddDropGround");

	UItemGeneratorComponent_AddDropGround_Params params;
	params.InActor = InActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGroupRepeatSpotComponent.Stop
// ()

void UItemGroupRepeatSpotComponent::Stop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupRepeatSpotComponent.Stop");

	UItemGroupRepeatSpotComponent_Stop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGroupRepeatSpotComponent.SetPropertySpotAll
// ()

void UItemGroupRepeatSpotComponent::SetPropertySpotAll()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupRepeatSpotComponent.SetPropertySpotAll");

	UItemGroupRepeatSpotComponent_SetPropertySpotAll_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGroupRepeatSpotComponent.GetGameMode
// ()
// Parameters:
// class AUAEGameMode*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUAEGameMode* UItemGroupRepeatSpotComponent::GetGameMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupRepeatSpotComponent.GetGameMode");

	UItemGroupRepeatSpotComponent_GetGameMode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemGroupRepeatSpotComponent.GenerateSpotAll
// ()

void UItemGroupRepeatSpotComponent::GenerateSpotAll()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupRepeatSpotComponent.GenerateSpotAll");

	UItemGroupRepeatSpotComponent_GenerateSpotAll_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.ItemGroupRepeatSpotComponent.ClearAllSpotItems
// ()

void UItemGroupRepeatSpotComponent::ClearAllSpotItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupRepeatSpotComponent.ClearAllSpotItems");

	UItemGroupRepeatSpotComponent_ClearAllSpotItems_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.LuaBTTaskBase.SetFinishOnMessageWithId
// ()
// Parameters:
// struct FName                   MessageName                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            RequestID                      (Parm, ZeroConstructor, IsPlainOldData)

void ULuaBTTaskBase::SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.SetFinishOnMessageWithId");

	ULuaBTTaskBase_SetFinishOnMessageWithId_Params params;
	params.MessageName = MessageName;
	params.RequestID = RequestID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.LuaBTTaskBase.SetFinishOnMessage
// ()
// Parameters:
// struct FName                   MessageName                    (Parm, ZeroConstructor, IsPlainOldData)

void ULuaBTTaskBase::SetFinishOnMessage(const struct FName& MessageName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.SetFinishOnMessage");

	ULuaBTTaskBase_SetFinishOnMessage_Params params;
	params.MessageName = MessageName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.LuaBTTaskBase.ReceiveTickAI
// ()
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ULuaBTTaskBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.ReceiveTickAI");

	ULuaBTTaskBase_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.LuaBTTaskBase.ReceiveTick
// ()
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ULuaBTTaskBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.ReceiveTick");

	ULuaBTTaskBase_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.LuaBTTaskBase.ReceiveExecuteAI
// ()
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void ULuaBTTaskBase::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.ReceiveExecuteAI");

	ULuaBTTaskBase_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.LuaBTTaskBase.ReceiveExecute
// ()
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ULuaBTTaskBase::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.ReceiveExecute");

	ULuaBTTaskBase_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.LuaBTTaskBase.ReceiveAbortAI
// ()
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void ULuaBTTaskBase::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.ReceiveAbortAI");

	ULuaBTTaskBase_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.LuaBTTaskBase.ReceiveAbort
// ()
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ULuaBTTaskBase::ReceiveAbort(class AActor* OwnerActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.ReceiveAbort");

	ULuaBTTaskBase_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.LuaBTTaskBase.IsTaskExecuting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULuaBTTaskBase::IsTaskExecuting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.IsTaskExecuting");

	ULuaBTTaskBase_IsTaskExecuting_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.LuaBTTaskBase.IsTaskAborting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULuaBTTaskBase::IsTaskAborting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.IsTaskAborting");

	ULuaBTTaskBase_IsTaskAborting_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.LuaBTTaskBase.FinishExecute
// ()
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void ULuaBTTaskBase::FinishExecute(bool bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.FinishExecute");

	ULuaBTTaskBase_FinishExecute_Params params;
	params.bSuccess = bSuccess;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.LuaBTTaskBase.FinishAbort
// ()

void ULuaBTTaskBase::FinishAbort()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.FinishAbort");

	ULuaBTTaskBase_FinishAbort_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.MissionBoardComponent.OnRep_Config
// ()

void UMissionBoardComponent::OnRep_Config()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.MissionBoardComponent.OnRep_Config");

	UMissionBoardComponent_OnRep_Config_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.MissionBoardComponent.GetUtcLeftSecondsByConfig
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMissionBoardComponent::GetUtcLeftSecondsByConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.MissionBoardComponent.GetUtcLeftSecondsByConfig");

	UMissionBoardComponent_GetUtcLeftSecondsByConfig_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.NewWeatherComponent.LuaInit
// ()

void UNewWeatherComponent::LuaInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.NewWeatherComponent.LuaInit");

	UNewWeatherComponent_LuaInit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEAdvertisementActor.SetStaticMeshPath
// ()
// Parameters:
// struct FString                 InMeshPath                     (Parm, ZeroConstructor)

void AUAEAdvertisementActor::SetStaticMeshPath(const struct FString& InMeshPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.SetStaticMeshPath");

	AUAEAdvertisementActor_SetStaticMeshPath_Params params;
	params.InMeshPath = InMeshPath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEAdvertisementActor.SetStaticMesh
// ()
// Parameters:
// class UStaticMesh*             InStaticMesh                   (Parm, ZeroConstructor, IsPlainOldData)

void AUAEAdvertisementActor::SetStaticMesh(class UStaticMesh* InStaticMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.SetStaticMesh");

	AUAEAdvertisementActor_SetStaticMesh_Params params;
	params.InStaticMesh = InStaticMesh;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEAdvertisementActor.SetScale
// ()
// Parameters:
// struct FVector                 inScale                        (Parm, IsPlainOldData)

void AUAEAdvertisementActor::SetScale(const struct FVector& inScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.SetScale");

	AUAEAdvertisementActor_SetScale_Params params;
	params.inScale = inScale;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEAdvertisementActor.SetId
// ()
// Parameters:
// int                            InputID                        (Parm, ZeroConstructor, IsPlainOldData)

void AUAEAdvertisementActor::SetId(int InputID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.SetId");

	AUAEAdvertisementActor_SetId_Params params;
	params.InputID = InputID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEAdvertisementActor.SetCulDistance
// ()
// Parameters:
// float                          CulDistance                    (Parm, ZeroConstructor, IsPlainOldData)

void AUAEAdvertisementActor::SetCulDistance(float CulDistance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.SetCulDistance");

	AUAEAdvertisementActor_SetCulDistance_Params params;
	params.CulDistance = CulDistance;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEAdvertisementActor.RequestHttpImageByUrl
// ()
// Parameters:
// struct FString                 PicUrl                         (Parm, ZeroConstructor)

void AUAEAdvertisementActor::RequestHttpImageByUrl(const struct FString& PicUrl)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.RequestHttpImageByUrl");

	AUAEAdvertisementActor_RequestHttpImageByUrl_Params params;
	params.PicUrl = PicUrl;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEAdvertisementActor.ReplaceTexture
// ()
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void AUAEAdvertisementActor::ReplaceTexture(class UTexture2D* Texture)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.ReplaceTexture");

	AUAEAdvertisementActor_ReplaceTexture_Params params;
	params.Texture = Texture;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEAdvertisementActor.OnRequestImgSuccess
// ()
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 RequestedURL                   (Parm, ZeroConstructor)

void AUAEAdvertisementActor::OnRequestImgSuccess(class UTexture2D* Texture, const struct FString& RequestedURL)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.OnRequestImgSuccess");

	AUAEAdvertisementActor_OnRequestImgSuccess_Params params;
	params.Texture = Texture;
	params.RequestedURL = RequestedURL;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEAdvertisementActor.OnRep_MeshPath
// ()

void AUAEAdvertisementActor::OnRep_MeshPath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.OnRep_MeshPath");

	AUAEAdvertisementActor_OnRep_MeshPath_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEAdvertisementActor.OnRep_Id
// ()

void AUAEAdvertisementActor::OnRep_Id()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.OnRep_Id");

	AUAEAdvertisementActor_OnRep_Id_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEAdvertisementActor.OnClientLoadMesh
// ()

void AUAEAdvertisementActor::OnClientLoadMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.OnClientLoadMesh");

	AUAEAdvertisementActor_OnClientLoadMesh_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEAdvertisementActor.InitImageDownloadUtil
// ()

void AUAEAdvertisementActor::InitImageDownloadUtil()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.InitImageDownloadUtil");

	AUAEAdvertisementActor_InitImageDownloadUtil_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.RegionableAdvertisementActor.ReceivedPlayerActiveRegionsChanged
// ()
// Parameters:
// bool                           bEnter                         (Parm, ZeroConstructor, IsPlainOldData)

void ARegionableAdvertisementActor::ReceivedPlayerActiveRegionsChanged(bool bEnter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.RegionableAdvertisementActor.ReceivedPlayerActiveRegionsChanged");

	ARegionableAdvertisementActor_ReceivedPlayerActiveRegionsChanged_Params params;
	params.bEnter = bEnter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEBuffApplierActor.GetTheInstigatorController
// ()
// Parameters:
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AController* AUAEBuffApplierActor::GetTheInstigatorController()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEBuffApplierActor.GetTheInstigatorController");

	AUAEBuffApplierActor_GetTheInstigatorController_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEChaCustomAnimListComponent.SetCharacterAnimOverrideType
// ()
// Parameters:
// int                            AnimOverrideType               (Parm, ZeroConstructor, IsPlainOldData)

void UUAEChaCustomAnimListComponent::SetCharacterAnimOverrideType(int AnimOverrideType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaCustomAnimListComponent.SetCharacterAnimOverrideType");

	UUAEChaCustomAnimListComponent_SetCharacterAnimOverrideType_Params params;
	params.AnimOverrideType = AnimOverrideType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEChaCustomAnimListComponent.ReleaseCustomAnimAssets
// ()

void UUAEChaCustomAnimListComponent::ReleaseCustomAnimAssets()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaCustomAnimListComponent.ReleaseCustomAnimAssets");

	UUAEChaCustomAnimListComponent_ReleaseCustomAnimAssets_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEChaCustomAnimListComponent.HasAnimAsyncLoadingFinished
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEChaCustomAnimListComponent::HasAnimAsyncLoadingFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaCustomAnimListComponent.HasAnimAsyncLoadingFinished");

	UUAEChaCustomAnimListComponent_HasAnimAsyncLoadingFinished_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEChaCustomAnimListComponent.GetOwnerName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAEChaCustomAnimListComponent::GetOwnerName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaCustomAnimListComponent.GetOwnerName");

	UUAEChaCustomAnimListComponent_GetOwnerName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEChaCustomAnimListComponent.GetCharacterCustomAnim
// ()
// Parameters:
// struct FString                 AnimName                       (Parm, ZeroConstructor)
// class UAnimationAsset*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationAsset* UUAEChaCustomAnimListComponent::GetCharacterCustomAnim(const struct FString& AnimName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaCustomAnimListComponent.GetCharacterCustomAnim");

	UUAEChaCustomAnimListComponent_GetCharacterCustomAnim_Params params;
	params.AnimName = AnimName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEChaParachuteAnimListComponent.SetCharacterAnimOverrideType
// ()
// Parameters:
// int                            AnimOverrideType               (Parm, ZeroConstructor, IsPlainOldData)

void UUAEChaParachuteAnimListComponent::SetCharacterAnimOverrideType(int AnimOverrideType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.SetCharacterAnimOverrideType");

	UUAEChaParachuteAnimListComponent_SetCharacterAnimOverrideType_Params params;
	params.AnimOverrideType = AnimOverrideType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEChaParachuteAnimListComponent.ReleaseParachuteAnimAssets
// ()

void UUAEChaParachuteAnimListComponent::ReleaseParachuteAnimAssets()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.ReleaseParachuteAnimAssets");

	UUAEChaParachuteAnimListComponent_ReleaseParachuteAnimAssets_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEChaParachuteAnimListComponent.OnParachuteAnimAsyncLoadingFinished
// ()
// Parameters:
// struct FString                 AnimLoaded                     (Parm, ZeroConstructor)

void UUAEChaParachuteAnimListComponent::OnParachuteAnimAsyncLoadingFinished(const struct FString& AnimLoaded)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.OnParachuteAnimAsyncLoadingFinished");

	UUAEChaParachuteAnimListComponent_OnParachuteAnimAsyncLoadingFinished_Params params;
	params.AnimLoaded = AnimLoaded;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEChaParachuteAnimListComponent.OnAnimListAsyncLoadingFinished
// ()

void UUAEChaParachuteAnimListComponent::OnAnimListAsyncLoadingFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.OnAnimListAsyncLoadingFinished");

	UUAEChaParachuteAnimListComponent_OnAnimListAsyncLoadingFinished_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEChaParachuteAnimListComponent.HasAnimAsyncLoadingFinished
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEChaParachuteAnimListComponent::HasAnimAsyncLoadingFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.HasAnimAsyncLoadingFinished");

	UUAEChaParachuteAnimListComponent_HasAnimAsyncLoadingFinished_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEChaParachuteAnimListComponent.HandleAsyncLoadingFinishedEvent
// ()

void UUAEChaParachuteAnimListComponent::HandleAsyncLoadingFinishedEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.HandleAsyncLoadingFinishedEvent");

	UUAEChaParachuteAnimListComponent_HandleAsyncLoadingFinishedEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEChaParachuteAnimListComponent.GetOwnerName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAEChaParachuteAnimListComponent::GetOwnerName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.GetOwnerName");

	UUAEChaParachuteAnimListComponent_GetOwnerName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEChaParachuteAnimListComponent.GetCharacterParachuteAnim
// ()
// Parameters:
// TEnumAsByte<ECharacterParachuteAnimType> AnimType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            AnimOverrideType               (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimationAsset*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationAsset* UUAEChaParachuteAnimListComponent::GetCharacterParachuteAnim(TEnumAsByte<ECharacterParachuteAnimType> AnimType, int AnimOverrideType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.GetCharacterParachuteAnim");

	UUAEChaParachuteAnimListComponent_GetCharacterParachuteAnim_Params params;
	params.AnimType = AnimType;
	params.AnimOverrideType = AnimOverrideType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAECharacterAnimListComponent.SetAnimListMapValueData
// ()
// Parameters:
// struct FAnimListMapValueData   AnimListValue                  (Parm, OutParm)

void UUAECharacterAnimListComponent::SetAnimListMapValueData(struct FAnimListMapValueData* AnimListValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.SetAnimListMapValueData");

	UUAECharacterAnimListComponent_SetAnimListMapValueData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AnimListValue != nullptr)
		*AnimListValue = params.AnimListValue;
}


// Function Gameplay.UAECharacterAnimListComponent.OnPreLoadingFinished
// ()
// Parameters:
// struct FAsyncLoadCharAnimParams LoadingParam                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAECharacterAnimListComponent::OnPreLoadingFinished(const struct FAsyncLoadCharAnimParams& LoadingParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.OnPreLoadingFinished");

	UUAECharacterAnimListComponent_OnPreLoadingFinished_Params params;
	params.LoadingParam = LoadingParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAECharacterAnimListComponent.OnAsyncLoadingFinishedNew2
// ()
// Parameters:
// struct FAsyncLoadCharAnimParams LoadingParam                   (Parm)

void UUAECharacterAnimListComponent::OnAsyncLoadingFinishedNew2(const struct FAsyncLoadCharAnimParams& LoadingParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.OnAsyncLoadingFinishedNew2");

	UUAECharacterAnimListComponent_OnAsyncLoadingFinishedNew2_Params params;
	params.LoadingParam = LoadingParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAECharacterAnimListComponent.OnAsyncLoadingFinishedNew
// ()
// Parameters:
// struct FAsyncLoadCharAnimParams LoadingParam                   (Parm)

void UUAECharacterAnimListComponent::OnAsyncLoadingFinishedNew(const struct FAsyncLoadCharAnimParams& LoadingParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.OnAsyncLoadingFinishedNew");

	UUAECharacterAnimListComponent_OnAsyncLoadingFinishedNew_Params params;
	params.LoadingParam = LoadingParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAECharacterAnimListComponent.InitAnimListMap
// ()
// Parameters:
// bool                           IsFPP                          (Parm, ZeroConstructor, IsPlainOldData)

void UUAECharacterAnimListComponent::InitAnimListMap(bool IsFPP)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.InitAnimListMap");

	UUAECharacterAnimListComponent_InitAnimListMap_Params params;
	params.IsFPP = IsFPP;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAECharacterAnimListComponent.GetCharacterShovelAnim
// ()
// Parameters:
// TArray<struct FPlayerAnimData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FPlayerAnimData> UUAECharacterAnimListComponent::GetCharacterShovelAnim()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.GetCharacterShovelAnim");

	UUAECharacterAnimListComponent_GetCharacterShovelAnim_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAECharacterAnimListComponent.GetCharacterJumpAnim
// ()
// Parameters:
// TEnumAsByte<ECharacterJumpType> JumpType                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPlayerAnimData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FPlayerAnimData> UUAECharacterAnimListComponent::GetCharacterJumpAnim(TEnumAsByte<ECharacterJumpType> JumpType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.GetCharacterJumpAnim");

	UUAECharacterAnimListComponent_GetCharacterJumpAnim_Params params;
	params.JumpType = JumpType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAECharacterAnimListComponent.GetAnimationAsset
// ()
// Parameters:
// class UAnimationAsset*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationAsset* UUAECharacterAnimListComponent::GetAnimationAsset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.GetAnimationAsset");

	UUAECharacterAnimListComponent_GetAnimationAsset_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEChaVehAnimListComponent.SetVehCharAnimDataList
// ()
// Parameters:
// TArray<struct FVehCharAnimData> InVehCharAnimDataList          (Parm, ZeroConstructor)

void UUAEChaVehAnimListComponent::SetVehCharAnimDataList(TArray<struct FVehCharAnimData> InVehCharAnimDataList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaVehAnimListComponent.SetVehCharAnimDataList");

	UUAEChaVehAnimListComponent_SetVehCharAnimDataList_Params params;
	params.InVehCharAnimDataList = InVehCharAnimDataList;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEChaVehAnimListComponent.OnIdleAnimListAsyncLoadingFinished
// ()

void UUAEChaVehAnimListComponent::OnIdleAnimListAsyncLoadingFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaVehAnimListComponent.OnIdleAnimListAsyncLoadingFinished");

	UUAEChaVehAnimListComponent_OnIdleAnimListAsyncLoadingFinished_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEChaVehAnimListComponent.OnAnimListAsyncLoadingFinished
// ()
// Parameters:
// struct FAsyncLoadCharVehAnimParams LoadingParam                   (Parm)

void UUAEChaVehAnimListComponent::OnAnimListAsyncLoadingFinished(const struct FAsyncLoadCharVehAnimParams& LoadingParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaVehAnimListComponent.OnAnimListAsyncLoadingFinished");

	UUAEChaVehAnimListComponent_OnAnimListAsyncLoadingFinished_Params params;
	params.LoadingParam = LoadingParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEChaVehAnimListComponent.ChangeAnimData
// ()
// Parameters:
// TArray<struct FVehCharAnimData> InAnimData                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUAEChaVehAnimListComponent::ChangeAnimData(TArray<struct FVehCharAnimData> InAnimData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaVehAnimListComponent.ChangeAnimData");

	UUAEChaVehAnimListComponent_ChangeAnimData_Params params;
	params.InAnimData = InAnimData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.UpdateSequence
// ()
// Parameters:
// struct FString                 LevelSequencePath              (Parm, ZeroConstructor)

void AUAELevelSequenceActor::UpdateSequence(const struct FString& LevelSequencePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.UpdateSequence");

	AUAELevelSequenceActor_UpdateSequence_Params params;
	params.LevelSequencePath = LevelSequencePath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.UpdatePlayback
// ()
// Parameters:
// bool                           bRestoreState                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisableMovementInput          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisableLookAtInput            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHidePlayer                    (Parm, ZeroConstructor, IsPlainOldData)

void AUAELevelSequenceActor::UpdatePlayback(bool bRestoreState, bool bDisableMovementInput, bool bDisableLookAtInput, bool bHidePlayer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.UpdatePlayback");

	AUAELevelSequenceActor_UpdatePlayback_Params params;
	params.bRestoreState = bRestoreState;
	params.bDisableMovementInput = bDisableMovementInput;
	params.bDisableLookAtInput = bDisableLookAtInput;
	params.bHidePlayer = bHidePlayer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.UpdateInstanceData
// ()
// Parameters:
// struct FVector                 OffsetVector                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                OffsetRotation                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AUAELevelSequenceActor::UpdateInstanceData(const struct FVector& OffsetVector, const struct FRotator& OffsetRotation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.UpdateInstanceData");

	AUAELevelSequenceActor_UpdateInstanceData_Params params;
	params.OffsetVector = OffsetVector;
	params.OffsetRotation = OffsetRotation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.StopMontageParticle
// ()
// Parameters:
// struct FName                   SlotName                       (Parm, ZeroConstructor, IsPlainOldData)

void AUAELevelSequenceActor::StopMontageParticle(const struct FName& SlotName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.StopMontageParticle");

	AUAELevelSequenceActor_StopMontageParticle_Params params;
	params.SlotName = SlotName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.Stop
// ()

void AUAELevelSequenceActor::Stop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.Stop");

	AUAELevelSequenceActor_Stop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.SetUseSelfTransformOrigin
// ()
// Parameters:
// bool                           bInUse                         (Parm, ZeroConstructor, IsPlainOldData)

void AUAELevelSequenceActor::SetUseSelfTransformOrigin(bool bInUse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.SetUseSelfTransformOrigin");

	AUAELevelSequenceActor_SetUseSelfTransformOrigin_Params params;
	params.bInUse = bInUse;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.SetTrackBindingInfo
// ()
// Parameters:
// TMap<struct FString, struct FString> TrackBindingInfo               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AUAELevelSequenceActor::SetTrackBindingInfo(TMap<struct FString, struct FString> TrackBindingInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.SetTrackBindingInfo");

	AUAELevelSequenceActor_SetTrackBindingInfo_Params params;
	params.TrackBindingInfo = TrackBindingInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.SetTrackBindingData
// ()
// Parameters:
// TArray<struct FSeqActorBindingData> InTrackBindingData             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AUAELevelSequenceActor::SetTrackBindingData(TArray<struct FSeqActorBindingData> InTrackBindingData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.SetTrackBindingData");

	AUAELevelSequenceActor_SetTrackBindingData_Params params;
	params.InTrackBindingData = InTrackBindingData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.SetNetSyncBinding
// ()
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (Parm)
// TArray<class AActor*>          Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData)

void AUAELevelSequenceActor::SetNetSyncBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.SetNetSyncBinding");

	AUAELevelSequenceActor_SetNetSyncBinding_Params params;
	params.Binding = Binding;
	params.Actors = Actors;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.SetLevelSequenceAssetPath
// ()
// Parameters:
// struct FString                 InLevelSequenceAssetPath       (Parm, ZeroConstructor)

void AUAELevelSequenceActor::SetLevelSequenceAssetPath(const struct FString& InLevelSequenceAssetPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.SetLevelSequenceAssetPath");

	AUAELevelSequenceActor_SetLevelSequenceAssetPath_Params params;
	params.InLevelSequenceAssetPath = InLevelSequenceAssetPath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.ResetNetSyncBindings
// ()

void AUAELevelSequenceActor::ResetNetSyncBindings()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.ResetNetSyncBindings");

	AUAELevelSequenceActor_ResetNetSyncBindings_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.ResetNetSyncBinding
// ()
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (Parm)

void AUAELevelSequenceActor::ResetNetSyncBinding(const struct FMovieSceneObjectBindingID& Binding)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.ResetNetSyncBinding");

	AUAELevelSequenceActor_ResetNetSyncBinding_Params params;
	params.Binding = Binding;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.RemoveNetSyncBinding
// ()
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (Parm)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAELevelSequenceActor::RemoveNetSyncBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.RemoveNetSyncBinding");

	AUAELevelSequenceActor_RemoveNetSyncBinding_Params params;
	params.Binding = Binding;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.ReceiveOnStop
// ()

void AUAELevelSequenceActor::ReceiveOnStop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.ReceiveOnStop");

	AUAELevelSequenceActor_ReceiveOnStop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.ReceiveOnPreStop
// ()

void AUAELevelSequenceActor::ReceiveOnPreStop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.ReceiveOnPreStop");

	AUAELevelSequenceActor_ReceiveOnPreStop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.ReceiveOnPlayReverse
// ()

void AUAELevelSequenceActor::ReceiveOnPlayReverse()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.ReceiveOnPlayReverse");

	AUAELevelSequenceActor_ReceiveOnPlayReverse_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.ReceiveOnPlay
// ()

void AUAELevelSequenceActor::ReceiveOnPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.ReceiveOnPlay");

	AUAELevelSequenceActor_ReceiveOnPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.ReceiveOnPause
// ()

void AUAELevelSequenceActor::ReceiveOnPause()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.ReceiveOnPause");

	AUAELevelSequenceActor_ReceiveOnPause_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.ReceiveOnObjectSpawned
// ()
// Parameters:
// class UObject*                 InObject                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   InBindingID                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AUAELevelSequenceActor::ReceiveOnObjectSpawned(class UObject* InObject, const struct FGuid& InBindingID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.ReceiveOnObjectSpawned");

	AUAELevelSequenceActor_ReceiveOnObjectSpawned_Params params;
	params.InObject = InObject;
	params.InBindingID = InBindingID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.ReceiveOnFinished
// ()

void AUAELevelSequenceActor::ReceiveOnFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.ReceiveOnFinished");

	AUAELevelSequenceActor_ReceiveOnFinished_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.Play
// ()
// Parameters:
// float                          InPlaytime                     (Parm, ZeroConstructor, IsPlainOldData)

void AUAELevelSequenceActor::Play(float InPlaytime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.Play");

	AUAELevelSequenceActor_Play_Params params;
	params.InPlaytime = InPlaytime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.OnSequenceFinished
// ()

void AUAELevelSequenceActor::OnSequenceFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.OnSequenceFinished");

	AUAELevelSequenceActor_OnSequenceFinished_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.OnRep_NetSyncBindingData
// ()

void AUAELevelSequenceActor::OnRep_NetSyncBindingData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.OnRep_NetSyncBindingData");

	AUAELevelSequenceActor_OnRep_NetSyncBindingData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.OnRep_LevelSequenceAssetPath
// ()

void AUAELevelSequenceActor::OnRep_LevelSequenceAssetPath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.OnRep_LevelSequenceAssetPath");

	AUAELevelSequenceActor_OnRep_LevelSequenceAssetPath_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.OnRep_bUseSelfTransformOrigin
// ()

void AUAELevelSequenceActor::OnRep_bUseSelfTransformOrigin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.OnRep_bUseSelfTransformOrigin");

	AUAELevelSequenceActor_OnRep_bUseSelfTransformOrigin_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.OnRep_AuthorityStartPlayTime
// ()

void AUAELevelSequenceActor::OnRep_AuthorityStartPlayTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.OnRep_AuthorityStartPlayTime");

	AUAELevelSequenceActor_OnRep_AuthorityStartPlayTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.OnObjectSpawnedEvent
// ()
// Parameters:
// class UObject*                 InObject                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   InBindingID                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FMovieSceneSequenceID   InSequenceID                   (Parm)

void AUAELevelSequenceActor::OnObjectSpawnedEvent(class UObject* InObject, const struct FGuid& InBindingID, const struct FMovieSceneSequenceID& InSequenceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.OnObjectSpawnedEvent");

	AUAELevelSequenceActor_OnObjectSpawnedEvent_Params params;
	params.InObject = InObject;
	params.InBindingID = InBindingID;
	params.InSequenceID = InSequenceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.GoToEndAndStop
// ()

void AUAELevelSequenceActor::GoToEndAndStop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.GoToEndAndStop");

	AUAELevelSequenceActor_GoToEndAndStop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAELevelSequenceActor.GetFirstPossessableTrack
// ()
// Parameters:
// struct FMovieSceneObjectBindingID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMovieSceneObjectBindingID AUAELevelSequenceActor::GetFirstPossessableTrack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.GetFirstPossessableTrack");

	AUAELevelSequenceActor_GetFirstPossessableTrack_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAELevelSequenceActor.CreateLevelSequencePlayer
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          InLevelSequence                (Parm, ZeroConstructor, IsPlainOldData)
// struct FMovieSceneSequencePlaybackSettings Settings                       (Parm)
// class AUAELevelSequenceActor*  OutActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelSequencePlayer* AUAELevelSequenceActor::CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* InLevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class AUAELevelSequenceActor** OutActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.CreateLevelSequencePlayer");

	AUAELevelSequenceActor_CreateLevelSequencePlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InLevelSequence = InLevelSequence;
	params.Settings = Settings;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutActor != nullptr)
		*OutActor = params.OutActor;

	return params.ReturnValue;
}


// Function Gameplay.UAELevelSequenceActor.AddNetSyncBinding
// ()
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (Parm)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData)

void AUAELevelSequenceActor::AddNetSyncBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.AddNetSyncBinding");

	AUAELevelSequenceActor_AddNetSyncBinding_Params params;
	params.Binding = Binding;
	params.Actor = Actor;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.AELobbyCharAnimListComp.OnAsyncLoadingFinished
// ()
// Parameters:
// struct FLobbyAsyncLoadCharAnimParams LoadingParam                   (Parm)

void UAELobbyCharAnimListComp::OnAsyncLoadingFinished(const struct FLobbyAsyncLoadCharAnimParams& LoadingParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.AELobbyCharAnimListComp.OnAsyncLoadingFinished");

	UAELobbyCharAnimListComp_OnAsyncLoadingFinished_Params params;
	params.LoadingParam = LoadingParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.AELobbyCharAnimListComp.InitPendingList
// ()
// Parameters:
// TArray<struct FLobbyCharacterWeaponAnimData> animEditList                   (Parm, OutParm, ZeroConstructor)
// TArray<struct FSoftObjectPath> PendingList                    (Parm, OutParm, ZeroConstructor)

void UAELobbyCharAnimListComp::InitPendingList(TArray<struct FLobbyCharacterWeaponAnimData>* animEditList, TArray<struct FSoftObjectPath>* PendingList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.AELobbyCharAnimListComp.InitPendingList");

	UAELobbyCharAnimListComp_InitPendingList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (animEditList != nullptr)
		*animEditList = params.animEditList;
	if (PendingList != nullptr)
		*PendingList = params.PendingList;
}


// Function Gameplay.AELobbyCharAnimListComp.GetCharacterAnim
// ()
// Parameters:
// TEnumAsByte<ELobbyCharacterPosIndex> PosIdx                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELobbyCharacterAnimType> GenderType                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponAnimType                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECharacterShowSceneType> sceneType                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimationAsset*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationAsset* UAELobbyCharAnimListComp::GetCharacterAnim(TEnumAsByte<ELobbyCharacterPosIndex> PosIdx, TEnumAsByte<ELobbyCharacterAnimType> GenderType, int WeaponAnimType, TEnumAsByte<ECharacterShowSceneType> sceneType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.AELobbyCharAnimListComp.GetCharacterAnim");

	UAELobbyCharAnimListComp_GetCharacterAnim_Params params;
	params.PosIdx = PosIdx;
	params.GenderType = GenderType;
	params.WeaponAnimType = WeaponAnimType;
	params.sceneType = sceneType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.AELobbyCharAnimListComp.BuildAnimMap
// ()
// Parameters:
// TArray<struct FLobbyCharacterWeaponAnimData> AnimList                       (Parm, OutParm, ZeroConstructor)
// TEnumAsByte<ECharacterShowSceneType> sceneType                      (Parm, ZeroConstructor, IsPlainOldData)

void UAELobbyCharAnimListComp::BuildAnimMap(TEnumAsByte<ECharacterShowSceneType> sceneType, TArray<struct FLobbyCharacterWeaponAnimData>* AnimList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.AELobbyCharAnimListComp.BuildAnimMap");

	UAELobbyCharAnimListComp_BuildAnimMap_Params params;
	params.sceneType = sceneType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AnimList != nullptr)
		*AnimList = params.AnimList;
}


// Function Gameplay.UAESpawnActorComponent.UAESpawnActor
// ()
// Parameters:
// struct FUAESpawnActorParam     Param                          (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UUAESpawnActorComponent::UAESpawnActor(const struct FUAESpawnActorParam& Param)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAESpawnActorComponent.UAESpawnActor");

	UUAESpawnActorComponent_UAESpawnActor_Params params;
	params.Param = Param;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAESpawnActorComponent.PrepareSpawnData
// ()
// Parameters:
// int                            TemplateID                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UUAESpawnActorComponent::PrepareSpawnData(int TemplateID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAESpawnActorComponent.PrepareSpawnData");

	UUAESpawnActorComponent_PrepareSpawnData_Params params;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAESpawnActorComponent.InitializeActor
// ()
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            TemplateID                     (Parm, ZeroConstructor, IsPlainOldData)

void UUAESpawnActorComponent::InitializeActor(class AActor* InActor, int TemplateID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAESpawnActorComponent.InitializeActor");

	UUAESpawnActorComponent_InitializeActor_Params params;
	params.InActor = InActor;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEWindowComponent.NotifyServerBroken
// ()
// Parameters:
// class APlayerController*       Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void UUAEWindowComponent::NotifyServerBroken(class APlayerController* Instigator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.NotifyServerBroken");

	UUAEWindowComponent_NotifyServerBroken_Params params;
	params.Instigator = Instigator;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEWindowComponent.NotifyRepDataUpdated
// ()
// Parameters:
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocal                         (Parm, ZeroConstructor, IsPlainOldData)

void UUAEWindowComponent::NotifyRepDataUpdated(bool bInitial, bool bLocal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.NotifyRepDataUpdated");

	UUAEWindowComponent_NotifyRepDataUpdated_Params params;
	params.bInitial = bInitial;
	params.bLocal = bLocal;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEWindowComponent.LocalHandleWindowBrokenBP
// ()
// Parameters:
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocal                         (Parm, ZeroConstructor, IsPlainOldData)

void UUAEWindowComponent::LocalHandleWindowBrokenBP(bool bInitial, bool bLocal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.LocalHandleWindowBrokenBP");

	UUAEWindowComponent_LocalHandleWindowBrokenBP_Params params;
	params.bInitial = bInitial;
	params.bLocal = bLocal;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEWindowComponent.LocalHandleWindowBroken
// ()
// Parameters:
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocal                         (Parm, ZeroConstructor, IsPlainOldData)

void UUAEWindowComponent::LocalHandleWindowBroken(bool bInitial, bool bLocal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.LocalHandleWindowBroken");

	UUAEWindowComponent_LocalHandleWindowBroken_Params params;
	params.bInitial = bInitial;
	params.bLocal = bLocal;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEWindowComponent.HandleBroken
// ()
// Parameters:
// class APlayerController*       Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocal                         (Parm, ZeroConstructor, IsPlainOldData)

void UUAEWindowComponent::HandleBroken(class APlayerController* Instigator, bool bLocal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.HandleBroken");

	UUAEWindowComponent_HandleBroken_Params params;
	params.Instigator = Instigator;
	params.bLocal = bLocal;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.UAEWindowComponent.GetRepData
// ()
// Parameters:
// struct FUAEWindowRepData       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUAEWindowRepData UUAEWindowComponent::GetRepData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.GetRepData");

	UUAEWindowComponent_GetRepData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.VehicleConfigActorComponent.LoadActorClass
// ()
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UVehicleConfigActorComponent::LoadActorClass(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleConfigActorComponent.LoadActorClass");

	UVehicleConfigActorComponent_LoadActorClass_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleSpotStatisticsFromSpotFile
// ()

void UVehicleAndTreasureBoxGeneratorComponent::WriteVehicleSpotStatisticsFromSpotFile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleSpotStatisticsFromSpotFile");

	UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleSpotStatisticsFromSpotFile_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleSpotStatisticsDatas_V15
// ()

void UVehicleAndTreasureBoxGeneratorComponent::WriteVehicleSpotStatisticsDatas_V15()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleSpotStatisticsDatas_V15");

	UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleSpotStatisticsDatas_V15_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleSpotStatisticsDatas
// ()

void UVehicleAndTreasureBoxGeneratorComponent::WriteVehicleSpotStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleSpotStatisticsDatas");

	UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleSpotStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleClassStatisticsDatas_V15
// ()

void UVehicleAndTreasureBoxGeneratorComponent::WriteVehicleClassStatisticsDatas_V15()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleClassStatisticsDatas_V15");

	UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleClassStatisticsDatas_V15_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleClassStatisticsDatas
// ()

void UVehicleAndTreasureBoxGeneratorComponent::WriteVehicleClassStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleClassStatisticsDatas");

	UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleClassStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatasToLog
// ()

void UVehicleAndTreasureBoxGeneratorComponent::WriteAllVehicleStatisticsDatasToLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatasToLog");

	UVehicleAndTreasureBoxGeneratorComponent_WriteAllVehicleStatisticsDatasToLog_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatas_V15
// ()

void UVehicleAndTreasureBoxGeneratorComponent::WriteAllVehicleStatisticsDatas_V15()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatas_V15");

	UVehicleAndTreasureBoxGeneratorComponent_WriteAllVehicleStatisticsDatas_V15_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatas
// ()

void UVehicleAndTreasureBoxGeneratorComponent::WriteAllVehicleStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatas");

	UVehicleAndTreasureBoxGeneratorComponent_WriteAllVehicleStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.SetAllVehicleNumRate
// ()
// Parameters:
// TMap<struct FString, float>    Rates                          (Parm, ZeroConstructor)

void UVehicleAndTreasureBoxGeneratorComponent::SetAllVehicleNumRate(TMap<struct FString, float> Rates)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.SetAllVehicleNumRate");

	UVehicleAndTreasureBoxGeneratorComponent_SetAllVehicleNumRate_Params params;
	params.Rates = Rates;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RegisterVehicleGenerateSpawnData
// ()
// Parameters:
// struct FVehicleGenerateSpawnData Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UVehicleAndTreasureBoxGeneratorComponent::RegisterVehicleGenerateSpawnData(const struct FVehicleGenerateSpawnData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RegisterVehicleGenerateSpawnData");

	UVehicleAndTreasureBoxGeneratorComponent_RegisterVehicleGenerateSpawnData_Params params;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RegisterGroupSpotComponent
// ()
// Parameters:
// class UGroupSpotSceneComponent* GroupSpotComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UVehicleAndTreasureBoxGeneratorComponent::RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RegisterGroupSpotComponent");

	UVehicleAndTreasureBoxGeneratorComponent_RegisterGroupSpotComponent_Params params;
	params.GroupSpotComponent = GroupSpotComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomTreasureBoxSpotsByType
// ()
// Parameters:
// struct FTreasureBoxSpotProperty Property                       (Parm, OutParm)
// struct FVehicleSpotComponentArray Spots                          (Parm, OutParm)

void UVehicleAndTreasureBoxGeneratorComponent::RandomTreasureBoxSpotsByType(struct FTreasureBoxSpotProperty* Property, struct FVehicleSpotComponentArray* Spots)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomTreasureBoxSpotsByType");

	UVehicleAndTreasureBoxGeneratorComponent_RandomTreasureBoxSpotsByType_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Property != nullptr)
		*Property = params.Property;
	if (Spots != nullptr)
		*Spots = params.Spots;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomTreasureBoxSingleSpots
// ()
// Parameters:
// TArray<class UVehicleSpotSceneComponent*> AllSpots                       (Parm, OutParm, ZeroConstructor)
// struct FTreasureBoxSpotProperty Property                       (Parm, OutParm)

void UVehicleAndTreasureBoxGeneratorComponent::RandomTreasureBoxSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FTreasureBoxSpotProperty* Property)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomTreasureBoxSingleSpots");

	UVehicleAndTreasureBoxGeneratorComponent_RandomTreasureBoxSingleSpots_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AllSpots != nullptr)
		*AllSpots = params.AllSpots;
	if (Property != nullptr)
		*Property = params.Property;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomSpotsByType
// ()
// Parameters:
// struct FVehicleSpotProperty    Property                       (Parm, OutParm)
// struct FVehicleSpotComponentArray Spots                          (Parm, OutParm)

void UVehicleAndTreasureBoxGeneratorComponent::RandomSpotsByType(struct FVehicleSpotProperty* Property, struct FVehicleSpotComponentArray* Spots)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomSpotsByType");

	UVehicleAndTreasureBoxGeneratorComponent_RandomSpotsByType_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Property != nullptr)
		*Property = params.Property;
	if (Spots != nullptr)
		*Spots = params.Spots;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomSingleSpots
// ()
// Parameters:
// TArray<class UVehicleSpotSceneComponent*> AllSpots                       (Parm, OutParm, ZeroConstructor)
// struct FVehicleSpotProperty    Property                       (Parm, OutParm)

void UVehicleAndTreasureBoxGeneratorComponent::RandomSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FVehicleSpotProperty* Property)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomSingleSpots");

	UVehicleAndTreasureBoxGeneratorComponent_RandomSingleSpots_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AllSpots != nullptr)
		*AllSpots = params.AllSpots;
	if (Property != nullptr)
		*Property = params.Property;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomGroups
// ()

void UVehicleAndTreasureBoxGeneratorComponent::RandomGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomGroups");

	UVehicleAndTreasureBoxGeneratorComponent_RandomGroups_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.LoadVehicleGenerateTable
// ()

void UVehicleAndTreasureBoxGeneratorComponent::LoadVehicleGenerateTable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.LoadVehicleGenerateTable");

	UVehicleAndTreasureBoxGeneratorComponent_LoadVehicleGenerateTable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GMGenerateAllVehicleSpot
// ()
// Parameters:
// struct FString                 VehiclePath                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleAndTreasureBoxGeneratorComponent::GMGenerateAllVehicleSpot(const struct FString& VehiclePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GMGenerateAllVehicleSpot");

	UVehicleAndTreasureBoxGeneratorComponent_GMGenerateAllVehicleSpot_Params params;
	params.VehiclePath = VehiclePath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfoWithCategory
// ()
// Parameters:
// struct FVehicleSpotProperty    SpotProperty                   (Parm, OutParm)
// struct FString                 Category                       (Parm, ZeroConstructor)
// struct FVehicleGenerateRandomInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleGenerateRandomInfo UVehicleAndTreasureBoxGeneratorComponent::GetVehicleSpotRandomInfoWithCategory(const struct FString& Category, struct FVehicleSpotProperty* SpotProperty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfoWithCategory");

	UVehicleAndTreasureBoxGeneratorComponent_GetVehicleSpotRandomInfoWithCategory_Params params;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SpotProperty != nullptr)
		*SpotProperty = params.SpotProperty;

	return params.ReturnValue;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfoBySpotType
// ()
// Parameters:
// TEnumAsByte<ESpotType>         SpotType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InCategory                     (Parm, ZeroConstructor)
// struct FVehicleGenerateRandomInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleGenerateRandomInfo UVehicleAndTreasureBoxGeneratorComponent::GetVehicleSpotRandomInfoBySpotType(TEnumAsByte<ESpotType> SpotType, const struct FString& InCategory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfoBySpotType");

	UVehicleAndTreasureBoxGeneratorComponent_GetVehicleSpotRandomInfoBySpotType_Params params;
	params.SpotType = SpotType;
	params.InCategory = InCategory;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfo
// ()
// Parameters:
// struct FVehicleSpotProperty    SpotProperty                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 InCategory                     (Parm, ZeroConstructor)
// struct FVehicleGenerateRandomInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleGenerateRandomInfo UVehicleAndTreasureBoxGeneratorComponent::GetVehicleSpotRandomInfo(const struct FVehicleSpotProperty& SpotProperty, const struct FString& InCategory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfo");

	UVehicleAndTreasureBoxGeneratorComponent_GetVehicleSpotRandomInfo_Params params;
	params.SpotProperty = SpotProperty;
	params.InCategory = InCategory;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetTreasureBoxSpotRandomInfo
// ()
// Parameters:
// struct FTreasureBoxSpotProperty SpotProperty                   (Parm, OutParm)
// struct FVehicleGenerateRandomInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleGenerateRandomInfo UVehicleAndTreasureBoxGeneratorComponent::GetTreasureBoxSpotRandomInfo(struct FTreasureBoxSpotProperty* SpotProperty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetTreasureBoxSpotRandomInfo");

	UVehicleAndTreasureBoxGeneratorComponent_GetTreasureBoxSpotRandomInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SpotProperty != nullptr)
		*SpotProperty = params.SpotProperty;

	return params.ReturnValue;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetRandomVehicleClass
// ()
// Parameters:
// struct FString                 Category                       (Parm, ZeroConstructor)
// struct FVehicleGenerateSpawnData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleGenerateSpawnData UVehicleAndTreasureBoxGeneratorComponent::GetRandomVehicleClass(const struct FString& Category)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetRandomVehicleClass");

	UVehicleAndTreasureBoxGeneratorComponent_GetRandomVehicleClass_Params params;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetRandomCategory
// ()
// Parameters:
// TArray<struct FSpotWeight>     SpotWeights                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVehicleAndTreasureBoxGeneratorComponent::GetRandomCategory(TArray<struct FSpotWeight> SpotWeights)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetRandomCategory");

	UVehicleAndTreasureBoxGeneratorComponent_GetRandomCategory_Params params;
	params.SpotWeights = SpotWeights;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GenerateSpotOnTick
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAndTreasureBoxGeneratorComponent::GenerateSpotOnTick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GenerateSpotOnTick");

	UVehicleAndTreasureBoxGeneratorComponent_GenerateSpotOnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.DynamicSpawnVehicleBySpotId
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Category                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleAndTreasureBoxGeneratorComponent::DynamicSpawnVehicleBySpotId(int ID, const struct FString& Category)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.DynamicSpawnVehicleBySpotId");

	UVehicleAndTreasureBoxGeneratorComponent_DynamicSpawnVehicleBySpotId_Params params;
	params.ID = ID;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.DeleteGroups
// ()

void UVehicleAndTreasureBoxGeneratorComponent::DeleteGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.DeleteGroups");

	UVehicleAndTreasureBoxGeneratorComponent_DeleteGroups_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.CanDynamicSpawnVehicle
// ()
// Parameters:
// struct FVector                 SpawnLocation                  (Parm, IsPlainOldData)
// struct FVector                 TestLocationOffset             (Parm, IsPlainOldData)
// struct FVector                 TestBoxSize                    (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleAndTreasureBoxGeneratorComponent::CanDynamicSpawnVehicle(const struct FVector& SpawnLocation, const struct FVector& TestLocationOffset, const struct FVector& TestBoxSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.CanDynamicSpawnVehicle");

	UVehicleAndTreasureBoxGeneratorComponent_CanDynamicSpawnVehicle_Params params;
	params.SpawnLocation = SpawnLocation;
	params.TestLocationOffset = TestLocationOffset;
	params.TestBoxSize = TestBoxSize;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.AddVehicleSpotCount
// ()
// Parameters:
// TEnumAsByte<ESpotType>         SpotType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, ZeroConstructor)
// float                          LocationX                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationZ                      (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAndTreasureBoxGeneratorComponent::AddVehicleSpotCount(TEnumAsByte<ESpotType> SpotType, const struct FString& Path, float LocationX, float LocationY, float LocationZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.AddVehicleSpotCount");

	UVehicleAndTreasureBoxGeneratorComponent_AddVehicleSpotCount_Params params;
	params.SpotType = SpotType;
	params.Path = Path;
	params.LocationX = LocationX;
	params.LocationY = LocationY;
	params.LocationZ = LocationZ;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.AddVehicleClassCount
// ()
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAndTreasureBoxGeneratorComponent::AddVehicleClassCount(const struct FString& Path, bool IsValid, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.AddVehicleClassCount");

	UVehicleAndTreasureBoxGeneratorComponent_AddVehicleClassCount_Params params;
	params.Path = Path;
	params.IsValid = IsValid;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.WriteVehicleSpotStatisticsDatas
// ()

void UVehicleGeneratorComponent::WriteVehicleSpotStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.WriteVehicleSpotStatisticsDatas");

	UVehicleGeneratorComponent_WriteVehicleSpotStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.WriteVehicleClassStatisticsDatas
// ()

void UVehicleGeneratorComponent::WriteVehicleClassStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.WriteVehicleClassStatisticsDatas");

	UVehicleGeneratorComponent_WriteVehicleClassStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.WriteAllVehicleStatisticsDatas
// ()

void UVehicleGeneratorComponent::WriteAllVehicleStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.WriteAllVehicleStatisticsDatas");

	UVehicleGeneratorComponent_WriteAllVehicleStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.RegisterVehicleGenerateSpawnData
// ()
// Parameters:
// struct FVehicleGenerateSpawnData Data                           (Parm)

void UVehicleGeneratorComponent::RegisterVehicleGenerateSpawnData(const struct FVehicleGenerateSpawnData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.RegisterVehicleGenerateSpawnData");

	UVehicleGeneratorComponent_RegisterVehicleGenerateSpawnData_Params params;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.RegisterGroupSpotComponent
// ()
// Parameters:
// class UGroupSpotSceneComponent* GroupSpotComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UVehicleGeneratorComponent::RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.RegisterGroupSpotComponent");

	UVehicleGeneratorComponent_RegisterGroupSpotComponent_Params params;
	params.GroupSpotComponent = GroupSpotComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.RandomSpotsByType
// ()
// Parameters:
// struct FVehicleSpotProperty    Property                       (Parm, OutParm)
// struct FVehicleSpotComponentArray Spots                          (Parm, OutParm)

void UVehicleGeneratorComponent::RandomSpotsByType(struct FVehicleSpotProperty* Property, struct FVehicleSpotComponentArray* Spots)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.RandomSpotsByType");

	UVehicleGeneratorComponent_RandomSpotsByType_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Property != nullptr)
		*Property = params.Property;
	if (Spots != nullptr)
		*Spots = params.Spots;
}


// Function Gameplay.VehicleGeneratorComponent.RandomSingleSpots
// ()
// Parameters:
// TArray<class UVehicleSpotSceneComponent*> AllSpots                       (Parm, OutParm, ZeroConstructor)
// struct FVehicleSpotProperty    Property                       (Parm, OutParm)

void UVehicleGeneratorComponent::RandomSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FVehicleSpotProperty* Property)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.RandomSingleSpots");

	UVehicleGeneratorComponent_RandomSingleSpots_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AllSpots != nullptr)
		*AllSpots = params.AllSpots;
	if (Property != nullptr)
		*Property = params.Property;
}


// Function Gameplay.VehicleGeneratorComponent.RandomGroups
// ()

void UVehicleGeneratorComponent::RandomGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.RandomGroups");

	UVehicleGeneratorComponent_RandomGroups_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.LoadVehicleGenerateTable
// ()

void UVehicleGeneratorComponent::LoadVehicleGenerateTable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.LoadVehicleGenerateTable");

	UVehicleGeneratorComponent_LoadVehicleGenerateTable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.GetVehicleSpotRandomInfoBySpotType
// ()
// Parameters:
// TEnumAsByte<ESpotType>         SpotType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVehicleGenerateRandomInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleGenerateRandomInfo UVehicleGeneratorComponent::GetVehicleSpotRandomInfoBySpotType(TEnumAsByte<ESpotType> SpotType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.GetVehicleSpotRandomInfoBySpotType");

	UVehicleGeneratorComponent_GetVehicleSpotRandomInfoBySpotType_Params params;
	params.SpotType = SpotType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.VehicleGeneratorComponent.GetVehicleSpotRandomInfo
// ()
// Parameters:
// struct FVehicleSpotProperty    SpotProperty                   (Parm, OutParm)
// struct FVehicleGenerateRandomInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleGenerateRandomInfo UVehicleGeneratorComponent::GetVehicleSpotRandomInfo(struct FVehicleSpotProperty* SpotProperty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.GetVehicleSpotRandomInfo");

	UVehicleGeneratorComponent_GetVehicleSpotRandomInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SpotProperty != nullptr)
		*SpotProperty = params.SpotProperty;

	return params.ReturnValue;
}


// Function Gameplay.VehicleGeneratorComponent.GetRandomVehicleClass
// ()
// Parameters:
// struct FString                 Category                       (Parm, ZeroConstructor)
// struct FVehicleGenerateSpawnData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleGenerateSpawnData UVehicleGeneratorComponent::GetRandomVehicleClass(const struct FString& Category)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.GetRandomVehicleClass");

	UVehicleGeneratorComponent_GetRandomVehicleClass_Params params;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.VehicleGeneratorComponent.GetRandomCategory
// ()
// Parameters:
// TArray<struct FSpotWeight>     SpotWeights                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVehicleGeneratorComponent::GetRandomCategory(TArray<struct FSpotWeight> SpotWeights)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.GetRandomCategory");

	UVehicleGeneratorComponent_GetRandomCategory_Params params;
	params.SpotWeights = SpotWeights;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.VehicleGeneratorComponent.GenerateSpotOnTick
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleGeneratorComponent::GenerateSpotOnTick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.GenerateSpotOnTick");

	UVehicleGeneratorComponent_GenerateSpotOnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.DeleteGroups
// ()

void UVehicleGeneratorComponent::DeleteGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.DeleteGroups");

	UVehicleGeneratorComponent_DeleteGroups_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.AddVehicleSpotCount
// ()
// Parameters:
// TEnumAsByte<ESpotType>         SpotType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, ZeroConstructor)
// float                          LocationX                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationZ                      (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleGeneratorComponent::AddVehicleSpotCount(TEnumAsByte<ESpotType> SpotType, const struct FString& Path, float LocationX, float LocationY, float LocationZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.AddVehicleSpotCount");

	UVehicleGeneratorComponent_AddVehicleSpotCount_Params params;
	params.SpotType = SpotType;
	params.Path = Path;
	params.LocationX = LocationX;
	params.LocationY = LocationY;
	params.LocationZ = LocationZ;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.AddVehicleClassCount
// ()
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleGeneratorComponent::AddVehicleClassCount(const struct FString& Path, bool IsValid, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.AddVehicleClassCount");

	UVehicleGeneratorComponent_AddVehicleClassCount_Params params;
	params.Path = Path;
	params.IsValid = IsValid;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.VehicleSpotSceneComponent.SetSpotRandomInfo
// ()
// Parameters:
// struct FVehicleGenerateRandomInfo RandomInfo                     (Parm, OutParm)

void UVehicleSpotSceneComponent::SetSpotRandomInfo(struct FVehicleGenerateRandomInfo* RandomInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleSpotSceneComponent.SetSpotRandomInfo");

	UVehicleSpotSceneComponent_SetSpotRandomInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (RandomInfo != nullptr)
		*RandomInfo = params.RandomInfo;
}


// Function Gameplay.VehicleSpotSceneComponent.GenerateSpot
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleSpotSceneComponent::GenerateSpot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleSpotSceneComponent.GenerateSpot");

	UVehicleSpotSceneComponent_GenerateSpot_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.WeatherConfigComponent.UnloadStreamLevel
// ()
// Parameters:
// struct FString                 LevelName                      (Parm, ZeroConstructor)

void UWeatherConfigComponent::UnloadStreamLevel(const struct FString& LevelName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.UnloadStreamLevel");

	UWeatherConfigComponent_UnloadStreamLevel_Params params;
	params.LevelName = LevelName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.WeatherConfigComponent.SyncWeatherLevelInfo
// ()

void UWeatherConfigComponent::SyncWeatherLevelInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.SyncWeatherLevelInfo");

	UWeatherConfigComponent_SyncWeatherLevelInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.WeatherConfigComponent.SwitchDifferentWeather
// ()
// Parameters:
// struct FString                 oldMap                         (Parm, ZeroConstructor)
// struct FString                 newMap                         (Parm, ZeroConstructor)
// int                            iNewMapID                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeatherConfigComponent::SwitchDifferentWeather(const struct FString& oldMap, const struct FString& newMap, int iNewMapID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.SwitchDifferentWeather");

	UWeatherConfigComponent_SwitchDifferentWeather_Params params;
	params.oldMap = oldMap;
	params.newMap = newMap;
	params.iNewMapID = iNewMapID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.WeatherConfigComponent.OnWeatherLevelChanged
// ()

void UWeatherConfigComponent::OnWeatherLevelChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.OnWeatherLevelChanged");

	UWeatherConfigComponent_OnWeatherLevelChanged_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.WeatherConfigComponent.OnUnLoadStreamLevelCompleted
// ()

void UWeatherConfigComponent::OnUnLoadStreamLevelCompleted()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.OnUnLoadStreamLevelCompleted");

	UWeatherConfigComponent_OnUnLoadStreamLevelCompleted_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.WeatherConfigComponent.OnRep_WeatherSyncCount
// ()

void UWeatherConfigComponent::OnRep_WeatherSyncCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.OnRep_WeatherSyncCount");

	UWeatherConfigComponent_OnRep_WeatherSyncCount_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Gameplay.WeatherConfigComponent.OnLoadWeatherLevelCompleted__DelegateSignature
// ()

void UWeatherConfigComponent::OnLoadWeatherLevelCompleted__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Gameplay.WeatherConfigComponent.OnLoadWeatherLevelCompleted__DelegateSignature");

	UWeatherConfigComponent_OnLoadWeatherLevelCompleted__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.WeatherConfigComponent.OnLoadStreamLevelCompleted
// ()

void UWeatherConfigComponent::OnLoadStreamLevelCompleted()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.OnLoadStreamLevelCompleted");

	UWeatherConfigComponent_OnLoadStreamLevelCompleted_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.WeatherConfigComponent.LoadWeatherLevel
// ()

void UWeatherConfigComponent::LoadWeatherLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.LoadWeatherLevel");

	UWeatherConfigComponent_LoadWeatherLevel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.WeatherConfigComponent.LoadStreamLevel
// ()
// Parameters:
// struct FString                 LevelName                      (Parm, ZeroConstructor)
// int                            WeatherID                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeatherConfigComponent::LoadStreamLevel(const struct FString& LevelName, int WeatherID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.LoadStreamLevel");

	UWeatherConfigComponent_LoadStreamLevel_Params params;
	params.LevelName = LevelName;
	params.WeatherID = WeatherID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.WeatherConfigComponent.LoadDefaultWeatherLevel
// ()

void UWeatherConfigComponent::LoadDefaultWeatherLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.LoadDefaultWeatherLevel");

	UWeatherConfigComponent_LoadDefaultWeatherLevel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gameplay.WeatherConfigComponent.Init
// ()

void UWeatherConfigComponent::Init()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.Init");

	UWeatherConfigComponent_Init_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

