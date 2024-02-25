#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ReAutomatic.AutomaticCommonHelper
// 0x0000 (0x0028 - 0x0028)
class UAutomaticCommonHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ReAutomatic.AutomaticCommonHelper");
		return pStaticClass;
	}


	bool IsClassOf(class UObject* Object, class UClass* Class);
};


// Class ReAutomatic.AutomaticPlatformHelper
// 0x0000 (0x0028 - 0x0028)
class UAutomaticPlatformHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ReAutomatic.AutomaticPlatformHelper");
		return pStaticClass;
	}


	struct FString GetDeviceName();
};


// Class ReAutomatic.AutomaticUIHelper
// 0x0000 (0x0028 - 0x0028)
class UAutomaticUIHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ReAutomatic.AutomaticUIHelper");
		return pStaticClass;
	}


	bool IsWidgetVisibleWithUICondition(const struct FFindUICondition& Condition, int Index);
	bool IsWidgetVisible(class UWidget* Widget);
	bool IsWidgetTextMatchRegex(class UWidget* Widget, const struct FString& Text);
	bool IsWidgetMatchType(class UWidget* Widget, EUIType Type);
	class UWidget* FindWidgetObjectWithUICondition(const struct FFindUICondition& Condition, int Index);
	class UWidget* FindUWidgetObject(const struct FString& Name, int Index);
};


}

