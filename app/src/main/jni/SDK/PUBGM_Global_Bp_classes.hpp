#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Global_Bp.Global_Bp_C
// 0x0120 (0x0538 - 0x0418)
class UGlobal_Bp_C : public UUAEUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (Transient, DuplicateTransient)
	class USettingConfig_C*                            SettingConfigObject;                                      // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, class UTexture2D*>            corpsIconTextureMap;                                      // 0x0428(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class Abp_global_C*                                bp_global;                                                // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, class UTexture2D*>            rankTextureMap;                                           // 0x0480(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, class UUserWidget*>                      dragDropItemMap;                                          // 0x04D0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               isPostProcessVolumeInit;                                  // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0521(0x0007) MISSED OFFSET
	class APostProcessVolume*                          postProcessClassic;                                       // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACameraPostProcessActor_C*                   cameraPostProcessActor;                                   // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Global_Bp.Global_Bp_C");
		return pStaticClass;
	}


	void STATIC_InitFireGyroSensibilitySettingData(class USettingConfig_C* ServerSettingConfig);
	void STATIC_MapFromCBToESBH(class USettingConfig_C* SettingConfig);
	void STATIC_InitMirrorObjMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void STATIC_InitThrowObjMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void STATIC_InitDrugMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void STATIC_InitBasicSettingData(class USettingConfig_C* ServerSettingConfig);
	void STATIC_InitPickupSettingData_XT(class USettingConfig_C* SettingConfig);
	void STATIC_InitPickupSettingData(class USettingConfig_C* ServerSettingConfig);
	void STATIC_InitSensibilitySettingData(class USettingConfig_C* ServerSettingConfig);
	void SetGrenadeDefaultPickValue();
	void STATIC_InitMapFromCBToES();
	void STATIC_MapFromCBToESGlobal(class USettingConfig_C* SettingConfig);
	void STATIC_MapFromCBToESJK(class USettingConfig_C* SettingConfig);
	void STATIC_MapFromCBToESVN(class USettingConfig_C* SettingConfig);
	void STATIC_LoadSettingConfigFromSlot();
	void STATIC_UpdateBigHandOperateRedPoint();
	void SetPostProcessSettings(int ID, float Time, bool isReverse, bool isClosing);
	void ShowItemPreviewPress();
	void ShowItemPreviewClick(int ItemID);
	void SaveAnniversaryNeedShow();
	void GetAnniversaryNeedShow();
	void SaveResidentEvilNeedShow();
	void GetResidentEvilNeedShow();
	void SaveChristmasNeedShow();
	void GetChristmasNeedShow();
	void GetDragDropWidget(int dragDropType);
	void GetRankTexture(int rankIntegral, class UTexture2D** Output);
	void GetCorpsIconTexture(int IconID, class UTexture2D** Value);
	void GetFrameTexture(int frameLevel, class UTexture2D** Output);
	void EventAndroidQuitGame();
	void EnterLogin();
	void RecoverMaxFps();
	void Construct();
	void ExecuteUbergraph_Global_Bp(int EntryPoint);
};


}

