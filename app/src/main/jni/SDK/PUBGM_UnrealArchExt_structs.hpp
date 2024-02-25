#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum UnrealArchExt.EWidgetCompareType
enum class EWidgetCompareType : uint8_t
{
	EWidgetCompareType__Equal      = 0,
	EWidgetCompareType__NotEqual   = 1,
	EWidgetCompareType__LessThan   = 2,
	EWidgetCompareType__LargeThan  = 3,
	EWidgetCompareType__EqualLessThan = 4,
	EWidgetCompareType__EqualLargeThan = 5,
	EWidgetCompareType__EWidgetCompareType_MAX = 6
};


// Enum UnrealArchExt.EUserWidgetNameEqualPolitics
enum class EUserWidgetNameEqualPolitics : uint8_t
{
	EUserWidgetNameEqualPolitics__Normal = 0,
	EUserWidgetNameEqualPolitics__StartsWith = 1,
	EUserWidgetNameEqualPolitics__Regex = 2,
	EUserWidgetNameEqualPolitics__EUserWidgetNameEqualPolitics_MAX = 3
};


// Enum UnrealArchExt.EUserWidgetFadingStatus
enum class EUserWidgetFadingStatus : uint8_t
{
	EUserWidgetFadingStatus__UserWidgetFadingStatus_None = 0,
	EUserWidgetFadingStatus__UserWidgetFadingStatus_FadingIn = 1,
	EUserWidgetFadingStatus__UserWidgetFadingStatus_FadingOut = 2,
	EUserWidgetFadingStatus__UserWidgetFadingStatus_MAX = 3
};


// Enum UnrealArchExt.EUAEUIMsgCallType
enum class EUAEUIMsgCallType : uint8_t
{
	EUAEUIMsgCallType__MCT_OnlySelf = 0,
	EUAEUIMsgCallType__MCT_AllFunc = 1,
	EUAEUIMsgCallType__MCT_MAX     = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UnrealArchExt.UserWidgetState
// 0x0028
struct FUserWidgetState
{
	struct FString                                     WidgetName;                                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FName                                       ContainerName;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UUAEUserWidget*                              Widget;                                                   // 0x0020(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct UnrealArchExt.UnixTimestampCallback
// 0x0018
struct FUnixTimestampCallback
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct UnrealArchExt.LogicManagerCreateParams
// 0x0018
struct FLogicManagerCreateParams
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	class UClass*                                      pLogicManagerClass;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

