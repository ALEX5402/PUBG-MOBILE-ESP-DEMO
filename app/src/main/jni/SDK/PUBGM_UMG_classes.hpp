#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UMG.Visual
// 0x0000 (0x0028 - 0x0028)
class UVisual : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Visual");
		return pStaticClass;
	}

};


// Class UMG.Widget
// 0x00D8 (0x0100 - 0x0028)
class UWidget : public UVisual
{
public:
	class UPanelSlot*                                  Slot;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             bIsEnabledDelegate;                                       // 0x0030(0x0010) (ZeroConstructor, InstancedReference)
	struct FText                                       ToolTipText;                                              // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ToolTipTextDelegate;                                      // 0x0058(0x0010) (ZeroConstructor, InstancedReference)
	class UWidget*                                     ToolTipWidget;                                            // 0x0068(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             ToolTipWidgetDelegate;                                    // 0x0070(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             VisibilityDelegate;                                       // 0x0080(0x0010) (ZeroConstructor, InstancedReference)
	struct FWidgetTransform                            RenderTransform;                                          // 0x0090(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   RenderTransformPivot;                                     // 0x00AC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      bIsVariable : 1;                                          // 0x00B4(0x0001)
	unsigned char                                      bCreatedByConstructionScript : 1;                         // 0x00B4(0x0001) (Transient)
	unsigned char                                      bIsEnabled : 1;                                           // 0x00B4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOverride_Cursor : 1;                                     // 0x00B4(0x0001) (Edit)
	unsigned char                                      bIsVolatile : 1;                                          // 0x00B4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bDisableVolatileInSlateGI : 1;                            // 0x00B4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bWriteSceneZBuffer : 1;                                   // 0x00B4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UsedLayerPolicy;                                          // 0x00B5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreservedLayerNum;                                        // 0x00B6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMouseCursor>                          Cursor;                                                   // 0x00B7(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EWidgetClipping                                    Clipping;                                                 // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   Visibility;                                               // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bVisiblePass;                                             // 0x00BA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EWidgetVisible                                     WidgetVisible;                                            // 0x00BB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenReciveClick;                                         // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReciveClick;                                             // 0x00BD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00BE(0x0002) MISSED OFFSET
	class UWidgetNavigation*                           Navigation;                                               // 0x00C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x00C8(0x0028) MISSED OFFSET
	TArray<class UPropertyBinding*>                    NativeBindings;                                           // 0x00F0(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Widget");
		return pStaticClass;
	}


	void SetWidgetRender(EWidgetVisible InWidgetVisible);
	void SetVisibility(ESlateVisibility InVisibility);
	void SetUserFocus(class APlayerController* PlayerController);
	void SetToolTipText(const struct FText& InToolTipText);
	void SetToolTip(class UWidget* Widget);
	void SetRenderTranslation(const struct FVector2D& Translation);
	void SetRenderTransformPivot(const struct FVector2D& Pivot);
	void SetRenderTransform(const struct FWidgetTransform& InTransform);
	void SetRenderShear(const struct FVector2D& Shear);
	void SetRenderScale(const struct FVector2D& Scale);
	void SetRenderAngle(float Angle);
	void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void SetKeyboardFocus();
	void SetIsEnabled(bool bInIsEnabled);
	void SetCursor(TEnumAsByte<EMouseCursor> InCursor);
	void SetClipping(EWidgetClipping InClipping);
	void SetAllNavigationRules(EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void ResetCursor();
	void RemoveFromParent();
	struct FEventReply OnReply__DelegateSignature();
	struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool IsVisible();
	bool IsHovered();
	void InvalidateLayoutAndVolatility();
	bool HasUserFocusedDescendants(class APlayerController* PlayerController);
	bool HasUserFocus(class APlayerController* PlayerController);
	bool HasMouseCapture();
	bool HasKeyboardFocus();
	bool HasFocusedDescendants();
	bool HasAnyUserFocus();
	EWidgetVisible GetWidgetRender();
	class UWidget* GetWidget__DelegateSignature();
	ESlateVisibility GetVisibility();
	struct FGeometry GetTickSpaceGeometry();
	class UWidget* GetTheTemplate();
	struct FText GetText__DelegateSignature();
	ESlateVisibility GetSlateVisibility__DelegateSignature();
	struct FSlateColor GetSlateColor__DelegateSignature();
	struct FSlateBrush GetSlateBrush__DelegateSignature();
	class UPanelWidget* GetParent();
	struct FGeometry GetPaintSpaceGeometry();
	class APlayerController* GetOwningPlayer();
	TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature();
	struct FLinearColor GetLinearColor__DelegateSignature();
	bool GetIsEnabled();
	int GetInt32__DelegateSignature();
	float GetFloat__DelegateSignature();
	struct FVector2D GetDesiredSize();
	EWidgetClipping GetClipping();
	ECheckBoxState GetCheckBoxState__DelegateSignature();
	struct FGeometry GetCachedGeometry();
	struct FGeometry GetCachedAllottedGeometry();
	bool GetBool__DelegateSignature();
	class UWidget* GenerateWidgetForString__DelegateSignature(const struct FString& Item);
	class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
	void ForceVolatile(bool bForce);
	void ForceLayoutPrepass();
	void DisableVolatileInSlateGI(bool bDisabled);
	void AdaptationWidgetSlot(const struct FMargin& InOffset);
};


// Class UMG.UserWidget
// 0x0160 (0x0260 - 0x0100)
class UUserWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0108(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0118(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0128(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ForegroundColorDelegate;                                  // 0x0150(0x0010) (ZeroConstructor, InstancedReference)
	struct FMargin                                     Padding;                                                  // 0x0160(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FWAnimTime                                  WAnimTime;                                                // 0x0170(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<class UUMGSequencePlayer*>                  ActiveSequencePlayers;                                    // 0x0180(0x0010) (ZeroConstructor, Transient)
	TArray<class UUMGSequencePlayer*>                  StoppedSequencePlayers;                                   // 0x0190(0x0010) (ZeroConstructor, Transient)
	struct FScriptDelegate                             OnTouchStart;                                             // 0x01A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnTouchMove;                                              // 0x01B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnTouchEnd;                                               // 0x01C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	TArray<struct FNamedSlotBinding>                   NamedSlotBindings;                                        // 0x01D0(0x0010) (ZeroConstructor)
	class UWidgetTree*                                 WidgetTree;                                               // 0x01E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Priority;                                                 // 0x01E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSupportsKeyboardFocus : 1;                               // 0x01EC(0x0001) (Deprecated)
	unsigned char                                      bIsFocusable : 1;                                         // 0x01EC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bStopAction : 1;                                          // 0x01EC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanEverTick : 1;                                         // 0x01EC(0x0001)
	unsigned char                                      bCanEverPaint : 1;                                        // 0x01EC(0x0001)
	unsigned char                                      bDontPaintWhenChildEmpty : 1;                             // 0x01EC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01 : 1;                                        // 0x01EC(0x0001)
	unsigned char                                      bCookedWidgetTree : 1;                                    // 0x01EC(0x0001)
	bool                                               needAutoPlay;                                             // 0x01ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isAutoLoop;                                               // 0x01EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x01EF(0x0001) MISSED OFFSET
	TArray<struct FName>                               autoPlayNameList;                                         // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EWidgetTickFrequency                               TickFrequency;                                            // 0x0200(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0201(0x0007) MISSED OFFSET
	class UInputComponent*                             InputComponent;                                           // 0x0208(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x50];                                      // 0x0210(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.UserWidget");
		return pStaticClass;
	}


	void UnregisterInputComponent();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType);
	void StopListeningForAllInputActions();
	void StopAnimation(class UWidgetAnimation* InAnimation);
	void SetWAnimTime(const struct FWAnimTime& InWAnimTime);
	void SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale);
	void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
	void SetPadding(const struct FMargin& InPadding);
	void SetOwningPlayer(class APlayerController* LocalPlayerController);
	void SetOwningLocalPlayer(class ULocalPlayer* LocalPlayer);
	void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay);
	void SetInputActionPriority(int NewPriority);
	void SetInputActionBlocking(bool bShouldBlock);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void SetDontPaintWhenChildEmpty(bool Enable);
	void SetDesiredSizeInViewport(const struct FVector2D& Size);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetAnchorsInViewport(const struct FAnchors& Anchors);
	void SetAlignmentInViewport(const struct FVector2D& Alignment);
	void ReverseAnimation(class UWidgetAnimation* InAnimation);
	void RemoveFromViewport();
	void RegisterInputComponent();
	void PreConstruct(bool IsDesignTime);
	void PlaySound(class USoundBase* SoundToPlay);
	void PlayAnimationTo(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	void PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	float PauseAnimation(class UWidgetAnimation* InAnimation);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent);
	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnPaint(struct FPaintContext* Context);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseCaptureLost();
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnAnimationStarted(class UWidgetAnimation* Animation);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void ListenForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback);
	bool IsPlayingAnimation();
	bool IsListeningForInputAction(const struct FName& ActionName);
	bool IsInViewport();
	bool IsInteractable();
	bool IsAnyAnimationPlaying();
	bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);
	bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);
	class UWidget* GetWidgetFromName(const struct FName& Name);
	class APawn* GetOwningPlayerPawn();
	class APlayerController* GetOwningPlayer();
	class ULocalPlayer* GetOwningLocalPlayer();
	bool GetIsVisible();
	bool GetDontPaintWhenChildEmpty();
	float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);
	struct FAnchors GetAnchorsInViewport();
	struct FVector2D GetAlignmentInViewport();
	void Destruct();
	void Construct();
	void AddToViewport(int ZOrder);
	bool AddToPlayerScreen(int ZOrder);
};


// Class UMG.PanelWidget
// 0x0018 (0x0118 - 0x0100)
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                          Slots;                                                    // 0x0100(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.PanelWidget");
		return pStaticClass;
	}


	bool RemoveChildAt(int Index);
	bool RemoveChild(class UWidget* Content);
	bool HasChild(class UWidget* Content);
	bool HasAnyChildren();
	int GetChildrenCount();
	int GetChildIndex(class UWidget* Content);
	class UWidget* GetChildAt(int Index);
	void ClearChildren();
	class UPanelSlot* AddChild(class UWidget* Content);
};


// Class UMG.CanvasPanel
// 0x0018 (0x0130 - 0x0118)
class UCanvasPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET
	bool                                               bDontPaintWhenChildEmpty;                                 // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0129(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.CanvasPanel");
		return pStaticClass;
	}


	void SetDontPaintWhenChildEmpty(bool Enable);
	bool GetDontPaintWhenChildEmpty();
	class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);
};


// Class UMG.ScrollBox
// 0x0A10 (0x0B28 - 0x0118)
class UScrollBox : public UPanelWidget
{
public:
	struct FScrollBoxStyle                             WidgetStyle;                                              // 0x0118(0x02E8) (Edit, BlueprintVisible)
	struct FScrollBarStyle                             WidgetBarStyle;                                           // 0x0400(0x0680) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0A80(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateWidgetStyleAsset*                      BarStyle;                                                 // 0x0A88(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0A90(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   ScrollBarVisibility;                                      // 0x0A91(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                        // 0x0A92(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0A93(0x0001) MISSED OFFSET
	struct FVector2D                                   ScrollbarThickness;                                       // 0x0A94(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               AlwaysShowScrollbar;                                      // 0x0A9C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowOverscroll;                                          // 0x0A9D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EDescendantScrollDestination                       NavigationDestination;                                    // 0x0A9E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0A9F(0x0001) MISSED OFFSET
	float                                              NavigationScrollPadding;                                  // 0x0AA0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EdgePadding;                                              // 0x0AA4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowRightClickDragScrolling;                            // 0x0AA8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDontPaintWhenChildEmpty;                                 // 0x0AA9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0AAA(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnUserScrolled;                                           // 0x0AB0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUserScrolledUnused;                                     // 0x0AC0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginScroll;                                            // 0x0AD0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndScroll;                                              // 0x0AE0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTouchStartEvent;                                        // 0x0AF0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTouchEndEvent;                                          // 0x0B00(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0B10(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ScrollBox");
		return pStaticClass;
	}


	void StopScroll();
	void SetScrollOffset(float NewScrollOffset);
	void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);
	void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);
	void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);
	void SetDontPaintWhenChildEmpty(bool Enable);
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
	void SetAllowOverscroll(bool NewAllowOverscroll);
	void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination);
	void ScrollToStart();
	void ScrollToEnd();
	float GetScrollOffset();
	float GetScrollEndOffset();
	bool GetIsScrolling();
	bool GetDontPaintWhenChildEmpty();
	float GetCacheOverscrollOffset();
};


// Class UMG.ComboBoxString
// 0x0F70 (0x1070 - 0x0100)
class UComboBoxString : public UWidget
{
public:
	TArray<struct FString>                             DefaultOptions;                                           // 0x0100(0x0010) (Edit, ZeroConstructor)
	struct FString                                     SelectedOption;                                           // 0x0110(0x0010) (Edit, ZeroConstructor)
	struct FComboBoxStyle                              WidgetStyle;                                              // 0x0120(0x0508) (Edit, BlueprintVisible)
	struct FTableRowStyle                              ItemStyle;                                                // 0x0628(0x08F8) (Edit, BlueprintVisible)
	struct FMargin                                     ContentPadding;                                           // 0x0F20(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              MaxListHeight;                                            // 0x0F30(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasDownArrow;                                             // 0x0F34(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EnableGamepadNavigationMode;                              // 0x0F35(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0F36(0x0002) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0F38(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0F90(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsFocusable;                                             // 0x0FB8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAbove;                                                   // 0x0FB9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0FBA(0x0006) MISSED OFFSET
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                    // 0x0FC0(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0FD0(0x0020) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0FF0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOpening;                                                // 0x1000(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOpenChanged;                                            // 0x1010(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x50];                                      // 0x1020(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ComboBoxString");
		return pStaticClass;
	}


	void SetSelectedOption(const struct FString& Option);
	int SetComboListViewOffset(float Offset);
	bool RemoveOption(const struct FString& Option);
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnOpeningEvent__DelegateSignature();
	void OnOpenChangedEvent__DelegateSignature(bool bIsOpen, bool bAbove);
	struct FString GetSelectedOption();
	int GetOptionCount();
	struct FString GetOptionAtIndex(int Index);
	int FindOptionIndex(const struct FString& Option);
	void CloseComboBox();
	void ClearSelection();
	void ClearOptions();
	void AddOption(const struct FString& Option);
};


// Class UMG.PanelSlot
// 0x0010 (0x0038 - 0x0028)
class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                                Parent;                                                   // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     Content;                                                  // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.PanelSlot");
		return pStaticClass;
	}

};


// Class UMG.WidgetComponent
// 0x0170 (0x0900 - 0x0790)
class UWidgetComponent : public UMeshComponent
{
public:
	float                                              RTScale;                                                  // 0x0790(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EWidgetSpace                                       Space;                                                    // 0x0794(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EWidgetTimingPolicy                                TimingPolicy;                                             // 0x0795(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0796(0x0002) MISSED OFFSET
	class UClass*                                      WidgetClass;                                              // 0x0798(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   DrawSize;                                                 // 0x07A0(0x0008) (Edit, IsPlainOldData)
	bool                                               bManuallyRedraw;                                          // 0x07A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRedrawRequested;                                         // 0x07A9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x07AA(0x0002) MISSED OFFSET
	float                                              RedrawTime;                                               // 0x07AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x07B0(0x0008) MISSED OFFSET
	struct FIntPoint                                   CurrentDrawSize;                                          // 0x07B8(0x0008) (IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x07C0(0x0004) MISSED OFFSET
	bool                                               bDrawAtDesiredSize;                                       // 0x07C4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x07C5(0x0003) MISSED OFFSET
	struct FVector2D                                   Pivot;                                                    // 0x07C8(0x0008) (Edit, IsPlainOldData)
	bool                                               bReceiveHardwareInput;                                    // 0x07D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWindowFocusable;                                         // 0x07D1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x07D2(0x0006) MISSED OFFSET
	class ULocalPlayer*                                OwnerPlayer;                                              // 0x07D8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x07E0(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                TintColorAndOpacity;                                      // 0x07F0(0x0010) (Edit, IsPlainOldData)
	float                                              OpacityFromTexture;                                       // 0x0800(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EWidgetBlendMode                                   BlendMode;                                                // 0x0804(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTwoSided;                                              // 0x0805(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TickWhenOffscreen;                                        // 0x0806(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0807(0x0001) MISSED OFFSET
	class UUserWidget*                                 Widget;                                                   // 0x0808(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x20];                                      // 0x0810(0x0020) MISSED OFFSET
	class UBodySetup*                                  BodySetup;                                                // 0x0830(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInterface*                          TranslucentMaterialAA;                                    // 0x0838(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          TranslucentMaterialAA_OneSided;                           // 0x0840(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          TranslucentMaterial;                                      // 0x0848(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          TranslucentMaterial_OneSided;                             // 0x0850(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OpaqueMaterial;                                           // 0x0858(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OpaqueMaterial_OneSided;                                  // 0x0860(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaskedMaterial;                                           // 0x0868(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaskedMaterial_OneSided;                                  // 0x0870(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0878(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bAddedToScreen;                                           // 0x0888(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bEditTimeUsable;                                          // 0x0889(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x088A(0x0006) MISSED OFFSET
	struct FName                                       SharedLayerName;                                          // 0x0890(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LayerZOrder;                                              // 0x0898(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EWidgetGeometryMode                                GeometryMode;                                             // 0x089C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x089D(0x0003) MISSED OFFSET
	float                                              CylinderArcAngle;                                         // 0x08A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x5C];                                      // 0x08A4(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetComponent");
		return pStaticClass;
	}


	void SetWidget(class UUserWidget* Widget);
	void SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity);
	void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
	void SetDrawSize(const struct FVector2D& Size);
	void SetBackgroundColor(const struct FLinearColor& NewBackgroundColor);
	void RequestRedraw();
	class UUserWidget* GetUserWidgetObject();
	class UTextureRenderTarget2D* GetRenderTarget();
	class ULocalPlayer* GetOwnerPlayer();
	class UMaterialInstanceDynamic* GetMaterialInstance();
	struct FVector2D GetDrawSize();
};


// Class UMG.Slider
// 0x0398 (0x0498 - 0x0100)
class USlider : public UWidget
{
public:
	float                                              Value;                                                    // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FScriptDelegate                             ValueDelegate;                                            // 0x0108(0x0010) (ZeroConstructor, InstancedReference)
	struct FSliderStyle                                WidgetStyle;                                              // 0x0118(0x02F0) (Edit, BlueprintVisible)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0408(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	struct FLinearColor                                SliderBarColor;                                           // 0x040C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                SliderHandleColor;                                        // 0x041C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               IndentHandle;                                             // 0x042C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // 0x042D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x042E(0x0002) MISSED OFFSET
	float                                              StepSize;                                                 // 0x0430(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x0434(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0435(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMouseCaptureBegin;                                      // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMouseCaptureEnd;                                        // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnControllerCaptureBegin;                                 // 0x0458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnControllerCaptureEnd;                                   // 0x0468(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x0478(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0488(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Slider");
		return pStaticClass;
	}


	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	float GetValue();
};


// Class UMG.ContentWidget
// 0x0000 (0x0118 - 0x0118)
class UContentWidget : public UPanelWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ContentWidget");
		return pStaticClass;
	}


	class UPanelSlot* SetContent(class UWidget* Content);
	class UPanelSlot* GetContentSlot();
	class UWidget* GetContent();
};


// Class UMG.InvalidationBox
// 0x0010 (0x0128 - 0x0118)
class UInvalidationBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.InvalidationBox");
		return pStaticClass;
	}


	void SetDontPaintWhenChildEmpty(bool Enable);
	void SetCanCache(bool CanCache);
	void InvalidateCache();
	bool GetDontPaintWhenChildEmpty();
	bool GetCanCache();
};


// Class UMG.RetainerBox
// 0x0028 (0x0140 - 0x0118)
class URetainerBox : public UContentWidget
{
public:
	int                                                PhaseCount;                                               // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          EffectMaterial;                                           // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       TextureParameter;                                         // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.RetainerBox");
		return pStaticClass;
	}


	void SkipCurrentFrameRender();
	void SetTextureParameter(const struct FName& TextureParameter);
	void SetEffectMaterial(class UMaterialInterface* EffectMaterial);
	void RequestRender();
	class UMaterialInstanceDynamic* GetEffectMaterial();
};


// Class UMG.Button
// 0x0400 (0x0518 - 0x0118)
class UButton : public UContentWidget
{
public:
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0118(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FButtonStyle                                WidgetStyle;                                              // 0x0120(0x0338) (Edit, BlueprintVisible)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0458(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0468(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x0478(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              // 0x0479(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x047A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassMouseEvent;                                         // 0x047B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              nClickCd;                                                 // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTouchPass;                                               // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0488(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPressed;                                                // 0x0498(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReleased;                                               // 0x04A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHovered;                                                // 0x04B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUnhovered;                                              // 0x04C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPressedParam;                                           // 0x04D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x04E8(0x0010) (Edit, ZeroConstructor, InstancedReference)
	EButtonOnClickSound                                OnClickSoundType;                                         // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x04F9(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Button");
		return pStaticClass;
	}


	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);
	void SetStyle(const struct FButtonStyle& InStyle);
	void SetOnClickSound(const struct FScriptDelegate& onSound);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetClickSoundType(EButtonOnClickSound onSoundType);
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	void Release();
	void OnButtonSoundEvent__DelegateSignature(unsigned char Sound);
	bool IsPressed();
};


// Class UMG.EditableTextBox
// 0x0BA0 (0x0CA0 - 0x0100)
class UEditableTextBox : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x0100(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0118(0x0010) (ZeroConstructor, InstancedReference)
	struct FEditableTextBoxStyle                       WidgetStyle;                                              // 0x0128(0x0A68) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0B90(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FText                                       HintText;                                                 // 0x0B98(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0BB0(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x0BC0(0x0058) (Deprecated)
	struct FLinearColor                                ForegroundColor;                                          // 0x0C18(0x0010) (Deprecated, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0C28(0x0010) (Deprecated, IsPlainOldData)
	struct FLinearColor                                ReadOnlyForegroundColor;                                  // 0x0C38(0x0010) (Deprecated, IsPlainOldData)
	bool                                               IsReadOnly;                                               // 0x0C48(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassword;                                               // 0x0C49(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0C4A(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x0C4C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Padding;                                                  // 0x0C50(0x0010) (Deprecated, IsPlainOldData)
	bool                                               IsCaretMovedWhenGainFocus;                                // 0x0C60(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextWhenFocused;                                 // 0x0C61(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x0C62(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x0C63(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x0C64(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x0C65(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVirtualKeyboardType>                  KeyboardType;                                             // 0x0C66(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0C67(0x0001) MISSED OFFSET
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x0C68(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0C6C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x0C70(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0C80(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0C90(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.EditableTextBox");
		return pStaticClass;
	}


	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(const struct FText& InText);
	void SetError(const struct FText& InError);
	void OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	bool HasError();
	struct FText GetText();
	void ClearError();
};


// Class UMG.Image
// 0x0178 (0x0278 - 0x0100)
class UImage : public UWidget
{
public:
	bool                                               bIsEnhancedImage;                                         // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	struct FSlateBrush                                 Brush;                                                    // 0x0108(0x00B8) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             BrushDelegate;                                            // 0x01C0(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnSetBrushAsyncComplete;                                  // 0x01D0(0x0010) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x01E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x01F0(0x0010) (ZeroConstructor, InstancedReference)
	bool                                               bIsUseEnhancedHitTest;                                    // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVersionImg;                                              // 0x0201(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0202(0x0006) MISSED OFFSET
	struct FString                                     imageSrcPath;                                             // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              HitTestAreaRadius;                                        // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFixOverScale;                                            // 0x021C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x021D(0x0003) MISSED OFFSET
	struct FVector2D                                   ScalePivot;                                               // 0x0220(0x0008) (Edit, IsPlainOldData)
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x0228(0x0010) (Edit, ZeroConstructor, InstancedReference)
	bool                                               bDontPaintWhenAlphaZero;                                  // 0x0238(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDontPaintWhenColorZero;                                  // 0x0239(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAsyncLoadImageAsset;                                     // 0x023A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x023B(0x0005) MISSED OFFSET
	struct FSoftObjectPath                             AsyncLoadResourcePath;                                    // 0x0240(0x0018)
	unsigned char                                      UnknownData04[0x20];                                      // 0x0258(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Image");
		return pStaticClass;
	}


	void SetOpacity(float InOpacity);
	void SetDontPaintWhenColorZero(bool Enable);
	void SetDontPaintWhenAlphaZero(bool Enable);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBrushResourceFromPathSync(const struct FString& ResourcePath);
	void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);
	void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
	void SetBrushFromPathAsync(const struct FString& ResourcePath, bool bMatchSize);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAtlasInterface(const TScriptInterface<class USlateTextureAtlasInterface>& AtlasRegion, bool bMatchSize);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrush(const struct FSlateBrush& InBrush);
	void SeFixOverScale(bool Enable);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
	bool GetDontPaintWhenColorZero();
	bool GetDontPaintWhenAlphaZero();
};


// Class UMG.AsyncTaskDownloadImage
// 0x0020 (0x0048 - 0x0028)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.AsyncTaskDownloadImage");
		return pStaticClass;
	}


	class UAsyncTaskDownloadImage* DownloadImage(const struct FString& URL);
};


// Class UMG.BackgroundBlur
// 0x01B0 (0x02C8 - 0x0118)
class UBackgroundBlur : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0118(0x000C) MISSED OFFSET
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0124(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0125(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyAlphaToBlur;                                        // 0x0126(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0127(0x0001) MISSED OFFSET
	float                                              BlurStrength;                                             // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAutoRadiusCalculation;                           // 0x012C(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBlurType>                             BlurType;                                                 // 0x012D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x012E(0x0002) MISSED OFFSET
	float                                              BlurDirection;                                            // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BlurCenter;                                               // 0x0134(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                BlurRadius;                                               // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    BlurMask;                                                 // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 LowQualityFallbackBrush;                                  // 0x0148(0x00B8) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 BlurMaskBrush;                                            // 0x0200(0x00B8) (Transient)
	unsigned char                                      UnknownData03[0x10];                                      // 0x02B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.BackgroundBlur");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetBlurStrength(float InStrength);
	void SetBlurRadius(int InBlurRadius);
	void SetBlurMask(class UTexture* InTexture);
	void SetBlurDirection(float InDirection);
	void SetBlurCenter(const struct FVector2D& InCenter);
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
};


// Class UMG.BackgroundBlurSlot
// 0x0028 (0x0060 - 0x0038)
class UBackgroundBlurSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.BackgroundBlurSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.PropertyBinding
// 0x0020 (0x0048 - 0x0028)
class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                      SourceObject;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDynamicPropertyPath                        SourcePath;                                               // 0x0030(0x0010)
	struct FName                                       DestinationProperty;                                      // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.PropertyBinding");
		return pStaticClass;
	}

};


// Class UMG.BoolBinding
// 0x0000 (0x0048 - 0x0048)
class UBoolBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.BoolBinding");
		return pStaticClass;
	}


	bool GetValue();
};


// Class UMG.Border
// 0x0178 (0x0290 - 0x0118)
class UBorder : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET
	struct FScriptDelegate                             ContentColorAndOpacityDelegate;                           // 0x0128(0x0010) (ZeroConstructor, InstancedReference)
	struct FMargin                                     Padding;                                                  // 0x0138(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSlateBrush                                 Background;                                               // 0x0148(0x00B8) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             BackgroundDelegate;                                       // 0x0200(0x0010) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                BrushColor;                                               // 0x0210(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FScriptDelegate                             BrushColorDelegate;                                       // 0x0220(0x0010) (ZeroConstructor, InstancedReference)
	struct FVector2D                                   DesiredSizeScale;                                         // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x0238(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseButtonUpEvent;                                     // 0x0248(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseMoveEvent;                                         // 0x0258(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseDoubleClickEvent;                                  // 0x0268(0x0010) (Edit, ZeroConstructor, InstancedReference)
	bool                                               bDontPaintWhenChildEmpty;                                 // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDontPaintWhenAlphaZero;                                  // 0x0279(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x16];                                      // 0x027A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Border");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetDontPaintWhenChildEmpty(bool Enable);
	void SetDontPaintWhenAlphaZero(bool Enable);
	void SetDesiredSizeScale(const struct FVector2D& inScale);
	void SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
	void SetBrushFromTexture(class UTexture2D* Texture);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrushColor(const struct FLinearColor& InBrushColor);
	void SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
	bool GetDontPaintWhenChildEmpty();
	bool GetDontPaintWhenAlphaZero();
};


// Class UMG.BorderSlot
// 0x0028 (0x0060 - 0x0038)
class UBorderSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.BorderSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.BrushBinding
// 0x0008 (0x0050 - 0x0048)
class UBrushBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.BrushBinding");
		return pStaticClass;
	}


	struct FSlateBrush GetValue();
};


// Class UMG.ButtonSlot
// 0x0028 (0x0060 - 0x0038)
class UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ButtonSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.CanvasPanelSlot
// 0x0038 (0x0070 - 0x0038)
class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct FAnchorData                                 LayoutData;                                               // 0x0038(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAutoSize;                                                // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSupportNotch;                                            // 0x0061(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0062(0x0002) MISSED OFFSET
	int                                                ZOrder;                                                   // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.CanvasPanelSlot");
		return pStaticClass;
	}


	void SetZOrder(int InZOrder);
	void SetSupportNotch(bool InSupportNotch);
	void SetSize(const struct FVector2D& InSize);
	void SetPosition(const struct FVector2D& InPosition);
	void SetOffsets(const struct FMargin& InOffset);
	void SetMinimum(const struct FVector2D& InMinimumAnchors);
	void SetMaximum(const struct FVector2D& InMaximumAnchors);
	void SetLayout(const struct FAnchorData& InLayoutData);
	void SetAutoSize(bool InbAutoSize);
	void SetAnchors(const struct FAnchors& InAnchors);
	void SetAlignment(const struct FVector2D& InAlignment);
	int GetZOrder();
	struct FVector2D GetSize();
	struct FVector2D GetPosition();
	struct FMargin GetOffsets();
	struct FAnchorData GetLayout();
	bool GetAutoSize();
	struct FAnchors GetAnchors();
	struct FVector2D GetAlignment();
	bool GeSupportNotch();
};


// Class UMG.CheckBox
// 0x07F8 (0x0910 - 0x0118)
class UCheckBox : public UContentWidget
{
public:
	struct FScriptDelegate                             CheckedStateDelegate;                                     // 0x0118(0x0010) (ZeroConstructor, InstancedReference)
	struct FCheckBoxStyle                              WidgetStyle;                                              // 0x0128(0x0730) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0858(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UncheckedImage;                                           // 0x0860(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UncheckedHoveredImage;                                    // 0x0868(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UncheckedPressedImage;                                    // 0x0870(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CheckedImage;                                             // 0x0878(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CheckedHoveredImage;                                      // 0x0880(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CheckedPressedImage;                                      // 0x0888(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedImage;                                        // 0x0890(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedHoveredImage;                                 // 0x0898(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedPressedImage;                                 // 0x08A0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x08A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08A9(0x0003) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x08AC(0x0010) (Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	struct FSlateColor                                 BorderBackgroundColor;                                    // 0x08C0(0x0028) (Deprecated)
	bool                                               IsFocusable;                                              // 0x08E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x08E9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCheckStateChanged;                                      // 0x08F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0900(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.CheckBox");
		return pStaticClass;
	}


	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(ECheckBoxState InCheckedState);
	bool IsPressed();
	bool IsChecked();
	ECheckBoxState GetCheckedState();
};


// Class UMG.CheckedStateBinding
// 0x0008 (0x0050 - 0x0048)
class UCheckedStateBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.CheckedStateBinding");
		return pStaticClass;
	}


	ECheckBoxState GetValue();
};


// Class UMG.CircularThrobber
// 0x00E8 (0x01E8 - 0x0100)
class UCircularThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                           // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Period;                                                   // 0x0104(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class USlateBrushAsset*                            PieceImage;                                               // 0x0110(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateBrush                                 Image;                                                    // 0x0118(0x00B8) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bEnableRadius;                                            // 0x01D0(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x01D1(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.CircularThrobber");
		return pStaticClass;
	}


	void SetRadius(float InRadius);
	void SetPeriod(float InPeriod);
	void SetNumberOfPieces(int InNumberOfPieces);
};


// Class UMG.ColorBinding
// 0x0008 (0x0050 - 0x0048)
class UColorBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ColorBinding");
		return pStaticClass;
	}


	struct FSlateColor GetSlateValue();
	struct FLinearColor GetLinearValue();
};


// Class UMG.ComboBox
// 0x0038 (0x0138 - 0x0100)
class UComboBox : public UWidget
{
public:
	TArray<class UObject*>                             Items;                                                    // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                    // 0x0110(0x0010) (Edit, ZeroConstructor, InstancedReference)
	bool                                               bIsFocusable;                                             // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0121(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ComboBox");
		return pStaticClass;
	}

};


// Class UMG.DragDropOperation
// 0x0060 (0x0088 - 0x0028)
class UDragDropOperation : public UObject
{
public:
	struct FString                                     Tag;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UObject*                                     Payload;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     DefaultDragVisual;                                        // 0x0040(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	EDragPivot                                         Pivot;                                                    // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FVector2D                                   Offset;                                                   // 0x004C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDrop;                                                   // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragCancelled;                                          // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragged;                                                // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.DragDropOperation");
		return pStaticClass;
	}


	void Drop(const struct FPointerEvent& PointerEvent);
	void Dragged(const struct FPointerEvent& PointerEvent);
	void DragCancelled(const struct FPointerEvent& PointerEvent);
};


// Class UMG.EditableText
// 0x03E8 (0x04E8 - 0x0100)
class UEditableText : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x0100(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0118(0x0010) (ZeroConstructor, InstancedReference)
	struct FText                                       HintText;                                                 // 0x0128(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0140(0x0010) (ZeroConstructor, InstancedReference)
	struct FEditableTextStyle                          WidgetStyle;                                              // 0x0150(0x02B0) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0400(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImageSelected;                                  // 0x0408(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImageComposing;                                 // 0x0410(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CaretImage;                                               // 0x0418(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x0420(0x0058) (Deprecated)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0478(0x0028) (Deprecated)
	bool                                               IsReadOnly;                                               // 0x04A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassword;                                               // 0x04A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x04A2(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x04A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsCaretMovedWhenGainFocus;                                // 0x04A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextWhenFocused;                                 // 0x04A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x04AA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x04AB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x04AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x04AD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVirtualKeyboardType>                  KeyboardType;                                             // 0x04AE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x04AF(0x0001) MISSED OFFSET
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x04B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x04B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x04C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x10];                                      // 0x04D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.EditableText");
		return pStaticClass;
	}


	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool InbIsReadyOnly);
	void SetIsPassword(bool InbIsPassword);
	void SetHintText(const struct FText& InHintText);
	void OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};


// Class UMG.ExpandableArea
// 0x02C0 (0x03C0 - 0x0100)
class UExpandableArea : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	struct FExpandableAreaStyle                        Style;                                                    // 0x0108(0x0180) (Edit)
	struct FSlateBrush                                 BorderBrush;                                              // 0x0288(0x00B8) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                                 BorderColor;                                              // 0x0340(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsExpanded;                                              // 0x0368(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	float                                              MaxHeight;                                                // 0x036C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     HeaderPadding;                                            // 0x0370(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FMargin                                     AreaPadding;                                              // 0x0380(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnExpansionChanged;                                       // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UWidget*                                     HeaderContent;                                            // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     BodyContent;                                              // 0x03A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ExpandableArea");
		return pStaticClass;
	}


	void SetIsExpanded_Animated(bool IsExpanded);
	void SetIsExpanded(bool IsExpanded);
	bool GetIsExpanded();
};


// Class UMG.FloatBinding
// 0x0000 (0x0048 - 0x0048)
class UFloatBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.FloatBinding");
		return pStaticClass;
	}


	float GetValue();
};


// Class UMG.GridPanel
// 0x0038 (0x0150 - 0x0118)
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                      ColumnFill;                                               // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      RowFill;                                                  // 0x0128(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bDontPaintWhenChildEmpty;                                 // 0x0138(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0139(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.GridPanel");
		return pStaticClass;
	}


	void SetDontPaintWhenChildEmpty(bool Enable);
	bool GetDontPaintWhenChildEmpty();
	class UGridSlot* AddChildToGrid(class UWidget* Content);
};


// Class UMG.GridSlot
// 0x0038 (0x0070 - 0x0038)
class UGridSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	int                                                Row;                                                      // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RowSpan;                                                  // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Column;                                                   // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ColumnSpan;                                               // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Layer;                                                    // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Nudge;                                                    // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.GridSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetRowSpan(int InRowSpan);
	void SetRow(int InRow);
	void SetPadding(const struct FMargin& InPadding);
	void SetLayer(int InLayer);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetColumnSpan(int InColumnSpan);
	void SetColumn(int InColumn);
};


// Class UMG.HorizontalBox
// 0x0010 (0x0128 - 0x0118)
class UHorizontalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.HorizontalBox");
		return pStaticClass;
	}


	void SetDontPaintWhenChildEmpty(bool Enable);
	bool GetDontPaintWhenChildEmpty();
	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);
};


// Class UMG.HorizontalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSlateChildSize                             Size;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.HorizontalBoxSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.InputKeySelector
// 0x0698 (0x0798 - 0x0100)
class UInputKeySelector : public UWidget
{
public:
	struct FButtonStyle                                WidgetStyle;                                              // 0x0100(0x0338) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0438(0x0250) (Edit, BlueprintVisible)
	struct FInputChord                                 SelectedKey;                                              // 0x0688(0x0020) (BlueprintVisible, BlueprintReadOnly)
	struct FSlateFontInfo                              Font;                                                     // 0x06A8(0x0058) (Deprecated)
	struct FMargin                                     Margin;                                                   // 0x0700(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0710(0x0010) (Deprecated, IsPlainOldData)
	struct FText                                       KeySelectionText;                                         // 0x0720(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       NoKeySpecifiedText;                                       // 0x0738(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAllowModifierKeys;                                       // 0x0750(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowGamepadKeys;                                        // 0x0751(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0752(0x0006) MISSED OFFSET
	TArray<struct FKey>                                EscapeKeys;                                               // 0x0758(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnKeySelected;                                            // 0x0768(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIsSelectingKeyChanged;                                  // 0x0778(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0788(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.InputKeySelector");
		return pStaticClass;
	}


	void SetTextBlockVisibility(ESlateVisibility InVisibility);
	void SetSelectedKey(const struct FInputChord& InSelectedKey);
	void SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText);
	void SetKeySelectionText(const struct FText& InKeySelectionText);
	void SetAllowModifierKeys(bool bInAllowModifierKeys);
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
	void OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void OnIsSelectingKeyChanged__DelegateSignature();
	bool GetIsSelectingKey();
};


// Class UMG.Int32Binding
// 0x0000 (0x0048 - 0x0048)
class UInt32Binding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Int32Binding");
		return pStaticClass;
	}


	int GetValue();
};


// Class UMG.TableViewBase
// 0x0000 (0x0100 - 0x0100)
class UTableViewBase : public UWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.TableViewBase");
		return pStaticClass;
	}

};


// Class UMG.ListView
// 0x0040 (0x0140 - 0x0100)
class UListView : public UTableViewBase
{
public:
	float                                              ItemHeight;                                               // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	TArray<class UObject*>                             Items;                                                    // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	struct FScriptDelegate                             OnGenerateRowEvent;                                       // 0x0120(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ListView");
		return pStaticClass;
	}

};


// Class UMG.MenuAnchor
// 0x0040 (0x0158 - 0x0118)
class UMenuAnchor : public UContentWidget
{
public:
	class UClass*                                      MenuClass;                                                // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnGetMenuContentEvent;                                    // 0x0120(0x0010) (Edit, ZeroConstructor, InstancedReference)
	TEnumAsByte<EMenuPlacement>                        Placement;                                                // 0x0130(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldDeferPaintingAfterWindowContent;                    // 0x0131(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UseApplicationMenuStack;                                  // 0x0132(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0133(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMenuOpenChanged;                                        // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0148(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MenuAnchor");
		return pStaticClass;
	}


	void ToggleOpen(bool bFocusOnOpen);
	bool ShouldOpenDueToClick();
	void Open(bool bFocusMenu);
	bool IsOpen();
	bool HasOpenSubMenus();
	struct FVector2D GetMenuPosition();
	void Close();
};


// Class UMG.MouseCursorBinding
// 0x0000 (0x0048 - 0x0048)
class UMouseCursorBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MouseCursorBinding");
		return pStaticClass;
	}


	TEnumAsByte<EMouseCursor> GetValue();
};


// Class UMG.MovieScene2DTransformSection
// 0x0318 (0x03C8 - 0x00B0)
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	struct FRichCurve                                  Translation[0x2];                                         // 0x00B8(0x0070)
	struct FRichCurve                                  Rotation;                                                 // 0x0198(0x0070)
	struct FRichCurve                                  Scale[0x2];                                               // 0x0208(0x0070)
	struct FRichCurve                                  Shear[0x2];                                               // 0x02E8(0x0070)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MovieScene2DTransformSection");
		return pStaticClass;
	}

};


// Class UMG.MovieScene2DTransformTrack
// 0x0000 (0x0080 - 0x0080)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MovieScene2DTransformTrack");
		return pStaticClass;
	}

};


// Class UMG.MovieSceneMarginSection
// 0x01C8 (0x0278 - 0x00B0)
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	struct FRichCurve                                  TopCurve;                                                 // 0x00B8(0x0070)
	struct FRichCurve                                  LeftCurve;                                                // 0x0128(0x0070)
	struct FRichCurve                                  RightCurve;                                               // 0x0198(0x0070)
	struct FRichCurve                                  BottomCurve;                                              // 0x0208(0x0070)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MovieSceneMarginSection");
		return pStaticClass;
	}

};


// Class UMG.MovieSceneMarginTrack
// 0x0000 (0x0080 - 0x0080)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MovieSceneMarginTrack");
		return pStaticClass;
	}

};


// Class UMG.MovieSceneWAnimTimeSection
// 0x01C8 (0x0278 - 0x00B0)
class UMovieSceneWAnimTimeSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	struct FRichCurve                                  PlayTimeCurve_2;                                          // 0x00B8(0x0070)
	struct FRichCurve                                  PlayTimeCurve_3;                                          // 0x0128(0x0070)
	struct FRichCurve                                  PlayTimeCurve_4;                                          // 0x0198(0x0070)
	struct FRichCurve                                  PlayTimeCurve_5;                                          // 0x0208(0x0070)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MovieSceneWAnimTimeSection");
		return pStaticClass;
	}

};


// Class UMG.MovieSceneWAnimTimeTrack
// 0x0000 (0x0080 - 0x0080)
class UMovieSceneWAnimTimeTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MovieSceneWAnimTimeTrack");
		return pStaticClass;
	}

};


// Class UMG.MovieSceneWidgetMaterialTrack
// 0x0018 (0x0080 - 0x0068)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	TArray<struct FName>                               BrushPropertyNamePath;                                    // 0x0068(0x0010) (ZeroConstructor)
	struct FName                                       TrackName;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MovieSceneWidgetMaterialTrack");
		return pStaticClass;
	}

};


// Class UMG.TextLayoutWidget
// 0x0028 (0x0128 - 0x0100)
class UTextLayoutWidget : public UWidget
{
public:
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0104(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextVerticalJustify>                  VerticalJustification;                                    // 0x0105(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoWrapText;                                             // 0x0106(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0107(0x0001) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ETextWrappingPolicy                                WrappingPolicy;                                           // 0x010C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
	struct FMargin                                     Margin;                                                   // 0x0110(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              LineHeightPercentage;                                     // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0124(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.TextLayoutWidget");
		return pStaticClass;
	}

};


// Class UMG.MultiLineEditableText
// 0x0328 (0x0450 - 0x0128)
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0128(0x0018) (Edit)
	struct FText                                       HintText;                                                 // 0x0140(0x0018) (Edit)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0158(0x0010) (ZeroConstructor, InstancedReference)
	struct FTextBlockStyle                             WidgetStyle;                                              // 0x0168(0x0250) (Edit, BlueprintVisible)
	bool                                               bIsReadOnly;                                              // 0x03B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x03C0(0x0058) (Deprecated)
	bool                                               AllowContextMenu;                                         // 0x0418(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0419(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x0420(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0440(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MultiLineEditableText");
		return pStaticClass;
	}


	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(const struct FText& InText);
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};


// Class UMG.MultiLineEditableTextBox
// 0x0DC0 (0x0EE8 - 0x0128)
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0128(0x0018) (Edit)
	struct FText                                       HintText;                                                 // 0x0140(0x0018) (Edit)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0158(0x0010) (ZeroConstructor, InstancedReference)
	struct FEditableTextBoxStyle                       WidgetStyle;                                              // 0x0168(0x0A68) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0BD0(0x0250) (Edit, BlueprintVisible)
	bool                                               bIsReadOnly;                                              // 0x0E20(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x0E21(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0E22(0x0006) MISSED OFFSET
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0E28(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x0E30(0x0058) (Deprecated)
	struct FLinearColor                                ForegroundColor;                                          // 0x0E88(0x0010) (Deprecated, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0E98(0x0010) (Deprecated, IsPlainOldData)
	struct FLinearColor                                ReadOnlyForegroundColor;                                  // 0x0EA8(0x0010) (Deprecated, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x0EB8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0EC8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0ED8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MultiLineEditableTextBox");
		return pStaticClass;
	}


	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(const struct FText& InText);
	void SetError(const struct FText& InError);
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};


// Class UMG.NamedSlot
// 0x0010 (0x0128 - 0x0118)
class UNamedSlot : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.NamedSlot");
		return pStaticClass;
	}

};


// Class UMG.NamedSlotInterface
// 0x0000 (0x0028 - 0x0028)
class UNamedSlotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.NamedSlotInterface");
		return pStaticClass;
	}

};


// Class UMG.NativeWidgetHost
// 0x0010 (0x0110 - 0x0100)
class UNativeWidgetHost : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.NativeWidgetHost");
		return pStaticClass;
	}

};


// Class UMG.Overlay
// 0x0010 (0x0128 - 0x0118)
class UOverlay : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Overlay");
		return pStaticClass;
	}


	class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
};


// Class UMG.OverlaySlot
// 0x0020 (0x0058 - 0x0038)
class UOverlaySlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x004A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.OverlaySlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.ProgressBar
// 0x02A0 (0x03A0 - 0x0100)
class UProgressBar : public UWidget
{
public:
	struct FProgressBarStyle                           WidgetStyle;                                              // 0x0100(0x0230) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0330(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImage;                                          // 0x0338(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            FillImage;                                                // 0x0340(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            MarqueeImage;                                             // 0x0348(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              percent;                                                  // 0x0350(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProgressBarFillType>                  BarFillType;                                              // 0x0354(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMarquee;                                               // 0x0355(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0356(0x0002) MISSED OFFSET
	struct FVector2D                                   BorderPadding;                                            // 0x0358(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FScriptDelegate                             PercentDelegate;                                          // 0x0360(0x0010) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                FillColorAndOpacity;                                      // 0x0370(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FScriptDelegate                             FillColorAndOpacityDelegate;                              // 0x0380(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0390(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ProgressBar");
		return pStaticClass;
	}


	void SetPercent(float InPercent);
	void SetIsMarquee(bool InbIsMarquee);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
};


// Class UMG.RichTextBlock
// 0x0300 (0x0428 - 0x0128)
class URichTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0128(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0140(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x0150(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                Color;                                                    // 0x01A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TArray<class URichTextBlockDecorator*>             Decorators;                                               // 0x01B8(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x260];                                     // 0x01C8(0x0260) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.RichTextBlock");
		return pStaticClass;
	}

};


// Class UMG.RichTextBlockDecorator
// 0x0008 (0x0030 - 0x0028)
class URichTextBlockDecorator : public UObject
{
public:
	bool                                               bReveal;                                                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                RevealedIndex;                                            // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.RichTextBlockDecorator");
		return pStaticClass;
	}

};


// Class UMG.SafeZone
// 0x0010 (0x0128 - 0x0118)
class USafeZone : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.SafeZone");
		return pStaticClass;
	}


	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
};


// Class UMG.SafeZoneSlot
// 0x0028 (0x0060 - 0x0038)
class USafeZoneSlot : public UPanelSlot
{
public:
	bool                                               bIsTitleSafe;                                             // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FMargin                                     SafeAreaScale;                                            // 0x003C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HAlign;                                                   // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VAlign;                                                   // 0x004D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.SafeZoneSlot");
		return pStaticClass;
	}

};


// Class UMG.ScaleBox
// 0x0018 (0x0130 - 0x0118)
class UScaleBox : public UContentWidget
{
public:
	float                                              UserSpecifiedScaleBias;                                   // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreInheritedScale;                                     // 0x011C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSingleLayoutPass;                                        // 0x011D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x12];                                      // 0x011E(0x0012) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ScaleBox");
		return pStaticClass;
	}


	void SetUserSpecifiedScaleBias(float InUserSpecifiedScaleBias);
	void SetUserSpecifiedScale(float InUserSpecifiedScale);
	void SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection);
	void SetStretch(TEnumAsByte<EStretch> InStretch);
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
};


// Class UMG.ScaleBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UScaleBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAdaptAutoWrapText;                                       // 0x004A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x15];                                      // 0x004B(0x0015) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ScaleBoxSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetAdaptAutoWrapText(bool bInAdaptAutoWrapText);
};


// Class UMG.ScrollBar
// 0x06A8 (0x07A8 - 0x0100)
class UScrollBar : public UWidget
{
public:
	struct FScrollBarStyle                             WidgetStyle;                                              // 0x0100(0x0680) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0780(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bAlwaysShowScrollbar;                                     // 0x0788(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0789(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x078A(0x0002) MISSED OFFSET
	struct FVector2D                                   Thickness;                                                // 0x078C(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0794(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ScrollBar");
		return pStaticClass;
	}


	void SetState(float InOffsetFraction, float InThumbSizeFraction);
};


// Class UMG.ScrollBoxSlot
// 0x0020 (0x0058 - 0x0038)
class UScrollBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0049(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ScrollBoxSlot");
		return pStaticClass;
	}


	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.ShareWidgetRT
// 0x0068 (0x0090 - 0x0028)
class UShareWidgetRT : public UObject
{
public:
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty UMG.ShareWidgetRT.AllSharedWidget
	unsigned char                                      UnknownData01[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ShareWidgetRT");
		return pStaticClass;
	}

};


// Class UMG.ShareWidgetRTManager
// 0x0050 (0x0440 - 0x03F0)
class AShareWidgetRTManager : public AActor
{
public:
	TMap<class UObject*, class UShareWidgetRT*>        SharedWidgetRTMap;                                        // 0x03F0(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ShareWidgetRTManager");
		return pStaticClass;
	}

};


// Class UMG.SizeBox
// 0x0028 (0x0140 - 0x0118)
class USizeBox : public UContentWidget
{
public:
	float                                              HeightOverride;                                           // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredWidth;                                          // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredHeight;                                         // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDesiredWidth;                                          // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDesiredHeight;                                         // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAspectRatio;                                           // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.SizeBox");
		return pStaticClass;
	}


	void SetWidthOverride(float InWidthOverride);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetMinDesiredHeight(float InMinDesiredHeight);
	void SetMaxDesiredWidth(float InMaxDesiredWidth);
	void SetMaxDesiredHeight(float InMaxDesiredHeight);
	void SetMaxAspectRatio(float InMaxAspectRatio);
	void SetHeightOverride(float InHeightOverride);
	void SetDontPaintWhenChildEmpty(bool Enable);
	bool GetDontPaintWhenChildEmpty();
	void ClearWidthOverride();
	void ClearMinDesiredWidth();
	void ClearMinDesiredHeight();
	void ClearMaxDesiredWidth();
	void ClearMaxDesiredHeight();
	void ClearMaxAspectRatio();
	void ClearHeightOverride();
};


// Class UMG.SizeBoxSlot
// 0x0028 (0x0060 - 0x0038)
class USizeBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.SizeBoxSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.SlateBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.SlateBlueprintLibrary");
		return pStaticClass;
	}


	void ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate);
	void ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate);
	void ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition);
	void LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate);
	bool IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
	struct FVector2D GetLocalSize(const struct FGeometry& Geometry);
	struct FVector2D GetAbsoluteSize(const struct FGeometry& Geometry);
	struct FVector2D GetAbsolutePosition(const struct FGeometry& Geometry);
	bool EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B);
	void AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
};


// Class UMG.SlateDataSheet
// 0x0408 (0x0430 - 0x0028)
class USlateDataSheet : public UObject
{
public:
	class UTexture2D*                                  DataTexture;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x400];                                     // 0x0030(0x0400) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.SlateDataSheet");
		return pStaticClass;
	}

};


// Class UMG.SlateVectorArtData
// 0x0038 (0x0060 - 0x0028)
class USlateVectorArtData : public UObject
{
public:
	TArray<struct FSlateMeshVertex>                    VertexData;                                               // 0x0028(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   IndexData;                                                // 0x0038(0x0010) (ZeroConstructor)
	class UMaterialInterface*                          Material;                                                 // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ExtentMin;                                                // 0x0050(0x0008) (IsPlainOldData)
	struct FVector2D                                   ExtentMax;                                                // 0x0058(0x0008) (IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.SlateVectorArtData");
		return pStaticClass;
	}

};


// Class UMG.Spacer
// 0x0018 (0x0118 - 0x0100)
class USpacer : public UWidget
{
public:
	struct FVector2D                                   Size;                                                     // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0108(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Spacer");
		return pStaticClass;
	}


	void SetSize(const struct FVector2D& InSize);
};


// Class UMG.SpinBox
// 0x04F8 (0x05F8 - 0x0100)
class USpinBox : public UWidget
{
public:
	float                                              Value;                                                    // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FScriptDelegate                             ValueDelegate;                                            // 0x0108(0x0010) (ZeroConstructor, InstancedReference)
	struct FSpinBoxStyle                               WidgetStyle;                                              // 0x0118(0x03D8) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x04F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              Delta;                                                    // 0x04F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SliderExponent;                                           // 0x04FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x0500(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0558(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0559(0x0003) MISSED OFFSET
	float                                              MinDesiredWidth;                                          // 0x055C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x0560(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x0561(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0562(0x0006) MISSED OFFSET
	struct FSlateColor                                 ForegroundColor;                                          // 0x0568(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x0590(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValueCommitted;                                         // 0x05A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginSliderMovement;                                    // 0x05B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndSliderMovement;                                      // 0x05C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bOverride_MinValue : 1;                                   // 0x05D0(0x0001) (Edit)
	unsigned char                                      bOverride_MaxValue : 1;                                   // 0x05D0(0x0001) (Edit)
	unsigned char                                      bOverride_MinSliderValue : 1;                             // 0x05D0(0x0001) (Edit)
	unsigned char                                      bOverride_MaxSliderValue : 1;                             // 0x05D0(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x05D1(0x0003) MISSED OFFSET
	float                                              MinValue;                                                 // 0x05D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x05D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSliderValue;                                           // 0x05DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSliderValue;                                           // 0x05E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x14];                                      // 0x05E4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.SpinBox");
		return pStaticClass;
	}


	void SetValue(float NewValue);
	void SetMinValue(float NewValue);
	void SetMinSliderValue(float NewValue);
	void SetMaxValue(float NewValue);
	void SetMaxSliderValue(float NewValue);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	float GetValue();
	float GetMinValue();
	float GetMinSliderValue();
	float GetMaxValue();
	float GetMaxSliderValue();
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
};


// Class UMG.StaticMeshWidget
// 0x0020 (0x0120 - 0x0100)
class UStaticMeshWidget : public UWidget
{
public:
	class USlateVectorArtData*                         StaticMeshAsset;                                          // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MeshScale;                                                // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0110(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.StaticMeshWidget");
		return pStaticClass;
	}

};


// Class UMG.TextBinding
// 0x0008 (0x0050 - 0x0048)
class UTextBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.TextBinding");
		return pStaticClass;
	}


	struct FText GetTextValue();
	struct FString GetStringValue();
};


// Class UMG.TextBlock
// 0x0150 (0x0278 - 0x0128)
class UTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0128(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0140(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0150(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0178(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateColor                                 SelectColorAndOpacity;                                    // 0x0188(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                                 NoSelectColorAndOpacity;                                  // 0x01B0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bHaveSelectColorAndOpacity;                               // 0x01D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSelected;                                              // 0x01D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x01DA(0x0006) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x01E0(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   ShadowOffset;                                             // 0x0238(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0240(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FScriptDelegate                             ShadowColorAndOpacityDelegate;                            // 0x0250(0x0010) (ZeroConstructor, InstancedReference)
	float                                              MinDesiredWidth;                                          // 0x0260(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AutoEllipsisText;                                         // 0x0264(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWrapWithInvalidationPanel;                               // 0x0265(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x12];                                      // 0x0266(0x0012) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.TextBlock");
		return pStaticClass;
	}


	void SetVerticalJustification(TEnumAsByte<ETextVerticalJustify> InJustification);
	void SetText(const struct FText& InText);
	void SetShadowOffset(const struct FVector2D& InShadowOffset);
	void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetSelectColor(bool bIsSelect);
	void SetOpacity(float InOpacity);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void SetAutoEllipsisText(bool InAutoEllipsisText);
	struct FText GetText();
};


// Class UMG.Throbber
// 0x00D8 (0x01D8 - 0x0100)
class UThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                           // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateHorizontally;                                     // 0x0104(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateVertically;                                       // 0x0105(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateOpacity;                                          // 0x0106(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0107(0x0001) MISSED OFFSET
	class USlateBrushAsset*                            PieceImage;                                               // 0x0108(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateBrush                                 Image;                                                    // 0x0110(0x00B8) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Throbber");
		return pStaticClass;
	}


	void SetNumberOfPieces(int InNumberOfPieces);
	void SetAnimateVertically(bool bInAnimateVertically);
	void SetAnimateOpacity(bool bInAnimateOpacity);
	void SetAnimateHorizontally(bool bInAnimateHorizontally);
};


// Class UMG.TileView
// 0x0040 (0x0140 - 0x0100)
class UTileView : public UTableViewBase
{
public:
	float                                              ItemWidth;                                                // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ItemHeight;                                               // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             Items;                                                    // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	struct FScriptDelegate                             OnGenerateTileEvent;                                      // 0x0120(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.TileView");
		return pStaticClass;
	}


	void SetItemWidth(float Width);
	void SetItemHeight(float Height);
	void RequestListRefresh();
};


// Class UMG.UMGSequencePlayer
// 0x06F8 (0x0720 - 0x0028)
class UUMGSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x348];                                     // 0x0028(0x0348) MISSED OFFSET
	class UWidgetAnimation*                            Animation;                                                // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3A8];                                     // 0x0378(0x03A8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.UMGSequencePlayer");
		return pStaticClass;
	}

};


// Class UMG.UniformGridPanel
// 0x0028 (0x0140 - 0x0118)
class UUniformGridPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0118(0x000C) MISSED OFFSET
	float                                              MinDesiredSlotWidth;                                      // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredSlotHeight;                                     // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x012C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.UniformGridPanel");
		return pStaticClass;
	}


	void SetSlotPadding(const struct FMargin& InSlotPadding);
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content);
};


// Class UMG.UniformGridSlot
// 0x0018 (0x0050 - 0x0038)
class UUniformGridSlot : public UPanelSlot
{
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	int                                                Row;                                                      // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Column;                                                   // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0044(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.UniformGridSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetRow(int InRow);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetColumn(int InColumn);
};


// Class UMG.VerticalBox
// 0x0010 (0x0128 - 0x0118)
class UVerticalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.VerticalBox");
		return pStaticClass;
	}


	void SetDontPaintWhenChildEmpty(bool Enable);
	bool GetDontPaintWhenChildEmpty();
	class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);
};


// Class UMG.VerticalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSlateChildSize                             Size;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.VerticalBoxSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.Viewport
// 0x0028 (0x0140 - 0x0118)
class UViewport : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0118(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Viewport");
		return pStaticClass;
	}


	class AActor* Spawn(class UClass* ActorClass);
	void SetViewRotation(const struct FRotator& Rotation);
	void SetViewLocation(const struct FVector& Location);
	struct FRotator GetViewRotation();
	class UWorld* GetViewportWorld();
	struct FVector GetViewLocation();
};


// Class UMG.VisibilityBinding
// 0x0000 (0x0048 - 0x0048)
class UVisibilityBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.VisibilityBinding");
		return pStaticClass;
	}


	ESlateVisibility GetValue();
};


// Class UMG.WeakRefImage
// 0x0020 (0x0298 - 0x0278)
class UWeakRefImage : public UImage
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0278(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WeakRefImage");
		return pStaticClass;
	}


	void UnloadTextureResource();
	void LoadTextureResource(bool bAsync);
};


// Class UMG.WidgetAnimation
// 0x0038 (0x0318 - 0x02E0)
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	struct FScriptMulticastDelegate                    OnAnimationStarted;                                       // 0x02E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAnimationFinished;                                      // 0x02F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UMovieScene*                                 MovieScene;                                               // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FWidgetAnimationBinding>             AnimationBindings;                                        // 0x0308(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetAnimation");
		return pStaticClass;
	}


	float GetStartTime();
	float GetEndTime();
};


// Class UMG.WidgetBinding
// 0x0000 (0x0048 - 0x0048)
class UWidgetBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetBinding");
		return pStaticClass;
	}


	class UWidget* GetValue();
};


// Class UMG.WidgetBlueprintGeneratedClass
// 0x0070 (0x0380 - 0x0310)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                                 WidgetTree;                                               // 0x0310(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowTemplate : 1;                                       // 0x0318(0x0001)
	unsigned char                                      bValidTemplate : 1;                                       // 0x0318(0x0001)
	unsigned char                                      bTemplateInitialized : 1;                                 // 0x0318(0x0001) (Transient)
	unsigned char                                      bCookedTemplate : 1;                                      // 0x0318(0x0001) (Transient)
	unsigned char                                      bClassRequiresNativeTick : 1;                             // 0x0318(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0319(0x0007) MISSED OFFSET
	TArray<struct FDelegateRuntimeBinding>             Bindings;                                                 // 0x0320(0x0010) (ZeroConstructor)
	TArray<class UWidgetAnimation*>                    Animations;                                               // 0x0330(0x0010) (ExportObject, ZeroConstructor)
	TArray<struct FName>                               NamedSlots;                                               // 0x0340(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0350(0x0028) UNKNOWN PROPERTY: SoftObjectProperty UMG.WidgetBlueprintGeneratedClass.TemplateAsset
	class UUserWidget*                                 Template;                                                 // 0x0378(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetBlueprintGeneratedClass");
		return pStaticClass;
	}

};


// Class UMG.WidgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetBlueprintLibrary");
		return pStaticClass;
	}


	struct FEventReply UnlockMouse(struct FEventReply* Reply);
	struct FEventReply Unhandled();
	struct FEventReply SetUserFocus(class UWidget* FocusWidget, bool bInAllUsers, struct FEventReply* Reply);
	struct FEventReply SetMousePosition(const struct FVector2D& NewMousePosition, struct FEventReply* Reply);
	void SetInputMode_UIOnlyEx(class APlayerController* Target, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);
	void SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
	void SetInputMode_GameOnly(class APlayerController* Target);
	void SetInputMode_GameAndUIEx(class APlayerController* Target, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
	void SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
	bool SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, const struct FName& CursorName, const struct FVector2D& HotSpot);
	void SetFocusToGameViewport();
	void SetBrushResourceToTexture(class UTexture2D* Texture, struct FSlateBrush* Brush);
	void SetBrushResourceToMaterial(class UMaterialInterface* Material, struct FSlateBrush* Brush);
	struct FEventReply ReleaseMouseCapture(struct FEventReply* Reply);
	struct FEventReply ReleaseJoystickCapture(bool bInAllJoysticks, struct FEventReply* Reply);
	struct FSlateBrush NoResourceBrush();
	struct FSlateBrush MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height);
	struct FSlateBrush MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height);
	struct FSlateBrush MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
	struct FEventReply LockMouse(class UWidget* CapturingWidget, struct FEventReply* Reply);
	bool IsDragDropping();
	struct FEventReply Handled();
	void GetSafeZonePadding(class UObject* WorldContextObject, struct FVector2D* SafePadding, struct FVector2D* SafePaddingScale, struct FVector2D* SpillOverPadding);
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event);
	struct FInputEvent GetInputEventFromPointerEvent(const struct FPointerEvent& Event);
	struct FInputEvent GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event);
	struct FInputEvent GetInputEventFromKeyEvent(const struct FKeyEvent& Event);
	struct FInputEvent GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event);
	class UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush* Brush);
	class UDragDropOperation* GetDragDroppingContent();
	class UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush* Brush);
	class UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush* Brush);
	class UObject* GetBrushResource(struct FSlateBrush* Brush);
	void GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets);
	void GetAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets);
	struct FEventReply EndDragDrop(struct FEventReply* Reply);
	void DrawTextFormatted(class UFont* Font, const struct FText& Text, const struct FVector2D& Position, const struct FLinearColor& Tint, int FontSize, const struct FName& FontTypeFace, struct FPaintContext* Context);
	void DrawText(const struct FString& inString, const struct FVector2D& Position, const struct FLinearColor& Tint, struct FPaintContext* Context);
	void DrawLines(TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, struct FPaintContext* Context);
	void DrawLine(const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, struct FPaintContext* Context);
	void DrawBox(const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint, struct FPaintContext* Context);
	void DismissAllMenus();
	struct FEventReply DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
	struct FEventReply DetectDrag(class UWidget* WidgetDetectingDrag, const struct FKey& DragKey, struct FEventReply* Reply);
	class UDragDropOperation* CreateDragDropOperation(class UClass* OperationClass);
	class UUserWidget* Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer);
	struct FEventReply ClearUserFocus(bool bInAllUsers, struct FEventReply* Reply);
	struct FEventReply CaptureMouse(class UWidget* CapturingWidget, struct FEventReply* Reply);
	struct FEventReply CaptureJoystick(class UWidget* CapturingWidget, bool bInAllJoysticks, struct FEventReply* Reply);
	void CancelDragDrop();
};


// Class UMG.WidgetInteractionComponent
// 0x0210 (0x04E0 - 0x02D0)
class UWidgetInteractionComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnHoveredWidgetChanged;                                   // 0x02D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02E0(0x0010) MISSED OFFSET
	int                                                VirtualUserIndex;                                         // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PointerIndex;                                             // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02F9(0x0003) MISSED OFFSET
	float                                              InteractionDistance;                                      // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWidgetInteractionSource                           InteractionSource;                                        // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableHitTesting;                                        // 0x0301(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDebug;                                               // 0x0302(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0303(0x0001) MISSED OFFSET
	struct FLinearColor                                DebugColor;                                               // 0x0304(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7C];                                      // 0x0314(0x007C) MISSED OFFSET
	struct FHitResult                                  CustomHitResult;                                          // 0x0390(0x0098) (Transient, IsPlainOldData)
	struct FVector2D                                   LocalHitLocation;                                         // 0x0428(0x0008) (Transient, IsPlainOldData)
	struct FVector2D                                   LastLocalHitLocation;                                     // 0x0430(0x0008) (Transient, IsPlainOldData)
	class UWidgetComponent*                            HoveredWidgetComponent;                                   // 0x0438(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FHitResult                                  LastHitResult;                                            // 0x0440(0x0098) (Transient, IsPlainOldData)
	bool                                               bIsHoveredWidgetInteractable;                             // 0x04D8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsHoveredWidgetFocusable;                                // 0x04D9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsHoveredWidgetHitTestVisible;                           // 0x04DA(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x04DB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetInteractionComponent");
		return pStaticClass;
	}


	void SetCustomHitResult(const struct FHitResult& HitResult);
	bool SendKeyChar(const struct FString& Characters, bool bRepeat);
	void ScrollWheel(float ScrollDelta);
	void ReleasePointerKey(const struct FKey& Key);
	bool ReleaseKey(const struct FKey& Key);
	void PressPointerKey(const struct FKey& Key);
	bool PressKey(const struct FKey& Key, bool bRepeat);
	bool PressAndReleaseKey(const struct FKey& Key);
	bool IsOverInteractableWidget();
	bool IsOverHitTestVisibleWidget();
	bool IsOverFocusableWidget();
	struct FHitResult GetLastHitResult();
	class UWidgetComponent* GetHoveredWidgetComponent();
	struct FVector2D Get2DHitLocation();
};


// Class UMG.WidgetLayoutLibrary
// 0x0000 (0x0028 - 0x0028)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetLayoutLibrary");
		return pStaticClass;
	}


	class UVerticalBoxSlot* SlotAsVerticalBoxSlot(class UWidget* Widget);
	class UUniformGridSlot* SlotAsUniformGridSlot(class UWidget* Widget);
	class UOverlaySlot* SlotAsOverlaySlot(class UWidget* Widget);
	class UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(class UWidget* Widget);
	class UGridSlot* SlotAsGridSlot(class UWidget* Widget);
	class UCanvasPanelSlot* SlotAsCanvasSlot(class UWidget* Widget);
	class UBorderSlot* SlotAsBorderSlot(class UWidget* Widget);
	void RemoveAllWidgets(class UObject* WorldContextObject);
	struct FVector2D ProjectWorldLocationToWidgetPositionReturnValue(class APlayerController* PlayerController, const struct FVector& WorldLocation);
	bool ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition);
	struct FGeometry GetViewportWidgetGeometry(class UObject* WorldContextObject);
	struct FVector2D GetViewportSize(class UObject* WorldContextObject);
	float GetViewportScale(class UObject* WorldContextObject);
	struct FGeometry GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);
	bool GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY);
	struct FVector2D GetMousePositionOnViewport(class UObject* WorldContextObject);
	struct FVector2D GetMousePositionOnPlatform();
};


// Class UMG.WidgetNavigation
// 0x0090 (0x00B8 - 0x0028)
class UWidgetNavigation : public UObject
{
public:
	struct FWidgetNavigationData                       Up;                                                       // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Down;                                                     // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Left;                                                     // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Right;                                                    // 0x0070(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Next;                                                     // 0x0088(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Previous;                                                 // 0x00A0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetNavigation");
		return pStaticClass;
	}

};


// Class UMG.WidgetSwitcher
// 0x0018 (0x0130 - 0x0118)
class UWidgetSwitcher : public UPanelWidget
{
public:
	bool                                               bDontPaintWhenChildEmpty;                                 // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0119(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetSwitcher");
		return pStaticClass;
	}


	void SetDontPaintWhenChildEmpty(bool Enable);
	void SetActiveWidgetIndex(int Index);
	void SetActiveWidget(class UWidget* Widget);
	class UWidget* GetWidgetAtIndex(int Index);
	int GetNumWidgets();
	bool GetDontPaintWhenChildEmpty();
	int GetActiveWidgetIndex();
	class UWidget* GetActiveWidget();
};


// Class UMG.WidgetSwitcherSlot
// 0x0020 (0x0058 - 0x0038)
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x004A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetSwitcherSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WidgetTree
// 0x0018 (0x0040 - 0x0028)
class UWidgetTree : public UObject
{
public:
	class UWidget*                                     RootWidget;                                               // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UWidget*>                             AllWidgets;                                               // 0x0030(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetTree");
		return pStaticClass;
	}

};


// Class UMG.WindowTitleBarArea
// 0x0018 (0x0130 - 0x0118)
class UWindowTitleBarArea : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0118(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WindowTitleBarArea");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WindowTitleBarAreaSlot
// 0x0028 (0x0060 - 0x0038)
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WindowTitleBarAreaSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WrapBox
// 0x0020 (0x0138 - 0x0118)
class UWrapBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0118(0x0004) MISSED OFFSET
	float                                              WrapWidth;                                                // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bExplicitWrapWidth;                                       // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0121(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WrapBox");
		return pStaticClass;
	}


	void SetInnerSlotPadding(const struct FVector2D& InPadding);
	class UWrapBoxSlot* AddChildWrapBox(class UWidget* Content);
};


// Class UMG.WrapBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bFillEmptySpace;                                          // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              FillSpanWhenLessThan;                                     // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WrapBoxSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InbFillEmptySpace);
};


}

