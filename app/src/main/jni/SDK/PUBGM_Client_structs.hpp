#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Client.FCDNDownloaderStateEnum
enum class EFCDNDownloaderStateEnum : uint8_t
{
	FCDNDownloaderStateEnum__CDNDownloaderEnum_LoadSuccess = 0,
	FCDNDownloaderStateEnum__CDNDownloaderEnum_LoadProgress = 1,
	FCDNDownloaderStateEnum__CDNDownloaderEnum_MAX = 2
};


// Enum Client.FDownloaderStateEnum
enum class EFDownloaderStateEnum : uint8_t
{
	FDownloaderStateEnum__CDNDownloaderEnum_LoadSuccess = 0,
	FDownloaderStateEnum__CDNDownloaderEnum_LoadProgress = 1,
	FDownloaderStateEnum__CDNDownloaderEnum_MAX = 2
};


// Enum Client.EReuseFallOverscrollState
enum class EReuseFallOverscrollState : uint8_t
{
	EReuseFallOverscrollState__RFOS_None = 0,
	EReuseFallOverscrollState__RFOS_Top = 1,
	EReuseFallOverscrollState__RFOS_Bottom = 2,
	EReuseFallOverscrollState__RFOS_MAX = 3
};


// Enum Client.EReuseListJumpStyle
enum class EReuseListJumpStyle : uint8_t
{
	EReuseListJumpStyle__Middle    = 0,
	EReuseListJumpStyle__Begin     = 1,
	EReuseListJumpStyle__End       = 2,
	EReuseListJumpStyle__EReuseListJumpStyle_MAX = 3
};


// Enum Client.EReuseListStyle
enum class EReuseListStyle : uint8_t
{
	EReuseListStyle__Vertical      = 0,
	EReuseListStyle__Horizontal    = 1,
	EReuseListStyle__VerticalGrid  = 2,
	EReuseListStyle__HorizontalGrid = 3,
	EReuseListStyle__EReuseListStyle_MAX = 4
};


// Enum Client.EReuseListNotFullAlignStyle
enum class EReuseListNotFullAlignStyle : uint8_t
{
	EReuseListNotFullAlignStyle__Start = 0,
	EReuseListNotFullAlignStyle__Middle = 1,
	EReuseListNotFullAlignStyle__End = 2,
	EReuseListNotFullAlignStyle__EReuseListNotFullAlignStyle_MAX = 3
};


// Enum Client.FCDNDownloaderTypeEnum
enum class EFCDNDownloaderTypeEnum : uint8_t
{
	FCDNDownloaderTypeEnum__FCDNDownloaderTypeEnum_Config = 0,
	FCDNDownloaderTypeEnum__FCDNDownloaderTypeEnum_Patch = 1,
	FCDNDownloaderTypeEnum__FCDNDownloaderTypeEnum_WhiteList = 2,
	FCDNDownloaderTypeEnum__FCDNDownloaderTypeEnum_MAX = 3
};


// Enum Client.FDownloaderTypeEnum
enum class EFDownloaderTypeEnum : uint8_t
{
	FDownloaderTypeEnum__FDownloaderTypeEnum_Config = 0,
	FDownloaderTypeEnum__FDownloaderTypeEnum_Patch = 1,
	FDownloaderTypeEnum__FDownloaderTypeEnum_WhiteList = 2,
	FDownloaderTypeEnum__FDownloaderTypeEnum_ConfigInMemory = 3,
	FDownloaderTypeEnum__FDownloaderTypeEnum_MAX = 4
};


// Enum Client.ESubsideFeatureLevel
enum class ESubsideFeatureLevel : uint8_t
{
	ELevel_Dafault                 = 0,
	ELevel_OfficialB               = 1,
	ELevel_Jaguar                  = 2,
	ELevel_OfficialA               = 3,
	ELevel_MAX                     = 4
};


// Enum Client.ESDKCallbackType
enum class ESDKCallbackType : uint8_t
{
	ESDKCallbackType__SDK_CB_None  = 0,
	ESDKCallbackType__SDK_CB_VLINK_OPEN = 1,
	ESDKCallbackType__SDK_CB_VLINK_CLOSE = 2,
	ESDKCallbackType__SDK_CB_NET_TRACE = 3,
	ESDKCallbackType__SDK_CB_MAX   = 4
};


// Enum Client.EUnifiedAccountType
enum class EUnifiedAccountType : uint8_t
{
	EUnifiedAccountType__UA_None   = 0,
	EUnifiedAccountType__UA_RequestVerifyCode = 1,
	EUnifiedAccountType__UA_ChangePassword = 2,
	EUnifiedAccountType__UA_ModifyAccount = 3,
	EUnifiedAccountType__UA_CheckIsRegisted = 4,
	EUnifiedAccountType__UA_CheckVerifyCodeValid = 5,
	EUnifiedAccountType__UA_MAX    = 6
};


// Enum Client.EIMSDKScreenDir
enum class EIMSDKScreenDir : uint8_t
{
	EIMSDKScreenDir__kScreenDirSensor = 0,
	EIMSDKScreenDir__kScreenDirPortrait = 1,
	EIMSDKScreenDir__kScreenDirLandscape = 2,
	EIMSDKScreenDir__EIMSDKScreenDir_MAX = 3
};


// Enum Client.EIMSDKContentType
enum class EIMSDKContentType : uint8_t
{
	EIMSDKContentType__kContentTypeText = 0,
	EIMSDKContentType__kContentTypeImage = 1,
	EIMSDKContentType__kContentTypeWeb = 2,
	EIMSDKContentType__EIMSDKContentType_MAX = 3
};


// Enum Client.EIMSDKNoticeType
enum class EIMSDKNoticeType : uint8_t
{
	EIMSDKNoticeType__kNoticeTypeAlert = 0,
	EIMSDKNoticeType__kNoticeTypeScroll = 1,
	EIMSDKNoticeType__kNoticeTypeAll = 2,
	EIMSDKNoticeType__EIMSDKNoticeType_MAX = 3
};


// Enum Client.EScreenDir
enum class EScreenDir : uint8_t
{
	EScreenDir__kScreenDirSensor   = 0,
	EScreenDir__kScreenDirPortrait = 1,
	EScreenDir__kScreenDirLandscape = 2,
	EScreenDir__EScreenDir_MAX     = 3
};


// Enum Client.EContentType
enum class EContentType : uint8_t
{
	EContentType__kContentTypeText = 0,
	EContentType__kContentTypeImage = 1,
	EContentType__kContentTypeWeb  = 2,
	EContentType__EContentType_MAX = 3
};


// Enum Client.ENoticeType
enum class ENoticeType : uint8_t
{
	ENoticeType__kNoticeTypeAlert  = 0,
	ENoticeType__kNoticeTypeScroll = 1,
	ENoticeType__kNoticeTypeAll    = 2,
	ENoticeType__ENoticeType_MAX   = 3
};


// Enum Client.EMidasPackType
enum class EMidasPackType : uint8_t
{
	EMidasPackType__kMidasPackNone = 0,
	EMidasPackType__kMidasPackInit = 1,
	EMidasPackType__kMidasPackPayNeedLogin = 2,
	EMidasPackType__kMidasPackPay  = 3,
	EMidasPackType__kMidasPackGetMP = 4,
	EMidasPackType__kMidasPackGetProductInfo = 5,
	EMidasPackType__kMidasPackReprovide = 6,
	EMidasPackType__kMidasPackGetIntroPrice = 7,
	EMidasPackType__EMidasPackType_MAX = 8
};


// Enum Client.EMidasMultiPayChannelSwitch
enum class EMidasMultiPayChannelSwitch : uint8_t
{
	EMidasMultiPayChannelSwitch__kMidasPayChannelMain = 0,
	EMidasMultiPayChannelSwitch__kMidasPayChannelH5 = 1,
	EMidasMultiPayChannelSwitch__EMidasMultiPayChannelSwitch_MAX = 2
};


// Enum Client.ESDKCallbackMethodId
enum class ESDKCallbackMethodId : uint8_t
{
	ESDKCallbackMethodId__SDK_CB_None = 0,
	ESDKCallbackMethodId__SDK_CB_SNS_NOTIFY = 1,
	ESDKCallbackMethodId__SDK_CB_COMPLIANCE_NOTIFY = 2,
	ESDKCallbackMethodId__SDK_CB_MAX = 3
};


// Enum Client.UserSettingsDataType
enum class EUserSettingsDataType : uint8_t
{
	Bool                           = 0,
	Enum                           = 1,
	Int                            = 2,
	Float                          = 3,
	String                         = 4,
	UserSettingsDataType_MAX       = 5
};


// Enum Client.EVibrateStrengthLevel
enum class EVibrateStrengthLevel : uint8_t
{
	EVibrateStrengthLevel__None    = 0,
	EVibrateStrengthLevel__Low     = 1,
	EVibrateStrengthLevel__Mid     = 2,
	EVibrateStrengthLevel__High    = 3,
	EVibrateStrengthLevel__EVibrateStrengthLevel_MAX = 4
};


// Enum Client.EVibrateTriggerActionType
enum class EVibrateTriggerActionType : uint8_t
{
	EVibrateTriggerActionType__None = 0,
	EVibrateTriggerActionType__Onece = 1,
	EVibrateTriggerActionType__Start = 2,
	EVibrateTriggerActionType__Stop = 3,
	EVibrateTriggerActionType__EVibrateTriggerActionType_MAX = 4
};


// Enum Client.EVibrateTriggerEventType
enum class EVibrateTriggerEventType : uint8_t
{
	EVibrateTriggerEventType__None = 0,
	EVibrateTriggerEventType__EquipWeapon = 1,
	EVibrateTriggerEventType__UnEquipWeapon = 2,
	EVibrateTriggerEventType__EquipWeaponAttachment = 3,
	EVibrateTriggerEventType__UnEquipWeaponAttachment = 4,
	EVibrateTriggerEventType__FireShot = 5,
	EVibrateTriggerEventType__ReloadStart = 6,
	EVibrateTriggerEventType__LoadBulletOnReload = 7,
	EVibrateTriggerEventType__ReloadEnd = 8,
	EVibrateTriggerEventType__BoltStart = 9,
	EVibrateTriggerEventType__PullBolt = 10,
	EVibrateTriggerEventType__BoltEnd = 11,
	EVibrateTriggerEventType__ChangeMagazine = 12,
	EVibrateTriggerEventType__MagIn = 13,
	EVibrateTriggerEventType__MagOut = 14,
	EVibrateTriggerEventType__LocalShellDrop = 15,
	EVibrateTriggerEventType__ChangeShootType = 16,
	EVibrateTriggerEventType__ShootLastBullet = 17,
	EVibrateTriggerEventType__NoneShoot = 18,
	EVibrateTriggerEventType__PrepareThrowGrenade = 19,
	EVibrateTriggerEventType__ReleaseThrowGrenade = 20,
	EVibrateTriggerEventType__WeaponCustom = 21,
	EVibrateTriggerEventType__VehicleGetOn = 22,
	EVibrateTriggerEventType__VehicleGetOff = 23,
	EVibrateTriggerEventType__VehicleBoostSpeed = 24,
	EVibrateTriggerEventType__VehicleHitByBullet = 25,
	EVibrateTriggerEventType__VehicleWheelsBroken = 26,
	EVibrateTriggerEventType__VehicleHitObstacal = 27,
	EVibrateTriggerEventType__VehicleChangeGear = 28,
	EVibrateTriggerEventType__VehicleBreaking = 29,
	EVibrateTriggerEventType__VehicleContactSpesificGround = 30,
	EVibrateTriggerEventType__VehicleSlipping = 31,
	EVibrateTriggerEventType__VehicleRaisePushSuspension = 32,
	EVibrateTriggerEventType__HitByBullet = 33,
	EVibrateTriggerEventType__FallDamage = 34,
	EVibrateTriggerEventType__VehicleImpactDamage = 35,
	EVibrateTriggerEventType__VehicleImpactDamageInVehicle = 36,
	EVibrateTriggerEventType__ExplosionDamage = 37,
	EVibrateTriggerEventType__BurningDamage = 38,
	EVibrateTriggerEventType__LoseSignalHP = 39,
	EVibrateTriggerEventType__FallOnGround = 40,
	EVibrateTriggerEventType__Dead = 41,
	EVibrateTriggerEventType__JumpFromPlane = 42,
	EVibrateTriggerEventType__StartSprint = 43,
	EVibrateTriggerEventType__Shoveling = 44,
	EVibrateTriggerEventType__Climb = 45,
	EVibrateTriggerEventType__StartSwim = 46,
	EVibrateTriggerEventType__MeleeDamage = 47,
	EVibrateTriggerEventType__AirAttackDamage = 48,
	EVibrateTriggerEventType__HitByBulletOnHead = 49,
	EVibrateTriggerEventType__HitByBulletOnBody = 50,
	EVibrateTriggerEventType__ShowVoiceMove = 51,
	EVibrateTriggerEventType__ShowVoiceShoot = 52,
	EVibrateTriggerEventType__ShowVoiceSilenceShoot = 53,
	EVibrateTriggerEventType__ShowVoiceBreakGlass = 54,
	EVibrateTriggerEventType__ShowVoiceExplosion = 55,
	EVibrateTriggerEventType__ShowVoiceVehicle = 56,
	EVibrateTriggerEventType__TriggerByAssetID = 57,
	EVibrateTriggerEventType__EVibrateTriggerEventType_MAX = 58
};


// Enum Client.EVibrateTriggerSubItemType
enum class EVibrateTriggerSubItemType : uint8_t
{
	EVibrateTriggerSubItemType__None = 0,
	EVibrateTriggerSubItemType__WeaponAttachment = 1,
	EVibrateTriggerSubItemType__VehicleGear = 2,
	EVibrateTriggerSubItemType__HitHead = 3,
	EVibrateTriggerSubItemType__HitBody = 4,
	EVibrateTriggerSubItemType__HitLimbs = 5,
	EVibrateTriggerSubItemType__EVibrateTriggerSubItemType_MAX = 6
};


// Enum Client.EVibrateTriggerMainItemType
enum class EVibrateTriggerMainItemType : uint8_t
{
	EVibrateTriggerMainItemType__None = 0,
	EVibrateTriggerMainItemType__Weapon = 1,
	EVibrateTriggerMainItemType__Vehicle = 2,
	EVibrateTriggerMainItemType__Character = 3,
	EVibrateTriggerMainItemType__ShowVoiceUI = 4,
	EVibrateTriggerMainItemType__Custom = 5,
	EVibrateTriggerMainItemType__EVibrateTriggerMainItemType_MAX = 6
};


// Enum Client.EWeaponSpecialSoundType
enum class EWeaponSpecialSoundType : uint8_t
{
	EWeaponSpecialSoundType__LoadBullet = 0,
	EWeaponSpecialSoundType__ChangeMagazine = 1,
	EWeaponSpecialSoundType__MagIn = 2,
	EWeaponSpecialSoundType__MagOut = 3,
	EWeaponSpecialSoundType__PullBolt = 4,
	EWeaponSpecialSoundType__LocalShellDrop = 5,
	EWeaponSpecialSoundType__EWeaponSpecialSoundType_MAX = 6
};


// Enum Client.EButtonClickSoundTypes
enum class EButtonClickSoundTypes : uint8_t
{
	EButtonClickSoundTypes__None   = 0,
	EButtonClickSoundTypes__Play_UI_Bnt_Confirm = 1,
	EButtonClickSoundTypes__Play_UI_Bnt_Click = 2,
	EButtonClickSoundTypes__Play_UI_Bnt_Tab = 3,
	EButtonClickSoundTypes__Play_UI_Bnt_Select = 4,
	EButtonClickSoundTypes__Play_UI_Bnt_Close = 5,
	EButtonClickSoundTypes__Play_UI_Bnt_MainMenu = 6,
	EButtonClickSoundTypes__Play_UI_Bnt_MenuOpen = 7,
	EButtonClickSoundTypes__Play_UI_Bnt_MenuClose = 8,
	EButtonClickSoundTypes__Play_UI_Bnt_StartGame = 9,
	EButtonClickSoundTypes__Play_UI_Bnt_Turn = 10,
	EButtonClickSoundTypes__Play_UI_Bnt_Set = 11,
	EButtonClickSoundTypes__EButtonClickSoundTypes_MAX = 12
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Client.BattleGameInfo
// 0x0038
struct FBattleGameInfo
{
	uint64_t                                           GameID;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameModeID;                                               // 0x0008(0x0010) (ZeroConstructor)
	int                                                GameMapID;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WeatherID;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     WeatherName;                                              // 0x0020(0x0010) (ZeroConstructor)
	bool                                               bUsedSimulation;                                          // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableClimbing;                                          // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct Client.CDNDownloaderInfo
// 0x0030
struct FCDNDownloaderInfo
{
	EFCDNDownloaderStateEnum                           State;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     FileSavePath;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Result;                                                   // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                BytesSent;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BytesReceived;                                            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ContentType;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ResponseCode;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Client.GameWidgetConfig
// 0x0030
struct FGameWidgetConfig
{
	struct FString                                     Path;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Container;                                                // 0x0010(0x0010) (ZeroConstructor)
	int                                                ZOrder;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UClass*                                      WidgetClass;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Client.NativeHUDTickContainer
// 0x000C
struct FNativeHUDTickContainer
{
	int                                                WidgetIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UUAEUserWidget>               pWidget;                                                  // 0x0004(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Client.WebviewInfoWrapper
// 0x0030
struct FWebviewInfoWrapper
{
	int                                                ErrorCode;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Reason;                                                   // 0x0008(0x0010) (ZeroConstructor)
	int                                                extend;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Extend2;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MsgData;                                                  // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Client.UAAssistantInfoWrapper
// 0x0028
struct FUAAssistantInfoWrapper
{
	EUnifiedAccountType                                UAType;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Result;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ExtraJson;                                                // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     RetsultMsg;                                               // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Client.SDKCallbackInfoWrapper
// 0x0028
struct FSDKCallbackInfoWrapper
{
	ESDKCallbackType                                   CallbackType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     CallbackParameter;                                        // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     ExtraJson;                                                // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Client.WakeupInfoWrapper
// 0x0050
struct FWakeupInfoWrapper
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Client.PlatformFriendInfoMap
// 0x0058
struct FPlatformFriendInfoMap
{
	int                                                page;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<struct FString, struct FString>               friendsInfo;                                              // 0x0008(0x0050) (ZeroConstructor)
};

// ScriptStruct Client.WechatGroupInfomation
// 0x0030
struct FWechatGroupInfomation
{
	struct FString                                     OpenIdList;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     MemberNum;                                                // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     ChatRoomURL;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Client.GroupInfoWrapper
// 0x0050
struct FGroupInfoWrapper
{
	int                                                SnsAction;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Flag;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ErrorCode;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlatForm;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Desc;                                                     // 0x0010(0x0010) (ZeroConstructor)
	struct FWechatGroupInfomation                      wechatGroupInfo;                                          // 0x0020(0x0030)
};

// ScriptStruct Client.DownloaderInfo
// 0x0040
struct FDownloaderInfo
{
	EFDownloaderStateEnum                              State;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     FileSavePath;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Result;                                                   // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                BytesSent;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BytesReceived;                                            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ContentType;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ResponseCode;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     StringContent;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Client.IMSDKPictureInfomation
// 0x0038
struct FIMSDKPictureInfomation
{
	EIMSDKScreenDir                                    PicScreenDir;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     PicPath;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HashValue;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PicTitle;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Client.IMSDKNoticeInfo
// 0x00E0
struct FIMSDKNoticeInfo
{
	struct FString                                     MsgID;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MsgUrl;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EIMSDKNoticeType                                   MsgType;                                                  // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FString                                     MsgScene;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     StartTime;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     EndTime;                                                  // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EIMSDKContentType                                  MsgContentType;                                           // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FString                                     MsgOrder;                                                 // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ContentUrl;                                               // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FIMSDKPictureInfomation>             PicArray;                                                 // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MsgTitle;                                                 // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     msgContent;                                               // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MsgEditCond;                                              // 0x00C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LoginTimes;                                               // 0x00D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Client.WidgetMountData
// 0x0048
struct FWidgetMountData
{
	struct FMargin                                     MarginData;                                               // 0x0000(0x0010) (IsPlainOldData)
	struct FAnchors                                    AnchorsData;                                              // 0x0010(0x0010)
	struct FVector2D                                   Position;                                                 // 0x0020(0x0008) (IsPlainOldData)
	struct FString                                     MountName;                                                // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     MountOuterName;                                           // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct Client.InGameWidgetData
// 0x0080
struct FInGameWidgetData
{
	int                                                bAutoShow;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FGameWidgetConfig                           GameWidgetConfig;                                         // 0x0008(0x0030)
	struct FWidgetMountData                            WidgetMountData;                                          // 0x0038(0x0048)
};

// ScriptStruct Client.DynamicWidgetData
// 0x0098
struct FDynamicWidgetData
{
	bool                                               bAutoDestory;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     MountModule;                                              // 0x0008(0x0010) (ZeroConstructor)
	struct FInGameWidgetData                           InGameWidgetData;                                         // 0x0018(0x0080)
};

// ScriptStruct Client.DynamicWidgetAsyncLoadData
// 0x00B8
struct FDynamicWidgetAsyncLoadData
{
	struct FString                                     WidgetKey;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FDynamicWidgetData                          DynamicWidgetData;                                        // 0x0010(0x0098)
	struct FScriptDelegate                             Callback;                                                 // 0x00A8(0x0010) (ZeroConstructor, InstancedReference)
};

// ScriptStruct Client.LuaBPVar
// 0x0020
struct FLuaBPVar
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Client.TouchInputRecord
// 0x0030
struct FTouchInputRecord
{
	TArray<float>                                      Times;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector2D>                           Positions;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        Types;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Client.FightFriendChat
// 0x0038
struct FFightFriendChat
{
	struct FString                                     UId;                                                      // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     Msg;                                                      // 0x0020(0x0010) (ZeroConstructor)
	bool                                               selfMsg;                                                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Client.PlayerFinishedGuide
// 0x0008
struct FPlayerFinishedGuide
{
	int                                                GuideID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FinishedCounts;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Client.TimeStamp
// 0x0020
struct FTimeStamp
{
	struct FString                                     Title;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Priority;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StartTime;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EndTime;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Client.CustomSettingSaveGame
// 0x0018
struct FCustomSettingSaveGame
{
	struct FString                                     LayoutSlotName;                                           // 0x0000(0x0010) (ZeroConstructor)
	class USaveGame*                                   SaveGame;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Client.AssetAsyncRequest
// 0x0020
struct FAssetAsyncRequest
{
	struct FString                                     Path;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FScriptDelegate                             Callback;                                                 // 0x0010(0x0010) (ZeroConstructor, InstancedReference)
};

// ScriptStruct Client.MetaDataHolder
// 0x0050
struct FMetaDataHolder
{
	TMap<struct FString, struct FString>               MetaData;                                                 // 0x0000(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Client.PingServerInfo
// 0x0030
struct FPingServerInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Client.VibrateEntity
// 0x0048
struct FVibrateEntity
{
	int                                                AssetId;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     AssetAbsPath;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                PlayAmplitude;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     PlayKeyParam;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                PlayPriority;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayDuration;                                             // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLoop;                                                  // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	float                                              PushTime;                                                 // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EVibrateTriggerEventType                           EventType;                                                // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct Client.VibrateTriggerMainItem
// 0x0018
struct FVibrateTriggerMainItem
{
	EVibrateTriggerMainItemType                        MainItemType;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Data;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Client.VibrateTriggerSubItem
// 0x0018
struct FVibrateTriggerSubItem
{
	EVibrateTriggerSubItemType                         SubItemType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Data;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Client.VibrateTriggerAction
// 0x0038
struct FVibrateTriggerAction
{
	int                                                VibrateAmplitude;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FVibrateTriggerMainItem                     TriggerMainItem;                                          // 0x0008(0x0018) (Edit, BlueprintVisible)
	TArray<struct FVibrateTriggerSubItem>              TriggerSubItemList;                                       // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EVibrateTriggerEventType                           TriggerEventType;                                         // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EVibrateTriggerActionType                          TriggerActionType;                                        // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct Client.ShortURLInfoWrapper
// 0x0028
struct FShortURLInfoWrapper
{
	int                                                ErrorCode;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Reason;                                                   // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     ShortUrl;                                                 // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Client.GameMasterInfoWrapper
// 0x0018
struct FGameMasterInfoWrapper
{
	struct FString                                     EventName;                                                // 0x0000(0x0010) (ZeroConstructor)
	int                                                Result;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Client.OnRequestPermissionResultWrapper
// 0x0028
struct FOnRequestPermissionResultWrapper
{
	int                                                code;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     permission;                                               // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     grantResult;                                              // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Client.UploadFinishCallbackInfoWrapper
// 0x0018
struct FUploadFinishCallbackInfoWrapper
{
	int                                                Result;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     URL;                                                      // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Client.LoadTaskCfg
// 0x0018
struct FLoadTaskCfg
{
	struct FString                                     ObjectPath;                                               // 0x0000(0x0010) (ZeroConstructor)
	int                                                LoadPriority;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Client.VersionConfig
// 0x0100
struct FVersionConfig
{
	unsigned char                                      UnknownData00[0x100];                                     // 0x0000(0x0100) MISSED OFFSET
};

// ScriptStruct Client.Version
// 0x0090
struct FVersion
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct Client.PatchConfig
// 0x0080
struct FPatchConfig
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct Client.PatchURL
// 0x0028
struct FPatchURL
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Client.GetTicketInfoWrapper
// 0x0010
struct FGetTicketInfoWrapper
{
	struct FString                                     Ticket;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Client.WebviewActionInfo
// 0x0010
struct FWebviewActionInfo
{
	struct FString                                     URL;                                                      // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Client.PlatformFriendInfo
// 0x0040
struct FPlatformFriendInfo
{
	struct FString                                     userId;                                                   // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     headportraitURL;                                          // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Client.DelayLoadInlineTextImageStyle
// 0x00E8 (0x00F0 - 0x0008)
struct FDelayLoadInlineTextImageStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Image;                                                    // 0x0008(0x00B8) (Edit)
	int16_t                                            Baseline;                                                 // 0x00C0(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2E];                                      // 0x00C2(0x002E) MISSED OFFSET
};

// ScriptStruct Client.IMSDKNoticeInfos
// 0x0010
struct FIMSDKNoticeInfos
{
	TArray<struct FIMSDKNoticeInfo>                    Infos;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Client.PictureInfomation
// 0x0028
struct FPictureInfomation
{
	EScreenDir                                         PicScreenDir;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     PicPath;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HashValue;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Client.NoticeInfo
// 0x00D0
struct FNoticeInfo
{
	struct FString                                     MsgID;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MsgUrl;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	ENoticeType                                        MsgType;                                                  // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FString                                     MsgScene;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     StartTime;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     EndTime;                                                  // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EContentType                                       MsgContentType;                                           // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FString                                     MsgOrder;                                                 // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ContentUrl;                                               // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FPictureInfomation>                  PicArray;                                                 // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MsgTitle;                                                 // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     msgContent;                                               // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MsgEditCond;                                              // 0x00C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Client.NoticeInfos
// 0x0010
struct FNoticeInfos
{
	TArray<struct FNoticeInfo>                         Infos;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Client.BatchDownloadPackHashes
// 0x0010
struct FBatchDownloadPackHashes
{
	TArray<struct FString>                             Hashes;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Client.BatchDownloadPack
// 0x0030
struct FBatchDownloadPack
{
	TArray<uint32_t>                                   ItemIDs;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   ErrorCodes;                                               // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct Client.PufferDownloadLastTaskStatus
// 0x0018
struct FPufferDownloadLastTaskStatus
{
	struct FDateTime                                   Time;                                                     // 0x0000(0x0008)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Client.PufferObj
// 0x0018
struct FPufferObj
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Client.PufferDownloadStates
// 0x0030
struct FPufferDownloadStates
{
	TArray<double>                                     speeds;                                                   // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Filename;                                                 // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct Client.UEComplianceResult
// 0x00A8
struct FUEComplianceResult
{
	int                                                AdultStatus;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ParentCertificateStatus;                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EUUserAgreeStatus;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AdultAge;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GameGrade;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CertificateType;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsEEA;                                                    // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                MethodId;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RetCode;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ThirdCode;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ThirdMsg;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ParentCertificateStatusExpiration;                        // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     CountryCode;                                              // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     AdultStatusExpiration;                                    // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TS;                                                       // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Region;                                                   // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     RetMsg;                                                   // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ExtraJson;                                                // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Client.ArrayLuaBPVar
// 0x0020
struct FArrayLuaBPVar
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Client.MapLuaBPVar
// 0x0020
struct FMapLuaBPVar
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Client.MidasPack
// 0x0058
struct FMidasPack
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct Client.LobbyTeamState
// 0x0008
struct FLobbyTeamState
{
	int                                                UId;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_state;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Client.SDKCallbackWrapper
// 0x0028
struct FSDKCallbackWrapper
{
	ESDKCallbackMethodId                               MethodId;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FString                                     RetJson;                                                  // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     ExtraJson;                                                // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Client.VibrateTriggerCondition
// 0x0038
struct FVibrateTriggerCondition
{
	bool                                               bOnlyMatchMainItemType;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FVibrateTriggerMainItem                     TriggerMainItem;                                          // 0x0008(0x0018) (Edit, BlueprintVisible)
	TArray<struct FVibrateTriggerSubItem>              TriggerSubItemList;                                       // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EVibrateTriggerEventType                           TriggerEventType;                                         // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Client.VibrateAssetItemConfig
// 0x0080
struct FVibrateAssetItemConfig
{
	int                                                AssetId;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FVibrateTriggerCondition                    TriggerCondition;                                         // 0x0008(0x0038) (Edit, BlueprintVisible)
	struct FString                                     AssetPath;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     PlayKeyParam;                                             // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              AutoStopTime;                                             // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PlayPriority;                                             // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayDuration;                                             // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FString                                     AbsPath;                                                  // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

