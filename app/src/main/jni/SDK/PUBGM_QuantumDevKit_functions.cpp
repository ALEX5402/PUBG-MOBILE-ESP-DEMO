// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuantumDevKit.FirebaseHelper.GetInstance
// ()
// Parameters:
// class UFirebaseHelper*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFirebaseHelper* UFirebaseHelper::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.FirebaseHelper.GetInstance");

	UFirebaseHelper_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.FirebaseHelper.GetFIRInstallId
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UFirebaseHelper::GetFIRInstallId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.FirebaseHelper.GetFIRInstallId");

	UFirebaseHelper_GetFIRInstallId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.FirebaseHelper.GetFIRAppInstanceId
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UFirebaseHelper::GetFIRAppInstanceId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.FirebaseHelper.GetFIRAppInstanceId");

	UFirebaseHelper_GetFIRAppInstanceId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.FirebaseHelper.GetFCMToken
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UFirebaseHelper::GetFCMToken()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.FirebaseHelper.GetFCMToken");

	UFirebaseHelper_GetFCMToken_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetStatus
// ()
// Parameters:
// EQuantumFirebaseRemoteConfigStatus ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EQuantumFirebaseRemoteConfigStatus UQuantumFirebaseRemoteConfig::GetStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetStatus");

	UQuantumFirebaseRemoteConfig_GetStatus_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetRemoteConfig
// ()
// Parameters:
// struct FString                 ConfigNameToQuery              (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UQuantumFirebaseRemoteConfig::GetRemoteConfig(const struct FString& ConfigNameToQuery)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetRemoteConfig");

	UQuantumFirebaseRemoteConfig_GetRemoteConfig_Params params;
	params.ConfigNameToQuery = ConfigNameToQuery;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetInstance
// ()
// Parameters:
// class UQuantumFirebaseRemoteConfig* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UQuantumFirebaseRemoteConfig* UQuantumFirebaseRemoteConfig::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetInstance");

	UQuantumFirebaseRemoteConfig_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

