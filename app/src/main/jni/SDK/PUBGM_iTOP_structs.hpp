#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct iTOP.iTOPResult
// 0x0040
struct FiTOPResult
{
	int                                                imsdkRetCode;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     imsdkRetMsg;                                              // 0x0008(0x0010) (ZeroConstructor)
	int                                                thirdRetCode;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     thirdRetMsg;                                              // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     retExtraJson;                                             // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct iTOP.IMSDKUnifiedAccountResult
// 0x00A0 (0x00E0 - 0x0040)
struct FIMSDKUnifiedAccountResult : public FiTOPResult
{
	int                                                Ret;                                                      // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     RetMsg;                                                   // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     accountToken;                                             // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     UId;                                                      // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     ExpireTime;                                               // 0x0078(0x0010) (ZeroConstructor)
	int                                                verifyCodeExpire;                                         // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                isRegister;                                               // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                isSetPwd;                                                 // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                isReceiveEmail;                                           // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     emailAccount;                                             // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     phoneAccount;                                             // 0x00A8(0x0010) (ZeroConstructor)
	struct FString                                     phoneExtra;                                               // 0x00B8(0x0010) (ZeroConstructor)
	int                                                accountType;                                              // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FString                                     phoneArea;                                                // 0x00D0(0x0010) (ZeroConstructor)
};

// ScriptStruct iTOP.IMSDKShortUrlResult
// 0x0010 (0x0050 - 0x0040)
struct FIMSDKShortUrlResult : public FiTOPResult
{
	struct FString                                     ShortUrl;                                                 // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPFriendInfo
// 0x0078
struct FiTOPFriendInfo
{
	struct FString                                     OpenID;                                                   // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     channelUserId;                                            // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     channelId;                                                // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0030(0x0010) (ZeroConstructor)
	int                                                gender;                                                   // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     pictureUrl;                                               // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     email;                                                    // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     phone;                                                    // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPFriendResult
// 0x0010 (0x0050 - 0x0040)
struct FiTOPFriendResult : public FiTOPResult
{
	TArray<struct FiTOPFriendInfo>                     sameGameFriendList;                                       // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPLoginResult
// 0x00B8 (0x00F8 - 0x0040)
struct FiTOPLoginResult : public FiTOPResult
{
	struct FString                                     Channel;                                                  // 0x0040(0x0010) (ZeroConstructor)
	int                                                channelId;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     channelToken;                                             // 0x0058(0x0010) (ZeroConstructor)
	int                                                channelTokenExpire;                                       // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FString                                     channelUserId;                                            // 0x0070(0x0010) (ZeroConstructor)
	int                                                GameID;                                                   // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FString                                     Guid;                                                     // 0x0088(0x0010) (ZeroConstructor)
	struct FString                                     guidUserBirthday;                                         // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     guidUserNick;                                             // 0x00A8(0x0010) (ZeroConstructor)
	struct FString                                     guidUserPortrait;                                         // 0x00B8(0x0010) (ZeroConstructor)
	int                                                guidUserSex;                                              // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                innerTokenExpire;                                         // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                isFirstLogin;                                             // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FString                                     innerToken;                                               // 0x00D8(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x00E8(0x0010) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPChannelInfo
// 0x0028 (0x0068 - 0x0040)
struct FiTOPChannelInfo : public FiTOPResult
{
	int                                                channelId;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                gender;                                                   // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     pictureUrl;                                               // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPBindResult
// 0x0010 (0x0108 - 0x00F8)
struct FiTOPBindResult : public FiTOPLoginResult
{
	TArray<struct FiTOPChannelInfo>                    bindInfoList;                                             // 0x00F8(0x0010) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPNoticePicInfo
// 0x0058
struct FiTOPNoticePicInfo
{
	int                                                noticeId;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                screenDir;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PicUrl;                                                   // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     picHash;                                                  // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     PicTitle;                                                 // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     picSize;                                                  // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     ExtraJson;                                                // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPNoticeInfo
// 0x00D0
struct FiTOPNoticeInfo
{
	struct FString                                     stateCode;                                                // 0x0000(0x0010) (ZeroConstructor)
	int                                                noticeId;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     AppID;                                                    // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     noticeUrl;                                                // 0x0038(0x0010) (ZeroConstructor)
	int                                                noticeScene;                                              // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                noticeUpdateTime;                                         // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                noticeEndTime;                                            // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                noticeStartTime;                                          // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     screenName;                                               // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     noticeLanguage;                                           // 0x0068(0x0010) (ZeroConstructor)
	int                                                noticeContentType;                                        // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FString                                     noticeTitle;                                              // 0x0080(0x0010) (ZeroConstructor)
	struct FString                                     noticeContent;                                            // 0x0090(0x0010) (ZeroConstructor)
	TArray<struct FiTOPNoticePicInfo>                  noticePics;                                               // 0x00A0(0x0010) (ZeroConstructor)
	struct FString                                     noticeContentWebUrl;                                      // 0x00B0(0x0010) (ZeroConstructor)
	struct FString                                     ExtraJson;                                                // 0x00C0(0x0010) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPNoticeResult
// 0x0018 (0x0058 - 0x0040)
struct FiTOPNoticeResult : public FiTOPResult
{
	TArray<struct FiTOPNoticeInfo>                     noticesList;                                              // 0x0040(0x0010) (ZeroConstructor)
	int                                                noticesNum;                                               // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct iTOP.iTOPAuthSNSInfo
// 0x0040
struct FiTOPAuthSNSInfo
{
	struct FString                                     OpenID;                                                   // 0x0000(0x0010) (ZeroConstructor)
	int                                                channelId;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     UserName;                                                 // 0x0018(0x0010) (ZeroConstructor)
	int                                                gender;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     pictureUrl;                                               // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPAuthMigrateResult
// 0x0028 (0x0068 - 0x0040)
struct FiTOPAuthMigrateResult : public FiTOPResult
{
	struct FString                                     migrateCode;                                              // 0x0040(0x0010) (ZeroConstructor)
	int                                                validTime;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FiTOPAuthSNSInfo>                    snsInfoList;                                              // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPGPSInfoResult
// 0x0030 (0x0070 - 0x0040)
struct FiTOPGPSInfoResult : public FiTOPResult
{
	double                                             longitude;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             latitude;                                                 // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             horizontalAccuracyMeters;                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             verticalAccuracyMeters;                                   // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     locationProvider;                                         // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPLbsResult
// 0x00C0 (0x0100 - 0x0040)
struct FiTOPLbsResult : public FiTOPResult
{
	int                                                channelId;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     cityName;                                                 // 0x0048(0x0010) (ZeroConstructor)
	int                                                cityNumber;                                               // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     countryName;                                              // 0x0060(0x0010) (ZeroConstructor)
	int                                                countryNumber;                                            // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GameID;                                                   // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Guid;                                                     // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     guidToken;                                                // 0x0088(0x0010) (ZeroConstructor)
	int                                                guidTokenExpire;                                          // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FString                                     guidUserBirthday;                                         // 0x00A0(0x0010) (ZeroConstructor)
	struct FString                                     guidUserNick;                                             // 0x00B0(0x0010) (ZeroConstructor)
	struct FString                                     guidUserPortrait;                                         // 0x00C0(0x0010) (ZeroConstructor)
	int                                                guidUserSex;                                              // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FString                                     provinceName;                                             // 0x00D8(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x00E8(0x0010) (ZeroConstructor)
	int                                                provinceNumber;                                           // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
};

// ScriptStruct iTOP.iTOPAuthResult
// 0x0070 (0x00B0 - 0x0040)
struct FiTOPAuthResult : public FiTOPResult
{
	struct FString                                     Channel;                                                  // 0x0040(0x0010) (ZeroConstructor)
	int                                                channelId;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     DeviceID;                                                 // 0x0058(0x0010) (ZeroConstructor)
	int                                                GameID;                                                   // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FString                                     innerToken;                                               // 0x0070(0x0010) (ZeroConstructor)
	int                                                isFirstLogin;                                             // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FString                                     OpenID;                                                   // 0x0088(0x0010) (ZeroConstructor)
	int                                                tokenExpireTime;                                          // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<struct FiTOPAuthSNSInfo>                    snsInfoList;                                              // 0x00A0(0x0010) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPAuthConnectResult
// 0x0050 (0x0090 - 0x0040)
struct FiTOPAuthConnectResult : public FiTOPResult
{
	struct FString                                     confirmCode;                                              // 0x0040(0x0010) (ZeroConstructor)
	int                                                channelId;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     OpenID;                                                   // 0x0058(0x0010) (ZeroConstructor)
	int                                                gender;                                                   // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FString                                     UserName;                                                 // 0x0070(0x0010) (ZeroConstructor)
	struct FString                                     pictureUrl;                                               // 0x0080(0x0010) (ZeroConstructor)
};

// ScriptStruct iTOP.iTOPWebViewStatusResult
// 0x0008 (0x0048 - 0x0040)
struct FiTOPWebViewStatusResult : public FiTOPResult
{
	int                                                stateCode;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct iTOP.iTOPWebViewTicketResult
// 0x0020 (0x0060 - 0x0040)
struct FiTOPWebViewTicketResult : public FiTOPResult
{
	struct FString                                     Ticket;                                                   // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     domain;                                                   // 0x0050(0x0010) (ZeroConstructor)
};

}

