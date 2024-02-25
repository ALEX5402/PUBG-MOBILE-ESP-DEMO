// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UAESharedModule.OwnBlackboardInterface.GetOwnBlackboardParameter
// ()
// Parameters:
// TArray<struct FUAEBlackboardParameter> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FUAEBlackboardParameter> UOwnBlackboardInterface::GetOwnBlackboardParameter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.OwnBlackboardInterface.GetOwnBlackboardParameter");

	UOwnBlackboardInterface_GetOwnBlackboardParameter_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.OwnBlackboardInterface.GetOwnBlackboard
// ()
// Parameters:
// class UUAEBlackboard*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEBlackboard* UOwnBlackboardInterface::GetOwnBlackboard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.OwnBlackboardInterface.GetOwnBlackboard");

	UOwnBlackboardInterface_GetOwnBlackboard_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsWeakObject
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsWeakObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsWeakObject");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsWeakObject_Params params;
	params.Key = Key;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsVector
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 VectorValue                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsVector(const struct FUAEBlackboardKeySelector& Key, const struct FVector& VectorValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsVector");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsVector_Params params;
	params.Key = Key;
	params.VectorValue = VectorValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsString
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 StringValue                    (Parm, ZeroConstructor)

void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsString(const struct FUAEBlackboardKeySelector& Key, const struct FString& StringValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsString");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsString_Params params;
	params.Key = Key;
	params.StringValue = StringValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsRotator
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                RotatorValue                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsRotator(const struct FUAEBlackboardKeySelector& Key, const struct FRotator& RotatorValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsRotator");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsRotator_Params params;
	params.Key = Key;
	params.RotatorValue = RotatorValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsObject
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsObject");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsObject_Params params;
	params.Key = Key;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsName
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   NameValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsName(const struct FUAEBlackboardKeySelector& Key, const struct FName& NameValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsName");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsName_Params params;
	params.Key = Key;
	params.NameValue = NameValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsInt
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// int                            IntValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsInt(const struct FUAEBlackboardKeySelector& Key, int IntValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsInt");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsInt_Params params;
	params.Key = Key;
	params.IntValue = IntValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsFloat
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          FloatValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsFloat(const struct FUAEBlackboardKeySelector& Key, float FloatValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsFloat");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsFloat_Params params;
	params.Key = Key;
	params.FloatValue = FloatValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsEnum
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// unsigned char                  EnumValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsEnum(const struct FUAEBlackboardKeySelector& Key, unsigned char EnumValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsEnum");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsEnum_Params params;
	params.Key = Key;
	params.EnumValue = EnumValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsClass
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ClassValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsClass(const struct FUAEBlackboardKeySelector& Key, class UClass* ClassValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsClass");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsClass_Params params;
	params.Key = Key;
	params.ClassValue = ClassValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsBool
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           BoolValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsBool(const struct FUAEBlackboardKeySelector& Key, bool BoolValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsBool");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsBool_Params params;
	params.Key = Key;
	params.BoolValue = BoolValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistWeakObject
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboardBlueprintFunctionLibrary::IsExistWeakObject(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistWeakObject");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistWeakObject_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistVector
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboardBlueprintFunctionLibrary::IsExistVector(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistVector");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistVector_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistString
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboardBlueprintFunctionLibrary::IsExistString(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistString");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistString_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistRotator
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboardBlueprintFunctionLibrary::IsExistRotator(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistRotator");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistRotator_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistObject
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboardBlueprintFunctionLibrary::IsExistObject(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistObject");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistObject_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistName
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboardBlueprintFunctionLibrary::IsExistName(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistName");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistName_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistInt
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboardBlueprintFunctionLibrary::IsExistInt(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistInt");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistInt_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistFloat
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboardBlueprintFunctionLibrary::IsExistFloat(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistFloat");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistFloat_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistEnum
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboardBlueprintFunctionLibrary::IsExistEnum(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistEnum");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistEnum_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistClass
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboardBlueprintFunctionLibrary::IsExistClass(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistClass");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistClass_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistBool
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboardBlueprintFunctionLibrary::IsExistBool(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistBool");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistBool_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsWeakObject
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUAEBlackboardBlueprintFunctionLibrary::GetValueAsWeakObject(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsWeakObject");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsWeakObject_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsWeakActor
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UUAEBlackboardBlueprintFunctionLibrary::GetValueAsWeakActor(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsWeakActor");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsWeakActor_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsVector
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UUAEBlackboardBlueprintFunctionLibrary::GetValueAsVector(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsVector");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsVector_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsString
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAEBlackboardBlueprintFunctionLibrary::GetValueAsString(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsString");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsString_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsRotator
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UUAEBlackboardBlueprintFunctionLibrary::GetValueAsRotator(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsRotator");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsRotator_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsObject
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUAEBlackboardBlueprintFunctionLibrary::GetValueAsObject(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsObject");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsObject_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsName
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UUAEBlackboardBlueprintFunctionLibrary::GetValueAsName(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsName");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsName_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsInt
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUAEBlackboardBlueprintFunctionLibrary::GetValueAsInt(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsInt");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsInt_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsFloat
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUAEBlackboardBlueprintFunctionLibrary::GetValueAsFloat(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsFloat");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsFloat_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsEnum
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UUAEBlackboardBlueprintFunctionLibrary::GetValueAsEnum(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsEnum");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsEnum_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsClass
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UUAEBlackboardBlueprintFunctionLibrary::GetValueAsClass(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsClass");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsClass_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsBool
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboardBlueprintFunctionLibrary::GetValueAsBool(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsBool");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsBool_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsActor
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UUAEBlackboardBlueprintFunctionLibrary::GetValueAsActor(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsActor");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsActor_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.FillBlackboardByBlackboard
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardContainer OtherUAEBlackboardContainer    (Parm, OutParm, ReferenceParm)

void UUAEBlackboardBlueprintFunctionLibrary::FillBlackboardByBlackboard(struct FUAEBlackboardContainer* UAEBlackboardContainer, struct FUAEBlackboardContainer* OtherUAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.FillBlackboardByBlackboard");

	UUAEBlackboardBlueprintFunctionLibrary_FillBlackboardByBlackboard_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
	if (OtherUAEBlackboardContainer != nullptr)
		*OtherUAEBlackboardContainer = params.OtherUAEBlackboardContainer;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.FillBlackboard
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (Parm, OutParm, ReferenceParm)
// TArray<struct FUAEBlackboardParameter> ParamList                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUAEBlackboardBlueprintFunctionLibrary::FillBlackboard(TArray<struct FUAEBlackboardParameter> ParamList, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.FillBlackboard");

	UUAEBlackboardBlueprintFunctionLibrary_FillBlackboard_Params params;
	params.ParamList = ParamList;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}


// Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.AddValueByParam
// ()
// Parameters:
// struct FUAEBlackboardContainer UAEBlackboardContainer         (Parm, OutParm, ReferenceParm)
// struct FUAEBlackboardParameter NewParam                       (ConstParm, Parm, OutParm, ReferenceParm)

void UUAEBlackboardBlueprintFunctionLibrary::AddValueByParam(const struct FUAEBlackboardParameter& NewParam, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.AddValueByParam");

	UUAEBlackboardBlueprintFunctionLibrary_AddValueByParam_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}


// Function UAESharedModule.UAEBlackboard.SetValueAsWeakObject
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUAEBlackboard::SetValueAsWeakObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsWeakObject");

	UUAEBlackboard_SetValueAsWeakObject_Params params;
	params.Key = Key;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UAESharedModule.UAEBlackboard.SetValueAsVector
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 VectorValue                    (Parm, IsPlainOldData)

void UUAEBlackboard::SetValueAsVector(const struct FUAEBlackboardKeySelector& Key, const struct FVector& VectorValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsVector");

	UUAEBlackboard_SetValueAsVector_Params params;
	params.Key = Key;
	params.VectorValue = VectorValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UAESharedModule.UAEBlackboard.SetValueAsString
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 StringValue                    (Parm, ZeroConstructor)

void UUAEBlackboard::SetValueAsString(const struct FUAEBlackboardKeySelector& Key, const struct FString& StringValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsString");

	UUAEBlackboard_SetValueAsString_Params params;
	params.Key = Key;
	params.StringValue = StringValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UAESharedModule.UAEBlackboard.SetValueAsRotator
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                VectorValue                    (Parm, IsPlainOldData)

void UUAEBlackboard::SetValueAsRotator(const struct FUAEBlackboardKeySelector& Key, const struct FRotator& VectorValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsRotator");

	UUAEBlackboard_SetValueAsRotator_Params params;
	params.Key = Key;
	params.VectorValue = VectorValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UAESharedModule.UAEBlackboard.SetValueAsObject
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUAEBlackboard::SetValueAsObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsObject");

	UUAEBlackboard_SetValueAsObject_Params params;
	params.Key = Key;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UAESharedModule.UAEBlackboard.SetValueAsName
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   NameValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUAEBlackboard::SetValueAsName(const struct FUAEBlackboardKeySelector& Key, const struct FName& NameValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsName");

	UUAEBlackboard_SetValueAsName_Params params;
	params.Key = Key;
	params.NameValue = NameValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UAESharedModule.UAEBlackboard.SetValueAsInt
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// int                            IntValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UUAEBlackboard::SetValueAsInt(const struct FUAEBlackboardKeySelector& Key, int IntValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsInt");

	UUAEBlackboard_SetValueAsInt_Params params;
	params.Key = Key;
	params.IntValue = IntValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UAESharedModule.UAEBlackboard.SetValueAsFloat
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          FloatValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UUAEBlackboard::SetValueAsFloat(const struct FUAEBlackboardKeySelector& Key, float FloatValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsFloat");

	UUAEBlackboard_SetValueAsFloat_Params params;
	params.Key = Key;
	params.FloatValue = FloatValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UAESharedModule.UAEBlackboard.SetValueAsEnum
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// unsigned char                  EnumValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUAEBlackboard::SetValueAsEnum(const struct FUAEBlackboardKeySelector& Key, unsigned char EnumValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsEnum");

	UUAEBlackboard_SetValueAsEnum_Params params;
	params.Key = Key;
	params.EnumValue = EnumValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UAESharedModule.UAEBlackboard.SetValueAsClass
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ClassValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UUAEBlackboard::SetValueAsClass(const struct FUAEBlackboardKeySelector& Key, class UClass* ClassValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsClass");

	UUAEBlackboard_SetValueAsClass_Params params;
	params.Key = Key;
	params.ClassValue = ClassValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UAESharedModule.UAEBlackboard.SetValueAsBool
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           BoolValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUAEBlackboard::SetValueAsBool(const struct FUAEBlackboardKeySelector& Key, bool BoolValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsBool");

	UUAEBlackboard_SetValueAsBool_Params params;
	params.Key = Key;
	params.BoolValue = BoolValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UAESharedModule.UAEBlackboard.IsExistWeakObject
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboard::IsExistWeakObject(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistWeakObject");

	UUAEBlackboard_IsExistWeakObject_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.IsExistVector
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboard::IsExistVector(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistVector");

	UUAEBlackboard_IsExistVector_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.IsExistString
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboard::IsExistString(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistString");

	UUAEBlackboard_IsExistString_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.IsExistRotator
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboard::IsExistRotator(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistRotator");

	UUAEBlackboard_IsExistRotator_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.IsExistObject
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboard::IsExistObject(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistObject");

	UUAEBlackboard_IsExistObject_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.IsExistName
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboard::IsExistName(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistName");

	UUAEBlackboard_IsExistName_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.IsExistInt
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboard::IsExistInt(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistInt");

	UUAEBlackboard_IsExistInt_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.IsExistFloat
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboard::IsExistFloat(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistFloat");

	UUAEBlackboard_IsExistFloat_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.IsExistEnum
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboard::IsExistEnum(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistEnum");

	UUAEBlackboard_IsExistEnum_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.IsExistClass
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboard::IsExistClass(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistClass");

	UUAEBlackboard_IsExistClass_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.IsExistBool
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboard::IsExistBool(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistBool");

	UUAEBlackboard_IsExistBool_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.GetValueAsWeakObject
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUAEBlackboard::GetValueAsWeakObject(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsWeakObject");

	UUAEBlackboard_GetValueAsWeakObject_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.GetValueAsWeakActor
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UUAEBlackboard::GetValueAsWeakActor(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsWeakActor");

	UUAEBlackboard_GetValueAsWeakActor_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.GetValueAsVector
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UUAEBlackboard::GetValueAsVector(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsVector");

	UUAEBlackboard_GetValueAsVector_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.GetValueAsString
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAEBlackboard::GetValueAsString(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsString");

	UUAEBlackboard_GetValueAsString_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.GetValueAsRotator
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UUAEBlackboard::GetValueAsRotator(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsRotator");

	UUAEBlackboard_GetValueAsRotator_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.GetValueAsObject
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUAEBlackboard::GetValueAsObject(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsObject");

	UUAEBlackboard_GetValueAsObject_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.GetValueAsName
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UUAEBlackboard::GetValueAsName(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsName");

	UUAEBlackboard_GetValueAsName_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.GetValueAsInt
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUAEBlackboard::GetValueAsInt(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsInt");

	UUAEBlackboard_GetValueAsInt_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.GetValueAsFloat
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUAEBlackboard::GetValueAsFloat(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsFloat");

	UUAEBlackboard_GetValueAsFloat_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.GetValueAsEnum
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UUAEBlackboard::GetValueAsEnum(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsEnum");

	UUAEBlackboard_GetValueAsEnum_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.GetValueAsClass
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UUAEBlackboard::GetValueAsClass(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsClass");

	UUAEBlackboard_GetValueAsClass_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.GetValueAsBool
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEBlackboard::GetValueAsBool(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsBool");

	UUAEBlackboard_GetValueAsBool_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.GetValueAsActor
// ()
// Parameters:
// struct FUAEBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UUAEBlackboard::GetValueAsActor(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsActor");

	UUAEBlackboard_GetValueAsActor_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAESharedModule.UAEBlackboard.AddValueByParam
// ()
// Parameters:
// struct FUAEBlackboardParameter NewParam                       (ConstParm, Parm, OutParm, ReferenceParm)

void UUAEBlackboard::AddValueByParam(const struct FUAEBlackboardParameter& NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.AddValueByParam");

	UUAEBlackboard_AddValueByParam_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

