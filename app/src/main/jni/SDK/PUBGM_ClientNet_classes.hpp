#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ClientNet.GCloudNet
// 0x0370 (0x0398 - 0x0028)
class UGCloudNet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x230];                                     // 0x0028(0x0230) MISSED OFFSET
	class UGCloudSDK*                                  _GCloudSDKInst;                                           // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    StartTickNetPackageDelegate;                              // 0x0260(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x128];                                     // 0x0270(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.GCloudNet");
		return pStaticClass;
	}


	void SetTickNetMsgMaxTime(float MaxTime);
	void OnWebviewNotify(const struct FWebviewInfoWrapper& webviewinfo);
	void OnUAAssistantNotify(const struct FUAAssistantInfoWrapper& uaAssistantInfo);
	void OnTraceCallBack(int code, const struct FString& dataJson);
	void OnTConndAuthFailDelegate();
	void OnShareNotify(int Result, int PlatForm);
	void OnRequestPermissionsResult(int code, const struct FString& permission, const struct FString& grantResult);
	void OnReceiveDataNotify(int Result, TArray<unsigned char> Msg);
	void OnQuickLoginNotify(const struct FWakeupInfoWrapper& wakeupinfo);
	void OnQRCodeGenQRImg(int Tag, int Ret, const struct FString& imgPath);
	void OnMigrateNotify(int Result);
	void OnLaunchInfo(const struct FString& roominfo);
	void OnIGShareUploadFinished(int Result, const struct FString& PlatForm);
	void OnGroupNotify(const struct FGroupInfoWrapper& groupInfo);
	void OnGetWebviewActionNotify(const struct FString& webviewinfo);
	void OnGetTicketNotify(const struct FString& TicketInfo);
	void OnGetShortUrlNotify(const struct FShortURLInfoWrapper& shorturlinfo);
	void OnGetPlatformFriendsNotify(const struct FPlatformFriendInfoMap& platformFriends);
	void OnGetCountryNoByIMSDK(int country);
	void OnGCloudStateChangeNotify(int State, int Param1, int Param2, int param3);
	void OnGCloudDisconnectedNotify(int Result);
	void OnGCloudConnectedNotify(int IsConnected, int nResult);
	void OnGameMasterEvent(const struct FString& EvenName, int Result);
	void OnBindIntlNotify(int bindEventID);
	void OnAccountLogoutNotify(int Result);
	void OnAccountLoginNotify(int Result, const struct FString& OpenID, int Channel, const struct FString& resultMsg, int thirdRetCode);
	void OnAccountInitializeNotify(int Result);
	void OnAccessTokenRefreshedNotify(int Result);
};


// Class ClientNet.GCloudSDK
// 0x0118 (0x0140 - 0x0028)
class UGCloudSDK : public UObject
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0028(0x0108) MISSED OFFSET
	bool                                               OpenBuglyLogReport;                                       // 0x0130(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	int                                                MaxBufferSize;                                            // 0x0134(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.GCloudSDK");
		return pStaticClass;
	}


	void UploadFile(const struct FString& _imgPath, int shareFileType);
	void ShareWithPhotoByChannel_Simple(const struct FString& _imgPath, const struct FString& _title, const struct FString& _content, int _channel);
	void ShareFacebookLink(const struct FString& ftitle, const struct FString& fdesc, const struct FString& fsharelink);
	void SetTestLogin(const struct FString& OpenID, int Channel);
	void InviteSystemOfflineFriendsExt2(const struct FString& _title, const struct FString& _content, const struct FString& _link);
	void InviteSystemOfflineFriendsExt(const struct FString& _title, const struct FString& _content, const struct FString& _link);
	void InviteFBFriendsUnregistered_Link(const struct FString& _title, const struct FString& _content, const struct FString& _link, const struct FString& _extend);
	struct FString GetUploadUrlByFile(const struct FString& file);
	struct FString GetUploadUrl();
	int GetUploadStatusByFile(const struct FString& file);
	int GetUploadStatus();
	void ClearFileUpload(const struct FString& file);
};


// Class ClientNet.GCloudSDKDelegates
// 0x0130 (0x0158 - 0x0028)
class UGCloudSDKDelegates : public UObject
{
public:
	struct FScriptMulticastDelegate                    ConnectNotifyDelegate;                                    // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ConnectStateChangedNotifyDelegate;                        // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DisconnectNotifyDelegate;                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReceiveDataNotifyDelegate;                                // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AccountInitializeNotifyDelegate;                          // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AccountLoginNotifyDelegate;                               // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AccessTokenRefreshedNotifyDelegate;                       // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AccountLogoutNotifyDelegate;                              // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ShareNotifyDelegate;                                      // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GroupNotifyDelegate;                                      // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    QuickLoginNotifyDelegate;                                 // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    QRCodeGenQRImgDelegate;                                   // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    QRCodeLaunchDelegate;                                     // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    WebviewNotifyDelegate;                                    // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ShortUrlNotifyDelegate;                                   // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetTicketNotifyDelegate;                                // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GameMasterEventDelegate;                                  // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRequestPermissionResultDelegate;                        // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TConndAuthFailDelegate;                                   // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.GCloudSDKDelegates");
		return pStaticClass;
	}

};


// Class ClientNet.IMSDKConfig
// 0x0210 (0x0238 - 0x0028)
class UIMSDKConfig : public UObject
{
public:
	struct FString                                     IMSDK_GAME_ID;                                            // 0x0028(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_SDKAPI_RELEASE;                              // 0x0038(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_NOTICE_RELEASE;                              // 0x0048(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_HELP_RELEASE;                                // 0x0058(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_HELP_SCHEME_RELEASE;                         // 0x0068(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_CONFIG_RELEASE;                              // 0x0078(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_LOG_LEVEL_RELEASE;                                  // 0x0088(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_DEBUG_RELEASE;                                      // 0x0098(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_INNER_VOLLEY_DEBUG_RELEASE;                         // 0x00A8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_SDKAPI_TEST;                                 // 0x00B8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_NOTICE_TEST;                                 // 0x00C8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_HELP_TEST;                                   // 0x00D8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_HELP_SCHEME_TEST;                            // 0x00E8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_CONFIG_TEST;                                 // 0x00F8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_LOG_LEVEL_TEST;                                     // 0x0108(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_DEBUG_TEST;                                         // 0x0118(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_INNER_VOLLEY_DEBUG_TEST;                            // 0x0128(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_UNIFIED_ACCOUNT_RELEASE;                     // 0x0138(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_APP_ID_RELEASE;                     // 0x0148(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_SDK_KEY_RELEASE;                    // 0x0158(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_TWITTER_WEB_LOGIN_URL_RELEASE;                      // 0x0168(0x0010) (ZeroConstructor, Config)
	struct FString                                     MIGRATE_WEB_URL_RELEASE;                                  // 0x0178(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_CHECK_PASSWORD;                     // 0x0188(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_PLATFORM_TYPE;                      // 0x0198(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_CHANNEL_ID;                         // 0x01A8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_UNIFIED_ACCOUNT_TEST;                        // 0x01B8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_APP_ID_TEST;                        // 0x01C8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_SDK_KEY_TEST;                       // 0x01D8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_TWITTER_WEB_LOGIN_URL_TEST;                         // 0x01E8(0x0010) (ZeroConstructor, Config)
	struct FString                                     MIGRATE_WEB_URL_TEST;                                     // 0x01F8(0x0010) (ZeroConstructor, Config)
	struct FString                                     MIGRATE_WEB_USER_AGENT_STRING;                            // 0x0208(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_ACCOUNT_CHECK_POPUP_STATUS_ENABLE;                  // 0x0218(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_ACCOUNT_VERIFY_OPT_SID_ENABLE;                      // 0x0228(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.IMSDKConfig");
		return pStaticClass;
	}


	void PatchMSDKConfigWithAreaConfig();
};


// Class ClientNet.IMSDKHelper
// 0x0120 (0x0148 - 0x0028)
class UIMSDKHelper : public UObject
{
public:
	bool                                               isBindFB;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isBindGPGC;                                               // 0x0029(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isBindGP;                                                 // 0x002A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isBindGC;                                                 // 0x002B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isBindVK;                                                 // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isBindTwitter;                                            // 0x002D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isBindWeChat;                                             // 0x002E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isBindLine;                                               // 0x002F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isBindQQ;                                                 // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isBindApple;                                              // 0x0031(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isBindUnifiedAccount;                                     // 0x0032(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isBindHMS;                                                // 0x0033(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isBindDiscord;                                            // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                iBindFBRetCode;                                           // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                iBindFBThirdRetCode;                                      // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     strBindFBUserName;                                        // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                iBindGPGCRetCode;                                         // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                iBindGPGCThirdRetCode;                                    // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     strBindGPGCUserName;                                      // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     strBindTwitterUserName;                                   // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     strBindWeChatUserName;                                    // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     strBindVKUserName;                                        // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     strBindLineUserName;                                      // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     strBindQQUserName;                                        // 0x00A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     strBindAppleUserName;                                     // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     strBindUnifiedAccountUserName;                            // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     strBindHMSUserName;                                       // 0x00D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     strBindDiscordUserName;                                   // 0x00E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                iDeleteAccountRetCode;                                    // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                iGenerateTransferCodeRetCode;                             // 0x00FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     GeneratedTransferCode;                                    // 0x0100(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                iTransferRetCode;                                         // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                iTransferThirdRetCode;                                    // 0x0114(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     inputTransferCode;                                        // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                iSwitchAccountFBRetCode;                                  // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                iSwitchAccountFBThirdRetCode;                             // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                iSwitchAccountGPGCRetCode;                                // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                iSwitchAccountGPGCThirdRetCode;                           // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bGCQuietSwitchAccount;                                    // 0x0138(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0139(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.IMSDKHelper");
		return pStaticClass;
	}


	void Transfer();
	void StartNewGame();
	void SetUserID(const struct FString& userId);
	void SetNoAuthOpenid(const struct FString& OpenID);
	void SetIMSDKEnv(int iEnv);
	void SetAdvertiseUnit(const struct FString& unitID);
	void SaveLastIMSDKChannelID(int channelId);
	void RequestVerifyCode(const struct FString& InPhoneOrEmail, int InAccountType, int InUseForType, const struct FString& InPhoneAreaCode, const struct FString& InLanuageCode, const struct FString& InExtraJson);
	void ReqBindInfo();
	bool RecoverGuest(const struct FString& channelUserId);
	void PlayAdvertise();
	void ModifyAccountInfo(const struct FString& InAccount, int InAccountType, int InVerifyType, const struct FString& InVerifyData, const struct FString& InPhoneAreaCode, const struct FString& InLanuageCode, const struct FString& InMondifyToAccount, int InModifyAccountType, const struct FString& InModifyVerifyCode, const struct FString& InModifyPhoneAreaCode, const struct FString& InExtraJson);
	void LogoutWith(int InMSDKChannelId);
	void LoadAdvertise();
	bool IsEqualCurLoginPlatform(const struct FString& strChannel);
	bool isBindFBOrGPGC();
	bool IsAlreadyBindWeChat();
	bool IsAlreadyBindVK();
	bool IsAlreadyBindUnifiedAccount();
	bool IsAlreadyBindTwitter();
	bool IsAlreadyBindQQ();
	bool IsAlreadyBindLine();
	bool IsAlreadyBindHMS();
	bool IsAlreadyBindGPGC();
	bool IsAlreadyBindGooglePlay();
	bool IsAlreadyBindGameCenter();
	bool IsAlreadyBindFB();
	bool IsAlreadyBindDiscord();
	bool IsAlreadyBindApple();
	void GetShortUrl(const struct FString& URL, const struct FString& Mask, const struct FString& extra);
	EIMSDKPlatformType GetPlatformType();
	struct FString GetOpenId();
	int GetLastIMSDKChannelID();
	bool GetIsAdvertiseVaild();
	bool GetIsAdvertiseLoadSuccess();
	bool GetIsAdvertiseLoad();
	class UIMSDKHelper* GetInstance();
	int GetGCloudChannelID();
	struct FString GetCurLoginPlatform();
	struct FString GetChannelNickname();
	void GetBindInfo();
	void GetBindFBRetCode();
	int GetBindCount();
	void GenerateTransferCode();
	void CopyTransferCodeToClipboard();
	int ConvertStrToIMSDKChannel(const struct FString& strChannel);
	struct FString ConvertIMSDKChannelToStr(int imsdkChannel);
	void CheckVerifyCodeValid(const struct FString& InAccount, int InAccountType, const struct FString& InPhoneAreaCode, const struct FString& InVerifyCode, int InCodeType, const struct FString& InLanuageCode, const struct FString& InExtraJson);
	void CheckIsRegisted(const struct FString& InAccount, int InAccountType, const struct FString& InPhoneAreaCode, const struct FString& InLanuageCode, const struct FString& InExtraJson);
	void ChangePassword(const struct FString& InAccount, int InAccountType, const struct FString& InVerifyCode, const struct FString& InNewPassword, const struct FString& InAreaCode, const struct FString& InLangType, const struct FString& InExtraJson);
	void BindWeChat();
	void BindVK();
	void BindUnifiedAccount(const struct FString& InExtraJson);
	void BindTwitter();
	void BindQQ();
	void BindLine();
	void BindHMS();
	void BindGPGC();
	void BindFB();
	void BindDiscord();
	void BindApple();
};


// Class ClientNet.iTOPPrefs
// 0x00B8 (0x00E0 - 0x0028)
class UiTOPPrefs : public USaveGame
{
public:
	bool                                               bForceLogin;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bFirstLoginGuestAfterBindFB;                              // 0x0029(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                nGCloudChannelID;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                nLastIMSDKChannelID;                                      // 0x0030(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedFBForceLoginForRelationChainError;                   // 0x0034(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int64_t                                            lastTimeSetFBForceLoginForRelationChainError;             // 0x0038(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedWXForceLoginForRelationChainError;                   // 0x0040(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetWXForceLoginForRelationChainError;             // 0x0048(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedVKForceLoginForRelationChainError;                   // 0x0050(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetVKForceLoginForRelationChainError;             // 0x0058(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedLineForceLoginForRelationChainError;                 // 0x0060(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetLineForceLoginForRelationChainError;           // 0x0068(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedQQForceLoginForRelationChainError;                   // 0x0070(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetQQForceLoginForRelationChainError;             // 0x0078(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedAppleForceLoginForRelationChainError;                // 0x0080(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetAppleForceLoginForRelationChainError;          // 0x0088(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedUnifiedAccountForceLoginForRelationChainError;       // 0x0090(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetUnifiedAccountForceLoginForRelationChainError; // 0x0098(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedHMSForceLoginForRelationChainError;                  // 0x00A0(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetHMSForceLoginForRelationChainError;            // 0x00A8(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedDiscordForceLoginForRelationChainError;              // 0x00B0(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetDiscordForceLoginForRelationChainError;        // 0x00B8(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedForceLoginForRelationChainError;                     // 0x00C0(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetForceLoginForRelationChainError;               // 0x00C8(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     lastLoginArea;                                            // 0x00D0(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.iTOPPrefs");
		return pStaticClass;
	}

};


}

