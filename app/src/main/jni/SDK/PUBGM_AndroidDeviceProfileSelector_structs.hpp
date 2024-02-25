#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AndroidDeviceProfileSelector.ECompareType
enum class ECompareType : uint8_t
{
	CMP_Equal                      = 0,
	CMP_Less                       = 1,
	CMP_LessEqual                  = 2,
	CMP_Greater                    = 3,
	CMP_GreaterEqual               = 4,
	CMP_NotEqual                   = 5,
	CMP_Regex                      = 6,
	CMP_MAX                        = 7
};


// Enum AndroidDeviceProfileSelector.ESourceType
enum class ESourceType : uint8_t
{
	SRC_PreviousRegexMatch         = 0,
	SRC_GpuFamily                  = 1,
	SRC_GlVersion                  = 2,
	SRC_AndroidVersion             = 3,
	SRC_DeviceMake                 = 4,
	SRC_DeviceModel                = 5,
	SRC_VulkanVersion              = 6,
	SRC_UsingHoudini               = 7,
	SRC_VulkanAvailable            = 8,
	SRC_MemorySizeInGB             = 9,
	SRC_CPUCoreNum                 = 10,
	SRC_CPUMaxFreq                 = 11,
	SRC_GLExtensions               = 12,
	SRC_BrandROMVersion            = 13,
	SRC_VulkanVendorID             = 14,
	SRC_VulkanDriverVersion        = 15,
	SRC_VulkanApiVersion           = 16,
	SRC_MainBroadInfo              = 17,
	SRC_MAX                        = 18
};


// Enum AndroidDeviceProfileSelector.EGradeScoreType
enum class EGradeScoreType : uint8_t
{
	GST_GPU                        = 0,
	GST_Memory                     = 1,
	GST_CPUCore                    = 2,
	GST_CPUFreq                    = 3,
	GST_MAX                        = 4
};


// Enum AndroidDeviceProfileSelector.EGradeType
enum class EGradeType : uint8_t
{
	GAT_Grade01                    = 0,
	GAT_Grade02                    = 1,
	GAT_Grade03                    = 2,
	GAT_Grade04                    = 3,
	GAT_Grade05                    = 4,
	GAT_Grade06                    = 5,
	GAT_Grade07                    = 6,
	GAT_MAX                        = 7
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AndroidDeviceProfileSelector.GradeScoreProfileName
// 0x0018
struct FGradeScoreProfileName
{
	struct FString                                     ProfileName;                                              // 0x0000(0x0010) (ZeroConstructor)
	int                                                Score;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct AndroidDeviceProfileSelector.GradeProfileMatchItem
// 0x0018
struct FGradeProfileMatchItem
{
	TEnumAsByte<ESourceType>                           SourceType;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECompareType>                          CompareType;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FString                                     MatchString;                                              // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct AndroidDeviceProfileSelector.GradeProfileMatch
// 0x0018
struct FGradeProfileMatch
{
	TEnumAsByte<EGradeScoreType>                       ScoreType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Score;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGradeProfileMatchItem>              Match;                                                    // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct AndroidDeviceProfileSelector.ProfileMatchItem
// 0x0018
struct FProfileMatchItem
{
	TEnumAsByte<ESourceType>                           SourceType;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECompareType>                          CompareType;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FString                                     MatchString;                                              // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct AndroidDeviceProfileSelector.ProfileMatch
// 0x0020
struct FProfileMatch
{
	struct FString                                     Profile;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FProfileMatchItem>                   Match;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct AndroidDeviceProfileSelector.JavaSurfaceViewDevice
// 0x0020
struct FJavaSurfaceViewDevice
{
	struct FString                                     Manufacturer;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Model;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

}

