// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AI.AESpawner.SwitchTeamAI
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AAESpawner::SwitchTeamAI(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.SwitchTeamAI");

	AAESpawner_SwitchTeamAI_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.OnUnitSpawned
// ()
// Parameters:
// uint32_t                       InSpawnerID                    (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   AIPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ConfigId                       (Parm, ZeroConstructor, IsPlainOldData)

void AAESpawner::OnUnitSpawned(uint32_t InSpawnerID, class APawn* AIPawn, int ConfigId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.OnUnitSpawned");

	AAESpawner_OnUnitSpawned_Params params;
	params.InSpawnerID = InSpawnerID;
	params.AIPawn = AIPawn;
	params.ConfigId = ConfigId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.OnSpawnTimingRipe
// ()
// Parameters:
// bool                           IsRipe                         (Parm, ZeroConstructor, IsPlainOldData)

void AAESpawner::OnSpawnTimingRipe(bool IsRipe)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.OnSpawnTimingRipe");

	AAESpawner_OnSpawnTimingRipe_Params params;
	params.IsRipe = IsRipe;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.OnOwnedMobDead
// ()
// Parameters:
// class ASTExtraSimpleCharacter* DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              KillingHitInfo                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 KillingHitImpulseDir           (Parm, IsPlainOldData)
// class UClass*                  KillingHitDamageType           (Parm, ZeroConstructor, IsPlainOldData)

void AAESpawner::OnOwnedMobDead(class ASTExtraSimpleCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.OnOwnedMobDead");

	AAESpawner_OnOwnedMobDead_Params params;
	params.DeadCharacter = DeadCharacter;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;
	params.KillingHitInfo = KillingHitInfo;
	params.KillingHitImpulseDir = KillingHitImpulseDir;
	params.KillingHitDamageType = KillingHitDamageType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.OnOwnedFakePlayerDead
// ()
// Parameters:
// class ASTExtraBaseCharacter*   DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              KillingHitInfo                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 KillingHitImpulseDir           (Parm, IsPlainOldData)
// class UClass*                  KillingHitDamageType           (Parm, ZeroConstructor, IsPlainOldData)

void AAESpawner::OnOwnedFakePlayerDead(class ASTExtraBaseCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.OnOwnedFakePlayerDead");

	AAESpawner_OnOwnedFakePlayerDead_Params params;
	params.DeadCharacter = DeadCharacter;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;
	params.KillingHitInfo = KillingHitInfo;
	params.KillingHitImpulseDir = KillingHitImpulseDir;
	params.KillingHitDamageType = KillingHitDamageType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.GetSpeciesCategory
// ()
// Parameters:
// TEnumAsByte<EBotCategray>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EBotCategray> AAESpawner::GetSpeciesCategory()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.GetSpeciesCategory");

	AAESpawner_GetSpeciesCategory_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawner.GetSpawnerTeamID
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAESpawner::GetSpawnerTeamID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.GetSpawnerTeamID");

	AAESpawner_GetSpawnerTeamID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawner.GenerateParamID
// ()
// Parameters:
// int                            ConfigId                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            BaseParamID                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AAESpawner::GenerateParamID(int ConfigId, int BaseParamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.GenerateParamID");

	AAESpawner_GenerateParamID_Params params;
	params.ConfigId = ConfigId;
	params.BaseParamID = BaseParamID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawner.DeactivateSpawner
// ()

void AAESpawner::DeactivateSpawner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.DeactivateSpawner");

	AAESpawner_DeactivateSpawner_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.BPOnUnitSpawned
// ()
// Parameters:
// class APawn*                   AIPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ConfigId                       (Parm, ZeroConstructor, IsPlainOldData)

void AAESpawner::BPOnUnitSpawned(class APawn* AIPawn, int ConfigId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.BPOnUnitSpawned");

	AAESpawner_BPOnUnitSpawned_Params params;
	params.AIPawn = AIPawn;
	params.ConfigId = ConfigId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.ActivateSpawner
// ()

void AAESpawner::ActivateSpawner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.ActivateSpawner");

	AAESpawner_ActivateSpawner_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawnSubsystem.SpawnUnit
// ()
// Parameters:
// struct FSTSpawnParam           SpawnParam                     (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAESpawnSubsystem::SpawnUnit(const struct FSTSpawnParam& SpawnParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.SpawnUnit");

	UAESpawnSubsystem_SpawnUnit_Params params;
	params.SpawnParam = SpawnParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawnSubsystem.PreCheck
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAESpawnSubsystem::PreCheck()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.PreCheck");

	UAESpawnSubsystem_PreCheck_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawnSubsystem.GetUnitConfigID
// ()
// Parameters:
// class AActor*                  Unit                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAESpawnSubsystem::GetUnitConfigID(class AActor* Unit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.GetUnitConfigID");

	UAESpawnSubsystem_GetUnitConfigID_Params params;
	params.Unit = Unit;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIActionExecutionComponent.UseItem
// ()
// Parameters:
// int                            ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponSlot                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::UseItem(int ItemID, int WeaponSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.UseItem");

	UAIActionExecutionComponent_UseItem_Params params;
	params.ItemID = ItemID;
	params.WeaponSlot = WeaponSlot;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.SwapAttachmentItem
// ()
// Parameters:
// int                            ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SourceWeaponSlot               (Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetWeaponSlot               (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::SwapAttachmentItem(int ItemID, int SourceWeaponSlot, int TargetWeaponSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.SwapAttachmentItem");

	UAIActionExecutionComponent_SwapAttachmentItem_Params params;
	params.ItemID = ItemID;
	params.SourceWeaponSlot = SourceWeaponSlot;
	params.TargetWeaponSlot = TargetWeaponSlot;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.SetGrenadeLastSelectID
// ()
// Parameters:
// int                            WeaponID                       (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::SetGrenadeLastSelectID(int WeaponID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.SetGrenadeLastSelectID");

	UAIActionExecutionComponent_SetGrenadeLastSelectID_Params params;
	params.WeaponID = WeaponID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.SetFocusRotation
// ()
// Parameters:
// float                          InPitch                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InYaw                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRoll                         (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::SetFocusRotation(float InPitch, float InYaw, float InRoll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.SetFocusRotation");

	UAIActionExecutionComponent_SetFocusRotation_Params params;
	params.InPitch = InPitch;
	params.InYaw = InYaw;
	params.InRoll = InRoll;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.SetCurShootingPose
// ()

void UAIActionExecutionComponent::SetCurShootingPose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.SetCurShootingPose");

	UAIActionExecutionComponent_SetCurShootingPose_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.RescueTarget
// ()
// Parameters:
// class ASTExtraBaseCharacter*   RescueCharacter                (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::RescueTarget(class ASTExtraBaseCharacter* RescueCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.RescueTarget");

	UAIActionExecutionComponent_RescueTarget_Params params;
	params.RescueCharacter = RescueCharacter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.OpenDoor
// ()

void UAIActionExecutionComponent::OpenDoor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.OpenDoor");

	UAIActionExecutionComponent_OpenDoor_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.IsValid
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIActionExecutionComponent::IsValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.IsValid");

	UAIActionExecutionComponent_IsValid_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIActionExecutionComponent.IsFreeCamera
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIActionExecutionComponent::IsFreeCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.IsFreeCamera");

	UAIActionExecutionComponent_IsFreeCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIActionExecutionComponent.GetPickActorWithID
// ()
// Parameters:
// int                            UId                            (Parm, ZeroConstructor, IsPlainOldData)
// class APickUpWrapperActor*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APickUpWrapperActor* UAIActionExecutionComponent::GetPickActorWithID(int UId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.GetPickActorWithID");

	UAIActionExecutionComponent_GetPickActorWithID_Params params;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIActionExecutionComponent.GetOwnerBaseCharacter
// ()
// Parameters:
// class ASTExtraBaseCharacter*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraBaseCharacter* UAIActionExecutionComponent::GetOwnerBaseCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.GetOwnerBaseCharacter");

	UAIActionExecutionComponent_GetOwnerBaseCharacter_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIActionExecutionComponent.GetBackpackComponent
// ()
// Parameters:
// class UBackpackComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBackpackComponent* UAIActionExecutionComponent::GetBackpackComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.GetBackpackComponent");

	UAIActionExecutionComponent_GetBackpackComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIActionExecutionComponent.DropItem
// ()
// Parameters:
// int                            ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::DropItem(int ItemID, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.DropItem");

	UAIActionExecutionComponent_DropItem_Params params;
	params.ItemID = ItemID;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.DoActionMove
// ()
// Parameters:
// bool                           IsRun                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          DirectionX                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DirectionY                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DirectionZ                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::DoActionMove(bool IsRun, float DirectionX, float DirectionY, float DirectionZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.DoActionMove");

	UAIActionExecutionComponent_DoActionMove_Params params;
	params.IsRun = IsRun;
	params.DirectionX = DirectionX;
	params.DirectionY = DirectionY;
	params.DirectionZ = DirectionZ;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.DoActionFreeCamera
// ()
// Parameters:
// bool                           IsEnter                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPitch                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InYaw                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRoll                         (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::DoActionFreeCamera(bool IsEnter, float InPitch, float InYaw, float InRoll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.DoActionFreeCamera");

	UAIActionExecutionComponent_DoActionFreeCamera_Params params;
	params.IsEnter = IsEnter;
	params.InPitch = InPitch;
	params.InYaw = InYaw;
	params.InRoll = InRoll;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.DisuseItem
// ()
// Parameters:
// int                            ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponSlot                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::DisuseItem(int ItemID, int WeaponSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.DisuseItem");

	UAIActionExecutionComponent_DisuseItem_Params params;
	params.ItemID = ItemID;
	params.WeaponSlot = WeaponSlot;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.CloseDoor
// ()

void UAIActionExecutionComponent::CloseDoor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.CloseDoor");

	UAIActionExecutionComponent_CloseDoor_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AISoundCollectionComponent.OnCollectionHearSound
// ()
// Parameters:
// ESoundType                     soundType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InPos                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor*                  InSourceActor                  (Parm, ZeroConstructor, IsPlainOldData)

void UAISoundCollectionComponent::OnCollectionHearSound(ESoundType soundType, const struct FVector& InPos, class AActor* InSourceActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AISoundCollectionComponent.OnCollectionHearSound");

	UAISoundCollectionComponent_OnCollectionHearSound_Params params;
	params.soundType = soundType;
	params.InPos = InPos;
	params.InSourceActor = InSourceActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AISoundCollectionComponent.GetCollectSoundInfo
// ()
// Parameters:
// TArray<struct FSoundState>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSoundState> UAISoundCollectionComponent::GetCollectSoundInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AISoundCollectionComponent.GetCollectSoundInfo");

	UAISoundCollectionComponent_GetCollectSoundInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.QueryItemStates
// ()
// Parameters:
// int                            MaxBoxNum                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxItemNum                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          AirDropBoxRangeInner           (Parm, ZeroConstructor, IsPlainOldData)
// float                          AirDropBoxRangeOuter           (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeathBoxRange                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          PickUpWrapperRange             (Parm, ZeroConstructor, IsPlainOldData)
// float                          FindBuildingRange              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InIsUseItemSpotLoc             (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxTreasureChestNum            (Parm, ZeroConstructor, IsPlainOldData)
// float                          TreasureChestRange             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FItemStateData>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FItemStateData> UAIStateInfoComponent::QueryItemStates(int MaxBoxNum, int MaxItemNum, float AirDropBoxRangeInner, float AirDropBoxRangeOuter, float DeathBoxRange, float PickUpWrapperRange, float FindBuildingRange, bool InIsUseItemSpotLoc, int MaxTreasureChestNum, float TreasureChestRange)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.QueryItemStates");

	UAIStateInfoComponent_QueryItemStates_Params params;
	params.MaxBoxNum = MaxBoxNum;
	params.MaxItemNum = MaxItemNum;
	params.AirDropBoxRangeInner = AirDropBoxRangeInner;
	params.AirDropBoxRangeOuter = AirDropBoxRangeOuter;
	params.DeathBoxRange = DeathBoxRange;
	params.PickUpWrapperRange = PickUpWrapperRange;
	params.FindBuildingRange = FindBuildingRange;
	params.InIsUseItemSpotLoc = InIsUseItemSpotLoc;
	params.MaxTreasureChestNum = MaxTreasureChestNum;
	params.TreasureChestRange = TreasureChestRange;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.OnVehicleDamageInfo
// ()
// Parameters:
// class AController*             InstigatorController           (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             VictimController               (Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageTypeId                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFatalHealthCost             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  VictimVehicle                  (Parm, ZeroConstructor, IsPlainOldData)

void UAIStateInfoComponent::OnVehicleDamageInfo(class AController* InstigatorController, class AController* VictimController, int DamageTypeId, float Damage, bool bIsFatalHealthCost, class AActor* DamageCauser, class AActor* VictimVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.OnVehicleDamageInfo");

	UAIStateInfoComponent_OnVehicleDamageInfo_Params params;
	params.InstigatorController = InstigatorController;
	params.VictimController = VictimController;
	params.DamageTypeId = DamageTypeId;
	params.Damage = Damage;
	params.bIsFatalHealthCost = bIsFatalHealthCost;
	params.DamageCauser = DamageCauser;
	params.VictimVehicle = VictimVehicle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponent.OnItemStateChanged
// ()
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)

void UAIStateInfoComponent::OnItemStateChanged(const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.OnItemStateChanged");

	UAIStateInfoComponent_OnItemStateChanged_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponent.OnAIStateRequestEnd
// ()

void UAIStateInfoComponent::OnAIStateRequestEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.OnAIStateRequestEnd");

	UAIStateInfoComponent_OnAIStateRequestEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponent.OnAirAttackInfo
// ()
// Parameters:
// TEnumAsByte<EAirAttackInfo>    airattacktype                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            waveIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAirAttackOrder         InAirAttackOrder               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 InAirAttackArea                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UAIStateInfoComponent::OnAirAttackInfo(TEnumAsByte<EAirAttackInfo> airattacktype, int waveIndex, const struct FAirAttackOrder& InAirAttackOrder, const struct FVector& InAirAttackArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.OnAirAttackInfo");

	UAIStateInfoComponent_OnAirAttackInfo_Params params;
	params.airattacktype = airattacktype;
	params.waveIndex = waveIndex;
	params.InAirAttackOrder = InAirAttackOrder;
	params.InAirAttackArea = InAirAttackArea;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponent.IsValid
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIStateInfoComponent::IsValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.IsValid");

	UAIStateInfoComponent_IsValid_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.IsAvailableBackpacItemType
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIStateInfoComponent::IsAvailableBackpacItemType(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.IsAvailableBackpacItemType");

	UAIStateInfoComponent_IsAvailableBackpacItemType_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.HasPlayerAround
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIStateInfoComponent::HasPlayerAround()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.HasPlayerAround");

	UAIStateInfoComponent_HasPlayerAround_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetViewForwardVector
// ()
// Parameters:
// class ACharacter*              InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAIStateInfoComponent::GetViewForwardVector(class ACharacter* InCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetViewForwardVector");

	UAIStateInfoComponent_GetViewForwardVector_Params params;
	params.InCharacter = InCharacter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetVehicleStatus
// ()
// Parameters:
// class ASTExtraVehicleBase*     InVehicle                      (Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraBaseCharacter*   PawnInCar                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVehicleState           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleState UAIStateInfoComponent::GetVehicleStatus(class ASTExtraVehicleBase* InVehicle, class ASTExtraBaseCharacter* PawnInCar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetVehicleStatus");

	UAIStateInfoComponent_GetVehicleStatus_Params params;
	params.InVehicle = InVehicle;
	params.PawnInCar = PawnInCar;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetTLogAIShootInfo
// ()
// Parameters:
// struct FTLogAIShootInfo        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTLogAIShootInfo UAIStateInfoComponent::GetTLogAIShootInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetTLogAIShootInfo");

	UAIStateInfoComponent_GetTLogAIShootInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetSoundInfo
// ()
// Parameters:
// TArray<struct FSoundState>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSoundState> UAIStateInfoComponent::GetSoundInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetSoundInfo");

	UAIStateInfoComponent_GetSoundInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetProgressBarState
// ()
// Parameters:
// struct FProgressBarState       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FProgressBarState UAIStateInfoComponent::GetProgressBarState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetProgressBarState");

	UAIStateInfoComponent_GetProgressBarState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetPlayerInteractInfo
// ()
// Parameters:
// struct FAIPlayerInteractInfo   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIPlayerInteractInfo UAIStateInfoComponent::GetPlayerInteractInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetPlayerInteractInfo");

	UAIStateInfoComponent_GetPlayerInteractInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetPickActorWithID
// ()
// Parameters:
// int                            UId                            (Parm, ZeroConstructor, IsPlainOldData)
// class APickUpWrapperActor*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APickUpWrapperActor* UAIStateInfoComponent::GetPickActorWithID(int UId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetPickActorWithID");

	UAIStateInfoComponent_GetPickActorWithID_Params params;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetOwnerBaseCharacter
// ()
// Parameters:
// class ASTExtraBaseCharacter*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraBaseCharacter* UAIStateInfoComponent::GetOwnerBaseCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetOwnerBaseCharacter");

	UAIStateInfoComponent_GetOwnerBaseCharacter_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetObstaclesState
// ()
// Parameters:
// float                          Range                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FObstacleState>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FObstacleState> UAIStateInfoComponent::GetObstaclesState(float Range)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetObstaclesState");

	UAIStateInfoComponent_GetObstaclesState_Params params;
	params.Range = Range;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetNearbyVehicles
// ()
// Parameters:
// class ASTExtraBaseCharacter*   InPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVehicleState>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVehicleState> UAIStateInfoComponent::GetNearbyVehicles(class ASTExtraBaseCharacter* InPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetNearbyVehicles");

	UAIStateInfoComponent_GetNearbyVehicles_Params params;
	params.InPawn = InPawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetFrameNo
// ()
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UAIStateInfoComponent::GetFrameNo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetFrameNo");

	UAIStateInfoComponent_GetFrameNo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetDoorsState
// ()
// Parameters:
// float                          Range                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxNum                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FDoorState>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FDoorState> UAIStateInfoComponent::GetDoorsState(float Range, int MaxNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetDoorsState");

	UAIStateInfoComponent_GetDoorsState_Params params;
	params.Range = Range;
	params.MaxNum = MaxNum;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetDiffAIStateInfo
// ()
// Parameters:
// struct FDiffAIStateInfo        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDiffAIStateInfo UAIStateInfoComponent::GetDiffAIStateInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetDiffAIStateInfo");

	UAIStateInfoComponent_GetDiffAIStateInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetDamageSources
// ()
// Parameters:
// struct FAIDamageSources        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIDamageSources UAIStateInfoComponent::GetDamageSources()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetDamageSources");

	UAIStateInfoComponent_GetDamageSources_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetCameraState
// ()
// Parameters:
// class ASTExtraBaseCharacter*   InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FCameraState            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCameraState UAIStateInfoComponent::GetCameraState(class ASTExtraBaseCharacter* InCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetCameraState");

	UAIStateInfoComponent_GetCameraState_Params params;
	params.InCharacter = InCharacter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetAllPlayerStateInfo
// ()
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAIStateInfo>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAIStateInfo> UAIStateInfoComponent::GetAllPlayerStateInfo(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetAllPlayerStateInfo");

	UAIStateInfoComponent_GetAllPlayerStateInfo_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetAIStateInfoInternal
// ()
// Parameters:
// struct FAIStateInfo            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIStateInfo UAIStateInfoComponent::GetAIStateInfoInternal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetAIStateInfoInternal");

	UAIStateInfoComponent_GetAIStateInfoInternal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetAIStateInfo
// ()
// Parameters:
// struct FAIStateInfo            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIStateInfo UAIStateInfoComponent::GetAIStateInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetAIStateInfo");

	UAIStateInfoComponent_GetAIStateInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetAIPlayerBackpackItems
// ()
// Parameters:
// TArray<struct FAIBackpackItem> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAIBackpackItem> UAIStateInfoComponent::GetAIPlayerBackpackItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetAIPlayerBackpackItems");

	UAIStateInfoComponent_GetAIPlayerBackpackItems_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetAINearbyThrownState
// ()
// Parameters:
// class ASTExtraBaseCharacter*   InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRange                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InCheckAngle                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxNum                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          InSmokeRange                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAINearbyThrown> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAINearbyThrown> UAIStateInfoComponent::GetAINearbyThrownState(class ASTExtraBaseCharacter* InCharacter, float InRange, float InCheckAngle, int MaxNum, float InSmokeRange)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetAINearbyThrownState");

	UAIStateInfoComponent_GetAINearbyThrownState_Params params;
	params.InCharacter = InCharacter;
	params.InRange = InRange;
	params.InCheckAngle = InCheckAngle;
	params.MaxNum = MaxNum;
	params.InSmokeRange = InSmokeRange;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.ClearVehicleDamageInfo
// ()

void UAIStateInfoComponent::ClearVehicleDamageInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.ClearVehicleDamageInfo");

	UAIStateInfoComponent_ClearVehicleDamageInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponent.ClearPlayerInteractInfo
// ()

void UAIStateInfoComponent::ClearPlayerInteractInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.ClearPlayerInteractInfo");

	UAIStateInfoComponent_ClearPlayerInteractInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponent.ClearDamageSources
// ()

void UAIStateInfoComponent::ClearDamageSources()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.ClearDamageSources");

	UAIStateInfoComponent_ClearDamageSources_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.CustomDamageEventComponent.OnRep_ClientEvents
// ()

void UCustomDamageEventComponent::OnRep_ClientEvents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.CustomDamageEventComponent.OnRep_ClientEvents");

	UCustomDamageEventComponent_OnRep_ClientEvents_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.CharacterCustomDamageEventComponent.OnTakeDamageEvent
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCustomDamageEventComponent::OnTakeDamageEvent(float Damage, const struct FDamageEvent& DamageEvent, class AActor* Victim, class AActor* Causer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.CharacterCustomDamageEventComponent.OnTakeDamageEvent");

	UCharacterCustomDamageEventComponent_OnTakeDamageEvent_Params params;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.Victim = Victim;
	params.Causer = Causer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.UnBindDelegates
// ()
// Parameters:
// bool                           IsEndPlay                      (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIControllerComponent::UnBindDelegates(bool IsEndPlay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.UnBindDelegates");

	UMLAIControllerComponent_UnBindDelegates_Params params;
	params.IsEndPlay = IsEndPlay;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.SetLuaAIParamConfigString
// ()
// Parameters:
// struct FString                 InAIParamConfigString          (Parm, ZeroConstructor)

void UMLAIControllerComponent::SetLuaAIParamConfigString(const struct FString& InAIParamConfigString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetLuaAIParamConfigString");

	UMLAIControllerComponent_SetLuaAIParamConfigString_Params params;
	params.InAIParamConfigString = InAIParamConfigString;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.SetCurShootingPose
// ()
// Parameters:
// EAIShootingPose                InCurAIShootingPose            (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIControllerComponent::SetCurShootingPose(EAIShootingPose InCurAIShootingPose)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetCurShootingPose");

	UMLAIControllerComponent_SetCurShootingPose_Params params;
	params.InCurAIShootingPose = InCurAIShootingPose;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.RestartFightBehaviorTree
// ()

void UMLAIControllerComponent::RestartFightBehaviorTree()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.RestartFightBehaviorTree");

	UMLAIControllerComponent_RestartFightBehaviorTree_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.IsValid
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAIControllerComponent::IsValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.IsValid");

	UMLAIControllerComponent_IsValid_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.IsFreeCamera
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAIControllerComponent::IsFreeCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.IsFreeCamera");

	UMLAIControllerComponent_IsFreeCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetViewRotation
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UMLAIControllerComponent::GetViewRotation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetViewRotation");

	UMLAIControllerComponent_GetViewRotation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetViewForwardVector
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UMLAIControllerComponent::GetViewForwardVector()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetViewForwardVector");

	UMLAIControllerComponent_GetViewForwardVector_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetOwnerBaseCharacter
// ()
// Parameters:
// class ASTExtraBaseCharacter*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraBaseCharacter* UMLAIControllerComponent::GetOwnerBaseCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetOwnerBaseCharacter");

	UMLAIControllerComponent_GetOwnerBaseCharacter_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetBackpackComponent
// ()
// Parameters:
// class UBackpackComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBackpackComponent* UMLAIControllerComponent::GetBackpackComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetBackpackComponent");

	UMLAIControllerComponent_GetBackpackComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetAIStateInfoComp
// ()
// Parameters:
// class UAIStateInfoComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIStateInfoComponent* UMLAIControllerComponent::GetAIStateInfoComp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetAIStateInfoComp");

	UMLAIControllerComponent_GetAIStateInfoComp_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetAIActionExecutionComp
// ()
// Parameters:
// class UAIActionExecutionComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIActionExecutionComponent* UMLAIControllerComponent::GetAIActionExecutionComp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetAIActionExecutionComp");

	UMLAIControllerComponent_GetAIActionExecutionComp_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.DoActionFreeCamera
// ()
// Parameters:
// bool                           IsEnter                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPitch                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InYaw                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRoll                         (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIControllerComponent::DoActionFreeCamera(bool IsEnter, float InPitch, float InYaw, float InRoll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.DoActionFreeCamera");

	UMLAIControllerComponent_DoActionFreeCamera_Params params;
	params.IsEnter = IsEnter;
	params.InPitch = InPitch;
	params.InYaw = InYaw;
	params.InRoll = InRoll;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.CheckCameraViewPitchLimit
// ()
// Parameters:
// struct FRotator                InOutTargetRot                 (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAIControllerComponent::CheckCameraViewPitchLimit(struct FRotator* InOutTargetRot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.CheckCameraViewPitchLimit");

	UMLAIControllerComponent_CheckCameraViewPitchLimit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InOutTargetRot != nullptr)
		*InOutTargetRot = params.InOutTargetRot;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.BindDelegates
// ()

void UMLAIControllerComponent::BindDelegates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.BindDelegates");

	UMLAIControllerComponent_BindDelegates_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.StartRequestCache
// ()

void UMLAISubSystem::StartRequestCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.StartRequestCache");

	UMLAISubSystem_StartRequestCache_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.SetSpecialZoneCustomState
// ()
// Parameters:
// class AActor*                  InParent                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            InCustomState                  (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::SetSpecialZoneCustomState(class AActor* InParent, int InCustomState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetSpecialZoneCustomState");

	UMLAISubSystem_SetSpecialZoneCustomState_Params params;
	params.InParent = InParent;
	params.InCustomState = InCustomState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.OnVehicleDamageInfo
// ()
// Parameters:
// class AController*             InstigatorController           (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             VictimController               (Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageTypeId                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFatalHealthCost             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  VictimVehicle                  (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::OnVehicleDamageInfo(class AController* InstigatorController, class AController* VictimController, int DamageTypeId, float Damage, bool bIsFatalHealthCost, class AActor* DamageCauser, class AActor* VictimVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnVehicleDamageInfo");

	UMLAISubSystem_OnVehicleDamageInfo_Params params;
	params.InstigatorController = InstigatorController;
	params.VictimController = VictimController;
	params.DamageTypeId = DamageTypeId;
	params.Damage = Damage;
	params.bIsFatalHealthCost = bIsFatalHealthCost;
	params.DamageCauser = DamageCauser;
	params.VictimVehicle = VictimVehicle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.OnPlayerDamageInfo
// ()
// Parameters:
// class ASTExtraPlayerState*     InstigatorPlayerState          (Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraPlayerState*     VictimPlayerState              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// float                          DamageBeforeCalArmor           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFatalHealthCost             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::OnPlayerDamageInfo(class ASTExtraPlayerState* InstigatorPlayerState, class ASTExtraPlayerState* VictimPlayerState, float Damage, const struct FDamageEvent& DamageEvent, float DamageBeforeCalArmor, bool bIsFatalHealthCost, class AActor* DamageCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnPlayerDamageInfo");

	UMLAISubSystem_OnPlayerDamageInfo_Params params;
	params.InstigatorPlayerState = InstigatorPlayerState;
	params.VictimPlayerState = VictimPlayerState;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.DamageBeforeCalArmor = DamageBeforeCalArmor;
	params.bIsFatalHealthCost = bIsFatalHealthCost;
	params.DamageCauser = DamageCauser;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.OnItemStateChanged
// ()
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)

void UMLAISubSystem::OnItemStateChanged(const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnItemStateChanged");

	UMLAISubSystem_OnItemStateChanged_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.IsAIBotGame
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAISubSystem::IsAIBotGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.IsAIBotGame");

	UMLAISubSystem_IsAIBotGame_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAISubSystem.EndRequestCache
// ()

void UMLAISubSystem::EndRequestCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.EndRequestCache");

	UMLAISubSystem_EndRequestCache_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAITrainingComponent.StopRunnable
// ()

void UMLAITrainingComponent::StopRunnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.StopRunnable");

	UMLAITrainingComponent_StopRunnable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAITrainingComponent.SetPauseGamePlayerState
// ()
// Parameters:
// class APlayerState*            InPlayerState                  (Parm, ZeroConstructor, IsPlainOldData)

void UMLAITrainingComponent::SetPauseGamePlayerState(class APlayerState* InPlayerState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.SetPauseGamePlayerState");

	UMLAITrainingComponent_SetPauseGamePlayerState_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAITrainingComponent.SetPause
// ()
// Parameters:
// bool                           bInPause                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPauseTime                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAITrainingComponent::SetPause(bool bInPause, float InPauseTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.SetPause");

	UMLAITrainingComponent_SetPause_Params params;
	params.bInPause = bInPause;
	params.InPauseTime = InPauseTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAITrainingComponent.SendAIStateRequest
// ()
// Parameters:
// TArray<unsigned char>          Packet                         (Parm, ZeroConstructor)

void UMLAITrainingComponent::SendAIStateRequest(TArray<unsigned char> Packet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.SendAIStateRequest");

	UMLAITrainingComponent_SendAIStateRequest_Params params;
	params.Packet = Packet;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAITrainingComponent.IsRequestAIState
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAITrainingComponent::IsRequestAIState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.IsRequestAIState");

	UMLAITrainingComponent_IsRequestAIState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAITrainingComponent.InitRunnable
// ()
// Parameters:
// float                          InStartCollectingInterval      (Parm, ZeroConstructor, IsPlainOldData)
// float                          InSendInterval                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          InTimeOutInterval              (Parm, ZeroConstructor, IsPlainOldData)

void UMLAITrainingComponent::InitRunnable(float InStartCollectingInterval, float InSendInterval, float InTimeOutInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.InitRunnable");

	UMLAITrainingComponent_InitRunnable_Params params;
	params.InStartCollectingInterval = InStartCollectingInterval;
	params.InSendInterval = InSendInterval;
	params.InTimeOutInterval = InTimeOutInterval;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAITrainingComponent.EndRequestAIState
// ()

void UMLAITrainingComponent::EndRequestAIState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.EndRequestAIState");

	UMLAITrainingComponent_EndRequestAIState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.SpecialZoneActor.UpdateCustomState
// ()
// Parameters:
// int                            InCustomState                  (Parm, ZeroConstructor, IsPlainOldData)

void ASpecialZoneActor::UpdateCustomState(int InCustomState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.SpecialZoneActor.UpdateCustomState");

	ASpecialZoneActor_UpdateCustomState_Params params;
	params.InCustomState = InCustomState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.SpecialZoneActor.GetSpecialZoneState
// ()
// Parameters:
// struct FSpecialZoneState       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSpecialZoneState ASpecialZoneActor::GetSpecialZoneState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.SpecialZoneActor.GetSpecialZoneState");

	ASpecialZoneActor_GetSpecialZoneState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.STStrategyLocation_Range.ModifyBaseLocation
// ()
// Parameters:
// struct FVector                 InLocation                     (Parm, IsPlainOldData)

void USTStrategyLocation_Range::ModifyBaseLocation(const struct FVector& InLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyLocation_Range.ModifyBaseLocation");

	USTStrategyLocation_Range_ModifyBaseLocation_Params params;
	params.InLocation = InLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategyLocation_Range.GetSpawnLocation
// ()
// Parameters:
// class AActor*                  Requester                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReferenceCount                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSpawnSpotInfo>  OutArr                         (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTStrategyLocation_Range::GetSpawnLocation(class AActor* Requester, int ReferenceCount, TArray<struct FSpawnSpotInfo>* OutArr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyLocation_Range.GetSpawnLocation");

	USTStrategyLocation_Range_GetSpawnLocation_Params params;
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


// Function AI.STStrategyLocation_Range.AddSpawnArea
// ()
// Parameters:
// struct FSpawnArea              NewArea                        (Parm)
// bool                           ForceAdd                       (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyLocation_Range::AddSpawnArea(const struct FSpawnArea& NewArea, bool ForceAdd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyLocation_Range.AddSpawnArea");

	USTStrategyLocation_Range_AddSpawnArea_Params params;
	params.NewArea = NewArea;
	params.ForceAdd = ForceAdd;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategyLocation_Range.ActivateStrategy
// ()
// Parameters:
// class ASTSpawnerBase*          Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyLocation_Range::ActivateStrategy(class ASTSpawnerBase* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyLocation_Range.ActivateStrategy");

	USTStrategyLocation_Range_ActivateStrategy_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategySpecies_Candidate.Supply
// ()
// Parameters:
// int                            ReferencedCount                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSpawnSpotInfo>  SpotSpecies                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FUnitConfig>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FUnitConfig> USTStrategySpecies_Candidate::Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategySpecies_Candidate.Supply");

	USTStrategySpecies_Candidate_Supply_Params params;
	params.ReferencedCount = ReferencedCount;
	params.SpotSpecies = SpotSpecies;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.STStrategySpecies_Candidate.ActivateStrategy
// ()
// Parameters:
// class ASTSpawnerBase*          Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategySpecies_Candidate::ActivateStrategy(class ASTSpawnerBase* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategySpecies_Candidate.ActivateStrategy");

	USTStrategySpecies_Candidate_ActivateStrategy_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategySpecies_Lua.Supply
// ()
// Parameters:
// int                            ReferencedCount                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSpawnSpotInfo>  SpotSpecies                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FUnitConfig>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FUnitConfig> USTStrategySpecies_Lua::Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategySpecies_Lua.Supply");

	USTStrategySpecies_Lua_Supply_Params params;
	params.ReferencedCount = ReferencedCount;
	params.SpotSpecies = SpotSpecies;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.STStrategySpecies_Lua.LuaSupply
// ()
// Parameters:
// int                            ReferencedCount                (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategySpecies_Lua::LuaSupply(int ReferencedCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategySpecies_Lua.LuaSupply");

	USTStrategySpecies_Lua_LuaSupply_Params params;
	params.ReferencedCount = ReferencedCount;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategyTiming_Event.TickStrategy
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyTiming_Event::TickStrategy(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyTiming_Event.TickStrategy");

	USTStrategyTiming_Event_TickStrategy_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategyTiming_Event.OnSpawnEventBroadcast
// ()

void USTStrategyTiming_Event::OnSpawnEventBroadcast()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyTiming_Event.OnSpawnEventBroadcast");

	USTStrategyTiming_Event_OnSpawnEventBroadcast_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategyTiming_Event.ActivateStrategy
// ()
// Parameters:
// class ASTSpawnerBase*          Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyTiming_Event::ActivateStrategy(class ASTSpawnerBase* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyTiming_Event.ActivateStrategy");

	USTStrategyTiming_Event_ActivateStrategy_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.ServerVehicleLeanOut
// ()
// Parameters:
// bool                           bLeanOut                       (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAIUserComponent::ServerVehicleLeanOut(bool bLeanOut)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.ServerVehicleLeanOut");

	UVehicleAIUserComponent_ServerVehicleLeanOut_Params params;
	params.bLeanOut = bLeanOut;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.ServerExitVehicle
// ()

void UVehicleAIUserComponent::ServerExitVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.ServerExitVehicle");

	UVehicleAIUserComponent_ServerExitVehicle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.ServerEnterVehicle
// ()
// Parameters:
// class ASTExtraVehicleBase*     InVehicle                      (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SeatType                       (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAIUserComponent::ServerEnterVehicle(class ASTExtraVehicleBase* InVehicle, unsigned char SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.ServerEnterVehicle");

	UVehicleAIUserComponent_ServerEnterVehicle_Params params;
	params.InVehicle = InVehicle;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.ServerChangeVehicleSeat
// ()
// Parameters:
// int                            InSeatIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAIUserComponent::ServerChangeVehicleSeat(int InSeatIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.ServerChangeVehicleSeat");

	UVehicleAIUserComponent_ServerChangeVehicleSeat_Params params;
	params.InSeatIndex = InSeatIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.MulticastExitVehicle
// ()

void UVehicleAIUserComponent::MulticastExitVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.MulticastExitVehicle");

	UVehicleAIUserComponent_MulticastExitVehicle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.MulticastEnterVehicle
// ()
// Parameters:
// class ASTExtraVehicleBase*     InVehicle                      (Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraPlayerCharacter* Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SeatType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAIUserComponent::MulticastEnterVehicle(class ASTExtraVehicleBase* InVehicle, class ASTExtraPlayerCharacter* Pawn, bool bSuccess, unsigned char SeatType, int SeatIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.MulticastEnterVehicle");

	UVehicleAIUserComponent_MulticastEnterVehicle_Params params;
	params.InVehicle = InVehicle;
	params.Pawn = Pawn;
	params.bSuccess = bSuccess;
	params.SeatType = SeatType;
	params.SeatIndex = SeatIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.MulticastChangeVehicleSeat
// ()
// Parameters:
// int                            InSeatIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAIUserComponent::MulticastChangeVehicleSeat(int InSeatIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.MulticastChangeVehicleSeat");

	UVehicleAIUserComponent_MulticastChangeVehicleSeat_Params params;
	params.InSeatIndex = InSeatIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleCustomDamageEventComponent.OnVehicleHPFuelChanged
// ()
// Parameters:
// float                          HP                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Fuel                           (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleCustomDamageEventComponent::OnVehicleHPFuelChanged(float HP, float Fuel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleCustomDamageEventComponent.OnVehicleHPFuelChanged");

	UVehicleCustomDamageEventComponent_OnVehicleHPFuelChanged_Params params;
	params.HP = HP;
	params.Fuel = Fuel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

