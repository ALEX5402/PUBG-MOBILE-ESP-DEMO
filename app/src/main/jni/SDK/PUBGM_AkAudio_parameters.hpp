#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AkAudio.AkAcousticPortal.OpenPortal
struct AAkAcousticPortal_OpenPortal_Params
{
};

// Function AkAudio.AkAcousticPortal.GetCurrentState
struct AAkAcousticPortal_GetCurrentState_Params
{
	EAkAcousticPortalState                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkAcousticPortal.ClosePortal
struct AAkAcousticPortal_ClosePortal_Params
{
};

// Function AkAudio.AkAmbientSound.StopAmbientSound
struct AAkAmbientSound_StopAmbientSound_Params
{
};

// Function AkAudio.AkAmbientSound.StartAmbientSound
struct AAkAmbientSound_StartAmbientSound_Params
{
};

// Function AkAudio.AkAreaCheckComponent.UnRegistAKAreaVolume
struct UAkAreaCheckComponent_UnRegistAKAreaVolume_Params
{
	class AActor*                                      AreaVolume;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	ECustomAKAreaType                                  AreaType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkAreaCheckComponent.RegistAKAreaVolume
struct UAkAreaCheckComponent_RegistAKAreaVolume_Params
{
	class AActor*                                      AreaVolume;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	ECustomAKAreaType                                  AreaType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkAreaCheckComponent.CheckVoiceAvailable
struct UAkAreaCheckComponent_CheckVoiceAvailable_Params
{
	struct FVector                                     VoicePostion;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkAreaCheckVolume.IsInsideVolume
struct AAkAreaCheckVolume_IsInsideVolume_Params
{
	struct FVector                                     OrignPosition;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkAreaCheckVolume.GetAKAreaType
struct AAkAreaCheckVolume_GetAKAreaType_Params
{
	ECustomAKAreaType                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkAudioDeviceSettings.InitConfig
struct UAkAudioDeviceSettings_InitConfig_Params
{
};

// Function AkAudio.AkAudioMonitor.UpdateAkComponentInfo
struct UAkAudioMonitor_UpdateAkComponentInfo_Params
{
	TMap<struct FString, struct FAkCombinedInfo>       OutList;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function AkAudio.AkAudioMonitor.Update
struct UAkAudioMonitor_Update_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkAudioMonitor.SetUpdateInterval
struct UAkAudioMonitor_SetUpdateInterval_Params
{
	float                                              NewUpdateInterval;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkAudioMonitor.SetMonitorFlag
struct UAkAudioMonitor_SetMonitorFlag_Params
{
	TArray<unsigned char>                              InFlags;                                                  // (Parm, OutParm, ZeroConstructor)
	unsigned char                                      TotalPlayCount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ObjectPlayCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkAudioMonitor.OnReportError
struct UAkAudioMonitor_OnReportError_Params
{
	struct FString                                     FunctionName;                                             // (ConstParm, Parm, ZeroConstructor)
	unsigned char                                      ErrorAkCode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           NumericParam;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     StrParam;                                                 // (Parm, ZeroConstructor)
};

// Function AkAudio.AkAudioMonitor.OnAkAudioEventTrigger
struct UAkAudioMonitor_OnAkAudioEventTrigger_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                code;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkAudioMonitor.OnAkAudioBankTrigger
struct UAkAudioMonitor_OnAkAudioBankTrigger_Params
{
	bool                                               bUnload;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BankName;                                                 // (Parm, ZeroConstructor)
	int8_t                                             RefCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkAudioMonitor.IsMonitorInit
struct UAkAudioMonitor_IsMonitorInit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkAudioMonitor.IsAkOutOfAttenuation
struct UAkAudioMonitor_IsAkOutOfAttenuation_Params
{
	class UAkComponent*                                AkComp;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Attenuation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkAudioMonitor.GetTotalPlayRecord
struct UAkAudioMonitor_GetTotalPlayRecord_Params
{
	TArray<uint16_t>                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AkAudio.AkAudioMonitor.GetSwitchValue
struct UAkAudioMonitor_GetSwitchValue_Params
{
	class UAkComponent*                                Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     SwitchName;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AkAudio.AkAudioMonitor.GetSwitchNames
struct UAkAudioMonitor_GetSwitchNames_Params
{
	class UAkComponent*                                Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AkAudio.AkAudioMonitor.GetRTPCValueByID
struct UAkAudioMonitor_GetRTPCValueByID_Params
{
	class UAkComponent*                                Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	uint32_t                                           RTPCID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkAudioMonitor.GetRTPCValue
struct UAkAudioMonitor_GetRTPCValue_Params
{
	class UAkComponent*                                Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     RTPCName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkAudioMonitor.GetRTPCNames
struct UAkAudioMonitor_GetRTPCNames_Params
{
	class UAkComponent*                                Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AkAudio.AkAudioMonitor.GetRTPCIDs
struct UAkAudioMonitor_GetRTPCIDs_Params
{
	class UAkComponent*                                Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<uint32_t>                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AkAudio.AkAudioMonitor.GetReportErrorRecord
struct UAkAudioMonitor_GetReportErrorRecord_Params
{
	TMap<unsigned char, struct FAKErrorInfo>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AkAudio.AkAudioMonitor.GetPostion
struct UAkAudioMonitor_GetPostion_Params
{
	class UAkComponent*                                Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkAudioMonitor.GetPlayingID
struct UAkAudioMonitor_GetPlayingID_Params
{
	class UAkComponent*                                Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AkAudio.AkAudioMonitor.GetPlayEventName
struct UAkAudioMonitor_GetPlayEventName_Params
{
	class UAkComponent*                                Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                PlayID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AkAudio.AkAudioMonitor.GetObjectPlayRecord
struct UAkAudioMonitor_GetObjectPlayRecord_Params
{
	TMap<struct FString, unsigned char>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AkAudio.AkAudioMonitor.GetObjectNameByObjectID
struct UAkAudioMonitor_GetObjectNameByObjectID_Params
{
	uint64_t                                           ObjectID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AkAudio.AkAudioMonitor.GetMonitorDataPtr
struct UAkAudioMonitor_GetMonitorDataPtr_Params
{
	class UAkAudioMonitorData*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkAudioMonitor.GetGlobalSwitchValue
struct UAkAudioMonitor_GetGlobalSwitchValue_Params
{
	struct FString                                     SwitchName;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AkAudio.AkAudioMonitor.GetGlobalSwitchNames
struct UAkAudioMonitor_GetGlobalSwitchNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AkAudio.AkAudioMonitor.GetGlobalRTPCValue
struct UAkAudioMonitor_GetGlobalRTPCValue_Params
{
	struct FString                                     RTPCName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkAudioMonitor.GetGlobalRTPCNames
struct UAkAudioMonitor_GetGlobalRTPCNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AkAudio.AkAudioMonitor.GetEventList
struct UAkAudioMonitor_GetEventList_Params
{
	TArray<struct FString>                             OutRes;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function AkAudio.AkAudioMonitor.GetEventInMemoryByName
struct UAkAudioMonitor_GetEventInMemoryByName_Params
{
	TArray<class UAkAudioEvent*>                       AllAk;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     AkName;                                                   // (Parm, ZeroConstructor)
	class UAkAudioEvent*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkAudioMonitor.GetBankRefList
struct UAkAudioMonitor_GetBankRefList_Params
{
	TMap<struct FString, int8_t>                       OutRes;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function AkAudio.AkAudioMonitor.GetAllEventNameInMemory
struct UAkAudioMonitor_GetAllEventNameInMemory_Params
{
	class UObject*                                     WorldContent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AkAudio.AkAudioMonitor.GetAllEventInMemory
struct UAkAudioMonitor_GetAllEventInMemory_Params
{
	class UObject*                                     WorldContent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAkAudioEvent*>                       AllAk;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function AkAudio.AkAudioMonitor.GetAllAkComponentFormDevice
struct UAkAudioMonitor_GetAllAkComponentFormDevice_Params
{
	TArray<class UAkComponent*>                        AkList;                                                   // (Parm, OutParm, ZeroConstructor)
	TArray<class UAkComponent*>                        recycledAkList;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function AkAudio.AkAudioMonitorData.UpdateEventList
struct UAkAudioMonitorData_UpdateEventList_Params
{
	bool                                               bStop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InEventName;                                              // (Parm, ZeroConstructor)
};

// Function AkAudio.AkAudioMonitorData.UpdateBankRefList
struct UAkAudioMonitorData_UpdateBankRefList_Params
{
	bool                                               bUnload;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BankName;                                                 // (Parm, ZeroConstructor)
	int8_t                                             RefCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkAudioMonitorData.UpdateAkComponentInfo
struct UAkAudioMonitorData_UpdateAkComponentInfo_Params
{
	TMap<struct FString, struct FAkCombinedInfo>       OutList;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function AkAudio.AkAudioMonitorData.SetMonitorFlagInternal
struct UAkAudioMonitorData_SetMonitorFlagInternal_Params
{
	TArray<unsigned char>                              InFlags;                                                  // (Parm, OutParm, ZeroConstructor)
	unsigned char                                      TotalPlayCount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ObjectPlayCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkAudioMonitorData.OnReportErrorInternal
struct UAkAudioMonitorData_OnReportErrorInternal_Params
{
	struct FString                                     FunctionName;                                             // (ConstParm, Parm, ZeroConstructor)
	unsigned char                                      ErrorAkCode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           NumericParam;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     StrParam;                                                 // (Parm, ZeroConstructor)
};

// Function AkAudio.AkAudioMonitorData.Initialize
struct UAkAudioMonitorData_Initialize_Params
{
};

// Function AkAudio.AkAudioVisualComponent.StartOfflineTime
struct UAkAudioVisualComponent_StartOfflineTime_Params
{
};

// Function AkAudio.AkAudioVisualComponent.ResetOfflineTime
struct UAkAudioVisualComponent_ResetOfflineTime_Params
{
};

// Function AkAudio.AkAudioVisualComponent.OnTickVisualInfo
struct UAkAudioVisualComponent_OnTickVisualInfo_Params
{
	TArray<float>                                      VisualInfo;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AkAudio.AkAudioVisualComponent.OnTickOfflineVisualInfo
struct UAkAudioVisualComponent_OnTickOfflineVisualInfo_Params
{
	struct FAudioOfflineVisualBeatData                 VisualInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AkAudio.AkAudioVisualComponent.InitOfflineDataWithBeatTime
struct UAkAudioVisualComponent_InitOfflineDataWithBeatTime_Params
{
	TArray<float>                                      Datas;                                                    // (Parm, ZeroConstructor)
};

// Function AkAudio.AkAudioVisualComponent.InitOfflineData
struct UAkAudioVisualComponent_InitOfflineData_Params
{
	TArray<struct FAudioOfflineVisualBeatData>         Datas;                                                    // (Parm, ZeroConstructor)
};

// Function AkAudio.AkAudioVisualComponent.GetCurrentBeat
struct UAkAudioVisualComponent_GetCurrentBeat_Params
{
	struct FAudioOfflineVisualBeatData                 Result;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.UseReverbVolumes
struct UAkComponent_UseReverbVolumes_Params
{
	bool                                               inUseReverbVolumes;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.UseEarlyReflections
struct UAkComponent_UseEarlyReflections_Params
{
	class UAkAuxBus*                                   AuxBus;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Left;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Right;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               floor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ceiling;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Back;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Front;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpotReflectors;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AuxBusName;                                               // (Parm, ZeroConstructor)
};

// Function AkAudio.AkComponent.StopPlayingID
struct UAkComponent_StopPlayingID_Params
{
	int                                                StopEventID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.Stop
struct UAkComponent_Stop_Params
{
};

// Function AkAudio.AkComponent.SetSwitch
struct UAkComponent_SetSwitch_Params
{
	struct FString                                     SwitchGroup;                                              // (Parm, ZeroConstructor)
	struct FString                                     SwitchState;                                              // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
struct UAkComponent_SetStopWhenOwnerDestroyed_Params
{
	bool                                               bStopWhenOwnerDestroyed;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.SetRTPCValueGlobally
struct UAkComponent_SetRTPCValueGlobally_Params
{
	struct FString                                     RTPC;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.SetRTPCValue
struct UAkComponent_SetRTPCValue_Params
{
	struct FString                                     RTPC;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InterpolationTimeMs;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.SetOutputBusVolume
struct UAkComponent_SetOutputBusVolume_Params
{
	float                                              BusVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.SetListeners
struct UAkComponent_SetListeners_Params
{
	TArray<class UAkComponent*>                        Listeners;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AkAudio.AkComponent.SetEarlyReflectionOrder
struct UAkComponent_SetEarlyReflectionOrder_Params
{
	int                                                NewEarlyReflectionOrder;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.SetAutoDestroy
struct UAkComponent_SetAutoDestroy_Params
{
	bool                                               in_AutoDestroy;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.SetAttenuationScalingFactor
struct UAkComponent_SetAttenuationScalingFactor_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.SeekOnEvent
struct UAkComponent_SeekOnEvent_Params
{
	struct FString                                     in_EventName;                                             // (Parm, ZeroConstructor)
	int                                                in_iPosition;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.PostTrigger
struct UAkComponent_PostTrigger_Params
{
	struct FString                                     Trigger;                                                  // (Parm, ZeroConstructor)
};

// Function AkAudio.AkComponent.PostAssociatedAkEvent
struct UAkComponent_PostAssociatedAkEvent_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.PostAkEventByName
struct UAkComponent_PostAkEventByName_Params
{
	struct FString                                     in_EventName;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.PostAkEvent
struct UAkComponent_PostAkEvent_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     in_EventName;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.GetAttenuationRadius
struct UAkComponent_GetAttenuationRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.GetAkGameObjectName
struct UAkComponent_GetAkGameObjectName_Params
{
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function AkAudio.AkGameplayStatics.WakeupFromSuspend
struct UAkGameplayStatics_WakeupFromSuspend_Params
{
};

// Function AkAudio.AkGameplayStatics.UseReverbVolumes
struct UAkGameplayStatics_UseReverbVolumes_Params
{
	bool                                               inUseReverbVolumes;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.UseEarlyReflections
struct UAkGameplayStatics_UseEarlyReflections_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAuxBus*                                   AuxBus;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Left;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Right;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               floor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ceiling;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Back;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Front;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpotReflectors;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AuxBusName;                                               // (Parm, ZeroConstructor)
};

// Function AkAudio.AkGameplayStatics.UnloadBankByName
struct UAkGameplayStatics_UnloadBankByName_Params
{
	struct FString                                     BankName;                                                 // (Parm, ZeroConstructor)
};

// Function AkAudio.AkGameplayStatics.UnloadBank
struct UAkGameplayStatics_UnloadBank_Params
{
	class UAkAudioBank*                                Bank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BankName;                                                 // (Parm, ZeroConstructor)
};

// Function AkAudio.AkGameplayStatics.Suspend
struct UAkGameplayStatics_Suspend_Params
{
};

// Function AkAudio.AkGameplayStatics.StopProfilerCapture
struct UAkGameplayStatics_StopProfilerCapture_Params
{
};

// Function AkAudio.AkGameplayStatics.StopPlayingID
struct UAkGameplayStatics_StopPlayingID_Params
{
	int                                                PlayingID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.StopOutputCapture
struct UAkGameplayStatics_StopOutputCapture_Params
{
};

// Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
struct UAkGameplayStatics_StopAllAmbientSounds_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.StopAll
struct UAkGameplayStatics_StopAll_Params
{
};

// Function AkAudio.AkGameplayStatics.StopAkEventByID
struct UAkGameplayStatics_StopAkEventByID_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.StopActor
struct UAkGameplayStatics_StopActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.StartProfilerCapture
struct UAkGameplayStatics_StartProfilerCapture_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function AkAudio.AkGameplayStatics.StartOutputCapture
struct UAkGameplayStatics_StartOutputCapture_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
struct UAkGameplayStatics_StartAllAmbientSounds_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
struct UAkGameplayStatics_SpawnAkComponentAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAuxBus*                                   EarlyReflectionsBus;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, IsPlainOldData)
	bool                                               AutoPost;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	struct FString                                     EarlyReflectionsBusName;                                  // (Parm, ZeroConstructor)
	bool                                               AutoDestroy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.ShowAKComponentPosition
struct UAkGameplayStatics_ShowAKComponentPosition_Params
{
	bool                                               _IsShow;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.ShouldPostEvent
struct UAkGameplayStatics_ShouldPostEvent_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VoicePosition;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.SetSwitchWithDummyActor
struct UAkGameplayStatics_SetSwitchWithDummyActor_Params
{
	struct FName                                       SwitchGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SwitchState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.SetSwitch
struct UAkGameplayStatics_SetSwitch_Params
{
	struct FName                                       SwitchGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SwitchState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.SetState
struct UAkGameplayStatics_SetState_Params
{
	struct FName                                       StateGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.SetRTPCValue
struct UAkGameplayStatics_SetRTPCValue_Params
{
	struct FName                                       RTPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InterpolationTimeMs;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.SetPanningRule
struct UAkGameplayStatics_SetPanningRule_Params
{
	EPanningRule                                       PanRule;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.SetOutputBusVolume
struct UAkGameplayStatics_SetOutputBusVolume_Params
{
	float                                              BusVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
struct UAkGameplayStatics_SetOcclusionScalingFactor_Params
{
	float                                              ScalingFactor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
struct UAkGameplayStatics_SetOcclusionRefreshInterval_Params
{
	float                                              RefreshInterval;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.SetBusConfig
struct UAkGameplayStatics_SetBusConfig_Params
{
	struct FString                                     BusName;                                                  // (Parm, ZeroConstructor)
	EAkChannelConfiguration                            ChannelConfiguration;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.SeekOnEvent
struct UAkGameplayStatics_SeekOnEvent_Params
{
	class UAkAudioEvent*                               in_pAkEvent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      in_pActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                in_iPosition;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	bool                                               in_bSeekToNearestMarker;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.RefreshModDirectories
struct UAkGameplayStatics_RefreshModDirectories_Params
{
};

// Function AkAudio.AkGameplayStatics.PostTrigger
struct UAkGameplayStatics_PostTrigger_Params
{
	struct FName                                       Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.PostEventWithDummyActor
struct UAkGameplayStatics_PostEventWithDummyActor_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.PostEventByName
struct UAkGameplayStatics_PostEventByName_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.PostEventAttached
struct UAkGameplayStatics_PostEventAttached_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
struct UAkGameplayStatics_PostEventAtLocationByName_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.PostEventAtLocation
struct UAkGameplayStatics_PostEventAtLocation_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.PostEvent
struct UAkGameplayStatics_PostEvent_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.LoadInitBank
struct UAkGameplayStatics_LoadInitBank_Params
{
};

// Function AkAudio.AkGameplayStatics.LoadBanks
struct UAkGameplayStatics_LoadBanks_Params
{
	TArray<class UAkAudioBank*>                        SoundBanks;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               SynchronizeSoundBanks;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.LoadBankByName
struct UAkGameplayStatics_LoadBankByName_Params
{
	struct FString                                     BankName;                                                 // (Parm, ZeroConstructor)
};

// Function AkAudio.AkGameplayStatics.LoadBank
struct UAkGameplayStatics_LoadBank_Params
{
	class UAkAudioBank*                                Bank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BankName;                                                 // (Parm, ZeroConstructor)
};

// Function AkAudio.AkGameplayStatics.IsGame
struct UAkGameplayStatics_IsGame_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.IsEditor
struct UAkGameplayStatics_IsEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.GetSourcePlayPosition
struct UAkGameplayStatics_GetSourcePlayPosition_Params
{
	int                                                AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
struct UAkGameplayStatics_GetOcclusionScalingFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.GetAkComponent
struct UAkGameplayStatics_GetAkComponent_Params
{
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.ClearBanks
struct UAkGameplayStatics_ClearBanks_Params
{
};

// Function AkAudio.AkGameplayStatics.AKSetRTPCValue
struct UAkGameplayStatics_AKSetRTPCValue_Params
{
	struct FString                                     RTPC;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               in_bBypassInternalValueInterpolation;                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
struct UAkGameplayStatics_AddOutputCaptureMarker_Params
{
	struct FString                                     MarkerText;                                               // (Parm, ZeroConstructor)
};

// Function AkAudio.AkRoomComponent.RemoveSpatialAudioRoom
struct UAkRoomComponent_RemoveSpatialAudioRoom_Params
{
};

// Function AkAudio.AkRoomComponent.AddSpatialAudioRoom
struct UAkRoomComponent_AddSpatialAudioRoom_Params
{
};

// Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
struct UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Params
{
};

// Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
struct UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Params
{
};

// Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
struct UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Params
{
};

// Function AkAudio.AudioOfflineVisual.StartBeatOffset
struct UAudioOfflineVisual_StartBeatOffset_Params
{
	float                                              Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AudioOfflineVisual.StartBeat
struct UAudioOfflineVisual_StartBeat_Params
{
};

// Function AkAudio.AudioOfflineVisual.ResetBeatTime
struct UAudioOfflineVisual_ResetBeatTime_Params
{
};

// Function AkAudio.AudioOfflineVisual.InitWithBeatTime
struct UAudioOfflineVisual_InitWithBeatTime_Params
{
	TArray<float>                                      Datas;                                                    // (Parm, ZeroConstructor)
};

// Function AkAudio.AudioOfflineVisual.Init
struct UAudioOfflineVisual_Init_Params
{
	TArray<struct FAudioOfflineVisualBeatData>         Datas;                                                    // (Parm, ZeroConstructor)
};

// Function AkAudio.AudioOfflineVisual.GetCurrentBeatByCustomTime
struct UAudioOfflineVisual_GetCurrentBeatByCustomTime_Params
{
	float                                              InBeatSecondTime;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAudioOfflineVisualBeatData                 Result;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AudioOfflineVisual.GetCurrentBeat
struct UAudioOfflineVisual_GetCurrentBeat_Params
{
	struct FAudioOfflineVisualBeatData                 Result;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AudioVisual.TryInit
struct UAudioVisual_TryInit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AudioVisual.Reset
struct UAudioVisual_Reset_Params
{
};

// Function AkAudio.AudioVisual.IsInited
struct UAudioVisual_IsInited_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AudioVisual.GetRMS
struct UAudioVisual_GetRMS_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AudioVisual.GetInstantEnergy
struct UAudioVisual_GetInstantEnergy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AudioVisual.GetFrequencyVol
struct UAudioVisual_GetFrequencyVol_Params
{
	EFrequencyRange                                    freqRange;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AudioVisual.GetFrequencyDataWithBin
struct UAudioVisual_GetFrequencyDataWithBin_Params
{
	TArray<float>                                      pFreqData;                                                // (Parm, OutParm, ZeroConstructor)
	EFrequencyRange                                    freqRange;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nBin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAbsolute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AudioVisual.GetFrequencyData
struct UAudioVisual_GetFrequencyData_Params
{
	TArray<float>                                      pFreqData;                                                // (Parm, OutParm, ZeroConstructor)
	EFrequencyRange                                    freqRange;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AudioVisual.GetAudioSamplesWithBin
struct UAudioVisual_GetAudioSamplesWithBin_Params
{
	TArray<float>                                      pAudioData;                                               // (Parm, OutParm, ZeroConstructor)
	int                                                nBin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAbsolute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AudioVisual.GetAudioSamples
struct UAudioVisual_GetAudioSamples_Params
{
	TArray<float>                                      pAudioData;                                               // (Parm, OutParm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AudioVisualBlueprintLibrary.GetAudioVisual
struct UAudioVisualBlueprintLibrary_GetAudioVisual_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioVisual*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AudioVisualBlueprintLibrary.GetAudioOfflineVisual
struct UAudioVisualBlueprintLibrary_GetAudioOfflineVisual_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioOfflineVisual*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

