#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CommonUIWidget.CommonInputBox
// 0x0000 (0x02D0 - 0x02D0)
class UCommonInputBox : public ULuaUserWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonUIWidget.CommonInputBox");
		return pStaticClass;
	}

};


// Class CommonUIWidget.CommonPopupBox
// 0x0000 (0x02D0 - 0x02D0)
class UCommonPopupBox : public ULuaUserWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonUIWidget.CommonPopupBox");
		return pStaticClass;
	}

};


// Class CommonUIWidget.CommonSearchBox
// 0x0000 (0x02D0 - 0x02D0)
class UCommonSearchBox : public ULuaUserWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonUIWidget.CommonSearchBox");
		return pStaticClass;
	}

};


}

