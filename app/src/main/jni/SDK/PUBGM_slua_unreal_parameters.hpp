#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function slua_unreal.LuaInstancedActorComponent.UnRegistLuaTick
struct ULuaInstancedActorComponent_UnRegistLuaTick_Params
{
};

// Function slua_unreal.LuaInstancedActorComponent.RegistLuaTick
struct ULuaInstancedActorComponent_RegistLuaTick_Params
{
	float                                              TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function slua_unreal.LuaActor.UnRegistLuaTick
struct ALuaActor_UnRegistLuaTick_Params
{
};

// Function slua_unreal.LuaActor.RegistLuaTick
struct ALuaActor_RegistLuaTick_Params
{
	float                                              TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function slua_unreal.LuaActorComponent.UnRegistLuaTick
struct ULuaActorComponent_UnRegistLuaTick_Params
{
};

// Function slua_unreal.LuaActorComponent.RegistLuaTick
struct ULuaActorComponent_RegistLuaTick_Params
{
	float                                              TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function slua_unreal.LatentDelegate.OnLatentCallback
struct ULatentDelegate_OnLatentCallback_Params
{
	int                                                threadRef;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function slua_unreal.LuaDelegate.EventTrigger
struct ULuaDelegate_EventTrigger_Params
{
};

// Function slua_unreal.LuaLevelScriptActor.UnRegistLuaTick
struct ALuaLevelScriptActor_UnRegistLuaTick_Params
{
};

// Function slua_unreal.LuaLevelScriptActor.RegistLuaTick
struct ALuaLevelScriptActor_RegistLuaTick_Params
{
	float                                              TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function slua_unreal.LuaOverrider.TriggerAnimNotify
struct ULuaOverrider_TriggerAnimNotify_Params
{
};

// Function slua_unreal.LuaOverrider.InputVectorAxis
struct ULuaOverrider_InputVectorAxis_Params
{
	struct FVector                                     AxisValue;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function slua_unreal.LuaOverrider.InputTouch
struct ULuaOverrider_InputTouch_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function slua_unreal.LuaOverrider.InputGesture
struct ULuaOverrider_InputGesture_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function slua_unreal.LuaOverrider.InputAxis
struct ULuaOverrider_InputAxis_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function slua_unreal.LuaOverrider.InputAction
struct ULuaOverrider_InputAction_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function slua_unreal.LuaOverriderInterface.GetLuaFilePath
struct ULuaOverriderInterface_GetLuaFilePath_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function slua_unreal.SluaBlueprintLibrary.GetStringFromVar
struct USluaBlueprintLibrary_GetStringFromVar_Params
{
	struct FSluaBPVar                                  Value;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function slua_unreal.SluaBlueprintLibrary.GetObjectFromVar
struct USluaBlueprintLibrary_GetObjectFromVar_Params
{
	struct FSluaBPVar                                  Value;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function slua_unreal.SluaBlueprintLibrary.GetNumberFromVar
struct USluaBlueprintLibrary_GetNumberFromVar_Params
{
	struct FSluaBPVar                                  Value;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function slua_unreal.SluaBlueprintLibrary.GetIntFromVar
struct USluaBlueprintLibrary_GetIntFromVar_Params
{
	struct FSluaBPVar                                  Value;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function slua_unreal.SluaBlueprintLibrary.GetBoolFromVar
struct USluaBlueprintLibrary_GetBoolFromVar_Params
{
	struct FSluaBPVar                                  Value;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function slua_unreal.SluaBlueprintLibrary.CreateVarFromString
struct USluaBlueprintLibrary_CreateVarFromString_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	struct FSluaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function slua_unreal.SluaBlueprintLibrary.CreateVarFromObject
struct USluaBlueprintLibrary_CreateVarFromObject_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSluaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function slua_unreal.SluaBlueprintLibrary.CreateVarFromNumber
struct USluaBlueprintLibrary_CreateVarFromNumber_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSluaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function slua_unreal.SluaBlueprintLibrary.CreateVarFromInt
struct USluaBlueprintLibrary_CreateVarFromInt_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSluaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function slua_unreal.SluaBlueprintLibrary.CreateVarFromBool
struct USluaBlueprintLibrary_CreateVarFromBool_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSluaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function slua_unreal.SluaBlueprintLibrary.CallToLuaWithArgs
struct USluaBlueprintLibrary_CallToLuaWithArgs_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FSluaBPVar>                          Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     StateName;                                                // (Parm, ZeroConstructor)
	struct FSluaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function slua_unreal.SluaBlueprintLibrary.CallToLua
struct USluaBlueprintLibrary_CallToLua_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	struct FString                                     StateName;                                                // (Parm, ZeroConstructor)
	struct FSluaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

