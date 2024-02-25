// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
// ()
// Parameters:
// EGooglePADErrorCode            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGooglePADErrorCode UGooglePADFunctionLibrary::ShowCellularDataConfirmation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation");

	UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// EGooglePADErrorCode            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGooglePADErrorCode UGooglePADFunctionLibrary::RequestRemoval(const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval");

	UGooglePADFunctionLibrary_RequestRemoval_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
// ()
// Parameters:
// TArray<struct FString>         AssetPacks                     (ConstParm, Parm, ZeroConstructor)
// EGooglePADErrorCode            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGooglePADErrorCode UGooglePADFunctionLibrary::RequestInfo(TArray<struct FString> AssetPacks)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.RequestInfo");

	UGooglePADFunctionLibrary_RequestInfo_Params params;
	params.AssetPacks = AssetPacks;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
// ()
// Parameters:
// TArray<struct FString>         AssetPacks                     (ConstParm, Parm, ZeroConstructor)
// EGooglePADErrorCode            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGooglePADErrorCode UGooglePADFunctionLibrary::RequestDownload(TArray<struct FString> AssetPacks)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.RequestDownload");

	UGooglePADFunctionLibrary_RequestDownload_Params params;
	params.AssetPacks = AssetPacks;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
// ()
// Parameters:
// int                            State                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGooglePADFunctionLibrary::ReleaseDownloadState(int State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState");

	UGooglePADFunctionLibrary_ReleaseDownloadState_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
// ()
// Parameters:
// int                            Location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGooglePADFunctionLibrary::ReleaseAssetPackLocation(int Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation");

	UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
// ()
// Parameters:
// int                            State                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGooglePADFunctionLibrary::GetTotalBytesToDownload(int State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload");

	UGooglePADFunctionLibrary_GetTotalBytesToDownload_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
// ()
// Parameters:
// int                            Location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EGooglePADStorageMethod        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGooglePADStorageMethod UGooglePADFunctionLibrary::GetStorageMethod(int Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod");

	UGooglePADFunctionLibrary_GetStorageMethod_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
// ()
// Parameters:
// EGooglePADCellularDataConfirmStatus Status                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EGooglePADErrorCode            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGooglePADErrorCode UGooglePADFunctionLibrary::GetShowCellularDataConfirmationStatus(EGooglePADCellularDataConfirmStatus* Status)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus");

	UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Status != nullptr)
		*Status = params.Status;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
// ()
// Parameters:
// int                            State                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EGooglePADDownloadStatus       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGooglePADDownloadStatus UGooglePADFunctionLibrary::GetDownloadStatus(int State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus");

	UGooglePADFunctionLibrary_GetDownloadStatus_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EGooglePADErrorCode            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGooglePADErrorCode UGooglePADFunctionLibrary::GetDownloadState(const struct FString& Name, int* State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState");

	UGooglePADFunctionLibrary_GetDownloadState_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
// ()
// Parameters:
// int                            State                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGooglePADFunctionLibrary::GetBytesDownloaded(int State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded");

	UGooglePADFunctionLibrary_GetBytesDownloaded_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
// ()
// Parameters:
// int                            Location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGooglePADFunctionLibrary::GetAssetsPath(int Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath");

	UGooglePADFunctionLibrary_GetAssetsPath_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EGooglePADErrorCode            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGooglePADErrorCode UGooglePADFunctionLibrary::GetAssetPackLocation(const struct FString& Name, int* Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation");

	UGooglePADFunctionLibrary_GetAssetPackLocation_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
// ()
// Parameters:
// TArray<struct FString>         AssetPacks                     (ConstParm, Parm, ZeroConstructor)
// EGooglePADErrorCode            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGooglePADErrorCode UGooglePADFunctionLibrary::CancelDownload(TArray<struct FString> AssetPacks)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.CancelDownload");

	UGooglePADFunctionLibrary_CancelDownload_Params params;
	params.AssetPacks = AssetPacks;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

