#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SlateCore.FontBulkData
// 0x0098 (0x00C0 - 0x0028)
class UFontBulkData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SlateCore.FontBulkData");
		return pStaticClass;
	}

};


// Class SlateCore.FontFaceInterface
// 0x0000 (0x0028 - 0x0028)
class UFontFaceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SlateCore.FontFaceInterface");
		return pStaticClass;
	}

};


// Class SlateCore.FontProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UFontProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SlateCore.FontProviderInterface");
		return pStaticClass;
	}

};


// Class SlateCore.SlateTypes
// 0x0000 (0x0028 - 0x0028)
class USlateTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SlateCore.SlateTypes");
		return pStaticClass;
	}

};


// Class SlateCore.SlateWidgetStyleAsset
// 0x0008 (0x0030 - 0x0028)
class USlateWidgetStyleAsset : public UObject
{
public:
	class USlateWidgetStyleContainerBase*              CustomStyle;                                              // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SlateCore.SlateWidgetStyleAsset");
		return pStaticClass;
	}

};


// Class SlateCore.SlateWidgetStyleContainerBase
// 0x0008 (0x0030 - 0x0028)
class USlateWidgetStyleContainerBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerBase");
		return pStaticClass;
	}

};


// Class SlateCore.SlateWidgetStyleContainerInterface
// 0x0000 (0x0028 - 0x0028)
class USlateWidgetStyleContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerInterface");
		return pStaticClass;
	}

};


}

