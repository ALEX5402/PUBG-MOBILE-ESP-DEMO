#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AudioMixer.AudioMixerBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AudioMixer.AudioMixerBlueprintLibrary");
		return pStaticClass;
	}


	void SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed);
	void RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex);
	void RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	int GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	void ClearMasterSubmixEffects(class UObject* WorldContextObject);
	void AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& entry);
	void AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
};


// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// 0x0078 (0x00B8 - 0x0040)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0040(0x004C) MISSED OFFSET
	struct FSubmixEffectDynamicsProcessorSettings      Settings;                                                 // 0x008C(0x0028) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AudioMixer.SubmixEffectDynamicsProcessorPreset");
		return pStaticClass;
	}


	void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& InSettings);
};


// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0048 (0x0088 - 0x0040)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET
	struct FSubmixEffectSubmixEQSettings               Settings;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AudioMixer.SubmixEffectSubmixEQPreset");
		return pStaticClass;
	}


	void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);
};


// Class AudioMixer.SubmixEffectReverbPreset
// 0x0088 (0x00C8 - 0x0040)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x0040(0x0054) MISSED OFFSET
	struct FSubmixEffectReverbSettings                 Settings;                                                 // 0x0094(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AudioMixer.SubmixEffectReverbPreset");
		return pStaticClass;
	}


	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel);
	void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
};


// Class AudioMixer.SynthSound
// 0x0020 (0x02F0 - 0x02D0)
class USynthSound : public USoundWaveProcedural
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02D0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AudioMixer.SynthSound");
		return pStaticClass;
	}

};


// Class AudioMixer.SynthComponent
// 0x0330 (0x0600 - 0x02D0)
class USynthComponent : public USceneComponent
{
public:
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSoundAttenuationSettings                   AttenuationOverrides;                                     // 0x02D8(0x02B8) (Edit, BlueprintVisible)
	class USoundConcurrency*                           ConcurrencySettings;                                      // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundClass*                                 SoundClass;                                               // 0x0598(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                        // 0x05A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                SoundSubmix;                                              // 0x05A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSoundSubmixSendInfo>                SoundSubmixSends;                                         // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bIsUISound : 1;                                           // 0x05C0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05C1(0x0007) MISSED OFFSET
	class USynthSound*                                 Synth;                                                    // 0x05C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAudioComponent*                             AudioComponent;                                           // 0x05D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x05D8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AudioMixer.SynthComponent");
		return pStaticClass;
	}


	void Stop();
	void Start();
	void SetSubmixSend(class USoundSubmix* Submix, float SendLevel);
	bool IsPlaying();
};


}

