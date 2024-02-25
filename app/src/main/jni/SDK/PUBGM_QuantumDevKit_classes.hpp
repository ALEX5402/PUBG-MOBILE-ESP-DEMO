#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class QuantumDevKit.FirebaseHelper
// 0x0030 (0x0058 - 0x0028)
class UFirebaseHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class QuantumDevKit.FirebaseHelper");
		return pStaticClass;
	}


	class UFirebaseHelper* GetInstance();
	struct FString GetFIRInstallId();
	struct FString GetFIRAppInstanceId();
	struct FString GetFCMToken();
};


// Class QuantumDevKit.QuantumFirebaseRemoteConfig
// 0x0090 (0x00B8 - 0x0028)
class UQuantumFirebaseRemoteConfig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FString>                             QueryConfigNamesArray;                                    // 0x0030(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x78];                                      // 0x0040(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class QuantumDevKit.QuantumFirebaseRemoteConfig");
		return pStaticClass;
	}


	EQuantumFirebaseRemoteConfigStatus GetStatus();
	struct FString GetRemoteConfig(const struct FString& ConfigNameToQuery);
	class UQuantumFirebaseRemoteConfig* GetInstance();
};


}

