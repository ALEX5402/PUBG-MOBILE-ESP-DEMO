#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic.UAENetActor.ReceivedPlayerActiveRegionsChanged
struct AUAENetActor_ReceivedPlayerActiveRegionsChanged_Params
{
	bool                                               bEnter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.ItemHandleBase.SetAssociation
struct UItemHandleBase_SetAssociation_Params
{
	int                                                AssociationType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemAssociation                            Association;                                              // (Parm)
};

// Function Basic.ItemHandleBase.RemoveAssociation
struct UItemHandleBase_RemoveAssociation_Params
{
	int                                                AssociationType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.ItemHandleBase.Init
struct UItemHandleBase_Init_Params
{
	struct FItemDefineID                               InDefineID;                                               // (Parm)
};

// Function Basic.ItemHandleBase.GetDefineID
struct UItemHandleBase_GetDefineID_Params
{
	struct FItemDefineID                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Basic.ItemHandleBase.GetAssociationMap
struct UItemHandleBase_GetAssociationMap_Params
{
	TMap<int, struct FItemAssociation>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.ItemHandleBase.GetAssociationListByTargetType
struct UItemHandleBase_GetAssociationListByTargetType_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FItemAssociation>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.ItemHandleBase.GetAssociationByTargetDefineID
struct UItemHandleBase_GetAssociationByTargetDefineID_Params
{
	struct FItemDefineID                               TargetDefineID;                                           // (Parm)
	struct FItemAssociation                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Basic.ItemHandleBase.GetAssociation
struct UItemHandleBase_GetAssociation_Params
{
	int                                                AssociationType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemAssociation                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Basic.ItemHandleBase.Constuct
struct UItemHandleBase_Constuct_Params
{
	struct FItemDefineID                               InDefineID;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Basic.ItemHandleBase.AddAssociation
struct UItemHandleBase_AddAssociation_Params
{
	int                                                AssociationType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemAssociation                            Association;                                              // (Parm)
};

// Function Basic.BattleItemHandleBase.UpdateAttributeModify
struct UBattleItemHandleBase_UpdateAttributeModify_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.UnEquip
struct UBattleItemHandleBase_UnEquip_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HanldePickupAssociationData
struct UBattleItemHandleBase_HanldePickupAssociationData_Params
{
	TArray<struct FBattleItemAdditionalData>           PickupAdditionalData;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HanldeDropAssociationData
struct UBattleItemHandleBase_HanldeDropAssociationData_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HanldeCleared
struct UBattleItemHandleBase_HanldeCleared_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HandleUse
struct UBattleItemHandleBase_HandleUse_Params
{
	struct FBattleItemUseTarget                        Target;                                                   // (Parm)
	EBattleItemUseReason                               Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HandlePickup
struct UBattleItemHandleBase_HandlePickup_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FBattleItemPickupInfo                       PickupInfo;                                               // (Parm)
	EBattleItemPickupReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HandleEnable
struct UBattleItemHandleBase_HandleEnable_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HandleDrop
struct UBattleItemHandleBase_HandleDrop_Params
{
	int                                                InCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemDropReason                              Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HandleDisuse
struct UBattleItemHandleBase_HandleDisuse_Params
{
	EBattleItemDisuseReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HandleChangeItemStoreArea
struct UBattleItemHandleBase_HandleChangeItemStoreArea_Params
{
	EItemStoreArea                                     InItemStoreArea;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.HandleBindToTargetItem
struct UBattleItemHandleBase_HandleBindToTargetItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.GetWorldInternal
struct UBattleItemHandleBase_GetWorldInternal_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.GetCurrentWorld
struct UBattleItemHandleBase_GetCurrentWorld_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BattleItemHandleBase.ExtractItemData
struct UBattleItemHandleBase_ExtractItemData_Params
{
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Basic.BattleItemHandleBase.ClearAdditionalData
struct UBattleItemHandleBase_ClearAdditionalData_Params
{
};

// Function Basic.BattleItemHandleBase.CheckCanUse
struct UBattleItemHandleBase_CheckCanUse_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FBattleItemUseTarget                        Target;                                                   // (Parm)
	EBattleItemUseReason                               Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAENetPoolActor.OnBPRespawned
struct AUAENetPoolActor_OnBPRespawned_Params
{
};

// Function Basic.UAENetPoolActor.OnBPRecycled
struct AUAENetPoolActor_OnBPRecycled_Params
{
};

// Function Basic.STBuffAction.Tick
struct USTBuffAction_Tick_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction.SetEnabled
struct USTBuffAction_SetEnabled_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction.ResetExecute
struct USTBuffAction_ResetExecute_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreEnd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction.OnTick
struct USTBuffAction_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction.OnResetExecute
struct USTBuffAction_OnResetExecute_Params
{
	bool                                               IgnoreEnd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction.OnInitialize
struct USTBuffAction_OnInitialize_Params
{
};

// Function Basic.STBuffAction.OnExecute
struct USTBuffAction_OnExecute_Params
{
};

// Function Basic.STBuffAction.OnEnd
struct USTBuffAction_OnEnd_Params
{
};

// Function Basic.STBuffAction.OnDestroy
struct USTBuffAction_OnDestroy_Params
{
};

// Function Basic.STBuffAction.OnCheckLinkActionEnabled
struct USTBuffAction_OnCheckLinkActionEnabled_Params
{
};

// Function Basic.STBuffAction.OnChangeNotify
struct USTBuffAction_OnChangeNotify_Params
{
};

// Function Basic.STBuffAction.Initialize
struct USTBuffAction_Initialize_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction.GetRealOwnerRole
struct USTBuffAction_GetRealOwnerRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffAction.GetOwner
struct USTBuffAction_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffAction.GetCauser
struct USTBuffAction_GetCauser_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffAction.End
struct USTBuffAction_End_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction.Destroy
struct USTBuffAction_Destroy_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction.CopyAction
struct USTBuffAction_CopyAction_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USTBuffAction*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Basic.STBuffAction.CheckLinkActionEnabled
struct USTBuffAction_CheckLinkActionEnabled_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction.ChangeNotify
struct USTBuffAction_ChangeNotify_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffCondition.OnInitialize
struct USTBuffCondition_OnInitialize_Params
{
};

// Function Basic.STBuffCondition.OnDestroy
struct USTBuffCondition_OnDestroy_Params
{
};

// Function Basic.STBuffCondition.GetOwner
struct USTBuffCondition_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffCondition.GetCauser
struct USTBuffCondition_GetCauser_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffCondition.Copy
struct USTBuffCondition_Copy_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USTBuffCondition*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Basic.STBuffCondition.CheckIsTrue
struct USTBuffCondition_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.SetBuffExpiry
struct USTBaseBuffSystemComponent_SetBuffExpiry_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExpirySeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.ResetForDeath
struct USTBaseBuffSystemComponent_ResetForDeath_Params
{
};

// Function Basic.STBaseBuffSystemComponent.RepBuffSyncList
struct USTBaseBuffSystemComponent_RepBuffSyncList_Params
{
};

// Function Basic.STBaseBuffSystemComponent.RemoveBuffWithCauser
struct USTBaseBuffSystemComponent_RemoveBuffWithCauser_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveLayerOnly;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 pCauser;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.RemoveBuffByID
struct USTBaseBuffSystemComponent_RemoveBuffByID_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveLayerOnly;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 pCauser;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BuffApplierActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.RemoveBuff
struct USTBaseBuffSystemComponent_RemoveBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveLayerOnly;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BuffApplierActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.RefreshAllBuffs
struct USTBaseBuffSystemComponent_RefreshAllBuffs_Params
{
};

// Function Basic.STBaseBuffSystemComponent.IsBufferMutexed
struct USTBaseBuffSystemComponent_IsBufferMutexed_Params
{
	struct FName                                       NewBuffName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.HasBuffID
struct USTBaseBuffSystemComponent_HasBuffID_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.HasBuff
struct USTBaseBuffSystemComponent_HasBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.GetPawnOwner
struct USTBaseBuffSystemComponent_GetPawnOwner_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.GetBuffName
struct USTBaseBuffSystemComponent_GetBuffName_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.GetBuffID
struct USTBaseBuffSystemComponent_GetBuffID_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.GetBuffExpiry
struct USTBaseBuffSystemComponent_GetBuffExpiry_Params
{
	struct FName                                       BuffName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.GetBuffByName
struct USTBaseBuffSystemComponent_GetBuffByName_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USTBaseBuff*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.GetActorOwner
struct USTBaseBuffSystemComponent_GetActorOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.ClientSimulateRemoveBuff
struct USTBaseBuffSystemComponent_ClientSimulateRemoveBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveLayerOnly;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BuffApplierActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.ClientSimulateAddBuff
struct USTBaseBuffSystemComponent_ClientSimulateAddBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 BuffCauser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BuffApplierActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.ClientMulticastSimulateRemoveBuff
struct USTBaseBuffSystemComponent_ClientMulticastSimulateRemoveBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveLayerOnly;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BuffApplierActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.ClientMulticastSimulateAddBuff
struct USTBaseBuffSystemComponent_ClientMulticastSimulateAddBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 BuffCauser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BuffApplierActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.ClientMulticastSetBuffExpiry
struct USTBaseBuffSystemComponent_ClientMulticastSetBuffExpiry_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LeftSecondsAfterNow;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.ClearBuff
struct USTBaseBuffSystemComponent_ClearBuff_Params
{
	bool                                               bDebuff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGainBuff;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.CheckBuffStatus
struct USTBaseBuffSystemComponent_CheckBuffStatus_Params
{
	class UClass*                                      Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction Basic.STBaseBuffSystemComponent.BuffDetached__DelegateSignature
struct USTBaseBuffSystemComponent_BuffDetached__DelegateSignature_Params
{
	struct FName                                       BuffName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// DelegateFunction Basic.STBaseBuffSystemComponent.BuffAttached__DelegateSignature
struct USTBaseBuffSystemComponent_BuffAttached__DelegateSignature_Params
{
	struct FName                                       BuffName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.AddBuffLayer
struct USTBaseBuffSystemComponent_AddBuffLayer_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                layerNum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.AddBuffExpiry
struct USTBaseBuffSystemComponent_AddBuffExpiry_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExpirySeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.AddBuffByID
struct USTBaseBuffSystemComponent_AddBuffByID_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 BuffCauser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BuffApplierActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffSystemComponent.AddBuff
struct USTBaseBuffSystemComponent_AddBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 BuffCauser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BuffApplierActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      CauserActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAEGameInstance.SetLuaStateWrapper
struct UUAEGameInstance_SetLuaStateWrapper_Params
{
	class ULuaStateWrapper*                            TLuaStateWrapper;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.UAEGameInstance.OpenAssetLoadLog
struct UUAEGameInstance_OpenAssetLoadLog_Params
{
};

// DelegateFunction Basic.UAEGameInstance.OnPreBattleResult__DelegateSignature
struct UUAEGameInstance_OnPreBattleResult__DelegateSignature_Params
{
};

// Function Basic.UAEGameInstance.LuaLeakDetect
struct UUAEGameInstance_LuaLeakDetect_Params
{
};

// Function Basic.UAEGameInstance.LuaDoString
struct UUAEGameInstance_LuaDoString_Params
{
	struct FString                                     LuaString;                                                // (Parm, ZeroConstructor)
};

// Function Basic.UAEGameInstance.GetWeatherTime
struct UUAEGameInstance_GetWeatherTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAEGameInstance.GetWeatherLevelName
struct UUAEGameInstance_GetWeatherLevelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UAEGameInstance.GetWeatherID
struct UUAEGameInstance_GetWeatherID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAEGameInstance.GetLuaStateWrapper
struct UUAEGameInstance_GetLuaStateWrapper_Params
{
	class ULuaStateWrapper*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAEGameInstance.GetLoadWeatherName
struct UUAEGameInstance_GetLoadWeatherName_Params
{
	struct FString                                     InWeatherName;                                            // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UAEGameInstance.GetIsHighWeatherLevel
struct UUAEGameInstance_GetIsHighWeatherLevel_Params
{
	struct FString                                     InWeatherLevelName;                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAEGameInstance.GetGameId
struct UUAEGameInstance_GetGameId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UAEGameInstance.GetDeviceLevel
struct UUAEGameInstance_GetDeviceLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAEGameInstance.GetDataTable_Mod
struct UUAEGameInstance_GetDataTable_Mod_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	class UUAEDataTable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAEGameInstance.GetDataTable
struct UUAEGameInstance_GetDataTable_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	class UUAEDataTable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAEGameInstance.GetAssociatedFrontendHUD
struct UUAEGameInstance_GetAssociatedFrontendHUD_Params
{
	class UFrontendHUD*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAEGameInstance.CloseAssetLoadLog
struct UUAEGameInstance_CloseAssetLoadLog_Params
{
};

// Function Basic.AttrModifyComponent.SetValueToAttributeSafety
struct UAttrModifyComponent_SetValueToAttributeSafety_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.SetOrignalValueToAttribute
struct UAttrModifyComponent_SetOrignalValueToAttribute_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.SetAttrModifyStateValue
struct UAttrModifyComponent_SetAttrModifyStateValue_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.SetAttributeMaxValue
struct UAttrModifyComponent_SetAttributeMaxValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              MaxValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.ResponeAttrValue
struct UAttrModifyComponent_ResponeAttrValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              FinalValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.RequestAttrValue
struct UAttrModifyComponent_RequestAttrValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
};

// Function Basic.AttrModifyComponent.RemoveModifyItemFromCache
struct UAttrModifyComponent_RemoveModifyItemFromCache_Params
{
	uint32_t                                           ModifyUID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.RegisterModifyAbleAttr
struct UAttrModifyComponent_RegisterModifyAbleAttr_Params
{
	TArray<struct FAttrRegisterItem>                   AttrRegists;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bSetAttrByOrigin;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.OnRep_ModSimulateSyncList
struct UAttrModifyComponent_OnRep_ModSimulateSyncList_Params
{
};

// Function Basic.AttrModifyComponent.OnRep_DynamicModifier
struct UAttrModifyComponent_OnRep_DynamicModifier_Params
{
};

// Function Basic.AttrModifyComponent.OnRep_AttrModifyStateList
struct UAttrModifyComponent_OnRep_AttrModifyStateList_Params
{
};

// DelegateFunction Basic.AttrModifyComponent.OnAttrModifiedEvent__DelegateSignature
struct UAttrModifyComponent_OnAttrModifiedEvent__DelegateSignature_Params
{
	TArray<struct FAttrAffected>                       AffectedAttrS;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Basic.AttrModifyComponent.IsAttrModifyStateValidIndex
struct UAttrModifyComponent_IsAttrModifyStateValidIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.HasDynamicModifier
struct UAttrModifyComponent_HasDynamicModifier_Params
{
	struct FString                                     AttrModifyId;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.GetSubsystem
struct UAttrModifyComponent_GetSubsystem_Params
{
	class UAttrModifyModDataSubsystem*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.GetMaxAttrName
struct UAttrModifyComponent_GetMaxAttrName_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.AttrModifyComponent.GetAttrModifyStateValue
struct UAttrModifyComponent_GetAttrModifyStateValue_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.GetAttrModifyStateNum
struct UAttrModifyComponent_GetAttrModifyStateNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.GetAttrModifyItemByItemName
struct UAttrModifyComponent_GetAttrModifyItemByItemName_Params
{
	struct FString                                     ItemName;                                                 // (Parm, ZeroConstructor)
	struct FAttrModifyItem                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Basic.AttrModifyComponent.GetAttributeValue
struct UAttrModifyComponent_GetAttributeValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.GetAttributeOrignalValue
struct UAttrModifyComponent_GetAttributeOrignalValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.EnableAttrModifierByIndex
struct UAttrModifyComponent_EnableAttrModifierByIndex_Params
{
	int                                                ModifyConfigIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.EnableAttrModifier
struct UAttrModifyComponent_EnableAttrModifier_Params
{
	struct FString                                     AttrModifyItemName;                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.DisableAttrModifierByIndex
struct UAttrModifyComponent_DisableAttrModifierByIndex_Params
{
	int                                                ModifyConfigIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.DisableAttrModifier
struct UAttrModifyComponent_DisableAttrModifier_Params
{
	struct FString                                     AttrModifyItemName;                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.DisableAllAttrModifier
struct UAttrModifyComponent_DisableAllAttrModifier_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.AddValueToAttribute
struct UAttrModifyComponent_AddValueToAttribute_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.AddModifyItemAndCache
struct UAttrModifyComponent_AddModifyItemAndCache_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	EAttrModifyRefType                                 CModifyType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               oldModify;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.AddDynamicModifier
struct UAttrModifyComponent_AddDynamicModifier_Params
{
	struct FAttrModifyItem                             AttrModifyItem;                                           // (Parm, OutParm)
	bool                                               RepOnlyOwner;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.AddBModifyAndCacheWithCParam
struct UAttrModifyComponent_AddBModifyAndCacheWithCParam_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	EAttrModifyRefType                                 CModifyType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyComponent.AddBModifyAndCache
struct UAttrModifyComponent_AddBModifyAndCache_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	EAttrOperator                                      ModifyType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyInterface.SetAttrValue
struct UAttrModifyInterface_SetAttrValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              NewVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.AttrModifyInterface.RequestAttrValue
struct UAttrModifyInterface_RequestAttrValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
};

// Function Basic.AttrModifyInterface.RegisterModifiedAttributes
struct UAttrModifyInterface_RegisterModifiedAttributes_Params
{
};

// Function Basic.AttrModifyInterface.GetAttrValue
struct UAttrModifyInterface_GetAttrValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyInterface.GetAttrModifyRelevantActors
struct UAttrModifyInterface_GetAttrModifyRelevantActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.AttrModifyInterface.GetAttrModifyComponent
struct UAttrModifyInterface_GetAttrModifyComponent_Params
{
	class UAttrModifyComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Basic.AttrModifyInterface.GetAttributeValue
struct UAttrModifyInterface_GetAttributeValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.AttrModifyInterface.AddAttrValue
struct UAttrModifyInterface_AddAttrValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              AddVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.BPClassManager.ModifyClass
struct UBPClassManager_ModifyClass_Params
{
	class UClass*                                      InNativeClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModTag;                                                   // (Parm, ZeroConstructor)
};

// Function Basic.BPClassManager.GetUClass
struct UBPClassManager_GetUClass_Params
{
	int                                                KeyIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPClassManager.GetBPClassOverrideByName
struct UBPClassManager_GetBPClassOverrideByName_Params
{
	struct FString                                     ClassTagName;                                             // (Parm, ZeroConstructor)
	struct FString                                     ModTag;                                                   // (Parm, ZeroConstructor)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPClassManager.GetBPClassOverride
struct UBPClassManager_GetBPClassOverride_Params
{
	class UClass*                                      InNativeClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModTag;                                                   // (Parm, ZeroConstructor)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPClassManager.Get
struct UBPClassManager_Get_Params
{
	class UBPClassManager*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.DelayReplicationInterface.ReSendRPCAfterBeginPlay
struct UDelayReplicationInterface_ReSendRPCAfterBeginPlay_Params
{
};

// Function Basic.DelayReplicationInterface.ReCallRepAfterBeginPlay
struct UDelayReplicationInterface_ReCallRepAfterBeginPlay_Params
{
};

// Function Basic.ItemContainerInterface.GetOwningObject
struct UItemContainerInterface_GetOwningObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.ItemContainerInterface.GetItemHandleListByDefineID
struct UItemContainerInterface_GetItemHandleListByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class UItemHandleBase*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.ItemContainerInterface.GetItemHandleByDefineID
struct UItemContainerInterface_GetItemHandleByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class UItemHandleBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.ItemContainerInterface.GetItemDefineIDList
struct UItemContainerInterface_GetItemDefineIDList_Params
{
	TArray<struct FItemDefineID>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.ItemContainerOwnerInterface.NotifyItemUpdated
struct UItemContainerOwnerInterface_NotifyItemUpdated_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBattleItemData                             ItemData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Basic.ItemContainerOwnerInterface.NotifyItemRemoved
struct UItemContainerOwnerInterface_NotifyItemRemoved_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Basic.ItemContainerOwnerInterface.NotifyItemEmpty
struct UItemContainerOwnerInterface_NotifyItemEmpty_Params
{
};

// Function Basic.ItemContainerOwnerInterface.NotifyItemAdded
struct UItemContainerOwnerInterface_NotifyItemAdded_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBattleItemData                             ItemData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Basic.LuaEventBridgeFunction.UnRegisterEventByTarget
struct ULuaEventBridgeFunction_UnRegisterEventByTarget_Params
{
	class UObject*                                     ObjContext;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.LuaEventBridgeFunction.UnRegisterEvent
struct ULuaEventBridgeFunction_UnRegisterEvent_Params
{
	struct FString                                     FEventType;                                               // (Parm, ZeroConstructor)
	struct FString                                     EventId;                                                  // (Parm, ZeroConstructor)
	class UObject*                                     ObjContext;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventHandle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.LuaEventBridgeFunction.RegistEvent
struct ULuaEventBridgeFunction_RegistEvent_Params
{
	struct FString                                     EventType;                                                // (Parm, ZeroConstructor)
	struct FString                                     EventId;                                                  // (Parm, ZeroConstructor)
	class UObject*                                     ObjContext;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.LuaEventBridge.SyncLuaRegisterEventNum
struct ULuaEventBridge_SyncLuaRegisterEventNum_Params
{
	struct FString                                     EventType;                                                // (Parm, ZeroConstructor)
	struct FString                                     EventId;                                                  // (Parm, ZeroConstructor)
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.LuaEventBridge.GetCurrentParam
struct ULuaEventBridge_GetCurrentParam_Params
{
	TArray<class ULuaTemBPData*>                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Basic.LuaEventBridge.DeactivateEventsByFilterKey
struct ULuaEventBridge_DeactivateEventsByFilterKey_Params
{
	uint32_t                                           FilterKey;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Basic.LuaEventBridge.CheckNeedPostEventWithFilterKey
struct ULuaEventBridge_CheckNeedPostEventWithFilterKey_Params
{
	uint32_t                                           FilterKey;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     EventType;                                                // (Parm, ZeroConstructor)
	struct FString                                     EventId;                                                  // (Parm, ZeroConstructor)
	bool                                               bCheckNeedPostLua;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.LuaEventBridge.ActiveEventByFilterKey
struct ULuaEventBridge_ActiveEventByFilterKey_Params
{
	uint32_t                                           FilterKey;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     EventType;                                                // (Parm, ZeroConstructor)
	struct FString                                     EventId;                                                  // (Parm, ZeroConstructor)
	bool                                               bActive;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.LuaEventSubsystem.UnRegistEvent
struct ULuaEventSubsystem_UnRegistEvent_Params
{
	int                                                EventHandle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.LuaEventSubsystem.SetBridgeFunction
struct ULuaEventSubsystem_SetBridgeFunction_Params
{
	struct FSluaBPVar                                  OnRegistEvent;                                            // (Parm)
	struct FSluaBPVar                                  OnUnRegistEvent;                                          // (Parm)
	struct FSluaBPVar                                  OnPostEvent;                                              // (Parm)
	struct FSluaBPVar                                  OnPostBlueprintEvent;                                     // (Parm)
};

// Function Basic.LuaEventSubsystem.RegistEvent
struct ULuaEventSubsystem_RegistEvent_Params
{
	struct FString                                     EventId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     EventType;                                                // (Parm, ZeroConstructor)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.RenderFunctionLibrary.MarkComponentRenderStateDirty
struct URenderFunctionLibrary_MarkComponentRenderStateDirty_Params
{
	class UActorComponent*                             Comp;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.SyncInvincibleData
struct USTBaseBuffCarrierInterface_SyncInvincibleData_Params
{
	float                                              TotalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.SetBuffExpiry
struct USTBaseBuffCarrierInterface_SetBuffExpiry_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExpirySecondsFromNow;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.RemoveBuffBySkill
struct USTBaseBuffCarrierInterface_RemoveBuffBySkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.RemoveBuffByID
struct USTBaseBuffCarrierInterface_RemoveBuffByID_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CauseSkillID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.RemoveBuff
struct USTBaseBuffCarrierInterface_RemoveBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveLayerOnly;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BuffApplierActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.IsSameTeamWithFirstPC
struct USTBaseBuffCarrierInterface_IsSameTeamWithFirstPC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.HasBuffID
struct USTBaseBuffCarrierInterface_HasBuffID_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.HasBuff
struct USTBaseBuffCarrierInterface_HasBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.GetBuffExpiry
struct USTBaseBuffCarrierInterface_GetBuffExpiry_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.GetBuffDuration
struct USTBaseBuffCarrierInterface_GetBuffDuration_Params
{
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CauseSkillID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.GetBuffByName
struct USTBaseBuffCarrierInterface_GetBuffByName_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USTBaseBuff*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.CheckBuffTarget
struct USTBaseBuffCarrierInterface_CheckBuffTarget_Params
{
	class USTBuff*                                     Buff;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.ChangeBuffDuration
struct USTBaseBuffCarrierInterface_ChangeBuffDuration_Params
{
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.AddBuffLayer
struct USTBaseBuffCarrierInterface_AddBuffLayer_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                layerNum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.AddBuffExpiry
struct USTBaseBuffCarrierInterface_AddBuffExpiry_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExpirySeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.AddBuffBySkill
struct USTBaseBuffCarrierInterface_AddBuffBySkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.AddBuffByID
struct USTBaseBuffCarrierInterface_AddBuffByID_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CauseSkillID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBaseBuffCarrierInterface.AddBuff
struct USTBaseBuffCarrierInterface_AddBuff_Params
{
	struct FName                                       BuffName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 SkillActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BuffApplierActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      CauserActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuff.Tick
struct USTBuff_Tick_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuff.ResetActionExecute
struct USTBuff_ResetActionExecute_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuff.Initialize
struct USTBuff_Initialize_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuff.End
struct USTBuff_End_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuff.Destroy
struct USTBuff_Destroy_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuff.CopyActions
struct USTBuff_CopyActions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuff.ChangeNotify
struct USTBuff_ChangeNotify_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction_Lua.OnTick
struct USTBuffAction_Lua_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffAction_Lua.OnInitialize
struct USTBuffAction_Lua_OnInitialize_Params
{
};

// Function Basic.STBuffAction_Lua.OnExecute
struct USTBuffAction_Lua_OnExecute_Params
{
};

// Function Basic.STBuffAction_Lua.OnEnd
struct USTBuffAction_Lua_OnEnd_Params
{
};

// Function Basic.STBuffAction_Lua.OnDestroy
struct USTBuffAction_Lua_OnDestroy_Params
{
};

// Function Basic.STBuffAction_Lua.OnChangeNotify
struct USTBuffAction_Lua_OnChangeNotify_Params
{
};

// Function Basic.STBuffCondition_Lua.OnInitialize
struct USTBuffCondition_Lua_OnInitialize_Params
{
};

// Function Basic.STBuffCondition_Lua.OnDestroy
struct USTBuffCondition_Lua_OnDestroy_Params
{
};

// Function Basic.STBuffCondition_Lua.CheckIsTrue
struct USTBuffCondition_Lua_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffConditionComplex.OnInitialize
struct USTBuffConditionComplex_OnInitialize_Params
{
};

// Function Basic.STBuffConditionComplex.OnDestroy
struct USTBuffConditionComplex_OnDestroy_Params
{
};

// Function Basic.STBuffConditionComplex.Copy
struct USTBuffConditionComplex_Copy_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USTBuffCondition*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Basic.STBuffConditionComplex.CheckIsTrue
struct USTBuffConditionComplex_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffConditionAction.OnTick
struct USTBuffConditionAction_OnTick_Params
{
	float                                              DetalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffConditionAction.OnInitialize
struct USTBuffConditionAction_OnInitialize_Params
{
};

// Function Basic.STBuffConditionAction.OnDestroy
struct USTBuffConditionAction_OnDestroy_Params
{
};

// Function Basic.STBuffConditionAction.OnConditionTrue
struct USTBuffConditionAction_OnConditionTrue_Params
{
};

// Function Basic.STBuffConditionAction.OnConditionFalse
struct USTBuffConditionAction_OnConditionFalse_Params
{
};

// Function Basic.STBuffConditionAction.OnChangeNotify
struct USTBuffConditionAction_OnChangeNotify_Params
{
};

// Function Basic.STBuffConditionAction.CheckCondition
struct USTBuffConditionAction_CheckCondition_Params
{
};

// Function Basic.STBuffSystemComponent.UpdateClientBuff
struct USTBuffSystemComponent_UpdateClientBuff_Params
{
	struct FClientSyncBrief                            Brief;                                                    // (Parm)
};

// Function Basic.STBuffSystemComponent.RemoveClientBuff
struct USTBuffSystemComponent_RemoveClientBuff_Params
{
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.RemoveBuff
struct USTBuffSystemComponent_RemoveBuff_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CauseSkillID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.RemoveAllBuffs
struct USTBuffSystemComponent_RemoveAllBuffs_Params
{
};

// Function Basic.STBuffSystemComponent.OnRep_SyncBriefs
struct USTBuffSystemComponent_OnRep_SyncBriefs_Params
{
};

// Function Basic.STBuffSystemComponent.OnRep_OwnerSyncBriefs
struct USTBuffSystemComponent_OnRep_OwnerSyncBriefs_Params
{
};

// DelegateFunction Basic.STBuffSystemComponent.OnClientUpdateBuffEvent__DelegateSignature
struct USTBuffSystemComponent_OnClientUpdateBuffEvent__DelegateSignature_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Basic.STBuffSystemComponent.OnClientRemoveBuffEvent__DelegateSignature
struct USTBuffSystemComponent_OnClientRemoveBuffEvent__DelegateSignature_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Basic.STBuffSystemComponent.OnClientAddBuffEvent__DelegateSignature
struct USTBuffSystemComponent_OnClientAddBuffEvent__DelegateSignature_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Basic.STBuffSystemComponent.OnAddBuffEvent__DelegateSignature
struct USTBuffSystemComponent_OnAddBuffEvent__DelegateSignature_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsExist;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.HasSkillID
struct USTBuffSystemComponent_HasSkillID_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.HasBuff
struct USTBuffSystemComponent_HasBuff_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.GetSubsystem
struct USTBuffSystemComponent_GetSubsystem_Params
{
	class UBuffConfigSubsystem*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.GetSTBuffByBuffID
struct USTBuffSystemComponent_GetSTBuffByBuffID_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class USTBuff*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.GetRealOwnerRoleSafety
struct USTBuffSystemComponent_GetRealOwnerRoleSafety_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.GetBuffInfoByBuffID
struct USTBuffSystemComponent_GetBuffInfoByBuffID_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FBuffInstInfo>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.STBuffSystemComponent.GetBuffInfo
struct USTBuffSystemComponent_GetBuffInfo_Params
{
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBuffInstInfo                               OutBuff;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.GetBuffDuration
struct USTBuffSystemComponent_GetBuffDuration_Params
{
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CauseSkillID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.GetBuffDSEndTime
struct USTBuffSystemComponent_GetBuffDSEndTime_Params
{
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CauseSkillID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.GetAllBuffInfo
struct USTBuffSystemComponent_GetAllBuffInfo_Params
{
	TArray<struct FBuffInstInfo>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.STBuffSystemComponent.ClearBuffs
struct USTBuffSystemComponent_ClearBuffs_Params
{
	bool                                               bClearAll;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediately;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.ChangeDuration
struct USTBuffSystemComponent_ChangeDuration_Params
{
	int                                                InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.STBuffSystemComponent.AddBuff
struct USTBuffSystemComponent_AddBuff_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CauseSkillID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.TableManagerSubsystem.SetModName
struct UTableManagerSubsystem_SetModName_Params
{
	struct FString                                     ModName;                                                  // (Parm, ZeroConstructor)
};

// Function Basic.TableManagerSubsystem.GetTableProxy
struct UTableManagerSubsystem_GetTableProxy_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	bool                                               bTempory;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataTableProxy*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.TableManagerSubsystem.GetTableDataField
struct UTableManagerSubsystem_GetTableDataField_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	struct FTableRowBase                               Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     Field;                                                    // (Parm, ZeroConstructor)
	struct FTableRowBase                               Out;                                                      // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.TableManagerSubsystem.GetTableData
struct UTableManagerSubsystem_GetTableData_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FTableRowBase                               OutRow;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPTable.GetWrapperPath
struct UBPTable_GetWrapperPath_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.BPTable.GetWrapperClass
struct UBPTable_GetWrapperClass_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPTable.GetPath
struct UBPTable_GetPath_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLobby;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceLobby;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.BPTable.GetObject
struct UBPTable_GetObject_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLobby;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLowDevice;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPTable.GetModObject
struct UBPTable_GetModObject_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLobby;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPTable.GetModClass
struct UBPTable_GetModClass_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLobby;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPTable.GetCustom1Class
struct UBPTable_GetCustom1Class_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPTable.GetClass
struct UBPTable_GetClass_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLobby;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLowDevice;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.BPTable.ConvertPath
struct UBPTable_ConvertPath_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.UAELoadedClassManager.InitTableData
struct UUAELoadedClassManager_InitTableData_Params
{
};

// Function Basic.UAELoadedClassManager.InitialModTableItemMap
struct UUAELoadedClassManager_InitialModTableItemMap_Params
{
};

// Function Basic.UAELoadedClassManager.InitBPTableMap_Mod
struct UUAELoadedClassManager_InitBPTableMap_Mod_Params
{
};

// Function Basic.UAELoadedClassManager.InitBPTableMap
struct UUAELoadedClassManager_InitBPTableMap_Params
{
};

// Function Basic.UAELoadedClassManager.HandleTableModNameChanged
struct UUAELoadedClassManager_HandleTableModNameChanged_Params
{
	struct FString                                     InModName;                                                // (Parm, ZeroConstructor)
};

// Function Basic.UAELoadedClassManager.GetWrapperPath
struct UUAELoadedClassManager_GetWrapperPath_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UAELoadedClassManager.GetWrapperClass
struct UUAELoadedClassManager_GetWrapperClass_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAELoadedClassManager.GetPath
struct UUAELoadedClassManager_GetPath_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLobby;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceLobby;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UAELoadedClassManager.GetObject
struct UUAELoadedClassManager_GetObject_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLobby;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLowDevice;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAELoadedClassManager.GetCustom1Class
struct UUAELoadedClassManager_GetCustom1Class_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAELoadedClassManager.GetClass
struct UUAELoadedClassManager_GetClass_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLobby;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLowDevice;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAELoadedClassManager.GetBPTableName
struct UUAELoadedClassManager_GetBPTableName_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UAELoadedClassManager.GetAssetByAssetReferenceAsync
struct UUAELoadedClassManager_GetAssetByAssetReferenceAsync_Params
{
	struct FSoftObjectPath                             AssetReference;                                           // (Parm)
	struct FScriptDelegate                             AssetLoadSuccessDelegate;                                 // (Parm, ZeroConstructor)
};

// Function Basic.UAELoadedClassManager.Get
struct UUAELoadedClassManager_Get_Params
{
	class UUAELoadedClassManager*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAELoadedClassManager.CreateAndAddBPTable_Mod
struct UUAELoadedClassManager_CreateAndAddBPTable_Mod_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	class UBPTable*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAELoadedClassManager.CreateAndAddBPTable
struct UUAELoadedClassManager_CreateAndAddBPTable_Params
{
	struct FString                                     BPTableName;                                              // (Parm, ZeroConstructor)
	class UBPTable*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAELoadedClassManager.ClearModTableItemMap
struct UUAELoadedClassManager_ClearModTableItemMap_Params
{
};

// Function Basic.UAELoadedClassManager.ClearBPTable_Mod
struct UUAELoadedClassManager_ClearBPTable_Mod_Params
{
};

// Function Basic.UAELoadedClassManager.ClearBPTable
struct UUAELoadedClassManager_ClearBPTable_Params
{
};

// Function Basic.UAELoadedClassManager.ClearAssetByAssetReferenceAsync
struct UUAELoadedClassManager_ClearAssetByAssetReferenceAsync_Params
{
	struct FScriptDelegate                             AssetLoadSuccessDelegate;                                 // (Parm, ZeroConstructor)
};

// Function Basic.UAELoadedClassManager.ClearAllData
struct UUAELoadedClassManager_ClearAllData_Params
{
};

// Function Basic.UAEMeshComponent.GetPredictedLODLevel
struct UUAEMeshComponent_GetPredictedLODLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAENetConnection.IsClosed
struct UUAENetConnection_IsClosed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAETableManager.ReleaseTable
struct UUAETableManager_ReleaseTable_Params
{
	struct FName                                       TableFName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.UAETableManager.GetTablePtr_Mod
struct UUAETableManager_GetTablePtr_Mod_Params
{
	struct FName                                       tableName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEDataTable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAETableManager.GetTablePtr
struct UUAETableManager_GetTablePtr_Params
{
	struct FName                                       tableName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckModTable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEDataTable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAETableManager.GetTableMap
struct UUAETableManager_GetTableMap_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	class UBaseTableResMap*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAETableManager.GetTableData
struct UUAETableManager_GetTableData_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FTableRowBase                               OutRow;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAETableManager.GetInstance
struct UUAETableManager_GetInstance_Params
{
	class UUAETableManager*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAETableManager.GetDomainByID
struct UUAETableManager_GetDomainByID_Params
{
	int                                                ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UAETableManager.GetDataTableStatic_Mod
struct UUAETableManager_GetDataTableStatic_Mod_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	class UUAEDataTable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAETableManager.GetDataTableStatic
struct UUAETableManager_GetDataTableStatic_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	class UUAEDataTable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UAETableManager.GetDataTableProxy
struct UUAETableManager_GetDataTableProxy_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	bool                                               bTempory;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataTableProxy*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UELanguageUtilityMethods.SetDownLoadLanguageName
struct UUELanguageUtilityMethods_SetDownLoadLanguageName_Params
{
	struct FString                                     Language;                                                 // (Parm, ZeroConstructor)
};

// Function Basic.UELanguageUtilityMethods.IsJaguar
struct UUELanguageUtilityMethods_IsJaguar_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UELanguageUtilityMethods.GetPublishRegion
struct UUELanguageUtilityMethods_GetPublishRegion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UELanguageUtilityMethods.GetDownLoadLanguageName
struct UUELanguageUtilityMethods_GetDownLoadLanguageName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UELanguageUtilityMethods.GetCurrentLanguageName
struct UUELanguageUtilityMethods_GetCurrentLanguageName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UELanguageUtilityMethods.CheckLocalizationExist
struct UUELanguageUtilityMethods_CheckLocalizationExist_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UEMathUtilityMethods.VectorNormalizeMultiple
struct UUEMathUtilityMethods_VectorNormalizeMultiple_Params
{
	struct FVector                                     Out;                                                      // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     v1;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Multiple;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.UEMathUtilityMethods.VectorMultiple
struct UUEMathUtilityMethods_VectorMultiple_Params
{
	struct FVector                                     Out;                                                      // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     v1;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Multiple;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic.UEMathUtilityMethods.VectorMinus
struct UUEMathUtilityMethods_VectorMinus_Params
{
	struct FVector                                     Out;                                                      // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     v1;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     v2;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Basic.UEMathUtilityMethods.VectorAdditive
struct UUEMathUtilityMethods_VectorAdditive_Params
{
	struct FVector                                     Out;                                                      // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     v1;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     v2;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Basic.UEMathUtilityMethods.FilterOKForCurrentMode
struct UUEMathUtilityMethods_FilterOKForCurrentMode_Params
{
	unsigned char                                      ModeType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModeOpenFlag;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModeTypes;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UEMathUtilityMethods.Conv_VectorToRotator
struct UUEMathUtilityMethods_Conv_VectorToRotator_Params
{
	struct FRotator                                    Out;                                                      // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Vec;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Basic.UEMathUtilityMethods.CalculateAngleToTargetAngle
struct UUEMathUtilityMethods_CalculateAngleToTargetAngle_Params
{
	float                                              StartAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              targetAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              stepAngle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EAngleRotationDirectionType                        Dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UEMathUtilityMethods.BKDRHash
struct UUEMathUtilityMethods_BKDRHash_Params
{
	struct FString                                     StrToHash;                                                // (Parm, ZeroConstructor)
	int                                                Mod;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UEMathUtilityMethods.AngleDis
struct UUEMathUtilityMethods_AngleDis_Params
{
	float                                              angleA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              angleB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UEPathUtilityMethods.IsPathExist
struct UUEPathUtilityMethods_IsPathExist_Params
{
	struct FString                                     HandlePath;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UEPathUtilityMethods.IsAvatarResPathExist
struct UUEPathUtilityMethods_IsAvatarResPathExist_Params
{
	struct FString                                     HandlePath;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Basic.UEPathUtilityMethods.GetModName
struct UUEPathUtilityMethods_GetModName_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Basic.UEPathUtilityMethods.GetFullModName
struct UUEPathUtilityMethods_GetFullModName_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MainMod;                                                  // (Parm, OutParm, ZeroConstructor)
	struct FString                                     SubMod;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function Basic.UEPathUtilityMethods.FilterOKForCurrentModeString
struct UUEPathUtilityMethods_FilterOKForCurrentModeString_Params
{
	struct FString                                     CurrentModeString;                                        // (Parm, ZeroConstructor)
	struct FString                                     ModStringInfo;                                            // (Parm, ZeroConstructor)
	unsigned char                                      ModeType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModeOpenFlag;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

