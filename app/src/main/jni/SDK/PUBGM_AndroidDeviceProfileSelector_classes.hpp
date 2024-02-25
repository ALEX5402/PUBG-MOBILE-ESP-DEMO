#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileGradeScore
// 0x0028 (0x0050 - 0x0028)
class UAndroidCommonDeviceProfileGradeScore : public UObject
{
public:
	int                                                MaxScore;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FGradeScoreProfileName>              GradeScoreProfileName;                                    // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	TArray<float>                                      GradeScoreTypePercentage;                                 // 0x0040(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileGradeScore");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileMatchingRules
// 0x0010 (0x0038 - 0x0028)
class UAndroidCommonDeviceProfileMatchingRules : public UObject
{
public:
	TArray<struct FGradeProfileMatch>                  GradeMatchProfile;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileMatchingRules");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileVulkanBlackList
// 0x0010 (0x0038 - 0x0028)
class UAndroidCommonDeviceProfileVulkanBlackList : public UObject
{
public:
	TArray<struct FProfileMatch>                       VulkanList;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileVulkanBlackList");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileVulkanWhiteList
// 0x0010 (0x0038 - 0x0028)
class UAndroidCommonDeviceProfileVulkanWhiteList : public UObject
{
public:
	TArray<struct FProfileMatch>                       VulkanList;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileVulkanWhiteList");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileWhiteList
// 0x0010 (0x0038 - 0x0028)
class UAndroidCommonDeviceProfileWhiteList : public UObject
{
public:
	TArray<struct FProfileMatch>                       GradeMatchProfileWhiteList;                               // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileWhiteList");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidDeviceProfileMatchingRules
// 0x0010 (0x0038 - 0x0028)
class UAndroidDeviceProfileMatchingRules : public UObject
{
public:
	TArray<struct FProfileMatch>                       MatchProfile;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidDeviceProfileMatchingRules");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidJavaSurfaceViewDevices
// 0x0010 (0x0038 - 0x0028)
class UAndroidJavaSurfaceViewDevices : public UObject
{
public:
	TArray<struct FJavaSurfaceViewDevice>              SurfaceViewDevices;                                       // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidJavaSurfaceViewDevices");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidProjectDeviceProfileWhiteList
// 0x0010 (0x0038 - 0x0028)
class UAndroidProjectDeviceProfileWhiteList : public UObject
{
public:
	TArray<struct FProfileMatch>                       GradeMatchProfileWhiteList;                               // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidProjectDeviceProfileWhiteList");
		return pStaticClass;
	}

};


}

