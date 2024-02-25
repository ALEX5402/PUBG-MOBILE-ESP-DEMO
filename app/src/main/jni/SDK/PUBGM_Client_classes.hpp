#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Client.AppBaseConfig
// 0x0128 (0x0150 - 0x0028)
class UAppBaseConfig : public UObject
{
public:
	int                                                PUBLISH_REGION_ID;                                        // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     PUBLISH_AREA;                                             // 0x0030(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_GAME_ID;                                            // 0x0040(0x0010) (ZeroConstructor, Config)
	struct FString                                     GEMAppID;                                                 // 0x0050(0x0010) (ZeroConstructor, Config)
	uint32_t                                           TSSGameId;                                                // 0x0060(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	uint64_t                                           GameID;                                                   // 0x0068(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     GameKey;                                                  // 0x0070(0x0010) (ZeroConstructor, Config)
	uint64_t                                           GVoiceGameId;                                             // 0x0080(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     GVoiceGameKey;                                            // 0x0088(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_FACEBOOK;                                           // 0x0098(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_APPLE;                                              // 0x00A8(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_GOOGLE;                                             // 0x00B8(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_TWITTER;                                            // 0x00C8(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_WECHAT;                                             // 0x00D8(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_VK;                                                 // 0x00E8(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_LINE;                                               // 0x00F8(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_QQ;                                                 // 0x0108(0x0010) (ZeroConstructor, Config)
	struct FString                                     GUID_GAMEMASTER;                                          // 0x0118(0x0010) (ZeroConstructor, Config)
	struct FString                                     GEMCtrlURL;                                               // 0x0128(0x0010) (ZeroConstructor, Config)
	struct FString                                     TGPACtrlURL;                                              // 0x0138(0x0010) (ZeroConstructor, Config)
	int                                                SubsideFeatureLevel;                                      // 0x0148(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x014C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AppBaseConfig");
		return pStaticClass;
	}

};


// Class Client.AsyncLoadHelper
// 0x00B8 (0x00E0 - 0x0028)
class UAsyncLoadHelper : public UObject
{
public:
	TMap<struct FString, class UObject*>               PreloadObjectMap;                                         // 0x0028(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0078(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AsyncLoadHelper");
		return pStaticClass;
	}


	void SetMaxTaskNum(int Num);
	void RunNextTask();
	void OnLoadCallBack(const struct FSoftObjectPath& softObjPath);
	void ClearOneTask(const struct FString& ObjectPath);
	void ClearAllTask();
	void AddTask(const struct FString& ObjectPath, int LoadPriority);
};


// Class Client.AsyncLoadWidgetBlueprint
// 0x0058 (0x0080 - 0x0028)
class UAsyncLoadWidgetBlueprint : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    BeforeLoad;                                               // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AfterLoad;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancelled;                                              // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0058(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AsyncLoadWidgetBlueprint");
		return pStaticClass;
	}


	void Cancel();
	class UAsyncLoadWidgetBlueprint* AsyncLoadWidgetBlueprint(const struct FString& BlueprintPath, int Priority);
	void AfterLoadCallback(struct FSoftObjectPath* SoftObjectPath);
	void Activate();
};


// Class Client.AsyncTaskCDNDownloader
// 0x0070 (0x0098 - 0x0028)
class UAsyncTaskCDNDownloader : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
	struct FScriptMulticastDelegate                    onRequestHandler;                                         // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0068(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AsyncTaskCDNDownloader");
		return pStaticClass;
	}


	class UAsyncTaskCDNDownloader* DownloadCDNContent(const struct FString& URL, int loaderType, const struct FString& savedDir, bool breakpointContinualTransfer);
};


// Class Client.AsyncTaskDownloader
// 0x0070 (0x0098 - 0x0028)
class UAsyncTaskDownloader : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
	struct FScriptMulticastDelegate                    onRequestHandler;                                         // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0068(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AsyncTaskDownloader");
		return pStaticClass;
	}


	class UAsyncTaskDownloader* DownloadContent(const struct FString& URL, int loaderType, const struct FString& savedDir, bool breakpointContinualTransfer);
};


// Class Client.BattleScriptHelper
// 0x0000 (0x0028 - 0x0028)
class UBattleScriptHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattleScriptHelper");
		return pStaticClass;
	}


	uint32_t SyncNewBattlePlayer(class UBattleUtils* Utils, uint64_t UId, const struct FPlayerInfoData& Info);
	void SyncGameInfo(class UBattleUtils* Utils, const struct FBattleGameInfo& Info);
	void SyncGameExit(class UBattleUtils* Utils);
	void SyncBattlePlayerExit(class UBattleUtils* Utils, uint64_t UId, const struct FName& PlayerType, const struct FString& Reason);
	void ResponPlayerWeaponDIYData(class UBattleUtils* Utils, uint64_t PlayerUID, const struct FWeaponDIYData& InWeaponDIYData);
	void GenerateAIPlayerParams(class UBattleUtils* Utils, const struct FPlayerInfoData& Info);
};


// Class Client.BattlePlayer
// 0x0140 (0x0168 - 0x0028)
class UBattlePlayer : public UObject
{
public:
	uint64_t                                           UId;                                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FPlayerInfoData                             PlayerInfoData;                                           // 0x0030(0x00C8)
	struct FPlayerAvatarData                           PlayerAvatarData;                                         // 0x00F8(0x0018)
	TMap<int, struct FWeaponDIYData>                   WeaponDIYData;                                            // 0x0110(0x0050) (ZeroConstructor)
	class UBattleUtils*                                OwningBattleUtils;                                        // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattlePlayer");
		return pStaticClass;
	}


	struct FGameModePlayerParams ExtractGameModePlayerParams();
};


// Class Client.BattleAIPlayer
// 0x0000 (0x0168 - 0x0168)
class UBattleAIPlayer : public UBattlePlayer
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattleAIPlayer");
		return pStaticClass;
	}


	struct FGameModeAIPlayerParams ExtractGameModeAIPlayerParams();
};


// Class Client.BattleUtils
// 0x04D8 (0x0500 - 0x0028)
class UBattleUtils : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
	class UGameFrontendHUD*                            OwningFrontendHUD;                                        // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) MISSED OFFSET
	class AUAEGameMode*                                BattleGameMode;                                           // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UBattlePlayer*>                       BattlePlayerList;                                         // 0x00A8(0x0010) (ZeroConstructor)
	struct FBattleGameInfo                             CachedBattleGameInfo;                                     // 0x00B8(0x0038)
	struct FGameModeAIPlayerParams                     CachedAIPlayerParams;                                     // 0x00F0(0x03B0)
	struct FString                                     LuaFilePath;                                              // 0x04A0(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData02[0x50];                                      // 0x04B0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattleUtils");
		return pStaticClass;
	}


	uint32_t SyncNewBattlePlayer(uint64_t UId, const struct FPlayerInfoData& Info);
	void SyncGameInfo(const struct FBattleGameInfo& Info);
	void SyncGameExit();
	void SyncBattlePlayerExit(uint64_t UId, const struct FName& PlayerType, const struct FString& Reason);
	struct FGameModePlayerParams RetrievePlayerParams(const struct FPlayerID& PlayerID);
	struct FGameModeAIPlayerParams RetrieveAIPlayerParams(const struct FPlayerID& PlayerID);
	void ResponPlayerWeaponDIYData(uint64_t PlayerUID, const struct FWeaponDIYData& InWeaponDIYData);
	void RequestSomePlayersBattleData(TArray<uint64_t> PlayerUIDList, unsigned char DataType);
	void RequestPlayerWeaponDIYData(uint64_t PlayerUID, int WeaponSkinID, int PlanID);
	void RequestOnePlayersBattleData(uint64_t PlayerUID, unsigned char DataType);
	void RequestAllPlayersBattleData(unsigned char DataType);
	void OnPostLoadMapWithWorld(class UWorld* World);
	class UBattlePlayer* NewBattlePlayer();
	class UBattleAIPlayer* NewBattleAIPlayer();
	void HandleGameModeStateChanged(const struct FGameModeStateChangedParams& Params);
	class AUAEGameMode* GetBattleGameMode();
	void GenerateAIPlayerParams(const struct FPlayerInfoData& Info);
	class UBattlePlayer* FindPlayerByUID(uint64_t UId, const struct FName& PlayerType);
	class UBattlePlayer* FindPlayerByPlayerName(const struct FString& PlayerName, const struct FName& PlayerType);
	class UBattlePlayer* FindPlayerByPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType);
};


// Class Client.BattleWindowMgr
// 0x0000 (0x0028 - 0x0028)
class UBattleWindowMgr : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattleWindowMgr");
		return pStaticClass;
	}


	void ShowUI(class UObject* WorldContextObject, const struct FString& WindowName, class UObject* ObjectParam);
	void SetInstance(class UBattleWindowMgrLuaUtils* InInstance, class ULuaStateWrapper* InLuaStateWrapper);
	void HideUI(class UObject* WorldContextObject, const struct FString& WindowName);
	bool CheckWindowOpen(class UObject* WorldContextObject, const struct FString& WindowName);
};


// Class Client.BattleWindowMgrLuaUtils
// 0x0048 (0x0070 - 0x0028)
class UBattleWindowMgrLuaUtils : public UObject
{
public:
	TWeakObjectPtr<class ULuaStateWrapper>             LuaStateWrapper;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     LuaManagerName;                                           // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     ShowUI;                                                   // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     HideUI;                                                   // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     CheckWindowOpen;                                          // 0x0060(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattleWindowMgrLuaUtils");
		return pStaticClass;
	}

};


// Class Client.BugReporter
// 0x0078 (0x00A0 - 0x0028)
class UBugReporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BugReporter");
		return pStaticClass;
	}


	void SendScreenShot(const struct FString& errorReason, const struct FString& errorDescription, const struct FString& ImagePath, float X, float Y, float Z);
	void SendLog(const struct FString& errorReason, const struct FString& errorDescription, float X, float Y, float Z, bool pullAll, bool zipLogUpload);
	void ReadZipLog(const struct FString& Filename);
	TArray<unsigned char> CompressLog(bool pullAllLog);
};


// Class Client.BuildConfig
// 0x0030 (0x0058 - 0x0028)
class UBuildConfig : public UObject
{
public:
	struct FString                                     branch_name;                                              // 0x0028(0x0010) (ZeroConstructor, Config)
	struct FString                                     build_no;                                                 // 0x0038(0x0010) (ZeroConstructor, Config)
	struct FString                                     build_url;                                                // 0x0048(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BuildConfig");
		return pStaticClass;
	}

};


// Class Client.BusinessHelper
// 0x0000 (0x0028 - 0x0028)
class UBusinessHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BusinessHelper");
		return pStaticClass;
	}


	class UObject* UIGetResWithPath(const struct FString& DesManagerName);
	class ALuaClassObj* UIGetLuaManagerByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName);
	class ALuaClassObj* UIGetLuaManager(class UUAEUserWidget* pUIClass);
	void StopUIStat(const struct FString& UIName, bool bReport);
	float StopTimeWatch();
	void StartUIStat(const struct FString& UIName);
	void StartTimeWatch();
	void SetUIStatMaxClickTimes(int Times);
	void ReportUIStat(const struct FString& UIName, bool bGStatTime, bool bReport, float TotalTime);
	void RemoveKnownMissingPackageRefObjectByObj(class UObject* RefedObject);
	class UObject* LoadAssetFromPath(const struct FString& DesManagerName);
	bool IsSplitMiniPakVersion();
	bool IsSplitMapPakVersion();
	bool IsFit();
	bool IsClassOf(class UObject* Object, class UClass* Class);
	bool IsChildOf(class UClass* ChildClass, class UClass* Class);
	bool IsCEVersion();
	bool IsAppFromStore();
	bool HasDownloadedBasePak();
	class UUAEUserWidget* GetWidgetByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName, const struct FString& InWidgtName);
	int GetTSSGameId();
	float GetTime();
	struct FString GetSplitMapConfigInfo();
	int GetPublishRegionID();
	struct FString GetPublishRegion();
	struct FString GetPackChannel();
	struct FString GetOpenId();
	struct FString GetObjectClassName(class UObject* Object);
	struct FString GetMobileBasePath(const struct FString& InPath);
	class ALuaClassObj* GetLuaManagerByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName);
	struct FString GetITopGameId();
	struct FString GetInGameLocalConnectURL();
	int GetIMSDKEnv();
	uint64_t GetGVoiceGameId();
	int GetDeviceQualityLevel();
	int GetDeviceOrientation();
	class UUAEDataTable* GetDataTable(const struct FString& tableName);
	int GetCurrentNetworkState();
	class UWidget* GetChildByName(class UUserWidget* pParent, const struct FString& Name);
	struct FString GetBuildURL();
	struct FString GetBuildNo();
	struct FString GetBranchName();
	struct FString GetBase64Key();
	struct FString GetAppVersion();
	int GetAOSSHOPID();
	struct FString GetAOSSHOP();
	void ClearDisplayLookupTable();
	void BroadCastMSG(class UFrontendHUD* FrontendHUD, const struct FString& DesManagerName, const struct FString& Msg);
	void AddKnownMissingPackage(const struct FString& PackageName, class UObject* BindObj, bool bReplace);
};


// Class Client.IntlHelper
// 0x0000 (0x0028 - 0x0028)
class UIntlHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.IntlHelper");
		return pStaticClass;
	}


	void UpdateXGPushNightTag(bool bInit);
	void UpdateXGPushDayTag(bool bInit);
	void UpdateVoiceUrl(const struct FString& regionVoiceUrl);
	void UnInitTweenMaker();
	struct FString TimeFormatString(const struct FString& Format, int hours, int Mins, int secs);
	void SaveXGTags(const struct FString& Language, const struct FString& timezone, const struct FString& Region);
	void OnSwitchLanguage();
	void OnChoosingZone(int ZoneID, const struct FString& AddrIP, const struct FString& regionVoiceUrl);
	bool IsRemoteNotificationsEnabled();
	bool IsHelpshiftEnable4CurrentChannel();
	bool IsHelpshiftEnable();
	void InitTweenMaker();
	void HelpshiftUploadLog();
	void HelpshiftShowSingleFAQWithInfo(const struct FString& publishID, const struct FString& PlayerName, const struct FString& PlayerLevel, const struct FString& PlayerGold, int PlayerRecharge, int PlayerRegisterTime, const struct FString& ExtraTags);
	void HelpshiftShowFAQsWithInfo(const struct FString& PlayerName, const struct FString& PlayerLevel, const struct FString& PlayerGold, int PlayerRecharge, int PlayerRegisterTime, const struct FString& ExtraTags);
	void HelpshiftShowFAQs();
	void HelpshiftShowConversionWithInfo(const struct FString& Name, const struct FString& Level, const struct FString& Gold);
	void HelpshiftShowConversion();
	void HelpshiftRequestUnreadMessagesCount();
	int HelpshiftGetUnreadMessgesCount();
	void HelpshiftClearUnreadMessgesCount();
	struct FString GetSavedXGTimezoneTag();
	struct FString GetSavedXGRegionTag();
	struct FString GetSavedXGPushNightTag();
	struct FString GetSavedXGPushDayTag();
	struct FString GetSavedXGLanguageTag();
	struct FString GetPlayerUCLevel();
	int GetLocalTimezone();
	struct FString GetLocalizeStringWithString(const struct FString& sourceString, int numStringIndex, const struct FString& string1, const struct FString& string2, const struct FString& string3, const struct FString& string4);
	struct FString GetLocalizeStringWithNum(int ID, int numStringIndex, const struct FString& string1, const struct FString& string2, const struct FString& string3, const struct FString& string4);
	struct FString GetLocalizeStrByStr(const struct FString& Source, const struct FString& string1, const struct FString& string2, const struct FString& string3, const struct FString& string4);
	struct FString GetLocalizeStrByID(int ID, const struct FString& string1, const struct FString& string2, const struct FString& string3, const struct FString& string4);
	struct FString GetLocalizationStringWithID(int ID);
	struct FString GetLocalizationString(const struct FString& Key);
	struct FString GetLocalizationBattleStringWithID(int ID);
	struct FString GetHistoryErrorCode();
	struct FString GetGameMasterVID();
	int GetCurrentZoneID();
	struct FString FormatLocalizeStrByStr(const struct FString& Source, TArray<struct FString> stringArr);
	void DirectToNotificationSetup();
	void ClearAdjustDeepLink();
	void AdjustParaAnalysis();
	void AddErrorCodeToHistory(const struct FString& InErrorCode);
};


// Class Client.TestHUD
// 0x0000 (0x03F0 - 0x03F0)
class ATestHUD : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.TestHUD");
		return pStaticClass;
	}


	void TestFunctionNOParam();
	float TestFunctionBP_LUA();
	float TestFunctionBP();
	float Function_Lua();
	float Function_CPlus_Call();
	float Function_CPlus();
	float Function_BP_CPP();
	float Function_BP_Call_LUA();
	float Function_BP_Call_CPP();
	float Function_BP_Call_CPlus();
	float Function_BP_Call();
	float Function_BP();
};


// Class Client.CDNUpdate
// 0x0340 (0x0368 - 0x0028)
class UCDNUpdate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2A8];                                     // 0x00C0(0x02A8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.CDNUpdate");
		return pStaticClass;
	}


	void StartUpdateApp();
	void StartAppUpdate(bool StartGrayUpdate);
	void OnRequestProgress(const struct FCDNDownloaderInfo& Info);
	void OnRequestComplete(const struct FCDNDownloaderInfo& Info);
	bool IsUpdating();
	bool IsGrayUpdate();
	int GetCurStage(float* percent, int* GetCurVal, int* GetMaxVal);
	void FinishUpdate();
	void ContinueUpdate();
	void CancelUpdate();
};


// Class Client.ClientNetInterface
// 0x0000 (0x0028 - 0x0028)
class UClientNetInterface : public UNetInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ClientNetInterface");
		return pStaticClass;
	}

};


// Class Client.CommonItemBase
// 0x0000 (0x02D0 - 0x02D0)
class UCommonItemBase : public ULuaUserWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.CommonItemBase");
		return pStaticClass;
	}

};


// Class Client.CompressTextureHelper
// 0x0000 (0x0028 - 0x0028)
class UCompressTextureHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.CompressTextureHelper");
		return pStaticClass;
	}


	class UTexture2D* TestGetTexture2DFromDisk_KTX2(const struct FString& PathName);
};


// Class Client.DragDropTextBox
// 0x0000 (0x0CA0 - 0x0CA0)
class UDragDropTextBox : public UEditableTextBox
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.DragDropTextBox");
		return pStaticClass;
	}

};


// Class Client.GameBackendUtils
// 0x0000 (0x0030 - 0x0030)
class UGameBackendUtils : public UBackendUtils
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameBackendUtils");
		return pStaticClass;
	}


	class UUAETableManager* GetTableManager();
};


// Class Client.GameBackendHUD
// 0x0000 (0x00B0 - 0x00B0)
class UGameBackendHUD : public UBackendHUD
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameBackendHUD");
		return pStaticClass;
	}


	class UGameBackendUtils* GetUtils();
	class UGameBackendHUD* GetInstance();
	class UGameFrontendHUD* GetGameFrontendHUDByGameInstance(class UGameInstance* GameInstance);
	class UGameFrontendHUD* GetFirstGameFrontendHUD(class UObject* WorldContextObject);
};


// Class Client.GameBusinessManager
// 0x0078 (0x0170 - 0x00F8)
class UGameBusinessManager : public ULogicManagerBase
{
public:
	TArray<struct FGameWidgetConfig>                   WidgetConfigList;                                         // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0108(0x0050) MISSED OFFSET
	class AUAEPlayerController*                        OwningController;                                         // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0160(0x0008) MISSED OFFSET
	class ALuaClassObj*                                LuaObject;                                                // 0x0168(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameBusinessManager");
		return pStaticClass;
	}


	class UUAEUserWidget* GetWidget(int Index);
	class ALuaClassObj* GetLuaObject();
	class UGameFrontendHUD* GetGameFrontendHUD();
};


// Class Client.GameFrontendHUD
// 0x06C8 (0x0898 - 0x01D0)
class UGameFrontendHUD : public UFrontendHUD
{
public:
	struct FScriptMulticastDelegate                    OnHandleWebviewActionDelegate;                            // 0x01D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetTicketNotifyDelegate;                                // 0x01E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHandleServerListDownload;                               // 0x01F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUIStatReport;                                           // 0x0200(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReportClientTool;                                       // 0x0210(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     CSVTableRelativeDir;                                      // 0x0220(0x0010) (ZeroConstructor, Config)
	TMap<struct FName, struct FString>                 GameStatusMap;                                            // 0x0230(0x0050) (ZeroConstructor)
	bool                                               EnableTickLog;                                            // 0x0280(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0281(0x0001) MISSED OFFSET
	bool                                               bEnableReportMemory;                                      // 0x0282(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1D];                                      // 0x0283(0x001D) MISSED OFFSET
	class UGVoiceInterface*                            GVoice;                                                   // 0x02A0(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsNewGVoiceCreated;                                       // 0x02A8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               DisableGVoice;                                            // 0x02A9(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x02AA(0x0006) MISSED OFFSET
	class UBugReporter*                                GameBugReporter;                                          // 0x02B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGMLogShare*                                 LogShare;                                                 // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaxUpdateRetryTimes;                                      // 0x02C0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x02C4(0x000C) MISSED OFFSET
	class UGDolphinUpdater*                            GDolphin;                                                 // 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTranslator*                                 Translator;                                               // 0x02D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UHttpWrapper*                                HttpWrapper;                                              // 0x02E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGCPufferDownloader*                         GPuffer;                                                  // 0x02E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULaggingReporter*                            LaggingReporter;                                          // 0x02F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET
	class UAsyncTaskDownloader*                        DownloadTask;                                             // 0x0300(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x44];                                      // 0x0308(0x0044) MISSED OFFSET
	bool                                               bUseDolphinUpdateFirst;                                   // 0x034C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableUseDolphinUpdate;                                  // 0x034D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableUseCDNUpdate;                                      // 0x034E(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseDolphinUpdateAfterCDNFailed;                          // 0x034F(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseCDNUpdateAfterDolphinFailed;                          // 0x0350(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableEditorPufferDownload;                              // 0x0351(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsWaitingUpdateStateData;                                // 0x0352(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsingDolphinUpdate;                                     // 0x0353(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsingCDNUpdate;                                         // 0x0354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x13];                                      // 0x0355(0x0013) MISSED OFFSET
	class UCDNUpdate*                                  CDNUpdater;                                               // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ODPaksPoolSize;                                           // 0x0370(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ODPaksPoolSizeLowend;                                     // 0x0374(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ODPaksPoolSizeLowendThreshold;                            // 0x0378(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               ODPaksEnable;                                             // 0x037C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData07[0x33];                                      // 0x037D(0x0033) MISSED OFFSET
	struct FName                                       UnrealNetworkStatus;                                      // 0x03B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x18];                                      // 0x03B8(0x0018) MISSED OFFSET
	float                                              UnrealNetworkConnectingTimer;                             // 0x03D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1C];                                      // 0x03D4(0x001C) MISSED OFFSET
	float                                              UnrealNetworkConnectingTime;                              // 0x03F0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseDynamicCreateLuaManager;                              // 0x03F4(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	TArray<struct FString>                             PersistentLuaManager;                                     // 0x03F8(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0408(0x0004) MISSED OFFSET
	bool                                               bPatchReInitSequence;                                     // 0x040C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	class ULuaStateWrapper*                            LuaStateWrapper;                                          // 0x0410(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULuaEventBridge*                             LuaEventBridgeInstace;                                    // 0x0418(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBattleWindowMgrLuaUtils*                    LuaBattleWindowMgr;                                       // 0x0420(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULuaBlueprintMgr*                            LuaBlueprintSysMgr;                                       // 0x0428(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x8];                                       // 0x0430(0x0008) MISSED OFFSET
	struct FString                                     ScriptBPRelativeDir;                                      // 0x0438(0x0010) (ZeroConstructor, Config)
	struct FString                                     ScriptRelativeDir;                                        // 0x0448(0x0010) (ZeroConstructor, Config)
	struct FString                                     InGameLuaDir;                                             // 0x0458(0x0010) (ZeroConstructor, Config)
	struct FString                                     PreloadLuaFileRelativePath;                               // 0x0468(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             LuaDirList;                                               // 0x0478(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             NoGCPackage;                                              // 0x0488(0x0010) (ZeroConstructor, Config)
	float                                              LuaTickTime;                                              // 0x0498(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCallLuaTick;                                             // 0x049C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoLoginEnable;                                         // 0x049D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData14[0x22];                                      // 0x049E(0x0022) MISSED OFFSET
	int                                                PingFirstReportIntervalSecond;                            // 0x04C0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PingReportIntervalSecond;                                 // 0x04C4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                LossSyncIntervalSecond;                                   // 0x04C8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PlayerStatusReportIntervalSecond;                         // 0x04CC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                vmInstrumentOptimization;                                 // 0x04D0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	class UTssManager*                                 TssMgr;                                                   // 0x04D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x28];                                      // 0x04E0(0x0028) MISSED OFFSET
	float                                              PingReportInterval;                                       // 0x0508(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData17[0x114];                                     // 0x050C(0x0114) MISSED OFFSET
	int64_t                                            DeactivatedThreshold;                                     // 0x0620(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	int64_t                                            TimePassThreshold;                                        // 0x0628(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ImageDownloadClearDayCount;                               // 0x0630(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x0634(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    UIStackChangeDelegate;                                    // 0x0638(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIStackRecoverDelegate;                                   // 0x0648(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFRefreshAdaptationUIEvent;                              // 0x0658(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFRefreshAdaptationExUIEvent;                            // 0x0668(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData19[0x78];                                      // 0x0678(0x0078) MISSED OFFSET
	class UImageDownloader*                            ImageDownloaderInGame;                                    // 0x06F0(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                FpsForWindowClient;                                       // 0x06F8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x06FC(0x0004) MISSED OFFSET
	class UUDPPingCollector*                           UDPPingCollector;                                         // 0x0700(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UIElemLayoutJsonConfigSwitch;                             // 0x0708(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               NationAllSwitch;                                          // 0x0709(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               NationBattleSwitch;                                       // 0x070A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               NationRankSwitch;                                         // 0x070B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelfieSwitch;                                             // 0x070C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ReportBugSwitch;                                          // 0x070D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               FirstVoicePopupSwitch;                                    // 0x070E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               GDPRForbidVoiceSwitch;                                    // 0x070F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               GDPRSettingSwitch;                                        // 0x0710(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0711(0x0003) MISSED OFFSET
	int                                                GDPRUserType;                                             // 0x0714(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldShowAdaptTipInLobby;                               // 0x0718(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x0719(0x0003) MISSED OFFSET
	float                                              fLaggingFPSDiffThreshold;                                 // 0x071C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fLaggingFPSDiffThresholdMin;                              // 0x0720(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fLaggingFPSDiffThresholdMax;                              // 0x0724(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fLaggingFrameTimeThreshold;                               // 0x0728(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fLaggingFrameTimeThresholdMin;                            // 0x072C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fLaggingFrameTimeThresholdMax;                            // 0x0730(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fFPSReportInterval;                                       // 0x0734(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData23[0x10];                                      // 0x0738(0x0010) MISSED OFFSET
	bool                                               bUnLoadNoGcPackage;                                       // 0x0748(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x0749(0x0007) MISSED OFFSET
	TArray<class UPackage*>                            NoGcPackages;                                             // 0x0750(0x0010) (ZeroConstructor)
	bool                                               bFlushAsyncLoadingBeforeGC;                               // 0x0760(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnablePandora;                                           // 0x0761(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData25[0x1];                                       // 0x0762(0x0001) MISSED OFFSET
	bool                                               bEnableJMLog;                                             // 0x0763(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData26[0xB4];                                      // 0x0764(0x00B4) MISSED OFFSET
	bool                                               bEnableH5Cache;                                           // 0x0818(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCheckWorldNameForLoadConfig;                             // 0x0819(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData27[0x6];                                       // 0x081A(0x0006) MISSED OFFSET
	class UColorBlindnessMgr*                          ColorBlindnessMgrInstace;                                 // 0x0820(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNativeHUDTickContainer>             NativeHUDTickList;                                        // 0x0828(0x0010) (ZeroConstructor)
	bool                                               IsNativeHUDTickLock;                                      // 0x0838(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsShutDown;                                               // 0x0839(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0x2];                                       // 0x083A(0x0002) MISSED OFFSET
	int                                                NativeHUDTickIndex;                                       // 0x083C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UAsyncLoadHelper*                            AsyncLoadHelper;                                          // 0x0840(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BattleUtilsClassName;                                     // 0x0848(0x0010) (ZeroConstructor, Config)
	class UBattleUtils*                                BattleUtils;                                              // 0x0858(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x8];                                       // 0x0860(0x0008) MISSED OFFSET
	struct FScriptDelegate                             OnImagePickDetectEvent;                                   // 0x0868(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnPermissionResultEvent;                                  // 0x0878(0x0010) (ZeroConstructor, InstancedReference)
	struct FString                                     CurrentMapName;                                           // 0x0888(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameFrontendHUD");
		return pStaticClass;
	}


	void VNGPostPersonalInfo(const struct FString& OpenID, const struct FString& Name, const struct FString& passportId, const struct FString& email, const struct FString& phone, const struct FString& address);
	void UnRegisterUIShowHideEventDelegate(const struct FString& Source);
	void TimeStatisticStop(int Type, const struct FString& Name);
	void TimeStatisticStart(int Type);
	void TickUdpCollector(float DeltaTime);
	void StatisVisibilityWidget(class UWidget* Widget);
	void StatisLoadedTexture(class UTexture* Texture);
	bool StartGrayUpdate();
	void StartDolphinUpdateAfterCDNUpdateFailed();
	void StartCDNUpdateAfterDolphinUpdateFailed();
	void ShutdownUnrealNetwork();
	void SetShouldShowAdaptTipInLobby(bool bShoudShow);
	void SetGameSubMode(const struct FString& SubMode);
	void SetGameStatusMap(TMap<struct FName, struct FString> InGameStatusMap);
	void SetClientEnterBattleStage(const struct FString& InStageStr);
	void SetAccountByWebLogin(int Channel, const struct FString& OpenID, const struct FString& userId, const struct FString& TokenID, int ExpireTime);
	void RetryDownload();
	void RetryCDNDownload();
	void RequestPhotoPermission(const struct FScriptDelegate& PermissionResultEvent);
	void RequestCameraPermission(const struct FScriptDelegate& PermissionResultEvent);
	void ReportNetContinuousSaturate();
	void ReleaseBattleUtils();
	void RegisterUserSettingsDelegate(const struct FScriptDelegate& Delegate);
	void RegisterUIShowHideEventDelegate(const struct FString& Source, const struct FScriptDelegate& Delegate);
	void PickImageDetectQRCode(const struct FScriptDelegate& ImagePickDetectEvent);
	void OnWebviewNotify(const struct FWebviewInfoWrapper& webviewinfo);
	void OnWebviewActionNotify(const struct FString& URL);
	void OnUAAssistantEvent(const struct FUAAssistantInfoWrapper& UAAssistentInfo);
	void OnSDKCallbackEvent(const struct FSDKCallbackInfoWrapper& sdkCallbackInfo);
	void OnRequestComplete(const struct FCDNDownloaderInfo& Info);
	void OnRefreshAccountInfo(bool Result, int InChannel, const struct FString& InOpenId);
	void OnQuickLoginNotify(const struct FWakeupInfoWrapper& wakeupinfo);
	void OnPlatformFriendNotify(const struct FPlatformFriendInfoMap& PlatformFriendInfoMap);
	void OnNotUpdateFinished();
	void OnLoginFlowNotify(int _Flow, int _Param, const struct FString& ExtraData);
	void OnHttpImgResponse(class UTexture2D* Texture, class UImageDownloader* downloader);
	void OnGroupNotify(const struct FGroupInfoWrapper& groupInfo);
	void OnGetTicketNotify(const struct FString& Ticket);
	void OnGetShortUrlNotify(int Ret, const struct FString& ShortUrl);
	void OnGetCountryNoNotify(int country);
	void OnGenQRImgNotify(int Ret, int Size, const struct FString& imgPath);
	void OnGCloudNetStateChangeNotify(int State, int EventParam1, int EventParam2, int EventParam3);
	void OnGameMasterEvent(const struct FString& EventName, int Ret);
	void OnCheckUpdateStateFinished(const struct FDownloaderInfo& Info);
	void OnAreaChanged(const struct FString& InArea);
	void NotifyLoadingUIOperation(int OperationType);
	void MakeToSuppotAdaptation(class UPanelSlot* PanelSlot);
	void LuaDoString(const struct FString& LuaString);
	bool IsWindowOB();
	bool IsInstallPlatform(const struct FString& PlatForm);
	bool IsCEHideLobbyUI();
	bool HasAnyNetMsgToHandle();
	bool GetWidgetRenderCanChange();
	class USaveGame* GetUserSettings();
	class UGDolphinUpdater* GetUpdater();
	class UTranslator* GetTranslator();
	bool GetShouldShowAdaptTipInLobby();
	class USettingSubsystem* GetSettingSubsystem();
	class UGCPufferDownloader* GetPufferDownloader();
	struct FString GetPlayerStatusReportInfo();
	struct FString GetPingReportInfo();
	int GetPhotoPermission();
	struct FString GetPacketLossReportInfo();
	class ULuaStateWrapper* GetLuaStateWrapper();
	class ULuaEventBridge* GetLuaEventBridge();
	class ULuaBlueprintMgr* GetLuaBlueprintSysMgr();
	class UHttpWrapper* GetHttpWrapper();
	class UGVoiceInterface* GetGVoiceInterface();
	struct FString GetGameSubMode();
	class AGameStateBase* GetGameState();
	struct FString GetFPSReportInfo();
	class UEffectSettingMgr* GetEffectSettingMgr();
	int GetDetailNetInfoFromGCloud();
	class UColorBlindnessMgr* GetColorBlindnessMgr();
	class UObject* GetClientNetObj();
	struct FString GetClientEnterBattleStage();
	int GetCameraPermission();
	class UBugReporter* GetBugReporter();
	class UBattleUtils* GetBattleUtils();
	struct FString GetBattleIDHexStr();
	int GetAutoRunModID();
	class UAsyncLoadHelper* GetAsyncLoadHelper();
	void FinishModifyUserSettings();
	void EnableFPSAndMemoryLog(bool bEnable);
	void DispatchLongTimeNoOperation(int TimeOutCounter);
	void DispatchConfirmMisKill(const struct FString& KillerName);
	class UTexture2D* CreateQRCodeTexture(const struct FString& Text);
	void CreateBattleUtils();
	void CallGlobalScriptFunction(const struct FString& InFunctionName);
	void BeginModifyUserSettings();
	void BattleUtilsGameEnd();
	void AfterLoadedEditorLogin();
	void AddAdaptationWidgetDelegateEx(class UPanelSlot* PanelSlot);
	void AddAdaptationWidgetDelegate(class UPanelSlot* PanelSlot);
};


// Class Client.GameFrontendUtils
// 0x0000 (0x0398 - 0x0398)
class UGameFrontendUtils : public UFrontendUtils
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameFrontendUtils");
		return pStaticClass;
	}

};


// Class Client.GameJoyInterface
// 0x0020 (0x0048 - 0x0028)
class UGameJoyInterface : public UObject
{
public:
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameJoyInterface");
		return pStaticClass;
	}


	void ShareVideo(int Channel);
	void SetGameFrontendHUD(class UGameFrontendHUD* InHUD);
	void OnVideoShare(const struct FString& Msg);
	void OnShowVideoPlayer(int IsShow);
	void OnRecordingStart(int Status);
	void OnRecordingEnd(int64_t Duration);
	void OnManualRecordingStart(int Status);
	void OnCheckSDKPermission(bool IsSuccess);
	void OnCheckSDKFeature(int sdkFeatureInt);
	bool IsSDKFeatureSupport();
	class UGameJoyInterface* GetInstance();
};


// Class Client.GDolphinUpdater
// 0x02E0 (0x0308 - 0x0028)
class UGDolphinUpdater : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET
	TMap<struct FString, struct FString>               pakHashList;                                              // 0x0068(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xC8];                                      // 0x00B8(0x00C8) MISSED OFFSET
	bool                                               AllowIOSBGDownload;                                       // 0x0180(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               AllowIOSBGDownloadPush;                                   // 0x0181(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DisableJPKRBGDownloadNightPush;                           // 0x0182(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0183(0x0001) MISSED OFFSET
	int                                                DisableJPKRBGDownloadNightPushAfterHour;                  // 0x0184(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                DisableJPKRBGDownloadNightPushBeforeHour;                 // 0x0188(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                IOSBGDownloadPushDelaySeconds;                            // 0x018C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableRandomBackupURL;                                    // 0x0190(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnablePufferUpdate;                                       // 0x0191(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x16];                                      // 0x0192(0x0016) MISSED OFFSET
	struct FString                                     UpdateInfoPath;                                           // 0x01A8(0x0010) (ZeroConstructor, Config)
	bool                                               OpenDebugLog;                                             // 0x01B8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x14F];                                     // 0x01B9(0x014F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GDolphinUpdater");
		return pStaticClass;
	}


	void StartAppUpdate();
	void SetEnableCDNGetVersion(bool Enable);
	void OnUpdateError(int curVersionStage, int ErrorCode);
	void OnDolphinBGDownloadDone();
	void OnAreaChanged(const struct FString& InArea);
	bool IsUpdating();
	bool IsInstallInApp();
	bool IsGrayUpdate();
	bool IsExamine();
	void Install();
	int GetTotalValue();
	int GetCurValue();
	int GetCurStage(float* percent, int* GetCurVal, int* GetMaxVal);
	float GetCurPercent();
	uint32_t GetChannelIDWithHUD(class UGameFrontendHUD* InGameFrontendHUD);
	uint32_t GetChannelID();
	void FinishUpdate();
	void FinishPufferUpdate();
	void EnableIOSBGDownload4G(bool bEnableCellularAccess);
	bool EnableCDNGetVersion();
	void ContinueUpdate();
	void CancelUpdate();
	void CancelAppUpdate();
};


// Class Client.IMSDKNotice
// 0x0070 (0x0098 - 0x0028)
class UIMSDKNotice : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.IMSDKNotice");
		return pStaticClass;
	}


	TArray<struct FIMSDKNoticeInfo> GetNotice(const struct FString& Scene);
	class UIMSDKNotice* GetInstance();
	void ClearNotice();
};


// Class Client.AvatarItemDownloadPuffer
// 0x0000 (0x0030 - 0x0030)
class UAvatarItemDownloadPuffer : public UAvatarItemDownload
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AvatarItemDownloadPuffer");
		return pStaticClass;
	}


	void StartDownloadItem(uint32_t ItemID, uint32_t Priority, const struct FScriptDelegate& OnItemDownloadDelegate);
	void StartBatchDownloadItem(TArray<uint32_t> ItemIDs, uint32_t Priority, const struct FScriptDelegate& OnBatchItemDownloadDelegate);
};


// Class Client.GCPufferDownloader
// 0x0418 (0x0440 - 0x0028)
class UGCPufferDownloader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2C8];                                     // 0x0028(0x02C8) MISSED OFFSET
	bool                                               Disable;                                                  // 0x02F0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x97];                                      // 0x02F1(0x0097) MISSED OFFSET
	struct FString                                     DownloadDir;                                              // 0x0388(0x0010) (ZeroConstructor, Config)
	struct FString                                     PufferTmpDir;                                             // 0x0398(0x0010) (ZeroConstructor, Config)
	uint32_t                                           CleanFlagVer;                                             // 0x03A8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	TArray<struct FString>                             CleanFileNamePattern;                                     // 0x03B0(0x0010) (ZeroConstructor, Config)
	bool                                               PreFetchPakEnable;                                        // 0x03C0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               PreFetchFileClearEnable;                                  // 0x03C1(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               PreFetchConvertEnable;                                    // 0x03C2(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x03C3(0x0005) MISSED OFFSET
	TArray<struct FString>                             PreFetchPakNames;                                         // 0x03C8(0x0010) (ZeroConstructor, Config)
	uint32_t                                           PreFetchReserveredDiskSpace;                              // 0x03D8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               PreFetchODPak_Enable;                                     // 0x03DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	int                                                PreFetchODPaks_MaxNum;                                    // 0x03E0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PreFetchODPaks_BatchSize;                                 // 0x03E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PreFetchODPaks_FetchedNum;                                // 0x03E8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PreFetchODPaks_FetchedIndex;                              // 0x03EC(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             PreFetchODPaks_Filenames;                                 // 0x03F0(0x0010) (ZeroConstructor, Config)
	bool                                               AllowIOSBGDownload;                                       // 0x0400(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               AllowIOSBGDownloadPush;                                   // 0x0401(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DisableJPKRBGDownloadNightPush;                           // 0x0402(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0403(0x0001) MISSED OFFSET
	int                                                DisableJPKRBGDownloadNightPushAfterHour;                  // 0x0404(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                DisableJPKRBGDownloadNightPushBeforeHour;                 // 0x0408(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                IOSBGDownloadPushDelaySeconds;                            // 0x040C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DisableBGDownloadNotification;                            // 0x0410(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	float                                              PreFetchODPaks_StartTime;                                 // 0x0414(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PreFetchODPaks_ConfigName;                                // 0x0418(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData07[0x18];                                      // 0x0428(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GCPufferDownloader");
		return pStaticClass;
	}


	bool StopTask(uint64_t TaskId);
	int StopMergeBinDiffPak(int outterTaskID);
	bool StopCheckDownloadFileFraming(int outterTaskID);
	void StopBGDownloadNotification();
	bool StopAllTask();
	void StartDownloadItem(uint32_t ItemID, uint32_t Priority, const struct FScriptDelegate& downloadDelegate);
	void StartBGDownloadNotification(uint64_t InDownloadedSize);
	void StartBatchDownloadItem(TArray<uint32_t> ItemIDs, uint32_t Priority, const struct FScriptDelegate& OnBatchItemDownloadDelegate);
	void SetTempProductIdBase(int ProductIdRaw);
	void SetTempProductId(const struct FString& ProductIdRaw);
	void SetPrefetchConfig(bool pakEnable, bool fileClearEnable, bool convertEnable, int reserveredDiskSpace, const struct FString& FileList, int InPreFetchODPaksMaxNum, int InPreFetchODPaksBatchSize);
	void SetIOSBGDownloadAttribute(bool bEnableCellularAccess, bool bEnableResumeData, int nMinFileSize, int nMaxTasks);
	bool SetImmDLMaxSpeed(uint64_t MaxSpeed);
	void SetBattleDownloadSwitch(bool Enable);
	int ReturnSplitMiniPakFilelist_LuaState();
	int ReturnLocalFiles_LuaState();
	uint64_t RequestFile(const struct FString& FilePath, bool ForceUpdate);
	bool RemountPakFiles();
	struct FString ReadFile(const struct FString& Filename);
	bool PreFetchPakFiles();
	int PreFetchODPakFilesUpdate();
	bool PreFetchODPakFilesPreProcess(bool Start);
	bool PreFetchODPakFilesPostProcess(int ErrorCode);
	bool PreFetchODPakFiles(bool Start);
	void OnItemDownloadedInFighting(const struct FString& PackHash, const struct FString& ErrorCode);
	void OnHashGenerateFinished(int outterTaskID, const struct FString& hashCode);
	int MoveFileTo(const struct FString& Filename, const struct FString& from, const struct FString& to);
	int MoveFile(const struct FString& from, const struct FString& to);
	int MergeBinDiffPak(int outterTaskID, const struct FString& PakFilenameOld, const struct FString& PakFilenameDiff, const struct FString& PakFilenameNew, bool fast);
	bool IsODPaks(const struct FString& FilePath);
	bool IsODFileExists(const struct FString& Path);
	bool IsInitSuccess();
	bool IsFileReady(const struct FString& FilePath);
	bool IsFileExist(const struct FString& Filename, const struct FString& extension);
	bool InitializeODPaks();
	struct FString GetTempWorkPath();
	void GetProductIDBase(TArray<int>* ProductIDs);
	void GetProductID(TArray<int>* ProductIDs);
	int GetODPakNum();
	struct FString GetODPakName(const struct FString& Path);
	uint32_t GetInitErrcode();
	uint64_t GetFileSizeCompressed(const struct FString& FilePath);
	float GetFileSize(const struct FString& Filename);
	struct FString GetDownloadPath();
	float GetCurrentSpeed();
	int GetBatchODPaksDownloadList_LuaState();
	void EnableUseOldInterface(bool Enable);
	bool DeleteFileEvenIfUnfinished(const struct FString& FilePath);
	bool DeleteFile(const struct FString& fullPath);
	bool ConvertPreFetchFiles();
	struct FString ConvertItemIdToPakName(uint32_t ItemID);
	bool ClearUselessODPaks();
	bool ClearPreFetchODPaksFiles();
	bool ClearPreFetchFiles();
	bool CheckDownloadFileFraming(int outterTaskID, const struct FString& Filename, int chunkSize);
};


// Class Client.GMLogShare
// 0x0008 (0x0030 - 0x0028)
class UGMLogShare : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GMLogShare");
		return pStaticClass;
	}


	void ShareLogFile();
	void Init();
};


// Class Client.GVoiceInterface
// 0x0480 (0x04A8 - 0x0028)
class UGVoiceInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	int                                                lbsRoomMemberID;                                          // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0034(0x001C) MISSED OFFSET
	struct FScriptDelegate                             CheckTempLbsRoomOnJoinRoom;                               // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             CheckTempLbsRoomOnQuitRoom;                               // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnSTTReportCallback;                                      // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnRSTSCallback;                                           // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnRSTSSpeechToTextCallback;                               // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET
	struct FString                                     ServerInfo;                                               // 0x00B0(0x0010) (ZeroConstructor, Config)
	uint32_t                                           openGvoiceLog;                                            // 0x00C0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           MicVolumeMUFactor;                                        // 0x00C4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           SpeekerVolumeMUFactor;                                    // 0x00C8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                RoomOperationTimeout;                                     // 0x00CC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x90];                                      // 0x00D8(0x0090) MISSED OFFSET
	struct FScriptDelegate                             OpenMicFail;                                              // 0x0168(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OpenMicSuccess;                                           // 0x0178(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             CloseMicFail;                                             // 0x0188(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             CloseMicSuccess;                                          // 0x0198(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OpenSpeakerFail;                                          // 0x01A8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OpenSpeakerSuccess;                                       // 0x01B8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             CloseSpeakerFail;                                         // 0x01C8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             CloseSpeakerSuccess;                                      // 0x01D8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             JoinRoomFail;                                             // 0x01E8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             JoinRoomNotify;                                           // 0x01F8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             QuitRoomNotify;                                           // 0x0208(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             JoinLbsRoomNotify;                                        // 0x0218(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             QuitLbsRoomNotify;                                        // 0x0228(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             RoomStatusUpdatedNotify;                                  // 0x0238(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             SetAppInfoSuccess;                                        // 0x0248(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             SetAppInfoFail;                                           // 0x0258(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             GetReconnectInfo;                                         // 0x0268(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             ImSpeakingNotify;                                         // 0x0278(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             TestMicFail;                                              // 0x0288(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             TestMicSuccess;                                           // 0x0298(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             QuitRoomFail;                                             // 0x02A8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DownLoadFileNotify;                                       // 0x02B8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             SpeechToTextNotify;                                       // 0x02C8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             UploadFileNotify;                                         // 0x02D8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             ApplyMessageKeyNotify;                                    // 0x02E8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             MemberIsSpeakingNotify;                                   // 0x02F8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             LbsMemberIsSpeakingNotify;                                // 0x0308(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMuteSwitchResult;                                       // 0x0318(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             ReportVoiceTimeToServer;                                  // 0x0328(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             RecordSuccess;                                            // 0x0338(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             RecordFail;                                               // 0x0348(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             UploadSuccess;                                            // 0x0358(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             UploadFail;                                               // 0x0368(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             SpeechToTextSuccess;                                      // 0x0378(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             SpeechToTextFail;                                         // 0x0388(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DownloadFileSuccess;                                      // 0x0398(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DownloadFileFail;                                         // 0x03A8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             EnableRoomMicrophone;                                     // 0x03B8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             ExitInfectionGameMode;                                    // 0x03C8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             JoinInfectionGameMode;                                    // 0x03D8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             RequestPrivacyInSetting;                                  // 0x03E8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnReportPlayerCallback;                                   // 0x03F8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnGVoiceEvent;                                            // 0x0408(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData04[0x90];                                      // 0x0418(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GVoiceInterface");
		return pStaticClass;
	}


	int VoiceSpeechToText(const struct FString& InFileID, int InTimeout, int InLanguage);
	void UploadRecordFile(bool InPermanent);
	int UploadRecordedFile(const struct FString& InFilePath, int InTimeout, bool InPermanent);
	int UpdateVoiceCoordinate(const struct FString& InRoomName, int64_t X, int64_t Y, int64_t Z, int64_t Radius);
	void TestMic();
	bool TeamSpeakerEnable();
	bool TeamMicphoneEnable();
	void SwitchMode(ECharacterMainType CharMode);
	void SwitchMicphoneWhenCorpsMode();
	void SwitchCampRoom(ECharacterMainType campMode);
	int StopRecording();
	void StopRecord();
	void StopPlayRecordFile();
	void StopInterphone();
	void StopCampMode();
	int StartRecording(const struct FString& InFilePath, bool InNotVoip);
	void StartRecord();
	void StartInterphone();
	void StartCampMode(const struct FString& ZombieCampRoomName, const struct FString& ManCampRoomName, const struct FString& userId);
	void SpeechToText();
	void ShowOpenSpeakerAtFirstMsg();
	void ShowCorpsModeCannotUseLBSVoice();
	void SetVoiceServer(const struct FString& ServerInfo);
	void SetVoiceMode(int Type);
	void SetSpeakerVolum(float Value);
	void SetSpeakerStatus(bool Flag);
	int SetServerInfo(const struct FString& URL, const struct FString& InDefaultIpSvr);
	void SetRoomOperationTimeout(int InTimeout);
	void SetReportBufferTime(int nTimeSec);
	void SetPlayerVolume(const struct FString& InPlayerId, int InVol);
	int SetNotify();
	int SetMode(int InGVMode);
	void SetMicphoneVolum(float Value);
	void SetMicphoneStatus(bool Flag);
	void SetLbsVoiceRadius(float Radius);
	void SetLbsRoomEnableStatus(bool Flag);
	void SetGVoiceSupportBackgroundChat(bool isSupportBGChat);
	void SetGVoiceChatServiceEnable(bool IsEnable);
	void SetGMServerUrl(const struct FString& InServerUrl);
	void SetGameFrontendHUD(class UGameFrontendHUD* InHUD);
	void SetFeature(int8_t InFeature, bool Inactive);
	void SetCurrentDownloadFieldID(const struct FString& filedId);
	int SetAppInfo(const struct FString& InAppId, const struct FString& InAppKey, const struct FString& InOpenId);
	void SetAllVoiceStatus(bool Flag);
	void RSTSStopRecording();
	int RSTSSpeechToText(int InSrcLang);
	void ResetWhenLogOut();
	bool ReportPlayers(const struct FString& InExtraInfo, TArray<struct FString> InOpenids);
	int ReportFileForAbroad(const struct FString& InFilePath, bool InTranslate, bool InChangeVoice, int InTime);
	void ReactiveLbsStatus();
	int QuitVoiceRoom(const struct FString& InRoomName);
	void QuitTempLbsRoom(const struct FString& roomStr);
	void QuitRoom();
	void QuitCommonRoom(const struct FString& InRoomName);
	int Poll();
	void PlayRecordFile();
	int PlayRecordedFile(const struct FString& InDownloadInFilePath);
	int OpenVoiceSpeaker();
	int OpenVoiceMic();
	void OpenTeamSpeakerOnly(bool ShowTips);
	int OpenTeamMicphoneOnly(bool ShowTips);
	int OpenTeamInterphone();
	void OpenSpeakerByTempLbs(bool Open);
	int OpenSpeaker();
	void OpenMicByTempLbs(bool Open);
	void OpenMicAndSpeakerAfterJoinLbsRoom();
	int OpenMic();
	void OpenIngameSpeaker();
	int OpenIngameMicphone();
	void OpenAllSpeaker(bool ShowTips);
	int OpenAllMicphone(bool ShowTips);
	int OpenAllInterphone();
	void OnRoomTypeChanged(const struct FString& itemtext);
	void OnResume();
	void OnPause();
	bool LbsSpeakerEnable();
	bool LbsMicphoneEnable();
	void JoinTempLbsRoom(const struct FString& room, const struct FString& userId);
	int JoinTeamRoom(const struct FString& InRoomName);
	void JoinRoom(const struct FString& room, const struct FString& userId);
	int JoinRangeRoom(const struct FString& InRoomName);
	void JoinLbsRoom(const struct FString& lbsRoom, const struct FString& userId);
	void JoinCommonRoom(const struct FString& InRoomName);
	bool IsTeamInterphoneOpenned();
	bool IsSpeaking();
	bool IsNewGVoiceInterface();
	bool IsLbsInterphoneOpenned();
	bool IsInterphoneMode();
	bool IsGVoiceEnable();
	bool IsEnableCivilFile();
	int Invoke(uint32_t InCmd, uint32_t InParam1, uint32_t InParam2, const struct FString& InExterInfo);
	void InitGVoiceComponent(const struct FString& userId);
	int InitGVoice();
	void Init();
	bool HaveTeamRoom();
	bool HaveLbsRoom();
	float GetVoiceLength();
	struct FString GetTeamRoomName();
	int GetRoomStatus(const struct FString& InRoomName);
	int GetPlayerVolume(const struct FString& InPlayerId);
	int GetMicState();
	struct FString GetLocalRecordFilePath(const struct FString& InFileName);
	struct FString GetLbsRoomName();
	struct FString GetGMServerUrl();
	void GetAuthKey();
	int GetAudioDeviceConnectionState();
	void ForbidTeammateVoiceById(int memberID, bool IsEnable);
	int ForbidMemberVoice(int InMember, bool InEnable, const struct FString& InRoomName);
	void ForbidLbsMemberVoiceById(int memberID, bool IsEnable);
	void EnbleMicAndSpeakerByRoomName(const struct FString& RoomName, bool Enable);
	void EnableVoiceChat(bool InEnable);
	int EnableRoomSpeaker(const struct FString& InRoomName, bool InEnable);
	int EnableReportForAbroad(bool InIsWholeRoundaudit);
	bool EnableReportALLAbroad(bool InEnable, bool InWithEncryption, int InTimeout);
	int EnableMultiRoom(bool InEnable);
	void EnableLog(bool InEnable);
	int EnableGVoiceRoomMicrophone(const struct FString& InRoomName, bool InEnable);
	int EnableCivilFile(bool Enable);
	void DownloadRecordFile(bool InPermanent);
	int DownloadRecordedFile(const struct FString& InFileID, const struct FString& InDownloadInFilePath, int InTimeout, bool InPermanent);
	void CommonTestMic();
	int CloseVoiceSpeaker();
	int CloseVoiceMic();
	void CloseSpeaker();
	void CloseMic();
	void CloseIngameSpeaker();
	void CloseIngameMicphone();
	void CloseAllSpeaker(bool ShowTips);
	void CloseAllMicphone(bool ShowTips);
	int CheckDeviceMuteState();
	void CheckAndEnableRoomSpeaker();
	void ChatShowAgeRestrictionMsgInLobby();
	void ChatShowAgeRestrictionMsgInFighting();
	void ChatShowAgeRestrictionMsgInChat();
	void ChatRequestPrivacyInSetting();
	void ChatRequestPrivacyInGame();
	int ApplyMessageKey();
	void AlwaysDisableRoomMic(const struct FString& InRoomName, bool WithClear);
};


// Class Client.HttpWrapper
// 0x0088 (0x00B0 - 0x0028)
class UHttpWrapper : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnResponseEvent;                                          // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnImageDownloadResponseEvent;                             // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0048(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.HttpWrapper");
		return pStaticClass;
	}


	void SimplePostForLua(const struct FString& URL, const struct FString& Content, int Priority, int QueueType);
	void SetQueueSize(int QueueType, int InSize);
	void SetQueueEnable(bool InEnableQueue);
	void SetPoolEnable(bool InEnablePool);
	int RequestForLua(const struct FString& URL, const struct FString& Verb, const struct FString& Content, int Priority, int QueueType, TMap<struct FString, struct FString>* Headers);
	int ImageDownloadRequestForLua(const struct FString& URL, const struct FString& Verb, const struct FString& Content, int Priority, TMap<struct FString, struct FString>* Headers);
	bool GetQueueEnable();
	bool GetPoolEnable();
	int GetInternalIndex();
	void CancelRequestAll(int QueueType);
	void CancelRequest(int QueueType, int ReqIndex);
};


// Class Client.ImageDownloader
// 0x0088 (0x00B0 - 0x0028)
class UImageDownloader : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     FileURL;                                                  // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     CompreesedFileUrl;                                        // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     FileSavePath;                                             // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     CompreesedFileSavePath;                                   // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     UrlHash;                                                  // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     CompreesedUrlHash;                                        // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               InvalidImageFormat;                                       // 0x00A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SaveDiskFile;                                             // 0x00A9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ForceUpdate;                                              // 0x00AA(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x00AB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ImageDownloader");
		return pStaticClass;
	}


	void Start(const struct FString& URL);
	class UImageDownloader* MakeDownloaderInGame();
	class UImageDownloader* MakeDownloader();
	class UTexture2D* GetTextureFromUrlWithoutDownload(const struct FString& URL);
	struct FString CheckAndGetEncryptUrl(struct FString* InUrl);
};


// Class Client.ImageDownloadUtil
// 0x0000 (0x0028 - 0x0028)
class UImageDownloadUtil : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ImageDownloadUtil");
		return pStaticClass;
	}


	void SaveImageDownloadDiskFile(TArray<unsigned char> OutArray, const struct FString& SavePath);
	class UTexture2D* GetTextureFromMemory(const struct FString& PathName);
	class UTexture2D* GetTexture2DFromDisk(const struct FString& SavePath, bool IsCompressed);
	class UTexture2D* GetTexture2DFromArray(TArray<unsigned char> OutArray, bool IsCompressed);
	void CheckDiskFile(const struct FString& ImgDir, const struct FString& SubDir);
};


// Class Client.InGameUIManager
// 0x01F8 (0x0368 - 0x0170)
class UInGameUIManager : public UGameBusinessManager
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0170(0x0008) MISSED OFFSET
	TArray<class UClass*>                              InGameUIList;                                             // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0188(0x0068) MISSED OFFSET
	TMap<struct FString, TWeakObjectPtr<class UUAEUserWidget>> WidgetsMap;                                               // 0x01F0(0x0050) (ExportObject, ZeroConstructor)
	TMap<int, struct FDynamicWidgetAsyncLoadData>      PendingAsyncLoadRequests;                                 // 0x0240(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0xD8];                                      // 0x0290(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.InGameUIManager");
		return pStaticClass;
	}


	void SubUIWidgetListWithMountData(TArray<struct FInGameWidgetData> InGameWidgetDataList, TArray<struct FString> GameStatusStrList, bool InPersistentUI, bool InUsedByControler, bool InOberverOnly, int inUIControlState);
	void SubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList, TArray<struct FString> GameStatusStrList, bool InPersistentUI, bool InUsedByControler, bool InOberverOnly);
	void SubDynamicUIWidgetList(TArray<struct FDynamicWidgetData> DynamicWidgetMap);
	void OnAsyncLoadWidgetClassObj(class UObject* InClassObj, int RequestID);
	void HandleUIMessage(const struct FString& UIMessage);
	void HandleMountWidget(class UInGameUIManager* IngameManager);
	void HandleDynamicDestroy();
	void HandleDynamicCreation(bool isAsyncLoad);
	void GetWidgetHandleAsyncWithCallBack(const struct FString& WidgetKey, const struct FScriptDelegate& InCallback);
	class UUAEUserWidget* GetWidgetHandle(const struct FString& WidgetKey);
	class UCanvasPanel* GetMountCanvasPanel(const struct FString& MountOuterName, const struct FString& MountName);
	void ChangeSubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList);
};


// Class Client.IntlSDKComplianceHelper
// 0x0068 (0x0090 - 0x0028)
class UIntlSDKComplianceHelper : public UObject
{
public:
	struct FString                                     IntlGameId;                                               // 0x0028(0x0010) (ZeroConstructor, Config)
	struct FString                                     IntlSdkUrl;                                               // 0x0038(0x0010) (ZeroConstructor, Config)
	struct FString                                     IntlSdkUrlDebug;                                          // 0x0048(0x0010) (ZeroConstructor, Config)
	struct FString                                     IntlSdkKey;                                               // 0x0058(0x0010) (ZeroConstructor, Config)
	bool                                               IntlSdkEnable;                                            // 0x0068(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               IntlLogEnable;                                            // 0x0069(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x006A(0x0006) MISSED OFFSET
	struct FString                                     IntlHttpDnsIP;                                            // 0x0070(0x0010) (ZeroConstructor, Config)
	struct FString                                     IntlPf;                                                   // 0x0080(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.IntlSDKComplianceHelper");
		return pStaticClass;
	}


	bool SetUserProfile(const struct FString& InRegion);
	void SetParentStatus(int ParentCertificateStatus);
	void SetLogConfig(bool enableConsoleLog, bool enableFileLog, int LogLevel);
	void SetEUAgreeStatus(int AgreeStatus);
	void SetAdulthood(int AgeStatus);
	void SendEmail(const struct FString& InEmail, const struct FString& UserName);
	void QueryUserStatus();
	void QueryIsEEA(const struct FString& InRegion);
	void QueryConfig();
	void OnMSDKEvnSwitched(int Env);
	class UIntlSDKComplianceHelper* GetInstance();
	void ComplianceInit();
	void CommitBirthday(const struct FString& InBirthday);
	void ChangeRegion(const struct FString& InRegion);
};


// Class Client.LaggingReporter
// 0x0070 (0x0098 - 0x0028)
class ULaggingReporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0050(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LaggingReporter");
		return pStaticClass;
	}

};


// Class Client.LiveBroadcast
// 0x0010 (0x0038 - 0x0028)
class ULiveBroadcast : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LiveBroadcast");
		return pStaticClass;
	}


	void SetFullScreen(bool FullScreen);
	void OpenLiveBroadcast(const struct FString& URL, float Margin);
	class ULiveBroadcast* GetInstance();
	void CloseWebView();
	void C2JSetString(const struct FString& str);
	void C2JSetIndex(int Index);
};


// Class Client.LoadTexture
// 0x0000 (0x0028 - 0x0028)
class ULoadTexture : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LoadTexture");
		return pStaticClass;
	}


	class UTexture2D* LoadTexture2D(const struct FString& ImagePath, bool* IsValid, int* OutWidth, int* OutHeight);
	class UTexture2D* GetTexture2DFromDiskFile(const struct FString& FilePath);
};


// Class Client.LobbyChatSecurity
// 0x0000 (0x0028 - 0x0028)
class ULobbyChatSecurity : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LobbyChatSecurity");
		return pStaticClass;
	}


	struct FString GetKey(const struct FString& OpenID);
};


// Class Client.LuaBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULuaBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LuaBlueprintLibrary");
		return pStaticClass;
	}


	struct FLuaBPVar StringToLVar(class UObject* WorldContextObject, const struct FString& Value);
	void SetMemAllocLog(class UObject* WorldContextObject, bool bMemAllocLog);
	void RequireAndCallLuaWithArgs(class UObject* WorldContextObject, const struct FLuaBPVar& InD, const struct FLuaBPVar& InC, const struct FLuaBPVar& InA, const struct FLuaBPVar& InB, struct FString* FunctionName, struct FString* ModulePath, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	struct FLuaBPVar ObjectToLVar(class UObject* WorldContextObject, class UObject* O);
	struct FString LVarToString(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	class UObject* LVarToObject(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	int LVarToInt(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	float LVarToFloat(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	bool LVarToBool(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	struct FLuaBPVar IntToLVar(class UObject* WorldContextObject, int Value);
	struct FLuaBPVar FloatToLVar(class UObject* WorldContextObject, float Value);
	void CallLuaWithMultiArgs(class UObject* WorldContextObject, const struct FLuaBPVar& InF, const struct FLuaBPVar& InA, const struct FLuaBPVar& InB, const struct FLuaBPVar& InC, const struct FLuaBPVar& InD, const struct FLuaBPVar& InE, struct FString* Function, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	void CallLuaWithHUD(class UObject* WorldContextObject, class UGameFrontendHUD* GameFrontendHUD, const struct FLuaBPVar& InD, const struct FLuaBPVar& InA, const struct FLuaBPVar& InB, const struct FLuaBPVar& InC, struct FString* Function, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	void CallLuaWithArgs(class UObject* WorldContextObject, const struct FLuaBPVar& InD, const struct FLuaBPVar& InA, const struct FLuaBPVar& InB, const struct FLuaBPVar& InC, struct FString* Function, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	void CallLua(class UObject* WorldContextObject, struct FString* Function, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	struct FLuaBPVar BoolToLVar(class UObject* WorldContextObject, bool Value);
};


// Class Client.LuaBlueprintMgr
// 0x0058 (0x0080 - 0x0028)
class ULuaBlueprintMgr : public UObject
{
public:
	TMap<struct FString, class ULuaBluepirntSys*>      SystemMap;                                                // 0x0028(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LuaBlueprintMgr");
		return pStaticClass;
	}


	class ULuaBluepirntSys* GetSystemByName(const struct FString& SystemName);
	void AddSystem(const struct FString& SystemName, const struct FString& BPPath);
};


// Class Client.LuaBluepirntSys
// 0x0078 (0x00A0 - 0x0028)
class ULuaBluepirntSys : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LuaBluepirntSys");
		return pStaticClass;
	}


	void Init();
};


// Class Client.LuaClassObj
// 0x0050 (0x0458 - 0x0408)
class ALuaClassObj : public ALuaContext
{
public:
	class UGameBusinessManager*                        pManager;                                                 // 0x0408(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0410(0x0002) MISSED OFFSET
	bool                                               bClearSourceCodeAfterInitialized;                         // 0x0412(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x45];                                      // 0x0413(0x0045) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LuaClassObj");
		return pStaticClass;
	}


	void SubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList, TArray<struct FString> GameStatusStrList, bool bPersistentUI, bool InStatusConcern, bool bDynamicWidget, bool bKeepDynamicWidget);
	void SubShowHideEvent(TArray<struct FString> WidgetPathList);
	void SubDefaultSceneCamera(int sceneCameraIndex);
	void SubDefaultChildUI(TArray<struct FString> childList);
	void SubDefaultBaseUI(const struct FString& baseUI);
	void SubCollapseWidgetList(const struct FString& RootWidgetName, TArray<struct FString>* ChildWidgetNames);
	void SetWidgetZorder(int Index, int ZOrder);
	void RestoreWidgetZorder(int Index);
	void RestoreAllWidgetZorder();
	bool IsTopStackPanel();
	bool IsPushedPanel();
	bool InCombatState();
	void HandleUIMessageNoFetch(const struct FString& UIMessage);
	void HandleUIMessage(const struct FString& UIMessage);
	void HandleStopAsyncLoad();
	void HandleDynamicDestroy();
	void HandleDynamicCreationInternal(bool isAsyncLoad);
	void HandleDynamicCreation(bool isAsyncLoad);
	void HandleCollapseWidgetList(const struct FString& RootWidgetName);
	struct FString GetTopStackPanelSrcTag();
	struct FString GetTopStackPanelDstTag();
	struct FString GetGameStatus();
	void ChangeSubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList);
	void AddToTopStackPanel();
};


// Class Client.MaskBox
// 0x0048 (0x0160 - 0x0118)
class UMaskBox : public UContentWidget
{
public:
	int                                                Phase;                                                    // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PhaseCount;                                               // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreStretch;                                            // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateRenderTarget;                                       // 0x0121(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0122(0x0002) MISSED OFFSET
	int                                                MaskType;                                                 // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MaskTransformPivot;                                       // 0x0128(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   MaskTransformScale;                                       // 0x0130(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MaskTransformAngle;                                       // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          MaskMaterial;                                             // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MaskTexture;                                              // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0150(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.MaskBox");
		return pStaticClass;
	}


	void SetMaskTransformScale(const struct FVector2D& Scale);
	void SetMaskTransformPivot(const struct FVector2D& Pivot);
	void SetMaskTransformAngle(float Angle);
	void SetMaskMaterial(class UMaterialInterface* EffectMaterial);
	void SetBrushFromTexture(class UTexture2D* Texture);
	struct FVector2D GetVector2D__DelegateSignature();
	class UMaterialInstanceDynamic* GetMaskMaterial();
};


// Class Client.MaskImage
// 0x0040 (0x02B8 - 0x0278)
class UMaskImage : public UImage
{
public:
	bool                                               bIgnoreStretch;                                           // 0x0278(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0279(0x0003) MISSED OFFSET
	int                                                MaskType;                                                 // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MaskTransformPivot;                                       // 0x0280(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   MaskTransformScale;                                       // 0x0288(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MaskTransformAngle;                                       // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	class UMaterialInterface*                          MaskMaterial;                                             // 0x0298(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MaskTexture;                                              // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x02A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.MaskImage");
		return pStaticClass;
	}


	void SetMaskTransformScale(const struct FVector2D& Scale);
	void SetMaskTransformPivot(const struct FVector2D& Pivot);
	void SetMaskTransformAngle(float Angle);
	void SetMaskTexture(class UTexture2D* Texture);
	void SetMaskMaterial(class UMaterialInterface* InEffectMaterial);
	class UMaterialInstanceDynamic* GetMaskMaterial();
};


// Class Client.MidasManager
// 0x0188 (0x01B0 - 0x0028)
class UMidasManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
	struct FString                                     payChannel;                                               // 0x0058(0x0010) (ZeroConstructor, Config)
	struct FString                                     midasIdc;                                                 // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     ZoneID;                                                   // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     goodsZoneID;                                              // 0x0088(0x0010) (ZeroConstructor)
	struct FString                                     offerID;                                                  // 0x0098(0x0010) (ZeroConstructor, Config)
	int                                                iAOSShop;                                                 // 0x00A8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FString                                     offerID_H5;                                               // 0x00B0(0x0010) (ZeroConstructor, Config)
	struct FString                                     payChannel_H5;                                            // 0x00C0(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData02[0x70];                                      // 0x00D0(0x0070) MISSED OFFSET
	struct FString                                     PAY_TYPE_UC;                                              // 0x0140(0x0010) (ZeroConstructor)
	struct FString                                     PAY_TYPE_GOODS;                                           // 0x0150(0x0010) (ZeroConstructor)
	struct FString                                     PAY_TYPE_SUBSCRIBE;                                       // 0x0160(0x0010) (ZeroConstructor)
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x38];                                      // 0x0178(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.MidasManager");
		return pStaticClass;
	}


	void TickMidasPackage();
	void Tick(float DeltaTime);
	void SwitchPayChannel(EMidasMultiPayChannelSwitch switchChannel);
	void Subscribe(const struct FString& productid, int payItem, const struct FString& country, const struct FString& currency, const struct FString& serviceCode, const struct FString& serviceName, bool autoPay);
	void SetZoneID(const struct FString& inZoneID, const struct FString& inGoodsZoneID);
	void SetRoleInfo(int InChannel, const struct FString& OpenID);
	void SetMidasIDC(const struct FString& idc);
	void SetJPAge(int Age);
	void SetFrontendHUD(class UGameFrontendHUD* InFrontendHUD);
	void Reprovide();
	void Pay(const struct FString& productid, int payItem, const struct FString& country, const struct FString& currency);
	void ModifySubscribe(const struct FString& oldProductId, const struct FString& newProductid, int payItem, const struct FString& country, const struct FString& currency, const struct FString& serviceCode, const struct FString& serviceName, bool autoPay);
	bool IsH5PayEnable();
	void Initialize(EMidasMultiPayChannelSwitch envior);
	void H5Pay(const struct FString& country);
	void GoodsPresent(const struct FString& productid, int payItem, const struct FString& price, const struct FString& country, const struct FString& currency, const struct FString& MetaData);
	void Goods(const struct FString& productid, int payItem, const struct FString& price, const struct FString& country, const struct FString& currency);
	void GetProductInfo(TMap<struct FString, struct FString> listProductID);
	struct FString getPF();
	struct FString GetPayEnvironment();
	struct FString GetPayChannel();
	struct FString GetPackChannel();
	struct FString GetOfferID();
	struct FString GetNativePackageTag();
	void GetMPInfo(const struct FString& country, const struct FString& currency, const struct FString& InAppExtends);
	void GetIntroPrice(TMap<struct FString, struct FString> listProductID);
	class UMidasManager* GetInstance();
	struct FString GetInIDC();
	int GetAOSSHOP();
};


// Class Client.NewButton
// 0x0008 (0x0520 - 0x0518)
class UNewButton : public UButton
{
public:
	EButtonClickSoundTypes                             ClickSound;                                               // 0x0518(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0519(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.NewButton");
		return pStaticClass;
	}


	void SetClickSound(EButtonClickSoundTypes inSoundType);
};


// Class Client.PlatformAppraise
// 0x0000 (0x0028 - 0x0028)
class UPlatformAppraise : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.PlatformAppraise");
		return pStaticClass;
	}

};


// Class Client.PublishAreaMgr
// 0x0000 (0x0028 - 0x0028)
class UPublishAreaMgr : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.PublishAreaMgr");
		return pStaticClass;
	}


	void SelectArea(const struct FString& InArea);
	bool IsMultiAreaBuild();
	struct FString GetString(const struct FString& InKey, const struct FString& InDefaultValue);
	struct FString GetPublishAreas();
	int GetInt(const struct FString& InKey, int InDefaultValue);
	bool GetBool(const struct FString& InKey, bool InDefaultValue);
	struct FString GetArea();
};


// Class Client.ScreenInput
// 0x0048 (0x0070 - 0x0028)
class UScreenInput : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnScreenTouch;                                            // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseButtonUp;                                          // 0x0038(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseButtonDown;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScreenInput");
		return pStaticClass;
	}


	void Shutdown();
	void OnScreenTouch__DelegateSignature();
	void OnMouseButtonDown__DelegateSignature(const struct FVector2D& ContainerPos);
	void Init();
};


// Class Client.ScreenshotMaker
// 0x0000 (0x0028 - 0x0028)
class UScreenshotMaker : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScreenshotMaker");
		return pStaticClass;
	}


	void SetDefaultShowUI(bool ShowUI);
	bool SaveToPhotosAlbumEx(const struct FString& pathStr);
	bool SaveToPhotosAlbum(const struct FString& pathStr);
	void ResizePicture(const struct FString& pathStr, float Scale, const struct FString& savePathStr);
	void ReMakePicture(const struct FString& pathStr, const struct FVector4& Vector4);
	struct FString ReMakeMomentPicture(const struct FString& srcPath, const struct FVector4& Vector4);
	bool MosaicPictureByLocalImage(TArray<struct FString> Paths, const struct FString& toPath, int Width, float Scale);
	struct FString MakePictureWithName(const struct FString& PicName);
	struct FString MakePictureToLua(class UGameFrontendHUD* InFrontendHUD, const struct FString& tableName, const struct FString& FunctionName, bool isShowUI);
	struct FString MakePictureByName(const struct FString& PicName, bool ShowUI);
	struct FString MakePicture(bool isShowUI);
	struct FString MakeBugReprotPic(bool isShowUI);
	bool HasCaptured(const struct FString& pathStr);
	int GetSaveStatus();
	int GetPhotoHash(const struct FString& pathStr, int algorithmVersion);
	TArray<struct FString> GetMomentThumbPictureFullPathFiles();
	TArray<struct FString> GetMomentPictureFullPathFiles();
	void CropAndResizePicture(const struct FString& pathStr, float Scale, float cropWidthScale, float cropHeightScale, const struct FString& savePathStr);
};


// Class Client.ScriptHelperClient
// 0x0000 (0x0028 - 0x0028)
class UScriptHelperClient : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScriptHelperClient");
		return pStaticClass;
	}


	struct FString ZLIBDecompress(const struct FString& CompressedData, int CompressedSize, int UnCompressedSize);
	int ZLIBCompress_LuaState();
	void WechatShareWithUrlInfo(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _url, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void WeChatShareWithMiniApp(const struct FString& _userName, const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _webpageUrl, int _shareScene, const struct FString& _path, const struct FString& _messageExt, const struct FString& _messageAction, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void WechatShareToFriend(const struct FString& mediaId, const struct FString& OpenID, const struct FString& Title, const struct FString& Desc, const struct FString& msdkExtInfo, const struct FString& messageExt, const struct FString& mediaTagName, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void WechatShare(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _mediaTagName, const struct FString& _messageExt, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void WechatQueryGroup(const struct FString& unionId, const struct FString& OpenIdList, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void WechatJoinGroup(const struct FString& unionId, const struct FString& chatRoomNickName, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void WechatCreateGroup(const struct FString& unionId, const struct FString& chatRoomName, const struct FString& chatRoomNickName, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void WakeupFromSuspendSound();
	int VPNTearDown();
	int VPNSetUserInfo(const struct FString& InUserId, const struct FString& InUserToken, const struct FString& InAppId);
	int VPNSetPortRange(int Min, int Max);
	int VPNSetNodelist(const struct FString& InNodelist);
	int VPNPrepare();
	int VPNHandUp();
	struct FString VPNGetNodeRegionList();
	int VPNDialUp(const struct FString& InRegion);
	void Vibrate(int Param);
	struct FString UserName();
	struct FString UrlEncode(const struct FString& UnencodedString);
	void UQMSetAppVersion(const struct FString& Version);
	void UQMBuglyPutUserData(const struct FString& Key, const struct FString& Value);
	void UQMBuglyPostExceptionFull(int Category, const struct FString& Name, const struct FString& Msg, const struct FString& stack);
	void UQMBuglyPostException(int Category, const struct FString& Reason);
	void UQMBuglyLog(int Level, const struct FString& Tag, const struct FString& Log, bool needDump);
	void UpdatePublishRegionForBattle();
	void UpdateMemResource(const struct FString& ResType, const struct FString& KeyWord);
	void UpdateAkAudioDeviceBluetoothDelay(int InDelayTime);
	void UnsubscribeFromTopic(const struct FString& Topic);
	bool UnmountPakFile(const struct FString& InPakFilename);
	void UnitTestODPaksOpen(int fileCount, int Times, int threadNum);
	void TVMacroTesting();
	void TriggerTouchEvent(float X, float Y, int event_type);
	void TriggerOOMCrash();
	void TriggerNativeDump(int DumpCount, double Timespan);
	void TriggerLoginCrashTest(int Type);
	void TriggerLobbyCrashTest(int Type);
	void TriggerBlockAndroidANR();
	void TGPASwitchRichTapMode(const struct FString& Mode);
	void TGPAStopRichTap();
	void TGPAStartRichTapWithData(const struct FString& InKey, TMap<struct FString, struct FString> InMapData);
	void TGPAStartRichTap(const struct FString& Filename);
	struct FString TGPALoadHeFile(const struct FString& StrFilePath);
	struct FString TGPAGetRichTapSupport();
	struct FString TGPAGetRichTapAmplitudeSupport();
	void Tex_UpdateMemResource(const struct FString& KeyWord);
	void Tex_DumpMemObjectInfo(const struct FString& KeyWord);
	void TestSaveStringToFile(const struct FString& String, const struct FString& TargetDir, const struct FString& FullPathName);
	void TestLoadGameSlotMultiThread();
	void TestLoadGameSlot();
	int Tea2Encrypt_LuaState();
	int Tea2Decrypt_LuaState();
	void TapmReport(int Type, const struct FString& ExtraInfo, bool send);
	void TapmPostLargeValueS(const struct FString& catgory, const struct FString& Key, const struct FString& Value);
	void TapmMarkTime(int Type);
	void TapmMarkLevelFin();
	void TApmDisconnectReport(class UGameFrontendHUD* GameFrontendHUD, int EventId);
	void TApmDataReport(class UGameFrontendHUD* GameFrontendHUD, int EventId, const struct FString& EventInfo);
	void SyncLoadPackageUpdateCurrentWorldName(const struct FString& WorldName);
	void SyncLoadPackageInitialize(const struct FString& CfgFilename);
	void SyncLoadPackageInit(const struct FString& ConfigFilename);
	void SyncLoadPackageInfoCollect(const struct FString& PackageName, const struct FString& WorldName);
	TArray<struct FString> SyncLoadPackageGetPackageListForWorld(const struct FString& WorldName);
	void SyncLoadPackageDumpInfo(const struct FString& DumpFilename);
	void SwitchUser(bool useExternalAccount, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void SwitchSceneCamera(class UGameFrontendHUD* GameFrontendHUD, const struct FString& SceneCameraName, float blendTime, bool bForce);
	void SwitchCampRoom(class UGameFrontendHUD* GameFrontendHUD, int campMode);
	void Swipe(const struct FString& Path, float duringtime, int start_x, int start_y, int end_x, int end_y, int p_TouchIndex, int p_ControllerId, int screensize_x, int screensize_y);
	void SuspendSound();
	void SubscribeToTopic(const struct FString& Topic);
	struct FString StringToJsonString(const struct FString& String);
	struct FMargin StringToFMargin(const struct FString& MarginStr);
	void StopUIStat(const struct FString& UIName, bool bReport);
	struct FTouchInputRecord StopTouchRecord();
	bool StopTask(class UGameFrontendHUD* GameFrontendHUD, uint64_t TaskId);
	bool StopShaderPrecompile();
	void StopRecordInput();
	void StopPuffer(class UGameFrontendHUD* GameFrontendHUD);
	void StopPlayInput();
	void StopHapticsEngine();
	void StopH5Downloading();
	void StopCampMode(class UGameFrontendHUD* GameFrontendHUD);
	void StartUIStat(const struct FString& UIName);
	void StartTrace(const struct FString& InHost, int InStartTTL, int InMaxTTL, int InCount, const struct FString& InExtraData);
	void StartTouchRecord();
	bool StartShaderPrecompile();
	void StartRecordInput(const struct FString& Command);
	void StartPlayInput();
	void StartOpenReadCollect(class UGameFrontendHUD* GameFrontendHUD, bool bStart);
	void StartHapticsEngine(const struct FScriptDelegate& Callback);
	bool StartGrayUpdate(class UGameFrontendHUD* GameFrontendHUD);
	void StartDownloadItem(uint32_t ItemID, uint32_t Priority, const struct FScriptDelegate& OnItemDownloadDelegate);
	void StartDolphinResourceUpdate(class UGameFrontendHUD* GameFrontendHUD);
	void StartCDNUpdateAfterDolphinUpdateFailed(class UGameFrontendHUD* GameFrontendHUD);
	void StartCampMode(class UGameFrontendHUD* GameFrontendHUD, const struct FString& ZombieCampRoomName, const struct FString& ManCampRoomName, const struct FString& userId);
	void StartBatchDownloadItem(TArray<uint32_t> ItemIDs, uint32_t Priority, const struct FScriptDelegate& OnBatchItemDownloadDelegate);
	void ShutdownUnrealNetwork(class UGameFrontendHUD* GameFrontendHUD);
	void ShutdownPuffer(class UGameFrontendHUD* GameFrontendHUD);
	void ShrinkUObjectHashTables();
	void ShowWebView(bool Show);
	void ShowVLink(const struct FString& jsonString, const struct FString& signString);
	void ShowVideoListDialog();
	void ShowScreenDebugMessage(const struct FString& Message);
	void ShowH5WebView();
	void ShorterStreamingDistanceWhenGameEnd(uint32_t Distance);
	void ShareWithUploadPhotoByChannel(const struct FString& _imgPath, int _channel, const struct FString& _url, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void ShareWithPhotoByChannel(const struct FString& _messageExt, const struct FString& _imgPath, const struct FString& _mediaTagName, const struct FString& _url, const struct FString& _messageAction, int _channel, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void ShareLogFile();
	void SetWebViewCacheInfoDelegate(const struct FScriptDelegate& Delegate);
	bool SetVpnServiceStrategy(const struct FString& InKey, int InValue);
	void SetVoiceSwitch(class UGameFrontendHUD* GameFrontendHUD, bool FirstVoicePopupSwitch, bool GDPRForbidVoiceSwitch, bool GDPRSettingSwitch);
	void SetVoiceReEneterInfo(class UGameFrontendHUD* GameFrontendHUD, float Duration, int MaxCount);
	void SetUserVulkanSetting(bool Enable);
	void SetUserTGPATapEnableFlag(int EnableFlag);
	void SetUserProperty(const struct FString& propertyKey, const struct FString& propertyValue);
	void SetUseMouseForTouch(bool bUse);
	bool SetUpdatedSoPatchFile(const struct FString& InSourceFile, int InABI);
	void SetupAkAudioDeviceListener();
	void SetUIStatMaxClickTimes(int Times);
	void SetUIRectOffset(const struct FString& uirect);
	void SetUIElemLayoutJsonConfigSwitch(class UGameFrontendHUD* GameFrontendHUD, bool UIElemLayoutJsonConfigSwitch);
	void SetUIConfigTGPATapEnableFlag(int uiEnable);
	void SetTssNetworkStatus(class UGameFrontendHUD* GameFrontendHUD, int Status);
	void SetTickMemoryInterval(class UGameFrontendHUD* GameFrontendHUD, float interval);
	void SetTGPATapWhiteListFlag(int TapWhiteList);
	void SetTestEditorNum(int PlayerCount, const struct FString& Num, const struct FString& SceneName, int PlatForm);
	bool SetSoundEffectQuality(int Type);
	void SetShowFriendObservers(class UGameFrontendHUD* GameFrontendHUD, bool bShow);
	void SetSelfieSwitch(class UGameFrontendHUD* GameFrontendHUD, bool SelfieSwitch);
	int SetSdkIoctl(class UGameFrontendHUD* GameFrontendHUD, int request, struct FString* Token);
	void SetReportBugSwitch(class UGameFrontendHUD* GameFrontendHUD, bool ReportBugSwitch);
	void SetRemoteResource(const struct FString& AssetId, class UObject* DescObj);
	void SetRegionNoByLua(int regionNo, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void SetRedBloodSwitch(bool redBloodSwitch);
	void SetPufferBuildInfo(const struct FString& PipeLineID, const struct FString& BuildNo);
	void SetPublishRegion(const struct FString& Region);
	void SetPlayerBaseInfo(class UGameFrontendHUD* GameFrontendHUD, const struct FString& OpenID, uint64_t RoleID, const struct FString& PlayerName, const struct FString& HeadIconUrl);
	void SetOnGetItemBigIcon(const struct FScriptDelegate& onShow);
	void SetNationSwitch(class UGameFrontendHUD* GameFrontendHUD, bool NationAllSwitch, bool NationBattleSwitch, bool NationRankSwitch);
	void SetMyFriendObserversDetail(class UGameFrontendHUD* GameFrontendHUD, TArray<struct FFriendObserver> FriendObserversDetails);
	void SetMiniGameFinalAwardResId(class UGameFrontendHUD* GameFrontendHUD, int AwardResId);
	int SetMidasZoneID_LuaState();
	void SetMidasIDC(const struct FString& midasIdc);
	bool SetLinkStyle(const struct FString& StyleName, int FontSize, const struct FString& FontPath, const struct FString& FontColor, bool ShowUnderline, const struct FString& PathHyperLinkNormalBrush, const struct FString& PathHyperLinkHoveredrBrush);
	void SetLevelStreamingUnloadTimeslice(bool Enabled);
	void SetLevelGamePlayLoadPriority(class ULevelStreaming* TargetLevel, int Priority);
	void SetiTOPLbsDelay(int Delay);
	void SetIPRegion(int region_no);
	void SetIosStuckEnableByServerConfig(int bEnable);
	void SetIOSBGDownloadAttribute(class UGameFrontendHUD* GameFrontendHUD, bool bEnableCellularAccess, bool bEnableResumeData, int nMinFileSize, int nMaxTasks);
	void SetImageVersionString(const struct FString& oldVersion, const struct FString& newVersion);
	bool SetImageStyle(const struct FString& StyleName, int ImageSize, const struct FString& ImagePath, const struct FString& ImageColor, bool bPreLoad);
	void SetIGProxyData(const struct FString& InJsonData);
	void SetHapticsEngineEnable(bool bEnable);
	void SetGlobalRedBloodSwitch(bool redBloodSwitch);
	void SetGDPRUserType(class UGameFrontendHUD* GameFrontendHUD, int GDPRUserType);
	void SetGameStatusMap(class UGameFrontendHUD* GameFrontendHUD, TMap<struct FName, struct FString> GameStatusMap);
	void SetGameSrvID(class UGameFrontendHUD* GameFrontendHUD, int GameSrvID);
	bool SetFontStyle(const struct FString& StyleName, int FontSize, const struct FString& FontPath, const struct FString& FontColor, bool UseShadow, bool IsBold);
	void SetExtraLocalizationMap(TMap<struct FString, struct FString> translationMap);
	void SetExtraItemTableMappingByFix(TMap<int, struct FItemFixTableItem> ItemFixMap);
	void SetDynamicLevels(class UGameFrontendHUD* GameFrontendHUD, TArray<struct FString> DynamicLevels);
	void SetDumpShaderCompile(int iDumpVal);
	void SetDownLoadLanguageName(const struct FString& Language);
	void SetCrashContextReportLevel(int Level);
	void SetCanWatchEnemy(class UGameFrontendHUD* GameFrontendHUD, bool bCan);
	void SetBtnClickInCdFunc();
	void SetAppDetailInfo(const struct FString& appInfo);
	void SetAccountRegion(const struct FString& Region);
	void SendRetriveBeginnerFinisheGuideReq(class UGameFrontendHUD* GameFrontendHUD);
	void SendRecordFinishedGuideReq(class UGameFrontendHUD* GameFrontendHUD, const struct FString& TipsID);
	void SendPlayEmote(class UGameFrontendHUD* GameFrontendHUD, int EmoteIndex);
	void SendLobbyChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& Content);
	void SendDirtyToFilter(class UGameFrontendHUD* GameFrontendHUD, const struct FString& dirtyString, const struct FString& prefixString, int UId);
	void SendClientLog(class UGameFrontendHUD* GameFrontendHUD, const struct FString& errorReason, const struct FString& errorDescription, bool pullAll);
	void ScheduleLocalNotificationAtTime(int Year, int Month, int Day, int Hour, int Minute, int Second, bool LocalTime, const struct FString& Title, const struct FString& Body, const struct FString& Action, int NotificationID);
	void SaveStringToIntermediateFile(const struct FString& String, const struct FString& Filename);
	void SaveStringToFile(const struct FString& String, const struct FString& Filename);
	void SaveStringArrayToFile(TArray<struct FString> Lines, const struct FString& Filename);
	void SaveSMapsFile();
	bool SaveSavFile(const struct FString& CompressedData, const struct FString& Filename, int CompressedSize, int UnCompressedSize);
	void SaveLuaMemoryFile(const struct FString& Filename, const struct FString& InputContent, bool RmExistFile);
	void SaveLoadGameSlotCrashFlag();
	void SaveGameSlotMultiThread();
	bool SaveArrayToFile(TArray<unsigned char> Content, const struct FString& Filename);
	struct FString RunConsoleCommondAndGetString(const struct FString& commond);
	void RunConsoleCommond(const struct FString& commond);
	void RoomOwnerInterruptGame(class UGameFrontendHUD* GameFrontendHUD);
	void ReturnToLobby(class UGameFrontendHUD* GameFrontendHUD);
	void RestartShaderPrecompile();
	void RestartPuffer(class UGameFrontendHUD* GameFrontendHUD, bool needCheck, int maxDownloadsPerTask, int maxDownTask, int maxDownloadSpeed, bool useOldInterface, bool removeOldWhenUpdate, int versionType);
	void RestartGame();
	TArray<struct FString> ResolveDNSWithServerIP(const struct FString& DomainName, const struct FString& ServerIP);
	TArray<struct FString> ResolveDNS(const struct FString& DomainName);
	uint64_t RequestFile(class UGameFrontendHUD* GameFrontendHUD, const struct FString& FilePath, bool ForceUpdate);
	void ReportFirebaseEventWithString(const struct FString& eventTypeString, const struct FString& bundleExtraKey, const struct FString& bundleExtraValue, bool isUnique);
	void ReportFirebaseEventWithParam(const struct FString& eventTypeString, TMap<struct FString, struct FString> _params, bool isUnique);
	void ReportEventRegisterCompleted();
	void ReportEventPurchaseConsider();
	void ReportEventLoadingCompleted();
	void ReportContextValuesOnCrash(struct FString* Json);
	void ReportBuglyLogWithFDNum(const struct FString& baseLogInfo);
	void ReportBattleChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Msg, int MsgExtraParam);
	void ReplyInvite(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, bool bReply);
	void RemoveKnownMissingPackage(const struct FString& PackageName);
	bool RemountPakFiles(class UGameFrontendHUD* GameFrontendHUD);
	void ReInitializePuffer(class UGameFrontendHUD* GameFrontendHUD, bool needCheck, int maxDownloadsPerTask, int maxDownTask, int maxDownloadSpeed, bool useOldInterface, bool removeOldWhenUpdate, int versionType);
	void RegisterInputProcessor();
	bool RecoverShrunkODPaksBins(TMap<uint32_t, struct FString> Keys);
	void RecordLuaExceptionInfo(const struct FString& exception);
	void RebuildHISM(class UHierarchicalInstancedStaticMeshComponent* Comp, bool Async, bool ForceUpdate);
	void QuitVoiceRoom(class UGameFrontendHUD* GameFrontendHUD);
	void QuitLbsVoiceRoom(class UGameFrontendHUD* GameFrontendHUD);
	void QuitFightChat(class UGameFrontendHUD* GameFrontendHUD);
	void QuickLogin(int refreshTokenBeforeExpDays, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void QQShareToFriend(const struct FString& targetUrl, int act, const struct FString& OpenID, const struct FString& Title, const struct FString& Desc, const struct FString& msdkExtInfo, const struct FString& imgUrl, const struct FString& previewText, const struct FString& gameTag, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void QQShareH5WithPhoto(const struct FString& _title, const struct FString& _fullURL, int Channel, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void QQShare(const struct FString& _imgPath, const struct FString& _descShare, const struct FString& _titleShare, int _shareScene, const struct FString& _imgUrl, const struct FString& _url, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void QQAddFriend(const struct FString& OpenID, const struct FString& Desc, const struct FString& Message, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	struct FVector PVEAutoTestGetEnermyLocation();
	void PubgmSimulateActionClientEx(class UGameFrontendHUD* GameFrontendHUD, int SimulateType);
	struct FString ProjectSavedDir();
	struct FString ProjectDir();
	struct FString ProjectContentDir();
	bool ProcessSoPatch(const struct FString& InAppVerStr);
	void ProcessServerRelationChainError(const struct FString& ErrorMsg, int iForceLoginInterval, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void PostGameStatusToTGPASMap(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Key, TMap<struct FString, struct FString> mapData);
	void PlayHapticsFile(const struct FString& FilePath, int Duration, const struct FScriptDelegate& Callback);
	void PandoraSendCmd(const struct FString& jsonStr);
	void PandoraInit(const struct FString& InOpenId, const struct FString& InRoleId, const struct FString& InAppId, const struct FString& InPlatId, const struct FString& InAccType, const struct FString& InArea, const struct FString& InPartion, const struct FString& InCloudTest, const struct FString& InAccessToken, const struct FString& InSdkVersion, const struct FString& InGameVersion, const struct FString& InRoleName, const struct FString& InPayToken, const struct FString& InHeadUrl, const struct FString& InChanelId, const struct FString& InBelongingId, const struct FString& InLanguage, const struct FString& InTicket, const struct FString& InIp, const struct FString& InNation, const struct FString& InNetType);
	void PandoraErrorReport(int iType, int iActId, int errCode, const struct FString& errMsg, const struct FString& extraMsg, TMap<struct FString, struct FString> extendDict);
	void PandoraEnable(bool Enable);
	void PandoraClose();
	void OpenWebviewInGameProcess(const struct FString& URL, int Left, int Top, int Right, int Bottom);
	void OpenURLWithExtra(const struct FString& URL, TMap<struct FString, struct FString> ExtraMap);
	void OpenURL(const struct FString& URL, bool isGetTicket, bool withNeverAdjust, bool bKeepCache);
	bool OpenShaderCodeLibrary(const struct FString& Path, const struct FString& VersionNum);
	void OpenH5FromCache(class UGameFrontendHUD* GameFrontendHUD, const struct FString& ModuleName, const struct FString& Language, int netType, int Top, int Left, int Right, const struct FString& ViewParam);
	void OpenDebugg();
	void OnWebViewCacheInfoDelegate__DelegateSignature(int code);
	void OnWebViewCache(int code);
	void OnNotifyFightFriendChat(class UGameFrontendHUD* GameFrontendHUD, const struct FFightFriendChat& Data);
	void OnMiniGameEnded(class UGameFrontendHUD* GameFrontendHUD, int Score, int Duration, bool bGameClosed);
	void OnIslandPlayerInfoNotify(class UGameFrontendHUD* GameFrontendHUD, int LandId);
	bool OnInviteNextBattle(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& Name);
	void OnGetUpdateStateCDNConfigUrl(class UGameFrontendHUD* GameFrontendHUD, const struct FString& URL);
	struct FString OnGetItemBigIcon__DelegateSignature(const struct FString& strPath);
	void OnFilterFinish(class UGameFrontendHUD* GameFrontendHUD, const struct FString& filterText);
	void OnEnterLobbyReloadLocalizationResource(class UGameFrontendHUD* GameFrontendHUD);
	void OnEnterGameReleaseLocalizationResource(class UGameFrontendHUD* GameFrontendHUD);
	void OnDolphinAppUpdateFinished(class UGameFrontendHUD* GameFrontendHUD);
	void OnCombatHitFeedback(class UGameFrontendHUD* GameFrontendHUD, bool bCombatHitFeedbackEnable);
	void OnBattleResultCallBack(class UGameFrontendHUD* GameFrontendHUD, const struct FBattleResultData& BattleResultData);
	void OnBattleResult(class UGameFrontendHUD* GameFrontendHUD, const struct FBattleResultData& BattleResultData);
	void ObjectPoolServerSwitch(bool bSwitchOn);
	void NotifyBeginnerFinishedGuideUpdated(class UGameFrontendHUD* GameFrontendHUD, bool GuideSwitch, TArray<struct FPlayerFinishedGuide> finished_guide, int player_level, int player_exp_type);
	void MSDKWebViewCallJS(const struct FString& strJS);
	void MoveFollowTarget(class UGameFrontendHUD* GameFrontendHUD, int FollowType, uint64_t UId);
	bool MoveFile(const struct FString& SrcFullPath, const struct FString& DesFullPath);
	bool MountPakFile(const struct FString& InPakFilename, const struct FString& Key);
	int MidasSDKInit_LuaState();
	int MidasReprovide_LuaState();
	void MidasPay(const struct FString& productid, int payItem, const struct FString& country, const struct FString& currency);
	void MidasH5Pay(const struct FString& country);
	void MidasGoodsPresent(const struct FString& productid, int payItem, const struct FString& price, const struct FString& country, const struct FString& currency, const struct FString& MetaData);
	void MidasGoods(const struct FString& productid, int payItem, const struct FString& price, const struct FString& country, const struct FString& currency);
	void MessageBoxExt(const struct FString& Caption, const struct FString& Text);
	bool MediaCopyFromPakToLocal(const struct FString& from, bool bForce);
	int MD5LuaString_LuaState();
	struct FString MD5HashAnsiString(const struct FString& str);
	void ManualSleep(float Seconds);
	struct FString LuaLoadFileToString(const struct FString& InFileName);
	void LogoutAllDevices(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void Logout(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void LoginWithExtraInfo(uint32_t Channel, const struct FString& InExtraJson, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void Login(uint32_t Channel, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void LobbySetUserRegion(int InRegion);
	void LobbySetProxyPortlist(const struct FString& InNodePortList);
	void LobbySetProxyNodelist(const struct FString& InNodeIpList);
	void LobbySetEchoPortlist(const struct FString& InEchoPortList);
	bool LobbyIsLinkProxy(const struct FString& InIp, int InPort);
	void LobbyAddAddress(const struct FString& InProtocol, const struct FString& InIp, int InPort);
	int LoadSavFile_LuaState();
	struct FString LoadIntermediateFileToString(const struct FString& Filename);
	void LoadH5FromCache(class UGameFrontendHUD* GameFrontendHUD, const struct FString& ModuleName, const struct FString& Language, int netType, int Top, int Left, int Right, const struct FString& ViewParam);
	struct FString LoadFileToStringByFullPath(const struct FString& FullPathName);
	struct FString LoadFileToString(const struct FString& Filename);
	TArray<unsigned char> LoadFileToArray(const struct FString& Filename);
	bool LoadAmendODs(TMap<uint32_t, struct FString> Keys);
	void LoadAFDTranslation();
	void LaunchUrl(struct FString* URL);
	void JoinVoiceRoom(class UGameFrontendHUD* GameFrontendHUD, const struct FString& RoomName, const struct FString& userId);
	void JoinLbsVoiceRoom(class UGameFrontendHUD* GameFrontendHUD, const struct FString& lbsRoomName, const struct FString& userId);
	bool IsWindowsClientReplay(class UGameFrontendHUD* GameFrontendHUD);
	bool IsWindowOB(class UGameFrontendHUD* GameFrontendHUD);
	bool IsUsingBluetooth();
	bool IsUseTypicalResultFlowMode(class UGameFrontendHUD* GameFrontendHUD);
	bool IsUpdateSkip(class UGameFrontendHUD* GameFrontendHUD);
	bool IsUIAutoTest();
	bool IsTypicalMode(class UGameFrontendHUD* GameFrontendHUD);
	bool IsTest();
	bool IsSystemVPNOpened();
	bool IsSupportVulkan();
	bool IsSplitMiniPakVersion();
	bool IsSplitMapPakVersion();
	bool isSkipUpdateByRepair(class UGameFrontendHUD* GameFrontendHUD);
	bool IsShipping();
	bool IsSavFileData(const struct FString& CompressedData, int CompressedSize, int UnCompressedSize, int ToCheckEndWithCDLenght);
	bool IsRuningOnVulkan(class UGameFrontendHUD* GameFrontendHUD);
	bool IsReleaseVersion(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsPVEMode(class UGameFrontendHUD* GameFrontendHUD);
	bool IsOpenAOS90FPSConfig();
	bool IsODPakMonted(const struct FString& Filename);
	bool IsNotificationEnabled();
	bool IsNoAuthMode();
	bool IsNetworkReachable();
	bool IsNeedClearHiddenUI(class UFrontendHUD* GameFrontendHUD);
	bool IsMounted(const struct FString& Filename);
	bool IsMlAIDebug();
	bool IsLaunchedByLocalNotification();
	bool IsLastSessionCrash();
	bool IsJaguar();
	bool IsIPhoneFiveSOriginal();
	bool IsIPhoneFiveS(class UGameFrontendHUD* GameFrontendHUD);
	bool IsIOSVersionAbove13();
	bool IsInstallWX(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallWhatsapp(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallVK(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallTwitter(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallQQByiTOP(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallOpenRec(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallMirrativ(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallMessenger(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallLite(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallLine(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallFaceBook(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsInstallDiscord(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsHarmonyOS();
	bool IsHapticsEngineEnable();
	bool IsForCE();
	bool IsFileReady(class UGameFrontendHUD* GameFrontendHUD, const struct FString& FilePath);
	bool IsFileExistsWithPakCheckMatchExt(const struct FString& Filename);
	bool IsFileExistsWithPakCheck(const struct FString& Filename);
	bool IsFileExistsWithOutPakCheck(const struct FString& Path);
	bool IsFileExistByFileName(const struct FString& Filename);
	bool IsFileExistByExtension(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Filename, const struct FString& fileExtension);
	bool IsFileExist(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Filename);
	bool IsEnableDSGrayPublishFlag(uint64_t nGrayPublishFlag);
	bool IsEmulatorWhenInit();
	bool IsEmulator();
	bool IsEditorDedicatedServer();
	bool IsEditor();
	bool IsDolbyAtmosSupported();
	bool IsDeviceSupportsViberation();
	bool IsDeviceSupportsHapticsEngine();
	bool IsDeviceHWSupportVulkan();
	bool IsDevelopment();
	bool IsConnected(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool IsCEVersion();
	bool IsCEHideLobbyUI(class UGameFrontendHUD* GameFrontendHUD);
	bool IsBasePrefecthOpen();
	bool IsAwakedByNotification();
	bool IsAndroidHasGyr();
	void InviteWhatsappOfflineFriends(const struct FString& Title, const struct FString& Content, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void InviteSystemOfflineFriends(const struct FString& Title, const struct FString& Content, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void InviteSMSOfflineFriends(const struct FString& Content, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void InviteLineOfflineFriends(const struct FString& Title, const struct FString& Content, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void InviteFBOfflineFriends(const struct FString& Title, const struct FString& Content, const struct FString& link, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void InstallNewApp(class UGameFrontendHUD* GameFrontendHUD);
	int InitVPN(const struct FString& InVPNGUID, const struct FString& InClientVersion);
	void InitVlink();
	void InitQuantumPlatformMisc();
	void InitLoginAccount(uint64_t AccUin, const struct FString& AccPswd, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void InitJavaFunctions();
	void InitIOSNotchSize();
	void InitIMSDKEnv(uint32_t iEnv, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void InitializePuffer(class UGameFrontendHUD* GameFrontendHUD, bool needCheck, int maxDownloadsPerTask, int maxDownTask, int maxDownloadSpeed, bool useOldInterface, bool removeOldWhenUpdate, int versionType);
	void InitializeLaggingReporter(class UGameFrontendHUD* GameFrontendHUD, bool Enable);
	void InitHF();
	void InitGCloudRemoteConfig();
	int InitDH(const struct FString& gen, const struct FString& prime, int v_srand);
	void Ini_UpdateMemResource(const struct FString& KeyWord, const struct FString& CMDvalue);
	struct FString HtmlEncode(const struct FString& UnencodedString);
	void HideH5WebView();
	bool HaveReceivedNoticeCallback();
	bool HasRemoteConfigReady();
	bool HasNotice(int Type, const struct FString& Scene);
	bool HasNotchInScreen();
	bool HasLoadGameSlotCrashFlag();
	bool HasDownloadedBasePak();
	bool HasDefinePermission(const struct FString& InPermissionName);
	bool HasActiveWifi();
	void GuestLogin();
	void GotoPlatformAppraise();
	void GMTestAllocUObjs(class UGameFrontendHUD* GameFrontendHUD, int Num);
	void GMH5Enable(bool Flag);
	void GetWidgetsByClass(class UWidget* Parent, class UClass* Type, TArray<class UWidget*>* Children);
	void GetWidgetPathByPos(int start_x, int start_y, int screensize_x, int screensize_y);
	struct FString GetWebViewTicket(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	struct FString GetWeaponDIYIconPath(const struct FString& PlayerUID, int WeaponID, const struct FString& PlanID, bool relativePath, int Width, int Height);
	int GetVolume(int InStreamType);
	bool GetUserVulkanSetting();
	int GetUserTGPATapEnableFlag();
	bool GetUseMouseForTouch();
	struct FString GetUObjectName(class UObject* uObj);
	struct FString GetUnrealNetworkStatus(class UGameFrontendHUD* GameFrontendHUD);
	struct FString GetUIRectOffset();
	struct FString GetToken(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	float GetTimeInMiliSeconds();
	int GetTGPATapDeviceSupportFlag();
	struct FString GetTelecomSvr();
	int GetTCDeviceLevel();
	int GetTableCount(const struct FString& tableName);
	int GetSystemLanguage_LuaState();
	uint32_t GetSubsideFeatureLevel();
	struct FString GetSrcVersion();
	struct FString GetSplitMapConfigInfo();
	struct FString GetSpecialData();
	int GetSoundEffectQuality();
	int GetShaderPrecompileProgress();
	int GetServerDelay(const struct FString& ServerAddress);
	int GetScreenWidthForWebview();
	int GetScreenWidth();
	int GetScreenHight();
	int GetScreenHeightForWebview();
	int GetScreenDensity();
	struct FString GetRuntimeProfileData();
	int GetRingMode();
	struct FString GetRemarkNameByGIDWithObj(class UObject* Obj, const struct FString& gid, const struct FString& PlayerName);
	struct FString GetRemarkNameByGID(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& PlayerName);
	struct FString GetRegisterChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool GetRedFlameSwitch();
	bool GetRedBloodSwitch();
	bool GetPufferInitResult(class UGameFrontendHUD* GameFrontendHUD);
	uint32_t GetPufferInitErrCode(class UGameFrontendHUD* GameFrontendHUD);
	struct FString GetPublishRegion();
	struct FString GetPublicKey(const struct FString& cli_pri_key);
	struct FString GetPUBGModuleBaseAddr(const struct FString& ParamModuleName);
	struct FString GetPrivateKey();
	struct FString GetPingReportInfo(class UGameFrontendHUD* GameFrontendHUD);
	struct FString GetPingReportData(class UGameFrontendHUD* GameFrontendHUD);
	int64_t GetPhysicalFileTime(const struct FString& InPath);
	struct FString GetPhoneType();
	struct FString GetPhoneDeviceID();
	struct FString GetPhoneAdvertisingID();
	struct FString GetPackChannel();
	struct FString GetOSVersion();
	TArray<struct FString> GetODPaksFileUseTime(const struct FString& DumpFilename);
	struct FString GetNotificationExtraDataString(const struct FString& Key);
	TArray<int> GetNotchSize();
	struct FString GetNetWorkType();
	struct FString GetNativeVersion();
	struct FString GetNativePackageTag();
	TArray<struct FString> GetMyFriendObservers(class UGameFrontendHUD* GameFrontendHUD);
	int GetMidasPF_LuaState();
	int GetMidasPayChannel_LuaState();
	int GetMemoryStats_LuaState();
	int GetMemorySize();
	struct FString GetLuaRootDir();
	int GetLoginChannel(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	struct FString GetLoadGameSlotCrashInfo();
	struct FString GetLaunchLocalNotificationID();
	struct FString GetLastSessionUserId();
	TArray<struct FString> GetKnownMissingPackage(const struct FString& PackageName, const struct FString& DumpFilename);
	int GetiTOPLbsDelay();
	struct FString GetITopGameId(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	int GetIsSecretVersion();
	bool GetIsPlayerUsingVPN();
	bool GetIsOpenBattlePlayback(class UGameFrontendHUD* GameFrontendHUD);
	int GetIPRegion();
	struct FString GetIpAddrByHost(const struct FString& Host);
	struct FString GetIpAddr();
	struct FString GetInstallChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	int GetIMSDKEnv();
	bool GetH5CacheStatus(const struct FString& ModuleName);
	void GetGvoiceReconnectInfo(class UGameFrontendHUD* GameFrontendHUD, TMap<struct FString, struct FString> Data);
	struct FGroupInfoWrapper GetGroupInfo(int SnsAction, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	int GetGoogleServiceVersionCode();
	struct FString GetGLVersion();
	struct FString GetGLType();
	struct FString GetGameStatus(class UGameFrontendHUD* GameFrontendHUD);
	struct FString GetGameModeID(class UGameFrontendHUD* GameFrontendHUD);
	struct FString GetGameMasterGUID();
	int64_t GetFrameCounter();
	float GetFPS();
	struct FString GetFireBaseFCMToken();
	int64_t GetFileSizeOnDiskBytes(const struct FString& FilePath);
	uint32_t GetFileSizeOnDisk(const struct FString& FilePath);
	uint64_t GetFileSizeCompressed(class UGameFrontendHUD* GameFrontendHUD, const struct FString& FilePath);
	struct FString GetFileDirPath(const struct FString& FilePath);
	void GetFBFriendsUnregistered(uint32_t page, uint32_t Count, uint32_t Type, const struct FString& extend, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	int GetExactDeviceLevel();
	struct FString GetEncodeUrl(const struct FString& URL);
	struct FString GetEmulatorName();
	struct FString GetDSVersion(class UGameFrontendHUD* GameFrontendHUD);
	int GetDSConnectionState();
	struct FString GetDSConnectionIP();
	struct FString GetDownLoadLanguageName();
	int GetDeviceQualityLevel();
	struct FString GetDevicePlatformName();
	struct FString GetDeviceName();
	struct FString GetDeviceModel();
	int GetDeviceMaxSupportSoundEffect();
	struct FString GetDeviceMake();
	struct FString GetDeviceInfo();
	uint64_t GetDeviceFreeSpace();
	struct FString GetCurrentRHILevel(class UGameFrontendHUD* GameFrontendHUD);
	int GetCurrentLanguage_LuaState();
	int GetCurrentChannel(class UGameFrontendHUD* GameFrontendHUD);
	struct FString GetCpuType();
	void GetCDNUpdateInfo(class UGameFrontendHUD* GameFrontendHUD, TMap<struct FString, struct FString> Data);
	struct FString GetBuildVersion();
	uint32_t GetBlockCRC(const struct FString& Filename, int64_t Offset, uint32_t Size);
	struct FString GetBattleKey(const struct FString& svr_pub_key, const struct FString& cli_pri_key);
	struct FString GetAreaIPNo();
	struct FString GetAppVersion();
	struct FString GetApplicationVersion();
	struct FString GetAOSSHOP();
	struct FString GetAndroidVersion();
	struct FString GetAndroidSysInfo();
	int GetAndroidSOVersion();
	uint32_t GetAndroidMaxStackSize();
	uint32_t GetAndroidMaxFDNum();
	uint32_t GetAndroidCurrentFDNum();
	int GetAndroidBuildForArm();
	TArray<int> GetAllLocalNotificationIDs();
	TArray<struct FString> GetAllFilesInDir(const struct FString& Dir, const struct FString& Pattern);
	struct FString GetAccountRegion();
	struct FString GetAccessToken(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void GenerateQRImage(int Tag, int Size, const struct FString& Content, const struct FString& logoPath, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void GEMReportSubEvent(class UGameFrontendHUD* GameFrontendHUD, const struct FString& EventName, const struct FString& SubEventName, TArray<struct FString> eventParams);
	void GEMReportShaderPrecompileEvent(class UGameFrontendHUD* GameFrontendHUD, bool IsSuccess, const struct FString& strDesc);
	void GEMReportEvent(class UGameFrontendHUD* GameFrontendHUD, const struct FString& EventName, TMap<struct FString, struct FString> eventParams);
	void GEMReportEnterLobbyEvent(class UGameFrontendHUD* GameFrontendHUD, bool IsSuccess, const struct FString& strDesc);
	void GCloudRemoteConfigStartOnce();
	void GCloudRemoteConfigSetUrl(const struct FString& InRemoteConfigUrl);
	struct FString GCloudRemoteConfigGetString(const struct FString& InKey, const struct FString& InDefaultValue);
	int GCloudRemoteConfigGetInt(const struct FString& InKey, int InDefaultValue);
	bool GCloudRemoteConfigGetBool(const struct FString& InKey, bool InDefaultValue);
	void GCloudRemoteConfigClear();
	void GameMasterSetUserInfo(const struct FString& InPaidInfo, const struct FString& InUserToken, const struct FString& InAppId);
	void GameMasterSetUsableRegion(const struct FString& InRegion);
	void GameMasterSetUdpEchoPort(int InPort);
	void GameMasterSetOnlyWifiAccel(bool InOn);
	void GameMasterSetFreeFlowUser(int InType);
	void GameMasterOnNetDelay(int InMillis);
	bool GameMasterIsAccelOpened();
	int GameMasterInit(int InHookType, const struct FString& InGuid, const struct FString& InLibs, int InEchoPort);
	struct FString GameMasterGetWebUIUrl(int InType);
	struct FString GameMasterGetVIPValidTime();
	struct FString GameMasterGetUserID();
	int GameMasterGetAccelerationStatus();
	void GameMasterClearAccelAddr();
	void GameMasterBeginRound(const struct FString& InOpenId, const struct FString& InPvpId);
	void GameMasterAddNewArenaAddress(const struct FString& InProtocol, const struct FString& InIp, int InPort);
	void GameMasterAddAccelAddr(const struct FString& InProtocol, const struct FString& InIp, int InPort);
	void GameJoySwitchOn(int isOn);
	void GameJoyStopManualRecord();
	void GameJoyStartMomentsRecord();
	void GameJoyStartManualRecord();
	void GameJoySetVideoQuality(int Quality);
	void GameJoySetMomentRecordSwitchOn(int isOn);
	void GameJoySetLuaguage();
	void GameJoySetCurrentRecorderPosition(float X, float Y);
	bool GameJoyIsSDKFeatureSupport();
	void GameJoyGenerateMomentsVideo(TArray<struct FTimeStamp> shortVideosTimeStampList, TArray<struct FTimeStamp> largeVideosTimeStampList, const struct FString& Title, TMap<struct FString, struct FString> ExtraInfo);
	void GameJoyEndMomentsRecord();
	void GameJoyClearMomentsVideo();
	bool FullPathFileExist(const struct FString& Filename);
	void FlushKnownMissingPackageRefObject();
	void FinishPufferUpdateInDolphin(class UGameFrontendHUD* GameFrontendHUD, bool IsFinished);
	TArray<struct FString> FindFilesRecursiveSkipPakPlatform(const struct FString& Dir, const struct FString& Pattern);
	int FindFiles_LuaState();
	void FileSystemTesting(uint32_t Count);
	void ExitGameForSafety();
	void ExitGame();
	void EnterLoading(class UGameFrontendHUD* GameFrontendHUD);
	void EnterFightChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid);
	void EnterBattleStandAlone(class UGameFrontendHUD* GameFrontendHUD, const struct FString& MapPath, uint32_t PlayerKey, const struct FString& PlayerName, const struct FString& DynamicLevelsOp);
	void EnterBattle(class UGameFrontendHUD* GameFrontendHUD, const struct FString& HostnameOrIP, uint32_t Port, uint32_t PlayerKey, const struct FString& PlayerName, const struct FString& PacketKey, uint64_t GameID, bool IsObserver, TMap<int, struct FString> AdvConfig, int WaterType, uint32_t WaterUserID, uint32_t ModeID, uint32_t ModeType, const struct FString& DynamicLevelsOp);
	struct FString EncryptUID(const struct FString& sUid, const struct FString& sKey);
	void EncryptItemData(TArray<int> EncryptionItemList);
	void EnableUseOldInterface(class UGameFrontendHUD* GameFrontendHUD, bool Enable);
	void EnableTxtCheck();
	bool EnableShaderGroup(const struct FString& GroupName);
	void EnableReportGVoiceEvent(class UGameFrontendHUD* GameFrontendHUD, bool GVoiceInitGVoiceComponentReportEnable, bool GVoiceJoinRoomReportEnable, bool GVoiceQuitRoomReportEnable, bool GVoiceJoinLbsRoomReportEnable, bool GVoiceQuitLbsRoomReportEnable, bool GVoiceOnJoinTeamRoomReportEnable, bool GVoiceOnJoinLbsRoomReportEnable);
	void EnableNativeDump(int EnableDump);
	void EnableLocalizationStatus(class UGameFrontendHUD* GameFrontendHUD, bool Status);
	void EnableIosStuckWork(class UGameFrontendHUD* GameFrontendHUD, bool bEnable);
	void EnableGvoiceGemReport(class UGameFrontendHUD* GameFrontendHUD, bool Enable);
	void EnableGvoice(class UGameFrontendHUD* GameFrontendHUD, bool Enable);
	void EnableCampGvoice(class UGameFrontendHUD* GameFrontendHUD, bool Enable);
	void EnableAutoObjectRefreshStage(bool bEnable);
	void EnableAudioRouteChangedNotify(bool Enable);
	struct FString DumpPackageMemInfo(TArray<struct FString> AssetList);
	void DumpOpenReadCollect(class UGameFrontendHUD* GameFrontendHUD, const struct FString& DumpFilename);
	void DumpLogFile(bool backup);
	void Disconnect(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void DisableRepairResource(class UGameFrontendHUD* GameFrontendHUD);
	void DirectToSetting();
	void DestroyConnector(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool DeleteFile(const struct FString& fullPath);
	void DeleteDirectory(const struct FString& FilePath);
	void DelayToSetAutoInitFacebookLog(bool IsAutoInit);
	void DelayToInitFacebookSDK(bool IsAutoInit, bool WithLaunchOption);
	void DelayInitThirdPartSDK();
	class UTexture2D* CreateQRCodeTexture(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Text);
	void CreateHapticsEngine(const struct FScriptDelegate& Callback);
	struct FString ConvertToAbsolutePathForExternalAppForWrite(const struct FString& FilePath);
	struct FString ConvertToAbsolutePathForExternalAppForRead(const struct FString& FilePath);
	struct FString ConvertTMap2JsonStr(TMap<struct FString, struct FString> mapData);
	struct FString ConvertRelativePathToFull(const struct FString& InPath);
	struct FString ConvertGamePathToRelativeFilePath(const struct FString& Path);
	struct FString ConsoleCommand(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Command);
	void ConnectToURLWithDNSProxy(const struct FString& ProxyIP, const struct FString& URL, int ConnectTimeOutSeconds, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void ConnectToURL(const struct FString& URL, int ConnectTimeOutSeconds, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	struct FString ComputerName();
	void CloseWebView();
	void CloseVLink();
	void CloseVideoListDialog();
	void CloseH5WebView(class UGameFrontendHUD* GameFrontendHUD);
	void CloseDebugg();
	void ClipBoardCopy(const struct FString& Text);
	void ClientKickPlayerFromGame(class UGameFrontendHUD* GameFrontendHUD);
	void ClientEnterWarMode(class UGameFrontendHUD* GameFrontendHUD);
	void ClientConfirmReturnToGame(class UGameFrontendHUD* GameFrontendHUD);
	void ClientConfirmMisKill(class UGameFrontendHUD* GameFrontendHUD, int bConfirm);
	void ClickButton(const struct FString& Path, float duringtime, int start_x, int start_y, int end_x, int end_y, int p_TouchIndex, int p_ControllerId, int screensize_x, int screensize_y, const struct FString& UsePos);
	void ClearUpdatedSoPatch();
	void ClearNotifications();
	void ClearNotice();
	void ClearIGProxyData();
	void ClearHasLoadGameSlotCrashFlag();
	void ClearChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void ClearAllLocalNotifications();
	void CheckRegisterGestureConflictWithZoom();
	bool CheckLocalizationExist();
	TArray<struct FString> CheckFilesInPak(TArray<struct FString> Files);
	void CheckBeforeInitPuffer();
	void ChangeLocalizationReleaseTestStatus(class UGameFrontendHUD* GameFrontendHUD, bool Status);
	bool CanUseHapticsEngine();
	void CancelLocalNotification(int NotificationID);
	void CallIngameFirstTimeTips(class UGameFrontendHUD* GameFrontendHUD, const struct FString& tableName, const struct FString& FunctionName);
	void CallEngineGC();
	void CacheH5WebView(const struct FString& ModuleName);
	void BuglySetAppVersion(const struct FString& Version, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void BuglyPutUserData(const struct FString& Key, const struct FString& Value, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void BuglyPostExceptionFull(int Category, const struct FString& Name, const struct FString& Msg, const struct FString& stack, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void BuglyPostException(int Category, const struct FString& Reason, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void BuglyLog(int Level, const struct FString& Tag, const struct FString& Log, bool needDump, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void AutoTestWaitForUIWithName(const struct FString& UIName);
	void AutoTestWaitForSecond(int sec);
	bool AutoTestWaitForJumpPlane();
	void AutoTestVehicleDriverShoot(class UGameFrontendHUD* GameFrontendHUD);
	void AutoTestVaultWall();
	void AutoTestUsePropSkillClientEx(class UGameFrontendHUD* GameFrontendHUD);
	void AutoTestUseItemClientEx(class UGameFrontendHUD* GameFrontendHUD, int ItemID);
	void AutoTestUseItem(int ItemID);
	void AutoTestUpgradePropSkillClientEx(class UGameFrontendHUD* GameFrontendHUD, int ItemID);
	void AutoTestToggleVehicleSync(class UGameFrontendHUD* GameFrontendHUD, bool Val);
	void AutoTestThrowBoomOnlyClientEx(class UGameFrontendHUD* GameFrontendHUD, int SkillID);
	void AutoTestThrowBoom(int SkillID);
	void AutoTestSwitchWeapon(int WeaponType);
	void AutoTestSwitchMode(const struct FString& FunName);
	void AutoTestSwitchGameStatus(class UGameFrontendHUD* GameFrontendHUD, const struct FName& GameStatus, const struct FString& Options);
	void AutoTestStopRecordStats();
	void AutoTestStartRecordStats(const struct FString& FileStr);
	void AutoTestStartFireOnlyClientEx(class UGameFrontendHUD* GameFrontendHUD, int X, int Y, int Z, int sec);
	void AutoTestStartFire(int X, int Y, int Z, int sec);
	void AutoTestSpecating(class UGameFrontendHUD* GameFrontendHUD, int leftTeamCnt);
	void AutoTestSpawnVehicle(const struct FString& ResPath);
	void AutoTestSpawnAI(int ID, float PosiX, float PosiY, float PosiZ);
	void AutoTestSetVehicleRotation(int X, int Y, int Z);
	void AutoTestSetRecordFrequency(uint32_t Frequency);
	void AutoTestSetActorRotation(float Rate, float Speed);
	void AutoTestSetActorPitch(float Rate);
	void AutoTestSetActorFacePoint(int X, int Y, int Z);
	void AutoTestSendBuffertoSvr(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void AutoTestReloadOnlyClientEx(class UGameFrontendHUD* GameFrontendHUD);
	struct FVector2D AutoTestPickupItemOnlyClientEx(class UGameFrontendHUD* GameFrontendHUD);
	struct FVector2D AutoTestPickupItem(int ItemID);
	void AutoTestOpenTraceRPC();
	void AutoTestOpenScope(bool bOpenScope);
	void AutoTestOpenDoorOnlyClientEx(class UGameFrontendHUD* GameFrontendHUD, int bOpen);
	void AutoTestMustDie(class UGameFrontendHUD* GameFrontendHUD, int leftTeamCnt);
	void AutoTestMoveVehicleForward(float Speed, float Rate, float sec);
	void AutoTestMoveToPoint(int X, int Y, int Z);
	void AutoTestJumpPlane(int sec);
	void AutoTestJump();
	bool AutoTestIsOnVehicle(class UGameFrontendHUD* GameFrontendHUD);
	bool AutoTestIsDriver(class UGameFrontendHUD* GameFrontendHUD);
	bool AutoTestIsCurrentCommandFinished();
	void AutoTestInputMovement(float Rate);
	void AutoTestGMVehicleMoveAndTowardClientEx(class UGameFrontendHUD* GameFrontendHUD, float X, float Y, float Z, float X1, float Y1, float Z1);
	void AutoTestGMGotoClientEx(class UGameFrontendHUD* GameFrontendHUD, int X, int Y, int Z);
	void AutoTestGMGoto(int X, int Y, int Z);
	void AutoTestGMCommand(const struct FString& Command);
	struct FVector AutoTestGetVehicleLocationClientEx(class UGameFrontendHUD* GameFrontendHUD);
	struct FVector AutoTestGetVehicleLocation();
	void AutoTestGetRuntimeStats();
	void AutoTestGetRenderTimeDetail();
	void AutoTestGetPrimitivesDetail();
	void AutoTestGetOnVehicle(int SeatType);
	void AutoTestGetOffVehicle();
	struct FVector AutoTestGetNearVehiclePos();
	void AutoTestGetMemoryDetail();
	struct FString AutoTestGetMapName();
	struct FString AutoTestGetGameModeState();
	struct FVector AutoTestGetFrameInfo();
	void AutoTestGetDrawCallDetail();
	int AutoTestGetDis2D(int X, int Y, int Z, int x2, int y2, int z2);
	struct FVector AutoTestGetCircleLocationClientEx(class UGameFrontendHUD* GameFrontendHUD);
	TArray<int> AutoTestGetAvailableDeadBoxItem();
	struct FString AutoTestGetActorName();
	TArray<struct FVector> AutoTestGetActorLocationListClientEx(class UGameFrontendHUD* GameFrontendHUD, int ActorType, float RangeRadius);
	struct FVector AutoTestGetActorLocation(const struct FString& PlayerName);
	float AutoTestForceVehiclePosPullClientEx(class UGameFrontendHUD* GameFrontendHUD, bool bNext);
	void AutoTestForceDeleteCmdAnim();
	void AutoTestEnableUITest();
	void AutoTestDropItemClientEx(class UGameFrontendHUD* GameFrontendHUD, int ItemID, int nCount);
	void AutoTestContinuousMoveTo(float X, float Y, float Z);
	void AutoTestConsoleCommand(const struct FString& Command);
	void AutoTestCloseTraceRPC();
	void AutoTestClickButton(const struct FString& ButtonName);
	void AutoTestAddItemClientEx(class UGameFrontendHUD* GameFrontendHUD, int ItemID, int nCount);
	void AutoTestAddItem(int ItemID, int nCount);
	void AutoMoveToTargetPosClientEx(class UGameFrontendHUD* GameFrontendHUD, const struct FVector& targetPos);
	void AutoMovePawnToTargetPosClientEx(class UGameFrontendHUD* GameFrontendHUD, const struct FVector& targetPos);
	void AskForNotificationPermission();
	bool AppendForcedKeepODPaks(TArray<struct FString> Filenames);
	bool AndroidShouldShowPermissionRationale();
	bool AndroidCheckPermission();
	void AkAudio_UnloadInitBank();
	void AkAudio_UnloadAllFilePackages();
	void AkAudio_StopAllSounds(bool bShouldStopUISounds);
	void AkAudio_LoadInitBank();
	void AkAudio_Flush(class UWorld* WorldToFlush);
	void AkAudio_ClearBanks();
	int AddMemoryLogSize(int b_size);
	void AddKnownMissingPackage(const struct FString& PackageName, class UObject* BindObj, bool bReplace);
	void AddCrashContextData(int Key, const struct FString& Val, bool bAppendTimeStamp, int reportLevel);
	void AddAttachFileString(const struct FString& Type, bool bClear, struct FString* strinfo);
};


// Class Client.ScriptHelperEngine
// 0x0000 (0x0028 - 0x0028)
class UScriptHelperEngine : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScriptHelperEngine");
		return pStaticClass;
	}


	TArray<unsigned char> TestLz4Decompress(TArray<unsigned char> Source, bool bEnable);
	TArray<unsigned char> TestLz4Compress(TArray<unsigned char> Source);
	struct FString ReplaceEmoji(const struct FString& Content, int MaxEmojiNum, const struct FString& SpecialCharacter);
	bool IsLowMemoryDevice();
	float GetMemoryUsedVirtualInKB();
	float GetMemoryUsedPhysicalInKB();
};


// Class Client.SDKCallbackHelper
// 0x0048 (0x0070 - 0x0028)
class USDKCallbackHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    SDKCallbackDelegate;                                      // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.SDKCallbackHelper");
		return pStaticClass;
	}


	void Init();
	class USDKCallbackHelper* GetInstance();
};


// Class Client.SettingSubsystem
// 0x0240 (0x0270 - 0x0030)
class USettingSubsystem : public UGameInstanceSubsystem
{
public:
	bool                                               bUseRegisterDelegateOptimize;                             // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TMap<struct FString, bool>                         CacheRegisterProperties_Bool;                             // 0x0038(0x0050) (ZeroConstructor)
	TMap<struct FString, int>                          CacheRegisterProperties_Int;                              // 0x0088(0x0050) (ZeroConstructor)
	TMap<struct FString, float>                        CacheRegisterProperties_Float;                            // 0x00D8(0x0050) (ZeroConstructor)
	struct FString                                     CachedSaveGameName;                                       // 0x0128(0x0010) (ZeroConstructor, Config)
	TArray<struct FCustomSettingSaveGame>              CustomSettingSaveGames;                                   // 0x0138(0x0010) (ZeroConstructor)
	struct FScriptDelegate                             GetUserSettingsDelegate;                                  // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	class UEffectSettingMgr*                           EffectSettingMgrInstace;                                  // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData)
	class USaveGame*                                   UserSettings;                                             // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      UserSettingsClass;                                        // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     UserSettingsClassName;                                    // 0x0170(0x0010) (ZeroConstructor, Config)
	struct FString                                     ActiveSaveGameName;                                       // 0x0180(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0190(0x0008) MISSED OFFSET
	struct FString                                     LanguageSettingsClassName;                                // 0x0198(0x0010) (ZeroConstructor, Config)
	struct FString                                     LanguageSaveGameName;                                     // 0x01A8(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData02[0x60];                                      // 0x01B8(0x0060) MISSED OFFSET
	TMap<struct FString, bool>                         LanguageMap;                                              // 0x0218(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.SettingSubsystem");
		return pStaticClass;
	}


	bool SetUserSettings_String(const struct FString& PropertyName, const struct FString& Val);
	bool SetUserSettings_Int(const struct FString& PropertyName, int Value);
	bool SetUserSettings_Float(const struct FString& PropertyName, float Value);
	bool SetUserSettings_Bool(const struct FString& PropertyName, bool Value, bool IngoreSave);
	void RegisterUserSettingsDelegate_Int(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	void RegisterUserSettingsDelegate_Float(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	void RegisterUserSettingsDelegate_Bool(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	void RegisterUserSettingsDelegate(const struct FScriptDelegate& Delegate);
	class USaveGame* GetUserSettingsByDelegate(const struct FString& LayoutName);
	struct FString GetUserSettings_String(const struct FString& PropertyName);
	int GetUserSettings_Int(const struct FString& PropertyName);
	float GetUserSettings_Float(const struct FString& PropertyName);
	bool GetUserSettings_Bool(const struct FString& PropertyName);
	class USaveGame* GetUserSettings();
	struct FString GetUserLanguageSettingsProperty_String(const struct FString& PropertyName);
	class UEffectSettingMgr* GetEffectSettingMgr();
	class USaveGame* GetCustomSetting(const struct FString& InSlotName);
	void FinishModifyUserSettings();
	void CheckLocalizationLanguage();
	bool CheckChangeWithCache(class UObject* Source, class UProperty* Property, const struct FString& PropertyName);
	void CacheRegisterValue(class UObject* Source, class UProperty* Property, const struct FString& PropertyName);
	void BeginModifyUserSettings();
	void AddCustomSetting(const struct FString& InSlotName, class USaveGame* InSaveGame);
};


// Class Client.STExtraClientUtils
// 0x0000 (0x0028 - 0x0028)
class USTExtraClientUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.STExtraClientUtils");
		return pStaticClass;
	}


	void GetWidgetHandleAsyncWithCallBack(class UObject* WorldContext, const struct FString& ModuleName, const struct FString& WidgetKey, const struct FScriptDelegate& Callback);
	class UUAEUserWidget* GetDynamicWidgetHandle(class UObject* WorldContext, const struct FString& ModuleName, const struct FString& WidetKey);
	class USTExtraClientUIBPUtils* GetBPUtils();
	int AsyncLoadAssetInstWithCallback(const struct FString& InPath, const struct FScriptDelegate& Callback);
};


// Class Client.STExtraClientUIBPUtils
// 0x0128 (0x0150 - 0x0028)
class USTExtraClientUIBPUtils : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0028(0x00D8) MISSED OFFSET
	TMap<int, struct FAssetAsyncRequest>               PendingAsyncAssetRequests;                                // 0x0100(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.STExtraClientUIBPUtils");
		return pStaticClass;
	}


	void OnAsyncAssetLoaded(const struct FSoftObjectPath& InSoftPath, int RequestIdx);
	int AsyncLoadAssetInstWithCallback(const struct FString& InPath, const struct FScriptDelegate& Callback);
};


// Class Client.Translator
// 0x00F8 (0x0120 - 0x0028)
class UTranslator : public UObject
{
public:
	struct FString                                     SubscriptionKey;                                          // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	struct FString                                     StoredAccessToken;                                        // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptDelegate                             OnGetAccessTokenDelegate;                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnDetectDelegate;                                         // 0x0058(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnTranslateDelegate;                                      // 0x0068(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0078(0x0080) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0100(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.Translator");
		return pStaticClass;
	}


	void TranslateV2(int Channel, int ID, const struct FString& Text);
	void Translate(const struct FString& URL, const struct FString& Verb, TMap<struct FString, struct FString> Headers, const struct FString& Content);
	void PostMsg(const struct FString& URL, const struct FString& Content);
	void OnTranslateV2(bool Success, const struct FString& Data);
	void OnTranslate__DelegateSignature(bool IsSuccess, const struct FString& LanguageFrom, const struct FString& Translation);
	void OnTranslate(bool Success, const struct FString& Data);
	void OnGetAccessTokenV2(bool Success, const struct FString& Data);
	void OnGetAccessToken__DelegateSignature(bool IsSuccess, const struct FString& Token);
	void OnGetAccessToken(bool Success, const struct FString& Data);
	void OnDetectV2(bool Success, const struct FString& Data);
	void OnDetect__DelegateSignature(bool IsSuccess, const struct FString& from, const struct FString& to);
	void OnDetect(bool Success, const struct FString& Data);
	bool HasTranslating();
	void GetAccessToken(bool bForceGet, const struct FString& URL, const struct FString& Verb, TMap<struct FString, struct FString> Headers, const struct FString& Content);
	void Detect(const struct FString& URL, const struct FString& Verb, TMap<struct FString, struct FString> Headers, const struct FString& Content);
};


// Class Client.TssManager
// 0x0038 (0x0060 - 0x0028)
class UTssManager : public UObject
{
public:
	struct FString                                     TssHostInfo;                                              // 0x0028(0x0010) (ZeroConstructor, Config)
	struct FString                                     TssCDNHostInfo;                                           // 0x0038(0x0010) (ZeroConstructor, Config)
	struct FString                                     TssBuildInIpInfo;                                         // 0x0048(0x0010) (ZeroConstructor, Config)
	int                                                TssLocal;                                                 // 0x0058(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.TssManager");
		return pStaticClass;
	}


	int SendSkdData_LuaState();
	int SendEigeninfoData_LuaState();
	uint32_t SaveSendEigeninfoCode_LuaState();
	int OnRecvData_LuaState();
	uint32_t InvokeSDKIoctl(int Command, const struct FString& InCmdData);
	int GetUserTag4Lua_LuaState();
	int GetDeviceFeature_LuaState();
	int EigenArrayObfuscationVerify_LuaState();
};


// Class Client.UAEClientGameMode
// 0x0000 (0x04C0 - 0x04C0)
class AUAEClientGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UAEClientGameMode");
		return pStaticClass;
	}

};


// Class Client.UAELobbyGameMode
// 0x0000 (0x04C0 - 0x04C0)
class AUAELobbyGameMode : public AUAEClientGameMode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UAELobbyGameMode");
		return pStaticClass;
	}

};


// Class Client.UAELobbyPlayerController
// 0x0000 (0x0758 - 0x0758)
class AUAELobbyPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UAELobbyPlayerController");
		return pStaticClass;
	}

};


// Class Client.UTRichTextBlock
// 0x0A08 (0x0B08 - 0x0100)
class UUTRichTextBlock : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHyperlinkClicked;                                       // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     ContentText;                                              // 0x0118(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0128(0x0010) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0138(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bSupportHyLink;                                           // 0x0190(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSupportImage;                                            // 0x0191(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0192(0x0002) MISSED OFFSET
	struct FLinearColor                                TextColor;                                                // 0x0194(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x01A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextVerticalJustify>                  TextVerticalJustification;                                // 0x01A5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AutoWrapText;                                             // 0x01A6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x01A7(0x0001) MISSED OFFSET
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x01A8(0x0680) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FMargin                                     HScrollBarPadding;                                        // 0x0828(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FMargin                                     VScrollBarPadding;                                        // 0x0838(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              WrapTextAt;                                               // 0x0848(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x084C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              LineHeightPercentage;                                     // 0x085C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     HyperlinkDecoratorTag;                                    // 0x0860(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HyperlinkCallBackFunctionName;                            // 0x0870(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HyperlinkCallBackTableName;                               // 0x0880(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData04[0x270];                                     // 0x0890(0x0270) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0B00(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UTRichTextBlock");
		return pStaticClass;
	}


	void SetText(const struct FText& InText);
	void SetGameFrontendHUD(class UGameFrontendHUD* InHUD);
	void OnHyperlinkClickedEvent__DelegateSignature(const struct FMetaDataHolder& MetaDataHolder);
	struct FText GetText();
};


// Class Client.AEVarButton
// 0x0438 (0x0550 - 0x0118)
class UAEVarButton : public UContentWidget
{
public:
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0118(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FButtonStyle                                WidgetStyle;                                              // 0x0120(0x0338) (Edit, BlueprintVisible)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0458(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0468(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x0478(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              // 0x0479(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x047A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassMouseEvent;                                         // 0x047B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	struct FString                                     ButtonVar;                                                // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnButtonClicked;                                          // 0x0490(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonPressed;                                          // 0x04A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonReleased;                                         // 0x04B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonHovered;                                          // 0x04C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonUnhovered;                                        // 0x04D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x04E0(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x10];                                      // 0x04F0(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0500(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnPressed;                                                // 0x0510(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnReleased;                                               // 0x0520(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnHovered;                                                // 0x0530(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnUnhovered;                                              // 0x0540(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AEVarButton");
		return pStaticClass;
	}


	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);
	void SetStyle(const struct FButtonStyle& InStyle);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	bool IsPressed();
};


// Class Client.ReuseFallC
// 0x0CA8 (0x0F08 - 0x0260)
class UReuseFallC : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnBeforeNewItem;                                          // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAfterNewItem;                                           // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRefreshItem;                                            // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemCreated;                                            // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTouchFinish;                                            // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOverscrollState;                                        // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           // 0x02C0(0x02E8) (Edit)
	EWidgetClipping                                    ScrollBoxClipping;                                        // 0x05A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05A9(0x0007) MISSED OFFSET
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x05B0(0x0680) (Edit)
	ESlateVisibility                                   ScrollBarVisibility;                                      // 0x0C30(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C31(0x0003) MISSED OFFSET
	struct FVector2D                                   ScrollbarThickness;                                       // 0x0C34(0x0008) (Edit, IsPlainOldData)
	int                                                ColumnNum;                                                // 0x0C3C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemHeight;                                               // 0x0C40(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemPaddingX;                                             // 0x0C44(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemPaddingY;                                             // 0x0C48(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverscrollLength;                                         // 0x0C4C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // 0x0C50(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, class UClass*>                OtherItemClass;                                           // 0x0C58(0x0050) (Edit, ZeroConstructor)
	int                                                PreviewCount;                                             // 0x0CA8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemPoolMaxNum;                                           // 0x0CAC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TopSpaceReserved;                                         // 0x0CB0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BottomSpaceReserved;                                      // 0x0CB4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x38];                                      // 0x0CB8(0x0038) MISSED OFFSET
	class UClass*                                      CurItemClass;                                             // 0x0CF0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x210];                                     // 0x0CF8(0x0210) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ReuseFallC");
		return pStaticClass;
	}


	void SetScrollOffset(float NewScrollOffset);
	void SetItemSize(int __Idx, float __Size);
	void SetItemFullStyle(int idx);
	bool SetCurItemClass(const struct FString& StrName);
	void ScrollToStart();
	void ScrollToEnd();
	void ResetCurItemClassToDefault();
	void Reload(int __ItemCount);
	void RefreshOne(int __Idx);
	void Refresh();
	void OnUpdateItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnTouchFinishDelegate__DelegateSignature();
	void OnTouchFinishCallback();
	void OnOverscrollStateDelegate__DelegateSignature(EReuseFallOverscrollState State);
	void OnCreateItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnBeforeNewItemDelegate__DelegateSignature(int idx);
	void OnAfterNewItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void JumpByIdx(int __Idx, bool bImmedia);
	struct FVector2D GetViewSize();
	float GetScrollOffset();
	EReuseFallOverscrollState GetOverscrollState();
	struct FVector2D GetContentSize();
	void ClearItemFullStyle();
	void Clear();
};


// Class Client.ReuseListC
// 0x0AD0 (0x0D30 - 0x0260)
class UReuseListC : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnUpdateItemParam;                                        // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateItem;                                             // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnScrollItem;                                             // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCreateItem;                                             // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           // 0x02A0(0x02E8) (Edit)
	EWidgetClipping                                    ScrollBoxClipping;                                        // 0x0588(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   ScrollBoxVisibility;                                      // 0x0589(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x058A(0x0006) MISSED OFFSET
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0590(0x0680) (Edit)
	ESlateVisibility                                   ScrollBarVisibility;                                      // 0x0C10(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C11(0x0003) MISSED OFFSET
	struct FVector2D                                   ScrollbarThickness;                                       // 0x0C14(0x0008) (Edit, IsPlainOldData)
	int                                                ItemWidth;                                                // 0x0C1C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemHeight;                                               // 0x0C20(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PaddingX;                                                 // 0x0C24(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PaddingY;                                                 // 0x0C28(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TitleSize;                                                // 0x0C2C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TitlePadding;                                             // 0x0C30(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AutoTitleSize;                                            // 0x0C34(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EReuseListStyle                                    Style;                                                    // 0x0C35(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0C36(0x0002) MISSED OFFSET
	class UClass*                                      ItemClass;                                                // 0x0C38(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PreviewCount;                                             // 0x0C40(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EReuseListNotFullAlignStyle                        NotFullAlignStyle;                                        // 0x0C44(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NotFullScrollBoxHitTestInvisible;                         // 0x0C45(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateForceLayoutPrepass;                                 // 0x0C46(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0C47(0x0001) MISSED OFFSET
	int                                                ItemCacheNum;                                             // 0x0C48(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DelayUpdateTimeLimitMS;                                   // 0x0C4C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xE0];                                      // 0x0C50(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ReuseListC");
		return pStaticClass;
	}


	void SetTitleSlotAutoSize(bool as);
	void SetTitleSize(int SZ);
	void SetScrollOffset(float NewScrollOffset);
	void ScrollToStart();
	void ScrollToEnd();
	void Reset(class UClass* __ItemClass, EReuseListStyle __Style, int __ItemWidth, int __ItemHeight, int __PaddingX, int __PaddingY);
	void Reload(int __ItemCount);
	void RefreshParam(const struct FString& _Param);
	void RefreshOneParam(int __Idx, const struct FString& _Param);
	void RefreshOne(int __Idx);
	void Refresh();
	void OnUpdateItemParamDelegate__DelegateSignature(class UUserWidget* Widget, int idx, const struct FString& Param);
	void OnUpdateItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnScrollItemDelegate__DelegateSignature(int BeginIdx, int EndIdx);
	void OnCreateItemDelegate__DelegateSignature(class UUserWidget* Widget);
	void JumpByIdxStyle(int __Idx, EReuseListJumpStyle __Style);
	void JumpByIdx(int __Idx);
	struct FVector2D GetViewSize();
	float GetScrollOffset();
	int GetPaddingY();
	int GetPaddingX();
	int GetItemWidthAndPaddingX();
	int GetItemWidth();
	int GetItemHeightAndPaddingY();
	int GetItemHeight();
	struct FVector2D GetContentSize();
	void GetAllWidgetItems(TArray<class UUserWidget*>* ResultItemList);
	class UUserWidget* FindItem(int idx);
	void Clear();
};


// Class Client.ReusePageC
// 0x0138 (0x0398 - 0x0260)
class UReusePageC : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnUpdateItem;                                             // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPageChanged;                                            // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCreateItem;                                             // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginDrag;                                              // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndDrag;                                                // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndScroll;                                              // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UClass*                                      ItemClass;                                                // 0x02C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsLoopPage : 1;                                           // 0x02C8(0x0001) (Edit)
	unsigned char                                      IsVertical : 1;                                           // 0x02C8(0x0001) (Edit)
	unsigned char                                      CanDrag : 1;                                              // 0x02C8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02C9(0x0003) MISSED OFFSET
	int                                                CanDragLimit;                                             // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AutoPlayRate;                                             // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShowPageNum;                                              // 0x02D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DragPageNum;                                              // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DChgPageParam;                                            // 0x02DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScrollInertial;                                           // 0x02E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScrollRate;                                               // 0x02E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x02E8(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ReusePageC");
		return pStaticClass;
	}


	void SetAutoPlayRate(float Rate);
	void SelectPage(int __Idx);
	void Reload(int __Count);
	void Play(bool bPlay);
	void OnUpdateItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnPageChangedDelegate__DelegateSignature(int PageIdx);
	void OnEndScrollDelegate__DelegateSignature(int PageIdx);
	void OnEndDragDelegate__DelegateSignature(int PageIdx);
	void OnCreateItemDelegate__DelegateSignature(class UUserWidget* Widget);
	void OnBeginDragDelegate__DelegateSignature();
	void MovePrePage();
	void MoveNextPage();
	bool IsDraging();
	int GetPageCount();
	int GetPage();
	float GetOffset();
	float GetAutoPlayRate();
	void GetAllItems(bool OnlyVisible, TArray<class UUserWidget*>* ResultItemList);
	void ClearCache();
};


// Class Client.UDPPingCollector
// 0x0110 (0x0138 - 0x0028)
class UUDPPingCollector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
	TMap<struct FString, struct FPingServerInfo>       mUDPPingInfoMap;                                          // 0x0058(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00A8(0x0020) MISSED OFFSET
	struct FScriptMulticastDelegate                    UDPPingShadowResultToLuaDelegate;                         // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x60];                                      // 0x00D8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UDPPingCollector");
		return pStaticClass;
	}


	void TickUDPPing(float DeltaTime);
	void setUDPPingServerAddress(const struct FString& ServerIP, const struct FString& ServerPort, int ZoneID, int WaterMarkType);
	void PingServer(const struct FString& address, float Timeout, int WaterMarkType);
	void OnPingServerResultDelegate__DelegateSignature(const struct FString& address, int IsSuccess, float Time);
	bool IsChooingZoneAccess();
	bool isAllZoneHasPingValue();
	void Init(float MinPingintervalTime, float pingintervalTime, float pingTimeoutSecond, float normalDelayMilliSecond, float maxAutoChooseZoneDelayMilliSecond);
	float GetZoneServerDelay(const struct FString& ServerAddress);
	int GetMinDealyAddress();
	void ChoosingZone(int ZoneID, const struct FString& AddrIP);
};


// Class Client.ViberateEngine
// 0x0000 (0x0028 - 0x0028)
class UViberateEngine : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ViberateEngine");
		return pStaticClass;
	}

};


// Class Client.VibrateSystemManager
// 0x0468 (0x0498 - 0x0030)
class UVibrateSystemManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FString                                     ClassPath;                                                // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     VibrateAssetTablePath;                                    // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	int                                                MaxAmplitude;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                GroundSpesificMatVibrationMinGrear;                       // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VehicleBreakingMinSpeedThreshold;                         // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VehicleGearMinSpeedThreshold;                             // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<int>                                        TriggerVehicleVibrateGroundPhysicMatList;                 // 0x0070(0x0010) (Edit, ZeroConstructor, Config)
	float                                              TriggerVehicleVibrateMinSlip;                             // 0x0080(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TriggerVehicleVibrateMinSuspensionRaisePercent;           // 0x0084(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VehicleRaiseSuspensionVibrateInerval;                     // 0x0088(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                InitAssetProccessNumFrames;                               // 0x008C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     LoopTime;                                                 // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00A0(0x0050) MISSED OFFSET
	TMap<int, EVibrateTriggerEventType>                LoadedVibrateAssetIDAndEventTypeMap;                      // 0x00F0(0x0050) (ZeroConstructor)
	TMap<EVibrateStrengthLevel, float>                 VibrateStrengthLevelModifireMap;                          // 0x0140(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<EVibrateTriggerEventType, float>              VibrateEventMinIntervalMap;                               // 0x0190(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   CharacterVibrateEventList;                                // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   WeaponVibrateEventList;                                   // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   VehicleVibrateEventList;                                  // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   SoundUIVibrateEventList;                                  // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   CharacterBeHitVibrateEventList;                           // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   VehicleEngineVibrateEventList;                            // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   VehicleBeHitVibrateEventList;                             // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bEntireVibrationSwitch;                                   // 0x0250(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCharacterVibrationSwitch;                                // 0x0251(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWeaponVibrationSwitch;                                   // 0x0252(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleVibrationSwitch;                                  // 0x0253(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSoundUIVibrationSwitch;                                  // 0x0254(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0255(0x0003) MISSED OFFSET
	int                                                CharacterVibrationLevel;                                  // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WeaponVibrationLevel;                                     // 0x025C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VehicleVibrationLevel;                                    // 0x0260(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SoundUIVibrationLevel;                                    // 0x0264(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EntireVibrationLevel;                                     // 0x0268(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCharacterVibrate;                                        // 0x026C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWeaponVibrate;                                           // 0x026D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleVibrate;                                          // 0x026E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSoundUIVibrate;                                          // 0x026F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCharacterBeHitVibrate;                                   // 0x0270(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCharacterClimbVibrate;                                   // 0x0271(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCharacterFallVibrate;                                    // 0x0272(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCharacterSwimVibrate;                                    // 0x0273(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoWeaponVibrate;                                       // 0x0274(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSemiAutoWeaponVibrate;                                   // 0x0275(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBoltWeaponVibrate;                                       // 0x0276(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOtherWeaponVibrate;                                      // 0x0277(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleEngineVibrate;                                    // 0x0278(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleBeHitVibrate;                                     // 0x0279(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleCrashVibrate;                                     // 0x027A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFootstepSoundUIVibrate;                                  // 0x027B(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFireShotSoundUIVibrate;                                  // 0x027C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGlassBrokenSoundUIVibrate;                               // 0x027D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleSoundUIVibrate;                                   // 0x027E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x027F(0x0001) MISSED OFFSET
	struct FTimerHandle                                StopVibrateHandle;                                        // 0x0280(0x0008) (BlueprintVisible)
	int                                                CurPlayingVibrateAssetIndex;                              // 0x0288(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurLoopPlayingVibrateAssetIndex;                          // 0x028C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DeviceSupportVibrateType;                                 // 0x0290(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInGameVibration;                                         // 0x0294(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHandBreaking;                                          // 0x0295(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x52];                                      // 0x0296(0x0052) MISSED OFFSET
	bool                                               bHasLastVehicle;                                          // 0x02E8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x02E9(0x0003) MISSED OFFSET
	int                                                LastVehicleGear;                                          // 0x02EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLastVehicleBreaking;                                   // 0x02F0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLastVehicleSlipping;                                   // 0x02F1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x02F2(0x0002) MISSED OFFSET
	int                                                LastVehicleGroundContactMaterialSurfaceType;              // 0x02F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<int, bool>                                    LastVehicleGearVibrateCache;                              // 0x02F8(0x0050) (BlueprintVisible, ZeroConstructor)
	TMap<EVibrateTriggerEventType, float>              LastVibrateEventTimeMap;                                  // 0x0348(0x0050) (BlueprintVisible, ZeroConstructor)
	float                                              CurVehicleRaiseSuspensionVibrateCD;                       // 0x0398(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7C];                                      // 0x039C(0x007C) MISSED OFFSET
	TArray<struct FVibrateEntity>                      CacheVibrateEntityList;                                   // 0x0418(0x0010) (BlueprintVisible, ZeroConstructor)
	TMap<struct FString, struct FString>               VibratePath2Json;                                         // 0x0428(0x0050) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData08[0x20];                                      // 0x0478(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.VibrateSystemManager");
		return pStaticClass;
	}


	void StopVibrate();
	void SetVibrationLoopTime(const struct FString& InLoopTime);
	void PostVibrateTriggerActionDirectly(int SpesifyID, int Amplitude);
	void PostVibrateTriggerAction(const struct FVibrateTriggerAction& Action, bool bCheckGate, bool bCheckInterval, int SpesifyID);
	void PlayVibrateEntity(const struct FVibrateEntity& Entity);
	void ModifyWeaponVibrationSwitch(bool Val);
	void ModifyWeaponVibrationLevel(int InVal);
	void ModifyVehicleVibrationSwitch(bool Val);
	void ModifyVehicleVibrationLevel(int InVal);
	void ModifyVehicleSoundUIVibrateSetting(bool Val);
	void ModifyVehicleEngineVibrationSetting(bool Val);
	void ModifyVehicleCrashVibrateSetting(bool Val);
	void ModifyVehicleBeHitVibrateSetting(bool Val);
	void ModifySoundUIVibrationSwitch(bool Val);
	void ModifySoundUIVibrationLevel(int InVal);
	void ModifySemiAutoWeaponVibrateSetting(bool Val);
	void ModifyOtherWeaponVibrateSetting(bool Val);
	void ModifyGlassBrokenSoundUIVibrateSetting(bool Val);
	void ModifyFootstepSoundUIVibrateSetting(bool Val);
	void ModifyFireShotSoundUIVibrateSetting(bool Val);
	void ModifyEntireVibrationSwitch(bool Val);
	void ModifyEntireVibrationLevel(int InValue);
	void ModifyCharacterVibrationSwitch(bool Val);
	void ModifyCharacterVibrationLevel(int InVal);
	void ModifyCharacterSwimVibrateSetting(bool Val);
	void ModifyCharacterFallVibrateSetting(bool Val);
	void ModifyCharacterClimbVibrateSetting(bool Val);
	void ModifyCharacterBeHitVibrateSetting(bool Val);
	void ModifyBoltWeaponVibrateSetting(bool Val);
	void ModifyAutoWeaponVibrateSetting(bool Val);
	void LoadUserSettingData(int inCharacterVibrationLevel, int inWeaponVibrationLevel, int inVehicleVibrationLevel, int inSoundUIVibrationLevel, bool binCharacterBeHitVibrate, bool binCharacterClimbVibrate, bool binCharacterFallVibrate, bool binCharacterSwimVibrate, bool binVehicleEngineVibrate, bool binVehicleBeHitVibrate, bool binVehicleCrashVibrate, bool binFootstepSoundUIVibrate, bool binFireShotSoundUIVibrate, bool binGlassBrokenSoundUIVibrate, bool binVehicleSoundUIVibrate, int inEntireVibrationLevel, bool binAutoWeaponVibrate, bool binSemiAutoWeaponVibrate, bool binBoltWeaponVibrate, bool binOtherWeaponVibrate);
	void InvalidateVibrateEntityByEventType(EVibrateTriggerEventType EventType);
	void InitUserSetting();
	void InitSystem();
	void HandleApplicationWillTerminate();
	void HandleApplicationWillEnterBackground();
	void HandleApplicationWillDeactivate();
	void HandleApplicationHasReactivated();
	void HandleApplicationHasEnteredForeground();
	class UVibrateSystemManager* GetInstance(class UObject* WorldContext, bool bAutoCreate);
	int GetEntireVibrationLevel();
	struct FString GetCurrentPlayingVibrationDebugInfo();
	int GetAmplitudeByAlpha(float Alpha);
	void ClearVibratePath2Json();
	void ClearAllVibration();
	bool CheckShootWeaponTypeVibrateGate(class ASTExtraWeapon* Weapon);
	void CheckAndCopyFilesToSavedDir(class UVibrateSystemManager* Mgr);
	void ActiveInGameVibration(bool Inactive);
};


// Class Client.WINSDKFBWebLogin
// 0x0030 (0x0130 - 0x0100)
class UWINSDKFBWebLogin : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnUrlChanged;                                             // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHttpResponed;                                           // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     InitialURL;                                               // 0x0120(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.WINSDKFBWebLogin");
		return pStaticClass;
	}


	void OnWINSDKHttpResponed__DelegateSignature(bool requestSucc, const struct FString& txtContent);
	void OnUrlChanged__DelegateSignature(const struct FText& Text);
	void LoadURL(const struct FString& NewURL);
	void DoHttpRequest(const struct FString& URL);
};


}

