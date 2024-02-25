#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AndroidMediaFactory.AndroidMediaSettings
// 0x0008 (0x0030 - 0x0028)
class UAndroidMediaSettings : public UObject
{
public:
	bool                                               CacheableVideoSampleBuffers;                              // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidMediaFactory.AndroidMediaSettings");
		return pStaticClass;
	}

};


}

