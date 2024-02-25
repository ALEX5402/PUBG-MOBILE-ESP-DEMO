// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CommonLib.TextWidgetInterface.GetTextContent
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UTextWidgetInterface::GetTextContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.TextWidgetInterface.GetTextContent");

	UTextWidgetInterface_GetTextContent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonLib.CommonLuaLibrary.IsMatch
// ()
// Parameters:
// struct FString                 Source                         (Parm, ZeroConstructor)
// struct FString                 regex                          (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonLuaLibrary::IsMatch(const struct FString& Source, const struct FString& regex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.CommonLuaLibrary.IsMatch");

	UCommonLuaLibrary_IsMatch_Params params;
	params.Source = Source;
	params.regex = regex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonLib.CommonLuaLibrary.GetName
// ()
// Parameters:
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCommonLuaLibrary::GetName(class UObject* Obj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.CommonLuaLibrary.GetName");

	UCommonLuaLibrary_GetName_Params params;
	params.Obj = Obj;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonLib.CommonLuaLibrary.GetModNames
// ()
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UCommonLuaLibrary::GetModNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.CommonLuaLibrary.GetModNames");

	UCommonLuaLibrary_GetModNames_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonLib.CommonLuaLibrary.GetGWorld
// ()
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UCommonLuaLibrary::GetGWorld()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.CommonLuaLibrary.GetGWorld");

	UCommonLuaLibrary_GetGWorld_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonLib.CommonLuaLibrary.GetFullName
// ()
// Parameters:
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCommonLuaLibrary::GetFullName(class UObject* Obj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.CommonLuaLibrary.GetFullName");

	UCommonLuaLibrary_GetFullName_Params params;
	params.Obj = Obj;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonLib.RuntimeFilesDownloaderLibrary.DownloadFile
// ()
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// struct FString                 SavePath                       (Parm, ZeroConstructor)
// class URuntimeFilesDownloaderLibrary* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URuntimeFilesDownloaderLibrary* URuntimeFilesDownloaderLibrary::DownloadFile(const struct FString& URL, const struct FString& SavePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.RuntimeFilesDownloaderLibrary.DownloadFile");

	URuntimeFilesDownloaderLibrary_DownloadFile_Params params;
	params.URL = URL;
	params.SavePath = SavePath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonLib.RuntimeFilesDownloaderLibrary.CreateDownloader
// ()
// Parameters:
// class URuntimeFilesDownloaderLibrary* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URuntimeFilesDownloaderLibrary* URuntimeFilesDownloaderLibrary::CreateDownloader()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.RuntimeFilesDownloaderLibrary.CreateDownloader");

	URuntimeFilesDownloaderLibrary_CreateDownloader_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonLib.ServiceManager.UnregisterService
// ()
// Parameters:
// class UClass*                  ServiceType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 serviceName                    (Parm, ZeroConstructor)

void UServiceManager::UnregisterService(class UClass* ServiceType, const struct FString& serviceName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.ServiceManager.UnregisterService");

	UServiceManager_UnregisterService_Params params;
	params.ServiceType = ServiceType;
	params.serviceName = serviceName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CommonLib.ServiceManager.RegisterService
// ()
// Parameters:
// class UObject*                 Service                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ServiceType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 serviceName                    (Parm, ZeroConstructor)

void UServiceManager::RegisterService(class UObject* Service, class UClass* ServiceType, const struct FString& serviceName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.ServiceManager.RegisterService");

	UServiceManager_RegisterService_Params params;
	params.Service = Service;
	params.ServiceType = ServiceType;
	params.serviceName = serviceName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CommonLib.ServiceManager.GetService
// ()
// Parameters:
// class UClass*                  ServiceType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 serviceName                    (Parm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UServiceManager::GetService(class UClass* ServiceType, const struct FString& serviceName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.ServiceManager.GetService");

	UServiceManager_GetService_Params params;
	params.ServiceType = ServiceType;
	params.serviceName = serviceName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

