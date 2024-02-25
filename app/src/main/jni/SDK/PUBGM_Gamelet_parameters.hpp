#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Gamelet.Gamelet.SetScriptExternalLoadDir
struct UGamelet_SetScriptExternalLoadDir_Params
{
	struct FString                                     ExternalLoadDir;                                          // (Parm, ZeroConstructor)
};

// Function Gamelet.Gamelet.SetFont
struct UGamelet_SetFont_Params
{
	struct FString                                     FontName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     FontPath;                                                 // (Parm, ZeroConstructor)
};

// Function Gamelet.Gamelet.SendMessageToApp
struct UGamelet_SendMessageToApp_Params
{
	struct FString                                     AppID;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
};

// Function Gamelet.Gamelet.RefreshUserdata
struct UGamelet_RefreshUserdata_Params
{
	TMap<struct FString, struct FString>               UserData;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Gamelet.Gamelet.OpenApp
struct UGamelet_OpenApp_Params
{
	struct FString                                     AppID;                                                    // (Parm, ZeroConstructor)
	struct FString                                     OpenArgs;                                                 // (Parm, ZeroConstructor)
};

// Function Gamelet.Gamelet.Open
struct UGamelet_Open_Params
{
	TEnumAsByte<EGameletEnvironment>                   Environment;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               UserData;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Gamelet.Gamelet.Initialize
struct UGamelet_Initialize_Params
{
	class UGameletSettings*                            Settings;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.GetGlobalSettings
struct UGamelet_GetGlobalSettings_Params
{
	class UGameletSettings*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.Get
struct UGamelet_Get_Params
{
	class UGamelet*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.ExecOnSDKMessage
struct UGamelet_ExecOnSDKMessage_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.ExecOnReportData
struct UGamelet_ExecOnReportData_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	struct FString                                     Data;                                                     // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.ExecOnRefreshUserdata
struct UGamelet_ExecOnRefreshUserdata_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.Deinitialize
struct UGamelet_Deinitialize_Params
{
};

// Function Gamelet.Gamelet.CollectPixUILogOutput
struct UGamelet_CollectPixUILogOutput_Params
{
	EPXLogTypes                                        PixUILogType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EPXLogLevels                                       PixUILogLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     logContent;                                               // (Parm, ZeroConstructor)
};

// Function Gamelet.Gamelet.CloseApp
struct UGamelet_CloseApp_Params
{
	struct FString                                     AppID;                                                    // (Parm, ZeroConstructor)
};

// Function Gamelet.Gamelet.Close
struct UGamelet_Close_Params
{
};

// Function Gamelet.GameletEnvMgr.OnEnvToGameMessage
struct UGameletEnvMgr_OnEnvToGameMessage_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletEnvMgr.OnEnvToEntryMessage
struct UGameletEnvMgr_OnEnvToEntryMessage_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletEnvMgr.OnEnvReportData
struct UGameletEnvMgr_OnEnvReportData_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	struct FString                                     Data;                                                     // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletEnvMgr.OnEnvRefreshUserdata
struct UGameletEnvMgr_OnEnvRefreshUserdata_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletEnvMgr.OnEnvLoaded
struct UGameletEnvMgr_OnEnvLoaded_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	bool                                               IsSuccess;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gamelet.GameletSettings.IsValidSetting
struct UGameletSettings_IsValidSetting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletSettings.Get
struct UGameletSettings_Get_Params
{
	class UGameletSettings*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletWindow.OnPxWidgetScriptStateInit
struct UGameletWindow_OnPxWidgetScriptStateInit_Params
{
};

// Function Gamelet.GameletWindow.OnPxWidgetRequestOpen
struct UGameletWindow_OnPxWidgetRequestOpen_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Features;                                                 // (Parm, ZeroConstructor)
	bool                                               bReplace;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletWindow.OnPxWidgetMessage
struct UGameletWindow_OnPxWidgetMessage_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
};

// Function Gamelet.GameletWindow.OnPxWidgetLoaded
struct UGameletWindow_OnPxWidgetLoaded_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gamelet.GameletWindow.OnPxWidgetClose
struct UGameletWindow_OnPxWidgetClose_Params
{
};

}

