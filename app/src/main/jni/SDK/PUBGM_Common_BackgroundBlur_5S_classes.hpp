#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Common_BackgroundBlur_5S.Common_BackgroundBlur_5S_C
// 0x0010 (0x0428 - 0x0418)
class UCommon_BackgroundBlur_5S_C : public UUAEUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (Transient, DuplicateTransient)
	class UBackgroundBlur*                             BlurComponent;                                            // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Common_BackgroundBlur_5S.Common_BackgroundBlur_5S_C");
		return pStaticClass;
	}


	void Construct();
	void STATIC_ExecuteUbergraph_Common_BackgroundBlur_5S(int EntryPoint);
};


}

