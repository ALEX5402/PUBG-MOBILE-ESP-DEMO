#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UAESharedModule.OwnBlackboardInterface
// 0x0000 (0x0028 - 0x0028)
class UOwnBlackboardInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAESharedModule.OwnBlackboardInterface");
		return pStaticClass;
	}


	TArray<struct FUAEBlackboardParameter> GetOwnBlackboardParameter();
	class UUAEBlackboard* GetOwnBlackboard();
};


// Class UAESharedModule.UAEBlackboardBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UUAEBlackboardBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAESharedModule.UAEBlackboardBlueprintFunctionLibrary");
		return pStaticClass;
	}


	void SetValueAsWeakObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	void SetValueAsVector(const struct FUAEBlackboardKeySelector& Key, const struct FVector& VectorValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	void SetValueAsString(const struct FUAEBlackboardKeySelector& Key, const struct FString& StringValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	void SetValueAsRotator(const struct FUAEBlackboardKeySelector& Key, const struct FRotator& RotatorValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	void SetValueAsObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	void SetValueAsName(const struct FUAEBlackboardKeySelector& Key, const struct FName& NameValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	void SetValueAsInt(const struct FUAEBlackboardKeySelector& Key, int IntValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	void SetValueAsFloat(const struct FUAEBlackboardKeySelector& Key, float FloatValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	void SetValueAsEnum(const struct FUAEBlackboardKeySelector& Key, unsigned char EnumValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	void SetValueAsClass(const struct FUAEBlackboardKeySelector& Key, class UClass* ClassValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	void SetValueAsBool(const struct FUAEBlackboardKeySelector& Key, bool BoolValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	bool IsExistWeakObject(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistVector(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistString(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistRotator(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistObject(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistName(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistInt(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistFloat(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistEnum(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistClass(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistBool(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	class UObject* GetValueAsWeakObject(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	class AActor* GetValueAsWeakActor(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	struct FVector GetValueAsVector(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	struct FString GetValueAsString(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	struct FRotator GetValueAsRotator(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	class UObject* GetValueAsObject(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	struct FName GetValueAsName(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	int GetValueAsInt(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	float GetValueAsFloat(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	unsigned char GetValueAsEnum(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	class UClass* GetValueAsClass(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	bool GetValueAsBool(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	class AActor* GetValueAsActor(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	void FillBlackboardByBlackboard(struct FUAEBlackboardContainer* UAEBlackboardContainer, struct FUAEBlackboardContainer* OtherUAEBlackboardContainer);
	void FillBlackboard(TArray<struct FUAEBlackboardParameter> ParamList, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	void AddValueByParam(const struct FUAEBlackboardParameter& NewParam, struct FUAEBlackboardContainer* UAEBlackboardContainer);
};


// Class UAESharedModule.UAEBlackboard
// 0x03C0 (0x03E8 - 0x0028)
class UUAEBlackboard : public UObject
{
public:
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   // 0x0028(0x03C0)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAESharedModule.UAEBlackboard");
		return pStaticClass;
	}


	void SetValueAsWeakObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue);
	void SetValueAsVector(const struct FUAEBlackboardKeySelector& Key, const struct FVector& VectorValue);
	void SetValueAsString(const struct FUAEBlackboardKeySelector& Key, const struct FString& StringValue);
	void SetValueAsRotator(const struct FUAEBlackboardKeySelector& Key, const struct FRotator& VectorValue);
	void SetValueAsObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue);
	void SetValueAsName(const struct FUAEBlackboardKeySelector& Key, const struct FName& NameValue);
	void SetValueAsInt(const struct FUAEBlackboardKeySelector& Key, int IntValue);
	void SetValueAsFloat(const struct FUAEBlackboardKeySelector& Key, float FloatValue);
	void SetValueAsEnum(const struct FUAEBlackboardKeySelector& Key, unsigned char EnumValue);
	void SetValueAsClass(const struct FUAEBlackboardKeySelector& Key, class UClass* ClassValue);
	void SetValueAsBool(const struct FUAEBlackboardKeySelector& Key, bool BoolValue);
	bool IsExistWeakObject(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistVector(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistString(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistRotator(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistObject(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistName(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistInt(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistFloat(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistEnum(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistClass(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistBool(const struct FUAEBlackboardKeySelector& Key);
	class UObject* GetValueAsWeakObject(const struct FUAEBlackboardKeySelector& Key);
	class AActor* GetValueAsWeakActor(const struct FUAEBlackboardKeySelector& Key);
	struct FVector GetValueAsVector(const struct FUAEBlackboardKeySelector& Key);
	struct FString GetValueAsString(const struct FUAEBlackboardKeySelector& Key);
	struct FRotator GetValueAsRotator(const struct FUAEBlackboardKeySelector& Key);
	class UObject* GetValueAsObject(const struct FUAEBlackboardKeySelector& Key);
	struct FName GetValueAsName(const struct FUAEBlackboardKeySelector& Key);
	int GetValueAsInt(const struct FUAEBlackboardKeySelector& Key);
	float GetValueAsFloat(const struct FUAEBlackboardKeySelector& Key);
	unsigned char GetValueAsEnum(const struct FUAEBlackboardKeySelector& Key);
	class UClass* GetValueAsClass(const struct FUAEBlackboardKeySelector& Key);
	bool GetValueAsBool(const struct FUAEBlackboardKeySelector& Key);
	class AActor* GetValueAsActor(const struct FUAEBlackboardKeySelector& Key);
	void AddValueByParam(const struct FUAEBlackboardParameter& NewParam);
};


// Class UAESharedModule.UAESharedModuleInterface
// 0x0000 (0x0028 - 0x0028)
class UUAESharedModuleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAESharedModule.UAESharedModuleInterface");
		return pStaticClass;
	}

};


}

