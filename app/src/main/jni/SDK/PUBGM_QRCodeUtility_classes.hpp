#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class QRCodeUtility.ZXingScanner
// 0x0000 (0x0028 - 0x0028)
class UZXingScanner : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class QRCodeUtility.ZXingScanner");
		return pStaticClass;
	}


	class UTexture2D* Encode(const struct FString& Text);
	bool Decode(class UTexture2D* Texture, const struct FVector4& InRect, struct FZXingScanResult* OutResult);
};


}

