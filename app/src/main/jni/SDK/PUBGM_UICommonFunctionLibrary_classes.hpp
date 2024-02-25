#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UICommonFunctionLibrary.UICommonFunctionLibrary_C
// 0x0000 (0x0098 - 0x0098)
class UUICommonFunctionLibrary_C : public UBlueprintFunctionOverride
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass UICommonFunctionLibrary.UICommonFunctionLibrary_C");
		return pStaticClass;
	}


	void STATIC_SetAdaptation(class UWidget* Widget, class UObject* __WorldContext);
};


}

