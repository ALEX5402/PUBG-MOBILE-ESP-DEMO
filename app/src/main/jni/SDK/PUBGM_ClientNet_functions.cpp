// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ClientNet.GCloudNet.SetTickNetMsgMaxTime
// ()
// Parameters:
// float                          MaxTime                        (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudNet::SetTickNetMsgMaxTime(float MaxTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.SetTickNetMsgMaxTime");

	UGCloudNet_SetTickNetMsgMaxTime_Params params;
	params.MaxTime = MaxTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnWebviewNotify
// ()
// Parameters:
// struct FWebviewInfoWrapper     webviewinfo                    (ConstParm, Parm, OutParm, ReferenceParm)

void UGCloudNet::OnWebviewNotify(const struct FWebviewInfoWrapper& webviewinfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnWebviewNotify");

	UGCloudNet_OnWebviewNotify_Params params;
	params.webviewinfo = webviewinfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnUAAssistantNotify
// ()
// Parameters:
// struct FUAAssistantInfoWrapper uaAssistantInfo                (ConstParm, Parm, OutParm, ReferenceParm)

void UGCloudNet::OnUAAssistantNotify(const struct FUAAssistantInfoWrapper& uaAssistantInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnUAAssistantNotify");

	UGCloudNet_OnUAAssistantNotify_Params params;
	params.uaAssistantInfo = uaAssistantInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnTraceCallBack
// ()
// Parameters:
// int                            code                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 dataJson                       (Parm, ZeroConstructor)

void UGCloudNet::OnTraceCallBack(int code, const struct FString& dataJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnTraceCallBack");

	UGCloudNet_OnTraceCallBack_Params params;
	params.code = code;
	params.dataJson = dataJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnTConndAuthFailDelegate
// ()

void UGCloudNet::OnTConndAuthFailDelegate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnTConndAuthFailDelegate");

	UGCloudNet_OnTConndAuthFailDelegate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnShareNotify
// ()
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlatForm                       (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudNet::OnShareNotify(int Result, int PlatForm)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnShareNotify");

	UGCloudNet_OnShareNotify_Params params;
	params.Result = Result;
	params.PlatForm = PlatForm;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnRequestPermissionsResult
// ()
// Parameters:
// int                            code                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 permission                     (Parm, ZeroConstructor)
// struct FString                 grantResult                    (Parm, ZeroConstructor)

void UGCloudNet::OnRequestPermissionsResult(int code, const struct FString& permission, const struct FString& grantResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnRequestPermissionsResult");

	UGCloudNet_OnRequestPermissionsResult_Params params;
	params.code = code;
	params.permission = permission;
	params.grantResult = grantResult;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnReceiveDataNotify
// ()
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Msg                            (Parm, ZeroConstructor)

void UGCloudNet::OnReceiveDataNotify(int Result, TArray<unsigned char> Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnReceiveDataNotify");

	UGCloudNet_OnReceiveDataNotify_Params params;
	params.Result = Result;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnQuickLoginNotify
// ()
// Parameters:
// struct FWakeupInfoWrapper      wakeupinfo                     (ConstParm, Parm, OutParm, ReferenceParm)

void UGCloudNet::OnQuickLoginNotify(const struct FWakeupInfoWrapper& wakeupinfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnQuickLoginNotify");

	UGCloudNet_OnQuickLoginNotify_Params params;
	params.wakeupinfo = wakeupinfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnQRCodeGenQRImg
// ()
// Parameters:
// int                            Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Ret                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 imgPath                        (Parm, ZeroConstructor)

void UGCloudNet::OnQRCodeGenQRImg(int Tag, int Ret, const struct FString& imgPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnQRCodeGenQRImg");

	UGCloudNet_OnQRCodeGenQRImg_Params params;
	params.Tag = Tag;
	params.Ret = Ret;
	params.imgPath = imgPath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnMigrateNotify
// ()
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudNet::OnMigrateNotify(int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnMigrateNotify");

	UGCloudNet_OnMigrateNotify_Params params;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnLaunchInfo
// ()
// Parameters:
// struct FString                 roominfo                       (Parm, ZeroConstructor)

void UGCloudNet::OnLaunchInfo(const struct FString& roominfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnLaunchInfo");

	UGCloudNet_OnLaunchInfo_Params params;
	params.roominfo = roominfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnIGShareUploadFinished
// ()
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlatForm                       (Parm, ZeroConstructor)

void UGCloudNet::OnIGShareUploadFinished(int Result, const struct FString& PlatForm)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnIGShareUploadFinished");

	UGCloudNet_OnIGShareUploadFinished_Params params;
	params.Result = Result;
	params.PlatForm = PlatForm;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnGroupNotify
// ()
// Parameters:
// struct FGroupInfoWrapper       groupInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGCloudNet::OnGroupNotify(const struct FGroupInfoWrapper& groupInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnGroupNotify");

	UGCloudNet_OnGroupNotify_Params params;
	params.groupInfo = groupInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnGetWebviewActionNotify
// ()
// Parameters:
// struct FString                 webviewinfo                    (Parm, ZeroConstructor)

void UGCloudNet::OnGetWebviewActionNotify(const struct FString& webviewinfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnGetWebviewActionNotify");

	UGCloudNet_OnGetWebviewActionNotify_Params params;
	params.webviewinfo = webviewinfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnGetTicketNotify
// ()
// Parameters:
// struct FString                 TicketInfo                     (Parm, ZeroConstructor)

void UGCloudNet::OnGetTicketNotify(const struct FString& TicketInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnGetTicketNotify");

	UGCloudNet_OnGetTicketNotify_Params params;
	params.TicketInfo = TicketInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnGetShortUrlNotify
// ()
// Parameters:
// struct FShortURLInfoWrapper    shorturlinfo                   (ConstParm, Parm, OutParm, ReferenceParm)

void UGCloudNet::OnGetShortUrlNotify(const struct FShortURLInfoWrapper& shorturlinfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnGetShortUrlNotify");

	UGCloudNet_OnGetShortUrlNotify_Params params;
	params.shorturlinfo = shorturlinfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnGetPlatformFriendsNotify
// ()
// Parameters:
// struct FPlatformFriendInfoMap  platformFriends                (ConstParm, Parm, OutParm, ReferenceParm)

void UGCloudNet::OnGetPlatformFriendsNotify(const struct FPlatformFriendInfoMap& platformFriends)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnGetPlatformFriendsNotify");

	UGCloudNet_OnGetPlatformFriendsNotify_Params params;
	params.platformFriends = platformFriends;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnGetCountryNoByIMSDK
// ()
// Parameters:
// int                            country                        (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudNet::OnGetCountryNoByIMSDK(int country)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnGetCountryNoByIMSDK");

	UGCloudNet_OnGetCountryNoByIMSDK_Params params;
	params.country = country;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnGCloudStateChangeNotify
// ()
// Parameters:
// int                            State                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param1                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param2                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            param3                         (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudNet::OnGCloudStateChangeNotify(int State, int Param1, int Param2, int param3)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnGCloudStateChangeNotify");

	UGCloudNet_OnGCloudStateChangeNotify_Params params;
	params.State = State;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.param3 = param3;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnGCloudDisconnectedNotify
// ()
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudNet::OnGCloudDisconnectedNotify(int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnGCloudDisconnectedNotify");

	UGCloudNet_OnGCloudDisconnectedNotify_Params params;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnGCloudConnectedNotify
// ()
// Parameters:
// int                            IsConnected                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            nResult                        (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudNet::OnGCloudConnectedNotify(int IsConnected, int nResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnGCloudConnectedNotify");

	UGCloudNet_OnGCloudConnectedNotify_Params params;
	params.IsConnected = IsConnected;
	params.nResult = nResult;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnGameMasterEvent
// ()
// Parameters:
// struct FString                 EvenName                       (Parm, ZeroConstructor)
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudNet::OnGameMasterEvent(const struct FString& EvenName, int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnGameMasterEvent");

	UGCloudNet_OnGameMasterEvent_Params params;
	params.EvenName = EvenName;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnBindIntlNotify
// ()
// Parameters:
// int                            bindEventID                    (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudNet::OnBindIntlNotify(int bindEventID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnBindIntlNotify");

	UGCloudNet_OnBindIntlNotify_Params params;
	params.bindEventID = bindEventID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnAccountLogoutNotify
// ()
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudNet::OnAccountLogoutNotify(int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnAccountLogoutNotify");

	UGCloudNet_OnAccountLogoutNotify_Params params;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnAccountLoginNotify
// ()
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 resultMsg                      (Parm, ZeroConstructor)
// int                            thirdRetCode                   (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudNet::OnAccountLoginNotify(int Result, const struct FString& OpenID, int Channel, const struct FString& resultMsg, int thirdRetCode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnAccountLoginNotify");

	UGCloudNet_OnAccountLoginNotify_Params params;
	params.Result = Result;
	params.OpenID = OpenID;
	params.Channel = Channel;
	params.resultMsg = resultMsg;
	params.thirdRetCode = thirdRetCode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnAccountInitializeNotify
// ()
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudNet::OnAccountInitializeNotify(int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnAccountInitializeNotify");

	UGCloudNet_OnAccountInitializeNotify_Params params;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnAccessTokenRefreshedNotify
// ()
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudNet::OnAccessTokenRefreshedNotify(int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnAccessTokenRefreshedNotify");

	UGCloudNet_OnAccessTokenRefreshedNotify_Params params;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudSDK.UploadFile
// ()
// Parameters:
// struct FString                 _imgPath                       (Parm, ZeroConstructor)
// int                            shareFileType                  (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudSDK::UploadFile(const struct FString& _imgPath, int shareFileType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudSDK.UploadFile");

	UGCloudSDK_UploadFile_Params params;
	params._imgPath = _imgPath;
	params.shareFileType = shareFileType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudSDK.ShareWithPhotoByChannel_Simple
// ()
// Parameters:
// struct FString                 _imgPath                       (Parm, ZeroConstructor)
// struct FString                 _title                         (Parm, ZeroConstructor)
// struct FString                 _content                       (Parm, ZeroConstructor)
// int                            _channel                       (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudSDK::ShareWithPhotoByChannel_Simple(const struct FString& _imgPath, const struct FString& _title, const struct FString& _content, int _channel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudSDK.ShareWithPhotoByChannel_Simple");

	UGCloudSDK_ShareWithPhotoByChannel_Simple_Params params;
	params._imgPath = _imgPath;
	params._title = _title;
	params._content = _content;
	params._channel = _channel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudSDK.ShareFacebookLink
// ()
// Parameters:
// struct FString                 ftitle                         (Parm, ZeroConstructor)
// struct FString                 fdesc                          (Parm, ZeroConstructor)
// struct FString                 fsharelink                     (Parm, ZeroConstructor)

void UGCloudSDK::ShareFacebookLink(const struct FString& ftitle, const struct FString& fdesc, const struct FString& fsharelink)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudSDK.ShareFacebookLink");

	UGCloudSDK_ShareFacebookLink_Params params;
	params.ftitle = ftitle;
	params.fdesc = fdesc;
	params.fsharelink = fsharelink;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudSDK.SetTestLogin
// ()
// Parameters:
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudSDK::SetTestLogin(const struct FString& OpenID, int Channel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudSDK.SetTestLogin");

	UGCloudSDK_SetTestLogin_Params params;
	params.OpenID = OpenID;
	params.Channel = Channel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudSDK.InviteSystemOfflineFriendsExt2
// ()
// Parameters:
// struct FString                 _title                         (Parm, ZeroConstructor)
// struct FString                 _content                       (Parm, ZeroConstructor)
// struct FString                 _link                          (Parm, ZeroConstructor)

void UGCloudSDK::InviteSystemOfflineFriendsExt2(const struct FString& _title, const struct FString& _content, const struct FString& _link)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudSDK.InviteSystemOfflineFriendsExt2");

	UGCloudSDK_InviteSystemOfflineFriendsExt2_Params params;
	params._title = _title;
	params._content = _content;
	params._link = _link;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudSDK.InviteSystemOfflineFriendsExt
// ()
// Parameters:
// struct FString                 _title                         (Parm, ZeroConstructor)
// struct FString                 _content                       (Parm, ZeroConstructor)
// struct FString                 _link                          (Parm, ZeroConstructor)

void UGCloudSDK::InviteSystemOfflineFriendsExt(const struct FString& _title, const struct FString& _content, const struct FString& _link)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudSDK.InviteSystemOfflineFriendsExt");

	UGCloudSDK_InviteSystemOfflineFriendsExt_Params params;
	params._title = _title;
	params._content = _content;
	params._link = _link;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudSDK.InviteFBFriendsUnregistered_Link
// ()
// Parameters:
// struct FString                 _title                         (Parm, ZeroConstructor)
// struct FString                 _content                       (Parm, ZeroConstructor)
// struct FString                 _link                          (Parm, ZeroConstructor)
// struct FString                 _extend                        (Parm, ZeroConstructor)

void UGCloudSDK::InviteFBFriendsUnregistered_Link(const struct FString& _title, const struct FString& _content, const struct FString& _link, const struct FString& _extend)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudSDK.InviteFBFriendsUnregistered_Link");

	UGCloudSDK_InviteFBFriendsUnregistered_Link_Params params;
	params._title = _title;
	params._content = _content;
	params._link = _link;
	params._extend = _extend;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudSDK.GetUploadUrlByFile
// ()
// Parameters:
// struct FString                 file                           (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGCloudSDK::GetUploadUrlByFile(const struct FString& file)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudSDK.GetUploadUrlByFile");

	UGCloudSDK_GetUploadUrlByFile_Params params;
	params.file = file;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.GCloudSDK.GetUploadUrl
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGCloudSDK::GetUploadUrl()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudSDK.GetUploadUrl");

	UGCloudSDK_GetUploadUrl_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.GCloudSDK.GetUploadStatusByFile
// ()
// Parameters:
// struct FString                 file                           (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGCloudSDK::GetUploadStatusByFile(const struct FString& file)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudSDK.GetUploadStatusByFile");

	UGCloudSDK_GetUploadStatusByFile_Params params;
	params.file = file;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.GCloudSDK.GetUploadStatus
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGCloudSDK::GetUploadStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudSDK.GetUploadStatus");

	UGCloudSDK_GetUploadStatus_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.GCloudSDK.ClearFileUpload
// ()
// Parameters:
// struct FString                 file                           (Parm, ZeroConstructor)

void UGCloudSDK::ClearFileUpload(const struct FString& file)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudSDK.ClearFileUpload");

	UGCloudSDK_ClearFileUpload_Params params;
	params.file = file;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKConfig.PatchMSDKConfigWithAreaConfig
// ()

void UIMSDKConfig::PatchMSDKConfigWithAreaConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKConfig.PatchMSDKConfigWithAreaConfig");

	UIMSDKConfig_PatchMSDKConfigWithAreaConfig_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.Transfer
// ()

void UIMSDKHelper::Transfer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.Transfer");

	UIMSDKHelper_Transfer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.StartNewGame
// ()

void UIMSDKHelper::StartNewGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.StartNewGame");

	UIMSDKHelper_StartNewGame_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.SetUserID
// ()
// Parameters:
// struct FString                 userId                         (Parm, ZeroConstructor)

void UIMSDKHelper::SetUserID(const struct FString& userId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.SetUserID");

	UIMSDKHelper_SetUserID_Params params;
	params.userId = userId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.SetNoAuthOpenid
// ()
// Parameters:
// struct FString                 OpenID                         (Parm, ZeroConstructor)

void UIMSDKHelper::SetNoAuthOpenid(const struct FString& OpenID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.SetNoAuthOpenid");

	UIMSDKHelper_SetNoAuthOpenid_Params params;
	params.OpenID = OpenID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.SetIMSDKEnv
// ()
// Parameters:
// int                            iEnv                           (Parm, ZeroConstructor, IsPlainOldData)

void UIMSDKHelper::SetIMSDKEnv(int iEnv)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.SetIMSDKEnv");

	UIMSDKHelper_SetIMSDKEnv_Params params;
	params.iEnv = iEnv;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.SetAdvertiseUnit
// ()
// Parameters:
// struct FString                 unitID                         (Parm, ZeroConstructor)

void UIMSDKHelper::SetAdvertiseUnit(const struct FString& unitID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.SetAdvertiseUnit");

	UIMSDKHelper_SetAdvertiseUnit_Params params;
	params.unitID = unitID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.SaveLastIMSDKChannelID
// ()
// Parameters:
// int                            channelId                      (Parm, ZeroConstructor, IsPlainOldData)

void UIMSDKHelper::SaveLastIMSDKChannelID(int channelId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.SaveLastIMSDKChannelID");

	UIMSDKHelper_SaveLastIMSDKChannelID_Params params;
	params.channelId = channelId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.RequestVerifyCode
// ()
// Parameters:
// struct FString                 InPhoneOrEmail                 (Parm, ZeroConstructor)
// int                            InAccountType                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            InUseForType                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InPhoneAreaCode                (Parm, ZeroConstructor)
// struct FString                 InLanuageCode                  (Parm, ZeroConstructor)
// struct FString                 InExtraJson                    (Parm, ZeroConstructor)

void UIMSDKHelper::RequestVerifyCode(const struct FString& InPhoneOrEmail, int InAccountType, int InUseForType, const struct FString& InPhoneAreaCode, const struct FString& InLanuageCode, const struct FString& InExtraJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.RequestVerifyCode");

	UIMSDKHelper_RequestVerifyCode_Params params;
	params.InPhoneOrEmail = InPhoneOrEmail;
	params.InAccountType = InAccountType;
	params.InUseForType = InUseForType;
	params.InPhoneAreaCode = InPhoneAreaCode;
	params.InLanuageCode = InLanuageCode;
	params.InExtraJson = InExtraJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.ReqBindInfo
// ()

void UIMSDKHelper::ReqBindInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.ReqBindInfo");

	UIMSDKHelper_ReqBindInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.RecoverGuest
// ()
// Parameters:
// struct FString                 channelUserId                  (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::RecoverGuest(const struct FString& channelUserId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.RecoverGuest");

	UIMSDKHelper_RecoverGuest_Params params;
	params.channelUserId = channelUserId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.PlayAdvertise
// ()

void UIMSDKHelper::PlayAdvertise()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.PlayAdvertise");

	UIMSDKHelper_PlayAdvertise_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.ModifyAccountInfo
// ()
// Parameters:
// struct FString                 InAccount                      (Parm, ZeroConstructor)
// int                            InAccountType                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            InVerifyType                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InVerifyData                   (Parm, ZeroConstructor)
// struct FString                 InPhoneAreaCode                (Parm, ZeroConstructor)
// struct FString                 InLanuageCode                  (Parm, ZeroConstructor)
// struct FString                 InMondifyToAccount             (Parm, ZeroConstructor)
// int                            InModifyAccountType            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InModifyVerifyCode             (Parm, ZeroConstructor)
// struct FString                 InModifyPhoneAreaCode          (Parm, ZeroConstructor)
// struct FString                 InExtraJson                    (Parm, ZeroConstructor)

void UIMSDKHelper::ModifyAccountInfo(const struct FString& InAccount, int InAccountType, int InVerifyType, const struct FString& InVerifyData, const struct FString& InPhoneAreaCode, const struct FString& InLanuageCode, const struct FString& InMondifyToAccount, int InModifyAccountType, const struct FString& InModifyVerifyCode, const struct FString& InModifyPhoneAreaCode, const struct FString& InExtraJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.ModifyAccountInfo");

	UIMSDKHelper_ModifyAccountInfo_Params params;
	params.InAccount = InAccount;
	params.InAccountType = InAccountType;
	params.InVerifyType = InVerifyType;
	params.InVerifyData = InVerifyData;
	params.InPhoneAreaCode = InPhoneAreaCode;
	params.InLanuageCode = InLanuageCode;
	params.InMondifyToAccount = InMondifyToAccount;
	params.InModifyAccountType = InModifyAccountType;
	params.InModifyVerifyCode = InModifyVerifyCode;
	params.InModifyPhoneAreaCode = InModifyPhoneAreaCode;
	params.InExtraJson = InExtraJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.LogoutWith
// ()
// Parameters:
// int                            InMSDKChannelId                (Parm, ZeroConstructor, IsPlainOldData)

void UIMSDKHelper::LogoutWith(int InMSDKChannelId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.LogoutWith");

	UIMSDKHelper_LogoutWith_Params params;
	params.InMSDKChannelId = InMSDKChannelId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.LoadAdvertise
// ()

void UIMSDKHelper::LoadAdvertise()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.LoadAdvertise");

	UIMSDKHelper_LoadAdvertise_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.IsEqualCurLoginPlatform
// ()
// Parameters:
// struct FString                 strChannel                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsEqualCurLoginPlatform(const struct FString& strChannel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsEqualCurLoginPlatform");

	UIMSDKHelper_IsEqualCurLoginPlatform_Params params;
	params.strChannel = strChannel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.isBindFBOrGPGC
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::isBindFBOrGPGC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.isBindFBOrGPGC");

	UIMSDKHelper_isBindFBOrGPGC_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindWeChat
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindWeChat()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindWeChat");

	UIMSDKHelper_IsAlreadyBindWeChat_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindVK
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindVK()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindVK");

	UIMSDKHelper_IsAlreadyBindVK_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindUnifiedAccount
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindUnifiedAccount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindUnifiedAccount");

	UIMSDKHelper_IsAlreadyBindUnifiedAccount_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindTwitter
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindTwitter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindTwitter");

	UIMSDKHelper_IsAlreadyBindTwitter_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindQQ
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindQQ()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindQQ");

	UIMSDKHelper_IsAlreadyBindQQ_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindLine
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindLine()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindLine");

	UIMSDKHelper_IsAlreadyBindLine_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindHMS
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindHMS()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindHMS");

	UIMSDKHelper_IsAlreadyBindHMS_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindGPGC
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindGPGC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindGPGC");

	UIMSDKHelper_IsAlreadyBindGPGC_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindGooglePlay
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindGooglePlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindGooglePlay");

	UIMSDKHelper_IsAlreadyBindGooglePlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindGameCenter
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindGameCenter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindGameCenter");

	UIMSDKHelper_IsAlreadyBindGameCenter_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindFB
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindFB()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindFB");

	UIMSDKHelper_IsAlreadyBindFB_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindDiscord
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindDiscord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindDiscord");

	UIMSDKHelper_IsAlreadyBindDiscord_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.IsAlreadyBindApple
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::IsAlreadyBindApple()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.IsAlreadyBindApple");

	UIMSDKHelper_IsAlreadyBindApple_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetShortUrl
// ()
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// struct FString                 Mask                           (Parm, ZeroConstructor)
// struct FString                 extra                          (Parm, ZeroConstructor)

void UIMSDKHelper::GetShortUrl(const struct FString& URL, const struct FString& Mask, const struct FString& extra)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetShortUrl");

	UIMSDKHelper_GetShortUrl_Params params;
	params.URL = URL;
	params.Mask = Mask;
	params.extra = extra;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.GetPlatformType
// ()
// Parameters:
// EIMSDKPlatformType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EIMSDKPlatformType UIMSDKHelper::GetPlatformType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetPlatformType");

	UIMSDKHelper_GetPlatformType_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetOpenId
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIMSDKHelper::GetOpenId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetOpenId");

	UIMSDKHelper_GetOpenId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetLastIMSDKChannelID
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIMSDKHelper::GetLastIMSDKChannelID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetLastIMSDKChannelID");

	UIMSDKHelper_GetLastIMSDKChannelID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetIsAdvertiseVaild
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::GetIsAdvertiseVaild()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetIsAdvertiseVaild");

	UIMSDKHelper_GetIsAdvertiseVaild_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetIsAdvertiseLoadSuccess
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::GetIsAdvertiseLoadSuccess()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetIsAdvertiseLoadSuccess");

	UIMSDKHelper_GetIsAdvertiseLoadSuccess_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetIsAdvertiseLoad
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIMSDKHelper::GetIsAdvertiseLoad()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetIsAdvertiseLoad");

	UIMSDKHelper_GetIsAdvertiseLoad_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetInstance
// ()
// Parameters:
// class UIMSDKHelper*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIMSDKHelper* UIMSDKHelper::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetInstance");

	UIMSDKHelper_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetGCloudChannelID
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIMSDKHelper::GetGCloudChannelID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetGCloudChannelID");

	UIMSDKHelper_GetGCloudChannelID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetCurLoginPlatform
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIMSDKHelper::GetCurLoginPlatform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetCurLoginPlatform");

	UIMSDKHelper_GetCurLoginPlatform_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetChannelNickname
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIMSDKHelper::GetChannelNickname()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetChannelNickname");

	UIMSDKHelper_GetChannelNickname_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GetBindInfo
// ()

void UIMSDKHelper::GetBindInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetBindInfo");

	UIMSDKHelper_GetBindInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.GetBindFBRetCode
// ()

void UIMSDKHelper::GetBindFBRetCode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetBindFBRetCode");

	UIMSDKHelper_GetBindFBRetCode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.GetBindCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIMSDKHelper::GetBindCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GetBindCount");

	UIMSDKHelper_GetBindCount_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.GenerateTransferCode
// ()

void UIMSDKHelper::GenerateTransferCode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.GenerateTransferCode");

	UIMSDKHelper_GenerateTransferCode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.CopyTransferCodeToClipboard
// ()

void UIMSDKHelper::CopyTransferCodeToClipboard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.CopyTransferCodeToClipboard");

	UIMSDKHelper_CopyTransferCodeToClipboard_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.ConvertStrToIMSDKChannel
// ()
// Parameters:
// struct FString                 strChannel                     (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIMSDKHelper::ConvertStrToIMSDKChannel(const struct FString& strChannel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.ConvertStrToIMSDKChannel");

	UIMSDKHelper_ConvertStrToIMSDKChannel_Params params;
	params.strChannel = strChannel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.ConvertIMSDKChannelToStr
// ()
// Parameters:
// int                            imsdkChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIMSDKHelper::ConvertIMSDKChannelToStr(int imsdkChannel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.ConvertIMSDKChannelToStr");

	UIMSDKHelper_ConvertIMSDKChannelToStr_Params params;
	params.imsdkChannel = imsdkChannel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.IMSDKHelper.CheckVerifyCodeValid
// ()
// Parameters:
// struct FString                 InAccount                      (Parm, ZeroConstructor)
// int                            InAccountType                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InPhoneAreaCode                (Parm, ZeroConstructor)
// struct FString                 InVerifyCode                   (Parm, ZeroConstructor)
// int                            InCodeType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InLanuageCode                  (Parm, ZeroConstructor)
// struct FString                 InExtraJson                    (Parm, ZeroConstructor)

void UIMSDKHelper::CheckVerifyCodeValid(const struct FString& InAccount, int InAccountType, const struct FString& InPhoneAreaCode, const struct FString& InVerifyCode, int InCodeType, const struct FString& InLanuageCode, const struct FString& InExtraJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.CheckVerifyCodeValid");

	UIMSDKHelper_CheckVerifyCodeValid_Params params;
	params.InAccount = InAccount;
	params.InAccountType = InAccountType;
	params.InPhoneAreaCode = InPhoneAreaCode;
	params.InVerifyCode = InVerifyCode;
	params.InCodeType = InCodeType;
	params.InLanuageCode = InLanuageCode;
	params.InExtraJson = InExtraJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.CheckIsRegisted
// ()
// Parameters:
// struct FString                 InAccount                      (Parm, ZeroConstructor)
// int                            InAccountType                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InPhoneAreaCode                (Parm, ZeroConstructor)
// struct FString                 InLanuageCode                  (Parm, ZeroConstructor)
// struct FString                 InExtraJson                    (Parm, ZeroConstructor)

void UIMSDKHelper::CheckIsRegisted(const struct FString& InAccount, int InAccountType, const struct FString& InPhoneAreaCode, const struct FString& InLanuageCode, const struct FString& InExtraJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.CheckIsRegisted");

	UIMSDKHelper_CheckIsRegisted_Params params;
	params.InAccount = InAccount;
	params.InAccountType = InAccountType;
	params.InPhoneAreaCode = InPhoneAreaCode;
	params.InLanuageCode = InLanuageCode;
	params.InExtraJson = InExtraJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.ChangePassword
// ()
// Parameters:
// struct FString                 InAccount                      (Parm, ZeroConstructor)
// int                            InAccountType                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InVerifyCode                   (Parm, ZeroConstructor)
// struct FString                 InNewPassword                  (Parm, ZeroConstructor)
// struct FString                 InAreaCode                     (Parm, ZeroConstructor)
// struct FString                 InLangType                     (Parm, ZeroConstructor)
// struct FString                 InExtraJson                    (Parm, ZeroConstructor)

void UIMSDKHelper::ChangePassword(const struct FString& InAccount, int InAccountType, const struct FString& InVerifyCode, const struct FString& InNewPassword, const struct FString& InAreaCode, const struct FString& InLangType, const struct FString& InExtraJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.ChangePassword");

	UIMSDKHelper_ChangePassword_Params params;
	params.InAccount = InAccount;
	params.InAccountType = InAccountType;
	params.InVerifyCode = InVerifyCode;
	params.InNewPassword = InNewPassword;
	params.InAreaCode = InAreaCode;
	params.InLangType = InLangType;
	params.InExtraJson = InExtraJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindWeChat
// ()

void UIMSDKHelper::BindWeChat()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindWeChat");

	UIMSDKHelper_BindWeChat_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindVK
// ()

void UIMSDKHelper::BindVK()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindVK");

	UIMSDKHelper_BindVK_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindUnifiedAccount
// ()
// Parameters:
// struct FString                 InExtraJson                    (Parm, ZeroConstructor)

void UIMSDKHelper::BindUnifiedAccount(const struct FString& InExtraJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindUnifiedAccount");

	UIMSDKHelper_BindUnifiedAccount_Params params;
	params.InExtraJson = InExtraJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindTwitter
// ()

void UIMSDKHelper::BindTwitter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindTwitter");

	UIMSDKHelper_BindTwitter_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindQQ
// ()

void UIMSDKHelper::BindQQ()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindQQ");

	UIMSDKHelper_BindQQ_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindLine
// ()

void UIMSDKHelper::BindLine()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindLine");

	UIMSDKHelper_BindLine_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindHMS
// ()

void UIMSDKHelper::BindHMS()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindHMS");

	UIMSDKHelper_BindHMS_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindGPGC
// ()

void UIMSDKHelper::BindGPGC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindGPGC");

	UIMSDKHelper_BindGPGC_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindFB
// ()

void UIMSDKHelper::BindFB()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindFB");

	UIMSDKHelper_BindFB_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindDiscord
// ()

void UIMSDKHelper::BindDiscord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindDiscord");

	UIMSDKHelper_BindDiscord_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.IMSDKHelper.BindApple
// ()

void UIMSDKHelper::BindApple()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.IMSDKHelper.BindApple");

	UIMSDKHelper_BindApple_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

