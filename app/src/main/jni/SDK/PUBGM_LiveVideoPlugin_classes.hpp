#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LiveVideoPlugin.BP_LiveVideoLibrary
// 0x0040 (0x0068 - 0x0028)
class UBP_LiveVideoLibrary : public UBlueprintFunctionLibrary
{
public:
	struct FScriptMulticastDelegate                    m_PusherEventDelegate;                                    // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_PlayerEventDelegate;                                    // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_TcUploadEventDelegate;                                  // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_VideoEditerEventDelegate;                               // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LiveVideoPlugin.BP_LiveVideoLibrary");
		return pStaticClass;
	}


	class UBP_LiveVideoLibrary* GetInstance();
	void BP_VideoEditerInit(const struct FString& szLicenseUrl, const struct FString& szLicenseKey);
	void BP_VideoEditerCallbackTest(int nCode, int nParam1, int nParam2, const struct FString& strMessage);
	int BP_TcUploadVideFile(const struct FString& strSignature, const struct FString& strVideoPath, const struct FString& strCoverPath, bool bEnableResume, bool bEnableHttps, const struct FString& strFileName);
	int BP_TcUploadUnInit();
	int BP_TcUploadInit();
	int BP_TcUploadCancel(int nSessionId);
	void BP_SaveVideoToAlbum(const struct FString& strVideoPath);
	void BP_SaveImageToAlbum(const struct FString& strImagePath);
	void BP_OpenVideoEditer(const struct FString& szUrl);
	int BP_LivePusherUnInit();
	int BP_LivePusherStopRecord();
	int BP_LivePusherStop();
	int BP_LivePusherStartRecord(const struct FString& StrFilePath, int nWidth, int nHeight, int nFrameRate, int nBitRate, const struct FString& strThumbnailPath);
	int BP_LivePusherStart(const struct FString& strUrl);
	int BP_LivePusherSetOption(const struct FString& strOption, int nVal);
	int BP_LivePusherSaveVideoThumbnail(const struct FString& strThumbnailPath, const struct FString& strVideoPath, float fTime);
	int BP_LivePusherResume();
	int BP_LivePusherPause();
	bool BP_LivePusherIsRecord();
	bool BP_LivePusherIsPushing();
	bool BP_LivePusherIsPush();
	int BP_LivePusherInit();
	float BP_LivePusherGetVideoFileTotalTime(const struct FString& strVideoPath);
	int BP_LivePusherGetStatus();
	float BP_LivePusherGetCurRecordTime();
	float BP_LivePusherGetCurFreeStorage();
	float BP_LivePusherGetAllStorage();
	int BP_LivePlayerUnInit();
	class UTexture2D* BP_LivePlayerTexture(int nIndex);
	int BP_LivePlayerSeek(float fSeekTime);
	int BP_LivePlayerResume();
	int BP_LivePlayerPlayWithFd(int nFd, bool bLoopKey, bool bAutoPlayKey);
	int BP_LivePlayerPlay(const struct FString& strUrl, bool bLoopKey, bool bAutoPlayKey);
	int BP_LivePlayerPause();
	bool BP_LivePlayerIsPlaying();
	bool BP_LivePlayerIsPlay();
	int BP_LivePlayerInit();
	void BP_LivePlayerGetVideoTime(float* fCurTime, float* fTotalTime);
	int BP_LivePlayerGetStatus();
	void BP_LivePlayerGetSolution(int* nWidth, int* nHeight);
	void BP_LivePlayerGetSDKVersion();
	int BP_LivePlayerGetformat();
	int BP_LivePlayerClose();
	void BP_LiveLiveGetSavePath(struct FString* strSavePath);
	void BP_LiveLiveGetFileSize(const struct FString& strSavePath, float* fFileSize);
	void BP_LiveLiveForceGarbageCollection();
	bool BP_IsOpenGLEs3();
	int BP_ImageSizeCompres(const struct FString& strImagePath, const struct FString& strOutImagePath, int nNewWidth, int nNewHeight);
	int BP_CompressImage(const struct FString& strImagePath, const struct FString& strOutImagePath, int nQuality);
};


}

