#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C
// 0x00C8 (0x0398 - 0x02D0)
class UCommon_RankIntegralLevel_Style_Small_UIBP_C : public ULuaUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                Root;                                                     // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TEnumAsByte<ERankIntegralType>                     RankIntegralType;                                         // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02E1(0x0007) MISSED OFFSET
	class UUserWidget*                                 RankIntegralUIBP;                                         // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlateColor                                 RankTextColor;                                            // 0x02F0(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 RankTextShadowColor;                                      // 0x0318(0x0028) (Edit, BlueprintVisible)
	struct FSlateFontInfo                              RankFontInfo;                                             // 0x0340(0x0058) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C");
		return pStaticClass;
	}


	void IsSegmentStarSwitchOpen(bool* isStarOpen);
	void STATIC_SetArenaRankInteralWithCustomColor(int RankInteral, class UTextBlock* TextIntegralName, const struct FSlateColor& Color);
	void STATIC_SetRankInteralBySeason(int rankIntegral, class UTextBlock* TextIntegralName, int SeasonID);
	void STATIC_SetRankCustomColor(int rankIntegral, class UTextBlock* TextIntegralName, const struct FSlateColor& Color, int SeasonID);
	void STATIC_SetRankInteralJaguar(int rankIntegral, class UTextBlock* TextIntegralName);
	void STATIC_SetRankInteral(int rankIntegral, class UTextBlock* TextIntegralName);
	void STATIC_SetRankInteralInXMission(int rankIntegral, class UTextBlock* TextIntegralName);
	void STATIC_SetArenaRankInteral(int rankIntegral, class UTextBlock* TextIntegralName);
	void STATIC_SetRankInteralCommon(int rankIntegral, class UTextBlock* TextIntegralName, int SeasonID);
	void PreConstruct(bool* IsDesignTime);
	void Construct();
	void ConstructItem();
	void Destruct();
	void STATIC_ExecuteUbergraph_Common_RankIntegralLevel_Style_Small_UIBP(int EntryPoint);
};


}

