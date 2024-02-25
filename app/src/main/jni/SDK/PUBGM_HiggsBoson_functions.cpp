// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HiggsBoson.ClientGlueHiaSystem.SetGameModeMoveSpeedModifier
// ()
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UClientGlueHiaSystem::SetGameModeMoveSpeedModifier(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.ClientGlueHiaSystem.SetGameModeMoveSpeedModifier");

	UClientGlueHiaSystem_SetGameModeMoveSpeedModifier_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.ClientGlueHiaSystem.IsTimeNearInvalidMoveState
// ()
// Parameters:
// class AActor*                  CharacterPtr                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeInSeconds                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          MarginInSeconds                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UClientGlueHiaSystem::IsTimeNearInvalidMoveState(class AActor* CharacterPtr, float TimeInSeconds, float MarginInSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.ClientGlueHiaSystem.IsTimeNearInvalidMoveState");

	UClientGlueHiaSystem_IsTimeNearInvalidMoveState_Params params;
	params.CharacterPtr = CharacterPtr;
	params.TimeInSeconds = TimeInSeconds;
	params.MarginInSeconds = MarginInSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HiggsBoson.ClientGlueHiaSystem.IsGMCheatingSpeed
// ()
// Parameters:
// class AActor*                  CharacterPtr                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UClientGlueHiaSystem::IsGMCheatingSpeed(class AActor* CharacterPtr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.ClientGlueHiaSystem.IsGMCheatingSpeed");

	UClientGlueHiaSystem_IsGMCheatingSpeed_Params params;
	params.CharacterPtr = CharacterPtr;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HiggsBoson.ClientGlueHiaSystem.IsDuringFightingState
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UClientGlueHiaSystem::IsDuringFightingState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.ClientGlueHiaSystem.IsDuringFightingState");

	UClientGlueHiaSystem_IsDuringFightingState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HiggsBoson.ClientGlueHiaSystem.GetGameModeMoveSpeedModifier
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UClientGlueHiaSystem::GetGameModeMoveSpeedModifier()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.ClientGlueHiaSystem.GetGameModeMoveSpeedModifier");

	UClientGlueHiaSystem_GetGameModeMoveSpeedModifier_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HiggsBoson.ClientGlueHiaSystem.GetGameModeMaxRunningMoveSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UClientGlueHiaSystem::GetGameModeMaxRunningMoveSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.ClientGlueHiaSystem.GetGameModeMaxRunningMoveSpeed");

	UClientGlueHiaSystem_GetGameModeMaxRunningMoveSpeed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HiggsBoson.FuzzyObject.SetUInt8ValueByName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// unsigned char                  Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuzzyObject::SetUInt8ValueByName(const struct FString& Name, unsigned char Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.FuzzyObject.SetUInt8ValueByName");

	UFuzzyObject_SetUInt8ValueByName_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HiggsBoson.FuzzyObject.SetUInt64ValueByName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// uint64_t                       Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuzzyObject::SetUInt64ValueByName(const struct FString& Name, uint64_t Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.FuzzyObject.SetUInt64ValueByName");

	UFuzzyObject_SetUInt64ValueByName_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HiggsBoson.FuzzyObject.SetUInt32ValueByName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// uint32_t                       Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuzzyObject::SetUInt32ValueByName(const struct FString& Name, uint32_t Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.FuzzyObject.SetUInt32ValueByName");

	UFuzzyObject_SetUInt32ValueByName_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HiggsBoson.FuzzyObject.SetUInt16ValueByName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// uint16_t                       Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuzzyObject::SetUInt16ValueByName(const struct FString& Name, uint16_t Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.FuzzyObject.SetUInt16ValueByName");

	UFuzzyObject_SetUInt16ValueByName_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HiggsBoson.FuzzyObject.SetInt8ValueByName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// int8_t                         Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuzzyObject::SetInt8ValueByName(const struct FString& Name, int8_t Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.FuzzyObject.SetInt8ValueByName");

	UFuzzyObject_SetInt8ValueByName_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HiggsBoson.FuzzyObject.SetInt64ValueByName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// int64_t                        Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuzzyObject::SetInt64ValueByName(const struct FString& Name, int64_t Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.FuzzyObject.SetInt64ValueByName");

	UFuzzyObject_SetInt64ValueByName_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HiggsBoson.FuzzyObject.SetInt32ValueByName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuzzyObject::SetInt32ValueByName(const struct FString& Name, int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.FuzzyObject.SetInt32ValueByName");

	UFuzzyObject_SetInt32ValueByName_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HiggsBoson.FuzzyObject.SetInt16ValueByName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// int16_t                        Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuzzyObject::SetInt16ValueByName(const struct FString& Name, int16_t Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.FuzzyObject.SetInt16ValueByName");

	UFuzzyObject_SetInt16ValueByName_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HiggsBoson.FuzzyObject.SetFloatValueByName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuzzyObject::SetFloatValueByName(const struct FString& Name, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.FuzzyObject.SetFloatValueByName");

	UFuzzyObject_SetFloatValueByName_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HiggsBoson.FuzzyObject.SetBoolValueByName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuzzyObject::SetBoolValueByName(const struct FString& Name, bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.FuzzyObject.SetBoolValueByName");

	UFuzzyObject_SetBoolValueByName_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HiggsBoson.FuzzyObject.GetUInt8ValueByName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// unsigned char                  OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuzzyObject::GetUInt8ValueByName(const struct FString& Name, unsigned char* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.FuzzyObject.GetUInt8ValueByName");

	UFuzzyObject_GetUInt8ValueByName_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function HiggsBoson.FuzzyObject.GetUInt64ValueByName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// uint64_t                       OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuzzyObject::GetUInt64ValueByName(const struct FString& Name, uint64_t* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.FuzzyObject.GetUInt64ValueByName");

	UFuzzyObject_GetUInt64ValueByName_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function HiggsBoson.FuzzyObject.GetUInt32ValueByName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// uint32_t                       OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuzzyObject::GetUInt32ValueByName(const struct FString& Name, uint32_t* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.FuzzyObject.GetUInt32ValueByName");

	UFuzzyObject_GetUInt32ValueByName_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function HiggsBoson.FuzzyObject.GetUInt16ValueByName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// uint16_t                       OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuzzyObject::GetUInt16ValueByName(const struct FString& Name, uint16_t* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.FuzzyObject.GetUInt16ValueByName");

	UFuzzyObject_GetUInt16ValueByName_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function HiggsBoson.FuzzyObject.GetInt8ValueByName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// int8_t                         OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuzzyObject::GetInt8ValueByName(const struct FString& Name, int8_t* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.FuzzyObject.GetInt8ValueByName");

	UFuzzyObject_GetInt8ValueByName_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function HiggsBoson.FuzzyObject.GetInt64ValueByName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// int64_t                        OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuzzyObject::GetInt64ValueByName(const struct FString& Name, int64_t* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.FuzzyObject.GetInt64ValueByName");

	UFuzzyObject_GetInt64ValueByName_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function HiggsBoson.FuzzyObject.GetInt32ValueByName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuzzyObject::GetInt32ValueByName(const struct FString& Name, int* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.FuzzyObject.GetInt32ValueByName");

	UFuzzyObject_GetInt32ValueByName_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function HiggsBoson.FuzzyObject.GetInt16ValueByName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// int16_t                        OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuzzyObject::GetInt16ValueByName(const struct FString& Name, int16_t* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.FuzzyObject.GetInt16ValueByName");

	UFuzzyObject_GetInt16ValueByName_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function HiggsBoson.FuzzyObject.GetFloatValueByName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// float                          OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuzzyObject::GetFloatValueByName(const struct FString& Name, float* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.FuzzyObject.GetFloatValueByName");

	UFuzzyObject_GetFloatValueByName_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function HiggsBoson.FuzzyObject.GetBoolValueByName
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// bool                           OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuzzyObject::GetBoolValueByName(const struct FString& Name, bool* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.FuzzyObject.GetBoolValueByName");

	UFuzzyObject_GetBoolValueByName_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function HiggsBoson.CamoyoHelper.MakeRectTu
// ()
// Parameters:
// struct FScriptDelegate         CamoyoRetDelegate              (Parm, ZeroConstructor)
// struct FString                 Filename                       (Parm, ZeroConstructor)
// int                            Quality                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowUI                        (Parm, ZeroConstructor, IsPlainOldData)

void UCamoyoHelper::MakeRectTu(const struct FScriptDelegate& CamoyoRetDelegate, const struct FString& Filename, int Quality, bool bShowUI)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.CamoyoHelper.MakeRectTu");

	UCamoyoHelper_MakeRectTu_Params params;
	params.CamoyoRetDelegate = CamoyoRetDelegate;
	params.Filename = Filename;
	params.Quality = Quality;
	params.bShowUI = bShowUI;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.CamoyoHelper.MakeMemPerform
// ()
// Parameters:
// int                            InbOpen                        (Parm, ZeroConstructor, IsPlainOldData)

void UCamoyoHelper::MakeMemPerform(int InbOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.CamoyoHelper.MakeMemPerform");

	UCamoyoHelper_MakeMemPerform_Params params;
	params.InbOpen = InbOpen;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.CamoyoHelper.MakeFitRectTu
// ()
// Parameters:
// struct FScriptDelegate         CamoyoRetDelegate              (Parm, ZeroConstructor)
// struct FVector4                InCutParam                     (Parm, IsPlainOldData)
// int                            InTuType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isShowUI                       (Parm, ZeroConstructor, IsPlainOldData)

void UCamoyoHelper::MakeFitRectTu(const struct FScriptDelegate& CamoyoRetDelegate, const struct FVector4& InCutParam, int InTuType, bool isShowUI)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.CamoyoHelper.MakeFitRectTu");

	UCamoyoHelper_MakeFitRectTu_Params params;
	params.CamoyoRetDelegate = CamoyoRetDelegate;
	params.InCutParam = InCutParam;
	params.InTuType = InTuType;
	params.isShowUI = isShowUI;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.UpdateFeiji
// ()
// Parameters:
// float                          Param1                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::UpdateFeiji(float Param1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.UpdateFeiji");

	UHiggsBosonComponent_UpdateFeiji_Params params;
	params.Param1 = Param1;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.SyncServerParam
// ()
// Parameters:
// bool                           Param1                         (Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::SyncServerParam(bool Param1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.SyncServerParam");

	UHiggsBosonComponent_SyncServerParam_Params params;
	params.Param1 = Param1;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.SwiftHawk
// ()
// Parameters:
// TArray<unsigned char>          Hawks                          (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// uint32_t                       Magic                          (Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::SwiftHawk(TArray<unsigned char> Hawks, uint32_t Magic)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.SwiftHawk");

	UHiggsBosonComponent_SwiftHawk_Params params;
	params.Hawks = Hawks;
	params.Magic = Magic;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.ShowABCD
// ()
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)
// bool                           bIsClientShowWindow            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsServerReportRobot           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSimilarMessageReportOnlyOnce (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::ShowABCD(const struct FString& Message, bool bIsClientShowWindow, bool bIsServerReportRobot, bool bIsSimilarMessageReportOnlyOnce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.ShowABCD");

	UHiggsBosonComponent_ShowABCD_Params params;
	params.Message = Message;
	params.bIsClientShowWindow = bIsClientShowWindow;
	params.bIsServerReportRobot = bIsServerReportRobot;
	params.bIsSimilarMessageReportOnlyOnce = bIsSimilarMessageReportOnlyOnce;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.SetSchemeForInitialize
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       VerifyLen                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          VerifyHashArray                (Parm, ZeroConstructor)
// TArray<struct FPatchPoint>     PatchPointArray                (Parm, ZeroConstructor)

void UHiggsBosonComponent::SetSchemeForInitialize(int Index, uint32_t VerifyLen, TArray<unsigned char> VerifyHashArray, TArray<struct FPatchPoint> PatchPointArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.SetSchemeForInitialize");

	UHiggsBosonComponent_SetSchemeForInitialize_Params params;
	params.Index = Index;
	params.VerifyLen = VerifyLen;
	params.VerifyHashArray = VerifyHashArray;
	params.PatchPointArray = PatchPointArray;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.SetSchemeForGet
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       VerifyLen                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          VerifyHashArray                (Parm, ZeroConstructor)
// TArray<struct FPatchPoint>     PatchPointArray                (Parm, ZeroConstructor)

void UHiggsBosonComponent::SetSchemeForGet(int Index, uint32_t VerifyLen, TArray<unsigned char> VerifyHashArray, TArray<struct FPatchPoint> PatchPointArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.SetSchemeForGet");

	UHiggsBosonComponent_SetSchemeForGet_Params params;
	params.Index = Index;
	params.VerifyLen = VerifyLen;
	params.VerifyHashArray = VerifyHashArray;
	params.PatchPointArray = PatchPointArray;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.ServerWheat
// ()
// Parameters:
// float                          Param1                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Param2                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          param3                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Param4                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Param5                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Param6                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Param7                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Param8                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Param9                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::ServerWheat(float Param1, float Param2, float param3, float Param4, float Param5, float Param6, float Param7, float Param8, float Param9)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.ServerWheat");

	UHiggsBosonComponent_ServerWheat_Params params;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.param3 = param3;
	params.Param4 = Param4;
	params.Param5 = Param5;
	params.Param6 = Param6;
	params.Param7 = Param7;
	params.Param8 = Param8;
	params.Param9 = Param9;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.ServerPoPo
// ()
// Parameters:
// TArray<unsigned char>          Array                          (Parm, OutParm, ZeroConstructor)

void UHiggsBosonComponent::ServerPoPo(TArray<unsigned char>* Array)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.ServerPoPo");

	UHiggsBosonComponent_ServerPoPo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function HiggsBoson.HiggsBosonComponent.RPC_ServerGlueHiaPark
// ()
// Parameters:
// int8_t                         HeShui                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          GlueHiaParkArr                 (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// uint32_t                       HiaStatus                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          GlueArg                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          GlueHiaParkArr2                (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// uint32_t                       HiaStatus2                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::RPC_ServerGlueHiaPark(int8_t HeShui, TArray<unsigned char> GlueHiaParkArr, uint32_t HiaStatus, TArray<unsigned char> GlueArg, TArray<unsigned char> GlueHiaParkArr2, uint32_t HiaStatus2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.RPC_ServerGlueHiaPark");

	UHiggsBosonComponent_RPC_ServerGlueHiaPark_Params params;
	params.HeShui = HeShui;
	params.GlueHiaParkArr = GlueHiaParkArr;
	params.HiaStatus = HiaStatus;
	params.GlueArg = GlueArg;
	params.GlueHiaParkArr2 = GlueHiaParkArr2;
	params.HiaStatus2 = HiaStatus2;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.RPC_ServerCapbo
// ()
// Parameters:
// int8_t                         BoCapC                         (Parm, ZeroConstructor, IsPlainOldData)
// int8_t                         InBoType                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          BoDataArr                      (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UHiggsBosonComponent::RPC_ServerCapbo(int8_t BoCapC, int8_t InBoType, TArray<unsigned char> BoDataArr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.RPC_ServerCapbo");

	UHiggsBosonComponent_RPC_ServerCapbo_Params params;
	params.BoCapC = BoCapC;
	params.InBoType = InBoType;
	params.BoDataArr = BoDataArr;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.RPC_ClientCoronaLab
// ()
// Parameters:
// unsigned char                  bAllSwitch                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          CoronaLab                      (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// uint32_t                       CoronaState                    (Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::RPC_ClientCoronaLab(unsigned char bAllSwitch, TArray<unsigned char> CoronaLab, uint32_t CoronaState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.RPC_ClientCoronaLab");

	UHiggsBosonComponent_RPC_ClientCoronaLab_Params params;
	params.bAllSwitch = bAllSwitch;
	params.CoronaLab = CoronaLab;
	params.CoronaState = CoronaState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.OnWeaponAimInput
// ()
// Parameters:
// float                          InDistToEnemy                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          InYaw                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPitch                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRoll                         (Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::OnWeaponAimInput(float InDistToEnemy, float InYaw, float InPitch, float InRoll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.OnWeaponAimInput");

	UHiggsBosonComponent_OnWeaponAimInput_Params params;
	params.InDistToEnemy = InDistToEnemy;
	params.InYaw = InYaw;
	params.InPitch = InPitch;
	params.InRoll = InRoll;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.OnTouchInput
// ()
// Parameters:
// float                          InYaw                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPitch                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRoll                         (Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::OnTouchInput(float InYaw, float InPitch, float InRoll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.OnTouchInput");

	UHiggsBosonComponent_OnTouchInput_Params params;
	params.InYaw = InYaw;
	params.InPitch = InPitch;
	params.InRoll = InRoll;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.OnStopFireEvent
// ()

void UHiggsBosonComponent::OnStopFireEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.OnStopFireEvent");

	UHiggsBosonComponent_OnStopFireEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.OnStartFireEvent
// ()

void UHiggsBosonComponent::OnStartFireEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.OnStartFireEvent");

	UHiggsBosonComponent_OnStartFireEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.OnSkillInteruptVisual
// ()
// Parameters:
// class AActor*                  InTarget                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InCauser                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::OnSkillInteruptVisual(class AActor* InTarget, class AActor* InCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.OnSkillInteruptVisual");

	UHiggsBosonComponent_OnSkillInteruptVisual_Params params;
	params.InTarget = InTarget;
	params.InCauser = InCauser;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.OnSkillEndVisual
// ()
// Parameters:
// class AActor*                  InTarget                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InCauser                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::OnSkillEndVisual(class AActor* InTarget, class AActor* InCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.OnSkillEndVisual");

	UHiggsBosonComponent_OnSkillEndVisual_Params params;
	params.InTarget = InTarget;
	params.InCauser = InCauser;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.OnSkillEndTrans
// ()
// Parameters:
// class AActor*                  InTarget                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InCauser                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::OnSkillEndTrans(class AActor* InTarget, class AActor* InCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.OnSkillEndTrans");

	UHiggsBosonComponent_OnSkillEndTrans_Params params;
	params.InTarget = InTarget;
	params.InCauser = InCauser;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.OnSkillBeginVisual
// ()
// Parameters:
// class AActor*                  InTarget                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InCauser                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::OnSkillBeginVisual(class AActor* InTarget, class AActor* InCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.OnSkillBeginVisual");

	UHiggsBosonComponent_OnSkillBeginVisual_Params params;
	params.InTarget = InTarget;
	params.InCauser = InCauser;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.OnSkillBeginTrans
// ()
// Parameters:
// class AActor*                  InTarget                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InCauser                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::OnSkillBeginTrans(class AActor* InTarget, class AActor* InCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.OnSkillBeginTrans");

	UHiggsBosonComponent_OnSkillBeginTrans_Params params;
	params.InTarget = InTarget;
	params.InCauser = InCauser;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.OnPlayerScopeOut
// ()
// Parameters:
// bool                           bBegan                         (Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::OnPlayerScopeOut(bool bBegan)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.OnPlayerScopeOut");

	UHiggsBosonComponent_OnPlayerScopeOut_Params params;
	params.bBegan = bBegan;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.OnPlayerScopeIn
// ()
// Parameters:
// bool                           bBegan                         (Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::OnPlayerScopeIn(bool bBegan)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.OnPlayerScopeIn");

	UHiggsBosonComponent_OnPlayerScopeIn_Params params;
	params.bBegan = bBegan;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.OnMyPawnRespawn
// ()
// Parameters:
// class AUAEPlayerController*    InPlayerController             (Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::OnMyPawnRespawn(class AUAEPlayerController* InPlayerController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.OnMyPawnRespawn");

	UHiggsBosonComponent_OnMyPawnRespawn_Params params;
	params.InPlayerController = InPlayerController;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.OnKillSomeOneEvent
// ()
// Parameters:
// class AActor*                  InSomeOne                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::OnKillSomeOneEvent(class AActor* InSomeOne)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.OnKillSomeOneEvent");

	UHiggsBosonComponent_OnKillSomeOneEvent_Params params;
	params.InSomeOne = InSomeOne;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.OnGyroInput
// ()
// Parameters:
// float                          InYaw                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPitch                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRoll                         (Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::OnGyroInput(float InYaw, float InPitch, float InRoll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.OnGyroInput");

	UHiggsBosonComponent_OnGyroInput_Params params;
	params.InYaw = InYaw;
	params.InPitch = InPitch;
	params.InRoll = InRoll;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.OnClientAdjustPosition
// ()
// Parameters:
// struct FVector                 NewLoc                         (Parm, IsPlainOldData)
// ECharacterMoveDragReason       Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::OnClientAdjustPosition(const struct FVector& NewLoc, ECharacterMoveDragReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.OnClientAdjustPosition");

	UHiggsBosonComponent_OnClientAdjustPosition_Params params;
	params.NewLoc = NewLoc;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.OnCapboReturn
// ()
// Parameters:
// int                            BoCapC                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            InBoType                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          RetData                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHiggsBosonComponent::OnCapboReturn(int BoCapC, int InBoType, TArray<unsigned char> RetData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.OnCapboReturn");

	UHiggsBosonComponent_OnCapboReturn_Params params;
	params.BoCapC = BoCapC;
	params.InBoType = InBoType;
	params.RetData = RetData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.OnBulletImpactEvent
// ()
// Parameters:
// class AActor*                  InCauser                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              InImpactResult                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UHiggsBosonComponent::OnBulletImpactEvent(class AActor* InCauser, const struct FHitResult& InImpactResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.OnBulletImpactEvent");

	UHiggsBosonComponent_OnBulletImpactEvent_Params params;
	params.InCauser = InCauser;
	params.InImpactResult = InImpactResult;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.HandleClientReconnect
// ()

void UHiggsBosonComponent::HandleClientReconnect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.HandleClientReconnect");

	UHiggsBosonComponent_HandleClientReconnect_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.GetServerGuey
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHiggsBosonComponent::GetServerGuey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.GetServerGuey");

	UHiggsBosonComponent_GetServerGuey_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HiggsBoson.HiggsBosonComponent.FlushGameEnd
// ()

void UHiggsBosonComponent::FlushGameEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.FlushGameEnd");

	UHiggsBosonComponent_FlushGameEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.EnableTickEncrypt
// ()

void UHiggsBosonComponent::EnableTickEncrypt()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.EnableTickEncrypt");

	UHiggsBosonComponent_EnableTickEncrypt_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.EnableEnhancedDynamicActors
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::EnableEnhancedDynamicActors(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.EnableEnhancedDynamicActors");

	UHiggsBosonComponent_EnableEnhancedDynamicActors_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.DispatchIntegrityCheckItem
// ()
// Parameters:
// uint32_t                       PlatID                         (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       AreaID                         (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       GameBits                       (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       Len                            (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::DispatchIntegrityCheckItem(uint32_t PlatID, uint32_t AreaID, uint32_t GameBits, uint32_t Index, int Offset, uint32_t Len, uint32_t Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.DispatchIntegrityCheckItem");

	UHiggsBosonComponent_DispatchIntegrityCheckItem_Params params;
	params.PlatID = PlatID;
	params.AreaID = AreaID;
	params.GameBits = GameBits;
	params.Index = Index;
	params.Offset = Offset;
	params.Len = Len;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.ControlRoofTouch
// ()
// Parameters:
// int                            Switch                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::ControlRoofTouch(int Switch)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.ControlRoofTouch");

	UHiggsBosonComponent_ControlRoofTouch_Params params;
	params.Switch = Switch;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.ClientSwiftHawkWithParams
// ()
// Parameters:
// TArray<unsigned char>          Hawks                          (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UHiggsBosonComponent::ClientSwiftHawkWithParams(TArray<unsigned char> Hawks)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.ClientSwiftHawkWithParams");

	UHiggsBosonComponent_ClientSwiftHawkWithParams_Params params;
	params.Hawks = Hawks;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.ClientSwiftHawk
// ()
// Parameters:
// unsigned char                  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceID                     (Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::ClientSwiftHawk(unsigned char Type, int SequenceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.ClientSwiftHawk");

	UHiggsBosonComponent_ClientSwiftHawk_Params params;
	params.Type = Type;
	params.SequenceID = SequenceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.ClientReceiveEx
// ()
// Parameters:
// TArray<unsigned char>          RPCConstArray                  (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UHiggsBosonComponent::ClientReceiveEx(TArray<unsigned char> RPCConstArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.ClientReceiveEx");

	UHiggsBosonComponent_ClientReceiveEx_Params params;
	params.RPCConstArray = RPCConstArray;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.HiggsBosonComponent.ClientDoJT
// ()
// Parameters:
// bool                           bDelayUntilShot                (Parm, ZeroConstructor, IsPlainOldData)

void UHiggsBosonComponent::ClientDoJT(bool bDelayUntilShot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.HiggsBosonComponent.ClientDoJT");

	UHiggsBosonComponent_ClientDoJT_Params params;
	params.bDelayUntilShot = bDelayUntilShot;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.SecurityImprisonComp.ReleaseTeammate
// ()
// Parameters:
// uint64_t                       PlayerUID                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USecurityImprisonComp::ReleaseTeammate(uint64_t PlayerUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.SecurityImprisonComp.ReleaseTeammate");

	USecurityImprisonComp_ReleaseTeammate_Params params;
	params.PlayerUID = PlayerUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.SecurityImprisonComp.ImprisonmentUIUpdate
// ()
// Parameters:
// uint64_t                       PlayerUID                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsImprison                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USecurityImprisonComp::ImprisonmentUIUpdate(uint64_t PlayerUID, bool bIsImprison)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.SecurityImprisonComp.ImprisonmentUIUpdate");

	USecurityImprisonComp_ImprisonmentUIUpdate_Params params;
	params.PlayerUID = PlayerUID;
	params.bIsImprison = bIsImprison;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.SecurityImprisonComp.ImprisonmentTeammate
// ()
// Parameters:
// uint64_t                       PlayerUID                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIscomplaint                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USecurityImprisonComp::ImprisonmentTeammate(uint64_t PlayerUID, bool bIscomplaint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.SecurityImprisonComp.ImprisonmentTeammate");

	USecurityImprisonComp_ImprisonmentTeammate_Params params;
	params.PlayerUID = PlayerUID;
	params.bIscomplaint = bIscomplaint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HiggsBoson.SecurityImprisonComp.ImprisonmentReport
// ()
// Parameters:
// uint64_t                       PlayerUID                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USecurityImprisonComp::ImprisonmentReport(uint64_t PlayerUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HiggsBoson.SecurityImprisonComp.ImprisonmentReport");

	USecurityImprisonComp_ImprisonmentReport_Params params;
	params.PlayerUID = PlayerUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

