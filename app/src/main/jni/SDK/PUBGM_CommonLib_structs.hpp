#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum CommonLib.DownloadResult
enum class EDownloadResult : uint8_t
{
	SuccessDownloading             = 0,
	DownloadFailed                 = 1,
	SaveFailed                     = 2,
	DirectoryCreationFailed        = 3,
	DownloadResult_MAX             = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CommonLib.ServiceCollection
// 0x0050
struct FServiceCollection
{
	TMap<struct FString, class UObject*>               ServiceMap;                                               // 0x0000(0x0050) (ZeroConstructor)
};

}

