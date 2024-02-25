#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class KantanChartsUMG.KantanChart
// 0x0050 (0x0150 - 0x0100)
class UKantanChart : public UWidget
{
public:
	struct FMargin                                     Margins;                                                  // 0x0100(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FText                                       ChartTitle;                                               // 0x0110(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     TitlePadding;                                             // 0x0128(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              UpdateTickRate;                                           // 0x0138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x013C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanChart");
		return pStaticClass;
	}


	void SetUpdateTickRate(float InRate);
	void SetMargins(const struct FMargin& InMargins);
	void SetChartTitlePadding(const struct FMargin& InPadding);
	void SetChartTitle(const struct FText& InTitle);
};


// Class KantanChartsUMG.KantanCategoryChart
// 0x0020 (0x0170 - 0x0150)
class UKantanCategoryChart : public UKantanChart
{
public:
	bool                                               bAutoPerCategoryStyles;                                   // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0151(0x0007) MISSED OFFSET
	class UKantanCategoryStyleSet*                     CategoryStyleSet;                                         // 0x0158(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FCategoryStyleManualMapping>         ManualStyleMappings;                                      // 0x0160(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanCategoryChart");
		return pStaticClass;
	}


	void AddCategoryStyleOverride(const struct FName& CategoryId, const struct FLinearColor& Color);
};


// Class KantanChartsUMG.KantanBarChartBase
// 0x01B8 (0x0328 - 0x0170)
class UKantanBarChartBase : public UKantanCategoryChart
{
public:
	struct FKantanBarChartStyle                        WidgetStyle;                                              // 0x0170(0x0158) (Edit, BlueprintVisible)
	EKantanBarChartOrientation                         Orientation;                                              // 0x02C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02C9(0x0003) MISSED OFFSET
	float                                              MaxBarValue;                                              // 0x02CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EKantanBarLabelPosition                            LabelPosition;                                            // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02D1(0x0003) MISSED OFFSET
	float                                              BarToGapRatio;                                            // 0x02D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EKantanBarValueExtents                             ValueExtentsDisplay;                                      // 0x02D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02D9(0x0007) MISSED OFFSET
	struct FCartesianAxisConfig                        ValueAxisCfg;                                             // 0x02E0(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanBarChartBase");
		return pStaticClass;
	}


	void SetValueAxisConfig(const struct FCartesianAxisConfig& InCfg);
	void SetOrientation(EKantanBarChartOrientation InOrientation);
	void SetMaxBarValue(float InMaxValue);
	void SetLabelPosition(EKantanBarLabelPosition InPosition);
	void SetExtentsDisplay(EKantanBarValueExtents InExtents);
	void SetBarToGapRatio(float InRatio);
};


// Class KantanChartsUMG.BarChart
// 0x0008 (0x0330 - 0x0328)
class UBarChart : public UKantanBarChartBase
{
public:
	class UObject*                                     DataSource;                                               // 0x0328(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.BarChart");
		return pStaticClass;
	}


	bool SetDatasource(class UObject* InDatasource);
};


// Class KantanChartsUMG.KantanCartesianChartBase
// 0x0240 (0x0390 - 0x0150)
class UKantanCartesianChartBase : public UKantanChart
{
public:
	struct FKantanCartesianChartStyle                  WidgetStyle;                                              // 0x0150(0x0158) (Edit, BlueprintVisible)
	struct FKantanCartesianPlotScale                   PlotScale;                                                // 0x02A8(0x0024) (Edit)
	TEnumAsByte<EKantanDataPointSize>                  DataPointSize;                                            // 0x02CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02CD(0x0003) MISSED OFFSET
	struct FCartesianAxisConfig                        XAxisCfg;                                                 // 0x02D0(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FCartesianAxisConfig                        YAxisCfg;                                                 // 0x0318(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     AxisTitlePadding;                                         // 0x0360(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UKantanSeriesStyleSet*                       SeriesStyleSet;                                           // 0x0370(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSeriesStyleManualMapping>           ManualStyleMappings;                                      // 0x0378(0x0010) (Edit, ZeroConstructor)
	bool                                               bAntiAlias;                                               // 0x0388(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0389(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanCartesianChartBase");
		return pStaticClass;
	}


	void SetYAxisConfig(const struct FCartesianAxisConfig& InCfg);
	void SetXAxisConfig(const struct FCartesianAxisConfig& InCfg);
	void SetPlotScaleByRange(const struct FCartesianAxisRange& InRangeX, const struct FCartesianAxisRange& InRangeY);
	void SetPlotScale(const struct FVector2D& inScale, const struct FVector2D& InFocalCoords);
	void SetDataPointSize(TEnumAsByte<EKantanDataPointSize> InSize);
	void SetAxisTitlePadding(const struct FMargin& InPadding);
	void EnableSeries(const struct FName& ID, bool bEnable);
	void ConfigureSeries(const struct FName& ID, bool bDrawPoints, bool bDrawLines);
	void AddSeriesStyleOverride(const struct FName& SeriesId, class UKantanPointStyle* PointStyle, const struct FLinearColor& Color);
};


// Class KantanChartsUMG.KantanCartesianPlotBase
// 0x0000 (0x0390 - 0x0390)
class UKantanCartesianPlotBase : public UKantanCartesianChartBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanCartesianPlotBase");
		return pStaticClass;
	}

};


// Class KantanChartsUMG.CartesianPlot
// 0x0008 (0x0398 - 0x0390)
class UCartesianPlot : public UKantanCartesianPlotBase
{
public:
	class UObject*                                     DataSource;                                               // 0x0390(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.CartesianPlot");
		return pStaticClass;
	}


	bool SetDatasource(class UObject* InDatasource);
};


// Class KantanChartsUMG.KantanChartLegend
// 0x00F8 (0x01F8 - 0x0100)
class UKantanChartLegend : public UWidget
{
public:
	struct FMargin                                     Margins;                                                  // 0x0100(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FMargin                                     SeriesPadding;                                            // 0x0110(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSlateBrush                                 Background;                                               // 0x0120(0x00B8) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                FontSize;                                                 // 0x01D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UKantanCartesianChartBase>    Chart;                                                    // 0x01DC(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x01E4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanChartLegend");
		return pStaticClass;
	}


	void SetSeriesPadding(const struct FMargin& InPadding);
	void SetMargins(const struct FMargin& InMargins);
	void SetFontSize(int InFontSize);
	void SetChart(class UKantanCartesianChartBase* InChart);
	void SetBackground(const struct FSlateBrush& InBrush);
};


// Class KantanChartsUMG.KantanTimeSeriesPlotBase
// 0x0020 (0x03B0 - 0x0390)
class UKantanTimeSeriesPlotBase : public UKantanCartesianChartBase
{
public:
	struct FCartesianRangeBound                        LowerTimeBound;                                           // 0x0390(0x0008) (Edit)
	struct FCartesianRangeBound                        UpperTimeBound;                                           // 0x0398(0x0008) (Edit)
	struct FCartesianRangeBound                        LowerValueBound;                                          // 0x03A0(0x0008) (Edit)
	struct FCartesianRangeBound                        UpperValueBound;                                          // 0x03A8(0x0008) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanTimeSeriesPlotBase");
		return pStaticClass;
	}

};


// Class KantanChartsUMG.SimpleBarChart
// 0x0018 (0x0340 - 0x0328)
class USimpleBarChart : public UKantanBarChartBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0328(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.SimpleBarChart");
		return pStaticClass;
	}


	void BP_UpdateCategoryValue(const struct FName& ID, float Value, bool* bSuccess);
	void BP_RemoveCategory(const struct FName& ID, bool* bSuccess);
	void BP_RemoveAllCategories();
	void BP_AddCategoryWithId(const struct FName& ID, const struct FText& Name, bool* bSuccess);
	void BP_AddCategory(const struct FText& Name, struct FName* CatId);
};


// Class KantanChartsUMG.SimpleCartesianPlot
// 0x0018 (0x03A8 - 0x0390)
class USimpleCartesianPlot : public UKantanCartesianPlotBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0390(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.SimpleCartesianPlot");
		return pStaticClass;
	}


	void BP_RemoveSeries(const struct FName& ID, bool* bSuccess);
	void BP_RemoveAllSeries();
	void BP_AddSeriesWithId(const struct FName& ID, const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, bool* bSuccess);
	void BP_AddSeries(const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, struct FName* SeriesId);
	void BP_AddDatapoint(const struct FName& SeriesId, const struct FVector2D& Point, bool* bSuccess);
};


// Class KantanChartsUMG.SimpleTimeSeriesPlot
// 0x0018 (0x03C8 - 0x03B0)
class USimpleTimeSeriesPlot : public UKantanTimeSeriesPlotBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.SimpleTimeSeriesPlot");
		return pStaticClass;
	}


	void BP_RemoveSeries(const struct FName& ID, bool* bSuccess);
	void BP_RemoveAllSeries();
	void BP_AddSeriesWithId(const struct FName& ID, const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, bool* bSuccess);
	void BP_AddSeries(const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, struct FName* SeriesId);
	void BP_AddDatapointNow(const struct FName& SeriesId, float Value, bool* bSuccess);
	void BP_AddDatapoint(const struct FName& SeriesId, const struct FVector2D& Point, bool* bSuccess);
};


// Class KantanChartsUMG.TimeSeriesPlot
// 0x0008 (0x03B8 - 0x03B0)
class UTimeSeriesPlot : public UKantanTimeSeriesPlotBase
{
public:
	class UObject*                                     DataSource;                                               // 0x03B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.TimeSeriesPlot");
		return pStaticClass;
	}


	bool SetDatasource(class UObject* InDatasource);
};


}

