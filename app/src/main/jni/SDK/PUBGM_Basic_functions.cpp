// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic.UAENetActor.ReceivedPlayerActiveRegionsChanged
// ()
// Parameters:
// bool                           bEnter                         (Parm, ZeroConstructor, IsPlainOldData)

void AUAENetActor::ReceivedPlayerActiveRegionsChanged(bool bEnter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAENetActor.ReceivedPlayerActiveRegionsChanged");

	AUAENetActor_ReceivedPlayerActiveRegionsChanged_Params params;
	params.bEnter = bEnter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemHandleBase.SetAssociation
// ()
// Parameters:
// int                            AssociationType                (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemAssociation        Association                    (Parm)

void UItemHandleBase::SetAssociation(int AssociationType, const struct FItemAssociation& Association)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.SetAssociation");

	UItemHandleBase_SetAssociation_Params params;
	params.AssociationType = AssociationType;
	params.Association = Association;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemHandleBase.RemoveAssociation
// ()
// Parameters:
// int                            AssociationType                (Parm, ZeroConstructor, IsPlainOldData)

void UItemHandleBase::RemoveAssociation(int AssociationType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.RemoveAssociation");

	UItemHandleBase_RemoveAssociation_Params params;
	params.AssociationType = AssociationType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemHandleBase.Init
// ()
// Parameters:
// struct FItemDefineID           InDefineID                     (Parm)

void UItemHandleBase::Init(const struct FItemDefineID& InDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.Init");

	UItemHandleBase_Init_Params params;
	params.InDefineID = InDefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemHandleBase.GetDefineID
// ()
// Parameters:
// struct FItemDefineID           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemDefineID UItemHandleBase::GetDefineID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.GetDefineID");

	UItemHandleBase_GetDefineID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemHandleBase.GetAssociationMap
// ()
// Parameters:
// TMap<int, struct FItemAssociation> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<int, struct FItemAssociation> UItemHandleBase::GetAssociationMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.GetAssociationMap");

	UItemHandleBase_GetAssociationMap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemHandleBase.GetAssociationListByTargetType
// ()
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FItemAssociation> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FItemAssociation> UItemHandleBase::GetAssociationListByTargetType(int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.GetAssociationListByTargetType");

	UItemHandleBase_GetAssociationListByTargetType_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemHandleBase.GetAssociationByTargetDefineID
// ()
// Parameters:
// struct FItemDefineID           TargetDefineID                 (Parm)
// struct FItemAssociation        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemAssociation UItemHandleBase::GetAssociationByTargetDefineID(const struct FItemDefineID& TargetDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.GetAssociationByTargetDefineID");

	UItemHandleBase_GetAssociationByTargetDefineID_Params params;
	params.TargetDefineID = TargetDefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemHandleBase.GetAssociation
// ()
// Parameters:
// int                            AssociationType                (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemAssociation        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemAssociation UItemHandleBase::GetAssociation(int AssociationType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.GetAssociation");

	UItemHandleBase_GetAssociation_Params params;
	params.AssociationType = AssociationType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemHandleBase.Constuct
// ()
// Parameters:
// struct FItemDefineID           InDefineID                     (ConstParm, Parm, OutParm, ReferenceParm)

void UItemHandleBase::Constuct(const struct FItemDefineID& InDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.Constuct");

	UItemHandleBase_Constuct_Params params;
	params.InDefineID = InDefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemHandleBase.AddAssociation
// ()
// Parameters:
// int                            AssociationType                (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemAssociation        Association                    (Parm)

void UItemHandleBase::AddAssociation(int AssociationType, const struct FItemAssociation& Association)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.AddAssociation");

	UItemHandleBase_AddAssociation_Params params;
	params.AssociationType = AssociationType;
	params.Association = Association;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BattleItemHandleBase.UpdateAttributeModify
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandleBase::UpdateAttributeModify(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.UpdateAttributeModify");

	UBattleItemHandleBase_UpdateAttributeModify_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BattleItemHandleBase.UnEquip
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::UnEquip()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.UnEquip");

	UBattleItemHandleBase_UnEquip_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HanldePickupAssociationData
// ()
// Parameters:
// TArray<struct FBattleItemAdditionalData> PickupAdditionalData           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HanldePickupAssociationData(TArray<struct FBattleItemAdditionalData> PickupAdditionalData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HanldePickupAssociationData");

	UBattleItemHandleBase_HanldePickupAssociationData_Params params;
	params.PickupAdditionalData = PickupAdditionalData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HanldeDropAssociationData
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HanldeDropAssociationData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HanldeDropAssociationData");

	UBattleItemHandleBase_HanldeDropAssociationData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HanldeCleared
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HanldeCleared()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HanldeCleared");

	UBattleItemHandleBase_HanldeCleared_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleUse
// ()
// Parameters:
// struct FBattleItemUseTarget    Target                         (Parm)
// EBattleItemUseReason           Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleUse(const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleUse");

	UBattleItemHandleBase_HandleUse_Params params;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandlePickup
// ()
// Parameters:
// TScriptInterface<class UItemContainerInterface> ItemContainer                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBattleItemPickupInfo   PickupInfo                     (Parm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandlePickup(const TScriptInterface<class UItemContainerInterface>& ItemContainer, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandlePickup");

	UBattleItemHandleBase_HandlePickup_Params params;
	params.ItemContainer = ItemContainer;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleEnable
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleEnable(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleEnable");

	UBattleItemHandleBase_HandleEnable_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleDrop
// ()
// Parameters:
// int                            InCount                        (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemDropReason          Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleDrop(int InCount, EBattleItemDropReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleDrop");

	UBattleItemHandleBase_HandleDrop_Params params;
	params.InCount = InCount;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleDisuse
// ()
// Parameters:
// EBattleItemDisuseReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleDisuse(EBattleItemDisuseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleDisuse");

	UBattleItemHandleBase_HandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleChangeItemStoreArea
// ()
// Parameters:
// EItemStoreArea                 InItemStoreArea                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleChangeItemStoreArea(EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleChangeItemStoreArea");

	UBattleItemHandleBase_HandleChangeItemStoreArea_Params params;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleBindToTargetItem
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleBindToTargetItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleBindToTargetItem");

	UBattleItemHandleBase_HandleBindToTargetItem_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.GetWorldInternal
// ()
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UBattleItemHandleBase::GetWorldInternal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.GetWorldInternal");

	UBattleItemHandleBase_GetWorldInternal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.GetCurrentWorld
// ()
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UBattleItemHandleBase::GetCurrentWorld()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.GetCurrentWorld");

	UBattleItemHandleBase_GetCurrentWorld_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.ExtractItemData
// ()
// Parameters:
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBattleItemHandleBase::ExtractItemData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.ExtractItemData");

	UBattleItemHandleBase_ExtractItemData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.ClearAdditionalData
// ()

void UBattleItemHandleBase::ClearAdditionalData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.ClearAdditionalData");

	UBattleItemHandleBase_ClearAdditionalData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BattleItemHandleBase.CheckCanUse
// ()
// Parameters:
// TScriptInterface<class UItemContainerInterface> ItemContainer                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBattleItemUseTarget    Target                         (Parm)
// EBattleItemUseReason           Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::CheckCanUse(const TScriptInterface<class UItemContainerInterface>& ItemContainer, const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.CheckCanUse");

	UBattleItemHandleBase_CheckCanUse_Params params;
	params.ItemContainer = ItemContainer;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAENetPoolActor.OnBPRespawned
// ()

void AUAENetPoolActor::OnBPRespawned()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAENetPoolActor.OnBPRespawned");

	AUAENetPoolActor_OnBPRespawned_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAENetPoolActor.OnBPRecycled
// ()

void AUAENetPoolActor::OnBPRecycled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAENetPoolActor.OnBPRecycled");

	AUAENetPoolActor_OnBPRecycled_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.Tick
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DetalTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::Tick(class UActorComponent* BuffSystemComponent, int InstID, float DetalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.Tick");

	USTBuffAction_Tick_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;
	params.DetalTime = DetalTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.SetEnabled
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::SetEnabled(class UActorComponent* BuffSystemComponent, int InstID, bool Enabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.SetEnabled");

	USTBuffAction_SetEnabled_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;
	params.Enabled = Enabled;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.ResetExecute
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreEnd                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::ResetExecute(class UActorComponent* BuffSystemComponent, int InstID, bool IgnoreEnd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.ResetExecute");

	USTBuffAction_ResetExecute_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;
	params.IgnoreEnd = IgnoreEnd;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnTick
// ()
// Parameters:
// float                          DetalTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::OnTick(float DetalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnTick");

	USTBuffAction_OnTick_Params params;
	params.DetalTime = DetalTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnResetExecute
// ()
// Parameters:
// bool                           IgnoreEnd                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::OnResetExecute(bool IgnoreEnd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnResetExecute");

	USTBuffAction_OnResetExecute_Params params;
	params.IgnoreEnd = IgnoreEnd;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnInitialize
// ()

void USTBuffAction::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnInitialize");

	USTBuffAction_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnExecute
// ()

void USTBuffAction::OnExecute()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnExecute");

	USTBuffAction_OnExecute_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnEnd
// ()

void USTBuffAction::OnEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnEnd");

	USTBuffAction_OnEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnDestroy
// ()

void USTBuffAction::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnDestroy");

	USTBuffAction_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnCheckLinkActionEnabled
// ()

void USTBuffAction::OnCheckLinkActionEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnCheckLinkActionEnabled");

	USTBuffAction_OnCheckLinkActionEnabled_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.OnChangeNotify
// ()

void USTBuffAction::OnChangeNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.OnChangeNotify");

	USTBuffAction_OnChangeNotify_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.Initialize
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::Initialize(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.Initialize");

	USTBuffAction_Initialize_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.GetRealOwnerRole
// ()
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> USTBuffAction::GetRealOwnerRole()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.GetRealOwnerRole");

	USTBuffAction_GetRealOwnerRole_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffAction.GetOwner
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USTBuffAction::GetOwner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.GetOwner");

	USTBuffAction_GetOwner_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffAction.GetCauser
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USTBuffAction::GetCauser()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.GetCauser");

	USTBuffAction_GetCauser_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffAction.End
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::End(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.End");

	USTBuffAction_End_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.Destroy
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::Destroy(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.Destroy");

	USTBuffAction_Destroy_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.CopyAction
// ()
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class USTBuffAction*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBuffAction* USTBuffAction::CopyAction(class UObject* Outer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.CopyAction");

	USTBuffAction_CopyAction_Params params;
	params.Outer = Outer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffAction.CheckLinkActionEnabled
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::CheckLinkActionEnabled(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.CheckLinkActionEnabled");

	USTBuffAction_CheckLinkActionEnabled_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction.ChangeNotify
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction::ChangeNotify(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction.ChangeNotify");

	USTBuffAction_ChangeNotify_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCondition.OnInitialize
// ()

void USTBuffCondition::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.OnInitialize");

	USTBuffCondition_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCondition.OnDestroy
// ()

void USTBuffCondition::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.OnDestroy");

	USTBuffCondition_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCondition.GetOwner
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USTBuffCondition::GetOwner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.GetOwner");

	USTBuffCondition_GetOwner_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffCondition.GetCauser
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USTBuffCondition::GetCauser()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.GetCauser");

	USTBuffCondition_GetCauser_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffCondition.Copy
// ()
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class USTBuffCondition*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBuffCondition* USTBuffCondition::Copy(class UObject* Outer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.Copy");

	USTBuffCondition_Copy_Params params;
	params.Outer = Outer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffCondition.CheckIsTrue
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffCondition::CheckIsTrue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition.CheckIsTrue");

	USTBuffCondition_CheckIsTrue_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.SetBuffExpiry
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpirySeconds                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::SetBuffExpiry(const struct FName& BuffName, float ExpirySeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.SetBuffExpiry");

	USTBaseBuffSystemComponent_SetBuffExpiry_Params params;
	params.BuffName = BuffName;
	params.ExpirySeconds = ExpirySeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.ResetForDeath
// ()

void USTBaseBuffSystemComponent::ResetForDeath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ResetForDeath");

	USTBaseBuffSystemComponent_ResetForDeath_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.RepBuffSyncList
// ()

void USTBaseBuffSystemComponent::RepBuffSyncList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.RepBuffSyncList");

	USTBaseBuffSystemComponent_RepBuffSyncList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.RemoveBuffWithCauser
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RemoveLayerOnly                (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             pCauser                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::RemoveBuffWithCauser(const struct FName& BuffName, bool RemoveLayerOnly, class AController* pCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.RemoveBuffWithCauser");

	USTBaseBuffSystemComponent_RemoveBuffWithCauser_Params params;
	params.BuffName = BuffName;
	params.RemoveLayerOnly = RemoveLayerOnly;
	params.pCauser = pCauser;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.RemoveBuffByID
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RemoveLayerOnly                (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             pCauser                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::RemoveBuffByID(int BuffID, bool RemoveLayerOnly, class AController* pCauser, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.RemoveBuffByID");

	USTBaseBuffSystemComponent_RemoveBuffByID_Params params;
	params.BuffID = BuffID;
	params.RemoveLayerOnly = RemoveLayerOnly;
	params.pCauser = pCauser;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.RemoveBuff
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RemoveLayerOnly                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::RemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.RemoveBuff");

	USTBaseBuffSystemComponent_RemoveBuff_Params params;
	params.BuffName = BuffName;
	params.RemoveLayerOnly = RemoveLayerOnly;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.RefreshAllBuffs
// ()

void USTBaseBuffSystemComponent::RefreshAllBuffs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.RefreshAllBuffs");

	USTBaseBuffSystemComponent_RefreshAllBuffs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.IsBufferMutexed
// ()
// Parameters:
// struct FName                   NewBuffName                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::IsBufferMutexed(const struct FName& NewBuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.IsBufferMutexed");

	USTBaseBuffSystemComponent_IsBufferMutexed_Params params;
	params.NewBuffName = NewBuffName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.HasBuffID
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::HasBuffID(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.HasBuffID");

	USTBaseBuffSystemComponent_HasBuffID_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.HasBuff
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::HasBuff(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.HasBuff");

	USTBaseBuffSystemComponent_HasBuff_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.GetPawnOwner
// ()
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* USTBaseBuffSystemComponent::GetPawnOwner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.GetPawnOwner");

	USTBaseBuffSystemComponent_GetPawnOwner_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.GetBuffName
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName USTBaseBuffSystemComponent::GetBuffName(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.GetBuffName");

	USTBaseBuffSystemComponent_GetBuffName_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.GetBuffID
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTBaseBuffSystemComponent::GetBuffID(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.GetBuffID");

	USTBaseBuffSystemComponent_GetBuffID_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.GetBuffExpiry
// ()
// Parameters:
// struct FName                   BuffName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USTBaseBuffSystemComponent::GetBuffExpiry(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.GetBuffExpiry");

	USTBaseBuffSystemComponent_GetBuffExpiry_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.GetBuffByName
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// class USTBaseBuff*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBaseBuff* USTBaseBuffSystemComponent::GetBuffByName(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.GetBuffByName");

	USTBaseBuffSystemComponent_GetBuffByName_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.GetActorOwner
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USTBaseBuffSystemComponent::GetActorOwner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.GetActorOwner");

	USTBaseBuffSystemComponent_GetActorOwner_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.ClientSimulateRemoveBuff
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RemoveLayerOnly                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffSystemComponent::ClientSimulateRemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ClientSimulateRemoveBuff");

	USTBaseBuffSystemComponent_ClientSimulateRemoveBuff_Params params;
	params.BuffName = BuffName;
	params.RemoveLayerOnly = RemoveLayerOnly;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.ClientSimulateAddBuff
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             BuffCauser                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffSystemComponent::ClientSimulateAddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ClientSimulateAddBuff");

	USTBaseBuffSystemComponent_ClientSimulateAddBuff_Params params;
	params.BuffName = BuffName;
	params.BuffCauser = BuffCauser;
	params.LayerCount = LayerCount;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.ClientMulticastSimulateRemoveBuff
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RemoveLayerOnly                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffSystemComponent::ClientMulticastSimulateRemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ClientMulticastSimulateRemoveBuff");

	USTBaseBuffSystemComponent_ClientMulticastSimulateRemoveBuff_Params params;
	params.BuffName = BuffName;
	params.RemoveLayerOnly = RemoveLayerOnly;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.ClientMulticastSimulateAddBuff
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             BuffCauser                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffSystemComponent::ClientMulticastSimulateAddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ClientMulticastSimulateAddBuff");

	USTBaseBuffSystemComponent_ClientMulticastSimulateAddBuff_Params params;
	params.BuffName = BuffName;
	params.BuffCauser = BuffCauser;
	params.LayerCount = LayerCount;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.ClientMulticastSetBuffExpiry
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          LeftSecondsAfterNow            (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffSystemComponent::ClientMulticastSetBuffExpiry(const struct FName& BuffName, float LeftSecondsAfterNow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ClientMulticastSetBuffExpiry");

	USTBaseBuffSystemComponent_ClientMulticastSetBuffExpiry_Params params;
	params.BuffName = BuffName;
	params.LeftSecondsAfterNow = LeftSecondsAfterNow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.ClearBuff
// ()
// Parameters:
// bool                           bDebuff                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bGainBuff                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffSystemComponent::ClearBuff(bool bDebuff, bool bGainBuff)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ClearBuff");

	USTBaseBuffSystemComponent_ClearBuff_Params params;
	params.bDebuff = bDebuff;
	params.bGainBuff = bGainBuff;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.CheckBuffStatus
// ()
// Parameters:
// class UClass*                  Status                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::CheckBuffStatus(class UClass* Status, bool* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.CheckBuffStatus");

	USTBaseBuffSystemComponent_CheckBuffStatus_Params params;
	params.Status = Status;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// DelegateFunction Basic.STBaseBuffSystemComponent.BuffDetached__DelegateSignature
// ()
// Parameters:
// struct FName                   BuffName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void USTBaseBuffSystemComponent::BuffDetached__DelegateSignature(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.STBaseBuffSystemComponent.BuffDetached__DelegateSignature");

	USTBaseBuffSystemComponent_BuffDetached__DelegateSignature_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.STBaseBuffSystemComponent.BuffAttached__DelegateSignature
// ()
// Parameters:
// struct FName                   BuffName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void USTBaseBuffSystemComponent::BuffAttached__DelegateSignature(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.STBaseBuffSystemComponent.BuffAttached__DelegateSignature");

	USTBaseBuffSystemComponent_BuffAttached__DelegateSignature_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.AddBuffLayer
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            layerNum                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::AddBuffLayer(const struct FName& BuffName, int layerNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.AddBuffLayer");

	USTBaseBuffSystemComponent_AddBuffLayer_Params params;
	params.BuffName = BuffName;
	params.layerNum = layerNum;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.AddBuffExpiry
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpirySeconds                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::AddBuffExpiry(const struct FName& BuffName, float ExpirySeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.AddBuffExpiry");

	USTBaseBuffSystemComponent_AddBuffExpiry_Params params;
	params.BuffName = BuffName;
	params.ExpirySeconds = ExpirySeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.AddBuffByID
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             BuffCauser                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTBaseBuffSystemComponent::AddBuffByID(int BuffID, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.AddBuffByID");

	USTBaseBuffSystemComponent_AddBuffByID_Params params;
	params.BuffID = BuffID;
	params.BuffCauser = BuffCauser;
	params.LayerCount = LayerCount;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.AddBuff
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             BuffCauser                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  CauserActor                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTBaseBuffSystemComponent::AddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor, class AActor* CauserActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.AddBuff");

	USTBaseBuffSystemComponent_AddBuff_Params params;
	params.BuffName = BuffName;
	params.BuffCauser = BuffCauser;
	params.LayerCount = LayerCount;
	params.BuffApplierActor = BuffApplierActor;
	params.CauserActor = CauserActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.SetLuaStateWrapper
// ()
// Parameters:
// class ULuaStateWrapper*        TLuaStateWrapper               (Parm, ZeroConstructor, IsPlainOldData)

void UUAEGameInstance::SetLuaStateWrapper(class ULuaStateWrapper* TLuaStateWrapper)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.SetLuaStateWrapper");

	UUAEGameInstance_SetLuaStateWrapper_Params params;
	params.TLuaStateWrapper = TLuaStateWrapper;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAEGameInstance.OpenAssetLoadLog
// ()

void UUAEGameInstance::OpenAssetLoadLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.OpenAssetLoadLog");

	UUAEGameInstance_OpenAssetLoadLog_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.UAEGameInstance.OnPreBattleResult__DelegateSignature
// ()

void UUAEGameInstance::OnPreBattleResult__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.UAEGameInstance.OnPreBattleResult__DelegateSignature");

	UUAEGameInstance_OnPreBattleResult__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAEGameInstance.LuaLeakDetect
// ()

void UUAEGameInstance::LuaLeakDetect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.LuaLeakDetect");

	UUAEGameInstance_LuaLeakDetect_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAEGameInstance.LuaDoString
// ()
// Parameters:
// struct FString                 LuaString                      (Parm, ZeroConstructor)

void UUAEGameInstance::LuaDoString(const struct FString& LuaString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.LuaDoString");

	UUAEGameInstance_LuaDoString_Params params;
	params.LuaString = LuaString;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAEGameInstance.GetWeatherTime
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUAEGameInstance::GetWeatherTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetWeatherTime");

	UUAEGameInstance_GetWeatherTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetWeatherLevelName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAEGameInstance::GetWeatherLevelName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetWeatherLevelName");

	UUAEGameInstance_GetWeatherLevelName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetWeatherID
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUAEGameInstance::GetWeatherID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetWeatherID");

	UUAEGameInstance_GetWeatherID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetLuaStateWrapper
// ()
// Parameters:
// class ULuaStateWrapper*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULuaStateWrapper* UUAEGameInstance::GetLuaStateWrapper()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetLuaStateWrapper");

	UUAEGameInstance_GetLuaStateWrapper_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetLoadWeatherName
// ()
// Parameters:
// struct FString                 InWeatherName                  (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAEGameInstance::GetLoadWeatherName(const struct FString& InWeatherName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetLoadWeatherName");

	UUAEGameInstance_GetLoadWeatherName_Params params;
	params.InWeatherName = InWeatherName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetIsHighWeatherLevel
// ()
// Parameters:
// struct FString                 InWeatherLevelName             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEGameInstance::GetIsHighWeatherLevel(const struct FString& InWeatherLevelName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetIsHighWeatherLevel");

	UUAEGameInstance_GetIsHighWeatherLevel_Params params;
	params.InWeatherLevelName = InWeatherLevelName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetGameId
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAEGameInstance::GetGameId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetGameId");

	UUAEGameInstance_GetGameId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetDeviceLevel
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUAEGameInstance::GetDeviceLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetDeviceLevel");

	UUAEGameInstance_GetDeviceLevel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetDataTable_Mod
// ()
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UUAEGameInstance::GetDataTable_Mod(const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetDataTable_Mod");

	UUAEGameInstance_GetDataTable_Mod_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetDataTable
// ()
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UUAEGameInstance::GetDataTable(const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetDataTable");

	UUAEGameInstance_GetDataTable_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetAssociatedFrontendHUD
// ()
// Parameters:
// class UFrontendHUD*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrontendHUD* UUAEGameInstance::GetAssociatedFrontendHUD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetAssociatedFrontendHUD");

	UUAEGameInstance_GetAssociatedFrontendHUD_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.CloseAssetLoadLog
// ()

void UUAEGameInstance::CloseAssetLoadLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.CloseAssetLoadLog");

	UUAEGameInstance_CloseAssetLoadLog_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.SetValueToAttributeSafety
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::SetValueToAttributeSafety(const struct FString& AttrName, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.SetValueToAttributeSafety");

	UAttrModifyComponent_SetValueToAttributeSafety_Params params;
	params.AttrName = AttrName;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.SetOrignalValueToAttribute
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::SetOrignalValueToAttribute(const struct FString& AttrName, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.SetOrignalValueToAttribute");

	UAttrModifyComponent_SetOrignalValueToAttribute_Params params;
	params.AttrName = AttrName;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.SetAttrModifyStateValue
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::SetAttrModifyStateValue(int Index, bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.SetAttrModifyStateValue");

	UAttrModifyComponent_SetAttrModifyStateValue_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.SetAttributeMaxValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          MaxValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::SetAttributeMaxValue(const struct FString& AttrName, float MaxValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.SetAttributeMaxValue");

	UAttrModifyComponent_SetAttributeMaxValue_Params params;
	params.AttrName = AttrName;
	params.MaxValue = MaxValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.ResponeAttrValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          FinalValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::ResponeAttrValue(const struct FString& AttrName, float FinalValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.ResponeAttrValue");

	UAttrModifyComponent_ResponeAttrValue_Params params;
	params.AttrName = AttrName;
	params.FinalValue = FinalValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.RequestAttrValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)

void UAttrModifyComponent::RequestAttrValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.RequestAttrValue");

	UAttrModifyComponent_RequestAttrValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.RemoveModifyItemFromCache
// ()
// Parameters:
// uint32_t                       ModifyUID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::RemoveModifyItemFromCache(uint32_t ModifyUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.RemoveModifyItemFromCache");

	UAttrModifyComponent_RemoveModifyItemFromCache_Params params;
	params.ModifyUID = ModifyUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.RegisterModifyAbleAttr
// ()
// Parameters:
// TArray<struct FAttrRegisterItem> AttrRegists                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bSetAttrByOrigin               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::RegisterModifyAbleAttr(TArray<struct FAttrRegisterItem> AttrRegists, bool bSetAttrByOrigin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.RegisterModifyAbleAttr");

	UAttrModifyComponent_RegisterModifyAbleAttr_Params params;
	params.AttrRegists = AttrRegists;
	params.bSetAttrByOrigin = bSetAttrByOrigin;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.OnRep_ModSimulateSyncList
// ()

void UAttrModifyComponent::OnRep_ModSimulateSyncList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.OnRep_ModSimulateSyncList");

	UAttrModifyComponent_OnRep_ModSimulateSyncList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.OnRep_DynamicModifier
// ()

void UAttrModifyComponent::OnRep_DynamicModifier()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.OnRep_DynamicModifier");

	UAttrModifyComponent_OnRep_DynamicModifier_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.OnRep_AttrModifyStateList
// ()

void UAttrModifyComponent::OnRep_AttrModifyStateList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.OnRep_AttrModifyStateList");

	UAttrModifyComponent_OnRep_AttrModifyStateList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.AttrModifyComponent.OnAttrModifiedEvent__DelegateSignature
// ()
// Parameters:
// TArray<struct FAttrAffected>   AffectedAttrS                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAttrModifyComponent::OnAttrModifiedEvent__DelegateSignature(TArray<struct FAttrAffected> AffectedAttrS)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.AttrModifyComponent.OnAttrModifiedEvent__DelegateSignature");

	UAttrModifyComponent_OnAttrModifiedEvent__DelegateSignature_Params params;
	params.AffectedAttrS = AffectedAttrS;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.IsAttrModifyStateValidIndex
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::IsAttrModifyStateValidIndex(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.IsAttrModifyStateValidIndex");

	UAttrModifyComponent_IsAttrModifyStateValidIndex_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.HasDynamicModifier
// ()
// Parameters:
// struct FString                 AttrModifyId                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::HasDynamicModifier(const struct FString& AttrModifyId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.HasDynamicModifier");

	UAttrModifyComponent_HasDynamicModifier_Params params;
	params.AttrModifyId = AttrModifyId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetSubsystem
// ()
// Parameters:
// class UAttrModifyModDataSubsystem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAttrModifyModDataSubsystem* UAttrModifyComponent::GetSubsystem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetSubsystem");

	UAttrModifyComponent_GetSubsystem_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetMaxAttrName
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAttrModifyComponent::GetMaxAttrName(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetMaxAttrName");

	UAttrModifyComponent_GetMaxAttrName_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetAttrModifyStateValue
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::GetAttrModifyStateValue(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetAttrModifyStateValue");

	UAttrModifyComponent_GetAttrModifyStateValue_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetAttrModifyStateNum
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAttrModifyComponent::GetAttrModifyStateNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetAttrModifyStateNum");

	UAttrModifyComponent_GetAttrModifyStateNum_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetAttrModifyItemByItemName
// ()
// Parameters:
// struct FString                 ItemName                       (Parm, ZeroConstructor)
// struct FAttrModifyItem         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAttrModifyItem UAttrModifyComponent::GetAttrModifyItemByItemName(const struct FString& ItemName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetAttrModifyItemByItemName");

	UAttrModifyComponent_GetAttrModifyItemByItemName_Params params;
	params.ItemName = ItemName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetAttributeValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAttrModifyComponent::GetAttributeValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetAttributeValue");

	UAttrModifyComponent_GetAttributeValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.GetAttributeOrignalValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAttrModifyComponent::GetAttributeOrignalValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.GetAttributeOrignalValue");

	UAttrModifyComponent_GetAttributeOrignalValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.EnableAttrModifierByIndex
// ()
// Parameters:
// int                            ModifyConfigIndex              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::EnableAttrModifierByIndex(int ModifyConfigIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.EnableAttrModifierByIndex");

	UAttrModifyComponent_EnableAttrModifierByIndex_Params params;
	params.ModifyConfigIndex = ModifyConfigIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.EnableAttrModifier
// ()
// Parameters:
// struct FString                 AttrModifyItemName             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::EnableAttrModifier(const struct FString& AttrModifyItemName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.EnableAttrModifier");

	UAttrModifyComponent_EnableAttrModifier_Params params;
	params.AttrModifyItemName = AttrModifyItemName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.DisableAttrModifierByIndex
// ()
// Parameters:
// int                            ModifyConfigIndex              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::DisableAttrModifierByIndex(int ModifyConfigIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.DisableAttrModifierByIndex");

	UAttrModifyComponent_DisableAttrModifierByIndex_Params params;
	params.ModifyConfigIndex = ModifyConfigIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.DisableAttrModifier
// ()
// Parameters:
// struct FString                 AttrModifyItemName             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::DisableAttrModifier(const struct FString& AttrModifyItemName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.DisableAttrModifier");

	UAttrModifyComponent_DisableAttrModifier_Params params;
	params.AttrModifyItemName = AttrModifyItemName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.DisableAllAttrModifier
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::DisableAllAttrModifier()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.DisableAllAttrModifier");

	UAttrModifyComponent_DisableAllAttrModifier_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.AddValueToAttribute
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::AddValueToAttribute(const struct FString& AttrName, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.AddValueToAttribute");

	UAttrModifyComponent_AddValueToAttribute_Params params;
	params.AttrName = AttrName;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.AddModifyItemAndCache
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// EAttrModifyRefType             CModifyType                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          CValue                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           oldModify                      (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UAttrModifyComponent::AddModifyItemAndCache(const struct FString& AttrName, EAttrModifyRefType CModifyType, float CValue, bool bEnable, class UObject* Causer, bool oldModify)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.AddModifyItemAndCache");

	UAttrModifyComponent_AddModifyItemAndCache_Params params;
	params.AttrName = AttrName;
	params.CModifyType = CModifyType;
	params.CValue = CValue;
	params.bEnable = bEnable;
	params.Causer = Causer;
	params.oldModify = oldModify;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.AddDynamicModifier
// ()
// Parameters:
// struct FAttrModifyItem         AttrModifyItem                 (Parm, OutParm)
// bool                           RepOnlyOwner                   (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyComponent::AddDynamicModifier(bool RepOnlyOwner, struct FAttrModifyItem* AttrModifyItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.AddDynamicModifier");

	UAttrModifyComponent_AddDynamicModifier_Params params;
	params.RepOnlyOwner = RepOnlyOwner;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AttrModifyItem != nullptr)
		*AttrModifyItem = params.AttrModifyItem;
}


// Function Basic.AttrModifyComponent.AddBModifyAndCacheWithCParam
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// EAttrModifyRefType             CModifyType                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          CValue                         (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UAttrModifyComponent::AddBModifyAndCacheWithCParam(const struct FString& AttrName, EAttrModifyRefType CModifyType, float CValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.AddBModifyAndCacheWithCParam");

	UAttrModifyComponent_AddBModifyAndCacheWithCParam_Params params;
	params.AttrName = AttrName;
	params.CModifyType = CModifyType;
	params.CValue = CValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.AddBModifyAndCache
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// EAttrOperator                  ModifyType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UAttrModifyComponent::AddBModifyAndCache(const struct FString& AttrName, EAttrOperator ModifyType, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.AddBModifyAndCache");

	UAttrModifyComponent_AddBModifyAndCache_Params params;
	params.AttrName = AttrName;
	params.ModifyType = ModifyType;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyInterface.SetAttrValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          NewVal                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyInterface::SetAttrValue(const struct FString& AttrName, float NewVal, int Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.SetAttrValue");

	UAttrModifyInterface_SetAttrValue_Params params;
	params.AttrName = AttrName;
	params.NewVal = NewVal;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyInterface.RequestAttrValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)

void UAttrModifyInterface::RequestAttrValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.RequestAttrValue");

	UAttrModifyInterface_RequestAttrValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyInterface.RegisterModifiedAttributes
// ()

void UAttrModifyInterface::RegisterModifiedAttributes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.RegisterModifiedAttributes");

	UAttrModifyInterface_RegisterModifiedAttributes_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyInterface.GetAttrValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAttrModifyInterface::GetAttrValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.GetAttrValue");

	UAttrModifyInterface_GetAttrValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyInterface.GetAttrModifyRelevantActors
// ()
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UAttrModifyInterface::GetAttrModifyRelevantActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.GetAttrModifyRelevantActors");

	UAttrModifyInterface_GetAttrModifyRelevantActors_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyInterface.GetAttrModifyComponent
// ()
// Parameters:
// class UAttrModifyComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAttrModifyComponent* UAttrModifyInterface::GetAttrModifyComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.GetAttrModifyComponent");

	UAttrModifyInterface_GetAttrModifyComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyInterface.GetAttributeValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAttrModifyInterface::GetAttributeValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.GetAttributeValue");

	UAttrModifyInterface_GetAttributeValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyInterface.AddAttrValue
// ()
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          AddVal                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyInterface::AddAttrValue(const struct FString& AttrName, float AddVal, int Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.AddAttrValue");

	UAttrModifyInterface_AddAttrValue_Params params;
	params.AttrName = AttrName;
	params.AddVal = AddVal;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BPClassManager.ModifyClass
// ()
// Parameters:
// class UClass*                  InNativeClass                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ModTag                         (Parm, ZeroConstructor)

void UBPClassManager::ModifyClass(class UClass* InNativeClass, const struct FString& ModTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPClassManager.ModifyClass");

	UBPClassManager_ModifyClass_Params params;
	params.InNativeClass = InNativeClass;
	params.ModTag = ModTag;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BPClassManager.GetUClass
// ()
// Parameters:
// int                            KeyIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPClassManager::GetUClass(int KeyIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPClassManager.GetUClass");

	UBPClassManager_GetUClass_Params params;
	params.KeyIndex = KeyIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPClassManager.GetBPClassOverrideByName
// ()
// Parameters:
// struct FString                 ClassTagName                   (Parm, ZeroConstructor)
// struct FString                 ModTag                         (Parm, ZeroConstructor)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPClassManager::GetBPClassOverrideByName(const struct FString& ClassTagName, const struct FString& ModTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPClassManager.GetBPClassOverrideByName");

	UBPClassManager_GetBPClassOverrideByName_Params params;
	params.ClassTagName = ClassTagName;
	params.ModTag = ModTag;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPClassManager.GetBPClassOverride
// ()
// Parameters:
// class UClass*                  InNativeClass                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ModTag                         (Parm, ZeroConstructor)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPClassManager::GetBPClassOverride(class UClass* InNativeClass, const struct FString& ModTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPClassManager.GetBPClassOverride");

	UBPClassManager_GetBPClassOverride_Params params;
	params.InNativeClass = InNativeClass;
	params.ModTag = ModTag;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPClassManager.Get
// ()
// Parameters:
// class UBPClassManager*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBPClassManager* UBPClassManager::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPClassManager.Get");

	UBPClassManager_Get_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.DelayReplicationInterface.ReSendRPCAfterBeginPlay
// ()

void UDelayReplicationInterface::ReSendRPCAfterBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.DelayReplicationInterface.ReSendRPCAfterBeginPlay");

	UDelayReplicationInterface_ReSendRPCAfterBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.DelayReplicationInterface.ReCallRepAfterBeginPlay
// ()

void UDelayReplicationInterface::ReCallRepAfterBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.DelayReplicationInterface.ReCallRepAfterBeginPlay");

	UDelayReplicationInterface_ReCallRepAfterBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemContainerInterface.GetOwningObject
// ()
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UItemContainerInterface::GetOwningObject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerInterface.GetOwningObject");

	UItemContainerInterface_GetOwningObject_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemContainerInterface.GetItemHandleListByDefineID
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class UItemHandleBase*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UItemHandleBase*> UItemContainerInterface::GetItemHandleListByDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerInterface.GetItemHandleListByDefineID");

	UItemContainerInterface_GetItemHandleListByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemContainerInterface.GetItemHandleByDefineID
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// class UItemHandleBase*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItemHandleBase* UItemContainerInterface::GetItemHandleByDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerInterface.GetItemHandleByDefineID");

	UItemContainerInterface_GetItemHandleByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemContainerInterface.GetItemDefineIDList
// ()
// Parameters:
// TArray<struct FItemDefineID>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FItemDefineID> UItemContainerInterface::GetItemDefineIDList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerInterface.GetItemDefineIDList");

	UItemContainerInterface_GetItemDefineIDList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemContainerOwnerInterface.NotifyItemUpdated
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBattleItemData         ItemData                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemContainerOwnerInterface::NotifyItemUpdated(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerOwnerInterface.NotifyItemUpdated");

	UItemContainerOwnerInterface_NotifyItemUpdated_Params params;
	params.DefineID = DefineID;
	params.ItemData = ItemData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemContainerOwnerInterface.NotifyItemRemoved
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemContainerOwnerInterface::NotifyItemRemoved(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerOwnerInterface.NotifyItemRemoved");

	UItemContainerOwnerInterface_NotifyItemRemoved_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemContainerOwnerInterface.NotifyItemEmpty
// ()

void UItemContainerOwnerInterface::NotifyItemEmpty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerOwnerInterface.NotifyItemEmpty");

	UItemContainerOwnerInterface_NotifyItemEmpty_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemContainerOwnerInterface.NotifyItemAdded
// ()
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBattleItemData         ItemData                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemContainerOwnerInterface::NotifyItemAdded(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerOwnerInterface.NotifyItemAdded");

	UItemContainerOwnerInterface_NotifyItemAdded_Params params;
	params.DefineID = DefineID;
	params.ItemData = ItemData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventBridgeFunction.UnRegisterEventByTarget
// ()
// Parameters:
// class UObject*                 ObjContext                     (Parm, ZeroConstructor, IsPlainOldData)

void ULuaEventBridgeFunction::UnRegisterEventByTarget(class UObject* ObjContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridgeFunction.UnRegisterEventByTarget");

	ULuaEventBridgeFunction_UnRegisterEventByTarget_Params params;
	params.ObjContext = ObjContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventBridgeFunction.UnRegisterEvent
// ()
// Parameters:
// struct FString                 FEventType                     (Parm, ZeroConstructor)
// struct FString                 EventId                        (Parm, ZeroConstructor)
// class UObject*                 ObjContext                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            EventHandle                    (Parm, ZeroConstructor, IsPlainOldData)

void ULuaEventBridgeFunction::UnRegisterEvent(const struct FString& FEventType, const struct FString& EventId, class UObject* ObjContext, int EventHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridgeFunction.UnRegisterEvent");

	ULuaEventBridgeFunction_UnRegisterEvent_Params params;
	params.FEventType = FEventType;
	params.EventId = EventId;
	params.ObjContext = ObjContext;
	params.EventHandle = EventHandle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventBridgeFunction.RegistEvent
// ()
// Parameters:
// struct FString                 EventType                      (Parm, ZeroConstructor)
// struct FString                 EventId                        (Parm, ZeroConstructor)
// class UObject*                 ObjContext                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULuaEventBridgeFunction::RegistEvent(const struct FString& EventType, const struct FString& EventId, class UObject* ObjContext, const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridgeFunction.RegistEvent");

	ULuaEventBridgeFunction_RegistEvent_Params params;
	params.EventType = EventType;
	params.EventId = EventId;
	params.ObjContext = ObjContext;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.LuaEventBridge.SyncLuaRegisterEventNum
// ()
// Parameters:
// struct FString                 EventType                      (Parm, ZeroConstructor)
// struct FString                 EventId                        (Parm, ZeroConstructor)
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)

void ULuaEventBridge::SyncLuaRegisterEventNum(const struct FString& EventType, const struct FString& EventId, int Number)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridge.SyncLuaRegisterEventNum");

	ULuaEventBridge_SyncLuaRegisterEventNum_Params params;
	params.EventType = EventType;
	params.EventId = EventId;
	params.Number = Number;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventBridge.GetCurrentParam
// ()
// Parameters:
// TArray<class ULuaTemBPData*>   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class ULuaTemBPData*> ULuaEventBridge::GetCurrentParam()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridge.GetCurrentParam");

	ULuaEventBridge_GetCurrentParam_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.LuaEventBridge.DeactivateEventsByFilterKey
// ()
// Parameters:
// uint32_t                       FilterKey                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ULuaEventBridge::DeactivateEventsByFilterKey(uint32_t FilterKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridge.DeactivateEventsByFilterKey");

	ULuaEventBridge_DeactivateEventsByFilterKey_Params params;
	params.FilterKey = FilterKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventBridge.CheckNeedPostEventWithFilterKey
// ()
// Parameters:
// uint32_t                       FilterKey                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 EventType                      (Parm, ZeroConstructor)
// struct FString                 EventId                        (Parm, ZeroConstructor)
// bool                           bCheckNeedPostLua              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULuaEventBridge::CheckNeedPostEventWithFilterKey(uint32_t FilterKey, const struct FString& EventType, const struct FString& EventId, bool bCheckNeedPostLua)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridge.CheckNeedPostEventWithFilterKey");

	ULuaEventBridge_CheckNeedPostEventWithFilterKey_Params params;
	params.FilterKey = FilterKey;
	params.EventType = EventType;
	params.EventId = EventId;
	params.bCheckNeedPostLua = bCheckNeedPostLua;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.LuaEventBridge.ActiveEventByFilterKey
// ()
// Parameters:
// uint32_t                       FilterKey                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 EventType                      (Parm, ZeroConstructor)
// struct FString                 EventId                        (Parm, ZeroConstructor)
// bool                           bActive                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULuaEventBridge::ActiveEventByFilterKey(uint32_t FilterKey, const struct FString& EventType, const struct FString& EventId, bool bActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventBridge.ActiveEventByFilterKey");

	ULuaEventBridge_ActiveEventByFilterKey_Params params;
	params.FilterKey = FilterKey;
	params.EventType = EventType;
	params.EventId = EventId;
	params.bActive = bActive;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventSubsystem.UnRegistEvent
// ()
// Parameters:
// int                            EventHandle                    (Parm, ZeroConstructor, IsPlainOldData)

void ULuaEventSubsystem::UnRegistEvent(int EventHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventSubsystem.UnRegistEvent");

	ULuaEventSubsystem_UnRegistEvent_Params params;
	params.EventHandle = EventHandle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventSubsystem.SetBridgeFunction
// ()
// Parameters:
// struct FSluaBPVar              OnRegistEvent                  (Parm)
// struct FSluaBPVar              OnUnRegistEvent                (Parm)
// struct FSluaBPVar              OnPostEvent                    (Parm)
// struct FSluaBPVar              OnPostBlueprintEvent           (Parm)

void ULuaEventSubsystem::SetBridgeFunction(const struct FSluaBPVar& OnRegistEvent, const struct FSluaBPVar& OnUnRegistEvent, const struct FSluaBPVar& OnPostEvent, const struct FSluaBPVar& OnPostBlueprintEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventSubsystem.SetBridgeFunction");

	ULuaEventSubsystem_SetBridgeFunction_Params params;
	params.OnRegistEvent = OnRegistEvent;
	params.OnUnRegistEvent = OnUnRegistEvent;
	params.OnPostEvent = OnPostEvent;
	params.OnPostBlueprintEvent = OnPostBlueprintEvent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.LuaEventSubsystem.RegistEvent
// ()
// Parameters:
// struct FString                 EventId                        (Parm, ZeroConstructor)
// struct FString                 EventType                      (Parm, ZeroConstructor)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULuaEventSubsystem::RegistEvent(const struct FString& EventId, const struct FString& EventType, class UObject* Object, const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.LuaEventSubsystem.RegistEvent");

	ULuaEventSubsystem_RegistEvent_Params params;
	params.EventId = EventId;
	params.EventType = EventType;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.RenderFunctionLibrary.MarkComponentRenderStateDirty
// ()
// Parameters:
// class UActorComponent*         Comp                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URenderFunctionLibrary::MarkComponentRenderStateDirty(class UActorComponent* Comp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.RenderFunctionLibrary.MarkComponentRenderStateDirty");

	URenderFunctionLibrary_MarkComponentRenderStateDirty_Params params;
	params.Comp = Comp;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffCarrierInterface.SyncInvincibleData
// ()
// Parameters:
// float                          TotalTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffCarrierInterface::SyncInvincibleData(float TotalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.SyncInvincibleData");

	USTBaseBuffCarrierInterface_SyncInvincibleData_Params params;
	params.TotalTime = TotalTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffCarrierInterface.SetBuffExpiry
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpirySecondsFromNow           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::SetBuffExpiry(const struct FName& BuffName, float ExpirySecondsFromNow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.SetBuffExpiry");

	USTBaseBuffCarrierInterface_SetBuffExpiry_Params params;
	params.BuffName = BuffName;
	params.ExpirySecondsFromNow = ExpirySecondsFromNow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.RemoveBuffBySkill
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::RemoveBuffBySkill(int SkillID, int LayerCount, class AActor* Causer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.RemoveBuffBySkill");

	USTBaseBuffCarrierInterface_RemoveBuffBySkill_Params params;
	params.SkillID = SkillID;
	params.LayerCount = LayerCount;
	params.Causer = Causer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.RemoveBuffByID
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::RemoveBuffByID(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.RemoveBuffByID");

	USTBaseBuffCarrierInterface_RemoveBuffByID_Params params;
	params.BuffID = BuffID;
	params.Causer = Causer;
	params.LayerCount = LayerCount;
	params.CauseSkillID = CauseSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.RemoveBuff
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RemoveLayerOnly                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::RemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.RemoveBuff");

	USTBaseBuffCarrierInterface_RemoveBuff_Params params;
	params.BuffName = BuffName;
	params.RemoveLayerOnly = RemoveLayerOnly;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.IsSameTeamWithFirstPC
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::IsSameTeamWithFirstPC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.IsSameTeamWithFirstPC");

	USTBaseBuffCarrierInterface_IsSameTeamWithFirstPC_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.HasBuffID
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::HasBuffID(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.HasBuffID");

	USTBaseBuffCarrierInterface_HasBuffID_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.HasBuff
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::HasBuff(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.HasBuff");

	USTBaseBuffCarrierInterface_HasBuff_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.GetBuffExpiry
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USTBaseBuffCarrierInterface::GetBuffExpiry(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.GetBuffExpiry");

	USTBaseBuffCarrierInterface_GetBuffExpiry_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.GetBuffDuration
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USTBaseBuffCarrierInterface::GetBuffDuration(int InstID, int CauseSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.GetBuffDuration");

	USTBaseBuffCarrierInterface_GetBuffDuration_Params params;
	params.InstID = InstID;
	params.CauseSkillID = CauseSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.GetBuffByName
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// class USTBaseBuff*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBaseBuff* USTBaseBuffCarrierInterface::GetBuffByName(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.GetBuffByName");

	USTBaseBuffCarrierInterface_GetBuffByName_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.CheckBuffTarget
// ()
// Parameters:
// class USTBuff*                 Buff                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::CheckBuffTarget(class USTBuff* Buff)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.CheckBuffTarget");

	USTBaseBuffCarrierInterface_CheckBuffTarget_Params params;
	params.Buff = Buff;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.ChangeBuffDuration
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::ChangeBuffDuration(int InstID, float Duration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.ChangeBuffDuration");

	USTBaseBuffCarrierInterface_ChangeBuffDuration_Params params;
	params.InstID = InstID;
	params.Duration = Duration;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.AddBuffLayer
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            layerNum                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::AddBuffLayer(const struct FName& BuffName, int layerNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.AddBuffLayer");

	USTBaseBuffCarrierInterface_AddBuffLayer_Params params;
	params.BuffName = BuffName;
	params.layerNum = layerNum;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.AddBuffExpiry
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpirySeconds                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::AddBuffExpiry(const struct FName& BuffName, float ExpirySeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.AddBuffExpiry");

	USTBaseBuffCarrierInterface_AddBuffExpiry_Params params;
	params.BuffName = BuffName;
	params.ExpirySeconds = ExpirySeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.AddBuffBySkill
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::AddBuffBySkill(int SkillID, int LayerCount, class AActor* Causer, int Level)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.AddBuffBySkill");

	USTBaseBuffCarrierInterface_AddBuffBySkill_Params params;
	params.SkillID = SkillID;
	params.LayerCount = LayerCount;
	params.Causer = Causer;
	params.Level = Level;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.AddBuffByID
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTBaseBuffCarrierInterface::AddBuffByID(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID, int Level)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.AddBuffByID");

	USTBaseBuffCarrierInterface_AddBuffByID_Params params;
	params.BuffID = BuffID;
	params.Causer = Causer;
	params.LayerCount = LayerCount;
	params.CauseSkillID = CauseSkillID;
	params.Level = Level;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.AddBuff
// ()
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             SkillActor                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  CauserActor                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTBaseBuffCarrierInterface::AddBuff(const struct FName& BuffName, class AController* SkillActor, int LayerCount, class AActor* BuffApplierActor, class AActor* CauserActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.AddBuff");

	USTBaseBuffCarrierInterface_AddBuff_Params params;
	params.BuffName = BuffName;
	params.SkillActor = SkillActor;
	params.LayerCount = LayerCount;
	params.BuffApplierActor = BuffApplierActor;
	params.CauserActor = CauserActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuff.Tick
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DetalTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeSeconds                    (Parm, ZeroConstructor, IsPlainOldData)

void USTBuff::Tick(class UActorComponent* BuffSystemComponent, int InstID, float DetalTime, float TimeSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.Tick");

	USTBuff_Tick_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;
	params.DetalTime = DetalTime;
	params.TimeSeconds = TimeSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuff.ResetActionExecute
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuff::ResetActionExecute(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.ResetActionExecute");

	USTBuff_ResetActionExecute_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuff.Initialize
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuff::Initialize(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.Initialize");

	USTBuff_Initialize_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuff.End
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuff::End(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.End");

	USTBuff_End_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuff.Destroy
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuff::Destroy(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.Destroy");

	USTBuff_Destroy_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuff.CopyActions
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuff::CopyActions()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.CopyActions");

	USTBuff_CopyActions_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuff.ChangeNotify
// ()
// Parameters:
// class UActorComponent*         BuffSystemComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuff::ChangeNotify(class UActorComponent* BuffSystemComponent, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuff.ChangeNotify");

	USTBuff_ChangeNotify_Params params;
	params.BuffSystemComponent = BuffSystemComponent;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction_Lua.OnTick
// ()
// Parameters:
// float                          DetalTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffAction_Lua::OnTick(float DetalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction_Lua.OnTick");

	USTBuffAction_Lua_OnTick_Params params;
	params.DetalTime = DetalTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction_Lua.OnInitialize
// ()

void USTBuffAction_Lua::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction_Lua.OnInitialize");

	USTBuffAction_Lua_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction_Lua.OnExecute
// ()

void USTBuffAction_Lua::OnExecute()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction_Lua.OnExecute");

	USTBuffAction_Lua_OnExecute_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction_Lua.OnEnd
// ()

void USTBuffAction_Lua::OnEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction_Lua.OnEnd");

	USTBuffAction_Lua_OnEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction_Lua.OnDestroy
// ()

void USTBuffAction_Lua::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction_Lua.OnDestroy");

	USTBuffAction_Lua_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffAction_Lua.OnChangeNotify
// ()

void USTBuffAction_Lua::OnChangeNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffAction_Lua.OnChangeNotify");

	USTBuffAction_Lua_OnChangeNotify_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCondition_Lua.OnInitialize
// ()

void USTBuffCondition_Lua::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition_Lua.OnInitialize");

	USTBuffCondition_Lua_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCondition_Lua.OnDestroy
// ()

void USTBuffCondition_Lua::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition_Lua.OnDestroy");

	USTBuffCondition_Lua_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffCondition_Lua.CheckIsTrue
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffCondition_Lua::CheckIsTrue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffCondition_Lua.CheckIsTrue");

	USTBuffCondition_Lua_CheckIsTrue_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffConditionComplex.OnInitialize
// ()

void USTBuffConditionComplex::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionComplex.OnInitialize");

	USTBuffConditionComplex_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionComplex.OnDestroy
// ()

void USTBuffConditionComplex::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionComplex.OnDestroy");

	USTBuffConditionComplex_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionComplex.Copy
// ()
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class USTBuffCondition*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBuffCondition* USTBuffConditionComplex::Copy(class UObject* Outer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionComplex.Copy");

	USTBuffConditionComplex_Copy_Params params;
	params.Outer = Outer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffConditionComplex.CheckIsTrue
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffConditionComplex::CheckIsTrue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionComplex.CheckIsTrue");

	USTBuffConditionComplex_CheckIsTrue_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffConditionAction.OnTick
// ()
// Parameters:
// float                          DetalTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffConditionAction::OnTick(float DetalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.OnTick");

	USTBuffConditionAction_OnTick_Params params;
	params.DetalTime = DetalTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionAction.OnInitialize
// ()

void USTBuffConditionAction::OnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.OnInitialize");

	USTBuffConditionAction_OnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionAction.OnDestroy
// ()

void USTBuffConditionAction::OnDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.OnDestroy");

	USTBuffConditionAction_OnDestroy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionAction.OnConditionTrue
// ()

void USTBuffConditionAction::OnConditionTrue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.OnConditionTrue");

	USTBuffConditionAction_OnConditionTrue_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionAction.OnConditionFalse
// ()

void USTBuffConditionAction::OnConditionFalse()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.OnConditionFalse");

	USTBuffConditionAction_OnConditionFalse_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionAction.OnChangeNotify
// ()

void USTBuffConditionAction::OnChangeNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.OnChangeNotify");

	USTBuffConditionAction_OnChangeNotify_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffConditionAction.CheckCondition
// ()

void USTBuffConditionAction::CheckCondition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffConditionAction.CheckCondition");

	USTBuffConditionAction_CheckCondition_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.UpdateClientBuff
// ()
// Parameters:
// struct FClientSyncBrief        Brief                          (Parm)

void USTBuffSystemComponent::UpdateClientBuff(const struct FClientSyncBrief& Brief)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.UpdateClientBuff");

	USTBuffSystemComponent_UpdateClientBuff_Params params;
	params.Brief = Brief;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.RemoveClientBuff
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::RemoveClientBuff(int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.RemoveClientBuff");

	USTBuffSystemComponent_RemoveClientBuff_Params params;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.RemoveBuff
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::RemoveBuff(int BuffID, int LayerCount, class AActor* Causer, int CauseSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.RemoveBuff");

	USTBuffSystemComponent_RemoveBuff_Params params;
	params.BuffID = BuffID;
	params.LayerCount = LayerCount;
	params.Causer = Causer;
	params.CauseSkillID = CauseSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.RemoveAllBuffs
// ()

void USTBuffSystemComponent::RemoveAllBuffs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.RemoveAllBuffs");

	USTBuffSystemComponent_RemoveAllBuffs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.OnRep_SyncBriefs
// ()

void USTBuffSystemComponent::OnRep_SyncBriefs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.OnRep_SyncBriefs");

	USTBuffSystemComponent_OnRep_SyncBriefs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.OnRep_OwnerSyncBriefs
// ()

void USTBuffSystemComponent::OnRep_OwnerSyncBriefs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.OnRep_OwnerSyncBriefs");

	USTBuffSystemComponent_OnRep_OwnerSyncBriefs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.STBuffSystemComponent.OnClientUpdateBuffEvent__DelegateSignature
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::OnClientUpdateBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.STBuffSystemComponent.OnClientUpdateBuffEvent__DelegateSignature");

	USTBuffSystemComponent_OnClientUpdateBuffEvent__DelegateSignature_Params params;
	params.BuffID = BuffID;
	params.SkillID = SkillID;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.STBuffSystemComponent.OnClientRemoveBuffEvent__DelegateSignature
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::OnClientRemoveBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.STBuffSystemComponent.OnClientRemoveBuffEvent__DelegateSignature");

	USTBuffSystemComponent_OnClientRemoveBuffEvent__DelegateSignature_Params params;
	params.BuffID = BuffID;
	params.SkillID = SkillID;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.STBuffSystemComponent.OnClientAddBuffEvent__DelegateSignature
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::OnClientAddBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.STBuffSystemComponent.OnClientAddBuffEvent__DelegateSignature");

	USTBuffSystemComponent_OnClientAddBuffEvent__DelegateSignature_Params params;
	params.BuffID = BuffID;
	params.SkillID = SkillID;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.STBuffSystemComponent.OnAddBuffEvent__DelegateSignature
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsExist                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::OnAddBuffEvent__DelegateSignature(int BuffID, int SkillID, bool IsExist, class AActor* Causer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.STBuffSystemComponent.OnAddBuffEvent__DelegateSignature");

	USTBuffSystemComponent_OnAddBuffEvent__DelegateSignature_Params params;
	params.BuffID = BuffID;
	params.SkillID = SkillID;
	params.IsExist = IsExist;
	params.Causer = Causer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.HasSkillID
// ()
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSystemComponent::HasSkillID(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.HasSkillID");

	USTBuffSystemComponent_HasSkillID_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.HasBuff
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSystemComponent::HasBuff(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.HasBuff");

	USTBuffSystemComponent_HasBuff_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetSubsystem
// ()
// Parameters:
// class UBuffConfigSubsystem*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBuffConfigSubsystem* USTBuffSystemComponent::GetSubsystem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetSubsystem");

	USTBuffSystemComponent_GetSubsystem_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetSTBuffByBuffID
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// class USTBuff*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBuff* USTBuffSystemComponent::GetSTBuffByBuffID(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetSTBuffByBuffID");

	USTBuffSystemComponent_GetSTBuffByBuffID_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetRealOwnerRoleSafety
// ()
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> USTBuffSystemComponent::GetRealOwnerRoleSafety()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetRealOwnerRoleSafety");

	USTBuffSystemComponent_GetRealOwnerRoleSafety_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetBuffInfoByBuffID
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBuffInstInfo>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBuffInstInfo> USTBuffSystemComponent::GetBuffInfoByBuffID(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetBuffInfoByBuffID");

	USTBuffSystemComponent_GetBuffInfoByBuffID_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetBuffInfo
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FBuffInstInfo           OutBuff                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSystemComponent::GetBuffInfo(int InstID, struct FBuffInstInfo* OutBuff)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetBuffInfo");

	USTBuffSystemComponent_GetBuffInfo_Params params;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutBuff != nullptr)
		*OutBuff = params.OutBuff;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetBuffDuration
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USTBuffSystemComponent::GetBuffDuration(int InstID, int CauseSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetBuffDuration");

	USTBuffSystemComponent_GetBuffDuration_Params params;
	params.InstID = InstID;
	params.CauseSkillID = CauseSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetBuffDSEndTime
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USTBuffSystemComponent::GetBuffDSEndTime(int InstID, int CauseSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetBuffDSEndTime");

	USTBuffSystemComponent_GetBuffDSEndTime_Params params;
	params.InstID = InstID;
	params.CauseSkillID = CauseSkillID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.GetAllBuffInfo
// ()
// Parameters:
// TArray<struct FBuffInstInfo>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBuffInstInfo> USTBuffSystemComponent::GetAllBuffInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.GetAllBuffInfo");

	USTBuffSystemComponent_GetAllBuffInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.ClearBuffs
// ()
// Parameters:
// bool                           bClearAll                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bImmediately                   (Parm, ZeroConstructor, IsPlainOldData)

void USTBuffSystemComponent::ClearBuffs(bool bClearAll, bool bImmediately)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.ClearBuffs");

	USTBuffSystemComponent_ClearBuffs_Params params;
	params.bClearAll = bClearAll;
	params.bImmediately = bImmediately;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBuffSystemComponent.ChangeDuration
// ()
// Parameters:
// int                            InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBuffSystemComponent::ChangeDuration(int InstID, float Duration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.ChangeDuration");

	USTBuffSystemComponent_ChangeDuration_Params params;
	params.InstID = InstID;
	params.Duration = Duration;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBuffSystemComponent.AddBuff
// ()
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            CauseSkillID                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTBuffSystemComponent::AddBuff(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID, int Level)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBuffSystemComponent.AddBuff");

	USTBuffSystemComponent_AddBuff_Params params;
	params.BuffID = BuffID;
	params.Causer = Causer;
	params.LayerCount = LayerCount;
	params.CauseSkillID = CauseSkillID;
	params.Level = Level;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TableManagerSubsystem.SetModName
// ()
// Parameters:
// struct FString                 ModName                        (Parm, ZeroConstructor)

void UTableManagerSubsystem::SetModName(const struct FString& ModName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TableManagerSubsystem.SetModName");

	UTableManagerSubsystem_SetModName_Params params;
	params.ModName = ModName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.TableManagerSubsystem.GetTableProxy
// ()
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// bool                           bTempory                       (Parm, ZeroConstructor, IsPlainOldData)
// class UDataTableProxy*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDataTableProxy* UTableManagerSubsystem::GetTableProxy(const struct FString& tableName, bool bTempory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TableManagerSubsystem.GetTableProxy");

	UTableManagerSubsystem_GetTableProxy_Params params;
	params.tableName = tableName;
	params.bTempory = bTempory;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.TableManagerSubsystem.GetTableDataField
// ()
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// struct FTableRowBase           Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Field                          (Parm, ZeroConstructor)
// struct FTableRowBase           Out                            (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTableManagerSubsystem::GetTableDataField(const struct FString& tableName, const struct FTableRowBase& Key, const struct FString& Field, struct FTableRowBase* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TableManagerSubsystem.GetTableDataField");

	UTableManagerSubsystem_GetTableDataField_Params params;
	params.tableName = tableName;
	params.Key = Key;
	params.Field = Field;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

	return params.ReturnValue;
}


// Function Basic.TableManagerSubsystem.GetTableData
// ()
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FTableRowBase           OutRow                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTableManagerSubsystem::GetTableData(const struct FString& tableName, const struct FString& Key, struct FTableRowBase* OutRow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.TableManagerSubsystem.GetTableData");

	UTableManagerSubsystem_GetTableData_Params params;
	params.tableName = tableName;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutRow != nullptr)
		*OutRow = params.OutRow;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetWrapperPath
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBPTable::GetWrapperPath(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetWrapperPath");

	UBPTable_GetWrapperPath_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetWrapperClass
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPTable::GetWrapperClass(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetWrapperClass");

	UBPTable_GetWrapperClass_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetPath
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceLobby                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBPTable::GetPath(int ID, bool IsLobby, bool bForceLobby)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetPath");

	UBPTable_GetPath_Params params;
	params.ID = ID;
	params.IsLobby = IsLobby;
	params.bForceLobby = bForceLobby;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetObject
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLowDevice                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UBPTable::GetObject(int ID, class UObject* Outer, bool IsLobby, bool IsLowDevice)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetObject");

	UBPTable_GetObject_Params params;
	params.ID = ID;
	params.Outer = Outer;
	params.IsLobby = IsLobby;
	params.IsLowDevice = IsLowDevice;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetModObject
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UBPTable::GetModObject(int ID, class UObject* Outer, bool IsLobby)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetModObject");

	UBPTable_GetModObject_Params params;
	params.ID = ID;
	params.Outer = Outer;
	params.IsLobby = IsLobby;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetModClass
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPTable::GetModClass(int ID, bool IsLobby)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetModClass");

	UBPTable_GetModClass_Params params;
	params.ID = ID;
	params.IsLobby = IsLobby;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetCustom1Class
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPTable::GetCustom1Class(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetCustom1Class");

	UBPTable_GetCustom1Class_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetClass
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLowDevice                    (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPTable::GetClass(int ID, bool IsLobby, bool IsLowDevice)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetClass");

	UBPTable_GetClass_Params params;
	params.ID = ID;
	params.IsLobby = IsLobby;
	params.IsLowDevice = IsLowDevice;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.ConvertPath
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UBPTable::ConvertPath(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.ConvertPath");

	UBPTable_ConvertPath_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.InitTableData
// ()

void UUAELoadedClassManager::InitTableData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.InitTableData");

	UUAELoadedClassManager_InitTableData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.InitialModTableItemMap
// ()

void UUAELoadedClassManager::InitialModTableItemMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.InitialModTableItemMap");

	UUAELoadedClassManager_InitialModTableItemMap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.InitBPTableMap_Mod
// ()

void UUAELoadedClassManager::InitBPTableMap_Mod()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.InitBPTableMap_Mod");

	UUAELoadedClassManager_InitBPTableMap_Mod_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.InitBPTableMap
// ()

void UUAELoadedClassManager::InitBPTableMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.InitBPTableMap");

	UUAELoadedClassManager_InitBPTableMap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.HandleTableModNameChanged
// ()
// Parameters:
// struct FString                 InModName                      (Parm, ZeroConstructor)

void UUAELoadedClassManager::HandleTableModNameChanged(const struct FString& InModName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.HandleTableModNameChanged");

	UUAELoadedClassManager_HandleTableModNameChanged_Params params;
	params.InModName = InModName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.GetWrapperPath
// ()
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAELoadedClassManager::GetWrapperPath(const struct FString& BPTableName, int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetWrapperPath");

	UUAELoadedClassManager_GetWrapperPath_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetWrapperClass
// ()
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UUAELoadedClassManager::GetWrapperClass(const struct FString& BPTableName, int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetWrapperClass");

	UUAELoadedClassManager_GetWrapperClass_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetPath
// ()
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceLobby                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAELoadedClassManager::GetPath(const struct FString& BPTableName, int ID, bool IsLobby, bool bForceLobby)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetPath");

	UUAELoadedClassManager_GetPath_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;
	params.IsLobby = IsLobby;
	params.bForceLobby = bForceLobby;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetObject
// ()
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLowDevice                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUAELoadedClassManager::GetObject(const struct FString& BPTableName, int ID, class UObject* Outer, bool IsLobby, bool IsLowDevice)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetObject");

	UUAELoadedClassManager_GetObject_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;
	params.Outer = Outer;
	params.IsLobby = IsLobby;
	params.IsLowDevice = IsLowDevice;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetCustom1Class
// ()
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UUAELoadedClassManager::GetCustom1Class(const struct FString& BPTableName, int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetCustom1Class");

	UUAELoadedClassManager_GetCustom1Class_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetClass
// ()
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLobby                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLowDevice                    (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UUAELoadedClassManager::GetClass(const struct FString& BPTableName, int ID, bool IsLobby, bool IsLowDevice)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetClass");

	UUAELoadedClassManager_GetClass_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;
	params.IsLobby = IsLobby;
	params.IsLowDevice = IsLowDevice;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetBPTableName
// ()
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAELoadedClassManager::GetBPTableName(int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetBPTableName");

	UUAELoadedClassManager_GetBPTableName_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetAssetByAssetReferenceAsync
// ()
// Parameters:
// struct FSoftObjectPath         AssetReference                 (Parm)
// struct FScriptDelegate         AssetLoadSuccessDelegate       (Parm, ZeroConstructor)

void UUAELoadedClassManager::GetAssetByAssetReferenceAsync(const struct FSoftObjectPath& AssetReference, const struct FScriptDelegate& AssetLoadSuccessDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetAssetByAssetReferenceAsync");

	UUAELoadedClassManager_GetAssetByAssetReferenceAsync_Params params;
	params.AssetReference = AssetReference;
	params.AssetLoadSuccessDelegate = AssetLoadSuccessDelegate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.Get
// ()
// Parameters:
// class UUAELoadedClassManager*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAELoadedClassManager* UUAELoadedClassManager::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.Get");

	UUAELoadedClassManager_Get_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.CreateAndAddBPTable_Mod
// ()
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// class UBPTable*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBPTable* UUAELoadedClassManager::CreateAndAddBPTable_Mod(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.CreateAndAddBPTable_Mod");

	UUAELoadedClassManager_CreateAndAddBPTable_Mod_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.CreateAndAddBPTable
// ()
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// class UBPTable*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBPTable* UUAELoadedClassManager::CreateAndAddBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.CreateAndAddBPTable");

	UUAELoadedClassManager_CreateAndAddBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.ClearModTableItemMap
// ()

void UUAELoadedClassManager::ClearModTableItemMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.ClearModTableItemMap");

	UUAELoadedClassManager_ClearModTableItemMap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.ClearBPTable_Mod
// ()

void UUAELoadedClassManager::ClearBPTable_Mod()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.ClearBPTable_Mod");

	UUAELoadedClassManager_ClearBPTable_Mod_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.ClearBPTable
// ()

void UUAELoadedClassManager::ClearBPTable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.ClearBPTable");

	UUAELoadedClassManager_ClearBPTable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.ClearAssetByAssetReferenceAsync
// ()
// Parameters:
// struct FScriptDelegate         AssetLoadSuccessDelegate       (Parm, ZeroConstructor)

void UUAELoadedClassManager::ClearAssetByAssetReferenceAsync(const struct FScriptDelegate& AssetLoadSuccessDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.ClearAssetByAssetReferenceAsync");

	UUAELoadedClassManager_ClearAssetByAssetReferenceAsync_Params params;
	params.AssetLoadSuccessDelegate = AssetLoadSuccessDelegate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.ClearAllData
// ()

void UUAELoadedClassManager::ClearAllData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.ClearAllData");

	UUAELoadedClassManager_ClearAllData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAEMeshComponent.GetPredictedLODLevel
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUAEMeshComponent::GetPredictedLODLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEMeshComponent.GetPredictedLODLevel");

	UUAEMeshComponent_GetPredictedLODLevel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAENetConnection.IsClosed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAENetConnection::IsClosed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAENetConnection.IsClosed");

	UUAENetConnection_IsClosed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.ReleaseTable
// ()
// Parameters:
// struct FName                   TableFName                     (Parm, ZeroConstructor, IsPlainOldData)

void UUAETableManager::ReleaseTable(const struct FName& TableFName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.ReleaseTable");

	UUAETableManager_ReleaseTable_Params params;
	params.TableFName = TableFName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAETableManager.GetTablePtr_Mod
// ()
// Parameters:
// struct FName                   tableName                      (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UUAETableManager::GetTablePtr_Mod(const struct FName& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetTablePtr_Mod");

	UUAETableManager_GetTablePtr_Mod_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetTablePtr
// ()
// Parameters:
// struct FName                   tableName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCheckModTable                 (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UUAETableManager::GetTablePtr(const struct FName& tableName, bool bCheckModTable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetTablePtr");

	UUAETableManager_GetTablePtr_Params params;
	params.tableName = tableName;
	params.bCheckModTable = bCheckModTable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetTableMap
// ()
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// class UBaseTableResMap*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBaseTableResMap* UUAETableManager::GetTableMap(const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetTableMap");

	UUAETableManager_GetTableMap_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetTableData
// ()
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FTableRowBase           OutRow                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAETableManager::GetTableData(const struct FString& tableName, const struct FString& Key, struct FTableRowBase* OutRow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetTableData");

	UUAETableManager_GetTableData_Params params;
	params.tableName = tableName;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutRow != nullptr)
		*OutRow = params.OutRow;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetInstance
// ()
// Parameters:
// class UUAETableManager*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAETableManager* UUAETableManager::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetInstance");

	UUAETableManager_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetDomainByID
// ()
// Parameters:
// int                            ID                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAETableManager::GetDomainByID(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetDomainByID");

	UUAETableManager_GetDomainByID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetDataTableStatic_Mod
// ()
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UUAETableManager::GetDataTableStatic_Mod(const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetDataTableStatic_Mod");

	UUAETableManager_GetDataTableStatic_Mod_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetDataTableStatic
// ()
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UUAETableManager::GetDataTableStatic(const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetDataTableStatic");

	UUAETableManager_GetDataTableStatic_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAETableManager.GetDataTableProxy
// ()
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// bool                           bTempory                       (Parm, ZeroConstructor, IsPlainOldData)
// class UDataTableProxy*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDataTableProxy* UUAETableManager::GetDataTableProxy(const struct FString& tableName, bool bTempory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetDataTableProxy");

	UUAETableManager_GetDataTableProxy_Params params;
	params.tableName = tableName;
	params.bTempory = bTempory;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UELanguageUtilityMethods.SetDownLoadLanguageName
// ()
// Parameters:
// struct FString                 Language                       (Parm, ZeroConstructor)

void UUELanguageUtilityMethods::SetDownLoadLanguageName(const struct FString& Language)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UELanguageUtilityMethods.SetDownLoadLanguageName");

	UUELanguageUtilityMethods_SetDownLoadLanguageName_Params params;
	params.Language = Language;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UELanguageUtilityMethods.IsJaguar
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUELanguageUtilityMethods::IsJaguar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UELanguageUtilityMethods.IsJaguar");

	UUELanguageUtilityMethods_IsJaguar_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UELanguageUtilityMethods.GetPublishRegion
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUELanguageUtilityMethods::GetPublishRegion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UELanguageUtilityMethods.GetPublishRegion");

	UUELanguageUtilityMethods_GetPublishRegion_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UELanguageUtilityMethods.GetDownLoadLanguageName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUELanguageUtilityMethods::GetDownLoadLanguageName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UELanguageUtilityMethods.GetDownLoadLanguageName");

	UUELanguageUtilityMethods_GetDownLoadLanguageName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UELanguageUtilityMethods.GetCurrentLanguageName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUELanguageUtilityMethods::GetCurrentLanguageName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UELanguageUtilityMethods.GetCurrentLanguageName");

	UUELanguageUtilityMethods_GetCurrentLanguageName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UELanguageUtilityMethods.CheckLocalizationExist
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUELanguageUtilityMethods::CheckLocalizationExist()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UELanguageUtilityMethods.CheckLocalizationExist");

	UUELanguageUtilityMethods_CheckLocalizationExist_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEMathUtilityMethods.VectorNormalizeMultiple
// ()
// Parameters:
// struct FVector                 Out                            (Parm, OutParm, IsPlainOldData)
// struct FVector                 v1                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Multiple                       (Parm, ZeroConstructor, IsPlainOldData)

void UUEMathUtilityMethods::VectorNormalizeMultiple(const struct FVector& v1, float Multiple, struct FVector* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.VectorNormalizeMultiple");

	UUEMathUtilityMethods_VectorNormalizeMultiple_Params params;
	params.v1 = v1;
	params.Multiple = Multiple;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Basic.UEMathUtilityMethods.VectorMultiple
// ()
// Parameters:
// struct FVector                 Out                            (Parm, OutParm, IsPlainOldData)
// struct FVector                 v1                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Multiple                       (Parm, ZeroConstructor, IsPlainOldData)

void UUEMathUtilityMethods::VectorMultiple(const struct FVector& v1, float Multiple, struct FVector* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.VectorMultiple");

	UUEMathUtilityMethods_VectorMultiple_Params params;
	params.v1 = v1;
	params.Multiple = Multiple;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Basic.UEMathUtilityMethods.VectorMinus
// ()
// Parameters:
// struct FVector                 Out                            (Parm, OutParm, IsPlainOldData)
// struct FVector                 v1                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 v2                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUEMathUtilityMethods::VectorMinus(const struct FVector& v1, const struct FVector& v2, struct FVector* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.VectorMinus");

	UUEMathUtilityMethods_VectorMinus_Params params;
	params.v1 = v1;
	params.v2 = v2;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Basic.UEMathUtilityMethods.VectorAdditive
// ()
// Parameters:
// struct FVector                 Out                            (Parm, OutParm, IsPlainOldData)
// struct FVector                 v1                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 v2                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUEMathUtilityMethods::VectorAdditive(const struct FVector& v1, const struct FVector& v2, struct FVector* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.VectorAdditive");

	UUEMathUtilityMethods_VectorAdditive_Params params;
	params.v1 = v1;
	params.v2 = v2;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Basic.UEMathUtilityMethods.FilterOKForCurrentMode
// ()
// Parameters:
// unsigned char                  ModeType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModeOpenFlag                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ModeTypes                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUEMathUtilityMethods::FilterOKForCurrentMode(unsigned char ModeType, int ModeOpenFlag, const struct FString& ModeTypes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.FilterOKForCurrentMode");

	UUEMathUtilityMethods_FilterOKForCurrentMode_Params params;
	params.ModeType = ModeType;
	params.ModeOpenFlag = ModeOpenFlag;
	params.ModeTypes = ModeTypes;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEMathUtilityMethods.Conv_VectorToRotator
// ()
// Parameters:
// struct FRotator                Out                            (Parm, OutParm, IsPlainOldData)
// struct FVector                 Vec                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUEMathUtilityMethods::Conv_VectorToRotator(const struct FVector& Vec, struct FRotator* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.Conv_VectorToRotator");

	UUEMathUtilityMethods_Conv_VectorToRotator_Params params;
	params.Vec = Vec;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Basic.UEMathUtilityMethods.CalculateAngleToTargetAngle
// ()
// Parameters:
// float                          StartAngle                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          targetAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          stepAngle                      (Parm, ZeroConstructor, IsPlainOldData)
// EAngleRotationDirectionType    Dir                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUEMathUtilityMethods::CalculateAngleToTargetAngle(float StartAngle, float targetAngle, float stepAngle, EAngleRotationDirectionType Dir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.CalculateAngleToTargetAngle");

	UUEMathUtilityMethods_CalculateAngleToTargetAngle_Params params;
	params.StartAngle = StartAngle;
	params.targetAngle = targetAngle;
	params.stepAngle = stepAngle;
	params.Dir = Dir;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEMathUtilityMethods.BKDRHash
// ()
// Parameters:
// struct FString                 StrToHash                      (Parm, ZeroConstructor)
// int                            Mod                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUEMathUtilityMethods::BKDRHash(const struct FString& StrToHash, int Mod)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.BKDRHash");

	UUEMathUtilityMethods_BKDRHash_Params params;
	params.StrToHash = StrToHash;
	params.Mod = Mod;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEMathUtilityMethods.AngleDis
// ()
// Parameters:
// float                          angleA                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          angleB                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUEMathUtilityMethods::AngleDis(float angleA, float angleB)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEMathUtilityMethods.AngleDis");

	UUEMathUtilityMethods_AngleDis_Params params;
	params.angleA = angleA;
	params.angleB = angleB;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEPathUtilityMethods.IsPathExist
// ()
// Parameters:
// struct FString                 HandlePath                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUEPathUtilityMethods::IsPathExist(const struct FString& HandlePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.IsPathExist");

	UUEPathUtilityMethods_IsPathExist_Params params;
	params.HandlePath = HandlePath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEPathUtilityMethods.IsAvatarResPathExist
// ()
// Parameters:
// struct FString                 HandlePath                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUEPathUtilityMethods::IsAvatarResPathExist(const struct FString& HandlePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.IsAvatarResPathExist");

	UUEPathUtilityMethods_IsAvatarResPathExist_Params params;
	params.HandlePath = HandlePath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEPathUtilityMethods.GetModName
// ()
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUEPathUtilityMethods::GetModName(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.GetModName");

	UUEPathUtilityMethods_GetModName_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UEPathUtilityMethods.GetFullModName
// ()
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MainMod                        (Parm, OutParm, ZeroConstructor)
// struct FString                 SubMod                         (Parm, OutParm, ZeroConstructor)

void UUEPathUtilityMethods::GetFullModName(class UObject* WorldContext, struct FString* MainMod, struct FString* SubMod)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.GetFullModName");

	UUEPathUtilityMethods_GetFullModName_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (MainMod != nullptr)
		*MainMod = params.MainMod;
	if (SubMod != nullptr)
		*SubMod = params.SubMod;
}


// Function Basic.UEPathUtilityMethods.FilterOKForCurrentModeString
// ()
// Parameters:
// struct FString                 CurrentModeString              (Parm, ZeroConstructor)
// struct FString                 ModStringInfo                  (Parm, ZeroConstructor)
// unsigned char                  ModeType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ModeOpenFlag                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUEPathUtilityMethods::FilterOKForCurrentModeString(const struct FString& CurrentModeString, const struct FString& ModStringInfo, unsigned char ModeType, int ModeOpenFlag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UEPathUtilityMethods.FilterOKForCurrentModeString");

	UUEPathUtilityMethods_FilterOKForCurrentModeString_Params params;
	params.CurrentModeString = CurrentModeString;
	params.ModStringInfo = ModStringInfo;
	params.ModeType = ModeType;
	params.ModeOpenFlag = ModeOpenFlag;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

