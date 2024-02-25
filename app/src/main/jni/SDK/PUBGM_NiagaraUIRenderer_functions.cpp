// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NiagaraUIRenderer.NiagaraSystemWidget.SetIsActivated
// ()
// Parameters:
// bool                           bInIsActive                    (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraSystemWidget::SetIsActivated(bool bInIsActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function NiagaraUIRenderer.NiagaraSystemWidget.SetIsActivated");

	UNiagaraSystemWidget_SetIsActivated_Params params;
	params.bInIsActive = bInIsActive;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
// ()
// Parameters:
// class UNiagaraUIComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UNiagaraUIComponent* UNiagaraSystemWidget::GetNiagaraComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent");

	UNiagaraSystemWidget_GetNiagaraComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NiagaraUIRenderer.NiagaraSystemWidget.GetIsActivated
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNiagaraSystemWidget::GetIsActivated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function NiagaraUIRenderer.NiagaraSystemWidget.GetIsActivated");

	UNiagaraSystemWidget_GetIsActivated_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem
// ()

void UNiagaraSystemWidget::DeactivateSystem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem");

	UNiagaraSystemWidget_DeactivateSystem_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
// ()
// Parameters:
// bool                           Reset                          (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraSystemWidget::ActivateSystem(bool Reset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem");

	UNiagaraSystemWidget_ActivateSystem_Params params;
	params.Reset = Reset;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

