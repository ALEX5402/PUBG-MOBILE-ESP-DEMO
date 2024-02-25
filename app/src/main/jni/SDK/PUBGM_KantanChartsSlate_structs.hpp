#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum KantanChartsSlate.EChartAxisPosition
enum class EChartAxisPosition : uint8_t
{
	EChartAxisPosition__LeftBottom = 0,
	EChartAxisPosition__RightTop   = 1,
	EChartAxisPosition__Floating   = 2,
	EChartAxisPosition__EChartAxisPosition_MAX = 3
};


// Enum KantanChartsSlate.EKantanDataPointSize
enum class EKantanDataPointSize : uint8_t
{
	EKantanDataPointSize__Small    = 0,
	EKantanDataPointSize__Medium   = 1,
	EKantanDataPointSize__Large    = 2,
	EKantanDataPointSize__EKantanDataPointSize_MAX = 3
};


// Enum KantanChartsSlate.ECartesianRangeBoundType
enum class ECartesianRangeBoundType : uint8_t
{
	ECartesianRangeBoundType__FixedValue = 0,
	ECartesianRangeBoundType__FitToData = 1,
	ECartesianRangeBoundType__FitToDataRounded = 2,
	ECartesianRangeBoundType__ECartesianRangeBoundType_MAX = 3
};


// Enum KantanChartsSlate.ECartesianScalingType
enum class ECartesianScalingType : uint8_t
{
	ECartesianScalingType__FixedScale = 0,
	ECartesianScalingType__FixedRange = 1,
	ECartesianScalingType__ECartesianScalingType_MAX = 2
};


// Enum KantanChartsSlate.EKantanBarValueExtents
enum class EKantanBarValueExtents : uint8_t
{
	EKantanBarValueExtents__NoValueLines = 0,
	EKantanBarValueExtents__ZeroLineOnly = 1,
	EKantanBarValueExtents__ZeroAndMaxLines = 2,
	EKantanBarValueExtents__EKantanBarValueExtents_MAX = 3
};


// Enum KantanChartsSlate.EKantanBarLabelPosition
enum class EKantanBarLabelPosition : uint8_t
{
	EKantanBarLabelPosition__NoLabels = 0,
	EKantanBarLabelPosition__Standard = 1,
	EKantanBarLabelPosition__Overlaid = 2,
	EKantanBarLabelPosition__EKantanBarLabelPosition_MAX = 3
};


// Enum KantanChartsSlate.EKantanBarChartOrientation
enum class EKantanBarChartOrientation : uint8_t
{
	EKantanBarChartOrientation__Vertical = 0,
	EKantanBarChartOrientation__Horizontal = 1,
	EKantanBarChartOrientation__EKantanBarChartOrientation_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct KantanChartsSlate.KantanChartStyle
// 0x0148 (0x0150 - 0x0008)
struct FKantanChartStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Background;                                               // 0x0008(0x00B8) (Edit, BlueprintVisible)
	struct FLinearColor                                ChartLineColor;                                           // 0x00C0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ChartLineThickness;                                       // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FSlateFontInfo                              BaseFont;                                                 // 0x00D8(0x0058) (Edit, BlueprintVisible)
	int                                                TitleFontSize;                                            // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AxisDescriptionFontSize;                                  // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AxisValueFontSize;                                        // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FontColor;                                                // 0x013C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
};

// ScriptStruct KantanChartsSlate.KantanBarChartStyle
// 0x0008 (0x0158 - 0x0150)
struct FKantanBarChartStyle : public FKantanChartStyle
{
	float                                              BarOpacity;                                               // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BarOutlineOpacity;                                        // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BarOutlineThickness;                                      // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KantanChartsSlate.KantanCartesianChartStyle
// 0x0008 (0x0158 - 0x0150)
struct FKantanCartesianChartStyle : public FKantanChartStyle
{
	float                                              DataOpacity;                                              // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DataLineThickness;                                        // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
};

// ScriptStruct KantanChartsSlate.KantanCategoryStyle
// 0x0018
struct FKantanCategoryStyle
{
	struct FName                                       CategoryStyleId;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct KantanChartsSlate.KantanSeriesStyle
// 0x0020
struct FKantanSeriesStyle
{
	struct FName                                       StyleID;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UKantanPointStyle*                           PointStyle;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0010(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct KantanChartsSlate.CartesianAxisInstanceConfig
// 0x0004
struct FCartesianAxisInstanceConfig
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTitle;                                               // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowMarkers;                                             // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowLabels;                                              // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KantanChartsSlate.CartesianAxisConfig
// 0x0048
struct FCartesianAxisConfig
{
	struct FText                                       Title;                                                    // 0x0000(0x0018) (Edit)
	struct FText                                       Unit;                                                     // 0x0018(0x0018) (Edit)
	float                                              MarkerSpacing;                                            // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxValueDigits;                                           // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FCartesianAxisInstanceConfig                LeftBottomAxis;                                           // 0x0038(0x0004) (Edit)
	struct FCartesianAxisInstanceConfig                RightTopAxis;                                             // 0x003C(0x0004) (Edit)
	struct FCartesianAxisInstanceConfig                FloatingAxis;                                             // 0x0040(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct KantanChartsSlate.CartesianRangeBound
// 0x0008
struct FCartesianRangeBound
{
	ECartesianRangeBoundType                           Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FixedBoundValue;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KantanChartsSlate.CartesianAxisRange
// 0x0008
struct FCartesianAxisRange
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KantanChartsSlate.KantanCartesianPlotScale
// 0x0024
struct FKantanCartesianPlotScale
{
	ECartesianScalingType                              Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector2D                                   Scale;                                                    // 0x0004(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   FocalCoordinates;                                         // 0x000C(0x0008) (Edit, IsPlainOldData)
	struct FCartesianAxisRange                         RangeX;                                                   // 0x0014(0x0008) (Edit)
	struct FCartesianAxisRange                         RangeY;                                                   // 0x001C(0x0008) (Edit)
};

}

