// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CinematicCamera.CineCameraActor.GetCineCameraComponent
// ()
// Parameters:
// class UCineCameraComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCineCameraComponent* ACineCameraActor::GetCineCameraComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraActor.GetCineCameraComponent");

	ACineCameraActor_GetCineCameraComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.SetLensPresetByName
// ()
// Parameters:
// struct FString                 InPresetName                   (Parm, ZeroConstructor)

void UCineCameraComponent::SetLensPresetByName(const struct FString& InPresetName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetLensPresetByName");

	UCineCameraComponent_SetLensPresetByName_Params params;
	params.InPresetName = InPresetName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
// ()
// Parameters:
// struct FString                 InPresetName                   (Parm, ZeroConstructor)

void UCineCameraComponent::SetFilmbackPresetByName(const struct FString& InPresetName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName");

	UCineCameraComponent_SetFilmbackPresetByName_Params params;
	params.InPresetName = InPresetName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCineCameraComponent::GetVerticalFieldOfView()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView");

	UCineCameraComponent_GetVerticalFieldOfView_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetLensPresetName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCineCameraComponent::GetLensPresetName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetLensPresetName");

	UCineCameraComponent_GetLensPresetName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCineCameraComponent::GetHorizontalFieldOfView()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView");

	UCineCameraComponent_GetHorizontalFieldOfView_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCineCameraComponent::GetFilmbackPresetName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName");

	UCineCameraComponent_GetFilmbackPresetName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

