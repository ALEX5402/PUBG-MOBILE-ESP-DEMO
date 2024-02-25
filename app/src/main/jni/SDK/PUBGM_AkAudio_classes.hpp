#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AkAudio.AkAcousticPortal
// 0x0010 (0x0438 - 0x0428)
class AAkAcousticPortal : public AVolume
{
public:
	float                                              Gain;                                                     // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAkAcousticPortalState                             InitialState;                                             // 0x042C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x042D(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAcousticPortal");
		return pStaticClass;
	}


	void OpenPortal();
	EAkAcousticPortalState GetCurrentState();
	void ClosePortal();
};


// Class AkAudio.AkAcousticTexture
// 0x0000 (0x0028 - 0x0028)
class UAkAcousticTexture : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAcousticTexture");
		return pStaticClass;
	}

};


// Class AkAudio.AkAmbientSound
// 0x0040 (0x0430 - 0x03F0)
class AAkAmbientSound : public AActor
{
public:
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x03F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAkComponent*                                AkComponent;                                              // 0x03F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               StopWhenOwnerIsDestroyed;                                 // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoPost;                                                 // 0x0401(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2E];                                      // 0x0402(0x002E) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAmbientSound");
		return pStaticClass;
	}


	void StopAmbientSound();
	void StartAmbientSound();
};


// Class AkAudio.AkAreaCheckComponent
// 0x0050 (0x0160 - 0x0110)
class UAkAreaCheckComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0110(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAreaCheckComponent");
		return pStaticClass;
	}


	void UnRegistAKAreaVolume(class AActor* AreaVolume, ECustomAKAreaType AreaType);
	void RegistAKAreaVolume(class AActor* AreaVolume, ECustomAKAreaType AreaType);
	bool CheckVoiceAvailable(const struct FVector& VoicePostion);
};


// Class AkAudio.AkAreaCheckVolume
// 0x0008 (0x03F8 - 0x03F0)
class AAkAreaCheckVolume : public AActor
{
public:
	class UBoxComponent*                               CollisionComponent;                                       // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAreaCheckVolume");
		return pStaticClass;
	}


	bool IsInsideVolume(const struct FVector& OrignPosition);
	ECustomAKAreaType GetAKAreaType();
};


// Class AkAudio.AkAudioBank
// 0x0018 (0x0040 - 0x0028)
class UAkAudioBank : public UObject
{
public:
	bool                                               AutoLoad;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0029(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAudioBank");
		return pStaticClass;
	}

};


// Class AkAudio.AkAudioDeviceSettings
// 0x0030 (0x0058 - 0x0028)
class UAkAudioDeviceSettings : public UObject
{
public:
	int                                                SuperHighDefaultPoolSize;                                 // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                SuperHighEngineDefaultPoolSize;                           // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                HighDefaultPoolSize;                                      // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                HighEngineDefaultPoolSize;                                // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                LowDefaultPoolSize;                                       // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                LowEngineDefaultPoolSize;                                 // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                DefaultCommandQueueSize;                                  // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                DefaultBluetoothDelay;                                    // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultBluetoothErrThres;                                 // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultBluetoothErrRatio;                                 // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultBluetoothMaxTime;                                  // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAudioDeviceSettings");
		return pStaticClass;
	}


	void InitConfig();
};


// Class AkAudio.AkAudioEvent
// 0x0018 (0x0040 - 0x0028)
class UAkAudioEvent : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAttenuationRadius;                                     // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsInfinite;                                               // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              MinimumDuration;                                          // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaximumDuration;                                          // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAudioEvent");
		return pStaticClass;
	}

};


// Class AkAudio.AkAudioMonitor
// 0x0000 (0x0028 - 0x0028)
class UAkAudioMonitor : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAudioMonitor");
		return pStaticClass;
	}


	void UpdateAkComponentInfo(TMap<struct FString, struct FAkCombinedInfo>* OutList);
	void Update(float DeltaTime);
	void SetUpdateInterval(float NewUpdateInterval);
	void SetMonitorFlag(unsigned char TotalPlayCount, unsigned char ObjectPlayCount, TArray<unsigned char>* InFlags);
	void OnReportError(const struct FString& FunctionName, unsigned char ErrorAkCode, uint64_t NumericParam, const struct FString& StrParam);
	void OnAkAudioEventTrigger(const struct FString& Name, int code);
	void OnAkAudioBankTrigger(bool bUnload, const struct FString& BankName, int8_t RefCount);
	bool IsMonitorInit();
	bool IsAkOutOfAttenuation(class UAkComponent* AkComp, float Attenuation);
	TArray<uint16_t> GetTotalPlayRecord();
	struct FString GetSwitchValue(class UAkComponent* Component, const struct FString& SwitchName);
	TArray<struct FString> GetSwitchNames(class UAkComponent* Component);
	float GetRTPCValueByID(class UAkComponent* Component, uint32_t RTPCID);
	float GetRTPCValue(class UAkComponent* Component, const struct FString& RTPCName);
	TArray<struct FString> GetRTPCNames(class UAkComponent* Component);
	TArray<uint32_t> GetRTPCIDs(class UAkComponent* Component);
	TMap<unsigned char, struct FAKErrorInfo> GetReportErrorRecord();
	struct FVector GetPostion(class UAkComponent* Component);
	TArray<int> GetPlayingID(class UAkComponent* Component);
	struct FString GetPlayEventName(class UAkComponent* Component, int PlayID);
	TMap<struct FString, unsigned char> GetObjectPlayRecord();
	struct FString GetObjectNameByObjectID(uint64_t ObjectID);
	class UAkAudioMonitorData* GetMonitorDataPtr();
	struct FString GetGlobalSwitchValue(const struct FString& SwitchName);
	TArray<struct FString> GetGlobalSwitchNames();
	float GetGlobalRTPCValue(const struct FString& RTPCName);
	TArray<struct FString> GetGlobalRTPCNames();
	void GetEventList(TArray<struct FString>* OutRes);
	class UAkAudioEvent* GetEventInMemoryByName(TArray<class UAkAudioEvent*> AllAk, const struct FString& AkName);
	void GetBankRefList(TMap<struct FString, int8_t>* OutRes);
	TArray<struct FName> GetAllEventNameInMemory(class UObject* WorldContent);
	void GetAllEventInMemory(class UObject* WorldContent, TArray<class UAkAudioEvent*>* AllAk);
	void GetAllAkComponentFormDevice(TArray<class UAkComponent*>* AkList, TArray<class UAkComponent*>* recycledAkList);
};


// Class AkAudio.AkAudioMonitorData
// 0x0130 (0x0158 - 0x0028)
class UAkAudioMonitorData : public UObject
{
public:
	TArray<uint16_t>                                   TotalPlayCountRecord;                                     // 0x0028(0x0010) (ZeroConstructor)
	TMap<struct FString, unsigned char>                ObjectPlayCountRecord;                                    // 0x0038(0x0050) (ZeroConstructor)
	TMap<unsigned char, struct FAKErrorInfo>           AkErrorRecord;                                            // 0x0088(0x0050) (ZeroConstructor)
	struct FScriptDelegate                             AkAudioEventTrigger;                                      // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	float                                              nPassedTime;                                              // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              nUpdateInterval;                                          // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, int8_t>                       BankRefList;                                              // 0x00F0(0x0050) (ZeroConstructor)
	TArray<struct FString>                             EventList;                                                // 0x0140(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0150(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAudioMonitorData");
		return pStaticClass;
	}


	void UpdateEventList(bool bStop, const struct FString& InEventName);
	void UpdateBankRefList(bool bUnload, const struct FString& BankName, int8_t RefCount);
	void UpdateAkComponentInfo(TMap<struct FString, struct FAkCombinedInfo>* OutList);
	void SetMonitorFlagInternal(unsigned char TotalPlayCount, unsigned char ObjectPlayCount, TArray<unsigned char>* InFlags);
	void OnReportErrorInternal(const struct FString& FunctionName, unsigned char ErrorAkCode, uint64_t NumericParam, const struct FString& StrParam);
	void Initialize();
};


// Class AkAudio.AkAudioVisualComponent
// 0x1080 (0x1350 - 0x02D0)
class UAkAudioVisualComponent : public USceneComponent
{
public:
	struct FString                                     BankName;                                                 // 0x02D0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     EventName;                                                // 0x02E0(0x0010) (Edit, ZeroConstructor)
	EFrequencyRange                                    RangeType;                                                // 0x02F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02F1(0x0003) MISSED OFFSET
	int                                                BinNumber;                                                // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1010];                                    // 0x02F8(0x1010) MISSED OFFSET
	bool                                               UseOfflineData;                                           // 0x1308(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x1309(0x0007) MISSED OFFSET
	TArray<struct FAudioOfflineVisualBeatData>         OfflineData;                                              // 0x1310(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData03[0x30];                                      // 0x1320(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAudioVisualComponent");
		return pStaticClass;
	}


	void StartOfflineTime();
	void ResetOfflineTime();
	void OnTickVisualInfo(TArray<float> VisualInfo);
	void OnTickOfflineVisualInfo(const struct FAudioOfflineVisualBeatData& VisualInfo);
	void InitOfflineDataWithBeatTime(TArray<float> Datas);
	void InitOfflineData(TArray<struct FAudioOfflineVisualBeatData> Datas);
	bool GetCurrentBeat(struct FAudioOfflineVisualBeatData* Result);
};


// Class AkAudio.AkAuxBus
// 0x0010 (0x0038 - 0x0028)
class UAkAuxBus : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAuxBus");
		return pStaticClass;
	}

};


// Class AkAudio.AkComponent
// 0x0250 (0x0520 - 0x02D0)
class UAkComponent : public USceneComponent
{
public:
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                    // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     EarlyReflectionAuxBusName;                                // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                EarlyReflectionOrder;                                     // 0x02E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EarlyReflectionBusSendGain;                               // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EarlyReflectionMaxPathLength;                             // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	unsigned char                                      EnableSpotReflectors : 1;                                 // 0x02F8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      DrawFirstOrderReflections : 1;                            // 0x02F8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      DrawSecondOrderReflections : 1;                           // 0x02F8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      DrawHigherOrderReflections : 1;                           // 0x02F8(0x0001) (Edit, BlueprintVisible)
	bool                                               StopWhenOwnerDestroyed;                                   // 0x02F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsUpdateEmmiterTransform : 1;                            // 0x02FA(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAllIsInstanceSound : 1;                                  // 0x02FA(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x1];                                       // 0x02FB(0x0001) MISSED OFFSET
	float                                              AttenuationScalingFactor;                                 // 0x02FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionRefreshInterval;                                 // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData03[0x200];                                     // 0x0320(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkComponent");
		return pStaticClass;
	}


	void UseReverbVolumes(bool inUseReverbVolumes);
	void UseEarlyReflections(class UAkAuxBus* AuxBus, bool Left, bool Right, bool floor, bool Ceiling, bool Back, bool Front, bool SpotReflectors, const struct FString& AuxBusName);
	void StopPlayingID(int StopEventID);
	void Stop();
	int SetSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState);
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
	void SetRTPCValueGlobally(const struct FString& RTPC, float Value);
	void SetRTPCValue(const struct FString& RTPC, float Value, int InterpolationTimeMs);
	void SetOutputBusVolume(float BusVolume);
	void SetListeners(TArray<class UAkComponent*> Listeners);
	void SetEarlyReflectionOrder(int NewEarlyReflectionOrder);
	void SetAutoDestroy(bool in_AutoDestroy);
	void SetAttenuationScalingFactor(float Value);
	int SeekOnEvent(const struct FString& in_EventName, int in_iPosition);
	void PostTrigger(const struct FString& Trigger);
	int PostAssociatedAkEvent();
	int PostAkEventByName(const struct FString& in_EventName);
	int PostAkEvent(class UAkAudioEvent* AkEvent, const struct FString& in_EventName);
	float GetAttenuationRadius();
	void GetAkGameObjectName(struct FString* Name);
};


// Class AkAudio.AkGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkGameplayStatics");
		return pStaticClass;
	}


	void WakeupFromSuspend();
	void UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
	void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, bool Left, bool Right, bool floor, bool Ceiling, bool Back, bool Front, bool SpotReflectors, const struct FString& AuxBusName);
	void UnloadBankByName(const struct FString& BankName);
	void UnloadBank(class UAkAudioBank* Bank, const struct FString& BankName);
	void Suspend();
	void StopProfilerCapture();
	void StopPlayingID(int PlayingID);
	void StopOutputCapture();
	void StopAllAmbientSounds(class UObject* WorldContextObject);
	void StopAll();
	void StopAkEventByID(int ID);
	void StopActor(class AActor* Actor);
	void StartProfilerCapture(const struct FString& Filename);
	void StartOutputCapture(const struct FString& Filename);
	void StartAllAmbientSounds(class UObject* WorldContextObject);
	class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class UAkAuxBus* EarlyReflectionsBus, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, const struct FString& EarlyReflectionsBusName, bool AutoDestroy);
	void ShowAKComponentPosition(bool _IsShow);
	bool ShouldPostEvent(class UObject* WorldContext, const struct FVector& VoicePosition);
	void SetSwitchWithDummyActor(const struct FName& SwitchGroup, const struct FName& SwitchState);
	void SetSwitch(const struct FName& SwitchGroup, const struct FName& SwitchState, class AActor* Actor);
	int SetState(const struct FName& StateGroup, const struct FName& State);
	void SetRTPCValue(const struct FName& RTPC, float Value, int InterpolationTimeMs, class AActor* Actor);
	void SetPanningRule(EPanningRule PanRule);
	void SetOutputBusVolume(float BusVolume, class AActor* Actor);
	void SetOcclusionScalingFactor(float ScalingFactor);
	void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
	void SetBusConfig(const struct FString& BusName, EAkChannelConfiguration ChannelConfiguration);
	int SeekOnEvent(class UAkAudioEvent* in_pAkEvent, class AActor* in_pActor, int in_iPosition, const struct FString& EventName, bool in_bSeekToNearestMarker);
	void RefreshModDirectories();
	void PostTrigger(const struct FName& Trigger, class AActor* Actor);
	int PostEventWithDummyActor(class UAkAudioEvent* AkEvent, const struct FString& EventName, class UObject* WorldContextObject);
	void PostEventByName(const struct FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
	int PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	void PostEventAtLocationByName(const struct FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject);
	int PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject);
	int PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	void LoadInitBank();
	void LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks);
	void LoadBankByName(const struct FString& BankName);
	void LoadBank(class UAkAudioBank* Bank, const struct FString& BankName);
	bool IsGame(class UObject* WorldContextObject);
	bool IsEditor();
	int GetSourcePlayPosition(int AkEvent);
	float GetOcclusionScalingFactor();
	class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType);
	void ClearBanks();
	void AKSetRTPCValue(const struct FString& RTPC, float Value, bool in_bBypassInternalValueInterpolation);
	void AddOutputCaptureMarker(const struct FString& MarkerText);
};


// Class AkAudio.AkLateReverbComponent
// 0x0040 (0x0310 - 0x02D0)
class UAkLateReverbComponent : public USceneComponent
{
public:
	class UAkAuxBus*                                   AuxBus;                                                   // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     AuxBusName;                                               // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SendLevel;                                                // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeRate;                                                 // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x02F4(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkLateReverbComponent");
		return pStaticClass;
	}

};


// Class AkAudio.AkReverbVolume
// 0x0038 (0x0460 - 0x0428)
class AAkReverbVolume : public AVolume
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x0428(0x0001) (Deprecated)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0429(0x0007) MISSED OFFSET
	class UAkAuxBus*                                   AuxBus;                                                   // 0x0430(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FString                                     AuxBusName;                                               // 0x0438(0x0010) (ZeroConstructor, Deprecated)
	float                                              SendLevel;                                                // 0x0448(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              FadeRate;                                                 // 0x044C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              Priority;                                                 // 0x0450(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	class UAkLateReverbComponent*                      LateReverbComponent;                                      // 0x0458(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkReverbVolume");
		return pStaticClass;
	}

};


// Class AkAudio.AkRoomComponent
// 0x0020 (0x02F0 - 0x02D0)
class UAkRoomComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D0(0x0008) MISSED OFFSET
	float                                              Priority;                                                 // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x02DC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkRoomComponent");
		return pStaticClass;
	}


	void RemoveSpatialAudioRoom();
	void AddSpatialAudioRoom();
};


// Class AkAudio.AkSettings
// 0x0078 (0x00A0 - 0x0028)
class UAkSettings : public UObject
{
public:
	unsigned char                                      MaxSimultaneousReverbVolumes;                             // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FFilePath                                   WwiseProjectPath;                                         // 0x0030(0x0010) (Edit, Config)
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                             // 0x0040(0x0010) (Edit, Config)
	struct FFilePath                                   WwiseMacInstallationPath;                                 // 0x0050(0x0010) (Edit, Config)
	bool                                               SuppressWwiseProjectPathWarnings;                         // 0x0060(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               UseAlternateObstructionOcclusionFeature;                  // 0x0061(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3E];                                      // 0x0062(0x003E) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkSettings");
		return pStaticClass;
	}

};


// Class AkAudio.AkSpatialAudioVolume
// 0x0018 (0x0440 - 0x0428)
class AAkSpatialAudioVolume : public AVolume
{
public:
	class UAkSurfaceReflectorSetComponent*             SurfaceReflectorSet;                                      // 0x0428(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAkLateReverbComponent*                      LateReverb;                                               // 0x0430(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAkRoomComponent*                            room;                                                     // 0x0438(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkSpatialAudioVolume");
		return pStaticClass;
	}

};


// Class AkAudio.AkSpotReflector
// 0x0030 (0x0420 - 0x03F0)
class AAkSpotReflector : public AActor
{
public:
	class UAkAuxBus*                                   AuxBus;                                                   // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     AuxBusName;                                               // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAkAcousticTexture*                          AcousticTexture;                                          // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceScalingFactor;                                    // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Level;                                                    // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0418(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkSpotReflector");
		return pStaticClass;
	}

};


// Class AkAudio.AkSurfaceReflectorSetComponent
// 0x0020 (0x02F0 - 0x02D0)
class UAkSurfaceReflectorSetComponent : public USceneComponent
{
public:
	TArray<struct FAkPoly>                             AcousticPolys;                                            // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkSurfaceReflectorSetComponent");
		return pStaticClass;
	}


	void UpdateSurfaceReflectorSet();
	void SendSurfaceReflectorSet();
	void RemoveSurfaceReflectorSet();
};


// Class AkAudio.AudioOfflineDataRecorder
// 0x1070 (0x1340 - 0x02D0)
class UAudioOfflineDataRecorder : public USceneComponent
{
public:
	struct FString                                     BankName;                                                 // 0x02D0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     EventName;                                                // 0x02E0(0x0010) (Edit, ZeroConstructor)
	EFrequencyRange                                    RangeType;                                                // 0x02F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02F1(0x0003) MISSED OFFSET
	int                                                BinNumber;                                                // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      BeatTimeArray;                                            // 0x02F8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAudioOfflineVisualBeatData>         Result;                                                   // 0x0308(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x1028];                                    // 0x0318(0x1028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AudioOfflineDataRecorder");
		return pStaticClass;
	}

};


// Class AkAudio.AudioOfflineVisual
// 0x0020 (0x0048 - 0x0028)
class UAudioOfflineVisual : public UObject
{
public:
	TArray<struct FAudioOfflineVisualBeatData>         OfflineData;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AudioOfflineVisual");
		return pStaticClass;
	}


	void StartBeatOffset(float Offset);
	void StartBeat();
	void ResetBeatTime();
	void InitWithBeatTime(TArray<float> Datas);
	void Init(TArray<struct FAudioOfflineVisualBeatData> Datas);
	bool GetCurrentBeatByCustomTime(float InBeatSecondTime, struct FAudioOfflineVisualBeatData* Result);
	bool GetCurrentBeat(struct FAudioOfflineVisualBeatData* Result);
};


// Class AkAudio.AudioVisual
// 0x1000 (0x1028 - 0x0028)
class UAudioVisual : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1000];                                    // 0x0028(0x1000) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AudioVisual");
		return pStaticClass;
	}


	bool TryInit();
	void Reset();
	bool IsInited();
	float GetRMS();
	float GetInstantEnergy();
	float GetFrequencyVol(EFrequencyRange freqRange);
	int GetFrequencyDataWithBin(EFrequencyRange freqRange, int nBin, bool bAbsolute, TArray<float>* pFreqData);
	int GetFrequencyData(EFrequencyRange freqRange, TArray<float>* pFreqData);
	int GetAudioSamplesWithBin(int nBin, bool bAbsolute, TArray<float>* pAudioData);
	int GetAudioSamples(TArray<float>* pAudioData);
};


// Class AkAudio.AudioVisualBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAudioVisualBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AudioVisualBlueprintLibrary");
		return pStaticClass;
	}


	class UAudioVisual* GetAudioVisual(class UObject* Outer);
	class UAudioOfflineVisual* GetAudioOfflineVisual(class UObject* Outer);
};


// Class AkAudio.InterpTrackAkAudioEvent
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
public:
	TArray<struct FAkAudioEventTrackKey>               Events;                                                   // 0x0090(0x0010) (ZeroConstructor)
	unsigned char                                      bContinueEventOnMatineeEnd : 1;                           // 0x00A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.InterpTrackAkAudioEvent");
		return pStaticClass;
	}

};


// Class AkAudio.InterpTrackAkAudioRTPC
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                                    // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bPlayOnReverse : 1;                                       // 0x00A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bContinueRTPCOnMatineeEnd : 1;                            // 0x00A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.InterpTrackAkAudioRTPC");
		return pStaticClass;
	}

};


// Class AkAudio.InterpTrackInstAkAudioEvent
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioEvent");
		return pStaticClass;
	}

};


// Class AkAudio.InterpTrackInstAkAudioRTPC
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioRTPC");
		return pStaticClass;
	}

};


// Class AkAudio.MovieSceneAkAudioEventSection
// 0x0020 (0x00D0 - 0x00B0)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	class UAkAudioEvent*                               Event;                                                    // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               StopAtSectionEnd;                                         // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	struct FString                                     EventName;                                                // 0x00C0(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventSection");
		return pStaticClass;
	}

};


// Class AkAudio.MovieSceneAkTrack
// 0x0018 (0x0070 - 0x0058)
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      bIsAMasterTrack : 1;                                      // 0x0068(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.MovieSceneAkTrack");
		return pStaticClass;
	}

};


// Class AkAudio.MovieSceneAkAudioEventTrack
// 0x0000 (0x0070 - 0x0070)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventTrack");
		return pStaticClass;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCSection
// 0x0088 (0x0138 - 0x00B0)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x00B8(0x0010) (Edit, ZeroConstructor)
	struct FRichCurve                                  FloatCurve;                                               // 0x00C8(0x0070)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCSection");
		return pStaticClass;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCTrack
// 0x0000 (0x0070 - 0x0070)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCTrack");
		return pStaticClass;
	}

};


}

