#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function QuantumDevKit.FirebaseHelper.GetInstance
struct UFirebaseHelper_GetInstance_Params
{
	class UFirebaseHelper*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuantumDevKit.FirebaseHelper.GetFIRInstallId
struct UFirebaseHelper_GetFIRInstallId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function QuantumDevKit.FirebaseHelper.GetFIRAppInstanceId
struct UFirebaseHelper_GetFIRAppInstanceId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function QuantumDevKit.FirebaseHelper.GetFCMToken
struct UFirebaseHelper_GetFCMToken_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetStatus
struct UQuantumFirebaseRemoteConfig_GetStatus_Params
{
	EQuantumFirebaseRemoteConfigStatus                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetRemoteConfig
struct UQuantumFirebaseRemoteConfig_GetRemoteConfig_Params
{
	struct FString                                     ConfigNameToQuery;                                        // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetInstance
struct UQuantumFirebaseRemoteConfig_GetInstance_Params
{
	class UQuantumFirebaseRemoteConfig*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

