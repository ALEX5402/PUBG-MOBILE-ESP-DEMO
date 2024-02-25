// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ImgMedia.ImgMediaSource.SetSequencePath
// ()
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)

void UImgMediaSource::SetSequencePath(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.SetSequencePath");

	UImgMediaSource_SetSequencePath_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ImgMedia.ImgMediaSource.GetSequencePath
// ()
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UImgMediaSource::GetSequencePath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.GetSequencePath");

	UImgMediaSource_GetSequencePath_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ImgMedia.ImgMediaSource.GetProxies
// ()
// Parameters:
// TArray<struct FString>         OutProxies                     (Parm, OutParm, ZeroConstructor)

void UImgMediaSource::GetProxies(TArray<struct FString>* OutProxies)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.GetProxies");

	UImgMediaSource_GetProxies_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutProxies != nullptr)
		*OutProxies = params.OutProxies;
}


}

