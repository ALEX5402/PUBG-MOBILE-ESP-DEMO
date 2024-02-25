#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C
// 0x0000 (0x0098 - 0x0098)
class UGlobalUIFunctionLibrary_C : public UBlueprintFunctionOverride
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C");
		return pStaticClass;
	}


	void OpenRechargeUI(class UObject* __WorldContext);
	void AddOrUpdateBlendable(class UCameraComponent* CameraComponent, class UMaterialInstanceDynamic* MIDynamic, float BlendWeight, class UObject* __WorldContext);
	void ProcessAndroidBack(class UObject* __WorldContext);
	void SetSpecialIconWithSprite2DMatchSize(class UImage* Widget, const struct FString& specialIconPath, class UObject* __WorldContext);
	void GetZoneDelay(int ZoneID, int fakeShowDelay, int maxDelay, class UObject* __WorldContext, int* Delay);
	void UnixTimeToLocalizedTimeStrGMT(int Year, int Month, int Day, int Hour, int Min, int sec, bool start_from_month, const struct FString& h_m_s_format, class UObject* __WorldContext, struct FString* TimeStr);
	void STATIC_GetItemTableRow(int ID, class UObject* __WorldContext, struct FBP_STRUCT_Item_type* Item);
	void STATIC_SecondsToMMSS(int Seconds, class UObject* __WorldContext, struct FString* FormatTime);
	void PlaySoundPopup(class UObject* __WorldContext);
	void PlaySoundToggle(class UObject* __WorldContext);
	void PlaySoundSubTab(class UObject* __WorldContext);
	void PlaySoundTab(class UObject* __WorldContext);
	void STATIC_GetBgQualityPathWithLight(int Quality, class UObject* __WorldContext, struct FString* Path);
	void GetUIRectOffset(class UObject* __WorldContext, int* Left, int* Right);
	void STATIC_IsConfigGameModeSubType(EGameModeSubType InSubType, class UObject* Context, class UObject* __WorldContext, bool* res);
	void STATIC_IsConfigGameModeType(EGameModeType InGameModeType, class UObject* Context, class UObject* __WorldContext, bool* res);
	void STATIC_GetGlobalLuaUI(class UObject* WorldContextObject, class UObject* __WorldContext, class UGlobalLuaWidget_C** AsGlobal_Lua_Widget);
	void STATIC_GetBrushWithPath(const struct FString& ImagePath, int ImageWidth, int ImageHeight, class UObject* __WorldContext, struct FSlateBrush* OutBrush, bool* bOK);
	void STATIC_SwitchSceneCameraToTransform_2(const struct FTransform& Transform, float FOV, float blendTime, class UObject* __WorldContext);
	void STATIC_GetVector4(float X, float Y, float W, float H, class UObject* __WorldContext, struct FVector4* Vector);
	void STATIC_DestroyLobbyCameras(class UObject* __WorldContext);
	void InitAmmoDropBox(class UMeshComponent* MeshComponent, int LOD, class UObject* __WorldContext);
	struct FString STATIC_GetRankIntegralBigIcon(const struct FString& Icon, class UObject* __WorldContext);
	struct FString STATIC_GetRankIntegralSmallIcon(const struct FString& Icon, class UObject* __WorldContext);
	struct FString STATIC_GetRankIntegralSubIcon(const struct FString& Icon, class UObject* __WorldContext);
	void STATIC_SetArenaWeaponLightProperty(class UObject* __WorldContext);
	void STATIC_UpdateMPCLightDirection(class UObject* __WorldContext);
	void STATIC_SetRankInteral(const struct FBP_STRUCT_RankIntegralLevel_type& RankIntegralLevelInfo, class UImage* ImageIcon, class UTextBlock* TextBlock_Rank, class UCanvasPanel* Canvas_Panel_Star, class UImage* Image_Star, class UTextBlock* TextBlock_Star, bool isSegmentStarOpen, class UImage* Image_Quality, class UImage* vx_Image_Quality, class UObject* __WorldContext);
	void STATIC_PlayModelSequence(const struct FString& Path, class UObject* __WorldContext, class ULevelSequencePlayer** playingsequence);
	void STATIC_SwitchSceneCameraToTransform(const struct FVector& Location, const struct FVector& Rotation, const struct FVector& Scale, float FOV, float blendTime, class UObject* __WorldContext);
	void STATIC_SetImageFromPath(class UImage* Image, const struct FString& IconPath, class UObject* __WorldContext);
	void STATIC_SetCharacterImage(const struct FString& imgPath, class UImage* imageItem, class UObject* __WorldContext);
	void STATIC_GetPopularityColor(int Type, class UObject* __WorldContext, struct FSlateColor* Output);
	void GetBrushFromSprite(const struct FSlateBrush& Brush, const struct FString& Path, class UObject* __WorldContext, struct FSlateBrush* Result);
	void LoadImage(class UImage* Image, const struct FString& IconPath, class UObject* __WorldContext);
	void LoadSprite(class UImage* Image, const struct FString& IconPath, class UObject* __WorldContext);
	void STATIC_GetXieQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path);
	void STATIC_GetBgQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path);
	void STATIC_GetQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path);
	void STATIC_GetLocalizationString(const struct FString& Key, class UObject* __WorldContext, struct FString* Ret);
	void SetCornerQuality(class UImage* Image, int Quality, class UObject* __WorldContext);
	void STATIC_GetPingColor(float ms, class UObject* __WorldContext, struct FLinearColor* Color);
	void SetImgWithPath(class UImage* ImgRef, const struct FString& imgPath, bool IsMatchSize, class UObject* __WorldContext, bool* Success);
	void STATIC_SendLobbyEventClickReport(const struct FString& SubEvent, const struct FString& para1, const struct FString& para2, class UObject* __WorldContext);
	void STATIC_GetItemName(const struct FString& Name, int Length, bool ChineseSensity, class UObject* __WorldContext, struct FString* OutName);
	void UpdateImageByPath(class UImage* Image, const struct FString& Path, class UObject* __WorldContext);
	void STATIC_ConvertRGBAStr(const struct FString& RGBAstr, class UObject* __WorldContext, float* R, float* G, float* B, float* A);
	void STATIC_SendGemClickReport(const struct FString& SubEvent, const struct FString& para1, const struct FString& para2, class UObject* __WorldContext);
	void IsJapanOrKorea(class UObject* __WorldContext, bool* Result);
	void STATIC_UpdateImageTint(class UImage* Image, const struct FLinearColor& Color, class UObject* __WorldContext);
	void ChangeBrushColor(const struct FSlateBrush& Brush, const struct FLinearColor& Color, class UObject* __WorldContext, struct FSlateBrush* NewBrush);
	void UpdateButtonColor(class UButton* Button, const struct FLinearColor& Color, class UObject* __WorldContext);
	void GetCameraMod(class UObject* __WorldContext, int* Mod);
	void STATIC_ConvertSecondsToString(int Seconds, class UObject* __WorldContext, struct FString* timestring);
	void GetLangueTable(class UObject* __WorldContext, class UUAEDataTable** NewParam);
	void STATIC_GetGuidonInfo(const struct FString& code, class UObject* __WorldContext, struct FBP_STRUCT_GuidonConfig_type* GuidonConfig);
	void SetHumanLightProperty(class UObject* __WorldContext);
	void SetWeaponLightProperty(class UObject* __WorldContext);
	void STATIC_SetSceneSkyLightProperty(const struct FString& lightName, const struct FTransform& Trans, float Intensity, const struct FLinearColor& Color, class UObject* __WorldContext);
	void SetLobbyDefaultLightProperty(class UObject* __WorldContext);
	void SetAndroidKeyIsValid(bool bValid, class UObject* __WorldContext);
	void STATIC_numToTimeStrFormat(int timeNum, class UObject* __WorldContext, struct FString* TimeStr);
	void numToTimeStr(int timeNum, class UObject* __WorldContext, struct FString* TimeStr);
	void IdToColor(int ID, class UObject* __WorldContext, struct FColor* Color);
	void GetOnLineColor(int onlinestate, bool bonline, class UObject* __WorldContext, struct FSlateColor* Color);
	void UpdateNationImage(class UImage* Image, const struct FString& RoleNation, class UObject* __WorldContext);
	void STATIC_SwitchLobbyMeshBg(int BgIdx, class UObject* __WorldContext);
	void IsLengthyScreen(class UObject* __WorldContext, bool* bWideScreen);
	void STATIC_GetLobbyDragDropWidget(int dragDropType, class UObject* __WorldContext);
	void STATIC_SetItemQuality(int ItemQuality, class UImage* imageres, class UObject* __WorldContext);
	void SetIntimacy(class UImage* heart, int intimacynum, class UTextBlock* intimacyText, class UObject* __WorldContext);
	void GetLobbyRankTexture(int rankIntegral, class UObject* __WorldContext, class UTexture2D** Output);
	void SetScenePointLightProperty(const struct FString& lightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, int inverseSquareFalloff, float Radius, class UObject* __WorldContext);
	void SetSceneDirectionalLightProperty(const struct FString& lightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, class UObject* __WorldContext);
	void STATIC_SetCorpsSegmentLimit(class UCommon_RankIntegralLevel_Style_Small_UIBP_C* segmentWidget, class UTextBlock* textWidget, int LevelID, class UObject* __WorldContext);
	void STATIC_SetCorpsLevelLimit(class UTextBlock* textWidget, int Level, class UObject* __WorldContext);
	void GetLobbyCorpsIcon(int IconID, class UObject* __WorldContext, class UTexture2D** Value);
	void GetPlatfromDisplayName(const struct FString& strChannel, class UObject* __WorldContext, struct FString* showChannel);
	void STATIC_GetPlayerPrefs(class UObject* __WorldContext, class UPlayerPrefs_C** bp_playerprefs);
	void STATIC_ShowLobbyMenuEnterAnimation(class UObject* __WorldContext);
	void STATIC_GetLobbyGlobalBp(class UObject* __WorldContext, class UGlobal_Bp_C** AsGlobal_Bp);
	void GetLobbyFrameTexture(int frameLevel, class UObject* __WorldContext, class UTexture2D** Output);
	void InvoleBpFunctionNoFetch(const struct FString& InName, const struct FString& InFunname, class UObject* __WorldContext);
	void STATIC_CheckChatPrivacyAcceptStatus(class UObject* __WorldContext, bool* ChatPrivacyAcceptStatus);
	void STATIC_GetGVoiceInterface(class UObject* __WorldContext, class UGVoiceInterface** outputObj);
	void OpenUseItemUI(const struct FString& itemInsID, class UObject* __WorldContext);
	void ConvertURLByLanguage(const struct FString& URL, class UObject* __WorldContext, struct FString* convertedURL);
	void isChineseSymbol(const struct FString& Text, class UObject* __WorldContext, bool* Result);
	void isSpace(const struct FString& Text, class UObject* __WorldContext, bool* Result);
	void GetNationInfo(const struct FString& NationCode, class UObject* __WorldContext, struct FBP_STRUCT_RegionConfig_type* NationInfo);
	void SetImageWithSpriteRes(const struct FString& ResPath, class UImage* Image, class UObject* __WorldContext);
	void GetNationSwitch(const struct FString& Name, class UObject* __WorldContext, bool* Ret);
	void GetBpLuaObject(const struct FString& bp_name, class UObject* __WorldContext, class ALuaClassObj** Lua_obj);
	void CheckIfMenuOpen(int MenuId, class UObject* __WorldContext, bool* Ret);
	void GetValidStringAll(const struct FString& Text, bool CanBeEnglish, bool CanBeNumber, bool CanBeWhiteSpace, bool CanBeChinese, bool CanBeSpace, bool CanBeChineseSymbol, class UObject* __WorldContext, struct FString* validText);
	void STATIC_UpdateLobbyRedpointStatus(bool IsShow, int ModeID, class UObject* __WorldContext);
	void GetItemTimeS_Server(int expire_ts, int valid_hours, class UObject* __WorldContext, struct FString* time_s, bool* is_have_limit);
	void GetItemTimeS(int res_id, int FirstTimeNum, class UObject* __WorldContext, struct FString* time_s, bool* is_have_limit);
	void TimeNumToTimeS(int time_num, class UObject* __WorldContext, struct FString* time_s);
	void ShowItemTipsByButton(int ItemID, class UButton* Button, int validHours, bool isShowCloseBtn, class UObject* __WorldContext);
	void STATIC_CloseItemTips(class UObject* __WorldContext);
	void STATIC_CreateUAEUserWidget(class UClass* Class, class UUAEUserWidget* Parent, class UObject* __WorldContext, class UUAEUserWidget** Widget);
	void STATIC_PlaySoundCloseButton(class UObject* __WorldContext);
	void STATIC_ShowEffect(bool IsShow, class UObject* __WorldContext, TArray<class UWidget*>* Widget);
	void STATIC_IsWidgetVisible(class UWidget* Widget, class UObject* __WorldContext, bool* Visible);
	void PlaySoundClickButton(class UObject* __WorldContext);
	void IsChinese(const struct FString& Text, class UObject* __WorldContext, bool* Result);
	void SendBAReport(int ButtonType, int Reason, class UObject* __WorldContext);
	void STATIC_IsValidChar(const struct FString& Text, bool CanBeEnglish, bool CanBeNumber, bool CanBeWhiteSpace, bool CanBeChinese, bool CanBeSpace, bool CanBeChineseSymbol, class UObject* __WorldContext, bool* Result);
	void STATIC_IsNumber(const struct FString& Text, class UObject* __WorldContext, bool* Result);
	void STATIC_IsWhiteSpace(const struct FString& Text, class UObject* __WorldContext, bool* Result);
	void STATIC_GetTextLength(const struct FString& Text, bool ChineseSensity, class UObject* __WorldContext, int* Length);
	void STATIC_BoolToVisible(bool Visible, bool collapse, bool isButton, class UObject* __WorldContext, ESlateVisibility* Visibility);
	void STATIC_GetValidString(int maxLength, const struct FString& Text, bool CanBeEnglish, bool CanBeNumber, bool CanBeWhiteSpace, bool CanBeChinese, bool ChineseSensity, bool CanBeSpace, class UObject* __WorldContext, struct FString* validText);
	void STATIC_IsEnglish(const struct FString& Text, class UObject* __WorldContext, bool* Result);
	void STATIC_UpdateRankName(class UTextBlock* Text, int Level, class UObject* __WorldContext);
	void STATIC_UpdateRankIcon(class UImage* imageObj, int Level, class UObject* __WorldContext);
	void STATIC_GetGlobalData(class UObject* __WorldContext, class Abp_global_C** globalObj);
	void STATIC_InvoleBpFunction(const struct FString& bp_name, const struct FString& func_name, class UObject* __WorldContext);
	void STATIC_GetLocalizeString(int ID, const struct FString& string1, const struct FString& string2, const struct FString& string3, class UObject* __WorldContext, struct FString* TextValue);
	void STATIC_GetGlobalUIEventDispatcher(class UFrontendHUD* FrontendHUD, class UObject* __WorldContext, class UGlobalUIEventDispatcher_BP_C** NewParam);
};


}

