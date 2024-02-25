#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PixUI.PixUIBPLibrary.PixUI_Version
struct UPixUIBPLibrary_PixUI_Version_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIBPLibrary.PixUI_Startup
struct UPixUIBPLibrary_PixUI_Startup_Params
{
	struct FString                                     fstr_CachePathForWrite;                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_Shutdown
struct UPixUIBPLibrary_PixUI_Shutdown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_ShowTick
struct UPixUIBPLibrary_PixUI_ShowTick_Params
{
	bool                                               b_show;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_ShowResInfor
struct UPixUIBPLibrary_PixUI_ShowResInfor_Params
{
};

// Function PixUI.PixUIBPLibrary.PixUI_ShowMousePos
struct UPixUIBPLibrary_PixUI_ShowMousePos_Params
{
	bool                                               b_show;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetPaintDura
struct UPixUIBPLibrary_PixUI_SetPaintDura_Params
{
	int                                                n_duar_count;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetMobileUseTouchEvent
struct UPixUIBPLibrary_PixUI_SetMobileUseTouchEvent_Params
{
	bool                                               b_used;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetMatRootPath
struct UPixUIBPLibrary_PixUI_SetMatRootPath_Params
{
	struct FString                                     fstr_root_path;                                           // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetMatBasePath
struct UPixUIBPLibrary_PixUI_SetMatBasePath_Params
{
	struct FString                                     fstr_base_path;                                           // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetDynamicFixFontSize
struct UPixUIBPLibrary_PixUI_SetDynamicFixFontSize_Params
{
	bool                                               b_OpenDynamicFix;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetDefaultFontSize
struct UPixUIBPLibrary_PixUI_SetDefaultFontSize_Params
{
	int                                                n_FontSize;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetDefaultFont
struct UPixUIBPLibrary_PixUI_SetDefaultFont_Params
{
	struct FString                                     fstr_FontName;                                            // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetDebugTickDelay
struct UPixUIBPLibrary_PixUI_SetDebugTickDelay_Params
{
	float                                              f_delay;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetDebugRetainDraw
struct UPixUIBPLibrary_PixUI_SetDebugRetainDraw_Params
{
	bool                                               b_retain;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetDebugNoCoreTick
struct UPixUIBPLibrary_PixUI_SetDebugNoCoreTick_Params
{
	bool                                               b_no_tick;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetDebugCPURunTime
struct UPixUIBPLibrary_PixUI_SetDebugCPURunTime_Params
{
	int                                                n_time;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetCoreTickDura
struct UPixUIBPLibrary_PixUI_SetCoreTickDura_Params
{
	int                                                n_duar_count;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_RHIShaderPlatform
struct UPixUIBPLibrary_PixUI_RHIShaderPlatform_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_RHIShaderLevel
struct UPixUIBPLibrary_PixUI_RHIShaderLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_RemoveSystemFont
struct UPixUIBPLibrary_PixUI_RemoveSystemFont_Params
{
	struct FString                                     fstr_FontName;                                            // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIBPLibrary.PixUI_PlatformOSVersionCode
struct UPixUIBPLibrary_PixUI_PlatformOSVersionCode_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_PlatformOSVersion
struct UPixUIBPLibrary_PixUI_PlatformOSVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIBPLibrary.PixUI_PlatformCode
struct UPixUIBPLibrary_PixUI_PlatformCode_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_Platform
struct UPixUIBPLibrary_PixUI_Platform_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIBPLibrary.PixUI_LogEnable
struct UPixUIBPLibrary_PixUI_LogEnable_Params
{
	bool                                               b_Enagble;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsStartUp
struct UPixUIBPLibrary_PixUI_IsStartUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsShowTick
struct UPixUIBPLibrary_PixUI_IsShowTick_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsShowMousePos
struct UPixUIBPLibrary_PixUI_IsShowMousePos_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderVulkan
struct UPixUIBPLibrary_PixUI_IsRHIShaderVulkan_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderOpenGLES2
struct UPixUIBPLibrary_PixUI_IsRHIShaderOpenGLES2_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderOpenGL
struct UPixUIBPLibrary_PixUI_IsRHIShaderOpenGL_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderMetal
struct UPixUIBPLibrary_PixUI_IsRHIShaderMetal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderDX
struct UPixUIBPLibrary_PixUI_IsRHIShaderDX_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsOsBit64
struct UPixUIBPLibrary_PixUI_IsOsBit64_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsOsBit32
struct UPixUIBPLibrary_PixUI_IsOsBit32_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsMobileUseTouchEvent
struct UPixUIBPLibrary_PixUI_IsMobileUseTouchEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsDynamicFixFontSize
struct UPixUIBPLibrary_PixUI_IsDynamicFixFontSize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetWindowSlotObject
struct UPixUIBPLibrary_PixUI_GetWindowSlotObject_Params
{
	int                                                windowID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     strTagId;                                                 // (Parm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetPaintDura
struct UPixUIBPLibrary_PixUI_GetPaintDura_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetMatRootPath
struct UPixUIBPLibrary_PixUI_GetMatRootPath_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetMatBasePath
struct UPixUIBPLibrary_PixUI_GetMatBasePath_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetFontPath
struct UPixUIBPLibrary_PixUI_GetFontPath_Params
{
	struct FString                                     fstr_FontName;                                            // (Parm, ZeroConstructor)
	struct FString                                     fstr_FontPath;                                            // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetDefaultFontSize
struct UPixUIBPLibrary_PixUI_GetDefaultFontSize_Params
{
	int                                                n_FontSize;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetDefaultFont
struct UPixUIBPLibrary_PixUI_GetDefaultFont_Params
{
	struct FString                                     fstr_FontName;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetDebugTickDelay
struct UPixUIBPLibrary_PixUI_GetDebugTickDelay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetDebugRetainDraw
struct UPixUIBPLibrary_PixUI_GetDebugRetainDraw_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetDebugNoCoreTick
struct UPixUIBPLibrary_PixUI_GetDebugNoCoreTick_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetDebugCPURunTime
struct UPixUIBPLibrary_PixUI_GetDebugCPURunTime_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetCoreTickDura
struct UPixUIBPLibrary_PixUI_GetCoreTickDura_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetCachePath
struct UPixUIBPLibrary_PixUI_GetCachePath_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIBPLibrary.PixUI_FindByWindowID
struct UPixUIBPLibrary_PixUI_FindByWindowID_Params
{
	int                                                windowID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPixUIWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_CurrentGameFPS
struct UPixUIBPLibrary_PixUI_CurrentGameFPS_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_CreateWidget
struct UPixUIBPLibrary_PixUI_CreateWidget_Params
{
	class UPixUIWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortWidget
struct UPixUIBPLibrary_PixUI_CreateViewPortWidget_Params
{
	class UPixUIViewPortWidget*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortAddToCanvasEx
struct UPixUIBPLibrary_PixUI_CreateViewPortAddToCanvasEx_Params
{
	class UCanvasPanel*                                p_ParentCanvas;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPixUIViewPortWidget*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortAddToCanvas
struct UPixUIBPLibrary_PixUI_CreateViewPortAddToCanvas_Params
{
	class UCanvasPanel*                                p_ParentCanvas;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAnchors                                    Anchors;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FMargin                                     Margin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UPixUIViewPortWidget*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_CreateAddToCanvasEx
struct UPixUIBPLibrary_PixUI_CreateAddToCanvasEx_Params
{
	class UCanvasPanel*                                p_ParentCanvas;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPixUIWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_CreateAddToCanvas
struct UPixUIBPLibrary_PixUI_CreateAddToCanvas_Params
{
	class UCanvasPanel*                                p_ParentCanvas;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAnchors                                    Anchors;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FMargin                                     Margin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UPixUIWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_ClearCacheFile
struct UPixUIBPLibrary_PixUI_ClearCacheFile_Params
{
};

// Function PixUI.PixUIBPLibrary.PixUI_AddSystemFont
struct UPixUIBPLibrary_PixUI_AddSystemFont_Params
{
	struct FString                                     fstr_FontName;                                            // (Parm, ZeroConstructor)
	struct FString                                     fstr_FontPath;                                            // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIInput.OnInputText
struct UPixUIInput_OnInputText_Params
{
	struct FString                                     fstrInsert;                                               // (Parm, ZeroConstructor)
	bool                                               b_end_input;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               b_lost_focus;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               b_replace;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIInput.Get
struct UPixUIInput_Get_Params
{
	class UPixUIInput*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUILog.Get
struct UPixUILog_Get_Params
{
	class UPixUILog*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUILog.DispatchLog
struct UPixUILog_DispatchLog_Params
{
	EPXLogTypes                                        e_LogType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EPXLogLevels                                       e_LogLevel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     fstr_LogContent;                                          // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIViewPortWidget.PostPxMessage
struct UPixUIViewPortWidget_PostPxMessage_Params
{
	struct FString                                     fstr_Message;                                             // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIViewPortWidget.OnPixuiPromptDelegate
struct UPixUIViewPortWidget_OnPixuiPromptDelegate_Params
{
	struct FString                                     fstr_Tip;                                                 // (Parm, ZeroConstructor)
	struct FString                                     fstr_Default;                                             // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIViewPortWidget.OnPixuiOpenDelegate
struct UPixUIViewPortWidget_OnPixuiOpenDelegate_Params
{
	struct FString                                     fstr_Url;                                                 // (Parm, ZeroConstructor)
	struct FString                                     fstr_Name;                                                // (Parm, ZeroConstructor)
	struct FString                                     fstr_Features;                                            // (Parm, ZeroConstructor)
	bool                                               b_replace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIViewPortWidget.OnPixuiConfirmDelegate
struct UPixUIViewPortWidget_OnPixuiConfirmDelegate_Params
{
	struct FString                                     fstr_ConfirmMsg;                                          // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIViewPortWidget.LoadPXViewFromUrl
struct UPixUIViewPortWidget_LoadPXViewFromUrl_Params
{
	struct FString                                     fstr_Url;                                                 // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIViewPortWidget.LoadPXViewFromGameAssetPath
struct UPixUIViewPortWidget_LoadPXViewFromGameAssetPath_Params
{
	struct FString                                     fstr_FilePath;                                            // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIViewPortWidget.LoadPXViewFromData
struct UPixUIViewPortWidget_LoadPXViewFromData_Params
{
	TArray<unsigned char>                              arry_Data;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     fstr_RootPath;                                            // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIViewPortWidget.GetPixuiWidget
struct UPixUIViewPortWidget_GetPixuiWidget_Params
{
	class UPixUIWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PixUI.PixUIViewPortWidget.Close
struct UPixUIViewPortWidget_Close_Params
{
};

// Function PixUI.PixUIWidget.SetScriptGlobalString
struct UPixUIWidget_SetScriptGlobalString_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     str;                                                      // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIWidget.SetScriptGlobalNumber
struct UPixUIWidget_SetScriptGlobalNumber_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	float                                              Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIWidget.SetScriptGlobalBoolean
struct UPixUIWidget_SetScriptGlobalBoolean_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               V;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIWidget.SetAutoTransform
struct UPixUIWidget_SetAutoTransform_Params
{
	bool                                               b_auto;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIWidget.PostPxMessage
struct UPixUIWidget_PostPxMessage_Params
{
	struct FString                                     fstr_Message;                                             // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIWidget.OpenPageFromUrl
struct UPixUIWidget_OpenPageFromUrl_Params
{
	struct FString                                     fstrUrl;                                                  // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidget.OpenPageFromGameAssetPath
struct UPixUIWidget_OpenPageFromGameAssetPath_Params
{
	struct FString                                     fstr_File;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidget.OpenPageFromData
struct UPixUIWidget_OpenPageFromData_Params
{
	TArray<unsigned char>                              arry_Data;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     fstr_BasePath;                                            // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidget.GetSlotObjectByTagId
struct UPixUIWidget_GetSlotObjectByTagId_Params
{
	struct FString                                     slotTagId;                                                // (Parm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidget.GetScriptGlobalString
struct UPixUIWidget_GetScriptGlobalString_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIWidget.GetScriptGlobalNumber
struct UPixUIWidget_GetScriptGlobalNumber_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidget.GetScriptGlobalBoolean
struct UPixUIWidget_GetScriptGlobalBoolean_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidget.GetPxWinId
struct UPixUIWidget_GetPxWinId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidget.DestroyPage
struct UPixUIWidget_DestroyPage_Params
{
};

// Function PixUI.PixUIWidget.CreateScriptGlobal
struct UPixUIWidget_CreateScriptGlobal_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIWidget.ClosePage
struct UPixUIWidget_ClosePage_Params
{
};

// Function PixUI.PixUIWidgetOld.SetScriptGlobalString
struct UPixUIWidgetOld_SetScriptGlobalString_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     str;                                                      // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIWidgetOld.SetScriptGlobalNumber
struct UPixUIWidgetOld_SetScriptGlobalNumber_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	float                                              Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIWidgetOld.SetScriptGlobalBoolean
struct UPixUIWidgetOld_SetScriptGlobalBoolean_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               V;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIWidgetOld.SetCustomLayer
struct UPixUIWidgetOld_SetCustomLayer_Params
{
	int                                                n_in_layer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIWidgetOld.SetAutoTransform
struct UPixUIWidgetOld_SetAutoTransform_Params
{
	bool                                               b_auto;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIWidgetOld.PostPxMessage
struct UPixUIWidgetOld_PostPxMessage_Params
{
	struct FString                                     fstr_Message;                                             // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIWidgetOld.OpenPageFromUrl
struct UPixUIWidgetOld_OpenPageFromUrl_Params
{
	struct FString                                     fstr_Url;                                                 // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidgetOld.OpenPageFromGameAssetPath
struct UPixUIWidgetOld_OpenPageFromGameAssetPath_Params
{
	struct FString                                     fstr_File;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidgetOld.OpenPageFromData
struct UPixUIWidgetOld_OpenPageFromData_Params
{
	TArray<unsigned char>                              arry_Data;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     fstr_BasePath;                                            // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidgetOld.GetScriptGlobalString
struct UPixUIWidgetOld_GetScriptGlobalString_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIWidgetOld.GetScriptGlobalNumber
struct UPixUIWidgetOld_GetScriptGlobalNumber_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidgetOld.GetScriptGlobalBoolean
struct UPixUIWidgetOld_GetScriptGlobalBoolean_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidgetOld.GetPxWinId
struct UPixUIWidgetOld_GetPxWinId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidgetOld.GetCustomLayer
struct UPixUIWidgetOld_GetCustomLayer_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidgetOld.DestroyPage
struct UPixUIWidgetOld_DestroyPage_Params
{
};

// Function PixUI.PixUIWidgetOld.CreateScriptGlobal
struct UPixUIWidgetOld_CreateScriptGlobal_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIWidgetOld.ClosePage
struct UPixUIWidgetOld_ClosePage_Params
{
};

}

