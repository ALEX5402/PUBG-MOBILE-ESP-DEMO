// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
// ()
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewScale                       (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::SetWorldToMetersScale(class UObject* WorldContext, float NewScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale");

	UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Params params;
	params.WorldContext = WorldContext;
	params.NewScale = NewScale;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
// ()
// Parameters:
// TEnumAsByte<EHMDTrackingOrigin> Origin                         (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin");

	UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Params params;
	params.Origin = Origin;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
// ()
// Parameters:
// class UTexture*                InTexture                      (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenTexture(class UTexture* InTexture)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture");

	UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Params params;
	params.InTexture = InTexture;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
// ()
// Parameters:
// struct FVector2D               EyeRectMin                     (Parm, IsPlainOldData)
// struct FVector2D               EyeRectMax                     (Parm, IsPlainOldData)
// struct FVector2D               TextureRectMin                 (Parm, IsPlainOldData)
// struct FVector2D               TextureRectMax                 (Parm, IsPlainOldData)
// bool                           bDrawEyeFirst                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClearBlack                    (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout");

	UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Params params;
	params.EyeRectMin = EyeRectMin;
	params.EyeRectMax = EyeRectMax;
	params.TextureRectMin = TextureRectMin;
	params.TextureRectMax = TextureRectMax;
	params.bDrawEyeFirst = bDrawEyeFirst;
	params.bClearBlack = bClearBlack;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
// ()
// Parameters:
// ESpectatorScreenMode           Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenMode(ESpectatorScreenMode Mode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode");

	UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Params params;
	params.Mode = Mode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
// ()
// Parameters:
// float                          Near                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Far                            (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::SetClippingPlanes(float Near, float Far)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes");

	UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Params params;
	params.Near = Near;
	params.Far = Far;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
// ()
// Parameters:
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EOrientPositionSelector> Options                        (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition");

	UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Params params;
	params.Yaw = Yaw;
	params.Options = Options;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplayFunctionLibrary::IsSpectatorScreenModeControllable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable");

	UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplayFunctionLibrary::IsInLowPersistenceMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode");

	UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled");

	UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected");

	UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplayFunctionLibrary::HasValidTrackingPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition");

	UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
// ()
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale");

	UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
// ()
// Parameters:
// bool                           bUseFocus                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bHasFocus                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::GetVRFocusState(bool* bUseFocus, bool* bHasFocus)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState");

	UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bUseFocus != nullptr)
		*bUseFocus = params.bUseFocus;
	if (bHasFocus != nullptr)
		*bHasFocus = params.bHasFocus;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)
// float                          LeftFOV                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RightFOV                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TopFOV                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          BottomFOV                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NearPlane                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FarPlane                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::GetTrackingSensorParameters(int Index, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, struct FVector* Origin, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive, float* BottomFOV)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters");

	UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (LeftFOV != nullptr)
		*LeftFOV = params.LeftFOV;
	if (RightFOV != nullptr)
		*RightFOV = params.RightFOV;
	if (TopFOV != nullptr)
		*TopFOV = params.TopFOV;
	if (BottomFOV != nullptr)
		*BottomFOV = params.BottomFOV;
	if (Distance != nullptr)
		*Distance = params.Distance;
	if (NearPlane != nullptr)
		*NearPlane = params.NearPlane;
	if (FarPlane != nullptr)
		*FarPlane = params.FarPlane;
	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
// ()
// Parameters:
// TEnumAsByte<EHMDTrackingOrigin> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EHMDTrackingOrigin> UHeadMountedDisplayFunctionLibrary::GetTrackingOrigin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin");

	UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHeadMountedDisplayFunctionLibrary::GetScreenPercentage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage");

	UHeadMountedDisplayFunctionLibrary_GetScreenPercentage_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
// ()
// Parameters:
// struct FVector                 CameraOrigin                   (Parm, OutParm, IsPlainOldData)
// struct FRotator                CameraRotation                 (Parm, OutParm, IsPlainOldData)
// float                          HFOV                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          VFOV                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CameraDistance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NearPlane                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FarPlane                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters");

	UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CameraOrigin != nullptr)
		*CameraOrigin = params.CameraOrigin;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
	if (HFOV != nullptr)
		*HFOV = params.HFOV;
	if (VFOV != nullptr)
		*VFOV = params.VFOV;
	if (CameraDistance != nullptr)
		*CameraDistance = params.CameraDistance;
	if (NearPlane != nullptr)
		*NearPlane = params.NearPlane;
	if (FarPlane != nullptr)
		*FarPlane = params.FarPlane;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
// ()
// Parameters:
// struct FRotator                DeviceRotation                 (Parm, OutParm, IsPlainOldData)
// struct FVector                 DevicePosition                 (Parm, OutParm, IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition");

	UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DeviceRotation != nullptr)
		*DeviceRotation = params.DeviceRotation;
	if (DevicePosition != nullptr)
		*DevicePosition = params.DevicePosition;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHeadMountedDisplayFunctionLibrary::GetNumOfTrackingSensors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors");

	UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
// ()
// Parameters:
// TEnumAsByte<EHMDWornState>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EHMDWornState> UHeadMountedDisplayFunctionLibrary::GetHMDWornState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState");

	UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName");

	UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::EnableLowPersistenceMode(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode");

	UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeadMountedDisplayFunctionLibrary::EnableHMD(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD");

	UHeadMountedDisplayFunctionLibrary_EnableHMD_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.IsTracked
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMotionControllerComponent::IsTracked()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.IsTracked");

	UMotionControllerComponent_IsTracked_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
// ()
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UMotionTrackedDeviceFunctionLibrary::SetIsControllerMotionTrackingEnabledByDefault(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault");

	UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
// ()
// Parameters:
// int                            playerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForDevice(int playerIndex, EControllerHand Hand)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice");

	UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Params params;
	params.playerIndex = playerIndex;
	params.Hand = Hand;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
// ()
// Parameters:
// class UMotionControllerComponent* MotionControllerComponent      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent");

	UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Params params;
	params.MotionControllerComponent = MotionControllerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackedDeviceCountManagementNecessary()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary");

	UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMotionTrackedDeviceFunctionLibrary::GetMotionTrackingEnabledControllerCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount");

	UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMotionTrackedDeviceFunctionLibrary::GetMaximumMotionTrackedControllerCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount");

	UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
// ()
// Parameters:
// int                            playerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfDevice(int playerIndex, EControllerHand Hand)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice");

	UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Params params;
	params.playerIndex = playerIndex;
	params.Hand = Hand;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
// ()
// Parameters:
// class UMotionControllerComponent* MotionControllerComponent      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent");

	UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Params params;
	params.MotionControllerComponent = MotionControllerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
// ()
// Parameters:
// int                            playerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfDevice(int playerIndex, EControllerHand Hand)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice");

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Params params;
	params.playerIndex = playerIndex;
	params.Hand = Hand;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
// ()
// Parameters:
// int                            playerIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfControllersForPlayer(int playerIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer");

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Params params;
	params.playerIndex = playerIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
// ()

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfAllControllers()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers");

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
// ()
// Parameters:
// class UMotionControllerComponent* MotionControllerComponent      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent");

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Params params;
	params.MotionControllerComponent = MotionControllerComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

