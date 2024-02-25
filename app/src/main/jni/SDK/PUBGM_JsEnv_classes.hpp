#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class JsEnv.DynamicDelegateProxy
// 0x0048 (0x0070 - 0x0028)
class UDynamicDelegateProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class JsEnv.DynamicDelegateProxy");
		return pStaticClass;
	}


	void Fire();
};


// Class JsEnv.ExtensionMethods
// 0x0000 (0x0028 - 0x0028)
class UExtensionMethods : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class JsEnv.ExtensionMethods");
		return pStaticClass;
	}

};


// Class JsEnv.JSAnimGeneratedClass
// 0x0060 (0x03E0 - 0x0380)
class UJSAnimGeneratedClass : public UAnimBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0380(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class JsEnv.JSAnimGeneratedClass");
		return pStaticClass;
	}

};


// Class JsEnv.JSGeneratedClass
// 0x0060 (0x0370 - 0x0310)
class UJSGeneratedClass : public UBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0310(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class JsEnv.JSGeneratedClass");
		return pStaticClass;
	}

};


// Class JsEnv.JSGeneratedFunction
// 0x0068 (0x0128 - 0x00C0)
class UJSGeneratedFunction : public UFunction
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00C0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class JsEnv.JSGeneratedFunction");
		return pStaticClass;
	}

};


// Class JsEnv.JSWidgetGeneratedClass
// 0x0060 (0x03E0 - 0x0380)
class UJSWidgetGeneratedClass : public UWidgetBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0380(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class JsEnv.JSWidgetGeneratedClass");
		return pStaticClass;
	}

};


// Class JsEnv.TypeScriptBlueprint
// 0x0000 (0x00D8 - 0x00D8)
class UTypeScriptBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class JsEnv.TypeScriptBlueprint");
		return pStaticClass;
	}

};


// Class JsEnv.TypeScriptGeneratedClass
// 0x00A0 (0x03B0 - 0x0310)
class UTypeScriptGeneratedClass : public UBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x99];                                      // 0x0310(0x0099) MISSED OFFSET
	bool                                               HasConstructor;                                           // 0x03A9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03AA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class JsEnv.TypeScriptGeneratedClass");
		return pStaticClass;
	}

};


// Class JsEnv.TypeScriptObject
// 0x0000 (0x0028 - 0x0028)
class UTypeScriptObject : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class JsEnv.TypeScriptObject");
		return pStaticClass;
	}

};


}

