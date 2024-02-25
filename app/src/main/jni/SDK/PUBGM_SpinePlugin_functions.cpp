// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpinePlugin.SpineBoneDriverComponent.BeforeUpdateWorldTransform
// ()
// Parameters:
// class USpineSkeletonComponent* Skeleton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USpineBoneDriverComponent::BeforeUpdateWorldTransform(class USpineSkeletonComponent* Skeleton)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineBoneDriverComponent.BeforeUpdateWorldTransform");

	USpineBoneDriverComponent_BeforeUpdateWorldTransform_Params params;
	params.Skeleton = Skeleton;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.TrackEntry.SetTrackTime
// ()
// Parameters:
// float                          trackTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UTrackEntry::SetTrackTime(float trackTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetTrackTime");

	UTrackEntry_SetTrackTime_Params params;
	params.trackTime = trackTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.TrackEntry.SetTrackEnd
// ()
// Parameters:
// float                          trackEnd                       (Parm, ZeroConstructor, IsPlainOldData)

void UTrackEntry::SetTrackEnd(float trackEnd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetTrackEnd");

	UTrackEntry_SetTrackEnd_Params params;
	params.trackEnd = trackEnd;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.TrackEntry.SetTimeScale
// ()
// Parameters:
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)

void UTrackEntry::SetTimeScale(float TimeScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetTimeScale");

	UTrackEntry_SetTimeScale_Params params;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.TrackEntry.SetMixTime
// ()
// Parameters:
// float                          mixTime                        (Parm, ZeroConstructor, IsPlainOldData)

void UTrackEntry::SetMixTime(float mixTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetMixTime");

	UTrackEntry_SetMixTime_Params params;
	params.mixTime = mixTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.TrackEntry.SetMixDuration
// ()
// Parameters:
// float                          mixDuration                    (Parm, ZeroConstructor, IsPlainOldData)

void UTrackEntry::SetMixDuration(float mixDuration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetMixDuration");

	UTrackEntry_SetMixDuration_Params params;
	params.mixDuration = mixDuration;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.TrackEntry.SetLoop
// ()
// Parameters:
// bool                           Loop                           (Parm, ZeroConstructor, IsPlainOldData)

void UTrackEntry::SetLoop(bool Loop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetLoop");

	UTrackEntry_SetLoop_Params params;
	params.Loop = Loop;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.TrackEntry.SetEventThreshold
// ()
// Parameters:
// float                          eventThreshold                 (Parm, ZeroConstructor, IsPlainOldData)

void UTrackEntry::SetEventThreshold(float eventThreshold)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetEventThreshold");

	UTrackEntry_SetEventThreshold_Params params;
	params.eventThreshold = eventThreshold;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.TrackEntry.SetDrawOrderThreshold
// ()
// Parameters:
// float                          drawOrderThreshold             (Parm, ZeroConstructor, IsPlainOldData)

void UTrackEntry::SetDrawOrderThreshold(float drawOrderThreshold)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetDrawOrderThreshold");

	UTrackEntry_SetDrawOrderThreshold_Params params;
	params.drawOrderThreshold = drawOrderThreshold;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.TrackEntry.SetDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void UTrackEntry::SetDelay(float Delay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetDelay");

	UTrackEntry_SetDelay_Params params;
	params.Delay = Delay;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.TrackEntry.SetAttachmentThreshold
// ()
// Parameters:
// float                          attachmentThreshold            (Parm, ZeroConstructor, IsPlainOldData)

void UTrackEntry::SetAttachmentThreshold(float attachmentThreshold)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetAttachmentThreshold");

	UTrackEntry_SetAttachmentThreshold_Params params;
	params.attachmentThreshold = attachmentThreshold;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.TrackEntry.SetAnimationStart
// ()
// Parameters:
// float                          animationStart                 (Parm, ZeroConstructor, IsPlainOldData)

void UTrackEntry::SetAnimationStart(float animationStart)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetAnimationStart");

	UTrackEntry_SetAnimationStart_Params params;
	params.animationStart = animationStart;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.TrackEntry.SetAnimationLast
// ()
// Parameters:
// float                          animationLast                  (Parm, ZeroConstructor, IsPlainOldData)

void UTrackEntry::SetAnimationLast(float animationLast)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetAnimationLast");

	UTrackEntry_SetAnimationLast_Params params;
	params.animationLast = animationLast;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.TrackEntry.SetAnimationEnd
// ()
// Parameters:
// float                          animationEnd                   (Parm, ZeroConstructor, IsPlainOldData)

void UTrackEntry::SetAnimationEnd(float animationEnd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetAnimationEnd");

	UTrackEntry_SetAnimationEnd_Params params;
	params.animationEnd = animationEnd;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.TrackEntry.SetAlpha
// ()
// Parameters:
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)

void UTrackEntry::SetAlpha(float Alpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetAlpha");

	UTrackEntry_SetAlpha_Params params;
	params.Alpha = Alpha;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.TrackEntry.isValidAnimation
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTrackEntry::isValidAnimation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.isValidAnimation");

	UTrackEntry_isValidAnimation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.TrackEntry.GetTrackTime
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTrackEntry::GetTrackTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetTrackTime");

	UTrackEntry_GetTrackTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.TrackEntry.GetTrackIndex
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTrackEntry::GetTrackIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetTrackIndex");

	UTrackEntry_GetTrackIndex_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.TrackEntry.GetTrackEnd
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTrackEntry::GetTrackEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetTrackEnd");

	UTrackEntry_GetTrackEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.TrackEntry.GetTimeScale
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTrackEntry::GetTimeScale()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetTimeScale");

	UTrackEntry_GetTimeScale_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.TrackEntry.GetMixTime
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTrackEntry::GetMixTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetMixTime");

	UTrackEntry_GetMixTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.TrackEntry.GetMixDuration
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTrackEntry::GetMixDuration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetMixDuration");

	UTrackEntry_GetMixDuration_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.TrackEntry.GetLoop
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTrackEntry::GetLoop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetLoop");

	UTrackEntry_GetLoop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.TrackEntry.GetEventThreshold
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTrackEntry::GetEventThreshold()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetEventThreshold");

	UTrackEntry_GetEventThreshold_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.TrackEntry.GetDrawOrderThreshold
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTrackEntry::GetDrawOrderThreshold()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetDrawOrderThreshold");

	UTrackEntry_GetDrawOrderThreshold_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.TrackEntry.GetDelay
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTrackEntry::GetDelay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetDelay");

	UTrackEntry_GetDelay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.TrackEntry.GetAttachmentThreshold
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTrackEntry::GetAttachmentThreshold()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetAttachmentThreshold");

	UTrackEntry_GetAttachmentThreshold_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.TrackEntry.GetAnimationStart
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTrackEntry::GetAnimationStart()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetAnimationStart");

	UTrackEntry_GetAnimationStart_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.TrackEntry.getAnimationName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UTrackEntry::getAnimationName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.getAnimationName");

	UTrackEntry_getAnimationName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.TrackEntry.GetAnimationLast
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTrackEntry::GetAnimationLast()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetAnimationLast");

	UTrackEntry_GetAnimationLast_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.TrackEntry.GetAnimationEnd
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTrackEntry::GetAnimationEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetAnimationEnd");

	UTrackEntry_GetAnimationEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.TrackEntry.getAnimationDuration
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTrackEntry::getAnimationDuration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.getAnimationDuration");

	UTrackEntry_getAnimationDuration_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.TrackEntry.GetAlpha
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTrackEntry::GetAlpha()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetAlpha");

	UTrackEntry_GetAlpha_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineSkeletonComponent.UpdateWorldTransform
// ()

void USpineSkeletonComponent::UpdateWorldTransform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.UpdateWorldTransform");

	USpineSkeletonComponent_UpdateWorldTransform_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineSkeletonComponent.SetToSetupPose
// ()

void USpineSkeletonComponent::SetToSetupPose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.SetToSetupPose");

	USpineSkeletonComponent_SetToSetupPose_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineSkeletonComponent.SetSlotsToSetupPose
// ()

void USpineSkeletonComponent::SetSlotsToSetupPose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.SetSlotsToSetupPose");

	USpineSkeletonComponent_SetSlotsToSetupPose_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineSkeletonComponent.SetSlotColor
// ()
// Parameters:
// struct FString                 SlotName                       (ConstParm, Parm, ZeroConstructor)
// struct FColor                  Color                          (ConstParm, Parm, IsPlainOldData)

void USpineSkeletonComponent::SetSlotColor(const struct FString& SlotName, const struct FColor& Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.SetSlotColor");

	USpineSkeletonComponent_SetSlotColor_Params params;
	params.SlotName = SlotName;
	params.Color = Color;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineSkeletonComponent.SetSkins
// ()
// Parameters:
// TArray<struct FString>         SkinNames                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpineSkeletonComponent::SetSkins(TArray<struct FString>* SkinNames)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.SetSkins");

	USpineSkeletonComponent_SetSkins_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SkinNames != nullptr)
		*SkinNames = params.SkinNames;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineSkeletonComponent.SetSkin
// ()
// Parameters:
// struct FString                 SkinName                       (ConstParm, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpineSkeletonComponent::SetSkin(const struct FString& SkinName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.SetSkin");

	USpineSkeletonComponent_SetSkin_Params params;
	params.SkinName = SkinName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineSkeletonComponent.SetScaleY
// ()
// Parameters:
// float                          ScaleY                         (Parm, ZeroConstructor, IsPlainOldData)

void USpineSkeletonComponent::SetScaleY(float ScaleY)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.SetScaleY");

	USpineSkeletonComponent_SetScaleY_Params params;
	params.ScaleY = ScaleY;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineSkeletonComponent.SetScaleX
// ()
// Parameters:
// float                          ScaleX                         (Parm, ZeroConstructor, IsPlainOldData)

void USpineSkeletonComponent::SetScaleX(float ScaleX)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.SetScaleX");

	USpineSkeletonComponent_SetScaleX_Params params;
	params.ScaleX = ScaleX;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineSkeletonComponent.SetBoneWorldPosition
// ()
// Parameters:
// struct FString                 BoneName                       (Parm, ZeroConstructor)
// struct FVector                 Position                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void USpineSkeletonComponent::SetBoneWorldPosition(const struct FString& BoneName, const struct FVector& Position)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.SetBoneWorldPosition");

	USpineSkeletonComponent_SetBoneWorldPosition_Params params;
	params.BoneName = BoneName;
	params.Position = Position;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineSkeletonComponent.SetBonesToSetupPose
// ()

void USpineSkeletonComponent::SetBonesToSetupPose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.SetBonesToSetupPose");

	USpineSkeletonComponent_SetBonesToSetupPose_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineSkeletonComponent.SetAttachment
// ()
// Parameters:
// struct FString                 SlotName                       (ConstParm, Parm, ZeroConstructor)
// struct FString                 AttachmentName                 (ConstParm, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpineSkeletonComponent::SetAttachment(const struct FString& SlotName, const struct FString& AttachmentName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.SetAttachment");

	USpineSkeletonComponent_SetAttachment_Params params;
	params.SlotName = SlotName;
	params.AttachmentName = AttachmentName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineSkeletonComponent.HasSlot
// ()
// Parameters:
// struct FString                 SlotName                       (ConstParm, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpineSkeletonComponent::HasSlot(const struct FString& SlotName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.HasSlot");

	USpineSkeletonComponent_HasSlot_Params params;
	params.SlotName = SlotName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineSkeletonComponent.HasSkin
// ()
// Parameters:
// struct FString                 SkinName                       (ConstParm, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpineSkeletonComponent::HasSkin(const struct FString& SkinName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.HasSkin");

	USpineSkeletonComponent_HasSkin_Params params;
	params.SkinName = SkinName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineSkeletonComponent.HasBone
// ()
// Parameters:
// struct FString                 BoneName                       (ConstParm, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpineSkeletonComponent::HasBone(const struct FString& BoneName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.HasBone");

	USpineSkeletonComponent_HasBone_Params params;
	params.BoneName = BoneName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineSkeletonComponent.HasAnimation
// ()
// Parameters:
// struct FString                 AnimationName                  (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpineSkeletonComponent::HasAnimation(const struct FString& AnimationName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.HasAnimation");

	USpineSkeletonComponent_HasAnimation_Params params;
	params.AnimationName = AnimationName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineSkeletonComponent.GetSlots
// ()
// Parameters:
// TArray<struct FString>         Slots                          (Parm, OutParm, ZeroConstructor)

void USpineSkeletonComponent::GetSlots(TArray<struct FString>* Slots)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.GetSlots");

	USpineSkeletonComponent_GetSlots_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Slots != nullptr)
		*Slots = params.Slots;
}


// Function SpinePlugin.SpineSkeletonComponent.GetSkins
// ()
// Parameters:
// TArray<struct FString>         Skins                          (Parm, OutParm, ZeroConstructor)

void USpineSkeletonComponent::GetSkins(TArray<struct FString>* Skins)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.GetSkins");

	USpineSkeletonComponent_GetSkins_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Skins != nullptr)
		*Skins = params.Skins;
}


// Function SpinePlugin.SpineSkeletonComponent.GetScaleY
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USpineSkeletonComponent::GetScaleY()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.GetScaleY");

	USpineSkeletonComponent_GetScaleY_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineSkeletonComponent.GetScaleX
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USpineSkeletonComponent::GetScaleX()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.GetScaleX");

	USpineSkeletonComponent_GetScaleX_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineSkeletonComponent.GetBoneWorldTransform
// ()
// Parameters:
// struct FString                 BoneName                       (Parm, ZeroConstructor)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform USpineSkeletonComponent::GetBoneWorldTransform(const struct FString& BoneName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.GetBoneWorldTransform");

	USpineSkeletonComponent_GetBoneWorldTransform_Params params;
	params.BoneName = BoneName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineSkeletonComponent.GetBones
// ()
// Parameters:
// TArray<struct FString>         Bones                          (Parm, OutParm, ZeroConstructor)

void USpineSkeletonComponent::GetBones(TArray<struct FString>* Bones)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.GetBones");

	USpineSkeletonComponent_GetBones_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Bones != nullptr)
		*Bones = params.Bones;
}


// Function SpinePlugin.SpineSkeletonComponent.GetAnimations
// ()
// Parameters:
// TArray<struct FString>         Animations                     (Parm, OutParm, ZeroConstructor)

void USpineSkeletonComponent::GetAnimations(TArray<struct FString>* Animations)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.GetAnimations");

	USpineSkeletonComponent_GetAnimations_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Animations != nullptr)
		*Animations = params.Animations;
}


// Function SpinePlugin.SpineSkeletonComponent.getAnimationDuration
// ()
// Parameters:
// struct FString                 AnimationName                  (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USpineSkeletonComponent::getAnimationDuration(const struct FString& AnimationName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.getAnimationDuration");

	USpineSkeletonComponent_getAnimationDuration_Params params;
	params.AnimationName = AnimationName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineSkeletonAnimationComponent.SetTimeScale
// ()
// Parameters:
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)

void USpineSkeletonAnimationComponent::SetTimeScale(float TimeScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.SetTimeScale");

	USpineSkeletonAnimationComponent_SetTimeScale_Params params;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineSkeletonAnimationComponent.SetPlaybackTime
// ()
// Parameters:
// float                          InPlaybackTime                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCallDelegates                 (Parm, ZeroConstructor, IsPlainOldData)

void USpineSkeletonAnimationComponent::SetPlaybackTime(float InPlaybackTime, bool bCallDelegates)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.SetPlaybackTime");

	USpineSkeletonAnimationComponent_SetPlaybackTime_Params params;
	params.InPlaybackTime = InPlaybackTime;
	params.bCallDelegates = bCallDelegates;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineSkeletonAnimationComponent.SetEmptyAnimation
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          mixDuration                    (Parm, ZeroConstructor, IsPlainOldData)
// class UTrackEntry*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTrackEntry* USpineSkeletonAnimationComponent::SetEmptyAnimation(int TrackIndex, float mixDuration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.SetEmptyAnimation");

	USpineSkeletonAnimationComponent_SetEmptyAnimation_Params params;
	params.TrackIndex = TrackIndex;
	params.mixDuration = mixDuration;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineSkeletonAnimationComponent.SetAutoPlay
// ()
// Parameters:
// bool                           bInAutoPlays                   (Parm, ZeroConstructor, IsPlainOldData)

void USpineSkeletonAnimationComponent::SetAutoPlay(bool bInAutoPlays)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.SetAutoPlay");

	USpineSkeletonAnimationComponent_SetAutoPlay_Params params;
	params.bInAutoPlays = bInAutoPlays;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineSkeletonAnimationComponent.SetAnimation
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AnimationName                  (Parm, ZeroConstructor)
// bool                           Loop                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTrackEntry*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTrackEntry* USpineSkeletonAnimationComponent::SetAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.SetAnimation");

	USpineSkeletonAnimationComponent_SetAnimation_Params params;
	params.TrackIndex = TrackIndex;
	params.AnimationName = AnimationName;
	params.Loop = Loop;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineSkeletonAnimationComponent.GetTimeScale
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USpineSkeletonAnimationComponent::GetTimeScale()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.GetTimeScale");

	USpineSkeletonAnimationComponent_GetTimeScale_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineSkeletonAnimationComponent.GetCurrent
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class UTrackEntry*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTrackEntry* USpineSkeletonAnimationComponent::GetCurrent(int TrackIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.GetCurrent");

	USpineSkeletonAnimationComponent_GetCurrent_Params params;
	params.TrackIndex = TrackIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTracks
// ()

void USpineSkeletonAnimationComponent::ClearTracks()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTracks");

	USpineSkeletonAnimationComponent_ClearTracks_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTrack
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void USpineSkeletonAnimationComponent::ClearTrack(int TrackIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTrack");

	USpineSkeletonAnimationComponent_ClearTrack_Params params;
	params.TrackIndex = TrackIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineSkeletonAnimationComponent.AddEmptyAnimation
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          mixDuration                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTrackEntry*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTrackEntry* USpineSkeletonAnimationComponent::AddEmptyAnimation(int TrackIndex, float mixDuration, float Delay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.AddEmptyAnimation");

	USpineSkeletonAnimationComponent_AddEmptyAnimation_Params params;
	params.TrackIndex = TrackIndex;
	params.mixDuration = mixDuration;
	params.Delay = Delay;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineSkeletonAnimationComponent.AddAnimation
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AnimationName                  (Parm, ZeroConstructor)
// bool                           Loop                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTrackEntry*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTrackEntry* USpineSkeletonAnimationComponent::AddAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop, float Delay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.AddAnimation");

	USpineSkeletonAnimationComponent_AddAnimation_Params params;
	params.TrackIndex = TrackIndex;
	params.AnimationName = AnimationName;
	params.Loop = Loop;
	params.Delay = Delay;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineWidget.UpdateWorldTransform
// ()

void USpineWidget::UpdateWorldTransform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.UpdateWorldTransform");

	USpineWidget_UpdateWorldTransform_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineWidget.Tick
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CallDelegates                  (Parm, ZeroConstructor, IsPlainOldData)

void USpineWidget::Tick(float DeltaTime, bool CallDelegates)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.Tick");

	USpineWidget_Tick_Params params;
	params.DeltaTime = DeltaTime;
	params.CallDelegates = CallDelegates;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineWidget.SetToSetupPose
// ()

void USpineWidget::SetToSetupPose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetToSetupPose");

	USpineWidget_SetToSetupPose_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineWidget.SetTimeScale
// ()
// Parameters:
// float                          TimeScale                      (Parm, ZeroConstructor, IsPlainOldData)

void USpineWidget::SetTimeScale(float TimeScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetTimeScale");

	USpineWidget_SetTimeScale_Params params;
	params.TimeScale = TimeScale;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineWidget.SetSlotsToSetupPose
// ()

void USpineWidget::SetSlotsToSetupPose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetSlotsToSetupPose");

	USpineWidget_SetSlotsToSetupPose_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineWidget.SetSkins
// ()
// Parameters:
// TArray<struct FString>         SkinNames                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpineWidget::SetSkins(TArray<struct FString>* SkinNames)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetSkins");

	USpineWidget_SetSkins_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SkinNames != nullptr)
		*SkinNames = params.SkinNames;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineWidget.SetSkin
// ()
// Parameters:
// struct FString                 SkinName                       (ConstParm, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpineWidget::SetSkin(const struct FString& SkinName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetSkin");

	USpineWidget_SetSkin_Params params;
	params.SkinName = SkinName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineWidget.SetScaleY
// ()
// Parameters:
// float                          ScaleY                         (Parm, ZeroConstructor, IsPlainOldData)

void USpineWidget::SetScaleY(float ScaleY)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetScaleY");

	USpineWidget_SetScaleY_Params params;
	params.ScaleY = ScaleY;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineWidget.SetScaleX
// ()
// Parameters:
// float                          ScaleX                         (Parm, ZeroConstructor, IsPlainOldData)

void USpineWidget::SetScaleX(float ScaleX)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetScaleX");

	USpineWidget_SetScaleX_Params params;
	params.ScaleX = ScaleX;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineWidget.SetScale
// ()
// Parameters:
// float                          inScale                        (Parm, ZeroConstructor, IsPlainOldData)

void USpineWidget::SetScale(float inScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetScale");

	USpineWidget_SetScale_Params params;
	params.inScale = inScale;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineWidget.SetPlaybackTime
// ()
// Parameters:
// float                          InPlaybackTime                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCallDelegates                 (Parm, ZeroConstructor, IsPlainOldData)

void USpineWidget::SetPlaybackTime(float InPlaybackTime, bool bCallDelegates)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetPlaybackTime");

	USpineWidget_SetPlaybackTime_Params params;
	params.InPlaybackTime = InPlaybackTime;
	params.bCallDelegates = bCallDelegates;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineWidget.SetEmptyAnimation
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          mixDuration                    (Parm, ZeroConstructor, IsPlainOldData)
// class UTrackEntry*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTrackEntry* USpineWidget::SetEmptyAnimation(int TrackIndex, float mixDuration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetEmptyAnimation");

	USpineWidget_SetEmptyAnimation_Params params;
	params.TrackIndex = TrackIndex;
	params.mixDuration = mixDuration;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineWidget.SetColor
// ()
// Parameters:
// struct FLinearColor            InColor                        (Parm, IsPlainOldData)

void USpineWidget::SetColor(const struct FLinearColor& InColor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetColor");

	USpineWidget_SetColor_Params params;
	params.InColor = InColor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineWidget.SetBonesToSetupPose
// ()

void USpineWidget::SetBonesToSetupPose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetBonesToSetupPose");

	USpineWidget_SetBonesToSetupPose_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineWidget.SetAutoPlay
// ()
// Parameters:
// bool                           bInAutoPlays                   (Parm, ZeroConstructor, IsPlainOldData)

void USpineWidget::SetAutoPlay(bool bInAutoPlays)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetAutoPlay");

	USpineWidget_SetAutoPlay_Params params;
	params.bInAutoPlays = bInAutoPlays;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineWidget.SetAttachment
// ()
// Parameters:
// struct FString                 SlotName                       (ConstParm, Parm, ZeroConstructor)
// struct FString                 AttachmentName                 (ConstParm, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpineWidget::SetAttachment(const struct FString& SlotName, const struct FString& AttachmentName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetAttachment");

	USpineWidget_SetAttachment_Params params;
	params.SlotName = SlotName;
	params.AttachmentName = AttachmentName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineWidget.SetAnimation
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AnimationName                  (Parm, ZeroConstructor)
// bool                           Loop                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTrackEntry*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTrackEntry* USpineWidget::SetAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetAnimation");

	USpineWidget_SetAnimation_Params params;
	params.TrackIndex = TrackIndex;
	params.AnimationName = AnimationName;
	params.Loop = Loop;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineWidget.HasSlot
// ()
// Parameters:
// struct FString                 SlotName                       (ConstParm, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpineWidget::HasSlot(const struct FString& SlotName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.HasSlot");

	USpineWidget_HasSlot_Params params;
	params.SlotName = SlotName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineWidget.HasSkin
// ()
// Parameters:
// struct FString                 SkinName                       (ConstParm, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpineWidget::HasSkin(const struct FString& SkinName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.HasSkin");

	USpineWidget_HasSkin_Params params;
	params.SkinName = SkinName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineWidget.HasBone
// ()
// Parameters:
// struct FString                 BoneName                       (ConstParm, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpineWidget::HasBone(const struct FString& BoneName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.HasBone");

	USpineWidget_HasBone_Params params;
	params.BoneName = BoneName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineWidget.HasAnimation
// ()
// Parameters:
// struct FString                 AnimationName                  (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpineWidget::HasAnimation(const struct FString& AnimationName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.HasAnimation");

	USpineWidget_HasAnimation_Params params;
	params.AnimationName = AnimationName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineWidget.GetTimeScale
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USpineWidget::GetTimeScale()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.GetTimeScale");

	USpineWidget_GetTimeScale_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineWidget.GetSlots
// ()
// Parameters:
// TArray<struct FString>         Slots                          (Parm, OutParm, ZeroConstructor)

void USpineWidget::GetSlots(TArray<struct FString>* Slots)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.GetSlots");

	USpineWidget_GetSlots_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Slots != nullptr)
		*Slots = params.Slots;
}


// Function SpinePlugin.SpineWidget.GetSkins
// ()
// Parameters:
// TArray<struct FString>         Skins                          (Parm, OutParm, ZeroConstructor)

void USpineWidget::GetSkins(TArray<struct FString>* Skins)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.GetSkins");

	USpineWidget_GetSkins_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Skins != nullptr)
		*Skins = params.Skins;
}


// Function SpinePlugin.SpineWidget.GetScaleY
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USpineWidget::GetScaleY()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.GetScaleY");

	USpineWidget_GetScaleY_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineWidget.GetScaleX
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USpineWidget::GetScaleX()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.GetScaleX");

	USpineWidget_GetScaleX_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineWidget.GetScale
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USpineWidget::GetScale()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.GetScale");

	USpineWidget_GetScale_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineWidget.GetCurrent
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class UTrackEntry*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTrackEntry* USpineWidget::GetCurrent(int TrackIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.GetCurrent");

	USpineWidget_GetCurrent_Params params;
	params.TrackIndex = TrackIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineWidget.GetColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor USpineWidget::GetColor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.GetColor");

	USpineWidget_GetColor_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineWidget.GetBones
// ()
// Parameters:
// TArray<struct FString>         Bones                          (Parm, OutParm, ZeroConstructor)

void USpineWidget::GetBones(TArray<struct FString>* Bones)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.GetBones");

	USpineWidget_GetBones_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Bones != nullptr)
		*Bones = params.Bones;
}


// Function SpinePlugin.SpineWidget.GetAnimations
// ()
// Parameters:
// TArray<struct FString>         Animations                     (Parm, OutParm, ZeroConstructor)

void USpineWidget::GetAnimations(TArray<struct FString>* Animations)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.GetAnimations");

	USpineWidget_GetAnimations_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Animations != nullptr)
		*Animations = params.Animations;
}


// Function SpinePlugin.SpineWidget.getAnimationDuration
// ()
// Parameters:
// struct FString                 AnimationName                  (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USpineWidget::getAnimationDuration(const struct FString& AnimationName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.getAnimationDuration");

	USpineWidget_getAnimationDuration_Params params;
	params.AnimationName = AnimationName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineWidget.ClearTracks
// ()

void USpineWidget::ClearTracks()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.ClearTracks");

	USpineWidget_ClearTracks_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineWidget.ClearTrack
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void USpineWidget::ClearTrack(int TrackIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.ClearTrack");

	USpineWidget_ClearTrack_Params params;
	params.TrackIndex = TrackIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SpinePlugin.SpineWidget.AddEmptyAnimation
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          mixDuration                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTrackEntry*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTrackEntry* USpineWidget::AddEmptyAnimation(int TrackIndex, float mixDuration, float Delay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.AddEmptyAnimation");

	USpineWidget_AddEmptyAnimation_Params params;
	params.TrackIndex = TrackIndex;
	params.mixDuration = mixDuration;
	params.Delay = Delay;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpinePlugin.SpineWidget.AddAnimation
// ()
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AnimationName                  (Parm, ZeroConstructor)
// bool                           Loop                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTrackEntry*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTrackEntry* USpineWidget::AddAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop, float Delay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.AddAnimation");

	USpineWidget_AddAnimation_Params params;
	params.TrackIndex = TrackIndex;
	params.AnimationName = AnimationName;
	params.Loop = Loop;
	params.Delay = Delay;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

