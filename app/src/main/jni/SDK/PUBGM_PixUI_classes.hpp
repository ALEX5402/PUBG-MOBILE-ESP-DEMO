#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PixUI.PixUIBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UPixUIBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIBPLibrary");
		return pStaticClass;
	}


	struct FString PixUI_Version();
	bool PixUI_Startup(const struct FString& fstr_CachePathForWrite);
	bool PixUI_Shutdown();
	void PixUI_ShowTick(bool b_show);
	void PixUI_ShowResInfor();
	void PixUI_ShowMousePos(bool b_show);
	void PixUI_SetPaintDura(int n_duar_count);
	void PixUI_SetMobileUseTouchEvent(bool b_used);
	void PixUI_SetMatRootPath(const struct FString& fstr_root_path);
	void PixUI_SetMatBasePath(const struct FString& fstr_base_path);
	void PixUI_SetDynamicFixFontSize(bool b_OpenDynamicFix);
	void PixUI_SetDefaultFontSize(int n_FontSize);
	void PixUI_SetDefaultFont(const struct FString& fstr_FontName);
	void PixUI_SetDebugTickDelay(float f_delay);
	void PixUI_SetDebugRetainDraw(bool b_retain);
	void PixUI_SetDebugNoCoreTick(bool b_no_tick);
	void PixUI_SetDebugCPURunTime(int n_time);
	void PixUI_SetCoreTickDura(int n_duar_count);
	int PixUI_RHIShaderPlatform();
	int PixUI_RHIShaderLevel();
	void PixUI_RemoveSystemFont(const struct FString& fstr_FontName);
	float PixUI_PlatformOSVersionCode();
	struct FString PixUI_PlatformOSVersion();
	int PixUI_PlatformCode();
	struct FString PixUI_Platform();
	void PixUI_LogEnable(bool b_Enagble);
	bool PixUI_IsStartUp();
	bool PixUI_IsShowTick();
	bool PixUI_IsShowMousePos();
	bool PixUI_IsRHIShaderVulkan();
	bool PixUI_IsRHIShaderOpenGLES2();
	bool PixUI_IsRHIShaderOpenGL();
	bool PixUI_IsRHIShaderMetal();
	bool PixUI_IsRHIShaderDX();
	bool PixUI_IsOsBit64();
	bool PixUI_IsOsBit32();
	bool PixUI_IsMobileUseTouchEvent();
	bool PixUI_IsDynamicFixFontSize();
	class UObject* PixUI_GetWindowSlotObject(int windowID, const struct FString& strTagId);
	int PixUI_GetPaintDura();
	struct FString PixUI_GetMatRootPath();
	struct FString PixUI_GetMatBasePath();
	bool PixUI_GetFontPath(const struct FString& fstr_FontName, struct FString* fstr_FontPath);
	void PixUI_GetDefaultFontSize(int* n_FontSize);
	void PixUI_GetDefaultFont(struct FString* fstr_FontName);
	float PixUI_GetDebugTickDelay();
	bool PixUI_GetDebugRetainDraw();
	bool PixUI_GetDebugNoCoreTick();
	int PixUI_GetDebugCPURunTime();
	int PixUI_GetCoreTickDura();
	struct FString PixUI_GetCachePath();
	class UPixUIWidget* PixUI_FindByWindowID(int windowID);
	float PixUI_CurrentGameFPS();
	class UPixUIWidget* PixUI_CreateWidget();
	class UPixUIViewPortWidget* PixUI_CreateViewPortWidget();
	class UPixUIViewPortWidget* PixUI_CreateViewPortAddToCanvasEx(class UCanvasPanel* p_ParentCanvas);
	class UPixUIViewPortWidget* PixUI_CreateViewPortAddToCanvas(class UCanvasPanel* p_ParentCanvas, const struct FAnchors& Anchors, const struct FMargin& Margin);
	class UPixUIWidget* PixUI_CreateAddToCanvasEx(class UCanvasPanel* p_ParentCanvas);
	class UPixUIWidget* PixUI_CreateAddToCanvas(class UCanvasPanel* p_ParentCanvas, const struct FAnchors& Anchors, const struct FMargin& Margin);
	void PixUI_ClearCacheFile();
	void PixUI_AddSystemFont(const struct FString& fstr_FontName, const struct FString& fstr_FontPath);
};


// Class PixUI.PixUIInput
// 0x0038 (0x0060 - 0x0028)
class UPixUIInput : public UObject
{
public:
	struct FScriptDelegate                             ActivateDelegate;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DeativateInput;                                           // 0x0038(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIInput");
		return pStaticClass;
	}


	void OnInputText(const struct FString& fstrInsert, bool b_end_input, bool b_lost_focus, bool b_replace);
	class UPixUIInput* Get();
};


// Class PixUI.PixUILog
// 0x0010 (0x0038 - 0x0028)
class UPixUILog : public UObject
{
public:
	struct FScriptMulticastDelegate                    LogDelegate;                                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUILog");
		return pStaticClass;
	}


	class UPixUILog* Get();
	void DispatchLog(EPXLogTypes e_LogType, EPXLogLevels e_LogLevel, const struct FString& fstr_LogContent);
};


// Class PixUI.PixUIViewPortWidget
// 0x0038 (0x0298 - 0x0260)
class UPixUIViewPortWidget : public UUserWidget
{
public:
	struct FScriptDelegate                             pixuiWinOpenDelegate;                                     // 0x0260(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             pixuiWinConfirmDelegate;                                  // 0x0270(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             pixuiWinPrompDelegate;                                    // 0x0280(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0290(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIViewPortWidget");
		return pStaticClass;
	}


	void PostPxMessage(const struct FString& fstr_Message);
	struct FString OnPixuiPromptDelegate(const struct FString& fstr_Tip, const struct FString& fstr_Default);
	int OnPixuiOpenDelegate(const struct FString& fstr_Url, const struct FString& fstr_Name, const struct FString& fstr_Features, bool b_replace);
	bool OnPixuiConfirmDelegate(const struct FString& fstr_ConfirmMsg);
	int LoadPXViewFromUrl(const struct FString& fstr_Url);
	int LoadPXViewFromGameAssetPath(const struct FString& fstr_FilePath);
	int LoadPXViewFromData(const struct FString& fstr_RootPath, TArray<unsigned char>* arry_Data);
	class UPixUIWidget* GetPixuiWidget();
	void Close();
};


// Class PixUI.PixUIWidget
// 0x0290 (0x03C0 - 0x0130)
class UPixUIWidget : public UCanvasPanel
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0130(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCloseDelegate;                                          // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDestroyDelegate;                                        // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiOnLoadedDelegate;                                    // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiOnScriptStateInitDelegate;                           // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiOnInternalErrorDelegate;                             // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             pixuiWinOpenDelegate;                                     // 0x0198(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    pixuiWinCloseDelegate;                                    // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWinAlertDelegate;                                    // 0x01B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             pixuiWinConfirmDelegate;                                  // 0x01C8(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             pixuiWinPrompDelegate;                                    // 0x01D8(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    pixuiWinTransformDelegate;                                // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWinMessageDelegate;                                  // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWin_app_foreground_delegate;                         // 0x0208(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWin_app_background_delegate;                         // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x198];                                     // 0x0228(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIWidget");
		return pStaticClass;
	}


	void SetScriptGlobalString(const struct FString& Name, const struct FString& Key, const struct FString& str);
	void SetScriptGlobalNumber(const struct FString& Name, const struct FString& Key, float Num);
	void SetScriptGlobalBoolean(const struct FString& Name, const struct FString& Key, bool V);
	void SetAutoTransform(bool b_auto);
	void PostPxMessage(const struct FString& fstr_Message);
	int OpenPageFromUrl(const struct FString& fstrUrl);
	int OpenPageFromGameAssetPath(const struct FString& fstr_File);
	int OpenPageFromData(const struct FString& fstr_BasePath, TArray<unsigned char>* arry_Data);
	class UObject* GetSlotObjectByTagId(const struct FString& slotTagId);
	struct FString GetScriptGlobalString(const struct FString& Name, const struct FString& Key);
	float GetScriptGlobalNumber(const struct FString& Name, const struct FString& Key);
	bool GetScriptGlobalBoolean(const struct FString& Name, const struct FString& Key);
	int GetPxWinId();
	void DestroyPage();
	void CreateScriptGlobal(const struct FString& Name);
	void ClosePage();
};


// Class PixUI.PixUIWidgetOld
// 0x0150 (0x0250 - 0x0100)
class UPixUIWidgetOld : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCloseDelegate;                                          // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDestroyDelegate;                                        // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiOnLoadedDelegate;                                    // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiOnScriptStateInitDelegate;                           // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiOnInternalErrorDelegate;                             // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             pixuiWinOpenDelegate;                                     // 0x0160(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    pixuiWinCloseDelegate;                                    // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWinAlertDelegate;                                    // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             pixuiWinConfirmDelegate;                                  // 0x0190(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             pixuiWinPrompDelegate;                                    // 0x01A0(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    pixuiWinTransformDelegate;                                // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWinMessageDelegate;                                  // 0x01C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWin_app_foreground_delegate;                         // 0x01D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWin_app_background_delegate;                         // 0x01E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x60];                                      // 0x01F0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIWidgetOld");
		return pStaticClass;
	}


	void SetScriptGlobalString(const struct FString& Name, const struct FString& Key, const struct FString& str);
	void SetScriptGlobalNumber(const struct FString& Name, const struct FString& Key, float Num);
	void SetScriptGlobalBoolean(const struct FString& Name, const struct FString& Key, bool V);
	void SetCustomLayer(int n_in_layer);
	void SetAutoTransform(bool b_auto);
	void PostPxMessage(const struct FString& fstr_Message);
	int OpenPageFromUrl(const struct FString& fstr_Url);
	int OpenPageFromGameAssetPath(const struct FString& fstr_File);
	int OpenPageFromData(const struct FString& fstr_BasePath, TArray<unsigned char>* arry_Data);
	struct FString GetScriptGlobalString(const struct FString& Name, const struct FString& Key);
	float GetScriptGlobalNumber(const struct FString& Name, const struct FString& Key);
	bool GetScriptGlobalBoolean(const struct FString& Name, const struct FString& Key);
	int GetPxWinId();
	int GetCustomLayer();
	void DestroyPage();
	void CreateScriptGlobal(const struct FString& Name);
	void ClosePage();
};


// Class PixUI.PxSubLayerWidget
// 0x0020 (0x0120 - 0x0100)
class UPxSubLayerWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PxSubLayerWidget");
		return pStaticClass;
	}

};


// Class PixUI.PxSubCtrlWidget
// 0x0010 (0x0130 - 0x0120)
class UPxSubCtrlWidget : public UPxSubLayerWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PxSubCtrlWidget");
		return pStaticClass;
	}

};


}

