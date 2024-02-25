#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WebCameraFeed.WebCameraWidget
// 0x0100 (0x0200 - 0x0100)
class UWebCameraWidget : public UWidget
{
public:
	struct FWebCameraDeviceId                          DeviceID;                                                 // 0x0100(0x0004) (Edit, Config)
	int                                                requestedWidth;                                           // 0x0104(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                requestedHeight;                                          // 0x0108(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               ScanningQRCode;                                           // 0x010C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnScanningSuccess;                                        // 0x0110(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0xE0];                                      // 0x0120(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class WebCameraFeed.WebCameraWidget");
		return pStaticClass;
	}


	void UnLockScreenOrientation();
	bool SwitchFrontAndBackCamera();
	void SetDeviceId(int ID);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	bool SaveAsImage(const struct FString& Filename);
	void ReleaseVideoGrabber();
	void LockScreenOrientation();
	void InitVideoGrabber();
	int GetFrontCameraId();
	int GetBackCameraId();
};


}

