// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesName
// ()
// Parameters:
// int                            SeriesIdx                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UKantanCartesianDatasourceInterface::GetSeriesName(int SeriesIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesName");

	UKantanCartesianDatasourceInterface_GetSeriesName_Params params;
	params.SeriesIdx = SeriesIdx;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesId
// ()
// Parameters:
// int                            CatIdx                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UKantanCartesianDatasourceInterface::GetSeriesId(int CatIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesId");

	UKantanCartesianDatasourceInterface_GetSeriesId_Params params;
	params.CatIdx = CatIdx;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesDatapoints
// ()
// Parameters:
// int                            SeriesIdx                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKantanCartesianDatapoint> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FKantanCartesianDatapoint> UKantanCartesianDatasourceInterface::GetSeriesDatapoints(int SeriesIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesDatapoints");

	UKantanCartesianDatasourceInterface_GetSeriesDatapoints_Params params;
	params.SeriesIdx = SeriesIdx;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetNumSeries
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKantanCartesianDatasourceInterface::GetNumSeries()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetNumSeries");

	UKantanCartesianDatasourceInterface_GetNumSeries_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetNumCategories
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKantanCategoryDatasourceInterface::GetNumCategories()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetNumCategories");

	UKantanCategoryDatasourceInterface_GetNumCategories_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryValue
// ()
// Parameters:
// int                            CatIdx                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKantanCategoryDatasourceInterface::GetCategoryValue(int CatIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryValue");

	UKantanCategoryDatasourceInterface_GetCategoryValue_Params params;
	params.CatIdx = CatIdx;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryName
// ()
// Parameters:
// int                            CatIdx                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UKantanCategoryDatasourceInterface::GetCategoryName(int CatIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryName");

	UKantanCategoryDatasourceInterface_GetCategoryName_Params params;
	params.CatIdx = CatIdx;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryId
// ()
// Parameters:
// int                            CatIdx                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UKantanCategoryDatasourceInterface::GetCategoryId(int CatIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryId");

	UKantanCategoryDatasourceInterface_GetCategoryId_Params params;
	params.CatIdx = CatIdx;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KantanChartsDatasource.KantanSimpleCartesianDatasource.NewSimpleCartesianDatasource
// ()
// Parameters:
// class UKantanSimpleCartesianDatasource* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKantanSimpleCartesianDatasource* UKantanSimpleCartesianDatasource::NewSimpleCartesianDatasource()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsDatasource.KantanSimpleCartesianDatasource.NewSimpleCartesianDatasource");

	UKantanSimpleCartesianDatasource_NewSimpleCartesianDatasource_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_RemoveSeries
// ()
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKantanSimpleCartesianDatasource::BP_RemoveSeries(const struct FName& ID, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_RemoveSeries");

	UKantanSimpleCartesianDatasource_BP_RemoveSeries_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_RemoveAllSeries
// ()

void UKantanSimpleCartesianDatasource::BP_RemoveAllSeries()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_RemoveAllSeries");

	UKantanSimpleCartesianDatasource_BP_RemoveAllSeries_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddSeriesWithId
// ()
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (Parm)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKantanSimpleCartesianDatasource::BP_AddSeriesWithId(const struct FName& ID, const struct FText& Name, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddSeriesWithId");

	UKantanSimpleCartesianDatasource_BP_AddSeriesWithId_Params params;
	params.ID = ID;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddSeries
// ()
// Parameters:
// struct FText                   Name                           (Parm)
// struct FName                   SeriesId                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKantanSimpleCartesianDatasource::BP_AddSeries(const struct FText& Name, struct FName* SeriesId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddSeries");

	UKantanSimpleCartesianDatasource_BP_AddSeries_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SeriesId != nullptr)
		*SeriesId = params.SeriesId;
}


// Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddDatapoint
// ()
// Parameters:
// struct FName                   SeriesId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKantanSimpleCartesianDatasource::BP_AddDatapoint(const struct FName& SeriesId, const struct FVector2D& Point, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddDatapoint");

	UKantanSimpleCartesianDatasource_BP_AddDatapoint_Params params;
	params.SeriesId = SeriesId;
	params.Point = Point;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function KantanChartsDatasource.KantanSimpleCategoryDatasource.NewSimpleCategoryDatasource
// ()
// Parameters:
// class UKantanSimpleCategoryDatasource* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKantanSimpleCategoryDatasource* UKantanSimpleCategoryDatasource::NewSimpleCategoryDatasource()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsDatasource.KantanSimpleCategoryDatasource.NewSimpleCategoryDatasource");

	UKantanSimpleCategoryDatasource_NewSimpleCategoryDatasource_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_UpdateCategoryValue
// ()
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKantanSimpleCategoryDatasource::BP_UpdateCategoryValue(const struct FName& ID, float Value, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_UpdateCategoryValue");

	UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue_Params params;
	params.ID = ID;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_RemoveCategory
// ()
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKantanSimpleCategoryDatasource::BP_RemoveCategory(const struct FName& ID, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_RemoveCategory");

	UKantanSimpleCategoryDatasource_BP_RemoveCategory_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_RemoveAllCategories
// ()

void UKantanSimpleCategoryDatasource::BP_RemoveAllCategories()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_RemoveAllCategories");

	UKantanSimpleCategoryDatasource_BP_RemoveAllCategories_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_AddCategoryWithId
// ()
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (Parm)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKantanSimpleCategoryDatasource::BP_AddCategoryWithId(const struct FName& ID, const struct FText& Name, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_AddCategoryWithId");

	UKantanSimpleCategoryDatasource_BP_AddCategoryWithId_Params params;
	params.ID = ID;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_AddCategory
// ()
// Parameters:
// struct FText                   Name                           (Parm)
// struct FName                   CatId                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKantanSimpleCategoryDatasource::BP_AddCategory(const struct FText& Name, struct FName* CatId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_AddCategory");

	UKantanSimpleCategoryDatasource_BP_AddCategory_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CatId != nullptr)
		*CatId = params.CatId;
}


}

