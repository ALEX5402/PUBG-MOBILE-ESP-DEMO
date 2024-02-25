#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AndroidRuntimeSettings.AndroidRuntimeSettings
// 0x0228 (0x0250 - 0x0028)
class UAndroidRuntimeSettings : public UObject
{
public:
	struct FString                                     PackageName;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	int                                                StoreVersion;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     ApplicationDisplayName;                                   // 0x0040(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     VersionDisplayName;                                       // 0x0050(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	int                                                MinSDKVersion;                                            // 0x0060(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                TargetSDKVersion;                                         // 0x0064(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<EAndroidInstallLocation>               InstallLocation;                                          // 0x0068(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bEnableGradle;                                            // 0x0069(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bPackageDataInsideApk;                                    // 0x006A(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bCreateAllPlatformsInstall;                               // 0x006B(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bDisableVerifyOBBOnStartUp;                               // 0x006C(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bUseExternalFilesDir;                                     // 0x006D(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<EAndroidScreenOrientation>             Orientation;                                              // 0x006E(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x006F(0x0001) MISSED OFFSET
	float                                              MaxAspectRatio;                                           // 0x0070(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<EAndroidAntVerbosity>                  AntVerbosity;                                             // 0x0074(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bFullScreen;                                              // 0x0075(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bEnableNewKeyboard;                                       // 0x0076(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<EAndroidDepthBufferPreference>         DepthBufferPreference;                                    // 0x0077(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TArray<struct FString>                             ExtraManifestNodeTags;                                    // 0x0078(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	TArray<struct FString>                             ExtraApplicationNodeTags;                                 // 0x0088(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     ExtraApplicationSettings;                                 // 0x0098(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	TArray<struct FString>                             ExtraActivityNodeTags;                                    // 0x00A8(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     ExtraActivitySettings;                                    // 0x00B8(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	TArray<struct FString>                             ExtraPermissions;                                         // 0x00C8(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	bool                                               bAndroidVoiceEnabled;                                     // 0x00D8(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bPackageForGearVR;                                        // 0x00D9(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bRemoveOSIG;                                              // 0x00DA(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x00DB(0x0005) MISSED OFFSET
	TArray<TEnumAsByte<EGoogleVRCaps>>                 GoogleVRCaps;                                             // 0x00E0(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	bool                                               bGoogleVRSustainedPerformance;                            // 0x00F0(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	struct FString                                     KeyStore;                                                 // 0x00F8(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     KeyAlias;                                                 // 0x0108(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     KeyStorePassword;                                         // 0x0118(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     KeyPassword;                                              // 0x0128(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	bool                                               bBuildForArmV7;                                           // 0x0138(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bBuildForArm64;                                           // 0x0139(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bBuildForX86;                                             // 0x013A(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bBuildForX8664;                                           // 0x013B(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bBuildForES2;                                             // 0x013C(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bBuildForES31;                                            // 0x013D(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bSupportsVulkan;                                          // 0x013E(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bBuildWithHiddenSymbolVisibility;                         // 0x013F(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bEnableGooglePlaySupport;                                 // 0x0140(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bUseGetAccounts;                                          // 0x0141(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0142(0x0006) MISSED OFFSET
	struct FString                                     GamesAppID;                                               // 0x0148(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	TArray<struct FGooglePlayAchievementMapping>       AchievementMap;                                           // 0x0158(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	TArray<struct FGooglePlayLeaderboardMapping>       LeaderboardMap;                                           // 0x0168(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	bool                                               bSupportAdMob;                                            // 0x0178(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	struct FString                                     AdMobAdUnitID;                                            // 0x0180(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	TArray<struct FString>                             AdMobAdUnitIDs;                                           // 0x0190(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     GooglePlayLicenseKey;                                     // 0x01A0(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     GCMClientSenderID;                                        // 0x01B0(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	bool                                               bShowLaunchImage;                                         // 0x01C0(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<EAndroidAudio>                         AndroidAudio;                                             // 0x01C1(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x01C2(0x0002) MISSED OFFSET
	int                                                AudioSampleRate;                                          // 0x01C4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                AudioCallbackBufferFrameSize;                             // 0x01C8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                AudioNumBuffersToEnqueue;                                 // 0x01CC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                AudioMaxChannels;                                         // 0x01D0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                AudioNumSourceWorkers;                                    // 0x01D4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     SpatializationPlugin;                                     // 0x01D8(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     ReverbPlugin;                                             // 0x01E8(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     OcclusionPlugin;                                          // 0x01F8(0x0010) (Edit, ZeroConstructor, Config)
	TEnumAsByte<EAndroidGraphicsDebugger>              AndroidGraphicsDebugger;                                  // 0x0208(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0209(0x0007) MISSED OFFSET
	struct FDirectoryPath                              MaliGraphicsDebuggerPath;                                 // 0x0210(0x0010) (Edit, Config, GlobalConfig)
	struct FDirectoryPath                              RenderDocPath;                                            // 0x0220(0x0010) (Edit, Config, GlobalConfig)
	bool                                               bMultiTargetFormat_ETC1;                                  // 0x0230(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bMultiTargetFormat_ETC2;                                  // 0x0231(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bMultiTargetFormat_DXT;                                   // 0x0232(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bMultiTargetFormat_PVRTC;                                 // 0x0233(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bMultiTargetFormat_ATC;                                   // 0x0234(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bMultiTargetFormat_ASTC;                                  // 0x0235(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0236(0x0002) MISSED OFFSET
	float                                              TextureFormatPriority_ETC1;                               // 0x0238(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              TextureFormatPriority_ETC2;                               // 0x023C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              TextureFormatPriority_DXT;                                // 0x0240(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              TextureFormatPriority_PVRTC;                              // 0x0244(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              TextureFormatPriority_ATC;                                // 0x0248(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              TextureFormatPriority_ASTC;                               // 0x024C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidRuntimeSettings.AndroidRuntimeSettings");
		return pStaticClass;
	}

};


}

