#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieSceneCapture.MovieSceneCapture
// 0x01C8 (0x01F0 - 0x0028)
class UMovieSceneCapture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FCaptureProtocolID                          CaptureType;                                              // 0x0038(0x0008) (Edit, Config)
	class UMovieSceneCaptureProtocolSettings*          ProtocolSettings;                                         // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneCaptureSettings                  Settings;                                                 // 0x0048(0x0050) (Edit, Config)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0098(0x0010) MISSED OFFSET
	bool                                               bUseSeparateProcess;                                      // 0x00A8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCloseEditorWhenCaptureStarts;                            // 0x00A9(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00AA(0x0006) MISSED OFFSET
	struct FString                                     AdditionalCommandLineArguments;                           // 0x00B0(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     InheritedCommandLineArguments;                            // 0x00C0(0x0010) (Edit, ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x120];                                     // 0x00D0(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.MovieSceneCapture");
		return pStaticClass;
	}

};


// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// 0x0000 (0x01F0 - 0x01F0)
class UAutomatedLevelSequenceCapture : public UMovieSceneCapture
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.AutomatedLevelSequenceCapture");
		return pStaticClass;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureProtocolSettings
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureProtocolSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureProtocolSettings");
		return pStaticClass;
	}

};


// Class MovieSceneCapture.FrameGrabberProtocolSettings
// 0x0008 (0x0030 - 0x0028)
class UFrameGrabberProtocolSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.FrameGrabberProtocolSettings");
		return pStaticClass;
	}

};


// Class MovieSceneCapture.AVCaptureSettings
// 0x0000 (0x0030 - 0x0030)
class UAVCaptureSettings : public UFrameGrabberProtocolSettings
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.AVCaptureSettings");
		return pStaticClass;
	}

};


// Class MovieSceneCapture.CompositionGraphCaptureSettings
// 0x0038 (0x0060 - 0x0028)
class UCompositionGraphCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	struct FCompositionGraphCapturePasses              IncludeRenderPasses;                                      // 0x0028(0x0010) (Edit, Config)
	bool                                               bCaptureFramesInHDR;                                      // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                HDRCompressionQuality;                                    // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut;                                             // 0x0040(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FSoftObjectPath                             PostProcessingMaterial;                                   // 0x0048(0x0018) (Edit, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.CompositionGraphCaptureSettings");
		return pStaticClass;
	}

};


// Class MovieSceneCapture.BmpImageCaptureSettings
// 0x0000 (0x0028 - 0x0028)
class UBmpImageCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.BmpImageCaptureSettings");
		return pStaticClass;
	}

};


// Class MovieSceneCapture.ImageCaptureSettings
// 0x0008 (0x0038 - 0x0030)
class UImageCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	int                                                CompressionQuality;                                       // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.ImageCaptureSettings");
		return pStaticClass;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureInterface");
		return pStaticClass;
	}

};


// Class MovieSceneCapture.LevelCapture
// 0x0020 (0x0210 - 0x01F0)
class ULevelCapture : public UMovieSceneCapture
{
public:
	bool                                               bAutoStartCapture;                                        // 0x01F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x01F1(0x000B) MISSED OFFSET
	struct FGuid                                       PrerequisiteActorId;                                      // 0x01FC(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x020C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.LevelCapture");
		return pStaticClass;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureEnvironment : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureEnvironment");
		return pStaticClass;
	}


	int GetCaptureFrameNumber();
	float GetCaptureElapsedTime();
};


// Class MovieSceneCapture.VideoCaptureSettings
// 0x0018 (0x0048 - 0x0030)
class UVideoCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	bool                                               bUseCompression;                                          // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              CompressionQuality;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     VideoCodec;                                               // 0x0038(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.VideoCaptureSettings");
		return pStaticClass;
	}

};


}

