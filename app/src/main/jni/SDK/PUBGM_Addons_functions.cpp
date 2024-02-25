// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Addons.AssetPlayerSyncNode.SetGroupTimer
// ()
// Parameters:
// struct FName                   GroupName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          InternalTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UAssetPlayerSyncNode::SetGroupTimer(const struct FName& GroupName, float InternalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.AssetPlayerSyncNode.SetGroupTimer");

	UAssetPlayerSyncNode_SetGroupTimer_Params params;
	params.GroupName = GroupName;
	params.InternalTime = InternalTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.AssetPlayerSyncNode.SetGroupIndex
// ()
// Parameters:
// struct FName                   GroupName                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UAssetPlayerSyncNode::SetGroupIndex(const struct FName& GroupName, int SequenceIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.AssetPlayerSyncNode.SetGroupIndex");

	UAssetPlayerSyncNode_SetGroupIndex_Params params;
	params.GroupName = GroupName;
	params.SequenceIndex = SequenceIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.AssetPlayerSyncNode.GetGroupTime
// ()
// Parameters:
// struct FName                   GroupName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAssetPlayerSyncNode::GetGroupTime(const struct FName& GroupName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.AssetPlayerSyncNode.GetGroupTime");

	UAssetPlayerSyncNode_GetGroupTime_Params params;
	params.GroupName = GroupName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.AssetPlayerSyncNode.GetGroupIndex
// ()
// Parameters:
// struct FName                   GroupName                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAssetPlayerSyncNode::GetGroupIndex(const struct FName& GroupName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.AssetPlayerSyncNode.GetGroupIndex");

	UAssetPlayerSyncNode_GetGroupIndex_Params params;
	params.GroupName = GroupName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleAnimInstanceBase.UpdateTerrainAdapting
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleAnimInstanceBase::UpdateTerrainAdapting(float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleAnimInstanceBase.UpdateTerrainAdapting");

	UBioVehicleAnimInstanceBase_UpdateTerrainAdapting_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleAnimInstanceBase.TraceQuery
// ()

void UBioVehicleAnimInstanceBase::TraceQuery()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleAnimInstanceBase.TraceQuery");

	UBioVehicleAnimInstanceBase_TraceQuery_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleAnimInstanceBase.NotifyDriverToDoTransition
// ()
// Parameters:
// struct FString                 ToStateMachineName             (Parm, ZeroConstructor)

void UBioVehicleAnimInstanceBase::NotifyDriverToDoTransition(const struct FString& ToStateMachineName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleAnimInstanceBase.NotifyDriverToDoTransition");

	UBioVehicleAnimInstanceBase_NotifyDriverToDoTransition_Params params;
	params.ToStateMachineName = ToStateMachineName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleAnimInstanceBase.LuaOnAnimLodChanged
// ()
// Parameters:
// int                            NewAnimLod                     (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleAnimInstanceBase::LuaOnAnimLodChanged(int NewAnimLod)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleAnimInstanceBase.LuaOnAnimLodChanged");

	UBioVehicleAnimInstanceBase_LuaOnAnimLodChanged_Params params;
	params.NewAnimLod = NewAnimLod;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleAnimInstanceBase.LuaInitializeWithDeviceLevel
// ()
// Parameters:
// int                            DeviceLevel                    (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleAnimInstanceBase::LuaInitializeWithDeviceLevel(int DeviceLevel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleAnimInstanceBase.LuaInitializeWithDeviceLevel");

	UBioVehicleAnimInstanceBase_LuaInitializeWithDeviceLevel_Params params;
	params.DeviceLevel = DeviceLevel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleAnimInstanceBase.LuaInitializeAnimation
// ()

void UBioVehicleAnimInstanceBase::LuaInitializeAnimation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleAnimInstanceBase.LuaInitializeAnimation");

	UBioVehicleAnimInstanceBase_LuaInitializeAnimation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleAnimInstanceBase.LuaCacheAnimVarWithAnimList
// ()
// Parameters:
// class UBioVehicleAnimListComponent* RiderAnimListComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBioVehicleAnimInstanceBase::LuaCacheAnimVarWithAnimList(class UBioVehicleAnimListComponent* RiderAnimListComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleAnimInstanceBase.LuaCacheAnimVarWithAnimList");

	UBioVehicleAnimInstanceBase_LuaCacheAnimVarWithAnimList_Params params;
	params.RiderAnimListComponent = RiderAnimListComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleAnimInstanceBase.GetDriverAnimInstance
// ()
// Parameters:
// class UBioVehicleRiderAnimInstanceBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBioVehicleRiderAnimInstanceBase* UBioVehicleAnimInstanceBase::GetDriverAnimInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleAnimInstanceBase.GetDriverAnimInstance");

	UBioVehicleAnimInstanceBase_GetDriverAnimInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleAnimInstanceBase.CacheAnimVarWithAnimList
// ()
// Parameters:
// class UBioVehicleAnimListComponent* AnimListComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBioVehicleAnimInstanceBase::CacheAnimVarWithAnimList(class UBioVehicleAnimListComponent* AnimListComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleAnimInstanceBase.CacheAnimVarWithAnimList");

	UBioVehicleAnimInstanceBase_CacheAnimVarWithAnimList_Params params;
	params.AnimListComponent = AnimListComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleAnimInstanceBase.BoneTrace
// ()
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          UpOffset                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          DownOffset                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          TraceSphereRadius              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactPoint                    (Parm, OutParm, IsPlainOldData)
// struct FVector                 ImpactNormal                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBioVehicleAnimInstanceBase::BoneTrace(const struct FName& BoneName, float UpOffset, float DownOffset, float TraceSphereRadius, struct FVector* ImpactPoint, struct FVector* ImpactNormal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleAnimInstanceBase.BoneTrace");

	UBioVehicleAnimInstanceBase_BoneTrace_Params params;
	params.BoneName = BoneName;
	params.UpOffset = UpOffset;
	params.DownOffset = DownOffset;
	params.TraceSphereRadius = TraceSphereRadius;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ImpactPoint != nullptr)
		*ImpactPoint = params.ImpactPoint;
	if (ImpactNormal != nullptr)
		*ImpactNormal = params.ImpactNormal;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.StopJumping
// ()

void ABioVehicleBase::StopJumping()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.StopJumping");

	ABioVehicleBase_StopJumping_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.SetSimulatePhysics
// ()
// Parameters:
// bool                           bSimulate                      (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::SetSimulatePhysics(bool bSimulate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.SetSimulatePhysics");

	ABioVehicleBase_SetSimulatePhysics_Params params;
	params.bSimulate = bSimulate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.SetReplicateMovement
// ()
// Parameters:
// bool                           bInReplicateMovement           (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::SetReplicateMovement(bool bInReplicateMovement)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.SetReplicateMovement");

	ABioVehicleBase_SetReplicateMovement_Params params;
	params.bInReplicateMovement = bInReplicateMovement;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.SetHandBrake
// ()
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::SetHandBrake(float Rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.SetHandBrake");

	ABioVehicleBase_SetHandBrake_Params params;
	params.Rate = Rate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.SetBoosting
// ()
// Parameters:
// bool                           bEnalbed                       (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::SetBoosting(bool bEnalbed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.SetBoosting");

	ABioVehicleBase_SetBoosting_Params params;
	params.bEnalbed = bEnalbed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.ServerResetToPosition
// ()
// Parameters:
// struct FVector                 NewLocation                    (Parm, IsPlainOldData)
// struct FRotator                NewRotation                    (Parm, IsPlainOldData)

void ABioVehicleBase::ServerResetToPosition(const struct FVector& NewLocation, const struct FRotator& NewRotation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.ServerResetToPosition");

	ABioVehicleBase_ServerResetToPosition_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnWalkingOffLedge
// ()
// Parameters:
// struct FVector                 PreviousFloorImpactNormal      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 PreviousFloorContactNormal     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 PreviousLocation               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          TimeDelta                      (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::OnWalkingOffLedge(const struct FVector& PreviousFloorImpactNormal, const struct FVector& PreviousFloorContactNormal, const struct FVector& PreviousLocation, float TimeDelta)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnWalkingOffLedge");

	ABioVehicleBase_OnWalkingOffLedge_Params params;
	params.PreviousFloorImpactNormal = PreviousFloorImpactNormal;
	params.PreviousFloorContactNormal = PreviousFloorContactNormal;
	params.PreviousLocation = PreviousLocation;
	params.TimeDelta = TimeDelta;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnTakingDamage
// ()
// Parameters:
// class AActor*                  HitActor                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitInstigator                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpulseDir                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::OnTakingDamage(class AActor* HitActor, class AActor* HitInstigator, const struct FHitResult& HitInfo, const struct FVector& ImpulseDir, float Damage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnTakingDamage");

	ABioVehicleBase_OnTakingDamage_Params params;
	params.HitActor = HitActor;
	params.HitInstigator = HitInstigator;
	params.HitInfo = HitInfo;
	params.ImpulseDir = ImpulseDir;
	params.Damage = Damage;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnRep_ReplicatedBasedMovement
// ()

void ABioVehicleBase::OnRep_ReplicatedBasedMovement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnRep_ReplicatedBasedMovement");

	ABioVehicleBase_OnRep_ReplicatedBasedMovement_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnRep_HasBeenTamed
// ()

void ABioVehicleBase::OnRep_HasBeenTamed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnRep_HasBeenTamed");

	ABioVehicleBase_OnRep_HasBeenTamed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnRep_FuelExhausted
// ()
// Parameters:
// bool                           bPrevFuelExhausted             (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::OnRep_FuelExhausted(bool bPrevFuelExhausted)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnRep_FuelExhausted");

	ABioVehicleBase_OnRep_FuelExhausted_Params params;
	params.bPrevFuelExhausted = bPrevFuelExhausted;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnLaunched
// ()
// Parameters:
// struct FVector                 LaunchVelocity                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bXYOverride                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bZOverride                     (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnLaunched");

	ABioVehicleBase_OnLaunched_Params params;
	params.LaunchVelocity = LaunchVelocity;
	params.bXYOverride = bXYOverride;
	params.bZOverride = bZOverride;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnLanded
// ()
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABioVehicleBase::OnLanded(const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnLanded");

	ABioVehicleBase_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnJumped
// ()

void ABioVehicleBase::OnJumped()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnJumped");

	ABioVehicleBase_OnJumped_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnExitingVehicleOnServer
// ()

void ABioVehicleBase::OnExitingVehicleOnServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnExitingVehicleOnServer");

	ABioVehicleBase_OnExitingVehicleOnServer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnEnteringVehicleOnServer
// ()
// Parameters:
// bool                           IsSucc                         (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::OnEnteringVehicleOnServer(bool IsSucc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnEnteringVehicleOnServer");

	ABioVehicleBase_OnEnteringVehicleOnServer_Params params;
	params.IsSucc = IsSucc;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.OnAnimListLoadFinished
// ()
// Parameters:
// class UBioVehicleAnimListComponent* AnimListComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABioVehicleBase::OnAnimListLoadFinished(class UBioVehicleAnimListComponent* AnimListComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.OnAnimListLoadFinished");

	ABioVehicleBase_OnAnimListLoadFinished_Params params;
	params.AnimListComponent = AnimListComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.MoveUp
// ()
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::MoveUp(float Rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.MoveUp");

	ABioVehicleBase_MoveUp_Params params;
	params.Rate = Rate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.LaunchCharacter
// ()
// Parameters:
// struct FVector                 LaunchVelocity                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bXYOverride                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bZOverride                     (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::LaunchCharacter(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.LaunchCharacter");

	ABioVehicleBase_LaunchCharacter_Params params;
	params.LaunchVelocity = LaunchVelocity;
	params.bXYOverride = bXYOverride;
	params.bZOverride = bZOverride;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.K2_UpdateCustomMovement
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::K2_UpdateCustomMovement(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.K2_UpdateCustomMovement");

	ABioVehicleBase_K2_UpdateCustomMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>     PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.K2_OnMovementModeChanged");

	ABioVehicleBase_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.Jump
// ()

void ABioVehicleBase::Jump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.Jump");

	ABioVehicleBase_Jump_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.IsPlayingRootMotion
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABioVehicleBase::IsPlayingRootMotion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.IsPlayingRootMotion");

	ABioVehicleBase_IsPlayingRootMotion_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.IsJumpProvidingForce
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABioVehicleBase::IsJumpProvidingForce()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.IsJumpProvidingForce");

	ABioVehicleBase_IsJumpProvidingForce_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.HandleOnRiderAnimInstanceActive
// ()
// Parameters:
// class UAnimInstance*           ActivedAnimInstance            (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::HandleOnRiderAnimInstanceActive(class UAnimInstance* ActivedAnimInstance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.HandleOnRiderAnimInstanceActive");

	ABioVehicleBase_HandleOnRiderAnimInstanceActive_Params params;
	params.ActivedAnimInstance = ActivedAnimInstance;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.HandleOnClientBeenTamed
// ()

void ABioVehicleBase::HandleOnClientBeenTamed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.HandleOnClientBeenTamed");

	ABioVehicleBase_HandleOnClientBeenTamed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.GetVehicleOriginToLand
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABioVehicleBase::GetVehicleOriginToLand()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.GetVehicleOriginToLand");

	ABioVehicleBase_GetVehicleOriginToLand_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.GetVehicleBreakOutState
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABioVehicleBase::GetVehicleBreakOutState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.GetVehicleBreakOutState");

	ABioVehicleBase_GetVehicleBreakOutState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.GetRotationInputDir
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABioVehicleBase::GetRotationInputDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.GetRotationInputDir");

	ABioVehicleBase_GetRotationInputDir_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.GetPlayerLookAtRotation
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ABioVehicleBase::GetPlayerLookAtRotation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.GetPlayerLookAtRotation");

	ABioVehicleBase_GetPlayerLookAtRotation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.GetConsumeFuelRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABioVehicleBase::GetConsumeFuelRate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.GetConsumeFuelRate");

	ABioVehicleBase_GetConsumeFuelRate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.GetBodyShapeComponent
// ()
// Parameters:
// class UBoxComponent*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBoxComponent* ABioVehicleBase::GetBodyShapeComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.GetBodyShapeComponent");

	ABioVehicleBase_GetBodyShapeComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.GetBioVehicleMovement
// ()
// Parameters:
// class UBioVehicleMovementComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBioVehicleMovementComponent* ABioVehicleBase::GetBioVehicleMovement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.GetBioVehicleMovement");

	ABioVehicleBase_GetBioVehicleMovement_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.GetBaseTranslationOffset
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABioVehicleBase::GetBaseTranslationOffset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.GetBaseTranslationOffset");

	ABioVehicleBase_GetBaseTranslationOffset_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.ExitVehicle
// ()

void ABioVehicleBase::ExitVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.ExitVehicle");

	ABioVehicleBase_ExitVehicle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.EnterVehicle
// ()
// Parameters:
// bool                           IsSucc                         (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::EnterVehicle(bool IsSucc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.EnterVehicle");

	ABioVehicleBase_EnterVehicle_Params params;
	params.IsSucc = IsSucc;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.ClientEnterVehicle
// ()
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::ClientEnterVehicle(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.ClientEnterVehicle");

	ABioVehicleBase_ClientEnterVehicle_Params params;
	params.Character = Character;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.CanJumpInternal
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABioVehicleBase::CanJumpInternal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.CanJumpInternal");

	ABioVehicleBase_CanJumpInternal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.CanJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABioVehicleBase::CanJump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.CanJump");

	ABioVehicleBase_CanJump_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.CanConsumeFuel
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABioVehicleBase::CanConsumeFuel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.CanConsumeFuel");

	ABioVehicleBase_CanConsumeFuel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.CanCharacterEnterVehicle
// ()
// Parameters:
// class ASTExtraPlayerCharacter* InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABioVehicleBase::CanCharacterEnterVehicle(class ASTExtraPlayerCharacter* InCharacter, ESTExtraVehicleSeatType SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.CanCharacterEnterVehicle");

	ABioVehicleBase_CanCharacterEnterVehicle_Params params;
	params.InCharacter = InCharacter;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.CacheInitialMeshOffset
// ()
// Parameters:
// struct FVector                 MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (Parm, IsPlainOldData)

void ABioVehicleBase::CacheInitialMeshOffset(const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.CacheInitialMeshOffset");

	ABioVehicleBase_CacheInitialMeshOffset_Params params;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.BroadCastPlayingRandomIdleAnim
// ()
// Parameters:
// int                            RandomIdleAnim                 (Parm, ZeroConstructor, IsPlainOldData)

void ABioVehicleBase::BroadCastPlayingRandomIdleAnim(int RandomIdleAnim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.BroadCastPlayingRandomIdleAnim");

	ABioVehicleBase_BroadCastPlayingRandomIdleAnim_Params params;
	params.RandomIdleAnim = RandomIdleAnim;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleBase.BPCanCharacterEnterVehicle
// ()
// Parameters:
// class ASTExtraPlayerCharacter* InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABioVehicleBase::BPCanCharacterEnterVehicle(class ASTExtraPlayerCharacter* InCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.BPCanCharacterEnterVehicle");

	ABioVehicleBase_BPCanCharacterEnterVehicle_Params params;
	params.InCharacter = InCharacter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleBase.ActiveFootParticleEffect
// ()
// Parameters:
// struct FName                   EffectName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActivedLocation                (Parm, IsPlainOldData)

void ABioVehicleBase::ActiveFootParticleEffect(const struct FName& EffectName, const struct FVector& ActivedLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleBase.ActiveFootParticleEffect");

	ABioVehicleBase_ActiveFootParticleEffect_Params params;
	params.EffectName = EffectName;
	params.ActivedLocation = ActivedLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.UnpackAccelerationToInput
// ()
// Parameters:
// struct FVector                 InAccel                        (Parm, IsPlainOldData)

void UBioVehicleMovementComponent::UnpackAccelerationToInput(const struct FVector& InAccel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.UnpackAccelerationToInput");

	UBioVehicleMovementComponent_UnpackAccelerationToInput_Params params;
	params.InAccel = InAccel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetWalkableFloorZ
// ()
// Parameters:
// float                          InWalkableFloorZ               (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetWalkableFloorZ(float InWalkableFloorZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetWalkableFloorZ");

	UBioVehicleMovementComponent_SetWalkableFloorZ_Params params;
	params.InWalkableFloorZ = InWalkableFloorZ;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetWalkableFloorAngle
// ()
// Parameters:
// float                          InWalkableFloorAngle           (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetWalkableFloorAngle(float InWalkableFloorAngle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetWalkableFloorAngle");

	UBioVehicleMovementComponent_SetWalkableFloorAngle_Params params;
	params.InWalkableFloorAngle = InWalkableFloorAngle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetThrottleInput
// ()
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetThrottleInput(float Rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetThrottleInput");

	UBioVehicleMovementComponent_SetThrottleInput_Params params;
	params.Rate = Rate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetSteeringInput
// ()
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetSteeringInput(float Rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetSteeringInput");

	UBioVehicleMovementComponent_SetSteeringInput_Params params;
	params.Rate = Rate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetRisingInput
// ()
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetRisingInput(float Rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetRisingInput");

	UBioVehicleMovementComponent_SetRisingInput_Params params;
	params.Rate = Rate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>     NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetMovementMode");

	UBioVehicleMovementComponent_SetMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetGroupsToIgnoreMask
// ()
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBioVehicleMovementComponent::SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetGroupsToIgnoreMask");

	UBioVehicleMovementComponent_SetGroupsToIgnoreMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetGroupsToIgnore
// ()
// Parameters:
// int                            GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetGroupsToIgnore(int GroupFlags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetGroupsToIgnore");

	UBioVehicleMovementComponent_SetGroupsToIgnore_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetGroupsToAvoidMask
// ()
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBioVehicleMovementComponent::SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetGroupsToAvoidMask");

	UBioVehicleMovementComponent_SetGroupsToAvoidMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetGroupsToAvoid
// ()
// Parameters:
// int                            GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetGroupsToAvoid(int GroupFlags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetGroupsToAvoid");

	UBioVehicleMovementComponent_SetGroupsToAvoid_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetAvoidanceGroupMask
// ()
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBioVehicleMovementComponent::SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetAvoidanceGroupMask");

	UBioVehicleMovementComponent_SetAvoidanceGroupMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetAvoidanceGroup
// ()
// Parameters:
// int                            GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetAvoidanceGroup(int GroupFlags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetAvoidanceGroup");

	UBioVehicleMovementComponent_SetAvoidanceGroup_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetAvoidanceEnabled
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetAvoidanceEnabled(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetAvoidanceEnabled");

	UBioVehicleMovementComponent_SetAvoidanceEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.SetAcceptInput
// ()
// Parameters:
// bool                           bIsAccept                      (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::SetAcceptInput(bool bIsAccept)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.SetAcceptInput");

	UBioVehicleMovementComponent_SetAcceptInput_Params params;
	params.bIsAccept = bIsAccept;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ServerSetThrottleInput
// ()
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ServerSetThrottleInput(float Rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ServerSetThrottleInput");

	UBioVehicleMovementComponent_ServerSetThrottleInput_Params params;
	params.Rate = Rate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ServerSetSteeringInput
// ()
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ServerSetSteeringInput(float Rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ServerSetSteeringInput");

	UBioVehicleMovementComponent_ServerSetSteeringInput_Params params;
	params.Rate = Rate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ServerSetRisingInput
// ()
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ServerSetRisingInput(float Rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ServerSetRisingInput");

	UBioVehicleMovementComponent_ServerSetRisingInput_Params params;
	params.Rate = Rate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ServerMoveOld
// ()
// Parameters:
// float                          OldTimeStamp                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   OldAccel                       (Parm)
// unsigned char                  OldMoveFlags                   (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ServerMoveOld(float OldTimeStamp, const struct FVector_NetQuantize10& OldAccel, unsigned char OldMoveFlags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ServerMoveOld");

	UBioVehicleMovementComponent_ServerMoveOld_Params params;
	params.OldTimeStamp = OldTimeStamp;
	params.OldAccel = OldAccel;
	params.OldMoveFlags = OldMoveFlags;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ServerMoveDualHybridRootMotion
// ()
// Parameters:
// float                          TimeStamp0                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel0                       (Parm)
// unsigned char                  PendingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       View0                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel                        (Parm)
// struct FVector_NetQuantize100  ClientLoc                      (Parm)
// unsigned char                  NewFlags                       (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ClientRoll                     (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       View                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ClientMovementBase             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ClientBaseBoneName             (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ClientMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ServerMoveDualHybridRootMotion(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ServerMoveDualHybridRootMotion");

	UBioVehicleMovementComponent_ServerMoveDualHybridRootMotion_Params params;
	params.TimeStamp0 = TimeStamp0;
	params.InAccel0 = InAccel0;
	params.PendingFlags = PendingFlags;
	params.View0 = View0;
	params.TimeStamp = TimeStamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.NewFlags = NewFlags;
	params.ClientRoll = ClientRoll;
	params.View = View;
	params.ClientMovementBase = ClientMovementBase;
	params.ClientBaseBoneName = ClientBaseBoneName;
	params.ClientMovementMode = ClientMovementMode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ServerMoveDual
// ()
// Parameters:
// float                          TimeStamp0                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel0                       (Parm)
// unsigned char                  PendingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       View0                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel                        (Parm)
// struct FVector_NetQuantize100  ClientLoc                      (Parm)
// unsigned char                  NewFlags                       (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ClientRoll                     (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       View                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ClientMovementBase             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ClientBaseBoneName             (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ClientMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ServerMoveDual(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ServerMoveDual");

	UBioVehicleMovementComponent_ServerMoveDual_Params params;
	params.TimeStamp0 = TimeStamp0;
	params.InAccel0 = InAccel0;
	params.PendingFlags = PendingFlags;
	params.View0 = View0;
	params.TimeStamp = TimeStamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.NewFlags = NewFlags;
	params.ClientRoll = ClientRoll;
	params.View = View;
	params.ClientMovementBase = ClientMovementBase;
	params.ClientBaseBoneName = ClientBaseBoneName;
	params.ClientMovementMode = ClientMovementMode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ServerMove
// ()
// Parameters:
// float                          TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel                        (Parm)
// struct FVector_NetQuantize100  ClientLoc                      (Parm)
// unsigned char                  CompressedMoveFlags            (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ClientRoll                     (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       View                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ClientMovementBase             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ClientBaseBoneName             (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ClientMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ServerMove(float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ServerMove");

	UBioVehicleMovementComponent_ServerMove_Params params;
	params.TimeStamp = TimeStamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.CompressedMoveFlags = CompressedMoveFlags;
	params.ClientRoll = ClientRoll;
	params.View = View;
	params.ClientMovementBase = ClientMovementBase;
	params.ClientBaseBoneName = ClientBaseBoneName;
	params.ClientMovementMode = ClientMovementMode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.PackInputToAcceleration
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBioVehicleMovementComponent::PackInputToAcceleration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.PackInputToAcceleration");

	UBioVehicleMovementComponent_PackInputToAcceleration_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.K2_GetWalkableFloorZ
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::K2_GetWalkableFloorZ()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.K2_GetWalkableFloorZ");

	UBioVehicleMovementComponent_K2_GetWalkableFloorZ_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.K2_GetWalkableFloorAngle
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::K2_GetWalkableFloorAngle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.K2_GetWalkableFloorAngle");

	UBioVehicleMovementComponent_K2_GetWalkableFloorAngle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.K2_GetModifiedMaxAcceleration
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::K2_GetModifiedMaxAcceleration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.K2_GetModifiedMaxAcceleration");

	UBioVehicleMovementComponent_K2_GetModifiedMaxAcceleration_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.K2_FindFloor
// ()
// Parameters:
// struct FVector                 CapsuleLocation                (Parm, IsPlainOldData)
// struct FFindFloorResult        FloorResult                    (Parm, OutParm)

void UBioVehicleMovementComponent::K2_FindFloor(const struct FVector& CapsuleLocation, struct FFindFloorResult* FloorResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.K2_FindFloor");

	UBioVehicleMovementComponent_K2_FindFloor_Params params;
	params.CapsuleLocation = CapsuleLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FloorResult != nullptr)
		*FloorResult = params.FloorResult;
}


// Function Addons.BioVehicleMovementComponent.K2_ComputeFloorDist
// ()
// Parameters:
// struct FVector                 CapsuleLocation                (Parm, IsPlainOldData)
// float                          LineDistance                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          SweepDistance                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          SweepRadius                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FFindFloorResult        FloorResult                    (Parm, OutParm)

void UBioVehicleMovementComponent::K2_ComputeFloorDist(const struct FVector& CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, struct FFindFloorResult* FloorResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.K2_ComputeFloorDist");

	UBioVehicleMovementComponent_K2_ComputeFloorDist_Params params;
	params.CapsuleLocation = CapsuleLocation;
	params.LineDistance = LineDistance;
	params.SweepDistance = SweepDistance;
	params.SweepRadius = SweepRadius;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FloorResult != nullptr)
		*FloorResult = params.FloorResult;
}


// Function Addons.BioVehicleMovementComponent.IsWalking
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBioVehicleMovementComponent::IsWalking()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.IsWalking");

	UBioVehicleMovementComponent_IsWalking_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.IsWalkable
// ()
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBioVehicleMovementComponent::IsWalkable(const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.IsWalkable");

	UBioVehicleMovementComponent_IsWalkable_Params params;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.IsSwimming
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBioVehicleMovementComponent::IsSwimming()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.IsSwimming");

	UBioVehicleMovementComponent_IsSwimming_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.IsSeriousInjuriedAllowJumping
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBioVehicleMovementComponent::IsSeriousInjuriedAllowJumping()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.IsSeriousInjuriedAllowJumping");

	UBioVehicleMovementComponent_IsSeriousInjuriedAllowJumping_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.HandleOnSeatDetached
// ()
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIdx                        (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::HandleOnSeatDetached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.HandleOnSeatDetached");

	UBioVehicleMovementComponent_HandleOnSeatDetached_Params params;
	params.Character = Character;
	params.SeatType = SeatType;
	params.SeatIdx = SeatIdx;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.HandleOnSeatChanged
// ()
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        LastSeatType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            LastSeatIdx                    (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        NewSeatType                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewSeatIdx                     (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::HandleOnSeatChanged(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType LastSeatType, int LastSeatIdx, ESTExtraVehicleSeatType NewSeatType, int NewSeatIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.HandleOnSeatChanged");

	UBioVehicleMovementComponent_HandleOnSeatChanged_Params params;
	params.Character = Character;
	params.LastSeatType = LastSeatType;
	params.LastSeatIdx = LastSeatIdx;
	params.NewSeatType = NewSeatType;
	params.NewSeatIdx = NewSeatIdx;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.HandleOnSeatAttached
// ()
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIdx                        (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::HandleOnSeatAttached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.HandleOnSeatAttached");

	UBioVehicleMovementComponent_HandleOnSeatAttached_Params params;
	params.Character = Character;
	params.SeatType = SeatType;
	params.SeatIdx = SeatIdx;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.HandleOnExitVehicleAnim
// ()
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatInx                        (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::HandleOnExitVehicleAnim(class ASTExtraPlayerCharacter* Character, int SeatInx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.HandleOnExitVehicleAnim");

	UBioVehicleMovementComponent_HandleOnExitVehicleAnim_Params params;
	params.Character = Character;
	params.SeatInx = SeatInx;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.GetWalkingDecResistance
// ()
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetWalkingDecResistance(float Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetWalkingDecResistance");

	UBioVehicleMovementComponent_GetWalkingDecResistance_Params params;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetWalkingAccResistance
// ()
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetWalkingAccResistance(float Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetWalkingAccResistance");

	UBioVehicleMovementComponent_GetWalkingAccResistance_Params params;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetValidPerchRadius
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetValidPerchRadius()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetValidPerchRadius");

	UBioVehicleMovementComponent_GetValidPerchRadius_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetThrottleInput
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetThrottleInput()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetThrottleInput");

	UBioVehicleMovementComponent_GetThrottleInput_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetSteeringInput
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetSteeringInput()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetSteeringInput");

	UBioVehicleMovementComponent_GetSteeringInput_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetSlopeSpeedFactor
// ()
// Parameters:
// float                          Slope                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetSlopeSpeedFactor(float Slope)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetSlopeSpeedFactor");

	UBioVehicleMovementComponent_GetSlopeSpeedFactor_Params params;
	params.Slope = Slope;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetRisingInput
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetRisingInput()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetRisingInput");

	UBioVehicleMovementComponent_GetRisingInput_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetPredictVelocity
// ()
// Parameters:
// float                          PredictTime                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBioVehicleMovementComponent::GetPredictVelocity(float PredictTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetPredictVelocity");

	UBioVehicleMovementComponent_GetPredictVelocity_Params params;
	params.PredictTime = PredictTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetPerchRadiusThreshold
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetPerchRadiusThreshold()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetPerchRadiusThreshold");

	UBioVehicleMovementComponent_GetPerchRadiusThreshold_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetMovementBase
// ()
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* UBioVehicleMovementComponent::GetMovementBase()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetMovementBase");

	UBioVehicleMovementComponent_GetMovementBase_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetMinAnalogSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetMinAnalogSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetMinAnalogSpeed");

	UBioVehicleMovementComponent_GetMinAnalogSpeed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetMaxJumpHeightWithJumpTime
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetMaxJumpHeightWithJumpTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetMaxJumpHeightWithJumpTime");

	UBioVehicleMovementComponent_GetMaxJumpHeightWithJumpTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetMaxJumpHeight
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetMaxJumpHeight()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetMaxJumpHeight");

	UBioVehicleMovementComponent_GetMaxJumpHeight_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetMaxBrakingDeceleration
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetMaxBrakingDeceleration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetMaxBrakingDeceleration");

	UBioVehicleMovementComponent_GetMaxBrakingDeceleration_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetMaxAcceleration
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetMaxAcceleration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetMaxAcceleration");

	UBioVehicleMovementComponent_GetMaxAcceleration_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetJumpVelocityZ
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetJumpVelocityZ()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetJumpVelocityZ");

	UBioVehicleMovementComponent_GetJumpVelocityZ_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetJumpingHeightBySpeed
// ()
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetJumpingHeightBySpeed(float Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetJumpingHeightBySpeed");

	UBioVehicleMovementComponent_GetJumpingHeightBySpeed_Params params;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetJumpingHeightByObsHeight
// ()
// Parameters:
// float                          ObsHeight                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetJumpingHeightByObsHeight(float ObsHeight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetJumpingHeightByObsHeight");

	UBioVehicleMovementComponent_GetJumpingHeightByObsHeight_Params params;
	params.ObsHeight = ObsHeight;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetImpartedMovementBaseVelocity
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBioVehicleMovementComponent::GetImpartedMovementBaseVelocity()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetImpartedMovementBaseVelocity");

	UBioVehicleMovementComponent_GetImpartedMovementBaseVelocity_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetDesireAcceleration
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetDesireAcceleration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetDesireAcceleration");

	UBioVehicleMovementComponent_GetDesireAcceleration_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetCurrentAcceleration
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBioVehicleMovementComponent::GetCurrentAcceleration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetCurrentAcceleration");

	UBioVehicleMovementComponent_GetCurrentAcceleration_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetBreakAcceleration
// ()
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetBreakAcceleration(float Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetBreakAcceleration");

	UBioVehicleMovementComponent_GetBreakAcceleration_Params params;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetAngularVelocityByCurve
// ()
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AsForce                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetAngularVelocityByCurve(float Speed, bool AsForce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetAngularVelocityByCurve");

	UBioVehicleMovementComponent_GetAngularVelocityByCurve_Params params;
	params.Speed = Speed;
	params.AsForce = AsForce;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.GetAnalogInputModifier
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::GetAnalogInputModifier()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.GetAnalogInputModifier");

	UBioVehicleMovementComponent_GetAnalogInputModifier_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.DisableMovement
// ()

void UBioVehicleMovementComponent::DisableMovement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.DisableMovement");

	UBioVehicleMovementComponent_DisableMovement_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.DealWithCustomAction
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::DealWithCustomAction(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.DealWithCustomAction");

	UBioVehicleMovementComponent_DealWithCustomAction_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ClientVeryShortAdjustPosition
// ()
// Parameters:
// float                          TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLoc                         (Parm, IsPlainOldData)
// class UPrimitiveComponent*     NewBase                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   NewBaseBoneName                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasBase                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBaseRelativePosition          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ServerMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ClientVeryShortAdjustPosition(float TimeStamp, const struct FVector& NewLoc, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ClientVeryShortAdjustPosition");

	UBioVehicleMovementComponent_ClientVeryShortAdjustPosition_Params params;
	params.TimeStamp = TimeStamp;
	params.NewLoc = NewLoc;
	params.NewBase = NewBase;
	params.NewBaseBoneName = NewBaseBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ClientAdjustRootMotionSourcePosition
// ()
// Parameters:
// float                          TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRootMotionSourceGroup  ServerRootMotion               (Parm)
// bool                           bHasAnimRootMotion             (Parm, ZeroConstructor, IsPlainOldData)
// float                          ServerMontageTrackPosition     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ServerLoc                      (Parm, IsPlainOldData)
// struct FVector_NetQuantizeNormal ServerRotation                 (Parm)
// float                          ServerVelZ                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ServerBase                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ServerBoneName                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasBase                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBaseRelativePosition          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ServerMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ClientAdjustRootMotionSourcePosition(float TimeStamp, const struct FRootMotionSourceGroup& ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ClientAdjustRootMotionSourcePosition");

	UBioVehicleMovementComponent_ClientAdjustRootMotionSourcePosition_Params params;
	params.TimeStamp = TimeStamp;
	params.ServerRootMotion = ServerRootMotion;
	params.bHasAnimRootMotion = bHasAnimRootMotion;
	params.ServerMontageTrackPosition = ServerMontageTrackPosition;
	params.ServerLoc = ServerLoc;
	params.ServerRotation = ServerRotation;
	params.ServerVelZ = ServerVelZ;
	params.ServerBase = ServerBase;
	params.ServerBoneName = ServerBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ClientAdjustRootMotionPosition
// ()
// Parameters:
// float                          TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ServerMontageTrackPosition     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ServerLoc                      (Parm, IsPlainOldData)
// struct FVector_NetQuantizeNormal ServerRotation                 (Parm)
// float                          ServerVelZ                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ServerBase                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ServerBoneName                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasBase                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBaseRelativePosition          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ServerMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ClientAdjustRootMotionPosition(float TimeStamp, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ClientAdjustRootMotionPosition");

	UBioVehicleMovementComponent_ClientAdjustRootMotionPosition_Params params;
	params.TimeStamp = TimeStamp;
	params.ServerMontageTrackPosition = ServerMontageTrackPosition;
	params.ServerLoc = ServerLoc;
	params.ServerRotation = ServerRotation;
	params.ServerVelZ = ServerVelZ;
	params.ServerBase = ServerBase;
	params.ServerBoneName = ServerBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ClientAdjustPositionAndRotation
// ()
// Parameters:
// float                          TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLoc                         (Parm, IsPlainOldData)
// struct FRotator                NewRot                         (Parm, IsPlainOldData)
// struct FVector                 NewVel                         (Parm, IsPlainOldData)
// class UPrimitiveComponent*     NewBase                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   NewBaseBoneName                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasBase                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBaseRelativePosition          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ServerMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ClientAdjustPositionAndRotation(float TimeStamp, const struct FVector& NewLoc, const struct FRotator& NewRot, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ClientAdjustPositionAndRotation");

	UBioVehicleMovementComponent_ClientAdjustPositionAndRotation_Params params;
	params.TimeStamp = TimeStamp;
	params.NewLoc = NewLoc;
	params.NewRot = NewRot;
	params.NewVel = NewVel;
	params.NewBase = NewBase;
	params.NewBaseBoneName = NewBaseBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ClientAdjustPosition
// ()
// Parameters:
// float                          TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLoc                         (Parm, IsPlainOldData)
// struct FVector                 NewVel                         (Parm, IsPlainOldData)
// class UPrimitiveComponent*     NewBase                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   NewBaseBoneName                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasBase                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBaseRelativePosition          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ServerMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ClientAdjustPosition(float TimeStamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ClientAdjustPosition");

	UBioVehicleMovementComponent_ClientAdjustPosition_Params params;
	params.TimeStamp = TimeStamp;
	params.NewLoc = NewLoc;
	params.NewVel = NewVel;
	params.NewBase = NewBase;
	params.NewBaseBoneName = NewBaseBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ClientAckGoodMove
// ()
// Parameters:
// float                          TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::ClientAckGoodMove(float TimeStamp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ClientAckGoodMove");

	UBioVehicleMovementComponent_ClientAckGoodMove_Params params;
	params.TimeStamp = TimeStamp;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.ClearAccumulatedForces
// ()

void UBioVehicleMovementComponent::ClearAccumulatedForces()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.ClearAccumulatedForces");

	UBioVehicleMovementComponent_ClearAccumulatedForces_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.CapsuleTouched
// ()
// Parameters:
// class UPrimitiveComponent*     OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBioVehicleMovementComponent::CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.CapsuleTouched");

	UBioVehicleMovementComponent_CapsuleTouched_Params params;
	params.OverlappedComp = OverlappedComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.CalcVelocity
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Friction                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFluid                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          BrakingDeceleration            (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.CalcVelocity");

	UBioVehicleMovementComponent_CalcVelocity_Params params;
	params.DeltaTime = DeltaTime;
	params.Friction = Friction;
	params.bFluid = bFluid;
	params.BrakingDeceleration = BrakingDeceleration;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.CalculateVelocityWithResistance
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFluid                         (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::CalculateVelocityWithResistance(float DeltaTime, bool bFluid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.CalculateVelocityWithResistance");

	UBioVehicleMovementComponent_CalculateVelocityWithResistance_Params params;
	params.DeltaTime = DeltaTime;
	params.bFluid = bFluid;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.CalculateCurrentForwardSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBioVehicleMovementComponent::CalculateCurrentForwardSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.CalculateCurrentForwardSpeed");

	UBioVehicleMovementComponent_CalculateCurrentForwardSpeed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.BioVehicleMovementComponent.AddImpulse
// ()
// Parameters:
// struct FVector                 Impulse                        (Parm, IsPlainOldData)
// bool                           bVelocityChange                (Parm, ZeroConstructor, IsPlainOldData)

void UBioVehicleMovementComponent::AddImpulse(const struct FVector& Impulse, bool bVelocityChange)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.AddImpulse");

	UBioVehicleMovementComponent_AddImpulse_Params params;
	params.Impulse = Impulse;
	params.bVelocityChange = bVelocityChange;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.AddForce
// ()
// Parameters:
// struct FVector                 force                          (Parm, IsPlainOldData)

void UBioVehicleMovementComponent::AddForce(const struct FVector& force)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.AddForce");

	UBioVehicleMovementComponent_AddForce_Params params;
	params.force = force;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleMovementComponent.AddDirectionalBrakingAcceleration
// ()
// Parameters:
// struct FVector                 BrakingAcceleration            (Parm, IsPlainOldData)

void UBioVehicleMovementComponent::AddDirectionalBrakingAcceleration(const struct FVector& BrakingAcceleration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleMovementComponent.AddDirectionalBrakingAcceleration");

	UBioVehicleMovementComponent_AddDirectionalBrakingAcceleration_Params params;
	params.BrakingAcceleration = BrakingAcceleration;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleRiderAnimInstanceBase.LuaInitializeAnimation
// ()

void UBioVehicleRiderAnimInstanceBase::LuaInitializeAnimation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleRiderAnimInstanceBase.LuaInitializeAnimation");

	UBioVehicleRiderAnimInstanceBase_LuaInitializeAnimation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleRiderAnimInstanceBase.LuaCacheAnimVarWithAnimList
// ()
// Parameters:
// class UBioVehicleAnimListComponent* RiderAnimListComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBioVehicleRiderAnimInstanceBase::LuaCacheAnimVarWithAnimList(class UBioVehicleAnimListComponent* RiderAnimListComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleRiderAnimInstanceBase.LuaCacheAnimVarWithAnimList");

	UBioVehicleRiderAnimInstanceBase_LuaCacheAnimVarWithAnimList_Params params;
	params.RiderAnimListComponent = RiderAnimListComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleRiderAnimInstanceBase.DoTransition
// ()
// Parameters:
// struct FString                 State                          (Parm, ZeroConstructor)

void UBioVehicleRiderAnimInstanceBase::DoTransition(const struct FString& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleRiderAnimInstanceBase.DoTransition");

	UBioVehicleRiderAnimInstanceBase_DoTransition_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleRiderAnimInstanceBase.ConfirmTransition
// ()
// Parameters:
// struct FString                 State                          (Parm, ZeroConstructor)

void UBioVehicleRiderAnimInstanceBase::ConfirmTransition(const struct FString& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleRiderAnimInstanceBase.ConfirmTransition");

	UBioVehicleRiderAnimInstanceBase_ConfirmTransition_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.BioVehicleRiderAnimInstanceBase.CacheAnimVarWithAnimList
// ()
// Parameters:
// class UBioVehicleAnimListComponent* RiderAnimListComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBioVehicleRiderAnimInstanceBase::CacheAnimVarWithAnimList(class UBioVehicleAnimListComponent* RiderAnimListComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.BioVehicleRiderAnimInstanceBase.CacheAnimVarWithAnimList");

	UBioVehicleRiderAnimInstanceBase_CacheAnimVarWithAnimList_Params params;
	params.RiderAnimListComponent = RiderAnimListComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.DistanceMatchingComponent.ServerOnDistanceMatchSuccess
// ()
// Parameters:
// struct FVector                 PredictedStopLocation          (Parm, IsPlainOldData)

void UDistanceMatchingComponent::ServerOnDistanceMatchSuccess(const struct FVector& PredictedStopLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.DistanceMatchingComponent.ServerOnDistanceMatchSuccess");

	UDistanceMatchingComponent_ServerOnDistanceMatchSuccess_Params params;
	params.PredictedStopLocation = PredictedStopLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.DistanceMatchingComponent.PredictStopLocation
// ()
// Parameters:
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDistanceMatchingComponent::PredictStopLocation(struct FVector* OutLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.DistanceMatchingComponent.PredictStopLocation");

	UDistanceMatchingComponent_PredictStopLocation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;

	return params.ReturnValue;
}


// Function Addons.DistanceMatchingComponent.OnEndAccelerating
// ()

void UDistanceMatchingComponent::OnEndAccelerating()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.DistanceMatchingComponent.OnEndAccelerating");

	UDistanceMatchingComponent_OnEndAccelerating_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.DistanceMatchingComponent.GetBioVehicleAnimInstance
// ()
// Parameters:
// class UAnimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimInstance* UDistanceMatchingComponent::GetBioVehicleAnimInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.DistanceMatchingComponent.GetBioVehicleAnimInstance");

	UDistanceMatchingComponent_GetBioVehicleAnimInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.DistanceMatchingComponent.BroadCastOnDistanceMatchSuccess
// ()
// Parameters:
// struct FVector                 PredictedStopLocation          (Parm, IsPlainOldData)

void UDistanceMatchingComponent::BroadCastOnDistanceMatchSuccess(const struct FVector& PredictedStopLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.DistanceMatchingComponent.BroadCastOnDistanceMatchSuccess");

	UDistanceMatchingComponent_BroadCastOnDistanceMatchSuccess_Params params;
	params.PredictedStopLocation = PredictedStopLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.DistanceMatchingInterface.OnDistanceMatchingSuccess
// ()
// Parameters:
// struct FVector                 PredictedStopLocation          (Parm, IsPlainOldData)

void UDistanceMatchingInterface::OnDistanceMatchingSuccess(const struct FVector& PredictedStopLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.DistanceMatchingInterface.OnDistanceMatchingSuccess");

	UDistanceMatchingInterface_OnDistanceMatchingSuccess_Params params;
	params.PredictedStopLocation = PredictedStopLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LandingCreatureAnimInstance.SetJump
// ()

void ULandingCreatureAnimInstance::SetJump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LandingCreatureAnimInstance.SetJump");

	ULandingCreatureAnimInstance_SetJump_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LandingCreatureAnimInstance.ResetStop
// ()

void ULandingCreatureAnimInstance::ResetStop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LandingCreatureAnimInstance.ResetStop");

	ULandingCreatureAnimInstance_ResetStop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LandingCreatureAnimInstance.ResetJump
// ()

void ULandingCreatureAnimInstance::ResetJump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LandingCreatureAnimInstance.ResetJump");

	ULandingCreatureAnimInstance_ResetJump_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LandingCreatureAnimInstance.ResetDoRandomIdle
// ()

void ULandingCreatureAnimInstance::ResetDoRandomIdle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LandingCreatureAnimInstance.ResetDoRandomIdle");

	ULandingCreatureAnimInstance_ResetDoRandomIdle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.LandingCreatureAnimInstance.DoRandomIdle
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void ULandingCreatureAnimInstance::DoRandomIdle(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.LandingCreatureAnimInstance.DoRandomIdle");

	ULandingCreatureAnimInstance_DoRandomIdle_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.MonsterRaptorAnimInstance.OnResetPlayedIdleIndex
// ()
// Parameters:
// int                            NewIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void UMonsterRaptorAnimInstance::OnResetPlayedIdleIndex(int NewIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.MonsterRaptorAnimInstance.OnResetPlayedIdleIndex");

	UMonsterRaptorAnimInstance_OnResetPlayedIdleIndex_Params params;
	params.NewIndex = NewIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurAnimInstance.ResetStartFlying
// ()

void UPterosaurAnimInstance::ResetStartFlying()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurAnimInstance.ResetStartFlying");

	UPterosaurAnimInstance_ResetStartFlying_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurAnimInstance.OnStartFlying
// ()

void UPterosaurAnimInstance::OnStartFlying()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurAnimInstance.OnStartFlying");

	UPterosaurAnimInstance_OnStartFlying_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.UpdateVerticalHeight
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UPterosaurMovementComponent::UpdateVerticalHeight(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.UpdateVerticalHeight");

	UPterosaurMovementComponent_UpdateVerticalHeight_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.StartTakingOff
// ()

void UPterosaurMovementComponent::StartTakingOff()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.StartTakingOff");

	UPterosaurMovementComponent_StartTakingOff_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.StartSwoopDown
// ()
// Parameters:
// struct FVector                 TargetLocation                 (Parm, IsPlainOldData)

void UPterosaurMovementComponent::StartSwoopDown(const struct FVector& TargetLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.StartSwoopDown");

	UPterosaurMovementComponent_StartSwoopDown_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.StartLanding
// ()

void UPterosaurMovementComponent::StartLanding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.StartLanding");

	UPterosaurMovementComponent_StartLanding_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.StartFlyingDive
// ()

void UPterosaurMovementComponent::StartFlyingDive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.StartFlyingDive");

	UPterosaurMovementComponent_StartFlyingDive_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.SetServerDiveDirection
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, IsPlainOldData)

void UPterosaurMovementComponent::SetServerDiveDirection(const struct FVector& Direction)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.SetServerDiveDirection");

	UPterosaurMovementComponent_SetServerDiveDirection_Params params;
	params.Direction = Direction;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.SetMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>     NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void UPterosaurMovementComponent::SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.SetMovementMode");

	UPterosaurMovementComponent_SetMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.SetAutoLanding
// ()
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UPterosaurMovementComponent::SetAutoLanding(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.SetAutoLanding");

	UPterosaurMovementComponent_SetAutoLanding_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.IsTakingOff
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPterosaurMovementComponent::IsTakingOff()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.IsTakingOff");

	UPterosaurMovementComponent_IsTakingOff_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.IsSwoopDown
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPterosaurMovementComponent::IsSwoopDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.IsSwoopDown");

	UPterosaurMovementComponent_IsSwoopDown_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.IsSwoopCatching
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPterosaurMovementComponent::IsSwoopCatching()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.IsSwoopCatching");

	UPterosaurMovementComponent_IsSwoopCatching_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.IsStrugglingToLand
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPterosaurMovementComponent::IsStrugglingToLand()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.IsStrugglingToLand");

	UPterosaurMovementComponent_IsStrugglingToLand_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.IsLocalSwoopingDown
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPterosaurMovementComponent::IsLocalSwoopingDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.IsLocalSwoopingDown");

	UPterosaurMovementComponent_IsLocalSwoopingDown_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.IsLandingWalking
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPterosaurMovementComponent::IsLandingWalking()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.IsLandingWalking");

	UPterosaurMovementComponent_IsLandingWalking_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.IsLanding
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPterosaurMovementComponent::IsLanding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.IsLanding");

	UPterosaurMovementComponent_IsLanding_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.IsDiving
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPterosaurMovementComponent::IsDiving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.IsDiving");

	UPterosaurMovementComponent_IsDiving_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.IsCurveMoving
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPterosaurMovementComponent::IsCurveMoving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.IsCurveMoving");

	UPterosaurMovementComponent_IsCurveMoving_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.GetMoveState
// ()
// Parameters:
// TEnumAsByte<EPterosaurMoveMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EPterosaurMoveMode> UPterosaurMovementComponent::GetMoveState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.GetMoveState");

	UPterosaurMovementComponent_GetMoveState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.GetDistanceToLand
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPterosaurMovementComponent::GetDistanceToLand()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.GetDistanceToLand");

	UPterosaurMovementComponent_GetDistanceToLand_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.ExitSwoopDown
// ()

void UPterosaurMovementComponent::ExitSwoopDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.ExitSwoopDown");

	UPterosaurMovementComponent_ExitSwoopDown_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.ExitLanding
// ()

void UPterosaurMovementComponent::ExitLanding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.ExitLanding");

	UPterosaurMovementComponent_ExitLanding_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.EndTakingOff
// ()

void UPterosaurMovementComponent::EndTakingOff()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.EndTakingOff");

	UPterosaurMovementComponent_EndTakingOff_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.EndSwoopDown
// ()
// Parameters:
// bool                           bRestVelocity                  (Parm, ZeroConstructor, IsPlainOldData)

void UPterosaurMovementComponent::EndSwoopDown(bool bRestVelocity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.EndSwoopDown");

	UPterosaurMovementComponent_EndSwoopDown_Params params;
	params.bRestVelocity = bRestVelocity;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.EndLanding
// ()

void UPterosaurMovementComponent::EndLanding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.EndLanding");

	UPterosaurMovementComponent_EndLanding_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.EndFlyingDive
// ()

void UPterosaurMovementComponent::EndFlyingDive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.EndFlyingDive");

	UPterosaurMovementComponent_EndFlyingDive_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.DealWithCustomAction
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UPterosaurMovementComponent::DealWithCustomAction(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.DealWithCustomAction");

	UPterosaurMovementComponent_DealWithCustomAction_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.CheckCanStartFlyingDive
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPterosaurMovementComponent::CheckCanStartFlyingDive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.CheckCanStartFlyingDive");

	UPterosaurMovementComponent_CheckCanStartFlyingDive_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurMovementComponent.CalculateFlyingVelocity
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UPterosaurMovementComponent::CalculateFlyingVelocity(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.CalculateFlyingVelocity");

	UPterosaurMovementComponent_CalculateFlyingVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.CalculateFlyingAcceleration
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UPterosaurMovementComponent::CalculateFlyingAcceleration(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.CalculateFlyingAcceleration");

	UPterosaurMovementComponent_CalculateFlyingAcceleration_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurMovementComponent.CalculateDivingVelocity
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UPterosaurMovementComponent::CalculateDivingVelocity(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurMovementComponent.CalculateDivingVelocity");

	UPterosaurMovementComponent_CalculateDivingVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.TryFlyingDive
// ()
// Parameters:
// bool                           bTry                           (Parm, ZeroConstructor, IsPlainOldData)

void APterosaurVehicle::TryFlyingDive(bool bTry)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.TryFlyingDive");

	APterosaurVehicle_TryFlyingDive_Params params;
	params.bTry = bTry;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.TryCancelSwoopDown
// ()

void APterosaurVehicle::TryCancelSwoopDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.TryCancelSwoopDown");

	APterosaurVehicle_TryCancelSwoopDown_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.SetBoosting
// ()
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APterosaurVehicle::SetBoosting(bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.SetBoosting");

	APterosaurVehicle_SetBoosting_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.ServerSwoopDown
// ()
// Parameters:
// struct FVector                 TargetLocation                 (Parm, IsPlainOldData)
// bool                           IsForceEnd                     (Parm, ZeroConstructor, IsPlainOldData)

void APterosaurVehicle::ServerSwoopDown(const struct FVector& TargetLocation, bool IsForceEnd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.ServerSwoopDown");

	APterosaurVehicle_ServerSwoopDown_Params params;
	params.TargetLocation = TargetLocation;
	params.IsForceEnd = IsForceEnd;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.ServerReleaseCharacter
// ()
// Parameters:
// class ASTExtraBaseCharacter*   Requester                      (Parm, ZeroConstructor, IsPlainOldData)

void APterosaurVehicle::ServerReleaseCharacter(class ASTExtraBaseCharacter* Requester)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.ServerReleaseCharacter");

	APterosaurVehicle_ServerReleaseCharacter_Params params;
	params.Requester = Requester;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.OnRep_SyncSwoopCatchState
// ()

void APterosaurVehicle::OnRep_SyncSwoopCatchState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.OnRep_SyncSwoopCatchState");

	APterosaurVehicle_OnRep_SyncSwoopCatchState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.OnPterosaurSwoopStateChanged
// ()
// Parameters:
// EPterosaurSwoopStage           NewStage                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, IsPlainOldData)

void APterosaurVehicle::OnPterosaurSwoopStateChanged(EPterosaurSwoopStage NewStage, const struct FVector& TargetLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.OnPterosaurSwoopStateChanged");

	APterosaurVehicle_OnPterosaurSwoopStateChanged_Params params;
	params.NewStage = NewStage;
	params.TargetLocation = TargetLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.OnPterosaurPrepareCatch
// ()

void APterosaurVehicle::OnPterosaurPrepareCatch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.OnPterosaurPrepareCatch");

	APterosaurVehicle_OnPterosaurPrepareCatch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.OnClientExitFromPterosaur
// ()
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)

void APterosaurVehicle::OnClientExitFromPterosaur(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.OnClientExitFromPterosaur");

	APterosaurVehicle_OnClientExitFromPterosaur_Params params;
	params.Character = Character;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.MultiCast_SwoopDown
// ()
// Parameters:
// struct FVector                 TargetLocation                 (Parm, IsPlainOldData)

void APterosaurVehicle::MultiCast_SwoopDown(const struct FVector& TargetLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.MultiCast_SwoopDown");

	APterosaurVehicle_MultiCast_SwoopDown_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.MultiCast_SplineCorrect
// ()
// Parameters:
// struct FVector                 SyncLocation                   (Parm, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, IsPlainOldData)
// TArray<struct FVector>         SplinePoints                   (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void APterosaurVehicle::MultiCast_SplineCorrect(const struct FVector& SyncLocation, const struct FVector& TargetLocation, TArray<struct FVector> SplinePoints)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.MultiCast_SplineCorrect");

	APterosaurVehicle_MultiCast_SplineCorrect_Params params;
	params.SyncLocation = SyncLocation;
	params.TargetLocation = TargetLocation;
	params.SplinePoints = SplinePoints;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.IsSwoopDown
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APterosaurVehicle::IsSwoopDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.IsSwoopDown");

	APterosaurVehicle_IsSwoopDown_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurVehicle.IsSwoopCoolDown
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APterosaurVehicle::IsSwoopCoolDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.IsSwoopCoolDown");

	APterosaurVehicle_IsSwoopCoolDown_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurVehicle.IsSwoopCatching
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APterosaurVehicle::IsSwoopCatching()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.IsSwoopCatching");

	APterosaurVehicle_IsSwoopCatching_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurVehicle.HandleOnSeatDetached
// ()
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIdx                        (Parm, ZeroConstructor, IsPlainOldData)

void APterosaurVehicle::HandleOnSeatDetached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.HandleOnSeatDetached");

	APterosaurVehicle_HandleOnSeatDetached_Params params;
	params.Character = Character;
	params.SeatType = SeatType;
	params.SeatIdx = SeatIdx;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.HandleOnSeatAttached
// ()
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// ESTExtraVehicleSeatType        SeatType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIdx                        (Parm, ZeroConstructor, IsPlainOldData)

void APterosaurVehicle::HandleOnSeatAttached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.HandleOnSeatAttached");

	APterosaurVehicle_HandleOnSeatAttached_Params params;
	params.Character = Character;
	params.SeatType = SeatType;
	params.SeatIdx = SeatIdx;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.GetPterosaurMovementComponent
// ()
// Parameters:
// class UPterosaurMovementComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPterosaurMovementComponent* APterosaurVehicle::GetPterosaurMovementComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.GetPterosaurMovementComponent");

	APterosaurVehicle_GetPterosaurMovementComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurVehicle.GetConsumeFuelRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APterosaurVehicle::GetConsumeFuelRate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.GetConsumeFuelRate");

	APterosaurVehicle_GetConsumeFuelRate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurVehicle.ForceCatchCharacter
// ()
// Parameters:
// class ASTExtraBaseCharacter*   Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APterosaurVehicle::ForceCatchCharacter(class ASTExtraBaseCharacter* Character)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.ForceCatchCharacter");

	APterosaurVehicle_ForceCatchCharacter_Params params;
	params.Character = Character;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurVehicle.DoSwoopDown
// ()
// Parameters:
// struct FVector                 TargetLocation                 (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APterosaurVehicle::DoSwoopDown(const struct FVector& TargetLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.DoSwoopDown");

	APterosaurVehicle_DoSwoopDown_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurVehicle.CanConsumeFuel
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APterosaurVehicle::CanConsumeFuel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.CanConsumeFuel");

	APterosaurVehicle_CanConsumeFuel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.PterosaurVehicle.BroadCastOnPterosaurPrepareCatch
// ()

void APterosaurVehicle::BroadCastOnPterosaurPrepareCatch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.BroadCastOnPterosaurPrepareCatch");

	APterosaurVehicle_BroadCastOnPterosaurPrepareCatch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.PterosaurVehicle.BPOnPterosaurSwoopStateChanged
// ()
// Parameters:
// unsigned char                  NewStage                       (Parm, ZeroConstructor, IsPlainOldData)

void APterosaurVehicle::BPOnPterosaurSwoopStateChanged(unsigned char NewStage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.PterosaurVehicle.BPOnPterosaurSwoopStateChanged");

	APterosaurVehicle_BPOnPterosaurSwoopStateChanged_Params params;
	params.NewStage = NewStage;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.RaptorDriverAnimInstance.OnOwnedRaptorJumped
// ()

void URaptorDriverAnimInstance::OnOwnedRaptorJumped()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.RaptorDriverAnimInstance.OnOwnedRaptorJumped");

	URaptorDriverAnimInstance_OnOwnedRaptorJumped_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.RaptorMovementComponent.GetWalkingAccResistance
// ()
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URaptorMovementComponent::GetWalkingAccResistance(float Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.RaptorMovementComponent.GetWalkingAccResistance");

	URaptorMovementComponent_GetWalkingAccResistance_Params params;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.RaptorMovementComponent.GetMaxAcceleration
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URaptorMovementComponent::GetMaxAcceleration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.RaptorMovementComponent.GetMaxAcceleration");

	URaptorMovementComponent_GetMaxAcceleration_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.RaptorVehicle.SetHandBrake
// ()
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ARaptorVehicle::SetHandBrake(float Rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.RaptorVehicle.SetHandBrake");

	ARaptorVehicle_SetHandBrake_Params params;
	params.Rate = Rate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.RaptorVehicle.SetBoosting
// ()
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ARaptorVehicle::SetBoosting(bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.RaptorVehicle.SetBoosting");

	ARaptorVehicle_SetBoosting_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.RaptorVehicle.ServerSetHandBrake
// ()
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ARaptorVehicle::ServerSetHandBrake(float Rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.RaptorVehicle.ServerSetHandBrake");

	ARaptorVehicle_ServerSetHandBrake_Params params;
	params.Rate = Rate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.RaptorVehicle.MulticastDoJump
// ()

void ARaptorVehicle::MulticastDoJump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.RaptorVehicle.MulticastDoJump");

	ARaptorVehicle_MulticastDoJump_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.RaptorVehicle.MoveRight
// ()
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ARaptorVehicle::MoveRight(float Rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.RaptorVehicle.MoveRight");

	ARaptorVehicle_MoveRight_Params params;
	params.Rate = Rate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.RaptorVehicle.MoveForward
// ()
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ARaptorVehicle::MoveForward(float Rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.RaptorVehicle.MoveForward");

	ARaptorVehicle_MoveForward_Params params;
	params.Rate = Rate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.RaptorVehicle.GetRaptorMovementComponent
// ()
// Parameters:
// class URaptorMovementComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class URaptorMovementComponent* ARaptorVehicle::GetRaptorMovementComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.RaptorVehicle.GetRaptorMovementComponent");

	ARaptorVehicle_GetRaptorMovementComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.RaptorVehicle.DoJump
// ()

void ARaptorVehicle::DoJump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.RaptorVehicle.DoJump");

	ARaptorVehicle_DoJump_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TRexVehicleDamageComponent.HandleFootOverlapVehicle
// ()
// Parameters:
// class ASTExtraVehicleBase*     OverlappedVehicle              (Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         DamageCollision                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FOverlapResult          OverlapResult                  (Parm, OutParm, IsPlainOldData)

void UTRexVehicleDamageComponent::HandleFootOverlapVehicle(class ASTExtraVehicleBase* OverlappedVehicle, class UShapeComponent* DamageCollision, struct FOverlapResult* OverlapResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TRexVehicleDamageComponent.HandleFootOverlapVehicle");

	UTRexVehicleDamageComponent_HandleFootOverlapVehicle_Params params;
	params.OverlappedVehicle = OverlappedVehicle;
	params.DamageCollision = DamageCollision;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OverlapResult != nullptr)
		*OverlapResult = params.OverlapResult;
}


// Function Addons.TRexVehicleDamageComponent.HandleFootOverlapCharacter
// ()
// Parameters:
// class ASTExtraBaseCharacter*   OverlappedCharacter            (Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         DamageCollision                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FOverlapResult          OverlapResult                  (Parm, OutParm, IsPlainOldData)

void UTRexVehicleDamageComponent::HandleFootOverlapCharacter(class ASTExtraBaseCharacter* OverlappedCharacter, class UShapeComponent* DamageCollision, struct FOverlapResult* OverlapResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TRexVehicleDamageComponent.HandleFootOverlapCharacter");

	UTRexVehicleDamageComponent_HandleFootOverlapCharacter_Params params;
	params.OverlappedCharacter = OverlappedCharacter;
	params.DamageCollision = DamageCollision;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OverlapResult != nullptr)
		*OverlapResult = params.OverlapResult;
}


// Function Addons.TyrannosaurusRexAnimInstance.ResetStartMoving
// ()

void UTyrannosaurusRexAnimInstance::ResetStartMoving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexAnimInstance.ResetStartMoving");

	UTyrannosaurusRexAnimInstance_ResetStartMoving_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.ShowRoarOverSpeedTips
// ()

void ATyrannosaurusRexVehicle::ShowRoarOverSpeedTips()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.ShowRoarOverSpeedTips");

	ATyrannosaurusRexVehicle_ShowRoarOverSpeedTips_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.ShakeNearbyPlayerCamera
// ()
// Parameters:
// class UClass*                  CameraShakeClass               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void ATyrannosaurusRexVehicle::ShakeNearbyPlayerCamera(class UClass* CameraShakeClass, float Radius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.ShakeNearbyPlayerCamera");

	ATyrannosaurusRexVehicle_ShakeNearbyPlayerCamera_Params params;
	params.CameraShakeClass = CameraShakeClass;
	params.Radius = Radius;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.ServerStopRoar
// ()

void ATyrannosaurusRexVehicle::ServerStopRoar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.ServerStopRoar");

	ATyrannosaurusRexVehicle_ServerStopRoar_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.ServerRoar
// ()

void ATyrannosaurusRexVehicle::ServerRoar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.ServerRoar");

	ATyrannosaurusRexVehicle_ServerRoar_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.ServerBreakOut
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void ATyrannosaurusRexVehicle::ServerBreakOut(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.ServerBreakOut");

	ATyrannosaurusRexVehicle_ServerBreakOut_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.PrepareApplyRoarAttack
// ()

void ATyrannosaurusRexVehicle::PrepareApplyRoarAttack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.PrepareApplyRoarAttack");

	ATyrannosaurusRexVehicle_PrepareApplyRoarAttack_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.OnTRexHPCHanged
// ()
// Parameters:
// float                          NewHP                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          HPMax                          (Parm, ZeroConstructor, IsPlainOldData)

void ATyrannosaurusRexVehicle::OnTRexHPCHanged(float NewHP, float HPMax)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.OnTRexHPCHanged");

	ATyrannosaurusRexVehicle_OnTRexHPCHanged_Params params;
	params.NewHP = NewHP;
	params.HPMax = HPMax;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.OnRoarFinished
// ()
// Parameters:
// TEnumAsByte<EBioVehicleSkillStopReason> Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void ATyrannosaurusRexVehicle::OnRoarFinished(TEnumAsByte<EBioVehicleSkillStopReason> Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.OnRoarFinished");

	ATyrannosaurusRexVehicle_OnRoarFinished_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.OnRep_bIsRoaring
// ()

void ATyrannosaurusRexVehicle::OnRep_bIsRoaring()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.OnRep_bIsRoaring");

	ATyrannosaurusRexVehicle_OnRep_bIsRoaring_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.GetVehicleMovement
// ()
// Parameters:
// class URaptorMovementComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class URaptorMovementComponent* ATyrannosaurusRexVehicle::GetVehicleMovement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.GetVehicleMovement");

	ATyrannosaurusRexVehicle_GetVehicleMovement_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.TyrannosaurusRexVehicle.GetVehicleBreakOutState
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATyrannosaurusRexVehicle::GetVehicleBreakOutState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.GetVehicleBreakOutState");

	ATyrannosaurusRexVehicle_GetVehicleBreakOutState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.TyrannosaurusRexVehicle.GetNearlyPlayers
// ()
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ASTExtraBaseCharacter*> Results                        (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATyrannosaurusRexVehicle::GetNearlyPlayers(float Radius, TArray<class ASTExtraBaseCharacter*>* Results)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.GetNearlyPlayers");

	ATyrannosaurusRexVehicle_GetNearlyPlayers_Params params;
	params.Radius = Radius;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Results != nullptr)
		*Results = params.Results;

	return params.ReturnValue;
}


// Function Addons.TyrannosaurusRexVehicle.EndRoarAttack
// ()

void ATyrannosaurusRexVehicle::EndRoarAttack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.EndRoarAttack");

	ATyrannosaurusRexVehicle_EndRoarAttack_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.ClientHandleVehicleDead
// ()
// Parameters:
// bool                           VehicleDeadDirection           (Parm, ZeroConstructor, IsPlainOldData)

void ATyrannosaurusRexVehicle::ClientHandleVehicleDead(bool VehicleDeadDirection)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.ClientHandleVehicleDead");

	ATyrannosaurusRexVehicle_ClientHandleVehicleDead_Params params;
	params.VehicleDeadDirection = VehicleDeadDirection;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.CheckCanApplyDamageTo
// ()
// Parameters:
// class ASTExtraBaseCharacter*   Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATyrannosaurusRexVehicle::CheckCanApplyDamageTo(class ASTExtraBaseCharacter* Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.CheckCanApplyDamageTo");

	ATyrannosaurusRexVehicle_CheckCanApplyDamageTo_Params params;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Addons.TyrannosaurusRexVehicle.CallClientDrawDebugSphere
// ()
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ATyrannosaurusRexVehicle::CallClientDrawDebugSphere(const struct FVector& Location, float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.CallClientDrawDebugSphere");

	ATyrannosaurusRexVehicle_CallClientDrawDebugSphere_Params params;
	params.Location = Location;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.BroadCastStopMontage
// ()

void ATyrannosaurusRexVehicle::BroadCastStopMontage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.BroadCastStopMontage");

	ATyrannosaurusRexVehicle_BroadCastStopMontage_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.BroadCastPlayRoarMontage
// ()

void ATyrannosaurusRexVehicle::BroadCastPlayRoarMontage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.BroadCastPlayRoarMontage");

	ATyrannosaurusRexVehicle_BroadCastPlayRoarMontage_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.BroadCastClientDrawSphere
// ()
// Parameters:
// struct FVector                 Center                         (Parm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void ATyrannosaurusRexVehicle::BroadCastClientDrawSphere(const struct FVector& Center, float Radius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.BroadCastClientDrawSphere");

	ATyrannosaurusRexVehicle_BroadCastClientDrawSphere_Params params;
	params.Center = Center;
	params.Radius = Radius;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.BreakOut
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void ATyrannosaurusRexVehicle::BreakOut(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.BreakOut");

	ATyrannosaurusRexVehicle_BreakOut_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.ApplyRoarAttackToSpecifiedCharacter
// ()
// Parameters:
// class ASTExtraBaseCharacter*   TargetCharacter                (Parm, ZeroConstructor, IsPlainOldData)

void ATyrannosaurusRexVehicle::ApplyRoarAttackToSpecifiedCharacter(class ASTExtraBaseCharacter* TargetCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.ApplyRoarAttackToSpecifiedCharacter");

	ATyrannosaurusRexVehicle_ApplyRoarAttackToSpecifiedCharacter_Params params;
	params.TargetCharacter = TargetCharacter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Addons.TyrannosaurusRexVehicle.ApplyRoarAttack
// ()

void ATyrannosaurusRexVehicle::ApplyRoarAttack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Addons.TyrannosaurusRexVehicle.ApplyRoarAttack");

	ATyrannosaurusRexVehicle_ApplyRoarAttack_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

