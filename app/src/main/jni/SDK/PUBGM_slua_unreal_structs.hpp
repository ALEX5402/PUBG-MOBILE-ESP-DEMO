#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum slua_unreal.EPropertyClass
enum class EPropertyClass : uint8_t
{
	EPropertyClass__Byte           = 0,
	EPropertyClass__Int8           = 1,
	EPropertyClass__Int16          = 2,
	EPropertyClass__Int            = 3,
	EPropertyClass__Int64          = 4,
	EPropertyClass__UInt16         = 5,
	EPropertyClass__UInt32         = 6,
	EPropertyClass__UInt64         = 7,
	EPropertyClass__UnsizedInt     = 8,
	EPropertyClass__UnsizedUInt    = 9,
	EPropertyClass__Float          = 10,
	EPropertyClass__Double         = 11,
	EPropertyClass__Bool           = 12,
	EPropertyClass__SoftClass      = 13,
	EPropertyClass__WeakObject     = 14,
	EPropertyClass__LazyObject     = 15,
	EPropertyClass__SoftObject     = 16,
	EPropertyClass__Class          = 17,
	EPropertyClass__Object         = 18,
	EPropertyClass__Interface      = 19,
	EPropertyClass__Name           = 20,
	EPropertyClass__Str            = 21,
	EPropertyClass__Array          = 22,
	EPropertyClass__Map            = 23,
	EPropertyClass__Set            = 24,
	EPropertyClass__Struct         = 25,
	EPropertyClass__Delegate       = 26,
	EPropertyClass__MulticastDelegate = 27,
	EPropertyClass__Text           = 28,
	EPropertyClass__Enum           = 29,
	EPropertyClass__EPropertyClass_MAX = 30
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct slua_unreal.LuaNetSerialization
// 0x0050
struct FLuaNetSerialization
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct slua_unreal.SluaBPVar
// 0x0020
struct FSluaBPVar
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct slua_unreal.unctionProfileInfo
// 0x0060
struct FunctionProfileInfo
{
	struct FString                                     FunctionName;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     brevName;                                                 // 0x0010(0x0010) (ZeroConstructor)
	int64_t                                            begTime;                                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            EndTime;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            costTime;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            mergedCostTime;                                           // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                globalIdx;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                layerIdx;                                                 // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                mergedNum;                                                // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               beMerged;                                                 // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               isDuplicated;                                             // 0x004D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	TArray<int>                                        mergeIdxArray;                                            // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct slua_unreal.unctionProfileCallInfo
// 0x0030
struct FunctionProfileCallInfo
{
	struct FString                                     FunctionName;                                             // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            begTime;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsCoroutineBegin;                                        // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0019(0x0017) MISSED OFFSET
};

// ScriptStruct slua_unreal.unctionProfileNode
// 0x0030
struct FunctionProfileNode
{
	struct FString                                     FunctionName;                                             // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            costTime;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                countOfCalls;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                layerIdx;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct slua_unreal.ProflierMemNode
// 0x00A8
struct FProflierMemNode
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct slua_unreal.ileMemInfo
// 0x0028
struct FileMemInfo
{
	struct FString                                     hint;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     LineNumber;                                               // 0x0010(0x0010) (ZeroConstructor)
	float                                              Size;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              difference;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct slua_unreal.ProfileNodeArray
// 0x0010
struct FProfileNodeArray
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

}

