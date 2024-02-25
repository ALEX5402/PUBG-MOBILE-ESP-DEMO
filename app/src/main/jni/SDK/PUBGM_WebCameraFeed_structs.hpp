#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum WebCameraFeed.EVideoPixelFormat
enum class EVideoPixelFormat : uint8_t
{
	EVideoPixelFormat__GrayScale   = 0,
	EVideoPixelFormat__Rgb         = 1,
	EVideoPixelFormat__Rgba        = 2,
	EVideoPixelFormat__EVideoPixelFormat_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WebCameraFeed.WebCameraDeviceId
// 0x0004
struct FWebCameraDeviceId
{
	int                                                selectedDevice;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WebCameraFeed.VideoDevice
// 0x0050
struct FVideoDevice
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct WebCameraFeed.VideoFormat
// 0x0020
struct FVideoFormat
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

}

