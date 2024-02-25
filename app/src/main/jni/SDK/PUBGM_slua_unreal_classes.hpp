#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class slua_unreal.LuaInstancedActorComponent
// 0x0080 (0x0190 - 0x0110)
class ULuaInstancedActorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0110(0x0068) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0178(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaInstancedActorComponent");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void RegistLuaTick(float TickInterval);
};


// Class slua_unreal.LuaActor
// 0x00C8 (0x04B8 - 0x03F0)
class ALuaActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x03F0(0x0060) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0450(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x04A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaActor");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void RegistLuaTick(float TickInterval);
};


// Class slua_unreal.LuaActorComponent
// 0x00C8 (0x01D8 - 0x0110)
class ULuaActorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0110(0x0060) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0170(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x01C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaActorComponent");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void RegistLuaTick(float TickInterval);
};


// Class slua_unreal.LuaGameMode
// 0x0070 (0x0530 - 0x04C0)
class ALuaGameMode : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x04C0(0x0060) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0520(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaGameMode");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaGameState
// 0x00C0 (0x0510 - 0x0450)
class ALuaGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0450(0x0060) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x04B0(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0500(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaGameState");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaPlayerState
// 0x00C0 (0x0540 - 0x0480)
class ALuaPlayerState : public APlayerState
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0480(0x0060) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x04E0(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0530(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaPlayerState");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaPlayerController
// 0x00C0 (0x0818 - 0x0758)
class ALuaPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0758(0x0060) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x07B8(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0808(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaPlayerController");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaUserWidget
// 0x0070 (0x02D0 - 0x0260)
class ULuaUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0260(0x0060) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x02C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaUserWidget");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaObject
// 0x0078 (0x00A0 - 0x0028)
class ULuaObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaObject");
		return pStaticClass;
	}

};


// Class slua_unreal.LatentDelegate
// 0x0008 (0x0030 - 0x0028)
class ULatentDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LatentDelegate");
		return pStaticClass;
	}


	void OnLatentCallback(int threadRef);
};


// Class slua_unreal.LuaDelegate
// 0x0010 (0x0038 - 0x0028)
class ULuaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaDelegate");
		return pStaticClass;
	}


	void EventTrigger();
};


// Class slua_unreal.LuaLevelScriptActor
// 0x0078 (0x0468 - 0x03F0)
class ALuaLevelScriptActor : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x03F0(0x0060) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0450(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0460(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaLevelScriptActor");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void RegistLuaTick(float TickInterval);
};


// Class slua_unreal.LuaOverrider
// 0x0000 (0x0028 - 0x0028)
class ULuaOverrider : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaOverrider");
		return pStaticClass;
	}


	void TriggerAnimNotify();
	void InputVectorAxis(const struct FVector& AxisValue);
	void InputTouch(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void InputGesture(float Value);
	void InputAxis(float AxisValue);
	void InputAction(const struct FKey& Key);
};


// Class slua_unreal.InstancedLuaInterface
// 0x0000 (0x0028 - 0x0028)
class UInstancedLuaInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.InstancedLuaInterface");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaOverriderInterface
// 0x0000 (0x0028 - 0x0028)
class ULuaOverriderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaOverriderInterface");
		return pStaticClass;
	}


	struct FString GetLuaFilePath();
};


// Class slua_unreal.SluaBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class USluaBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.SluaBlueprintLibrary");
		return pStaticClass;
	}


	struct FString GetStringFromVar(const struct FSluaBPVar& Value, int Index);
	class UObject* GetObjectFromVar(const struct FSluaBPVar& Value, int Index);
	float GetNumberFromVar(const struct FSluaBPVar& Value, int Index);
	int GetIntFromVar(const struct FSluaBPVar& Value, int Index);
	bool GetBoolFromVar(const struct FSluaBPVar& Value, int Index);
	struct FSluaBPVar CreateVarFromString(const struct FString& Value);
	struct FSluaBPVar CreateVarFromObject(class UObject* WorldContextObject, class UObject* Value);
	struct FSluaBPVar CreateVarFromNumber(float Value);
	struct FSluaBPVar CreateVarFromInt(int Value);
	struct FSluaBPVar CreateVarFromBool(bool Value);
	struct FSluaBPVar CallToLuaWithArgs(class UObject* WorldContextObject, const struct FString& FunctionName, TArray<struct FSluaBPVar> Args, const struct FString& StateName);
	struct FSluaBPVar CallToLua(class UObject* WorldContextObject, const struct FString& FunctionName, const struct FString& StateName);
};


}

