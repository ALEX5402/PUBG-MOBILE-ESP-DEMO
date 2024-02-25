#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GlobalUIContainer_BP.GlobalUIContainer_BP_C
// 0x0010 (0x0438 - 0x0428)
class UGlobalUIContainer_BP_C : public UUAEWidgetContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                CanvasContainer;                                          // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass GlobalUIContainer_BP.GlobalUIContainer_BP_C");
		return pStaticClass;
	}


	void STATIC_AddWidgetInternal(class UUserWidget** Widget);
	void STATIC_RemoveWidgetInternal(class UUserWidget** Widget);
	void STATIC_AddWidgetWithZOrderInternal(class UUserWidget** Widget, int* ZOrder);
	void ExecuteUbergraph_GlobalUIContainer_BP(int EntryPoint);
};


}

