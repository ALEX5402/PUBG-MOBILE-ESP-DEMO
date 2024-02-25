// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpawnSystem.STSpawnerBase.Thinking
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ASTSpawnerBase::Thinking(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.Thinking");

	ASTSpawnerBase_Thinking_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnerBase.Switch
// ()
// Parameters:
// bool                           IsSwitchOn                     (Parm, ZeroConstructor, IsPlainOldData)

void ASTSpawnerBase::Switch(bool IsSwitchOn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.Switch");

	ASTSpawnerBase_Switch_Params params;
	params.IsSwitchOn = IsSwitchOn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnerBase.SetSpawnerID
// ()
// Parameters:
// uint32_t                       ID                             (Parm, ZeroConstructor, IsPlainOldData)

void ASTSpawnerBase::SetSpawnerID(uint32_t ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.SetSpawnerID");

	ASTSpawnerBase_SetSpawnerID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnerBase.OnUnitSpawned
// ()
// Parameters:
// uint32_t                       InSpawnerID                    (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   AIPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ConfigId                       (Parm, ZeroConstructor, IsPlainOldData)

void ASTSpawnerBase::OnUnitSpawned(uint32_t InSpawnerID, class APawn* AIPawn, int ConfigId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.OnUnitSpawned");

	ASTSpawnerBase_OnUnitSpawned_Params params;
	params.InSpawnerID = InSpawnerID;
	params.AIPawn = AIPawn;
	params.ConfigId = ConfigId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnerBase.OnUnitDead
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ASTSpawnerBase::OnUnitDead(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.OnUnitDead");

	ASTSpawnerBase_OnUnitDead_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnerBase.OnSpawnTimingRipe
// ()
// Parameters:
// bool                           IsRipe                         (Parm, ZeroConstructor, IsPlainOldData)

void ASTSpawnerBase::OnSpawnTimingRipe(bool IsRipe)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.OnSpawnTimingRipe");

	ASTSpawnerBase_OnSpawnTimingRipe_Params params;
	params.IsRipe = IsRipe;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnerBase.OnSpawnerDeactivate
// ()

void ASTSpawnerBase::OnSpawnerDeactivate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.OnSpawnerDeactivate");

	ASTSpawnerBase_OnSpawnerDeactivate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnerBase.OnSpawnerActivate
// ()

void ASTSpawnerBase::OnSpawnerActivate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.OnSpawnerActivate");

	ASTSpawnerBase_OnSpawnerActivate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnerBase.OnRep_SpawnerID
// ()

void ASTSpawnerBase::OnRep_SpawnerID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.OnRep_SpawnerID");

	ASTSpawnerBase_OnRep_SpawnerID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnerBase.Multicast_SpawnerSnapshot
// ()
// Parameters:
// struct FString                 Timing                         (Parm, ZeroConstructor)
// struct FString                 Species                        (Parm, ZeroConstructor)
// struct FString                 Location                       (Parm, ZeroConstructor)
// struct FString                 Conditions                     (Parm, ZeroConstructor)
// struct FString                 extra                          (Parm, ZeroConstructor)

void ASTSpawnerBase::Multicast_SpawnerSnapshot(const struct FString& Timing, const struct FString& Species, const struct FString& Location, const struct FString& Conditions, const struct FString& extra)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.Multicast_SpawnerSnapshot");

	ASTSpawnerBase_Multicast_SpawnerSnapshot_Params params;
	params.Timing = Timing;
	params.Species = Species;
	params.Location = Location;
	params.Conditions = Conditions;
	params.extra = extra;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnerBase.Multicast_AlivePawnsChange
// ()
// Parameters:
// class APawn*                   Unit                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBorn                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAllDead                      (Parm, ZeroConstructor, IsPlainOldData)

void ASTSpawnerBase::Multicast_AlivePawnsChange(class APawn* Unit, bool IsBorn, bool IsAllDead)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.Multicast_AlivePawnsChange");

	ASTSpawnerBase_Multicast_AlivePawnsChange_Params params;
	params.Unit = Unit;
	params.IsBorn = IsBorn;
	params.IsAllDead = IsAllDead;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnerBase.ModifyMaxAlive
// ()
// Parameters:
// int                            NewAlive                       (Parm, ZeroConstructor, IsPlainOldData)

void ASTSpawnerBase::ModifyMaxAlive(int NewAlive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.ModifyMaxAlive");

	ASTSpawnerBase_ModifyMaxAlive_Params params;
	params.NewAlive = NewAlive;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnerBase.IsInitialized
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASTSpawnerBase::IsInitialized()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.IsInitialized");

	ASTSpawnerBase_IsInitialized_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnerBase.IsActive
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASTSpawnerBase::IsActive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.IsActive");

	ASTSpawnerBase_IsActive_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnerBase.InitSpawner
// ()

void ASTSpawnerBase::InitSpawner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.InitSpawner");

	ASTSpawnerBase_InitSpawner_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnerBase.GetTotalSpawnedNum
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ASTSpawnerBase::GetTotalSpawnedNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.GetTotalSpawnedNum");

	ASTSpawnerBase_GetTotalSpawnedNum_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnerBase.GetSpawnSystem
// ()
// Parameters:
// class USTSpawnSubsystem*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USTSpawnSubsystem* ASTSpawnerBase::GetSpawnSystem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.GetSpawnSystem");

	ASTSpawnerBase_GetSpawnSystem_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnerBase.GetSpawnSpots
// ()
// Parameters:
// TArray<class ASTSpawnSpot*>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ASTSpawnSpot*> ASTSpawnerBase::GetSpawnSpots()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.GetSpawnSpots");

	ASTSpawnerBase_GetSpawnSpots_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnerBase.GetSpawnRadius
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASTSpawnerBase::GetSpawnRadius()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.GetSpawnRadius");

	ASTSpawnerBase_GetSpawnRadius_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnerBase.GetSpawnLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ASTSpawnerBase::GetSpawnLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.GetSpawnLocation");

	ASTSpawnerBase_GetSpawnLocation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnerBase.GetSpawnExtent
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ASTSpawnerBase::GetSpawnExtent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.GetSpawnExtent");

	ASTSpawnerBase_GetSpawnExtent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnerBase.GetSpawnerSnapshot
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ASTSpawnerBase::GetSpawnerSnapshot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.GetSpawnerSnapshot");

	ASTSpawnerBase_GetSpawnerSnapshot_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnerBase.GetSpawnerID
// ()
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t ASTSpawnerBase::GetSpawnerID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.GetSpawnerID");

	ASTSpawnerBase_GetSpawnerID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnerBase.GetSpawnerDesc
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ASTSpawnerBase::GetSpawnerDesc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.GetSpawnerDesc");

	ASTSpawnerBase_GetSpawnerDesc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnerBase.GetReferencedCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ASTSpawnerBase::GetReferencedCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.GetReferencedCount");

	ASTSpawnerBase_GetReferencedCount_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnerBase.GetMaxUnits
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ASTSpawnerBase::GetMaxUnits()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.GetMaxUnits");

	ASTSpawnerBase_GetMaxUnits_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnerBase.GetMaxAlive
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ASTSpawnerBase::GetMaxAlive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.GetMaxAlive");

	ASTSpawnerBase_GetMaxAlive_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnerBase.GetAliveUnits
// ()
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> ASTSpawnerBase::GetAliveUnits()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.GetAliveUnits");

	ASTSpawnerBase_GetAliveUnits_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnerBase.FindSpot
// ()
// Parameters:
// struct FString                 SpotID                         (Parm, ZeroConstructor)
// class ASTSpawnSpot*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTSpawnSpot* ASTSpawnerBase::FindSpot(const struct FString& SpotID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.FindSpot");

	ASTSpawnerBase_FindSpot_Params params;
	params.SpotID = SpotID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnerBase.DeactivateSpawner
// ()

void ASTSpawnerBase::DeactivateSpawner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.DeactivateSpawner");

	ASTSpawnerBase_DeactivateSpawner_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnerBase.CheckTriggerGuest
// ()
// Parameters:
// class AActor*                  Guest                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASTSpawnerBase::CheckTriggerGuest(class AActor* Guest)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.CheckTriggerGuest");

	ASTSpawnerBase_CheckTriggerGuest_Params params;
	params.Guest = Guest;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnerBase.CheckOwnedUnit
// ()
// Parameters:
// class AActor*                  InUnit                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASTSpawnerBase::CheckOwnedUnit(class AActor* InUnit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.CheckOwnedUnit");

	ASTSpawnerBase_CheckOwnedUnit_Params params;
	params.InUnit = InUnit;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnerBase.AnalyseConfigData
// ()

void ASTSpawnerBase::AnalyseConfigData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.AnalyseConfigData");

	ASTSpawnerBase_AnalyseConfigData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnerBase.ActivateSpawner
// ()

void ASTSpawnerBase::ActivateSpawner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnerBase.ActivateSpawner");

	ASTSpawnerBase_ActivateSpawner_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnSubsystem.UnregisterSpawner
// ()
// Parameters:
// class ASTSpawnerBase*          Spawner                        (Parm, ZeroConstructor, IsPlainOldData)

void USTSpawnSubsystem::UnregisterSpawner(class ASTSpawnerBase* Spawner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSubsystem.UnregisterSpawner");

	USTSpawnSubsystem_UnregisterSpawner_Params params;
	params.Spawner = Spawner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnSubsystem.UnitFindSpawner
// ()
// Parameters:
// int                            UnitUID                        (Parm, ZeroConstructor, IsPlainOldData)
// class ASTSpawnerBase*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTSpawnerBase* USTSpawnSubsystem::UnitFindSpawner(int UnitUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSubsystem.UnitFindSpawner");

	USTSpawnSubsystem_UnitFindSpawner_Params params;
	params.UnitUID = UnitUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnSubsystem.SpawnUnit
// ()
// Parameters:
// struct FSTSpawnParam           SpawnParam                     (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USTSpawnSubsystem::SpawnUnit(const struct FSTSpawnParam& SpawnParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSubsystem.SpawnUnit");

	USTSpawnSubsystem_SpawnUnit_Params params;
	params.SpawnParam = SpawnParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnSubsystem.RegisterSpawner
// ()
// Parameters:
// class ASTSpawnerBase*          Spawner                        (Parm, ZeroConstructor, IsPlainOldData)

void USTSpawnSubsystem::RegisterSpawner(class ASTSpawnerBase* Spawner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSubsystem.RegisterSpawner");

	USTSpawnSubsystem_RegisterSpawner_Params params;
	params.Spawner = Spawner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnSubsystem.RecordProgress
// ()

void USTSpawnSubsystem::RecordProgress()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSubsystem.RecordProgress");

	USTSpawnSubsystem_RecordProgress_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnSubsystem.ReadySpawn
// ()

void USTSpawnSubsystem::ReadySpawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSubsystem.ReadySpawn");

	USTSpawnSubsystem_ReadySpawn_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnSubsystem.PreCheck
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTSpawnSubsystem::PreCheck()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSubsystem.PreCheck");

	USTSpawnSubsystem_PreCheck_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnSubsystem.OrderSpawnerThinking
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTSpawnSubsystem::OrderSpawnerThinking(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSubsystem.OrderSpawnerThinking");

	USTSpawnSubsystem_OrderSpawnerThinking_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnSubsystem.InitUnit
// ()
// Parameters:
// class APawn*                   AIPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FUnitInitConfig> Configs                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USTSpawnSubsystem::InitUnit(class APawn* AIPawn, TArray<struct FUnitInitConfig> Configs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSubsystem.InitUnit");

	USTSpawnSubsystem_InitUnit_Params params;
	params.AIPawn = AIPawn;
	params.Configs = Configs;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STSpawnSubsystem.GetUnitConfigID
// ()
// Parameters:
// class AActor*                  Unit                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTSpawnSubsystem::GetUnitConfigID(class AActor* Unit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSubsystem.GetUnitConfigID");

	USTSpawnSubsystem_GetUnitConfigID_Params params;
	params.Unit = Unit;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnSubsystem.GetAllUnits
// ()
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> USTSpawnSubsystem::GetAllUnits()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSubsystem.GetAllUnits");

	USTSpawnSubsystem_GetAllUnits_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnSubsystem.FindSpawner
// ()
// Parameters:
// uint32_t                       SpawnerID                      (Parm, ZeroConstructor, IsPlainOldData)
// class ASTSpawnerBase*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTSpawnerBase* USTSpawnSubsystem::FindSpawner(uint32_t SpawnerID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSubsystem.FindSpawner");

	USTSpawnSubsystem_FindSpawner_Params params;
	params.SpawnerID = SpawnerID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnSubsystem.EnQueue
// ()
// Parameters:
// struct FSTSpawnParam           SpawnParam                     (Parm, OutParm)
// class ASTSpawnerBase*          Spawner                        (Parm, ZeroConstructor, IsPlainOldData)

void USTSpawnSubsystem::EnQueue(class ASTSpawnerBase* Spawner, struct FSTSpawnParam* SpawnParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSubsystem.EnQueue");

	USTSpawnSubsystem_EnQueue_Params params;
	params.Spawner = Spawner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SpawnParam != nullptr)
		*SpawnParam = params.SpawnParam;
}


// Function SpawnSystem.STSpawnSubsystem.CleanQueue
// ()

void USTSpawnSubsystem::CleanQueue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSubsystem.CleanQueue");

	USTSpawnSubsystem_CleanQueue_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyBase.UpdateSnapshot
// ()
// Parameters:
// struct FString                 New                            (Parm, ZeroConstructor)

void USTStrategyBase::UpdateSnapshot(const struct FString& New)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyBase.UpdateSnapshot");

	USTStrategyBase_UpdateSnapshot_Params params;
	params.New = New;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyBase.TickStrategy
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyBase::TickStrategy(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyBase.TickStrategy");

	USTStrategyBase_TickStrategy_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyBase.ResetCD
// ()

void USTStrategyBase::ResetCD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyBase.ResetCD");

	USTStrategyBase_ResetCD_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyBase.OnStrategyDeactivate
// ()

void USTStrategyBase::OnStrategyDeactivate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyBase.OnStrategyDeactivate");

	USTStrategyBase_OnStrategyDeactivate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyBase.OnStrategyActivate
// ()

void USTStrategyBase::OnStrategyActivate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyBase.OnStrategyActivate");

	USTStrategyBase_OnStrategyActivate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyBase.IsSTActive
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTStrategyBase::IsSTActive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyBase.IsSTActive");

	USTStrategyBase_IsSTActive_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STStrategyBase.IsOnCD
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTStrategyBase::IsOnCD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyBase.IsOnCD");

	USTStrategyBase_IsOnCD_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STStrategyBase.GetTickEnable
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTStrategyBase::GetTickEnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyBase.GetTickEnable");

	USTStrategyBase_GetTickEnable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STStrategyBase.GetStrategyDesc
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USTStrategyBase::GetStrategyDesc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyBase.GetStrategyDesc");

	USTStrategyBase_GetStrategyDesc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STStrategyBase.GetSnapshot
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USTStrategyBase::GetSnapshot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyBase.GetSnapshot");

	USTStrategyBase_GetSnapshot_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STStrategyBase.GetOwnerSpawner
// ()
// Parameters:
// class ASTSpawnerBase*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTSpawnerBase* USTStrategyBase::GetOwnerSpawner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyBase.GetOwnerSpawner");

	USTStrategyBase_GetOwnerSpawner_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STStrategyBase.DeactivateStrategy
// ()

void USTStrategyBase::DeactivateStrategy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyBase.DeactivateStrategy");

	USTStrategyBase_DeactivateStrategy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyBase.CDRemaining
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USTStrategyBase::CDRemaining()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyBase.CDRemaining");

	USTStrategyBase_CDRemaining_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STStrategyBase.ActivateStrategy
// ()
// Parameters:
// class ASTSpawnerBase*          Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyBase::ActivateStrategy(class ASTSpawnerBase* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyBase.ActivateStrategy");

	USTStrategyBase_ActivateStrategy_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyLocation.GetSpawnLocation
// ()
// Parameters:
// class AActor*                  Requester                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReferenceCount                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSpawnSpotInfo>  OutArr                         (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTStrategyLocation::GetSpawnLocation(class AActor* Requester, int ReferenceCount, TArray<struct FSpawnSpotInfo>* OutArr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyLocation.GetSpawnLocation");

	USTStrategyLocation_GetSpawnLocation_Params params;
	params.Requester = Requester;
	params.ReferenceCount = ReferenceCount;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutArr != nullptr)
		*OutArr = params.OutArr;

	return params.ReturnValue;
}


// Function SpawnSystem.STStrategySpecies.Supply
// ()
// Parameters:
// int                            ReferencedCount                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSpawnSpotInfo>  SpotSpecies                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FUnitConfig>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FUnitConfig> USTStrategySpecies::Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategySpecies.Supply");

	USTStrategySpecies_Supply_Params params;
	params.ReferencedCount = ReferencedCount;
	params.SpotSpecies = SpotSpecies;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STStrategySpecies.GeAllCacheConfigIDs
// ()
// Parameters:
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> USTStrategySpecies::GeAllCacheConfigIDs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategySpecies.GeAllCacheConfigIDs");

	USTStrategySpecies_GeAllCacheConfigIDs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STStrategySpecies.ActivateStrategy
// ()
// Parameters:
// class ASTSpawnerBase*          Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategySpecies::ActivateStrategy(class ASTSpawnerBase* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategySpecies.ActivateStrategy");

	USTStrategySpecies_ActivateStrategy_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyTiming.TimeIsRipe
// ()

void USTStrategyTiming::TimeIsRipe()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyTiming.TimeIsRipe");

	USTStrategyTiming_TimeIsRipe_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.SpawnSystemSettings.Get
// ()
// Parameters:
// class USpawnSystemSettings*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USpawnSystemSettings* USpawnSystemSettings::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.SpawnSystemSettings.Get");

	USpawnSystemSettings_Get_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnSpot.HasModifySpecies
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASTSpawnSpot::HasModifySpecies()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSpot.HasModifySpecies");

	ASTSpawnSpot_HasModifySpecies_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnSpot.GetSpotWeigh
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ASTSpawnSpot::GetSpotWeigh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSpot.GetSpotWeigh");

	ASTSpawnSpot_GetSpotWeigh_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnSpot.GetSpotUnitIndex
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ASTSpawnSpot::GetSpotUnitIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSpot.GetSpotUnitIndex");

	ASTSpawnSpot_GetSpotUnitIndex_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnSpot.GetSpotType
// ()
// Parameters:
// ESpawnSpotType                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESpawnSpotType ASTSpawnSpot::GetSpotType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSpot.GetSpotType");

	ASTSpawnSpot_GetSpotType_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnSpot.GetSpotSquadIndex
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ASTSpawnSpot::GetSpotSquadIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSpot.GetSpotSquadIndex");

	ASTSpawnSpot_GetSpotSquadIndex_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnSpot.GetSpotID
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ASTSpawnSpot::GetSpotID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSpot.GetSpotID");

	ASTSpawnSpot_GetSpotID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnSystemGameplayStatics.UnitFindSpawner
// ()
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            UnitUID                        (Parm, ZeroConstructor, IsPlainOldData)
// class ASTSpawnerBase*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTSpawnerBase* USTSpawnSystemGameplayStatics::UnitFindSpawner(class UObject* WorldContextObject, int UnitUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSystemGameplayStatics.UnitFindSpawner");

	USTSpawnSystemGameplayStatics_UnitFindSpawner_Params params;
	params.WorldContextObject = WorldContextObject;
	params.UnitUID = UnitUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnSystemGameplayStatics.ProjectPointToFloorWithComplexCollisionCheck
// ()
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bOutHit                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bCheckComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          OffsetHeight                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector USTSpawnSystemGameplayStatics::ProjectPointToFloorWithComplexCollisionCheck(class UObject* WorldContextObject, const struct FVector& Origin, bool bCheckComplex, float OffsetHeight, bool* bOutHit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSystemGameplayStatics.ProjectPointToFloorWithComplexCollisionCheck");

	USTSpawnSystemGameplayStatics_ProjectPointToFloorWithComplexCollisionCheck_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.bCheckComplex = bCheckComplex;
	params.OffsetHeight = OffsetHeight;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bOutHit != nullptr)
		*bOutHit = params.bOutHit;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnSystemGameplayStatics.IsEditor
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTSpawnSystemGameplayStatics::IsEditor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnSystemGameplayStatics.IsEditor");

	USTSpawnSystemGameplayStatics_IsEditor_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STSpawnVisualDebug.Get
// ()
// Parameters:
// class USTSpawnVisualDebug*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USTSpawnVisualDebug* USTSpawnVisualDebug::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STSpawnVisualDebug.Get");

	USTSpawnVisualDebug_Get_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STStrategyCond.LuaCheckCondition
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTStrategyCond::LuaCheckCondition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyCond.LuaCheckCondition");

	USTStrategyCond_LuaCheckCondition_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STStrategyCond.CheckCondition
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTStrategyCond::CheckCondition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyCond.CheckCondition");

	USTStrategyCond_CheckCondition_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STStrategyCond_Hide.CheckCondition
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTStrategyCond_Hide::CheckCondition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyCond_Hide.CheckCondition");

	USTStrategyCond_Hide_CheckCondition_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STStrategyCond_Quantity.CheckCondition
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTStrategyCond_Quantity::CheckCondition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyCond_Quantity.CheckCondition");

	USTStrategyCond_Quantity_CheckCondition_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STStrategyCond_Quantity.ActivateStrategy
// ()
// Parameters:
// class ASTSpawnerBase*          Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyCond_Quantity::ActivateStrategy(class ASTSpawnerBase* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyCond_Quantity.ActivateStrategy");

	USTStrategyCond_Quantity_ActivateStrategy_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyLocation_Root.GetSpawnLocation
// ()
// Parameters:
// class AActor*                  Requester                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReferenceCount                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSpawnSpotInfo>  OutArr                         (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTStrategyLocation_Root::GetSpawnLocation(class AActor* Requester, int ReferenceCount, TArray<struct FSpawnSpotInfo>* OutArr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyLocation_Root.GetSpawnLocation");

	USTStrategyLocation_Root_GetSpawnLocation_Params params;
	params.Requester = Requester;
	params.ReferenceCount = ReferenceCount;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutArr != nullptr)
		*OutArr = params.OutArr;

	return params.ReturnValue;
}


// Function SpawnSystem.STStrategyLocation_Spots.GetSpawnLocation
// ()
// Parameters:
// class AActor*                  Requester                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReferenceCount                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSpawnSpotInfo>  OutArr                         (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTStrategyLocation_Spots::GetSpawnLocation(class AActor* Requester, int ReferenceCount, TArray<struct FSpawnSpotInfo>* OutArr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyLocation_Spots.GetSpawnLocation");

	USTStrategyLocation_Spots_GetSpawnLocation_Params params;
	params.Requester = Requester;
	params.ReferenceCount = ReferenceCount;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutArr != nullptr)
		*OutArr = params.OutArr;

	return params.ReturnValue;
}


// Function SpawnSystem.STStrategySpecies_SquadRatio.Supply
// ()
// Parameters:
// int                            ReferencedCount                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSpawnSpotInfo>  SpotSpecies                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FUnitConfig>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FUnitConfig> USTStrategySpecies_SquadRatio::Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategySpecies_SquadRatio.Supply");

	USTStrategySpecies_SquadRatio_Supply_Params params;
	params.ReferencedCount = ReferencedCount;
	params.SpotSpecies = SpotSpecies;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STStrategySpecies_SquadRatio.ReadSquadRatios
// ()
// Parameters:
// int                            ReferencedCount                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FUnitRatio>      RatioConfig                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USTStrategySpecies_SquadRatio::ReadSquadRatios(int ReferencedCount, TArray<struct FUnitRatio> RatioConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategySpecies_SquadRatio.ReadSquadRatios");

	USTStrategySpecies_SquadRatio_ReadSquadRatios_Params params;
	params.ReferencedCount = ReferencedCount;
	params.RatioConfig = RatioConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategySpecies_SquadRatio.ActivateStrategy
// ()
// Parameters:
// class ASTSpawnerBase*          Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategySpecies_SquadRatio::ActivateStrategy(class ASTSpawnerBase* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategySpecies_SquadRatio.ActivateStrategy");

	USTStrategySpecies_SquadRatio_ActivateStrategy_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategySpecies_Static.WeightedReadUnit
// ()
// Parameters:
// int                            ReferencedCount                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FUnitConfig>     Units                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USTStrategySpecies_Static::WeightedReadUnit(int ReferencedCount, TArray<struct FUnitConfig> Units)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategySpecies_Static.WeightedReadUnit");

	USTStrategySpecies_Static_WeightedReadUnit_Params params;
	params.ReferencedCount = ReferencedCount;
	params.Units = Units;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategySpecies_Static.WeightedReadSquad
// ()
// Parameters:
// int                            ReferencedCount                (Parm, ZeroConstructor, IsPlainOldData)
// struct FSquadConfig            SquadConfig                    (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FUnitConfig>     Units                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USTStrategySpecies_Static::WeightedReadSquad(int ReferencedCount, const struct FSquadConfig& SquadConfig, TArray<struct FUnitConfig> Units)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategySpecies_Static.WeightedReadSquad");

	USTStrategySpecies_Static_WeightedReadSquad_Params params;
	params.ReferencedCount = ReferencedCount;
	params.SquadConfig = SquadConfig;
	params.Units = Units;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategySpecies_Static.WeightedReadGroup
// ()
// Parameters:
// int                            ReferencedCount                (Parm, ZeroConstructor, IsPlainOldData)
// struct FGroupConfig            GroupConfig                    (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FSquadConfig>    Squads                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FUnitConfig>     Units                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USTStrategySpecies_Static::WeightedReadGroup(int ReferencedCount, const struct FGroupConfig& GroupConfig, TArray<struct FSquadConfig> Squads, TArray<struct FUnitConfig> Units)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategySpecies_Static.WeightedReadGroup");

	USTStrategySpecies_Static_WeightedReadGroup_Params params;
	params.ReferencedCount = ReferencedCount;
	params.GroupConfig = GroupConfig;
	params.Squads = Squads;
	params.Units = Units;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategySpecies_Static.Supply
// ()
// Parameters:
// int                            ReferencedCount                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSpawnSpotInfo>  SpotSpecies                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FUnitConfig>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FUnitConfig> USTStrategySpecies_Static::Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategySpecies_Static.Supply");

	USTStrategySpecies_Static_Supply_Params params;
	params.ReferencedCount = ReferencedCount;
	params.SpotSpecies = SpotSpecies;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STStrategySpecies_Static.ReadSpotSpecies
// ()
// Parameters:
// int                            ReferencedCount                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSpawnSpotInfo>  SpotSpecies                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FSquadConfig>    Squads                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FUnitConfig>     Units                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USTStrategySpecies_Static::ReadSpotSpecies(TArray<struct FSpawnSpotInfo> SpotSpecies, TArray<struct FSquadConfig> Squads, TArray<struct FUnitConfig> Units, int* ReferencedCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategySpecies_Static.ReadSpotSpecies");

	USTStrategySpecies_Static_ReadSpotSpecies_Params params;
	params.SpotSpecies = SpotSpecies;
	params.Squads = Squads;
	params.Units = Units;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ReferencedCount != nullptr)
		*ReferencedCount = params.ReferencedCount;
}


// Function SpawnSystem.STStrategySpecies_Static.OrderedReadUnit
// ()
// Parameters:
// int                            ReferencedCount                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FUnitConfig>     Units                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USTStrategySpecies_Static::OrderedReadUnit(int ReferencedCount, TArray<struct FUnitConfig> Units)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategySpecies_Static.OrderedReadUnit");

	USTStrategySpecies_Static_OrderedReadUnit_Params params;
	params.ReferencedCount = ReferencedCount;
	params.Units = Units;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategySpecies_Static.OrderedReadSquad
// ()
// Parameters:
// int                            ReferencedCount                (Parm, ZeroConstructor, IsPlainOldData)
// struct FSquadConfig            SquadConfig                    (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FUnitConfig>     Units                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USTStrategySpecies_Static::OrderedReadSquad(int ReferencedCount, const struct FSquadConfig& SquadConfig, TArray<struct FUnitConfig> Units)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategySpecies_Static.OrderedReadSquad");

	USTStrategySpecies_Static_OrderedReadSquad_Params params;
	params.ReferencedCount = ReferencedCount;
	params.SquadConfig = SquadConfig;
	params.Units = Units;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategySpecies_Static.OrderedReadGroup
// ()
// Parameters:
// int                            ReferencedCount                (Parm, ZeroConstructor, IsPlainOldData)
// struct FGroupConfig            GroupConfig                    (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FSquadConfig>    Squads                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FUnitConfig>     Units                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USTStrategySpecies_Static::OrderedReadGroup(int ReferencedCount, const struct FGroupConfig& GroupConfig, TArray<struct FSquadConfig> Squads, TArray<struct FUnitConfig> Units)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategySpecies_Static.OrderedReadGroup");

	USTStrategySpecies_Static_OrderedReadGroup_Params params;
	params.ReferencedCount = ReferencedCount;
	params.GroupConfig = GroupConfig;
	params.Squads = Squads;
	params.Units = Units;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategySpecies_Static.ManuallyReadUnit
// ()
// Parameters:
// int                            ReferencedCount                (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FUnitConfig>     Units                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USTStrategySpecies_Static::ManuallyReadUnit(int ReferencedCount, int Index, TArray<struct FUnitConfig> Units)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategySpecies_Static.ManuallyReadUnit");

	USTStrategySpecies_Static_ManuallyReadUnit_Params params;
	params.ReferencedCount = ReferencedCount;
	params.Index = Index;
	params.Units = Units;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategySpecies_Static.ActivateStrategy
// ()
// Parameters:
// class ASTSpawnerBase*          Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategySpecies_Static::ActivateStrategy(class ASTSpawnerBase* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategySpecies_Static.ActivateStrategy");

	USTStrategySpecies_Static_ActivateStrategy_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyTiming_Period.TickStrategy
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyTiming_Period::TickStrategy(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyTiming_Period.TickStrategy");

	USTStrategyTiming_Period_TickStrategy_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyTiming_Period.OnReachTimer
// ()

void USTStrategyTiming_Period::OnReachTimer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyTiming_Period.OnReachTimer");

	USTStrategyTiming_Period_OnReachTimer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyTiming_Period.OnFirstDelay
// ()

void USTStrategyTiming_Period::OnFirstDelay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyTiming_Period.OnFirstDelay");

	USTStrategyTiming_Period_OnFirstDelay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyTiming_Period.DeactivateStrategy
// ()

void USTStrategyTiming_Period::DeactivateStrategy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyTiming_Period.DeactivateStrategy");

	USTStrategyTiming_Period_DeactivateStrategy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyTiming_Period.ActivateStrategy
// ()
// Parameters:
// class ASTSpawnerBase*          Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyTiming_Period::ActivateStrategy(class ASTSpawnerBase* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyTiming_Period.ActivateStrategy");

	USTStrategyTiming_Period_ActivateStrategy_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyTiming_Trigger.TickStrategy
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyTiming_Trigger::TickStrategy(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyTiming_Trigger.TickStrategy");

	USTStrategyTiming_Trigger_TickStrategy_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyTiming_Trigger.ActivateStrategy
// ()
// Parameters:
// class ASTSpawnerBase*          Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyTiming_Trigger::ActivateStrategy(class ASTSpawnerBase* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyTiming_Trigger.ActivateStrategy");

	USTStrategyTiming_Trigger_ActivateStrategy_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyTiming_Wave.TickStrategy
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyTiming_Wave::TickStrategy(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyTiming_Wave.TickStrategy");

	USTStrategyTiming_Wave_TickStrategy_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyTiming_Wave.ResetCD
// ()

void USTStrategyTiming_Wave::ResetCD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyTiming_Wave.ResetCD");

	USTStrategyTiming_Wave_ResetCD_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyTiming_Wave.OnTriggerToStartWave
// ()
// Parameters:
// bool                           IsRipe                         (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyTiming_Wave::OnTriggerToStartWave(bool IsRipe)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyTiming_Wave.OnTriggerToStartWave");

	USTStrategyTiming_Wave_OnTriggerToStartWave_Params params;
	params.IsRipe = IsRipe;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyTiming_Wave.OnDelayToStartWave
// ()

void USTStrategyTiming_Wave::OnDelayToStartWave()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyTiming_Wave.OnDelayToStartWave");

	USTStrategyTiming_Wave_OnDelayToStartWave_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpawnSystem.STStrategyTiming_Wave.GetCurrentWave
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTStrategyTiming_Wave::GetCurrentWave()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyTiming_Wave.GetCurrentWave");

	USTStrategyTiming_Wave_GetCurrentWave_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpawnSystem.STStrategyTiming_Wave.ActivateStrategy
// ()
// Parameters:
// class ASTSpawnerBase*          Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyTiming_Wave::ActivateStrategy(class ASTSpawnerBase* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpawnSystem.STStrategyTiming_Wave.ActivateStrategy");

	USTStrategyTiming_Wave_ActivateStrategy_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

