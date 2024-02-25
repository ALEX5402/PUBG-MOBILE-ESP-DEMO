#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AssetRegistry.AssetRegistryImpl
// 0x06D0 (0x06F8 - 0x0028)
class UAssetRegistryImpl : public UObject
{
public:
	unsigned char                                      UnknownData00[0x6D0];                                     // 0x0028(0x06D0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AssetRegistry.AssetRegistryImpl");
		return pStaticClass;
	}

};


// Class AssetRegistry.AssetRegistryHelpers
// 0x0000 (0x0028 - 0x0028)
class UAssetRegistryHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AssetRegistry.AssetRegistryHelpers");
		return pStaticClass;
	}


	struct FSoftObjectPath ToSoftObjectPath(const struct FAssetData& InAssetData);
	struct FARFilter SetFilterTagsAndValues(const struct FARFilter& InFilter, TArray<struct FTagAndValue> InTagsAndValues);
	bool IsValid(const struct FAssetData& InAssetData);
	bool IsUAsset(const struct FAssetData& InAssetData);
	bool IsRedirector(const struct FAssetData& InAssetData);
	bool IsAssetLoaded(const struct FAssetData& InAssetData);
	bool GetTagValue(const struct FAssetData& InAssetData, const struct FName& InTagName, struct FString* OutTagValue);
	struct FString GetFullName(const struct FAssetData& InAssetData);
	struct FString GetExportTextName(const struct FAssetData& InAssetData);
	class UClass* GetClass(const struct FAssetData& InAssetData);
	TScriptInterface<class UAssetRegistry> GetAssetRegistry();
	class UObject* GetAsset(const struct FAssetData& InAssetData);
	struct FAssetData CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass);
};


// Class AssetRegistry.AssetRegistry
// 0x0000 (0x0028 - 0x0028)
class UAssetRegistry : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AssetRegistry.AssetRegistry");
		return pStaticClass;
	}


	void RunAssetsThroughFilter(const struct FARFilter& Filter, TArray<struct FAssetData>* AssetDataList);
	bool IsLoadingAssets();
	bool HasAssets(const struct FName& PackagePath, bool bRecursive);
	void GetSubPaths(const struct FString& InBasePath, bool bInRecurse, TArray<struct FString>* OutPathList);
	bool GetAssetsByPath(const struct FName& PackagePath, bool bRecursive, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);
	bool GetAssetsByPackageName(const struct FName& PackageName, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);
	bool GetAssetsByClass(const struct FName& ClassName, bool bSearchSubClasses, TArray<struct FAssetData>* OutAssetData);
	bool GetAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData);
	struct FAssetData GetAssetByObjectPath(const struct FName& ObjectPath, bool bIncludeOnlyOnDiskAssets);
	void GetAllCachedPaths(TArray<struct FString>* OutPathList);
	bool GetAllAssets(bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);
};


}

