#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AndroidPermission.AndroidPermissionCallbackProxy
// 0x0020 (0x0048 - 0x0028)
class UAndroidPermissionCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPermissionsGrantedDynamicDelegate;                      // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidPermission.AndroidPermissionCallbackProxy");
		return pStaticClass;
	}

};


// Class AndroidPermission.AndroidPermissionFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidPermission.AndroidPermissionFunctionLibrary");
		return pStaticClass;
	}


	bool CheckPermission(const struct FString& permission);
	class UAndroidPermissionCallbackProxy* AcquirePermissions(TArray<struct FString> Permissions);
};


}

