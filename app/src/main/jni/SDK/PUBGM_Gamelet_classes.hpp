#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Gamelet.Gamelet
// 0x0020 (0x0048 - 0x0028)
class UGamelet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.Gamelet");
		return pStaticClass;
	}


	void SetScriptExternalLoadDir(const struct FString& ExternalLoadDir);
	void SetFont(const struct FString& FontName, const struct FString& FontPath);
	void SendMessageToApp(const struct FString& AppID, const struct FString& Msg);
	void RefreshUserdata(TMap<struct FString, struct FString> UserData);
	void OpenApp(const struct FString& AppID, const struct FString& OpenArgs);
	void Open(TEnumAsByte<EGameletEnvironment> Environment, TMap<struct FString, struct FString> UserData);
	int Initialize(class UGameletSettings* Settings);
	class UGameletSettings* GetGlobalSettings();
	class UGamelet* Get();
	int ExecOnSDKMessage(const struct FString& Msg);
	int ExecOnReportData(const struct FString& EventName, const struct FString& Data);
	int ExecOnRefreshUserdata();
	void Deinitialize();
	void CollectPixUILogOutput(EPXLogTypes PixUILogType, EPXLogLevels PixUILogLevel, const struct FString& logContent);
	void CloseApp(const struct FString& AppID);
	void Close();
};


// Class Gamelet.GameletEnvMgr
// 0x0070 (0x0098 - 0x0028)
class UGameletEnvMgr : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletEnvMgr");
		return pStaticClass;
	}


	int OnEnvToGameMessage(const struct FString& Msg);
	int OnEnvToEntryMessage(const struct FString& Msg);
	int OnEnvReportData(const struct FString& EventName, const struct FString& Data);
	int OnEnvRefreshUserdata();
	void OnEnvLoaded(const struct FString& URL, bool IsSuccess);
};


// Class Gamelet.GameletSettings
// 0x0050 (0x0078 - 0x0028)
class UGameletSettings : public UObject
{
public:
	struct FScriptDelegate                             OnSDKMessage;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnRefreshUserdata;                                        // 0x0038(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnViewCreated;                                            // 0x0048(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnViewAboutToDestroy;                                     // 0x0058(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnReportData;                                             // 0x0068(0x0010) (Edit, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletSettings");
		return pStaticClass;
	}


	bool IsValidSetting();
	class UGameletSettings* Get();
};


// Class Gamelet.GameletWindow
// 0x0098 (0x00C0 - 0x0028)
class UGameletWindow : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET
	class UPixUIViewPortWidget*                        Widget;                                                   // 0x0068(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0070(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletWindow");
		return pStaticClass;
	}


	void OnPxWidgetScriptStateInit();
	bool OnPxWidgetRequestOpen(const struct FString& URL, const struct FString& Name, const struct FString& Features, bool bReplace);
	void OnPxWidgetMessage(const struct FString& Msg);
	void OnPxWidgetLoaded(const struct FString& URL, bool bSuccess);
	void OnPxWidgetClose();
};


}

