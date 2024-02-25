// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UnrealArchExt.UAEUserWidget.Visible
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEUserWidget::Visible()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.Visible");

	UUAEUserWidget_Visible_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.UnRegistFromGameFrontendHUD
// ()

void UUAEUserWidget::UnRegistFromGameFrontendHUD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.UnRegistFromGameFrontendHUD");

	UUAEUserWidget_UnRegistFromGameFrontendHUD_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.SynchronizeBlueprintProperties
// ()

void UUAEUserWidget::SynchronizeBlueprintProperties()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.SynchronizeBlueprintProperties");

	UUAEUserWidget_SynchronizeBlueprintProperties_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.Show
// ()

void UUAEUserWidget::Show()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.Show");

	UUAEUserWidget_Show_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.SetParentWidgetRecursive
// ()
// Parameters:
// class UUAEUserWidget*          InParentWidget                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEUserWidget::SetParentWidgetRecursive(class UUAEUserWidget* InParentWidget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.SetParentWidgetRecursive");

	UUAEUserWidget_SetParentWidgetRecursive_Params params;
	params.InParentWidget = InParentWidget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.SetParentWidget
// ()
// Parameters:
// class UUAEUserWidget*          InParentWidget                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEUserWidget::SetParentWidget(class UUAEUserWidget* InParentWidget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.SetParentWidget");

	UUAEUserWidget_SetParentWidget_Params params;
	params.InParentWidget = InParentWidget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.SetOnWidgetShow
// ()
// Parameters:
// struct FScriptDelegate         onShow                         (Parm, ZeroConstructor)

void UUAEUserWidget::SetOnWidgetShow(const struct FScriptDelegate& onShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.SetOnWidgetShow");

	UUAEUserWidget_SetOnWidgetShow_Params params;
	params.onShow = onShow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.SetOnWidgetHide
// ()
// Parameters:
// struct FScriptDelegate         OnHide                         (Parm, ZeroConstructor)

void UUAEUserWidget::SetOnWidgetHide(const struct FScriptDelegate& OnHide)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.SetOnWidgetHide");

	UUAEUserWidget_SetOnWidgetHide_Params params;
	params.OnHide = OnHide;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.SetOnClearUIStack
// ()
// Parameters:
// struct FScriptDelegate         onClear                        (Parm, ZeroConstructor)

void UUAEUserWidget::SetOnClearUIStack(const struct FScriptDelegate& onClear)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.SetOnClearUIStack");

	UUAEUserWidget_SetOnClearUIStack_Params params;
	params.onClear = onClear;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.SetAdapation
// ()
// Parameters:
// float                          Left                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Top                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Right                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Bottom                         (Parm, ZeroConstructor, IsPlainOldData)

void UUAEUserWidget::SetAdapation(float Left, float Top, float Right, float Bottom)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.SetAdapation");

	UUAEUserWidget_SetAdapation_Params params;
	params.Left = Left;
	params.Top = Top;
	params.Right = Right;
	params.Bottom = Bottom;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.RegistToGameFrontendHUD
// ()
// Parameters:
// class UFrontendHUD*            GameFrontHUD                   (Parm, ZeroConstructor, IsPlainOldData)

void UUAEUserWidget::RegistToGameFrontendHUD(class UFrontendHUD* GameFrontHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.RegistToGameFrontendHUD");

	UUAEUserWidget_RegistToGameFrontendHUD_Params params;
	params.GameFrontHUD = GameFrontHUD;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.Register
// ()
// Parameters:
// class ULogicManagerBase*       LogicManager                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAddToViewport                 (Parm, ZeroConstructor, IsPlainOldData)

void UUAEUserWidget::Register(class ULogicManagerBase* LogicManager, bool bAddToViewport)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.Register");

	UUAEUserWidget_Register_Params params;
	params.LogicManager = LogicManager;
	params.bAddToViewport = bAddToViewport;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.ReceiveShow
// ()

void UUAEUserWidget::ReceiveShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.ReceiveShow");

	UUAEUserWidget_ReceiveShow_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.ReceiveHide
// ()

void UUAEUserWidget::ReceiveHide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.ReceiveHide");

	UUAEUserWidget_ReceiveHide_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.ReceivedMountWidget
// ()

void UUAEUserWidget::ReceivedMountWidget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.ReceivedMountWidget");

	UUAEUserWidget_ReceivedMountWidget_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.ReceivedInitWidget
// ()

void UUAEUserWidget::ReceivedInitWidget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.ReceivedInitWidget");

	UUAEUserWidget_ReceivedInitWidget_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.ReCachedUIMsgFunction
// ()

void UUAEUserWidget::ReCachedUIMsgFunction()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.ReCachedUIMsgFunction");

	UUAEUserWidget_ReCachedUIMsgFunction_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.PushOpenedUIStack
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)

void UUAEUserWidget::PushOpenedUIStack(const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.PushOpenedUIStack");

	UUAEUserWidget_PushOpenedUIStack_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.PopOpenedUIStack
// ()
// Parameters:
// struct FString                 curOpen                        (Parm, ZeroConstructor)

void UUAEUserWidget::PopOpenedUIStack(const struct FString& curOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.PopOpenedUIStack");

	UUAEUserWidget_PopOpenedUIStack_Params params;
	params.curOpen = curOpen;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction UnrealArchExt.UAEUserWidget.OnWidgetShow__DelegateSignature
// ()
// Parameters:
// struct FString                 ClassName                      (Parm, ZeroConstructor)

void UUAEUserWidget::OnWidgetShow__DelegateSignature(const struct FString& ClassName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction UnrealArchExt.UAEUserWidget.OnWidgetShow__DelegateSignature");

	UUAEUserWidget_OnWidgetShow__DelegateSignature_Params params;
	params.ClassName = ClassName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction UnrealArchExt.UAEUserWidget.OnWidgetHide__DelegateSignature
// ()
// Parameters:
// struct FString                 ClassName                      (Parm, ZeroConstructor)

void UUAEUserWidget::OnWidgetHide__DelegateSignature(const struct FString& ClassName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction UnrealArchExt.UAEUserWidget.OnWidgetHide__DelegateSignature");

	UUAEUserWidget_OnWidgetHide__DelegateSignature_Params params;
	params.ClassName = ClassName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.OnRightClicked
// ()
// Parameters:
// struct FVector2D               TempScreenPos                  (Parm, IsPlainOldData)

void UUAEUserWidget::OnRightClicked(const struct FVector2D& TempScreenPos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.OnRightClicked");

	UUAEUserWidget_OnRightClicked_Params params;
	params.TempScreenPos = TempScreenPos;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.OnFadeOutFinished
// ()

void UUAEUserWidget::OnFadeOutFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.OnFadeOutFinished");

	UUAEUserWidget_OnFadeOutFinished_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.OnFadeInFinished
// ()

void UUAEUserWidget::OnFadeInFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.OnFadeInFinished");

	UUAEUserWidget_OnFadeInFinished_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.OnDoubleClicked
// ()
// Parameters:
// struct FVector2D               TempScreenPos                  (Parm, IsPlainOldData)

void UUAEUserWidget::OnDoubleClicked(const struct FVector2D& TempScreenPos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.OnDoubleClicked");

	UUAEUserWidget_OnDoubleClicked_Params params;
	params.TempScreenPos = TempScreenPos;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.OnClicked
// ()
// Parameters:
// struct FVector2D               TempScreenPos                  (Parm, IsPlainOldData)

void UUAEUserWidget::OnClicked(const struct FVector2D& TempScreenPos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.OnClicked");

	UUAEUserWidget_OnClicked_Params params;
	params.TempScreenPos = TempScreenPos;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction UnrealArchExt.UAEUserWidget.OnClearUIStack__DelegateSignature
// ()

void UUAEUserWidget::OnClearUIStack__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction UnrealArchExt.UAEUserWidget.OnClearUIStack__DelegateSignature");

	UUAEUserWidget_OnClearUIStack__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.IntCompare
// ()
// Parameters:
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData)
// EWidgetCompareType             CompareType                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEUserWidget::IntCompare(int A, int B, EWidgetCompareType CompareType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.IntCompare");

	UUAEUserWidget_IntCompare_Params params;
	params.A = A;
	params.B = B;
	params.CompareType = CompareType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.InitWidget
// ()
// Parameters:
// bool                           Recursive                      (Parm, ZeroConstructor, IsPlainOldData)

void UUAEUserWidget::InitWidget(bool Recursive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.InitWidget");

	UUAEUserWidget_InitWidget_Params params;
	params.Recursive = Recursive;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.InitCustomWidget
// ()
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetComponent*        WidgetComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEUserWidget::InitCustomWidget(class AActor* OwnerActor, class UWidgetComponent* WidgetComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.InitCustomWidget");

	UUAEUserWidget_InitCustomWidget_Params params;
	params.OwnerActor = OwnerActor;
	params.WidgetComponent = WidgetComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.Hide
// ()

void UUAEUserWidget::Hide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.Hide");

	UUAEUserWidget_Hide_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.HandleUIMessageBattle
// ()
// Parameters:
// struct FString                 UIMessage                      (Parm, ZeroConstructor)

void UUAEUserWidget::HandleUIMessageBattle(const struct FString& UIMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.HandleUIMessageBattle");

	UUAEUserWidget_HandleUIMessageBattle_Params params;
	params.UIMessage = UIMessage;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.HandleUIMessage
// ()
// Parameters:
// struct FString                 UIMessage                      (Parm, ZeroConstructor)

void UUAEUserWidget::HandleUIMessage(const struct FString& UIMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.HandleUIMessage");

	UUAEUserWidget_HandleUIMessage_Params params;
	params.UIMessage = UIMessage;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.GetWidgetsByName
// ()
// Parameters:
// struct FString                 WidgetName                     (Parm, ZeroConstructor)
// struct FString                 OuterName                      (Parm, ZeroConstructor)
// bool                           bUseContains                   (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UUAEUserWidget::GetWidgetsByName(const struct FString& WidgetName, const struct FString& OuterName, bool bUseContains)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.GetWidgetsByName");

	UUAEUserWidget_GetWidgetsByName_Params params;
	params.WidgetName = WidgetName;
	params.OuterName = OuterName;
	params.bUseContains = bUseContains;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.GetWidgetContainsName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UUAEUserWidget::GetWidgetContainsName(const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.GetWidgetContainsName");

	UUAEUserWidget_GetWidgetContainsName_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.GetParentWidget
// ()
// Parameters:
// class UUAEUserWidget*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUAEUserWidget* UUAEUserWidget::GetParentWidget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.GetParentWidget");

	UUAEUserWidget_GetParentWidget_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.GetOwningPlayer
// ()
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UUAEUserWidget::GetOwningPlayer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.GetOwningPlayer");

	UUAEUserWidget_GetOwningPlayer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.GetOwningLogicManager
// ()
// Parameters:
// class ULogicManagerBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULogicManagerBase* UUAEUserWidget::GetOwningLogicManager()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.GetOwningLogicManager");

	UUAEUserWidget_GetOwningLogicManager_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.GetOwningFrontendHUD
// ()
// Parameters:
// class UFrontendHUD*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrontendHUD* UUAEUserWidget::GetOwningFrontendHUD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.GetOwningFrontendHUD");

	UUAEUserWidget_GetOwningFrontendHUD_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.GetImgDynamicMaterial
// ()
// Parameters:
// class UImage*                  ImageMat                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UUAEUserWidget::GetImgDynamicMaterial(class UImage* ImageMat)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.GetImgDynamicMaterial");

	UUAEUserWidget_GetImgDynamicMaterial_Params params;
	params.ImageMat = ImageMat;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.GetChildWidgetByEqualPolitics
// ()
// Parameters:
// struct FString                 ChildName                      (Parm, ZeroConstructor)
// EUserWidgetNameEqualPolitics   EqualPolitics                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            RecursiveDepth                 (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUserWidget* UUAEUserWidget::GetChildWidgetByEqualPolitics(const struct FString& ChildName, EUserWidgetNameEqualPolitics EqualPolitics, int RecursiveDepth)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.GetChildWidgetByEqualPolitics");

	UUAEUserWidget_GetChildWidgetByEqualPolitics_Params params;
	params.ChildName = ChildName;
	params.EqualPolitics = EqualPolitics;
	params.RecursiveDepth = RecursiveDepth;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.GetChildWidget
// ()
// Parameters:
// struct FString                 WName                          (Parm, ZeroConstructor)
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUserWidget* UUAEUserWidget::GetChildWidget(const struct FString& WName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.GetChildWidget");

	UUAEUserWidget_GetChildWidget_Params params;
	params.WName = WName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.GetAdapation
// ()
// Parameters:
// struct FMargin                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FMargin UUAEUserWidget::GetAdapation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.GetAdapation");

	UUAEUserWidget_GetAdapation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.FloatCompare
// ()
// Parameters:
// float                          A                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          B                              (Parm, ZeroConstructor, IsPlainOldData)
// EWidgetCompareType             CompareType                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEUserWidget::FloatCompare(float A, float B, EWidgetCompareType CompareType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.FloatCompare");

	UUAEUserWidget_FloatCompare_Params params;
	params.A = A;
	params.B = B;
	params.CompareType = CompareType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.DynamicRegistUIMsgToCache
// ()
// Parameters:
// class UUAEUserWidget*          Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEUserWidget::DynamicRegistUIMsgToCache(class UUAEUserWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.DynamicRegistUIMsgToCache");

	UUAEUserWidget_DynamicRegistUIMsgToCache_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.DestroyWidget
// ()

void UUAEUserWidget::DestroyWidget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.DestroyWidget");

	UUAEUserWidget_DestroyWidget_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.ClearOpenedUIStack
// ()

void UUAEUserWidget::ClearOpenedUIStack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.ClearOpenedUIStack");

	UUAEUserWidget_ClearOpenedUIStack_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.ClearFunctionCacheByMsgName
// ()
// Parameters:
// struct FString                 InUIMsg                        (Parm, ZeroConstructor)

void UUAEUserWidget::ClearFunctionCacheByMsgName(const struct FString& InUIMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.ClearFunctionCacheByMsgName");

	UUAEUserWidget_ClearFunctionCacheByMsgName_Params params;
	params.InUIMsg = InUIMsg;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.ClearFunctionCache
// ()

void UUAEUserWidget::ClearFunctionCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.ClearFunctionCache");

	UUAEUserWidget_ClearFunctionCache_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.ClearClassWidgetTree
// ()

void UUAEUserWidget::ClearClassWidgetTree()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.ClearClassWidgetTree");

	UUAEUserWidget_ClearClassWidgetTree_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.BindCustomUserEvent
// ()
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetComponent*        WidgetComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEUserWidget::BindCustomUserEvent(class AActor* OwnerActor, class UWidgetComponent* WidgetComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.BindCustomUserEvent");

	UUAEUserWidget_BindCustomUserEvent_Params params;
	params.OwnerActor = OwnerActor;
	params.WidgetComponent = WidgetComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAECanvasPanel.ReceiveInitCanvasPanel
// ()

void UUAECanvasPanel::ReceiveInitCanvasPanel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAECanvasPanel.ReceiveInitCanvasPanel");

	UUAECanvasPanel_ReceiveInitCanvasPanel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.BackendHUD.GetFrontendHUDByGameInstance
// ()
// Parameters:
// class UGameInstance*           GameInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// class UFrontendHUD*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrontendHUD* UBackendHUD::GetFrontendHUDByGameInstance(class UGameInstance* GameInstance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.BackendHUD.GetFrontendHUDByGameInstance");

	UBackendHUD_GetFrontendHUDByGameInstance_Params params;
	params.GameInstance = GameInstance;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.BackendHUD.GetFrontendHUD
// ()
// Parameters:
// int                            FrontendHUDIndex               (Parm, ZeroConstructor, IsPlainOldData)
// class UFrontendHUD*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrontendHUD* UBackendHUD::GetFrontendHUD(int FrontendHUDIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.BackendHUD.GetFrontendHUD");

	UBackendHUD_GetFrontendHUD_Params params;
	params.FrontendHUDIndex = FrontendHUDIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.LogicManagerBase.SetEnableRemoveDynamicWidgets
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void ULogicManagerBase::SetEnableRemoveDynamicWidgets(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.LogicManagerBase.SetEnableRemoveDynamicWidgets");

	ULogicManagerBase_SetEnableRemoveDynamicWidgets_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.LogicManagerBase.IsEnableRemoveDynamicWidgets
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULogicManagerBase::IsEnableRemoveDynamicWidgets()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.LogicManagerBase.IsEnableRemoveDynamicWidgets");

	ULogicManagerBase_IsEnableRemoveDynamicWidgets_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.LogicManagerBase.GetWidgetList
// ()
// Parameters:
// TArray<class UUAEUserWidget*>  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UUAEUserWidget*> ULogicManagerBase::GetWidgetList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.LogicManagerBase.GetWidgetList");

	ULogicManagerBase_GetWidgetList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.LogicManagerBase.GetWidgetByName
// ()
// Parameters:
// struct FString                 InName                         (Parm, ZeroConstructor)
// class UUAEUserWidget*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUAEUserWidget* ULogicManagerBase::GetWidgetByName(const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.LogicManagerBase.GetWidgetByName");

	ULogicManagerBase_GetWidgetByName_Params params;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.LogicManagerBase.GetWidgetByClass
// ()
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUAEUserWidget* ULogicManagerBase::GetWidgetByClass(class UClass* InClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.LogicManagerBase.GetWidgetByClass");

	ULogicManagerBase_GetWidgetByClass_Params params;
	params.InClass = InClass;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.LogicManagerBase.GetOwningFrontendHUD
// ()
// Parameters:
// class UFrontendHUD*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrontendHUD* ULogicManagerBase::GetOwningFrontendHUD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.LogicManagerBase.GetOwningFrontendHUD");

	ULogicManagerBase_GetOwningFrontendHUD_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.LogicManagerBase.GetDefaultSceneCamera
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULogicManagerBase::GetDefaultSceneCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.LogicManagerBase.GetDefaultSceneCamera");

	ULogicManagerBase_GetDefaultSceneCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.LogicManagerBase.DispatchUIMessage
// ()
// Parameters:
// struct FString                 UIMessage                      (Parm, ZeroConstructor)
// class UObject*                 Source                         (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULogicManagerBase::DispatchUIMessage(const struct FString& UIMessage, class UObject* Source, class UUAEUserWidget* Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.LogicManagerBase.DispatchUIMessage");

	ULogicManagerBase_DispatchUIMessage_Params params;
	params.UIMessage = UIMessage;
	params.Source = Source;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendHUD.SwitchGameStatus
// ()
// Parameters:
// struct FName                   GameStatus                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Options                        (Parm, ZeroConstructor)

void UFrontendHUD::SwitchGameStatus(const struct FName& GameStatus, const struct FString& Options)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.SwitchGameStatus");

	UFrontendHUD_SwitchGameStatus_Params params;
	params.GameStatus = GameStatus;
	params.Options = Options;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendHUD.StandAloneSwitchGameStatus
// ()
// Parameters:
// struct FName                   InGameStatus                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Options                        (Parm, ZeroConstructor)

void UFrontendHUD::StandAloneSwitchGameStatus(const struct FName& InGameStatus, const struct FString& Options)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.StandAloneSwitchGameStatus");

	UFrontendHUD_StandAloneSwitchGameStatus_Params params;
	params.InGameStatus = InGameStatus;
	params.Options = Options;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendHUD.OnPreLoadMap
// ()
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor)

void UFrontendHUD::OnPreLoadMap(const struct FString& MapName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.OnPreLoadMap");

	UFrontendHUD_OnPreLoadMap_Params params;
	params.MapName = MapName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendHUD.OnPostLoadMapWithWorld
// ()
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendHUD::OnPostLoadMapWithWorld(class UWorld* World)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.OnPostLoadMapWithWorld");

	UFrontendHUD_OnPostLoadMapWithWorld_Params params;
	params.World = World;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendHUD.OnGameViewportClientCreated
// ()

void UFrontendHUD::OnGameViewportClientCreated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.OnGameViewportClientCreated");

	UFrontendHUD_OnGameViewportClientCreated_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendHUD.GetWorld
// ()
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UFrontendHUD::GetWorld()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetWorld");

	UFrontendHUD_GetWorld_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.GetUtils
// ()
// Parameters:
// class UFrontendUtils*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrontendUtils* UFrontendHUD::GetUtils()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetUtils");

	UFrontendHUD_GetUtils_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.GetPlayerController
// ()
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UFrontendHUD::GetPlayerController()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetPlayerController");

	UFrontendHUD_GetPlayerController_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.GetLogicManagerByName
// ()
// Parameters:
// struct FString                 LogicManagerTagName            (Parm, ZeroConstructor)
// class ULogicManagerBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULogicManagerBase* UFrontendHUD::GetLogicManagerByName(const struct FString& LogicManagerTagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetLogicManagerByName");

	UFrontendHUD_GetLogicManagerByName_Params params;
	params.LogicManagerTagName = LogicManagerTagName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.GetLogicManager
// ()
// Parameters:
// int                            LogicManagerIndex              (Parm, ZeroConstructor, IsPlainOldData)
// class ULogicManagerBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULogicManagerBase* UFrontendHUD::GetLogicManager(int LogicManagerIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetLogicManager");

	UFrontendHUD_GetLogicManager_Params params;
	params.LogicManagerIndex = LogicManagerIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.GetGameViewportClient
// ()
// Parameters:
// class UGameViewportClient*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameViewportClient* UFrontendHUD::GetGameViewportClient()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetGameViewportClient");

	UFrontendHUD_GetGameViewportClient_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.GetGameMode
// ()
// Parameters:
// class AGameMode*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGameMode* UFrontendHUD::GetGameMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetGameMode");

	UFrontendHUD_GetGameMode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.GetGameInstance
// ()
// Parameters:
// class UGameInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameInstance* UFrontendHUD::GetGameInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetGameInstance");

	UFrontendHUD_GetGameInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.FindRegistedUIFunctionList
// ()
// Parameters:
// struct FString                 strMsg                         (Parm, ZeroConstructor)
// struct FString                 moduleMsg                      (Parm, ZeroConstructor)
// TArray<TWeakObjectPtr<class UObject>> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<TWeakObjectPtr<class UObject>> UFrontendHUD::FindRegistedUIFunctionList(const struct FString& strMsg, const struct FString& moduleMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.FindRegistedUIFunctionList");

	UFrontendHUD_FindRegistedUIFunctionList_Params params;
	params.strMsg = strMsg;
	params.moduleMsg = moduleMsg;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.EnableGuiTest
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendHUD::EnableGuiTest(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.EnableGuiTest");

	UFrontendHUD_EnableGuiTest_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendHUD.DynamicRegistUIMsgToCache
// ()
// Parameters:
// class UUAEUserWidget*          Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 module                         (Parm, ZeroConstructor)

void UFrontendHUD::DynamicRegistUIMsgToCache(class UUAEUserWidget* Widget, const struct FString& module)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.DynamicRegistUIMsgToCache");

	UFrontendHUD_DynamicRegistUIMsgToCache_Params params;
	params.Widget = Widget;
	params.module = module;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendHUD.ClearLogicManagerListByStatus
// ()
// Parameters:
// struct FName                   PendingStatus                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsForceDelete                 (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendHUD::ClearLogicManagerListByStatus(const struct FName& PendingStatus, bool bIsForceDelete)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.ClearLogicManagerListByStatus");

	UFrontendHUD_ClearLogicManagerListByStatus_Params params;
	params.PendingStatus = PendingStatus;
	params.bIsForceDelete = bIsForceDelete;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendHUD.ClearLogicManagerByName
// ()
// Parameters:
// struct FString                 managerName                    (Parm, ZeroConstructor)

void UFrontendHUD::ClearLogicManagerByName(const struct FString& managerName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.ClearLogicManagerByName");

	UFrontendHUD_ClearLogicManagerByName_Params params;
	params.managerName = managerName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.SwitchSceneCameraToTransform
// ()
// Parameters:
// struct FTransform              targetTrans                    (Parm, IsPlainOldData)
// TEnumAsByte<ECameraProjectionMode> ProjectionMode                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          FOV                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          blendTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoFixAspect                 (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::SwitchSceneCameraToTransform(const struct FTransform& targetTrans, TEnumAsByte<ECameraProjectionMode> ProjectionMode, float FOV, float blendTime, bool bForce, bool bAutoFixAspect)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.SwitchSceneCameraToTransform");

	UFrontendUtils_SwitchSceneCameraToTransform_Params params;
	params.targetTrans = targetTrans;
	params.ProjectionMode = ProjectionMode;
	params.FOV = FOV;
	params.blendTime = blendTime;
	params.bForce = bForce;
	params.bAutoFixAspect = bAutoFixAspect;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.SwitchSceneCamera
// ()
// Parameters:
// struct FName                   SceneCameraName                (Parm, ZeroConstructor, IsPlainOldData)
// float                          blendTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::SwitchSceneCamera(const struct FName& SceneCameraName, float blendTime, bool bForce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.SwitchSceneCamera");

	UFrontendUtils_SwitchSceneCamera_Params params;
	params.SceneCameraName = SceneCameraName;
	params.blendTime = blendTime;
	params.bForce = bForce;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.SetSceneSkyLightProperty
// ()
// Parameters:
// struct FName                   sceneLightName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              targetTrans                    (Parm, IsPlainOldData)
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, IsPlainOldData)

void UFrontendUtils::SetSceneSkyLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.SetSceneSkyLightProperty");

	UFrontendUtils_SetSceneSkyLightProperty_Params params;
	params.sceneLightName = sceneLightName;
	params.targetTrans = targetTrans;
	params.Intensity = Intensity;
	params.Color = Color;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.SetScenePointLightProperty
// ()
// Parameters:
// struct FName                   sceneLightName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              targetTrans                    (Parm, IsPlainOldData)
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, IsPlainOldData)
// int                            inverseSquareFalloff           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::SetScenePointLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, int inverseSquareFalloff, float Radius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.SetScenePointLightProperty");

	UFrontendUtils_SetScenePointLightProperty_Params params;
	params.sceneLightName = sceneLightName;
	params.targetTrans = targetTrans;
	params.Intensity = Intensity;
	params.Color = Color;
	params.inverseSquareFalloff = inverseSquareFalloff;
	params.Radius = Radius;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.SetSceneDirectionalLightProperty
// ()
// Parameters:
// struct FName                   sceneLightName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              targetTrans                    (Parm, IsPlainOldData)
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, IsPlainOldData)
// struct FLightingChannels       Channel                        (Parm)

void UFrontendUtils::SetSceneDirectionalLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, const struct FLightingChannels& Channel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.SetSceneDirectionalLightProperty");

	UFrontendUtils_SetSceneDirectionalLightProperty_Params params;
	params.sceneLightName = sceneLightName;
	params.targetTrans = targetTrans;
	params.Intensity = Intensity;
	params.Color = Color;
	params.Channel = Channel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.SetAutoFixFovByAspectRatio
// ()
// Parameters:
// class ACameraActor*            CameraActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInAutoFixFov                  (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::SetAutoFixFovByAspectRatio(class ACameraActor* CameraActor, bool bInAutoFixFov)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.SetAutoFixFovByAspectRatio");

	UFrontendUtils_SetAutoFixFovByAspectRatio_Params params;
	params.CameraActor = CameraActor;
	params.bInAutoFixFov = bInAutoFixFov;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.RegisterSceneSkyLight
// ()
// Parameters:
// struct FName                   sceneLightName                 (Parm, ZeroConstructor, IsPlainOldData)
// class ASkyLight*               Light                          (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::RegisterSceneSkyLight(const struct FName& sceneLightName, class ASkyLight* Light)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.RegisterSceneSkyLight");

	UFrontendUtils_RegisterSceneSkyLight_Params params;
	params.sceneLightName = sceneLightName;
	params.Light = Light;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.RegisterScenePointLight
// ()
// Parameters:
// struct FName                   sceneLightName                 (Parm, ZeroConstructor, IsPlainOldData)
// class APointLight*             Light                          (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::RegisterScenePointLight(const struct FName& sceneLightName, class APointLight* Light)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.RegisterScenePointLight");

	UFrontendUtils_RegisterScenePointLight_Params params;
	params.sceneLightName = sceneLightName;
	params.Light = Light;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.RegisterSceneDirectionalLight
// ()
// Parameters:
// struct FName                   sceneLightName                 (Parm, ZeroConstructor, IsPlainOldData)
// class ADirectionalLight*       Light                          (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::RegisterSceneDirectionalLight(const struct FName& sceneLightName, class ADirectionalLight* Light)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.RegisterSceneDirectionalLight");

	UFrontendUtils_RegisterSceneDirectionalLight_Params params;
	params.sceneLightName = sceneLightName;
	params.Light = Light;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.RegisterSceneCamera
// ()
// Parameters:
// struct FName                   SceneCameraName                (Parm, ZeroConstructor, IsPlainOldData)
// class ACameraActor*            SceneCamera                    (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::RegisterSceneCamera(const struct FName& SceneCameraName, class ACameraActor* SceneCamera)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.RegisterSceneCamera");

	UFrontendUtils_RegisterSceneCamera_Params params;
	params.SceneCameraName = SceneCameraName;
	params.SceneCamera = SceneCamera;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.PopAllPushedUI
// ()

void UFrontendUtils::PopAllPushedUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.PopAllPushedUI");

	UFrontendUtils_PopAllPushedUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.OnAllSceneCamerasRegistered
// ()

void UFrontendUtils::OnAllSceneCamerasRegistered()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.OnAllSceneCamerasRegistered");

	UFrontendUtils_OnAllSceneCamerasRegistered_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.IsPushedPanel
// ()
// Parameters:
// struct FName                   managerName                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFrontendUtils::IsPushedPanel(const struct FName& managerName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.IsPushedPanel");

	UFrontendUtils_IsPushedPanel_Params params;
	params.managerName = managerName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.IsNoRenderClient
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFrontendUtils::IsNoRenderClient()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.IsNoRenderClient");

	UFrontendUtils_IsNoRenderClient_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.GlobalUIEventDispatcher_GetDelegateIsBound
// ()
// Parameters:
// struct FString                 DelegateNum                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFrontendUtils::GlobalUIEventDispatcher_GetDelegateIsBound(const struct FString& DelegateNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GlobalUIEventDispatcher_GetDelegateIsBound");

	UFrontendUtils_GlobalUIEventDispatcher_GetDelegateIsBound_Params params;
	params.DelegateNum = DelegateNum;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.GetUIStackTopSrcTag
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UFrontendUtils::GetUIStackTopSrcTag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GetUIStackTopSrcTag");

	UFrontendUtils_GetUIStackTopSrcTag_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.GetUIStackTopDstTag
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UFrontendUtils::GetUIStackTopDstTag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GetUIStackTopDstTag");

	UFrontendUtils_GetUIStackTopDstTag_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.GetUIStackTop
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UFrontendUtils::GetUIStackTop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GetUIStackTop");

	UFrontendUtils_GetUIStackTop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.GetSceneCamera
// ()
// Parameters:
// class ACameraActor*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACameraActor* UFrontendUtils::GetSceneCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GetSceneCamera");

	UFrontendUtils_GetSceneCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.GetOwningFrontendHUD
// ()
// Parameters:
// class UFrontendHUD*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrontendHUD* UFrontendUtils::GetOwningFrontendHUD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GetOwningFrontendHUD");

	UFrontendUtils_GetOwningFrontendHUD_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.GetGlobalUIEventDispatcher
// ()
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UFrontendUtils::GetGlobalUIEventDispatcher()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GetGlobalUIEventDispatcher");

	UFrontendUtils_GetGlobalUIEventDispatcher_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.GetGlobalUIContainer
// ()
// Parameters:
// struct FName                   ContainerName                  (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEWidgetContainer*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUAEWidgetContainer* UFrontendUtils::GetGlobalUIContainer(const struct FName& ContainerName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GetGlobalUIContainer");

	UFrontendUtils_GetGlobalUIContainer_Params params;
	params.ContainerName = ContainerName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.EnableLobbyMainLight
// ()
// Parameters:
// bool                           NewEnable                      (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::EnableLobbyMainLight(bool NewEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.EnableLobbyMainLight");

	UFrontendUtils_EnableLobbyMainLight_Params params;
	params.NewEnable = NewEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.ClearAllSceneCameras
// ()

void UFrontendUtils::ClearAllSceneCameras()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.ClearAllSceneCameras");

	UFrontendUtils_ClearAllSceneCameras_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEDataTable.SetTableData_String
// ()
// Parameters:
// struct FString                 KeyValue                       (Parm, ZeroConstructor)
// struct FString                 TagName                        (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEDataTable::SetTableData_String(const struct FString& KeyValue, const struct FString& TagName, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEDataTable.SetTableData_String");

	UUAEDataTable_SetTableData_String_Params params;
	params.KeyValue = KeyValue;
	params.TagName = TagName;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEDataTable.SetTableData_Int32
// ()
// Parameters:
// struct FString                 KeyValue                       (Parm, ZeroConstructor)
// struct FString                 TagName                        (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEDataTable::SetTableData_Int32(const struct FString& KeyValue, const struct FString& TagName, int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEDataTable.SetTableData_Int32");

	UUAEDataTable_SetTableData_Int32_Params params;
	params.KeyValue = KeyValue;
	params.TagName = TagName;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEDataTable.SetTableData_Float
// ()
// Parameters:
// struct FString                 KeyValue                       (Parm, ZeroConstructor)
// struct FString                 TagName                        (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEDataTable::SetTableData_Float(const struct FString& KeyValue, const struct FString& TagName, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEDataTable.SetTableData_Float");

	UUAEDataTable_SetTableData_Float_Params params;
	params.KeyValue = KeyValue;
	params.TagName = TagName;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEDataTable.GetTableName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAEDataTable::GetTableName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEDataTable.GetTableName");

	UUAEDataTable_GetTableName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEDataTable.GetRealTableName
// ()
// Parameters:
// struct FString                 tableName                      (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAEDataTable::GetRealTableName(const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEDataTable.GetRealTableName");

	UUAEDataTable_GetRealTableName_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEDataTable.ConditionAddEmptyRow
// ()
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEDataTable::ConditionAddEmptyRow(const struct FName& RowName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEDataTable.ConditionAddEmptyRow");

	UUAEDataTable_ConditionAddEmptyRow_Params params;
	params.RowName = RowName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEWidgetContainer.RemoveWidgetInternal
// ()
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEWidgetContainer::RemoveWidgetInternal(class UUserWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEWidgetContainer.RemoveWidgetInternal");

	UUAEWidgetContainer_RemoveWidgetInternal_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEWidgetContainer.RemoveWidget
// ()
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEWidgetContainer::RemoveWidget(class UUserWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEWidgetContainer.RemoveWidget");

	UUAEWidgetContainer_RemoveWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEWidgetContainer.AddWidgetWithZOrderInternal
// ()
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ZOrder                         (Parm, ZeroConstructor, IsPlainOldData)

void UUAEWidgetContainer::AddWidgetWithZOrderInternal(class UUserWidget* Widget, int ZOrder)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEWidgetContainer.AddWidgetWithZOrderInternal");

	UUAEWidgetContainer_AddWidgetWithZOrderInternal_Params params;
	params.Widget = Widget;
	params.ZOrder = ZOrder;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEWidgetContainer.AddWidgetWithZOrder
// ()
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ZOrder                         (Parm, ZeroConstructor, IsPlainOldData)

void UUAEWidgetContainer::AddWidgetWithZOrder(class UUserWidget* Widget, int ZOrder)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEWidgetContainer.AddWidgetWithZOrder");

	UUAEWidgetContainer_AddWidgetWithZOrder_Params params;
	params.Widget = Widget;
	params.ZOrder = ZOrder;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEWidgetContainer.AddWidgetInternal
// ()
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEWidgetContainer::AddWidgetInternal(class UUserWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEWidgetContainer.AddWidgetInternal");

	UUAEWidgetContainer_AddWidgetInternal_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEWidgetContainer.AddWidget
// ()
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEWidgetContainer::AddWidget(class UUserWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEWidgetContainer.AddWidget");

	UUAEWidgetContainer_AddWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

