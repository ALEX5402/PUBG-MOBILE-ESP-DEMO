#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Overlay.Overlays
// 0x0000 (0x0028 - 0x0028)
class UOverlays : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Overlay.Overlays");
		return pStaticClass;
	}

};


// Class Overlay.BasicOverlays
// 0x0010 (0x0038 - 0x0028)
class UBasicOverlays : public UOverlays
{
public:
	TArray<struct FOverlayItem>                        Overlays;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Overlay.BasicOverlays");
		return pStaticClass;
	}

};


// Class Overlay.LocalizedOverlays
// 0x0058 (0x0080 - 0x0028)
class ULocalizedOverlays : public UOverlays
{
public:
	class UBasicOverlays*                              DefaultOverlays;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, class UBasicOverlays*>        LocaleToOverlaysMap;                                      // 0x0030(0x0050) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Overlay.LocalizedOverlays");
		return pStaticClass;
	}

};


}

