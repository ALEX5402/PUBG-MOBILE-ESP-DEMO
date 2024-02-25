#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ReAutomatic.EUIType
enum class EUIType : uint8_t
{
	EUIType__Any                   = 0,
	EUIType__Clickable             = 1,
	EUIType__TextInput             = 2,
	EUIType__Scrollable            = 3,
	EUIType__Text                  = 4,
	EUIType__Checkable             = 5,
	EUIType__EUIType_MAX           = 6
};


// Enum ReAutomatic.ERouteProtoID
enum class ERouteProtoID : uint8_t
{
	ERouteProtoID__Regist          = 0,
	ERouteProtoID__NormalMessage   = 1,
	ERouteProtoID__Close           = 2,
	ERouteProtoID__HeartBeat       = 3,
	ERouteProtoID__Log             = 4,
	ERouteProtoID__ListDevice      = 5,
	ERouteProtoID__Max             = 6
};


// Enum ReAutomatic.ERouteType
enum class ERouteType : uint8_t
{
	ERouteType__RouteServer        = 0,
	ERouteType__LocalController    = 1,
	ERouteType__MobileDevice       = 2,
	ERouteType__UnrealEngine       = 3,
	ERouteType__WebService         = 4,
	ERouteType__Max                = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ReAutomatic.FindUICondition
// 0x0028
struct FFindUICondition
{
	EUIType                                            UIType;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     UINameRegex;                                              // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     ContainTextRegex;                                         // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct ReAutomatic.LuaScriptMessage
// 0x0018
struct FLuaScriptMessage
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     LuaScript;                                                // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct ReAutomatic.CmdTypes
// 0x0001
struct FCmdTypes
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ReAutomatic.RemoteControllerInfo
// 0x0018
struct FRemoteControllerInfo
{
	struct FString                                     ControllerName;                                           // 0x0000(0x0010) (ZeroConstructor)
	ERouteType                                         ControllerType;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ReAutomatic.RouteSendMessage
// 0x0050
struct FRouteSendMessage
{
	ERouteType                                         FromRouteType;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     FromRouteName;                                            // 0x0008(0x0010) (ZeroConstructor)
	ERouteType                                         TargetRouteType;                                          // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     TargetRouteName;                                          // 0x0020(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0030(0x0020) MISSED OFFSET
};

// ScriptStruct ReAutomatic.RawCommandMessage
// 0x0020
struct FRawCommandMessage
{
	struct FString                                     CmdId;                                                    // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct ReAutomatic.RouteCloseMessage
// 0x0018
struct FRouteCloseMessage
{
	struct FString                                     RegistName;                                               // 0x0000(0x0010) (ZeroConstructor)
	ERouteType                                         RegistType;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ReAutomatic.RouteRegistMessage
// 0x0018
struct FRouteRegistMessage
{
	struct FString                                     RegistName;                                               // 0x0000(0x0010) (ZeroConstructor)
	ERouteType                                         RegistType;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

}

