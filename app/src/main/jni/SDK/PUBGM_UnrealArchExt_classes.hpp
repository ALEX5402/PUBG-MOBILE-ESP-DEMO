#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UnrealArchExt.UAEUserWidget
// 0x01B8 (0x0418 - 0x0260)
class UUAEUserWidget : public UUserWidget
{
public:
	class UFrontendHUD*                                OwningFrontendHUD;                                        // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ULogicManagerBase*                           OwningLogicManager;                                       // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UUAEWidgetContainer*                         OwningWidgetContainer;                                    // 0x0270(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUAEUserWidget*                              ParentWidget;                                             // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0280(0x00A0) MISSED OFFSET
	TArray<class UProperty*>                           Params;                                                   // 0x0320(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0330(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    widgetSizeNofity;                                         // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FUserWidgetState                            DefaultUserWidgetState;                                   // 0x0350(0x0028) (Edit)
	struct FUserWidgetState                            CurrentUserWidgetState;                                   // 0x0378(0x0028) (BlueprintVisible)
	float                                              TickRate;                                                 // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bReceiveOnClickedEvent;                                   // 0x03A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveOnRightClickedEvent;                              // 0x03A5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveOnDoubleClickedEvent;                             // 0x03A6(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoSetScreenPosOnMouseEnter;                            // 0x03A7(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPos;                                                // 0x03A8(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   LastMouseEventScreenPos;                                  // 0x03B0(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET
	EUserWidgetFadingStatus                            FadingStatus;                                             // 0x03C0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	float                                              CurrentOpacity;                                           // 0x03C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadingInTime;                                             // 0x03C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadingOutTime;                                            // 0x03CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNoFadeIn;                                                // 0x03D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNoFadeOut;                                               // 0x03D1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldCollapse;                                          // 0x03D2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRegistUIMsg;                                             // 0x03D3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	struct FString                                     UIMsgPrefix;                                              // 0x03D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             UIMsgFunctionList;                                        // 0x03E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bRegistedUIMsgToMoudle;                                   // 0x03F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	struct FString                                     MoudleToRegisted;                                         // 0x0400(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0410(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.UAEUserWidget");
		return pStaticClass;
	}


	bool Visible();
	void UnRegistFromGameFrontendHUD();
	void SynchronizeBlueprintProperties();
	void Show();
	void SetParentWidgetRecursive(class UUAEUserWidget* InParentWidget);
	void SetParentWidget(class UUAEUserWidget* InParentWidget);
	void SetOnWidgetShow(const struct FScriptDelegate& onShow);
	void SetOnWidgetHide(const struct FScriptDelegate& OnHide);
	void SetOnClearUIStack(const struct FScriptDelegate& onClear);
	void SetAdapation(float Left, float Top, float Right, float Bottom);
	void RegistToGameFrontendHUD(class UFrontendHUD* GameFrontHUD);
	void Register(class ULogicManagerBase* LogicManager, bool bAddToViewport);
	void ReceiveShow();
	void ReceiveHide();
	void ReceivedMountWidget();
	void ReceivedInitWidget();
	void ReCachedUIMsgFunction();
	void PushOpenedUIStack(const struct FString& Name);
	void PopOpenedUIStack(const struct FString& curOpen);
	void OnWidgetShow__DelegateSignature(const struct FString& ClassName);
	void OnWidgetHide__DelegateSignature(const struct FString& ClassName);
	void OnRightClicked(const struct FVector2D& TempScreenPos);
	void OnFadeOutFinished();
	void OnFadeInFinished();
	void OnDoubleClicked(const struct FVector2D& TempScreenPos);
	void OnClicked(const struct FVector2D& TempScreenPos);
	void OnClearUIStack__DelegateSignature();
	bool IntCompare(int A, int B, EWidgetCompareType CompareType);
	void InitWidget(bool Recursive);
	void InitCustomWidget(class AActor* OwnerActor, class UWidgetComponent* WidgetComponent);
	void Hide();
	void HandleUIMessageBattle(const struct FString& UIMessage);
	void HandleUIMessage(const struct FString& UIMessage);
	class UWidget* GetWidgetsByName(const struct FString& WidgetName, const struct FString& OuterName, bool bUseContains);
	class UWidget* GetWidgetContainsName(const struct FString& Name);
	class UUAEUserWidget* GetParentWidget();
	class APlayerController* GetOwningPlayer();
	class ULogicManagerBase* GetOwningLogicManager();
	class UFrontendHUD* GetOwningFrontendHUD();
	class UMaterialInstanceDynamic* GetImgDynamicMaterial(class UImage* ImageMat);
	class UUserWidget* GetChildWidgetByEqualPolitics(const struct FString& ChildName, EUserWidgetNameEqualPolitics EqualPolitics, int RecursiveDepth);
	class UUserWidget* GetChildWidget(const struct FString& WName);
	struct FMargin GetAdapation();
	bool FloatCompare(float A, float B, EWidgetCompareType CompareType);
	void DynamicRegistUIMsgToCache(class UUAEUserWidget* Widget);
	void DestroyWidget();
	void ClearOpenedUIStack();
	void ClearFunctionCacheByMsgName(const struct FString& InUIMsg);
	void ClearFunctionCache();
	void ClearClassWidgetTree();
	void BindCustomUserEvent(class AActor* OwnerActor, class UWidgetComponent* WidgetComponent);
};


// Class UnrealArchExt.LuaUAEUserWidget
// 0x0078 (0x0490 - 0x0418)
class ULuaUAEUserWidget : public UUAEUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0418(0x0060) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0478(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bEnableBlueprintTick;                                     // 0x0488(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0489(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.LuaUAEUserWidget");
		return pStaticClass;
	}

};


// Class UnrealArchExt.UAECanvasPanel
// 0x0000 (0x0130 - 0x0130)
class UUAECanvasPanel : public UCanvasPanel
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.UAECanvasPanel");
		return pStaticClass;
	}


	void ReceiveInitCanvasPanel();
};


// Class UnrealArchExt.BackendUtils
// 0x0008 (0x0030 - 0x0028)
class UBackendUtils : public UObject
{
public:
	class UBackendHUD*                                 OwningBackendHUD;                                         // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.BackendUtils");
		return pStaticClass;
	}

};


// Class UnrealArchExt.BackendHUD
// 0x0088 (0x00B0 - 0x0028)
class UBackendHUD : public UObject
{
public:
	class UEngine*                                     Engine;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BackendUtilsClassName;                                    // 0x0030(0x0010) (ZeroConstructor, Config)
	class UBackendUtils*                               Utils;                                                    // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UFrontendHUD*>                        FrontendHUDList;                                          // 0x0048(0x0010) (ZeroConstructor)
	TMap<uint32_t, TWeakObjectPtr<class UFrontendHUD>> FrontendHUDMap;                                           // 0x0058(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.BackendHUD");
		return pStaticClass;
	}


	class UFrontendHUD* GetFrontendHUDByGameInstance(class UGameInstance* GameInstance);
	class UFrontendHUD* GetFrontendHUD(int FrontendHUDIndex);
};


// Class UnrealArchExt.LogicManagerBase
// 0x00D0 (0x00F8 - 0x0028)
class ULogicManagerBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class UFrontendHUD*                                OwningFrontendHUD;                                        // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	bool                                               bPersistentUI;                                            // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDynamicWidget;                                           // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bKeepDynamicWidget;                                       // 0x0052(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseNewHandleUIMessage;                                   // 0x0053(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                iUIControlState;                                          // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DefaultSceneCameraIndex;                                  // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x005C(0x0014) MISSED OFFSET
	TArray<struct FName>                               GameStatusList;                                           // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x30];                                      // 0x0080(0x0030) MISSED OFFSET
	TArray<class UClass*>                              WidgetUClassList;                                         // 0x00B0(0x0010) (ZeroConstructor)
	TArray<class UUAEUserWidget*>                      WidgetList;                                               // 0x00C0(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData04[0x18];                                      // 0x00D0(0x0018) MISSED OFFSET
	TArray<class UObject*>                             DelayMessage_Obj;                                         // 0x00E8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.LogicManagerBase");
		return pStaticClass;
	}


	void SetEnableRemoveDynamicWidgets(bool bEnable);
	bool IsEnableRemoveDynamicWidgets();
	TArray<class UUAEUserWidget*> GetWidgetList();
	class UUAEUserWidget* GetWidgetByName(const struct FString& InName);
	class UUAEUserWidget* GetWidgetByClass(class UClass* InClass);
	class UFrontendHUD* GetOwningFrontendHUD();
	int GetDefaultSceneCamera();
	void DispatchUIMessage(const struct FString& UIMessage, class UObject* Source, class UUAEUserWidget* Target);
};


// Class UnrealArchExt.FrontendHUD
// 0x01A8 (0x01D0 - 0x0028)
class UFrontendHUD : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	class UGameInstance*                               GameInstance;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FString                                     FrontendUtilsClassName;                                   // 0x0050(0x0010) (ZeroConstructor, Config)
	class UFrontendUtils*                              Utils;                                                    // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class ULogicManagerBase*>                   LogicManagerList;                                         // 0x0068(0x0010) (ZeroConstructor)
	TMap<struct FString, TWeakObjectPtr<class ULogicManagerBase>> LogicManagerMap;                                          // 0x0078(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
	int                                                UnusedWidgetMinCount;                                     // 0x00D8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                UnusedWidgetMaxCount;                                     // 0x00DC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                UnusedWidgetKeepTime;                                     // 0x00E0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxLowLevelMemoryLimit;                                   // 0x00E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxMiddleMemoryLimit;                                     // 0x00E8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxGCArrayObjectSize;                                     // 0x00EC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       CurrentGameStatus;                                        // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       LastGameStatus;                                           // 0x00F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               InComBatStatus;                                           // 0x0100(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	struct FName                                       PendingGameStatus;                                        // 0x0108(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     LatestGameStatusURL;                                      // 0x0110(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnPostSwitchGameStatusStartEvent;                         // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostSwitchGameStatusEvent;                              // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPreSwitchGameStatusEvent;                               // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0150(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGameStatusSwitchTerminate;                              // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPreSwitchGameStatusEndEvent;                            // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCreateLogicManagerListEvent;                            // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSetGameStatusEvent;                                     // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddLuaLogicManagerEvent;                                // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoveLuaLogicManagerEvent;                             // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UWorld*                                      CurrentGameStatusWorld;                                   // 0x01C0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.FrontendHUD");
		return pStaticClass;
	}


	void SwitchGameStatus(const struct FName& GameStatus, const struct FString& Options);
	void StandAloneSwitchGameStatus(const struct FName& InGameStatus, const struct FString& Options);
	void OnPreLoadMap(const struct FString& MapName);
	void OnPostLoadMapWithWorld(class UWorld* World);
	void OnGameViewportClientCreated();
	class UWorld* GetWorld();
	class UFrontendUtils* GetUtils();
	class APlayerController* GetPlayerController();
	class ULogicManagerBase* GetLogicManagerByName(const struct FString& LogicManagerTagName);
	class ULogicManagerBase* GetLogicManager(int LogicManagerIndex);
	class UGameViewportClient* GetGameViewportClient();
	class AGameMode* GetGameMode();
	class UGameInstance* GetGameInstance();
	TArray<TWeakObjectPtr<class UObject>> FindRegistedUIFunctionList(const struct FString& strMsg, const struct FString& moduleMsg);
	void EnableGuiTest(bool bEnable);
	void DynamicRegistUIMsgToCache(class UUAEUserWidget* Widget, const struct FString& module);
	void ClearLogicManagerListByStatus(const struct FName& PendingStatus, bool bIsForceDelete);
	void ClearLogicManagerByName(const struct FString& managerName);
};


// Class UnrealArchExt.FrontendUtils
// 0x0370 (0x0398 - 0x0028)
class UFrontendUtils : public UObject
{
public:
	class UFrontendHUD*                                OwningFrontendHUD;                                        // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    SceneCameraSwitchedDelegate;                              // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FName                                       CurrentSceneCameraName;                                   // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class ACameraActor*>                        SceneCameraList;                                          // 0x0048(0x0010) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class ACameraActor>> SceneCameraMap;                                           // 0x0058(0x0050) (ZeroConstructor)
	TArray<class ADirectionalLight*>                   SceneDirectionalLightList;                                // 0x00A8(0x0010) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class ADirectionalLight>> SceneDirectionalLightMap;                                 // 0x00B8(0x0050) (ZeroConstructor)
	TArray<class APointLight*>                         ScenePointLightList;                                      // 0x0108(0x0010) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class APointLight>> ScenePointLightMap;                                       // 0x0118(0x0050) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class ASkyLight>> SceneSkyLightMap;                                         // 0x0168(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x68];                                      // 0x01B8(0x0068) MISSED OFFSET
	struct FString                                     GlobalUIEventDispatcherClassName;                         // 0x0220(0x0010) (ZeroConstructor, Config)
	class UClass*                                      GlobalUIEventDispatcherClass;                             // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     GlobalUIEventDispatcher;                                  // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GlobalUIContainerClassName;                               // 0x0240(0x0010) (ZeroConstructor, Config)
	TArray<struct FName>                               GlobalUIContainerNames;                                   // 0x0250(0x0010) (ZeroConstructor, Config)
	TMap<struct FName, class UUAEWidgetContainer*>     GlobalUIContainers;                                       // 0x0260(0x0050) (ExportObject, ZeroConstructor)
	TArray<class UUAEWidgetContainer*>                 GlobalPushUIContainers;                                   // 0x02B0(0x0010) (ExportObject, ZeroConstructor)
	TMap<struct FName, class UUAEWidgetContainer*>     GlobalPushUIRelations;                                    // 0x02C0(0x0050) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0310(0x0038) MISSED OFFSET
	TMap<class UUAEWidgetContainer*, bool>             UIShowStatusMap;                                          // 0x0348(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.FrontendUtils");
		return pStaticClass;
	}


	void SwitchSceneCameraToTransform(const struct FTransform& targetTrans, TEnumAsByte<ECameraProjectionMode> ProjectionMode, float FOV, float blendTime, bool bForce, bool bAutoFixAspect);
	void SwitchSceneCamera(const struct FName& SceneCameraName, float blendTime, bool bForce);
	void SetSceneSkyLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color);
	void SetScenePointLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, int inverseSquareFalloff, float Radius);
	void SetSceneDirectionalLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, const struct FLightingChannels& Channel);
	void SetAutoFixFovByAspectRatio(class ACameraActor* CameraActor, bool bInAutoFixFov);
	void RegisterSceneSkyLight(const struct FName& sceneLightName, class ASkyLight* Light);
	void RegisterScenePointLight(const struct FName& sceneLightName, class APointLight* Light);
	void RegisterSceneDirectionalLight(const struct FName& sceneLightName, class ADirectionalLight* Light);
	void RegisterSceneCamera(const struct FName& SceneCameraName, class ACameraActor* SceneCamera);
	void PopAllPushedUI();
	void OnAllSceneCamerasRegistered();
	bool IsPushedPanel(const struct FName& managerName);
	bool IsNoRenderClient();
	bool GlobalUIEventDispatcher_GetDelegateIsBound(const struct FString& DelegateNum);
	struct FString GetUIStackTopSrcTag();
	struct FString GetUIStackTopDstTag();
	struct FString GetUIStackTop();
	class ACameraActor* GetSceneCamera();
	class UFrontendHUD* GetOwningFrontendHUD();
	class UObject* GetGlobalUIEventDispatcher();
	class UUAEWidgetContainer* GetGlobalUIContainer(const struct FName& ContainerName);
	void EnableLobbyMainLight(bool NewEnable);
	void ClearAllSceneCameras();
};


// Class UnrealArchExt.TableTraver
// 0x0000 (0x0028 - 0x0028)
class UTableTraver : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.TableTraver");
		return pStaticClass;
	}

};


// Class UnrealArchExt.UAEDataTable
// 0x0090 (0x0110 - 0x0080)
class UUAEDataTable : public UDataTable
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0080(0x0030) MISSED OFFSET
	TMap<struct FString, class UProperty*>             NameToProperty;                                           // 0x00B0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.UAEDataTable");
		return pStaticClass;
	}


	bool SetTableData_String(const struct FString& KeyValue, const struct FString& TagName, const struct FString& Value);
	bool SetTableData_Int32(const struct FString& KeyValue, const struct FString& TagName, int Value);
	bool SetTableData_Float(const struct FString& KeyValue, const struct FString& TagName, float Value);
	struct FString GetTableName();
	struct FString GetRealTableName(const struct FString& tableName);
	bool ConditionAddEmptyRow(const struct FName& RowName);
};


// Class UnrealArchExt.UAEDataTableInterface
// 0x0000 (0x0028 - 0x0028)
class UUAEDataTableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.UAEDataTableInterface");
		return pStaticClass;
	}

};


// Class UnrealArchExt.UAEWidgetContainer
// 0x0010 (0x0428 - 0x0418)
class UUAEWidgetContainer : public UUAEUserWidget
{
public:
	TArray<class UUserWidget*>                         WidgetList;                                               // 0x0418(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.UAEWidgetContainer");
		return pStaticClass;
	}


	void RemoveWidgetInternal(class UUserWidget* Widget);
	void RemoveWidget(class UUserWidget* Widget);
	void AddWidgetWithZOrderInternal(class UUserWidget* Widget, int ZOrder);
	void AddWidgetWithZOrder(class UUserWidget* Widget, int ZOrder);
	void AddWidgetInternal(class UUserWidget* Widget);
	void AddWidget(class UUserWidget* Widget);
};


}

