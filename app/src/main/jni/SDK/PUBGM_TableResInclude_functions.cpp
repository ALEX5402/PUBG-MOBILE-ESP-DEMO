// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TableResInclude.EvoBaseMapUIMarkTableMap.TraversTable
// ()
// Parameters:
// class UUAEDataTable*           TableData                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)

void UEvoBaseMapUIMarkTableMap::TraversTable(class UUAEDataTable* TableData, const struct FName& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TableResInclude.EvoBaseMapUIMarkTableMap.TraversTable");

	UEvoBaseMapUIMarkTableMap_TraversTable_Params params;
	params.TableData = TableData;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TableResInclude.EvoBaseModTableTestTableMap.TraversTable
// ()
// Parameters:
// class UUAEDataTable*           TableData                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)

void UEvoBaseModTableTestTableMap::TraversTable(class UUAEDataTable* TableData, const struct FName& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TableResInclude.EvoBaseModTableTestTableMap.TraversTable");

	UEvoBaseModTableTestTableMap_TraversTable_Params params;
	params.TableData = TableData;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

