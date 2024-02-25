// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
// ()
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSoftObjectPath         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSoftObjectPath UAssetRegistryHelpers::ToSoftObjectPath(const struct FAssetData& InAssetData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath");

	UAssetRegistryHelpers_ToSoftObjectPath_Params params;
	params.InAssetData = InAssetData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
// ()
// Parameters:
// struct FARFilter               InFilter                       (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FTagAndValue>    InTagsAndValues                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FARFilter               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FARFilter UAssetRegistryHelpers::SetFilterTagsAndValues(const struct FARFilter& InFilter, TArray<struct FTagAndValue> InTagsAndValues)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues");

	UAssetRegistryHelpers_SetFilterTagsAndValues_Params params;
	params.InFilter = InFilter;
	params.InTagsAndValues = InTagsAndValues;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsValid
// ()
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistryHelpers::IsValid(const struct FAssetData& InAssetData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsValid");

	UAssetRegistryHelpers_IsValid_Params params;
	params.InAssetData = InAssetData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsUAsset
// ()
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistryHelpers::IsUAsset(const struct FAssetData& InAssetData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsUAsset");

	UAssetRegistryHelpers_IsUAsset_Params params;
	params.InAssetData = InAssetData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsRedirector
// ()
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistryHelpers::IsRedirector(const struct FAssetData& InAssetData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsRedirector");

	UAssetRegistryHelpers_IsRedirector_Params params;
	params.InAssetData = InAssetData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
// ()
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistryHelpers::IsAssetLoaded(const struct FAssetData& InAssetData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded");

	UAssetRegistryHelpers_IsAssetLoaded_Params params;
	params.InAssetData = InAssetData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetTagValue
// ()
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   InTagName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 OutTagValue                    (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistryHelpers::GetTagValue(const struct FAssetData& InAssetData, const struct FName& InTagName, struct FString* OutTagValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetTagValue");

	UAssetRegistryHelpers_GetTagValue_Params params;
	params.InAssetData = InAssetData;
	params.InTagName = InTagName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutTagValue != nullptr)
		*OutTagValue = params.OutTagValue;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetFullName
// ()
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAssetRegistryHelpers::GetFullName(const struct FAssetData& InAssetData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetFullName");

	UAssetRegistryHelpers_GetFullName_Params params;
	params.InAssetData = InAssetData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
// ()
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAssetRegistryHelpers::GetExportTextName(const struct FAssetData& InAssetData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetExportTextName");

	UAssetRegistryHelpers_GetExportTextName_Params params;
	params.InAssetData = InAssetData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetClass
// ()
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UAssetRegistryHelpers::GetClass(const struct FAssetData& InAssetData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetClass");

	UAssetRegistryHelpers_GetClass_Params params;
	params.InAssetData = InAssetData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
// ()
// Parameters:
// TScriptInterface<class UAssetRegistry> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TScriptInterface<class UAssetRegistry> UAssetRegistryHelpers::GetAssetRegistry()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry");

	UAssetRegistryHelpers_GetAssetRegistry_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetAsset
// ()
// Parameters:
// struct FAssetData              InAssetData                    (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UAssetRegistryHelpers::GetAsset(const struct FAssetData& InAssetData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetAsset");

	UAssetRegistryHelpers_GetAsset_Params params;
	params.InAssetData = InAssetData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
// ()
// Parameters:
// class UObject*                 InAsset                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowBlueprintClass           (Parm, ZeroConstructor, IsPlainOldData)
// struct FAssetData              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAssetData UAssetRegistryHelpers::CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.CreateAssetData");

	UAssetRegistryHelpers_CreateAssetData_Params params;
	params.InAsset = InAsset;
	params.bAllowBlueprintClass = bAllowBlueprintClass;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
// ()
// Parameters:
// TArray<struct FAssetData>      AssetDataList                  (Parm, OutParm, ZeroConstructor)
// struct FARFilter               Filter                         (ConstParm, Parm, OutParm, ReferenceParm)

void UAssetRegistry::RunAssetsThroughFilter(const struct FARFilter& Filter, TArray<struct FAssetData>* AssetDataList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter");

	UAssetRegistry_RunAssetsThroughFilter_Params params;
	params.Filter = Filter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AssetDataList != nullptr)
		*AssetDataList = params.AssetDataList;
}


// Function AssetRegistry.AssetRegistry.IsLoadingAssets
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry::IsLoadingAssets()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.IsLoadingAssets");

	UAssetRegistry_IsLoadingAssets_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.HasAssets
// ()
// Parameters:
// struct FName                   PackagePath                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRecursive                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry::HasAssets(const struct FName& PackagePath, bool bRecursive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.HasAssets");

	UAssetRegistry_HasAssets_Params params;
	params.PackagePath = PackagePath;
	params.bRecursive = bRecursive;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetSubPaths
// ()
// Parameters:
// struct FString                 InBasePath                     (Parm, ZeroConstructor)
// TArray<struct FString>         OutPathList                    (Parm, OutParm, ZeroConstructor)
// bool                           bInRecurse                     (Parm, ZeroConstructor, IsPlainOldData)

void UAssetRegistry::GetSubPaths(const struct FString& InBasePath, bool bInRecurse, TArray<struct FString>* OutPathList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetSubPaths");

	UAssetRegistry_GetSubPaths_Params params;
	params.InBasePath = InBasePath;
	params.bInRecurse = bInRecurse;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutPathList != nullptr)
		*OutPathList = params.OutPathList;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByPath
// ()
// Parameters:
// struct FName                   PackagePath                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAssetData>      OutAssetData                   (Parm, OutParm, ZeroConstructor)
// bool                           bRecursive                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeOnlyOnDiskAssets       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry::GetAssetsByPath(const struct FName& PackagePath, bool bRecursive, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetsByPath");

	UAssetRegistry_GetAssetsByPath_Params params;
	params.PackagePath = PackagePath;
	params.bRecursive = bRecursive;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
// ()
// Parameters:
// struct FName                   PackageName                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAssetData>      OutAssetData                   (Parm, OutParm, ZeroConstructor)
// bool                           bIncludeOnlyOnDiskAssets       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry::GetAssetsByPackageName(const struct FName& PackageName, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetsByPackageName");

	UAssetRegistry_GetAssetsByPackageName_Params params;
	params.PackageName = PackageName;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByClass
// ()
// Parameters:
// struct FName                   ClassName                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAssetData>      OutAssetData                   (Parm, OutParm, ZeroConstructor)
// bool                           bSearchSubClasses              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry::GetAssetsByClass(const struct FName& ClassName, bool bSearchSubClasses, TArray<struct FAssetData>* OutAssetData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetsByClass");

	UAssetRegistry_GetAssetsByClass_Params params;
	params.ClassName = ClassName;
	params.bSearchSubClasses = bSearchSubClasses;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssets
// ()
// Parameters:
// struct FARFilter               Filter                         (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FAssetData>      OutAssetData                   (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry::GetAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssets");

	UAssetRegistry_GetAssets_Params params;
	params.Filter = Filter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
// ()
// Parameters:
// struct FName                   ObjectPath                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeOnlyOnDiskAssets       (Parm, ZeroConstructor, IsPlainOldData)
// struct FAssetData              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAssetData UAssetRegistry::GetAssetByObjectPath(const struct FName& ObjectPath, bool bIncludeOnlyOnDiskAssets)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetByObjectPath");

	UAssetRegistry_GetAssetByObjectPath_Params params;
	params.ObjectPath = ObjectPath;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAllCachedPaths
// ()
// Parameters:
// TArray<struct FString>         OutPathList                    (Parm, OutParm, ZeroConstructor)

void UAssetRegistry::GetAllCachedPaths(TArray<struct FString>* OutPathList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAllCachedPaths");

	UAssetRegistry_GetAllCachedPaths_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutPathList != nullptr)
		*OutPathList = params.OutPathList;
}


// Function AssetRegistry.AssetRegistry.GetAllAssets
// ()
// Parameters:
// TArray<struct FAssetData>      OutAssetData                   (Parm, OutParm, ZeroConstructor)
// bool                           bIncludeOnlyOnDiskAssets       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetRegistry::GetAllAssets(bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAllAssets");

	UAssetRegistry_GetAllAssets_Params params;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


}

