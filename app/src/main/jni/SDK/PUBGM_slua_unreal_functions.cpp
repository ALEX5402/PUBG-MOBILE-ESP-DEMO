// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function slua_unreal.LuaInstancedActorComponent.UnRegistLuaTick
// ()

void ULuaInstancedActorComponent::UnRegistLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaInstancedActorComponent.UnRegistLuaTick");

	ULuaInstancedActorComponent_UnRegistLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function slua_unreal.LuaInstancedActorComponent.RegistLuaTick
// ()
// Parameters:
// float                          TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)

void ULuaInstancedActorComponent::RegistLuaTick(float TickInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaInstancedActorComponent.RegistLuaTick");

	ULuaInstancedActorComponent_RegistLuaTick_Params params;
	params.TickInterval = TickInterval;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function slua_unreal.LuaActor.UnRegistLuaTick
// ()

void ALuaActor::UnRegistLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaActor.UnRegistLuaTick");

	ALuaActor_UnRegistLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function slua_unreal.LuaActor.RegistLuaTick
// ()
// Parameters:
// float                          TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)

void ALuaActor::RegistLuaTick(float TickInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaActor.RegistLuaTick");

	ALuaActor_RegistLuaTick_Params params;
	params.TickInterval = TickInterval;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function slua_unreal.LuaActorComponent.UnRegistLuaTick
// ()

void ULuaActorComponent::UnRegistLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaActorComponent.UnRegistLuaTick");

	ULuaActorComponent_UnRegistLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function slua_unreal.LuaActorComponent.RegistLuaTick
// ()
// Parameters:
// float                          TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)

void ULuaActorComponent::RegistLuaTick(float TickInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaActorComponent.RegistLuaTick");

	ULuaActorComponent_RegistLuaTick_Params params;
	params.TickInterval = TickInterval;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function slua_unreal.LatentDelegate.OnLatentCallback
// ()
// Parameters:
// int                            threadRef                      (Parm, ZeroConstructor, IsPlainOldData)

void ULatentDelegate::OnLatentCallback(int threadRef)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LatentDelegate.OnLatentCallback");

	ULatentDelegate_OnLatentCallback_Params params;
	params.threadRef = threadRef;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function slua_unreal.LuaDelegate.EventTrigger
// ()

void ULuaDelegate::EventTrigger()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaDelegate.EventTrigger");

	ULuaDelegate_EventTrigger_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function slua_unreal.LuaLevelScriptActor.UnRegistLuaTick
// ()

void ALuaLevelScriptActor::UnRegistLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaLevelScriptActor.UnRegistLuaTick");

	ALuaLevelScriptActor_UnRegistLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function slua_unreal.LuaLevelScriptActor.RegistLuaTick
// ()
// Parameters:
// float                          TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)

void ALuaLevelScriptActor::RegistLuaTick(float TickInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaLevelScriptActor.RegistLuaTick");

	ALuaLevelScriptActor_RegistLuaTick_Params params;
	params.TickInterval = TickInterval;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function slua_unreal.LuaOverrider.TriggerAnimNotify
// ()

void ULuaOverrider::TriggerAnimNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaOverrider.TriggerAnimNotify");

	ULuaOverrider_TriggerAnimNotify_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function slua_unreal.LuaOverrider.InputVectorAxis
// ()
// Parameters:
// struct FVector                 AxisValue                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ULuaOverrider::InputVectorAxis(const struct FVector& AxisValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaOverrider.InputVectorAxis");

	ULuaOverrider_InputVectorAxis_Params params;
	params.AxisValue = AxisValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function slua_unreal.LuaOverrider.InputTouch
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ULuaOverrider::InputTouch(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaOverrider.InputTouch");

	ULuaOverrider_InputTouch_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function slua_unreal.LuaOverrider.InputGesture
// ()
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ULuaOverrider::InputGesture(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaOverrider.InputGesture");

	ULuaOverrider_InputGesture_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function slua_unreal.LuaOverrider.InputAxis
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ULuaOverrider::InputAxis(float AxisValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaOverrider.InputAxis");

	ULuaOverrider_InputAxis_Params params;
	params.AxisValue = AxisValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function slua_unreal.LuaOverrider.InputAction
// ()
// Parameters:
// struct FKey                    Key                            (Parm)

void ULuaOverrider::InputAction(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaOverrider.InputAction");

	ULuaOverrider_InputAction_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function slua_unreal.LuaOverriderInterface.GetLuaFilePath
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ULuaOverriderInterface::GetLuaFilePath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaOverriderInterface.GetLuaFilePath");

	ULuaOverriderInterface_GetLuaFilePath_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function slua_unreal.SluaBlueprintLibrary.GetStringFromVar
// ()
// Parameters:
// struct FSluaBPVar              Value                          (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USluaBlueprintLibrary::GetStringFromVar(const struct FSluaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.GetStringFromVar");

	USluaBlueprintLibrary_GetStringFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function slua_unreal.SluaBlueprintLibrary.GetObjectFromVar
// ()
// Parameters:
// struct FSluaBPVar              Value                          (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* USluaBlueprintLibrary::GetObjectFromVar(const struct FSluaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.GetObjectFromVar");

	USluaBlueprintLibrary_GetObjectFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function slua_unreal.SluaBlueprintLibrary.GetNumberFromVar
// ()
// Parameters:
// struct FSluaBPVar              Value                          (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USluaBlueprintLibrary::GetNumberFromVar(const struct FSluaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.GetNumberFromVar");

	USluaBlueprintLibrary_GetNumberFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function slua_unreal.SluaBlueprintLibrary.GetIntFromVar
// ()
// Parameters:
// struct FSluaBPVar              Value                          (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USluaBlueprintLibrary::GetIntFromVar(const struct FSluaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.GetIntFromVar");

	USluaBlueprintLibrary_GetIntFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function slua_unreal.SluaBlueprintLibrary.GetBoolFromVar
// ()
// Parameters:
// struct FSluaBPVar              Value                          (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USluaBlueprintLibrary::GetBoolFromVar(const struct FSluaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.GetBoolFromVar");

	USluaBlueprintLibrary_GetBoolFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function slua_unreal.SluaBlueprintLibrary.CreateVarFromString
// ()
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)
// struct FSluaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSluaBPVar USluaBlueprintLibrary::CreateVarFromString(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.CreateVarFromString");

	USluaBlueprintLibrary_CreateVarFromString_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function slua_unreal.SluaBlueprintLibrary.CreateVarFromObject
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSluaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSluaBPVar USluaBlueprintLibrary::CreateVarFromObject(class UObject* WorldContextObject, class UObject* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.CreateVarFromObject");

	USluaBlueprintLibrary_CreateVarFromObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function slua_unreal.SluaBlueprintLibrary.CreateVarFromNumber
// ()
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSluaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSluaBPVar USluaBlueprintLibrary::CreateVarFromNumber(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.CreateVarFromNumber");

	USluaBlueprintLibrary_CreateVarFromNumber_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function slua_unreal.SluaBlueprintLibrary.CreateVarFromInt
// ()
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSluaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSluaBPVar USluaBlueprintLibrary::CreateVarFromInt(int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.CreateVarFromInt");

	USluaBlueprintLibrary_CreateVarFromInt_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function slua_unreal.SluaBlueprintLibrary.CreateVarFromBool
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSluaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSluaBPVar USluaBlueprintLibrary::CreateVarFromBool(bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.CreateVarFromBool");

	USluaBlueprintLibrary_CreateVarFromBool_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function slua_unreal.SluaBlueprintLibrary.CallToLuaWithArgs
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FSluaBPVar>      Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 StateName                      (Parm, ZeroConstructor)
// struct FSluaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSluaBPVar USluaBlueprintLibrary::CallToLuaWithArgs(class UObject* WorldContextObject, const struct FString& FunctionName, TArray<struct FSluaBPVar> Args, const struct FString& StateName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.CallToLuaWithArgs");

	USluaBlueprintLibrary_CallToLuaWithArgs_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FunctionName = FunctionName;
	params.Args = Args;
	params.StateName = StateName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function slua_unreal.SluaBlueprintLibrary.CallToLua
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// struct FString                 StateName                      (Parm, ZeroConstructor)
// struct FSluaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSluaBPVar USluaBlueprintLibrary::CallToLua(class UObject* WorldContextObject, const struct FString& FunctionName, const struct FString& StateName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.CallToLua");

	USluaBlueprintLibrary_CallToLua_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FunctionName = FunctionName;
	params.StateName = StateName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

