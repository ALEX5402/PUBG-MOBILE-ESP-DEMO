// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReAutomatic.AutomaticCommonHelper.IsClassOf
// ()
// Parameters:
// class UObject*                 Object                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutomaticCommonHelper::IsClassOf(class UObject* Object, class UClass* Class)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ReAutomatic.AutomaticCommonHelper.IsClassOf");

	UAutomaticCommonHelper_IsClassOf_Params params;
	params.Object = Object;
	params.Class = Class;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReAutomatic.AutomaticPlatformHelper.GetDeviceName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAutomaticPlatformHelper::GetDeviceName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ReAutomatic.AutomaticPlatformHelper.GetDeviceName");

	UAutomaticPlatformHelper_GetDeviceName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReAutomatic.AutomaticUIHelper.IsWidgetVisibleWithUICondition
// ()
// Parameters:
// struct FFindUICondition        Condition                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutomaticUIHelper::IsWidgetVisibleWithUICondition(const struct FFindUICondition& Condition, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ReAutomatic.AutomaticUIHelper.IsWidgetVisibleWithUICondition");

	UAutomaticUIHelper_IsWidgetVisibleWithUICondition_Params params;
	params.Condition = Condition;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReAutomatic.AutomaticUIHelper.IsWidgetVisible
// ()
// Parameters:
// class UWidget*                 Widget                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutomaticUIHelper::IsWidgetVisible(class UWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ReAutomatic.AutomaticUIHelper.IsWidgetVisible");

	UAutomaticUIHelper_IsWidgetVisible_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReAutomatic.AutomaticUIHelper.IsWidgetTextMatchRegex
// ()
// Parameters:
// class UWidget*                 Widget                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 Text                           (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutomaticUIHelper::IsWidgetTextMatchRegex(class UWidget* Widget, const struct FString& Text)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ReAutomatic.AutomaticUIHelper.IsWidgetTextMatchRegex");

	UAutomaticUIHelper_IsWidgetTextMatchRegex_Params params;
	params.Widget = Widget;
	params.Text = Text;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReAutomatic.AutomaticUIHelper.IsWidgetMatchType
// ()
// Parameters:
// class UWidget*                 Widget                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EUIType                        Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutomaticUIHelper::IsWidgetMatchType(class UWidget* Widget, EUIType Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ReAutomatic.AutomaticUIHelper.IsWidgetMatchType");

	UAutomaticUIHelper_IsWidgetMatchType_Params params;
	params.Widget = Widget;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReAutomatic.AutomaticUIHelper.FindWidgetObjectWithUICondition
// ()
// Parameters:
// struct FFindUICondition        Condition                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UAutomaticUIHelper::FindWidgetObjectWithUICondition(const struct FFindUICondition& Condition, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ReAutomatic.AutomaticUIHelper.FindWidgetObjectWithUICondition");

	UAutomaticUIHelper_FindWidgetObjectWithUICondition_Params params;
	params.Condition = Condition;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReAutomatic.AutomaticUIHelper.FindUWidgetObject
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UAutomaticUIHelper::FindUWidgetObject(const struct FString& Name, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ReAutomatic.AutomaticUIHelper.FindUWidgetObject");

	UAutomaticUIHelper_FindUWidgetObject_Params params;
	params.Name = Name;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

