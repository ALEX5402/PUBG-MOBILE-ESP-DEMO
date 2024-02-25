#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Slate.ButtonWidgetStyle
// 0x0338 (0x0368 - 0x0030)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                                ButtonStyle;                                              // 0x0030(0x0338) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.ButtonWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.CheckBoxWidgetStyle
// 0x0730 (0x0760 - 0x0030)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                              CheckBoxStyle;                                            // 0x0030(0x0730) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.CheckBoxWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.ComboBoxWidgetStyle
// 0x0508 (0x0538 - 0x0030)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                              ComboBoxStyle;                                            // 0x0030(0x0508) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.ComboBoxWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.ComboButtonWidgetStyle
// 0x04D0 (0x0500 - 0x0030)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0030(0x04D0) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.ComboButtonWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.EditableTextBoxWidgetStyle
// 0x0A68 (0x0A98 - 0x0030)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0030(0x0A68) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.EditableTextBoxWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.EditableTextWidgetStyle
// 0x02B0 (0x02E0 - 0x0030)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                          EditableTextStyle;                                        // 0x0030(0x02B0) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.EditableTextWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.ProgressWidgetStyle
// 0x0230 (0x0260 - 0x0030)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                           ProgressBarStyle;                                         // 0x0030(0x0230) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.ProgressWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.ScrollBarWidgetStyle
// 0x0680 (0x06B0 - 0x0030)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0030(0x0680) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.ScrollBarWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.ScrollBoxWidgetStyle
// 0x02E8 (0x0318 - 0x0030)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           // 0x0030(0x02E8) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.ScrollBoxWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.SlateSettings
// 0x0008 (0x0030 - 0x0028)
class USlateSettings : public UObject
{
public:
	bool                                               bExplicitCanvasChildZOrder;                               // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.SlateSettings");
		return pStaticClass;
	}

};


// Class Slate.SpinBoxWidgetStyle
// 0x03D8 (0x0408 - 0x0030)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                               SpinBoxStyle;                                             // 0x0030(0x03D8) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.SpinBoxWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.TextBlockWidgetStyle
// 0x0250 (0x0280 - 0x0030)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                             TextBlockStyle;                                           // 0x0030(0x0250) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.TextBlockWidgetStyle");
		return pStaticClass;
	}

};


}

