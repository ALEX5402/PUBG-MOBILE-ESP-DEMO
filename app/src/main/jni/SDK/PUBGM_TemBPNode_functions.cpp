// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TemBPNode.TemBPLibrary.TempUIMsgInvokeRef
// ()
// Parameters:
// class UObject*                 ObjContext                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MsgName                        (Parm, ZeroConstructor)
// struct FString                 ModuleName                     (Parm, ZeroConstructor)
// TArray<struct FTemBPDataAddr>  ParamArray                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTemBPLibrary::TempUIMsgInvokeRef(class UObject* ObjContext, const struct FString& MsgName, const struct FString& ModuleName, TArray<struct FTemBPDataAddr> ParamArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TemBPNode.TemBPLibrary.TempUIMsgInvokeRef");

	UTemBPLibrary_TempUIMsgInvokeRef_Params params;
	params.ObjContext = ObjContext;
	params.MsgName = MsgName;
	params.ModuleName = ModuleName;
	params.ParamArray = ParamArray;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TemBPNode.TemBPLibrary.TempBridgeEventInvokeRef
// ()
// Parameters:
// class UObject*                 ObjContext                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventType                      (Parm, ZeroConstructor)
// struct FString                 EventId                        (Parm, ZeroConstructor)
// TArray<struct FTemBPDataAddr>  ParamArray                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTemBPLibrary::TempBridgeEventInvokeRef(class UObject* ObjContext, const struct FString& EventType, const struct FString& EventId, TArray<struct FTemBPDataAddr> ParamArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TemBPNode.TemBPLibrary.TempBridgeEventInvokeRef");

	UTemBPLibrary_TempBridgeEventInvokeRef_Params params;
	params.ObjContext = ObjContext;
	params.EventType = EventType;
	params.EventId = EventId;
	params.ParamArray = ParamArray;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TemBPNode.TemBPLibrary.AddrFromWild
// ()
// Parameters:
// struct FString                 DataType                       (Parm, ZeroConstructor)
// struct FTemBPDataAddr          InAny                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTemBPDataAddr          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTemBPDataAddr UTemBPLibrary::AddrFromWild(const struct FString& DataType, const struct FTemBPDataAddr& InAny)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TemBPNode.TemBPLibrary.AddrFromWild");

	UTemBPLibrary_AddrFromWild_Params params;
	params.DataType = DataType;
	params.InAny = InAny;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TemBPNode.TemBPLibrary.AddrFromSet
// ()
// Parameters:
// struct FString                 DataType                       (Parm, ZeroConstructor)
// struct FTemBPDataAddr          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTemBPDataAddr UTemBPLibrary::AddrFromSet(const struct FString& DataType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TemBPNode.TemBPLibrary.AddrFromSet");

	UTemBPLibrary_AddrFromSet_Params params;
	params.DataType = DataType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TemBPNode.TemBPLibrary.AddrFromMap
// ()
// Parameters:
// struct FString                 DataType                       (Parm, ZeroConstructor)
// TMap<int, int>                 InAny                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FTemBPDataAddr          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTemBPDataAddr UTemBPLibrary::AddrFromMap(const struct FString& DataType, TMap<int, int> InAny)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TemBPNode.TemBPLibrary.AddrFromMap");

	UTemBPLibrary_AddrFromMap_Params params;
	params.DataType = DataType;
	params.InAny = InAny;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TemBPNode.TemBPLibrary.AddrFromArray
// ()
// Parameters:
// struct FString                 DataType                       (Parm, ZeroConstructor)
// TArray<int>                    InAny                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FTemBPDataAddr          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTemBPDataAddr UTemBPLibrary::AddrFromArray(const struct FString& DataType, TArray<int> InAny)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TemBPNode.TemBPLibrary.AddrFromArray");

	UTemBPLibrary_AddrFromArray_Params params;
	params.DataType = DataType;
	params.InAny = InAny;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

