#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked      = 0,
	ECheckBoxState__Checked        = 1,
	ECheckBoxState__Undetermined   = 2,
	ECheckBoxState__ECheckBoxState_MAX = 3
};


// Enum SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8_t
{
	EWidgetClipping__Inherit       = 0,
	EWidgetClipping__ClipToBounds  = 1,
	EWidgetClipping__ClipToBoundsWithoutIntersecting = 2,
	EWidgetClipping__ClipToBoundsAlways = 3,
	EWidgetClipping__OnDemand      = 4,
	EWidgetClipping__EWidgetClipping_MAX = 5
};


// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage  = 0,
	ESlateBrushImageType__FullColor = 1,
	ESlateBrushImageType__Linear   = 2,
	ESlateBrushImageType__ESlateBrushImageType_MAX = 3
};


// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror = 0,
	ESlateBrushMirrorType__Horizontal = 1,
	ESlateBrushMirrorType__Vertical = 2,
	ESlateBrushMirrorType__Both    = 3,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX = 4
};


// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile    = 0,
	ESlateBrushTileType__Horizontal = 1,
	ESlateBrushTileType__Vertical  = 2,
	ESlateBrushTileType__Both      = 3,
	ESlateBrushTileType__ESlateBrushTileType_MAX = 4
};


// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType = 0,
	ESlateBrushDrawType__Box       = 1,
	ESlateBrushDrawType__Border    = 2,
	ESlateBrushDrawType__Image     = 3,
	ESlateBrushDrawType__HollowBox = 4,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX = 5
};


// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified = 0,
	ESlateColorStylingMode__UseColor_Specified_Link = 1,
	ESlateColorStylingMode__UseColor_Foreground = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued = 3,
	ESlateColorStylingMode__UseColor_MAX = 4
};


// Enum SlateCore.EWidgetVisible
enum class EWidgetVisible : uint8_t
{
	EWidgetVisible__Default        = 0,
	EWidgetVisible__ForceNotVisible = 1,
	EWidgetVisible__ForceVisible   = 2,
	EWidgetVisible__MaxVisible     = 3,
	EWidgetVisible__EWidgetVisible_MAX = 4
};


// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape      = 0,
	EUINavigationRule__Explicit    = 1,
	EUINavigationRule__Wrap        = 2,
	EUINavigationRule__Stop        = 3,
	EUINavigationRule__Custom      = 4,
	EUINavigationRule__Invalid     = 5,
	EUINavigationRule__EUINavigationRule_MAX = 6
};


// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8_t
{
	EUINavigation__Left            = 0,
	EUINavigation__Right           = 1,
	EUINavigation__Up              = 2,
	EUINavigation__Down            = 3,
	EUINavigation__Next            = 4,
	EUINavigation__Previous        = 5,
	EUINavigation__Num             = 6,
	EUINavigation__Invalid         = 7,
	EUINavigation__EUINavigation_MAX = 8
};


// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp  = 0,
	EButtonClickMethod__MouseDown  = 1,
	EButtonClickMethod__MouseUp    = 2,
	EButtonClickMethod__PreciseClick = 3,
	EButtonClickMethod__EButtonClickMethod_MAX = 4
};


// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp  = 0,
	EButtonTouchMethod__PreciseTap = 1,
	EButtonTouchMethod__EButtonTouchMethod_MAX = 2
};


// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress        = 0,
	ESelectInfo__OnNavigation      = 1,
	ESelectInfo__OnMouseClick      = 2,
	ESelectInfo__Direct            = 3,
	ESelectInfo__ESelectInfo_MAX   = 4
};


// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{
	ETextCommit__Default           = 0,
	ETextCommit__OnEnter           = 1,
	ETextCommit__OnUserMovedFocus  = 2,
	ETextCommit__OnCleared         = 3,
	ETextCommit__ETextCommit_MAX   = 4
};


// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8_t
{
	ETextShapingMethod__Auto       = 0,
	ETextShapingMethod__KerningOnly = 1,
	ETextShapingMethod__FullShaping = 2,
	ETextShapingMethod__ETextShapingMethod_MAX = 3
};


// Enum SlateCore.EOrientation
enum class EOrientation : uint8_t
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2
};


// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible = 0,
	EConsumeMouseWheel__Always     = 1,
	EConsumeMouseWheel__Never      = 2,
	EConsumeMouseWheel__EConsumeMouseWheel_MAX = 3
};


// Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8_t
{
	EFontLayoutMethod__Metrics     = 0,
	EFontLayoutMethod__BoundingBox = 1,
	EFontLayoutMethod__EFontLayoutMethod_MAX = 2
};


// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8_t
{
	EFontLoadingPolicy__LazyLoad   = 0,
	EFontLoadingPolicy__Stream     = 1,
	EFontLoadingPolicy__Inline     = 2,
	EFontLoadingPolicy__EFontLoadingPolicy_MAX = 3
};


// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{
	EFontHinting__Default          = 0,
	EFontHinting__Auto             = 1,
	EFontHinting__AutoLight        = 2,
	EFontHinting__Monochrome       = 3,
	EFontHinting__None             = 4,
	EFontHinting__EFontHinting_MAX = 5
};


// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8_t
{
	EFocusCause__Mouse             = 0,
	EFocusCause__Navigation        = 1,
	EFocusCause__SetDirectly       = 2,
	EFocusCause__Cleared           = 3,
	EFocusCause__OtherWidgetLostFocus = 4,
	EFocusCause__WindowActivate    = 5,
	EFocusCause__EFocusCause_MAX   = 6
};


// Enum SlateCore.EHitTestAreaPolicyType
enum class EHitTestAreaPolicyType : uint8_t
{
	EHitTestAreaPolicyType__UnknowType = 0,
	EHitTestAreaPolicyType__CircularHitTestArea = 1,
	EHitTestAreaPolicyType__EHitTestAreaPolicyType_MAX = 2
};


// Enum SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : uint8_t
{
	ESlateDebuggingFocusEvent__FocusChanging = 0,
	ESlateDebuggingFocusEvent__FocusLost = 1,
	ESlateDebuggingFocusEvent__FocusReceived = 2,
	ESlateDebuggingFocusEvent__ESlateDebuggingFocusEvent_MAX = 3
};


// Enum SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8_t
{
	ESlateDebuggingNavigationMethod__Unknown = 0,
	ESlateDebuggingNavigationMethod__Explicit = 1,
	ESlateDebuggingNavigationMethod__CustomDelegateBound = 2,
	ESlateDebuggingNavigationMethod__CustomDelegateUnbound = 3,
	ESlateDebuggingNavigationMethod__NextOrPrevious = 4,
	ESlateDebuggingNavigationMethod__HitTestGrid = 5,
	ESlateDebuggingNavigationMethod__ESlateDebuggingNavigationMethod_MAX = 6
};


// Enum SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : uint8_t
{
	ESlateDebuggingStateChangeEvent__MouseCaptureGained = 0,
	ESlateDebuggingStateChangeEvent__MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent__ESlateDebuggingStateChangeEvent_MAX = 2
};


// Enum SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : uint8_t
{
	ESlateDebuggingInputEvent__MouseMove = 0,
	ESlateDebuggingInputEvent__MouseEnter = 1,
	ESlateDebuggingInputEvent__MouseLeave = 2,
	ESlateDebuggingInputEvent__MouseButtonDown = 3,
	ESlateDebuggingInputEvent__MouseButtonUp = 4,
	ESlateDebuggingInputEvent__MouseButtonDoubleClick = 5,
	ESlateDebuggingInputEvent__MouseWheel = 6,
	ESlateDebuggingInputEvent__TouchStart = 7,
	ESlateDebuggingInputEvent__TouchEnd = 8,
	ESlateDebuggingInputEvent__DragDetected = 9,
	ESlateDebuggingInputEvent__DragEnter = 10,
	ESlateDebuggingInputEvent__DragLeave = 11,
	ESlateDebuggingInputEvent__DragOver = 12,
	ESlateDebuggingInputEvent__DragDrop = 13,
	ESlateDebuggingInputEvent__DropMessage = 14,
	ESlateDebuggingInputEvent__KeyDown = 15,
	ESlateDebuggingInputEvent__KeyUp = 16,
	ESlateDebuggingInputEvent__KeyChar = 17,
	ESlateDebuggingInputEvent__AnalogInput = 18,
	ESlateDebuggingInputEvent__TouchGesture = 19,
	ESlateDebuggingInputEvent__COUNT = 20,
	ESlateDebuggingInputEvent__ESlateDebuggingInputEvent_MAX = 21
};


// Enum SlateCore.EBlurType
enum class EBlurType : uint8_t
{
	BlurType_None                  = 0,
	BlurType_Default               = 1,
	BlurType_Directional           = 2,
	BlurType_Radial                = 3,
	BlurType_Rotate                = 4,
	BlurType_AlphaOnly             = 5,
	BlurType_MAX                   = 6
};


// Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2
};


// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox         = 3,
	MenuPlacement_ComboBoxRight    = 4,
	MenuPlacement_MenuRight        = 5,
	MenuPlacement_AboveAnchor      = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft         = 9,
	MenuPlacement_Center           = 10,
	MenuPlacement_RightLeftCenter  = 11,
	MenuPlacement_MatchBottomLeft  = 12,
	MenuPlacement_ComboBoxAbove    = 13,
	MenuPlacement_MAX              = 14
};


// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4
};


// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4
};


// Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8_t
{
	ENavigationGenesis__Keyboard   = 0,
	ENavigationGenesis__Controller = 1,
	ENavigationGenesis__User       = 2,
	ENavigationGenesis__ENavigationGenesis_MAX = 3
};


// Enum SlateCore.ENavigationSource
enum class ENavigationSource : uint8_t
{
	ENavigationSource__FocusedWidget = 0,
	ENavigationSource__WidgetUnderCursor = 1,
	ENavigationSource__ENavigationSource_MAX = 2
};


// Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp  = 0,
	EButtonPressMethod__ButtonPress = 1,
	EButtonPressMethod__ButtonRelease = 2,
	EButtonPressMethod__EButtonPressMethod_MAX = 3
};


// Enum SlateCore.EFontFallback
enum class EFontFallback : uint8_t
{
	EFontFallback__FF_NoFallback   = 0,
	EFontFallback__FF_LocalizedFallback = 1,
	EFontFallback__FF_LastResortFallback = 2,
	EFontFallback__FF_Max          = 3
};


// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox   = 0,
	ESlateCheckBoxType__ToggleButton = 1,
	ESlateCheckBoxType__ESlateCheckBoxType_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SlateCore.Margin
// 0x0010
struct FMargin
{
	float                                              Left;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Top;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bottom;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.Geometry
// 0x0038
struct FGeometry
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateColor
// 0x0028
struct FSlateColor
{
	struct FLinearColor                                SpecifiedColor;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<ESlateColorStylingMode>                ColorUseRule;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0011(0x0017) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateBrush
// 0x00B8
struct FSlateBrush
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FVector2D                                   ImageSize;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FSlateColor                                 TintColor;                                                // 0x0020(0x0028) (Edit, BlueprintVisible)
	bool                                               bAsyncEnabled;                                            // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlySoftInEditor;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	class UObject*                                     ResourceObject;                                           // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty SlateCore.SlateBrush.SoftResourceObject
	struct FName                                       ResourceName;                                             // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FBox2D                                      UVRegion;                                                 // 0x0088(0x0014)
	TEnumAsByte<ESlateBrushDrawType>                   DrawAs;                                                   // 0x009C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushTileType>                   Tiling;                                                   // 0x009D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushMirrorType>                 Mirroring;                                                // 0x009E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushImageType>                  ImageType;                                                // 0x009F(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET
	unsigned char                                      bIsDynamicallyLoaded : 1;                                 // 0x00B0(0x0001)
	unsigned char                                      bHasUObject : 1;                                          // 0x00B0(0x0001) (Deprecated)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct SlateCore.InputEvent
// 0x0020
struct FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.PointerEvent
// 0x0058 (0x0078 - 0x0020)
struct FPointerEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0020(0x0058) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateWidgetStyle
// 0x0008
struct FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateSound
// 0x0018
struct FSlateSound
{
	class UObject*                                     ResourceObject;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct SlateCore.ButtonStyle
// 0x0330 (0x0338 - 0x0008)
struct FButtonStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Normal;                                                   // 0x0008(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Hovered;                                                  // 0x00C0(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Pressed;                                                  // 0x0178(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Disabled;                                                 // 0x0230(0x00B8) (Edit, BlueprintVisible)
	struct FMargin                                     NormalPadding;                                            // 0x02E8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FMargin                                     PressedPadding;                                           // 0x02F8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x0308(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x0320(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.FontOutlineSettings
// 0x0028
struct FFontOutlineSettings
{
	int                                                OutlineSize;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UObject*                                     OutlineMaterial;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutlineColor;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bSeparateFillAlpha;                                       // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateFontInfo
// 0x0058
struct FSlateFontInfo
{
	class UObject*                                     FontObject;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     FontMaterial;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFontOutlineSettings                        OutlineSettings;                                          // 0x0010(0x0028) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	struct FName                                       TypefaceFontName;                                         // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBold;                                                   // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
};

// ScriptStruct SlateCore.TableRowStyle
// 0x08F0 (0x08F8 - 0x0008)
struct FTableRowStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SelectorFocusedBrush;                                     // 0x0008(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveHoveredBrush;                                       // 0x00C0(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveBrush;                                              // 0x0178(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveHoveredBrush;                                     // 0x0230(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveBrush;                                            // 0x02E8(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 EvenRowBackgroundHoveredBrush;                            // 0x03A0(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 EvenRowBackgroundBrush;                                   // 0x0458(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OddRowBackgroundHoveredBrush;                             // 0x0510(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OddRowBackgroundBrush;                                    // 0x05C8(0x00B8) (Edit, BlueprintVisible)
	struct FSlateColor                                 TextColor;                                                // 0x0680(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 SelectedTextColor;                                        // 0x06A8(0x0028) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Above;                                      // 0x06D0(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Onto;                                       // 0x0788(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Below;                                      // 0x0840(0x00B8) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ComboButtonStyle
// 0x04C8 (0x04D0 - 0x0008)
struct FComboButtonStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                ButtonStyle;                                              // 0x0008(0x0338) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DownArrowImage;                                           // 0x0340(0x00B8) (Edit, BlueprintVisible)
	float                                              ArrowPaddingLeft;                                         // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArrowPaddingRight;                                        // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArrowPaddingTop;                                          // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArrowPaddingBottom;                                       // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 MenuBorderBrush;                                          // 0x0408(0x00B8) (Edit, BlueprintVisible)
	struct FMargin                                     MenuBorderPadding;                                        // 0x04C0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct SlateCore.ComboBoxStyle
// 0x0500 (0x0508 - 0x0008)
struct FComboBoxStyle : public FSlateWidgetStyle
{
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0008(0x04D0) (Edit, BlueprintVisible)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x04D8(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 SelectionChangeSlateSound;                                // 0x04F0(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.EditableTextStyle
// 0x02A8 (0x02B0 - 0x0008)
struct FEditableTextStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0058) (Edit, BlueprintVisible)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0060(0x0028) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageSelected;                                  // 0x0088(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageComposing;                                 // 0x0140(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CaretImage;                                               // 0x01F8(0x00B8) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ScrollBarStyle
// 0x0678 (0x0680 - 0x0008)
struct FScrollBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HorizontalBackgroundImage;                                // 0x0008(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalBackgroundImage;                                  // 0x00C0(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalTopSlotImage;                                     // 0x0178(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HorizontalTopSlotImage;                                   // 0x0230(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalBottomSlotImage;                                  // 0x02E8(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HorizontalBottomSlotImage;                                // 0x03A0(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x0458(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredThumbImage;                                        // 0x0510(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DraggedThumbImage;                                        // 0x05C8(0x00B8) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.EditableTextBoxStyle
// 0x0A60 (0x0A68 - 0x0008)
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImageNormal;                                    // 0x0008(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageHovered;                                   // 0x00C0(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageFocused;                                   // 0x0178(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageReadOnly;                                  // 0x0230(0x00B8) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x02E8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x02F8(0x0058) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0350(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 BackgroundColor;                                          // 0x0378(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 ReadOnlyForegroundColor;                                  // 0x03A0(0x0028) (Edit, BlueprintVisible)
	struct FMargin                                     HScrollBarPadding;                                        // 0x03C8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FMargin                                     VScrollBarPadding;                                        // 0x03D8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x03E8(0x0680) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.TextBlockStyle
// 0x0248 (0x0250 - 0x0008)
struct FTextBlockStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0058) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0068(0x0028) (Edit, BlueprintVisible)
	struct FVector2D                                   ShadowOffset;                                             // 0x0090(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0098(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FSlateColor                                 SelectedBackgroundColor;                                  // 0x00A8(0x0028) (Edit)
	struct FLinearColor                                HighlightColor;                                           // 0x00D0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FSlateBrush                                 HighlightShape;                                           // 0x00E0(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UnderlineBrush;                                           // 0x0198(0x00B8) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SpinBoxStyle
// 0x03D0 (0x03D8 - 0x0008)
struct FSpinBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0008(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredBackgroundBrush;                                   // 0x00C0(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveFillBrush;                                          // 0x0178(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveFillBrush;                                        // 0x0230(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ArrowsImage;                                              // 0x02E8(0x00B8) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x03A0(0x0028)
	struct FMargin                                     TextPadding;                                              // 0x03C8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct SlateCore.ScrollBoxStyle
// 0x02E0 (0x02E8 - 0x0008)
struct FScrollBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                           // 0x0008(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BottomShadowBrush;                                        // 0x00C0(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 LeftShadowBrush;                                          // 0x0178(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 RightShadowBrush;                                         // 0x0230(0x00B8) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.FocusEvent
// 0x0008
struct FFocusEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.KeyEvent
// 0x0020 (0x0040 - 0x0020)
struct FKeyEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.AnalogInputEvent
// 0x0008 (0x0048 - 0x0040)
struct FAnalogInputEvent : public FKeyEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.CharacterEvent
// 0x0008 (0x0028 - 0x0020)
struct FCharacterEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.MotionEvent
// 0x0030 (0x0050 - 0x0020)
struct FMotionEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0020(0x0030) MISSED OFFSET
};

// ScriptStruct SlateCore.WAnimTime
// 0x0010
struct FWAnimTime
{
	float                                              PlayTime_2;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayTime_3;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayTime_4;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayTime_5;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.FontData
// 0x0020
struct FFontData
{
	struct FString                                     FontFilename;                                             // 0x0000(0x0010) (ZeroConstructor)
	EFontHinting                                       Hinting;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	EFontLoadingPolicy                                 LoadingPolicy;                                            // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	class UObject*                                     FontFaceAsset;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.TypefaceEntry
// 0x0028
struct FTypefaceEntry
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FFontData                                   Font;                                                     // 0x0008(0x0020)
};

// ScriptStruct SlateCore.Typeface
// 0x0010
struct FTypeface
{
	TArray<struct FTypefaceEntry>                      Fonts;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct SlateCore.CompositeSubFont
// 0x0028
struct FCompositeSubFont
{
	struct FTypeface                                   Typeface;                                                 // 0x0000(0x0010)
	TArray<struct FInt32Range>                         CharacterRanges;                                          // 0x0010(0x0010) (ZeroConstructor)
	float                                              ScalingFactor;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.CompositeFont
// 0x0020
struct FCompositeFont
{
	struct FTypeface                                   DefaultTypeface;                                          // 0x0000(0x0010)
	TArray<struct FCompositeSubFont>                   SubTypefaces;                                             // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct SlateCore.NavigationEvent
// 0x0008 (0x0028 - 0x0020)
struct FNavigationEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.WindowStyle
// 0x1488 (0x1490 - 0x0008)
struct FWindowStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                MinimizeButtonStyle;                                      // 0x0008(0x0338) (Edit, BlueprintVisible)
	struct FButtonStyle                                MaximizeButtonStyle;                                      // 0x0340(0x0338) (Edit, BlueprintVisible)
	struct FButtonStyle                                RestoreButtonStyle;                                       // 0x0678(0x0338) (Edit, BlueprintVisible)
	struct FButtonStyle                                CloseButtonStyle;                                         // 0x09B0(0x0338) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TitleTextStyle;                                           // 0x0CE8(0x0250) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveTitleBrush;                                         // 0x0F38(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveTitleBrush;                                       // 0x0FF0(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 FlashTitleBrush;                                          // 0x10A8(0x00B8) (Edit, BlueprintVisible)
	struct FSlateColor                                 BackgroundColor;                                          // 0x1160(0x0028) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OutlineBrush;                                             // 0x1188(0x00B8) (Edit, BlueprintVisible)
	struct FSlateColor                                 OutlineColor;                                             // 0x1240(0x0028) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BorderBrush;                                              // 0x1268(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x1320(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ChildBackgroundBrush;                                     // 0x13D8(0x00B8) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ScrollBorderStyle
// 0x0170 (0x0178 - 0x0008)
struct FScrollBorderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                           // 0x0008(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BottomShadowBrush;                                        // 0x00C0(0x00B8) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.DockTabStyle
// 0x0938 (0x0940 - 0x0008)
struct FDockTabStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                CloseButtonStyle;                                         // 0x0008(0x0338) (Edit)
	struct FSlateBrush                                 NormalBrush;                                              // 0x0340(0x00B8) (Edit)
	struct FSlateBrush                                 ActiveBrush;                                              // 0x03F8(0x00B8) (Edit)
	struct FSlateBrush                                 ColorOverlayTabBrush;                                     // 0x04B0(0x00B8) (Edit)
	struct FSlateBrush                                 ColorOverlayIconBrush;                                    // 0x0568(0x00B8) (Edit)
	struct FSlateBrush                                 ForegroundBrush;                                          // 0x0620(0x00B8) (Edit)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x06D8(0x00B8) (Edit)
	struct FSlateBrush                                 ContentAreaBrush;                                         // 0x0790(0x00B8) (Edit)
	struct FSlateBrush                                 TabWellBrush;                                             // 0x0848(0x00B8) (Edit)
	struct FMargin                                     TabPadding;                                               // 0x0900(0x0010) (Edit, IsPlainOldData)
	float                                              OverlapWidth;                                             // 0x0910(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0914(0x0004) MISSED OFFSET
	struct FSlateColor                                 FlashColor;                                               // 0x0918(0x0028) (Edit)
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// 0x0678 (0x0680 - 0x0008)
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SortPrimaryAscendingImage;                                // 0x0008(0x00B8) (Edit)
	struct FSlateBrush                                 SortPrimaryDescendingImage;                               // 0x00C0(0x00B8) (Edit)
	struct FSlateBrush                                 SortSecondaryAscendingImage;                              // 0x0178(0x00B8) (Edit)
	struct FSlateBrush                                 SortSecondaryDescendingImage;                             // 0x0230(0x00B8) (Edit)
	struct FSlateBrush                                 NormalBrush;                                              // 0x02E8(0x00B8) (Edit)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x03A0(0x00B8) (Edit)
	struct FSlateBrush                                 MenuDropdownImage;                                        // 0x0458(0x00B8) (Edit)
	struct FSlateBrush                                 MenuDropdownNormalBorderBrush;                            // 0x0510(0x00B8) (Edit)
	struct FSlateBrush                                 MenuDropdownHoveredBorderBrush;                           // 0x05C8(0x00B8) (Edit)
};

// ScriptStruct SlateCore.SplitterStyle
// 0x0170 (0x0178 - 0x0008)
struct FSplitterStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HandleNormalBrush;                                        // 0x0008(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HandleHighlightBrush;                                     // 0x00C0(0x00B8) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.HeaderRowStyle
// 0x0F58 (0x0F60 - 0x0008)
struct FHeaderRowStyle : public FSlateWidgetStyle
{
	struct FTableColumnHeaderStyle                     ColumnStyle;                                              // 0x0008(0x0680) (Edit)
	struct FTableColumnHeaderStyle                     LastColumnStyle;                                          // 0x0688(0x0680) (Edit)
	struct FSplitterStyle                              ColumnSplitterStyle;                                      // 0x0D08(0x0178) (Edit)
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0E80(0x00B8) (Edit)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0F38(0x0028) (Edit)
};

// ScriptStruct SlateCore.InlineTextImageStyle
// 0x00C0 (0x00C8 - 0x0008)
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Image;                                                    // 0x0008(0x00B8) (Edit)
	int16_t                                            Baseline;                                                 // 0x00C0(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00C2(0x0006) MISSED OFFSET
};

// ScriptStruct SlateCore.SliderStyle
// 0x02E8 (0x02F0 - 0x0008)
struct FSliderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 NormalBarImage;                                           // 0x0008(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DisabledBarImage;                                         // 0x00C0(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x0178(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DisabledThumbImage;                                       // 0x0230(0x00B8) (Edit, BlueprintVisible)
	float                                              BarThickness;                                             // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.VolumeControlStyle
// 0x0688 (0x0690 - 0x0008)
struct FVolumeControlStyle : public FSlateWidgetStyle
{
	struct FSliderStyle                                SliderStyle;                                              // 0x0008(0x02F0) (Edit)
	struct FSlateBrush                                 HighVolumeImage;                                          // 0x02F8(0x00B8) (Edit)
	struct FSlateBrush                                 MidVolumeImage;                                           // 0x03B0(0x00B8) (Edit)
	struct FSlateBrush                                 LowVolumeImage;                                           // 0x0468(0x00B8) (Edit)
	struct FSlateBrush                                 NoVolumeImage;                                            // 0x0520(0x00B8) (Edit)
	struct FSlateBrush                                 MutedImage;                                               // 0x05D8(0x00B8) (Edit)
};

// ScriptStruct SlateCore.SearchBoxStyle
// 0x0DB8 (0x0DC0 - 0x0008)
struct FSearchBoxStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       TextBoxStyle;                                             // 0x0008(0x0A68) (Edit)
	struct FSlateFontInfo                              ActiveFontInfo;                                           // 0x0A70(0x0058) (Edit)
	struct FSlateBrush                                 UpArrowImage;                                             // 0x0AC8(0x00B8) (Edit)
	struct FSlateBrush                                 DownArrowImage;                                           // 0x0B80(0x00B8) (Edit)
	struct FSlateBrush                                 GlassImage;                                               // 0x0C38(0x00B8) (Edit)
	struct FSlateBrush                                 ClearImage;                                               // 0x0CF0(0x00B8) (Edit)
	struct FMargin                                     ImagePadding;                                             // 0x0DA8(0x0010) (Edit, IsPlainOldData)
	bool                                               bLeftAlignButtons;                                        // 0x0DB8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0DB9(0x0007) MISSED OFFSET
};

// ScriptStruct SlateCore.ExpandableAreaStyle
// 0x0178 (0x0180 - 0x0008)
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 CollapsedImage;                                           // 0x0008(0x00B8) (Edit)
	struct FSlateBrush                                 ExpandedImage;                                            // 0x00C0(0x00B8) (Edit)
	float                                              RolloutAnimationSeconds;                                  // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x017C(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.ProgressBarStyle
// 0x0228 (0x0230 - 0x0008)
struct FProgressBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImage;                                          // 0x0008(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 FillImage;                                                // 0x00C0(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 MarqueeImage;                                             // 0x0178(0x00B8) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// 0x0CB8 (0x0CC0 - 0x0008)
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0008(0x0A68) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0A70(0x0250) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.HyperlinkStyle
// 0x0598 (0x05A0 - 0x0008)
struct FHyperlinkStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                UnderlineStyle;                                           // 0x0008(0x0338) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0340(0x0250) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x0590(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct SlateCore.CheckBoxStyle
// 0x0728 (0x0730 - 0x0008)
struct FCheckBoxStyle : public FSlateWidgetStyle
{
	TEnumAsByte<ESlateCheckBoxType>                    CheckBoxType;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FSlateBrush                                 UncheckedImage;                                           // 0x0010(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UncheckedHoveredImage;                                    // 0x00C8(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UncheckedPressedImage;                                    // 0x0180(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedImage;                                             // 0x0238(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedHoveredImage;                                      // 0x02F0(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedPressedImage;                                      // 0x03A8(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedImage;                                        // 0x0460(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedHoveredImage;                                 // 0x0518(0x00B8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedPressedImage;                                 // 0x05D0(0x00B8) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x0688(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0698(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 BorderBackgroundColor;                                    // 0x06C0(0x0028) (Edit, BlueprintVisible)
	struct FSlateSound                                 CheckedSlateSound;                                        // 0x06E8(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 UncheckedSlateSound;                                      // 0x0700(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x0718(0x0018) (Edit, BlueprintVisible)
};

}

