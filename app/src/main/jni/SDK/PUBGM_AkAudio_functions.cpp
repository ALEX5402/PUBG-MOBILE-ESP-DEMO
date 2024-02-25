// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AkAudio.AkAcousticPortal.OpenPortal
// ()

void AAkAcousticPortal::OpenPortal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.OpenPortal");

	AAkAcousticPortal_OpenPortal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAcousticPortal.GetCurrentState
// ()
// Parameters:
// EAkAcousticPortalState         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAkAcousticPortalState AAkAcousticPortal::GetCurrentState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.GetCurrentState");

	AAkAcousticPortal_GetCurrentState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAcousticPortal.ClosePortal
// ()

void AAkAcousticPortal::ClosePortal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.ClosePortal");

	AAkAcousticPortal_ClosePortal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAmbientSound.StopAmbientSound
// ()

void AAkAmbientSound::StopAmbientSound()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSound.StopAmbientSound");

	AAkAmbientSound_StopAmbientSound_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAmbientSound.StartAmbientSound
// ()

void AAkAmbientSound::StartAmbientSound()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSound.StartAmbientSound");

	AAkAmbientSound_StartAmbientSound_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAreaCheckComponent.UnRegistAKAreaVolume
// ()
// Parameters:
// class AActor*                  AreaVolume                     (Parm, ZeroConstructor, IsPlainOldData)
// ECustomAKAreaType              AreaType                       (Parm, ZeroConstructor, IsPlainOldData)

void UAkAreaCheckComponent::UnRegistAKAreaVolume(class AActor* AreaVolume, ECustomAKAreaType AreaType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAreaCheckComponent.UnRegistAKAreaVolume");

	UAkAreaCheckComponent_UnRegistAKAreaVolume_Params params;
	params.AreaVolume = AreaVolume;
	params.AreaType = AreaType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAreaCheckComponent.RegistAKAreaVolume
// ()
// Parameters:
// class AActor*                  AreaVolume                     (Parm, ZeroConstructor, IsPlainOldData)
// ECustomAKAreaType              AreaType                       (Parm, ZeroConstructor, IsPlainOldData)

void UAkAreaCheckComponent::RegistAKAreaVolume(class AActor* AreaVolume, ECustomAKAreaType AreaType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAreaCheckComponent.RegistAKAreaVolume");

	UAkAreaCheckComponent_RegistAKAreaVolume_Params params;
	params.AreaVolume = AreaVolume;
	params.AreaType = AreaType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAreaCheckComponent.CheckVoiceAvailable
// ()
// Parameters:
// struct FVector                 VoicePostion                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAkAreaCheckComponent::CheckVoiceAvailable(const struct FVector& VoicePostion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAreaCheckComponent.CheckVoiceAvailable");

	UAkAreaCheckComponent_CheckVoiceAvailable_Params params;
	params.VoicePostion = VoicePostion;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAreaCheckVolume.IsInsideVolume
// ()
// Parameters:
// struct FVector                 OrignPosition                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAkAreaCheckVolume::IsInsideVolume(const struct FVector& OrignPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAreaCheckVolume.IsInsideVolume");

	AAkAreaCheckVolume_IsInsideVolume_Params params;
	params.OrignPosition = OrignPosition;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAreaCheckVolume.GetAKAreaType
// ()
// Parameters:
// ECustomAKAreaType              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECustomAKAreaType AAkAreaCheckVolume::GetAKAreaType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAreaCheckVolume.GetAKAreaType");

	AAkAreaCheckVolume_GetAKAreaType_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioDeviceSettings.InitConfig
// ()

void UAkAudioDeviceSettings::InitConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioDeviceSettings.InitConfig");

	UAkAudioDeviceSettings_InitConfig_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioMonitor.UpdateAkComponentInfo
// ()
// Parameters:
// TMap<struct FString, struct FAkCombinedInfo> OutList                        (Parm, OutParm, ZeroConstructor)

void UAkAudioMonitor::UpdateAkComponentInfo(TMap<struct FString, struct FAkCombinedInfo>* OutList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.UpdateAkComponentInfo");

	UAkAudioMonitor_UpdateAkComponentInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutList != nullptr)
		*OutList = params.OutList;
}


// Function AkAudio.AkAudioMonitor.Update
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UAkAudioMonitor::Update(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.Update");

	UAkAudioMonitor_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioMonitor.SetUpdateInterval
// ()
// Parameters:
// float                          NewUpdateInterval              (Parm, ZeroConstructor, IsPlainOldData)

void UAkAudioMonitor::SetUpdateInterval(float NewUpdateInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.SetUpdateInterval");

	UAkAudioMonitor_SetUpdateInterval_Params params;
	params.NewUpdateInterval = NewUpdateInterval;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioMonitor.SetMonitorFlag
// ()
// Parameters:
// TArray<unsigned char>          InFlags                        (Parm, OutParm, ZeroConstructor)
// unsigned char                  TotalPlayCount                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ObjectPlayCount                (Parm, ZeroConstructor, IsPlainOldData)

void UAkAudioMonitor::SetMonitorFlag(unsigned char TotalPlayCount, unsigned char ObjectPlayCount, TArray<unsigned char>* InFlags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.SetMonitorFlag");

	UAkAudioMonitor_SetMonitorFlag_Params params;
	params.TotalPlayCount = TotalPlayCount;
	params.ObjectPlayCount = ObjectPlayCount;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InFlags != nullptr)
		*InFlags = params.InFlags;
}


// Function AkAudio.AkAudioMonitor.OnReportError
// ()
// Parameters:
// struct FString                 FunctionName                   (ConstParm, Parm, ZeroConstructor)
// unsigned char                  ErrorAkCode                    (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       NumericParam                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 StrParam                       (Parm, ZeroConstructor)

void UAkAudioMonitor::OnReportError(const struct FString& FunctionName, unsigned char ErrorAkCode, uint64_t NumericParam, const struct FString& StrParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.OnReportError");

	UAkAudioMonitor_OnReportError_Params params;
	params.FunctionName = FunctionName;
	params.ErrorAkCode = ErrorAkCode;
	params.NumericParam = NumericParam;
	params.StrParam = StrParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioMonitor.OnAkAudioEventTrigger
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            code                           (Parm, ZeroConstructor, IsPlainOldData)

void UAkAudioMonitor::OnAkAudioEventTrigger(const struct FString& Name, int code)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.OnAkAudioEventTrigger");

	UAkAudioMonitor_OnAkAudioEventTrigger_Params params;
	params.Name = Name;
	params.code = code;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioMonitor.OnAkAudioBankTrigger
// ()
// Parameters:
// bool                           bUnload                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BankName                       (Parm, ZeroConstructor)
// int8_t                         RefCount                       (Parm, ZeroConstructor, IsPlainOldData)

void UAkAudioMonitor::OnAkAudioBankTrigger(bool bUnload, const struct FString& BankName, int8_t RefCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.OnAkAudioBankTrigger");

	UAkAudioMonitor_OnAkAudioBankTrigger_Params params;
	params.bUnload = bUnload;
	params.BankName = BankName;
	params.RefCount = RefCount;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioMonitor.IsMonitorInit
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAkAudioMonitor::IsMonitorInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.IsMonitorInit");

	UAkAudioMonitor_IsMonitorInit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.IsAkOutOfAttenuation
// ()
// Parameters:
// class UAkComponent*            AkComp                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Attenuation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAkAudioMonitor::IsAkOutOfAttenuation(class UAkComponent* AkComp, float Attenuation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.IsAkOutOfAttenuation");

	UAkAudioMonitor_IsAkOutOfAttenuation_Params params;
	params.AkComp = AkComp;
	params.Attenuation = Attenuation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetTotalPlayRecord
// ()
// Parameters:
// TArray<uint16_t>               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<uint16_t> UAkAudioMonitor::GetTotalPlayRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetTotalPlayRecord");

	UAkAudioMonitor_GetTotalPlayRecord_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetSwitchValue
// ()
// Parameters:
// class UAkComponent*            Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 SwitchName                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAkAudioMonitor::GetSwitchValue(class UAkComponent* Component, const struct FString& SwitchName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetSwitchValue");

	UAkAudioMonitor_GetSwitchValue_Params params;
	params.Component = Component;
	params.SwitchName = SwitchName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetSwitchNames
// ()
// Parameters:
// class UAkComponent*            Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UAkAudioMonitor::GetSwitchNames(class UAkComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetSwitchNames");

	UAkAudioMonitor_GetSwitchNames_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetRTPCValueByID
// ()
// Parameters:
// class UAkComponent*            Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// uint32_t                       RTPCID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAkAudioMonitor::GetRTPCValueByID(class UAkComponent* Component, uint32_t RTPCID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetRTPCValueByID");

	UAkAudioMonitor_GetRTPCValueByID_Params params;
	params.Component = Component;
	params.RTPCID = RTPCID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetRTPCValue
// ()
// Parameters:
// class UAkComponent*            Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 RTPCName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAkAudioMonitor::GetRTPCValue(class UAkComponent* Component, const struct FString& RTPCName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetRTPCValue");

	UAkAudioMonitor_GetRTPCValue_Params params;
	params.Component = Component;
	params.RTPCName = RTPCName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetRTPCNames
// ()
// Parameters:
// class UAkComponent*            Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UAkAudioMonitor::GetRTPCNames(class UAkComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetRTPCNames");

	UAkAudioMonitor_GetRTPCNames_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetRTPCIDs
// ()
// Parameters:
// class UAkComponent*            Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<uint32_t>               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<uint32_t> UAkAudioMonitor::GetRTPCIDs(class UAkComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetRTPCIDs");

	UAkAudioMonitor_GetRTPCIDs_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetReportErrorRecord
// ()
// Parameters:
// TMap<unsigned char, struct FAKErrorInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<unsigned char, struct FAKErrorInfo> UAkAudioMonitor::GetReportErrorRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetReportErrorRecord");

	UAkAudioMonitor_GetReportErrorRecord_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetPostion
// ()
// Parameters:
// class UAkComponent*            Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAkAudioMonitor::GetPostion(class UAkComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetPostion");

	UAkAudioMonitor_GetPostion_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetPlayingID
// ()
// Parameters:
// class UAkComponent*            Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UAkAudioMonitor::GetPlayingID(class UAkComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetPlayingID");

	UAkAudioMonitor_GetPlayingID_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetPlayEventName
// ()
// Parameters:
// class UAkComponent*            Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            PlayID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAkAudioMonitor::GetPlayEventName(class UAkComponent* Component, int PlayID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetPlayEventName");

	UAkAudioMonitor_GetPlayEventName_Params params;
	params.Component = Component;
	params.PlayID = PlayID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetObjectPlayRecord
// ()
// Parameters:
// TMap<struct FString, unsigned char> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<struct FString, unsigned char> UAkAudioMonitor::GetObjectPlayRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetObjectPlayRecord");

	UAkAudioMonitor_GetObjectPlayRecord_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetObjectNameByObjectID
// ()
// Parameters:
// uint64_t                       ObjectID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAkAudioMonitor::GetObjectNameByObjectID(uint64_t ObjectID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetObjectNameByObjectID");

	UAkAudioMonitor_GetObjectNameByObjectID_Params params;
	params.ObjectID = ObjectID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetMonitorDataPtr
// ()
// Parameters:
// class UAkAudioMonitorData*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAkAudioMonitorData* UAkAudioMonitor::GetMonitorDataPtr()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetMonitorDataPtr");

	UAkAudioMonitor_GetMonitorDataPtr_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetGlobalSwitchValue
// ()
// Parameters:
// struct FString                 SwitchName                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAkAudioMonitor::GetGlobalSwitchValue(const struct FString& SwitchName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetGlobalSwitchValue");

	UAkAudioMonitor_GetGlobalSwitchValue_Params params;
	params.SwitchName = SwitchName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetGlobalSwitchNames
// ()
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UAkAudioMonitor::GetGlobalSwitchNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetGlobalSwitchNames");

	UAkAudioMonitor_GetGlobalSwitchNames_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetGlobalRTPCValue
// ()
// Parameters:
// struct FString                 RTPCName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAkAudioMonitor::GetGlobalRTPCValue(const struct FString& RTPCName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetGlobalRTPCValue");

	UAkAudioMonitor_GetGlobalRTPCValue_Params params;
	params.RTPCName = RTPCName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetGlobalRTPCNames
// ()
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UAkAudioMonitor::GetGlobalRTPCNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetGlobalRTPCNames");

	UAkAudioMonitor_GetGlobalRTPCNames_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetEventList
// ()
// Parameters:
// TArray<struct FString>         OutRes                         (Parm, OutParm, ZeroConstructor)

void UAkAudioMonitor::GetEventList(TArray<struct FString>* OutRes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetEventList");

	UAkAudioMonitor_GetEventList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutRes != nullptr)
		*OutRes = params.OutRes;
}


// Function AkAudio.AkAudioMonitor.GetEventInMemoryByName
// ()
// Parameters:
// TArray<class UAkAudioEvent*>   AllAk                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 AkName                         (Parm, ZeroConstructor)
// class UAkAudioEvent*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAkAudioEvent* UAkAudioMonitor::GetEventInMemoryByName(TArray<class UAkAudioEvent*> AllAk, const struct FString& AkName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetEventInMemoryByName");

	UAkAudioMonitor_GetEventInMemoryByName_Params params;
	params.AllAk = AllAk;
	params.AkName = AkName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetBankRefList
// ()
// Parameters:
// TMap<struct FString, int8_t>   OutRes                         (Parm, OutParm, ZeroConstructor)

void UAkAudioMonitor::GetBankRefList(TMap<struct FString, int8_t>* OutRes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetBankRefList");

	UAkAudioMonitor_GetBankRefList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutRes != nullptr)
		*OutRes = params.OutRes;
}


// Function AkAudio.AkAudioMonitor.GetAllEventNameInMemory
// ()
// Parameters:
// class UObject*                 WorldContent                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UAkAudioMonitor::GetAllEventNameInMemory(class UObject* WorldContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetAllEventNameInMemory");

	UAkAudioMonitor_GetAllEventNameInMemory_Params params;
	params.WorldContent = WorldContent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetAllEventInMemory
// ()
// Parameters:
// class UObject*                 WorldContent                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAkAudioEvent*>   AllAk                          (Parm, OutParm, ZeroConstructor)

void UAkAudioMonitor::GetAllEventInMemory(class UObject* WorldContent, TArray<class UAkAudioEvent*>* AllAk)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetAllEventInMemory");

	UAkAudioMonitor_GetAllEventInMemory_Params params;
	params.WorldContent = WorldContent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AllAk != nullptr)
		*AllAk = params.AllAk;
}


// Function AkAudio.AkAudioMonitor.GetAllAkComponentFormDevice
// ()
// Parameters:
// TArray<class UAkComponent*>    AkList                         (Parm, OutParm, ZeroConstructor)
// TArray<class UAkComponent*>    recycledAkList                 (Parm, OutParm, ZeroConstructor)

void UAkAudioMonitor::GetAllAkComponentFormDevice(TArray<class UAkComponent*>* AkList, TArray<class UAkComponent*>* recycledAkList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetAllAkComponentFormDevice");

	UAkAudioMonitor_GetAllAkComponentFormDevice_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AkList != nullptr)
		*AkList = params.AkList;
	if (recycledAkList != nullptr)
		*recycledAkList = params.recycledAkList;
}


// Function AkAudio.AkAudioMonitorData.UpdateEventList
// ()
// Parameters:
// bool                           bStop                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InEventName                    (Parm, ZeroConstructor)

void UAkAudioMonitorData::UpdateEventList(bool bStop, const struct FString& InEventName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitorData.UpdateEventList");

	UAkAudioMonitorData_UpdateEventList_Params params;
	params.bStop = bStop;
	params.InEventName = InEventName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioMonitorData.UpdateBankRefList
// ()
// Parameters:
// bool                           bUnload                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BankName                       (Parm, ZeroConstructor)
// int8_t                         RefCount                       (Parm, ZeroConstructor, IsPlainOldData)

void UAkAudioMonitorData::UpdateBankRefList(bool bUnload, const struct FString& BankName, int8_t RefCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitorData.UpdateBankRefList");

	UAkAudioMonitorData_UpdateBankRefList_Params params;
	params.bUnload = bUnload;
	params.BankName = BankName;
	params.RefCount = RefCount;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioMonitorData.UpdateAkComponentInfo
// ()
// Parameters:
// TMap<struct FString, struct FAkCombinedInfo> OutList                        (Parm, OutParm, ZeroConstructor)

void UAkAudioMonitorData::UpdateAkComponentInfo(TMap<struct FString, struct FAkCombinedInfo>* OutList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitorData.UpdateAkComponentInfo");

	UAkAudioMonitorData_UpdateAkComponentInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutList != nullptr)
		*OutList = params.OutList;
}


// Function AkAudio.AkAudioMonitorData.SetMonitorFlagInternal
// ()
// Parameters:
// TArray<unsigned char>          InFlags                        (Parm, OutParm, ZeroConstructor)
// unsigned char                  TotalPlayCount                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ObjectPlayCount                (Parm, ZeroConstructor, IsPlainOldData)

void UAkAudioMonitorData::SetMonitorFlagInternal(unsigned char TotalPlayCount, unsigned char ObjectPlayCount, TArray<unsigned char>* InFlags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitorData.SetMonitorFlagInternal");

	UAkAudioMonitorData_SetMonitorFlagInternal_Params params;
	params.TotalPlayCount = TotalPlayCount;
	params.ObjectPlayCount = ObjectPlayCount;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InFlags != nullptr)
		*InFlags = params.InFlags;
}


// Function AkAudio.AkAudioMonitorData.OnReportErrorInternal
// ()
// Parameters:
// struct FString                 FunctionName                   (ConstParm, Parm, ZeroConstructor)
// unsigned char                  ErrorAkCode                    (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       NumericParam                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 StrParam                       (Parm, ZeroConstructor)

void UAkAudioMonitorData::OnReportErrorInternal(const struct FString& FunctionName, unsigned char ErrorAkCode, uint64_t NumericParam, const struct FString& StrParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitorData.OnReportErrorInternal");

	UAkAudioMonitorData_OnReportErrorInternal_Params params;
	params.FunctionName = FunctionName;
	params.ErrorAkCode = ErrorAkCode;
	params.NumericParam = NumericParam;
	params.StrParam = StrParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioMonitorData.Initialize
// ()

void UAkAudioMonitorData::Initialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitorData.Initialize");

	UAkAudioMonitorData_Initialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioVisualComponent.StartOfflineTime
// ()

void UAkAudioVisualComponent::StartOfflineTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioVisualComponent.StartOfflineTime");

	UAkAudioVisualComponent_StartOfflineTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioVisualComponent.ResetOfflineTime
// ()

void UAkAudioVisualComponent::ResetOfflineTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioVisualComponent.ResetOfflineTime");

	UAkAudioVisualComponent_ResetOfflineTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioVisualComponent.OnTickVisualInfo
// ()
// Parameters:
// TArray<float>                  VisualInfo                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAkAudioVisualComponent::OnTickVisualInfo(TArray<float> VisualInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioVisualComponent.OnTickVisualInfo");

	UAkAudioVisualComponent_OnTickVisualInfo_Params params;
	params.VisualInfo = VisualInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioVisualComponent.OnTickOfflineVisualInfo
// ()
// Parameters:
// struct FAudioOfflineVisualBeatData VisualInfo                     (ConstParm, Parm, OutParm, ReferenceParm)

void UAkAudioVisualComponent::OnTickOfflineVisualInfo(const struct FAudioOfflineVisualBeatData& VisualInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioVisualComponent.OnTickOfflineVisualInfo");

	UAkAudioVisualComponent_OnTickOfflineVisualInfo_Params params;
	params.VisualInfo = VisualInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioVisualComponent.InitOfflineDataWithBeatTime
// ()
// Parameters:
// TArray<float>                  Datas                          (Parm, ZeroConstructor)

void UAkAudioVisualComponent::InitOfflineDataWithBeatTime(TArray<float> Datas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioVisualComponent.InitOfflineDataWithBeatTime");

	UAkAudioVisualComponent_InitOfflineDataWithBeatTime_Params params;
	params.Datas = Datas;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioVisualComponent.InitOfflineData
// ()
// Parameters:
// TArray<struct FAudioOfflineVisualBeatData> Datas                          (Parm, ZeroConstructor)

void UAkAudioVisualComponent::InitOfflineData(TArray<struct FAudioOfflineVisualBeatData> Datas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioVisualComponent.InitOfflineData");

	UAkAudioVisualComponent_InitOfflineData_Params params;
	params.Datas = Datas;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioVisualComponent.GetCurrentBeat
// ()
// Parameters:
// struct FAudioOfflineVisualBeatData Result                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAkAudioVisualComponent::GetCurrentBeat(struct FAudioOfflineVisualBeatData* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioVisualComponent.GetCurrentBeat");

	UAkAudioVisualComponent_GetCurrentBeat_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.UseReverbVolumes
// ()
// Parameters:
// bool                           inUseReverbVolumes             (Parm, ZeroConstructor, IsPlainOldData)

void UAkComponent::UseReverbVolumes(bool inUseReverbVolumes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.UseReverbVolumes");

	UAkComponent_UseReverbVolumes_Params params;
	params.inUseReverbVolumes = inUseReverbVolumes;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.UseEarlyReflections
// ()
// Parameters:
// class UAkAuxBus*               AuxBus                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Left                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Right                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           floor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ceiling                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Back                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Front                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpotReflectors                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AuxBusName                     (Parm, ZeroConstructor)

void UAkComponent::UseEarlyReflections(class UAkAuxBus* AuxBus, bool Left, bool Right, bool floor, bool Ceiling, bool Back, bool Front, bool SpotReflectors, const struct FString& AuxBusName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.UseEarlyReflections");

	UAkComponent_UseEarlyReflections_Params params;
	params.AuxBus = AuxBus;
	params.Left = Left;
	params.Right = Right;
	params.floor = floor;
	params.Ceiling = Ceiling;
	params.Back = Back;
	params.Front = Front;
	params.SpotReflectors = SpotReflectors;
	params.AuxBusName = AuxBusName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.StopPlayingID
// ()
// Parameters:
// int                            StopEventID                    (Parm, ZeroConstructor, IsPlainOldData)

void UAkComponent::StopPlayingID(int StopEventID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.StopPlayingID");

	UAkComponent_StopPlayingID_Params params;
	params.StopEventID = StopEventID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.Stop
// ()

void UAkComponent::Stop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.Stop");

	UAkComponent_Stop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetSwitch
// ()
// Parameters:
// struct FString                 SwitchGroup                    (Parm, ZeroConstructor)
// struct FString                 SwitchState                    (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkComponent::SetSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetSwitch");

	UAkComponent_SetSwitch_Params params;
	params.SwitchGroup = SwitchGroup;
	params.SwitchState = SwitchState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
// ()
// Parameters:
// bool                           bStopWhenOwnerDestroyed        (Parm, ZeroConstructor, IsPlainOldData)

void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed");

	UAkComponent_SetStopWhenOwnerDestroyed_Params params;
	params.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetRTPCValueGlobally
// ()
// Parameters:
// struct FString                 RTPC                           (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAkComponent::SetRTPCValueGlobally(const struct FString& RTPC, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetRTPCValueGlobally");

	UAkComponent_SetRTPCValueGlobally_Params params;
	params.RTPC = RTPC;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetRTPCValue
// ()
// Parameters:
// struct FString                 RTPC                           (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            InterpolationTimeMs            (Parm, ZeroConstructor, IsPlainOldData)

void UAkComponent::SetRTPCValue(const struct FString& RTPC, float Value, int InterpolationTimeMs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetRTPCValue");

	UAkComponent_SetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.Value = Value;
	params.InterpolationTimeMs = InterpolationTimeMs;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetOutputBusVolume
// ()
// Parameters:
// float                          BusVolume                      (Parm, ZeroConstructor, IsPlainOldData)

void UAkComponent::SetOutputBusVolume(float BusVolume)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetOutputBusVolume");

	UAkComponent_SetOutputBusVolume_Params params;
	params.BusVolume = BusVolume;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetListeners
// ()
// Parameters:
// TArray<class UAkComponent*>    Listeners                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAkComponent::SetListeners(TArray<class UAkComponent*> Listeners)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetListeners");

	UAkComponent_SetListeners_Params params;
	params.Listeners = Listeners;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetEarlyReflectionOrder
// ()
// Parameters:
// int                            NewEarlyReflectionOrder        (Parm, ZeroConstructor, IsPlainOldData)

void UAkComponent::SetEarlyReflectionOrder(int NewEarlyReflectionOrder)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetEarlyReflectionOrder");

	UAkComponent_SetEarlyReflectionOrder_Params params;
	params.NewEarlyReflectionOrder = NewEarlyReflectionOrder;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetAutoDestroy
// ()
// Parameters:
// bool                           in_AutoDestroy                 (Parm, ZeroConstructor, IsPlainOldData)

void UAkComponent::SetAutoDestroy(bool in_AutoDestroy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetAutoDestroy");

	UAkComponent_SetAutoDestroy_Params params;
	params.in_AutoDestroy = in_AutoDestroy;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetAttenuationScalingFactor
// ()
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAkComponent::SetAttenuationScalingFactor(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetAttenuationScalingFactor");

	UAkComponent_SetAttenuationScalingFactor_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SeekOnEvent
// ()
// Parameters:
// struct FString                 in_EventName                   (Parm, ZeroConstructor)
// int                            in_iPosition                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkComponent::SeekOnEvent(const struct FString& in_EventName, int in_iPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SeekOnEvent");

	UAkComponent_SeekOnEvent_Params params;
	params.in_EventName = in_EventName;
	params.in_iPosition = in_iPosition;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostTrigger
// ()
// Parameters:
// struct FString                 Trigger                        (Parm, ZeroConstructor)

void UAkComponent::PostTrigger(const struct FString& Trigger)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostTrigger");

	UAkComponent_PostTrigger_Params params;
	params.Trigger = Trigger;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.PostAssociatedAkEvent
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkComponent::PostAssociatedAkEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAssociatedAkEvent");

	UAkComponent_PostAssociatedAkEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEventByName
// ()
// Parameters:
// struct FString                 in_EventName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkComponent::PostAkEventByName(const struct FString& in_EventName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEventByName");

	UAkComponent_PostAkEventByName_Params params;
	params.in_EventName = in_EventName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEvent
// ()
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 in_EventName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkComponent::PostAkEvent(class UAkAudioEvent* AkEvent, const struct FString& in_EventName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEvent");

	UAkComponent_PostAkEvent_Params params;
	params.AkEvent = AkEvent;
	params.in_EventName = in_EventName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.GetAttenuationRadius
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAkComponent::GetAttenuationRadius()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.GetAttenuationRadius");

	UAkComponent_GetAttenuationRadius_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.GetAkGameObjectName
// ()
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)

void UAkComponent::GetAkGameObjectName(struct FString* Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.GetAkGameObjectName");

	UAkComponent_GetAkGameObjectName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function AkAudio.AkGameplayStatics.WakeupFromSuspend
// ()

void UAkGameplayStatics::WakeupFromSuspend()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.WakeupFromSuspend");

	UAkGameplayStatics_WakeupFromSuspend_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.UseReverbVolumes
// ()
// Parameters:
// bool                           inUseReverbVolumes             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UseReverbVolumes");

	UAkGameplayStatics_UseReverbVolumes_Params params;
	params.inUseReverbVolumes = inUseReverbVolumes;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.UseEarlyReflections
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAuxBus*               AuxBus                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Left                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Right                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           floor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ceiling                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Back                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Front                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpotReflectors                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AuxBusName                     (Parm, ZeroConstructor)

void UAkGameplayStatics::UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, bool Left, bool Right, bool floor, bool Ceiling, bool Back, bool Front, bool SpotReflectors, const struct FString& AuxBusName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UseEarlyReflections");

	UAkGameplayStatics_UseEarlyReflections_Params params;
	params.Actor = Actor;
	params.AuxBus = AuxBus;
	params.Left = Left;
	params.Right = Right;
	params.floor = floor;
	params.Ceiling = Ceiling;
	params.Back = Back;
	params.Front = Front;
	params.SpotReflectors = SpotReflectors;
	params.AuxBusName = AuxBusName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.UnloadBankByName
// ()
// Parameters:
// struct FString                 BankName                       (Parm, ZeroConstructor)

void UAkGameplayStatics::UnloadBankByName(const struct FString& BankName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadBankByName");

	UAkGameplayStatics_UnloadBankByName_Params params;
	params.BankName = BankName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.UnloadBank
// ()
// Parameters:
// class UAkAudioBank*            Bank                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BankName                       (Parm, ZeroConstructor)

void UAkGameplayStatics::UnloadBank(class UAkAudioBank* Bank, const struct FString& BankName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadBank");

	UAkGameplayStatics_UnloadBank_Params params;
	params.Bank = Bank;
	params.BankName = BankName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.Suspend
// ()

void UAkGameplayStatics::Suspend()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.Suspend");

	UAkGameplayStatics_Suspend_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StopProfilerCapture
// ()

void UAkGameplayStatics::StopProfilerCapture()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopProfilerCapture");

	UAkGameplayStatics_StopProfilerCapture_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StopPlayingID
// ()
// Parameters:
// int                            PlayingID                      (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::StopPlayingID(int PlayingID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopPlayingID");

	UAkGameplayStatics_StopPlayingID_Params params;
	params.PlayingID = PlayingID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StopOutputCapture
// ()

void UAkGameplayStatics::StopOutputCapture()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopOutputCapture");

	UAkGameplayStatics_StopOutputCapture_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::StopAllAmbientSounds(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopAllAmbientSounds");

	UAkGameplayStatics_StopAllAmbientSounds_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StopAll
// ()

void UAkGameplayStatics::StopAll()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopAll");

	UAkGameplayStatics_StopAll_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StopAkEventByID
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::StopAkEventByID(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopAkEventByID");

	UAkGameplayStatics_StopAkEventByID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StopActor
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::StopActor(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopActor");

	UAkGameplayStatics_StopActor_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StartProfilerCapture
// ()
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UAkGameplayStatics::StartProfilerCapture(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartProfilerCapture");

	UAkGameplayStatics_StartProfilerCapture_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StartOutputCapture
// ()
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UAkGameplayStatics::StartOutputCapture(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartOutputCapture");

	UAkGameplayStatics_StartOutputCapture_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::StartAllAmbientSounds(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartAllAmbientSounds");

	UAkGameplayStatics_StartAllAmbientSounds_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAuxBus*               EarlyReflectionsBus            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, IsPlainOldData)
// bool                           AutoPost                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// struct FString                 EarlyReflectionsBusName        (Parm, ZeroConstructor)
// bool                           AutoDestroy                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAkComponent*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class UAkAuxBus* EarlyReflectionsBus, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, const struct FString& EarlyReflectionsBusName, bool AutoDestroy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation");

	UAkGameplayStatics_SpawnAkComponentAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AkEvent = AkEvent;
	params.EarlyReflectionsBus = EarlyReflectionsBus;
	params.Location = Location;
	params.Orientation = Orientation;
	params.AutoPost = AutoPost;
	params.EventName = EventName;
	params.EarlyReflectionsBusName = EarlyReflectionsBusName;
	params.AutoDestroy = AutoDestroy;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.ShowAKComponentPosition
// ()
// Parameters:
// bool                           _IsShow                        (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::ShowAKComponentPosition(bool _IsShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ShowAKComponentPosition");

	UAkGameplayStatics_ShowAKComponentPosition_Params params;
	params._IsShow = _IsShow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.ShouldPostEvent
// ()
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VoicePosition                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAkGameplayStatics::ShouldPostEvent(class UObject* WorldContext, const struct FVector& VoicePosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ShouldPostEvent");

	UAkGameplayStatics_ShouldPostEvent_Params params;
	params.WorldContext = WorldContext;
	params.VoicePosition = VoicePosition;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.SetSwitchWithDummyActor
// ()
// Parameters:
// struct FName                   SwitchGroup                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SwitchState                    (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::SetSwitchWithDummyActor(const struct FName& SwitchGroup, const struct FName& SwitchState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetSwitchWithDummyActor");

	UAkGameplayStatics_SetSwitchWithDummyActor_Params params;
	params.SwitchGroup = SwitchGroup;
	params.SwitchState = SwitchState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SetSwitch
// ()
// Parameters:
// struct FName                   SwitchGroup                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SwitchState                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::SetSwitch(const struct FName& SwitchGroup, const struct FName& SwitchState, class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetSwitch");

	UAkGameplayStatics_SetSwitch_Params params;
	params.SwitchGroup = SwitchGroup;
	params.SwitchState = SwitchState;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SetState
// ()
// Parameters:
// struct FName                   StateGroup                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   State                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkGameplayStatics::SetState(const struct FName& StateGroup, const struct FName& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetState");

	UAkGameplayStatics_SetState_Params params;
	params.StateGroup = StateGroup;
	params.State = State;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.SetRTPCValue
// ()
// Parameters:
// struct FName                   RTPC                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            InterpolationTimeMs            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::SetRTPCValue(const struct FName& RTPC, float Value, int InterpolationTimeMs, class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetRTPCValue");

	UAkGameplayStatics_SetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.Value = Value;
	params.InterpolationTimeMs = InterpolationTimeMs;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SetPanningRule
// ()
// Parameters:
// EPanningRule                   PanRule                        (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::SetPanningRule(EPanningRule PanRule)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetPanningRule");

	UAkGameplayStatics_SetPanningRule_Params params;
	params.PanRule = PanRule;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SetOutputBusVolume
// ()
// Parameters:
// float                          BusVolume                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::SetOutputBusVolume(float BusVolume, class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOutputBusVolume");

	UAkGameplayStatics_SetOutputBusVolume_Params params;
	params.BusVolume = BusVolume;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
// ()
// Parameters:
// float                          ScalingFactor                  (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::SetOcclusionScalingFactor(float ScalingFactor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor");

	UAkGameplayStatics_SetOcclusionScalingFactor_Params params;
	params.ScalingFactor = ScalingFactor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
// ()
// Parameters:
// float                          RefreshInterval                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval");

	UAkGameplayStatics_SetOcclusionRefreshInterval_Params params;
	params.RefreshInterval = RefreshInterval;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SetBusConfig
// ()
// Parameters:
// struct FString                 BusName                        (Parm, ZeroConstructor)
// EAkChannelConfiguration        ChannelConfiguration           (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::SetBusConfig(const struct FString& BusName, EAkChannelConfiguration ChannelConfiguration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetBusConfig");

	UAkGameplayStatics_SetBusConfig_Params params;
	params.BusName = BusName;
	params.ChannelConfiguration = ChannelConfiguration;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SeekOnEvent
// ()
// Parameters:
// class UAkAudioEvent*           in_pAkEvent                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  in_pActor                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            in_iPosition                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// bool                           in_bSeekToNearestMarker        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkGameplayStatics::SeekOnEvent(class UAkAudioEvent* in_pAkEvent, class AActor* in_pActor, int in_iPosition, const struct FString& EventName, bool in_bSeekToNearestMarker)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SeekOnEvent");

	UAkGameplayStatics_SeekOnEvent_Params params;
	params.in_pAkEvent = in_pAkEvent;
	params.in_pActor = in_pActor;
	params.in_iPosition = in_iPosition;
	params.EventName = EventName;
	params.in_bSeekToNearestMarker = in_bSeekToNearestMarker;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.RefreshModDirectories
// ()

void UAkGameplayStatics::RefreshModDirectories()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.RefreshModDirectories");

	UAkGameplayStatics_RefreshModDirectories_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.PostTrigger
// ()
// Parameters:
// struct FName                   Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::PostTrigger(const struct FName& Trigger, class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostTrigger");

	UAkGameplayStatics_PostTrigger_Params params;
	params.Trigger = Trigger;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.PostEventWithDummyActor
// ()
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkGameplayStatics::PostEventWithDummyActor(class UAkAudioEvent* AkEvent, const struct FString& EventName, class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventWithDummyActor");

	UAkGameplayStatics_PostEventWithDummyActor_Params params;
	params.AkEvent = AkEvent;
	params.EventName = EventName;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostEventByName
// ()
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::PostEventByName(const struct FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventByName");

	UAkGameplayStatics_PostEventByName_Params params;
	params.EventName = EventName;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.PostEventAttached
// ()
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkGameplayStatics::PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const struct FString& EventName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAttached");

	UAkGameplayStatics_PostEventAttached_Params params;
	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.AttachPointName = AttachPointName;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.EventName = EventName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
// ()
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::PostEventAtLocationByName(const struct FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAtLocationByName");

	UAkGameplayStatics_PostEventAtLocationByName_Params params;
	params.EventName = EventName;
	params.Location = Location;
	params.Orientation = Orientation;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.PostEventAtLocation
// ()
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkGameplayStatics::PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAtLocation");

	UAkGameplayStatics_PostEventAtLocation_Params params;
	params.AkEvent = AkEvent;
	params.Location = Location;
	params.Orientation = Orientation;
	params.EventName = EventName;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostEvent
// ()
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkGameplayStatics::PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct FString& EventName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEvent");

	UAkGameplayStatics_PostEvent_Params params;
	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.EventName = EventName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.LoadInitBank
// ()

void UAkGameplayStatics::LoadInitBank()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadInitBank");

	UAkGameplayStatics_LoadInitBank_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.LoadBanks
// ()
// Parameters:
// TArray<class UAkAudioBank*>    SoundBanks                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           SynchronizeSoundBanks          (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBanks");

	UAkGameplayStatics_LoadBanks_Params params;
	params.SoundBanks = SoundBanks;
	params.SynchronizeSoundBanks = SynchronizeSoundBanks;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.LoadBankByName
// ()
// Parameters:
// struct FString                 BankName                       (Parm, ZeroConstructor)

void UAkGameplayStatics::LoadBankByName(const struct FString& BankName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBankByName");

	UAkGameplayStatics_LoadBankByName_Params params;
	params.BankName = BankName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.LoadBank
// ()
// Parameters:
// class UAkAudioBank*            Bank                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BankName                       (Parm, ZeroConstructor)

void UAkGameplayStatics::LoadBank(class UAkAudioBank* Bank, const struct FString& BankName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBank");

	UAkGameplayStatics_LoadBank_Params params;
	params.Bank = Bank;
	params.BankName = BankName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.IsGame
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAkGameplayStatics::IsGame(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.IsGame");

	UAkGameplayStatics_IsGame_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.IsEditor
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAkGameplayStatics::IsEditor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.IsEditor");

	UAkGameplayStatics_IsEditor_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.GetSourcePlayPosition
// ()
// Parameters:
// int                            AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkGameplayStatics::GetSourcePlayPosition(int AkEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetSourcePlayPosition");

	UAkGameplayStatics_GetSourcePlayPosition_Params params;
	params.AkEvent = AkEvent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAkGameplayStatics::GetOcclusionScalingFactor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor");

	UAkGameplayStatics_GetOcclusionScalingFactor_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.GetAkComponent
// ()
// Parameters:
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAkComponent*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAkComponent* UAkGameplayStatics::GetAkComponent(class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetAkComponent");

	UAkGameplayStatics_GetAkComponent_Params params;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.LocationType = LocationType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.ClearBanks
// ()

void UAkGameplayStatics::ClearBanks()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ClearBanks");

	UAkGameplayStatics_ClearBanks_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.AKSetRTPCValue
// ()
// Parameters:
// struct FString                 RTPC                           (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           in_bBypassInternalValueInterpolation (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::AKSetRTPCValue(const struct FString& RTPC, float Value, bool in_bBypassInternalValueInterpolation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.AKSetRTPCValue");

	UAkGameplayStatics_AKSetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.Value = Value;
	params.in_bBypassInternalValueInterpolation = in_bBypassInternalValueInterpolation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
// ()
// Parameters:
// struct FString                 MarkerText                     (Parm, ZeroConstructor)

void UAkGameplayStatics::AddOutputCaptureMarker(const struct FString& MarkerText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker");

	UAkGameplayStatics_AddOutputCaptureMarker_Params params;
	params.MarkerText = MarkerText;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkRoomComponent.RemoveSpatialAudioRoom
// ()

void UAkRoomComponent::RemoveSpatialAudioRoom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkRoomComponent.RemoveSpatialAudioRoom");

	UAkRoomComponent_RemoveSpatialAudioRoom_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkRoomComponent.AddSpatialAudioRoom
// ()

void UAkRoomComponent::AddSpatialAudioRoom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkRoomComponent.AddSpatialAudioRoom");

	UAkRoomComponent_AddSpatialAudioRoom_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
// ()

void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet");

	UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
// ()

void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet");

	UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
// ()

void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet");

	UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AudioOfflineVisual.StartBeatOffset
// ()
// Parameters:
// float                          Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void UAudioOfflineVisual::StartBeatOffset(float Offset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioOfflineVisual.StartBeatOffset");

	UAudioOfflineVisual_StartBeatOffset_Params params;
	params.Offset = Offset;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AudioOfflineVisual.StartBeat
// ()

void UAudioOfflineVisual::StartBeat()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioOfflineVisual.StartBeat");

	UAudioOfflineVisual_StartBeat_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AudioOfflineVisual.ResetBeatTime
// ()

void UAudioOfflineVisual::ResetBeatTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioOfflineVisual.ResetBeatTime");

	UAudioOfflineVisual_ResetBeatTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AudioOfflineVisual.InitWithBeatTime
// ()
// Parameters:
// TArray<float>                  Datas                          (Parm, ZeroConstructor)

void UAudioOfflineVisual::InitWithBeatTime(TArray<float> Datas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioOfflineVisual.InitWithBeatTime");

	UAudioOfflineVisual_InitWithBeatTime_Params params;
	params.Datas = Datas;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AudioOfflineVisual.Init
// ()
// Parameters:
// TArray<struct FAudioOfflineVisualBeatData> Datas                          (Parm, ZeroConstructor)

void UAudioOfflineVisual::Init(TArray<struct FAudioOfflineVisualBeatData> Datas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioOfflineVisual.Init");

	UAudioOfflineVisual_Init_Params params;
	params.Datas = Datas;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AudioOfflineVisual.GetCurrentBeatByCustomTime
// ()
// Parameters:
// float                          InBeatSecondTime               (Parm, ZeroConstructor, IsPlainOldData)
// struct FAudioOfflineVisualBeatData Result                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAudioOfflineVisual::GetCurrentBeatByCustomTime(float InBeatSecondTime, struct FAudioOfflineVisualBeatData* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioOfflineVisual.GetCurrentBeatByCustomTime");

	UAudioOfflineVisual_GetCurrentBeatByCustomTime_Params params;
	params.InBeatSecondTime = InBeatSecondTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function AkAudio.AudioOfflineVisual.GetCurrentBeat
// ()
// Parameters:
// struct FAudioOfflineVisualBeatData Result                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAudioOfflineVisual::GetCurrentBeat(struct FAudioOfflineVisualBeatData* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioOfflineVisual.GetCurrentBeat");

	UAudioOfflineVisual_GetCurrentBeat_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisual.TryInit
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAudioVisual::TryInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisual.TryInit");

	UAudioVisual_TryInit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisual.Reset
// ()

void UAudioVisual::Reset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisual.Reset");

	UAudioVisual_Reset_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AudioVisual.IsInited
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAudioVisual::IsInited()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisual.IsInited");

	UAudioVisual_IsInited_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisual.GetRMS
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAudioVisual::GetRMS()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisual.GetRMS");

	UAudioVisual_GetRMS_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisual.GetInstantEnergy
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAudioVisual::GetInstantEnergy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisual.GetInstantEnergy");

	UAudioVisual_GetInstantEnergy_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisual.GetFrequencyVol
// ()
// Parameters:
// EFrequencyRange                freqRange                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAudioVisual::GetFrequencyVol(EFrequencyRange freqRange)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisual.GetFrequencyVol");

	UAudioVisual_GetFrequencyVol_Params params;
	params.freqRange = freqRange;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisual.GetFrequencyDataWithBin
// ()
// Parameters:
// TArray<float>                  pFreqData                      (Parm, OutParm, ZeroConstructor)
// EFrequencyRange                freqRange                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            nBin                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAbsolute                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAudioVisual::GetFrequencyDataWithBin(EFrequencyRange freqRange, int nBin, bool bAbsolute, TArray<float>* pFreqData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisual.GetFrequencyDataWithBin");

	UAudioVisual_GetFrequencyDataWithBin_Params params;
	params.freqRange = freqRange;
	params.nBin = nBin;
	params.bAbsolute = bAbsolute;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (pFreqData != nullptr)
		*pFreqData = params.pFreqData;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisual.GetFrequencyData
// ()
// Parameters:
// TArray<float>                  pFreqData                      (Parm, OutParm, ZeroConstructor)
// EFrequencyRange                freqRange                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAudioVisual::GetFrequencyData(EFrequencyRange freqRange, TArray<float>* pFreqData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisual.GetFrequencyData");

	UAudioVisual_GetFrequencyData_Params params;
	params.freqRange = freqRange;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (pFreqData != nullptr)
		*pFreqData = params.pFreqData;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisual.GetAudioSamplesWithBin
// ()
// Parameters:
// TArray<float>                  pAudioData                     (Parm, OutParm, ZeroConstructor)
// int                            nBin                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAbsolute                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAudioVisual::GetAudioSamplesWithBin(int nBin, bool bAbsolute, TArray<float>* pAudioData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisual.GetAudioSamplesWithBin");

	UAudioVisual_GetAudioSamplesWithBin_Params params;
	params.nBin = nBin;
	params.bAbsolute = bAbsolute;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (pAudioData != nullptr)
		*pAudioData = params.pAudioData;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisual.GetAudioSamples
// ()
// Parameters:
// TArray<float>                  pAudioData                     (Parm, OutParm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAudioVisual::GetAudioSamples(TArray<float>* pAudioData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisual.GetAudioSamples");

	UAudioVisual_GetAudioSamples_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (pAudioData != nullptr)
		*pAudioData = params.pAudioData;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisualBlueprintLibrary.GetAudioVisual
// ()
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAudioVisual*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAudioVisual* UAudioVisualBlueprintLibrary::GetAudioVisual(class UObject* Outer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisualBlueprintLibrary.GetAudioVisual");

	UAudioVisualBlueprintLibrary_GetAudioVisual_Params params;
	params.Outer = Outer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisualBlueprintLibrary.GetAudioOfflineVisual
// ()
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAudioOfflineVisual*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAudioOfflineVisual* UAudioVisualBlueprintLibrary::GetAudioOfflineVisual(class UObject* Outer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisualBlueprintLibrary.GetAudioOfflineVisual");

	UAudioVisualBlueprintLibrary_GetAudioOfflineVisual_Params params;
	params.Outer = Outer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

