#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AkAudio.AkAcousticPortalState
enum class EAkAcousticPortalState : uint8_t
{
	AkAcousticPortalState__Closed  = 0,
	AkAcousticPortalState__Open    = 1,
	AkAcousticPortalState__AkAcousticPortalState_MAX = 2
};


// Enum AkAudio.ECustomAKAreaType
enum class ECustomAKAreaType : uint8_t
{
	ECustomAKAreaType__EAT_NormalArea = 0,
	ECustomAKAreaType__EAT_ApartArea = 1,
	ECustomAKAreaType__EAT_TransitionArea = 2,
	ECustomAKAreaType__EAT_MAX     = 3
};


// Enum AkAudio.EReflectionFilterBits
enum class EReflectionFilterBits : uint8_t
{
	EReflectionFilterBits__Wall    = 0,
	EReflectionFilterBits__Ceiling = 1,
	EReflectionFilterBits__Floor   = 2,
	EReflectionFilterBits__EReflectionFilterBits_MAX = 3
};


// Enum AkAudio.PanningRule
enum class EPanningRule : uint8_t
{
	PanningRule__PanningRule_Speakers = 0,
	PanningRule__PanningRule_Headphones = 1,
	PanningRule__PanningRule_MAX   = 2
};


// Enum AkAudio.AkChannelConfiguration
enum class EAkChannelConfiguration : uint8_t
{
	AkChannelConfiguration__Ak_Parent = 0,
	AkChannelConfiguration__Ak_1   = 1,
	AkChannelConfiguration__Ak_2   = 2,
	AkChannelConfiguration__Ak_3   = 3,
	AkChannelConfiguration__Ak_4   = 4,
	AkChannelConfiguration__Ak_5   = 5,
	AkChannelConfiguration__Ak_7   = 6,
	AkChannelConfiguration__Ak_5_1 = 7,
	AkChannelConfiguration__Ak_7_1 = 8,
	AkChannelConfiguration__Ak_7_101 = 9,
	AkChannelConfiguration__Ak_Auro_9 = 10,
	AkChannelConfiguration__Ak_Auro_10 = 11,
	AkChannelConfiguration__Ak_Auro_11 = 12,
	AkChannelConfiguration__Ak_Auro_13 = 13,
	AkChannelConfiguration__Ak_Ambisonics_1st_order = 14,
	AkChannelConfiguration__Ak_Ambisonics_2nd_order = 15,
	AkChannelConfiguration__Ak_Ambisonics_3rd_order = 16,
	AkChannelConfiguration__Ak_MAX = 17
};


// Enum AkAudio.EFrequencyRange
enum class EFrequencyRange : uint8_t
{
	EFrequencyRange__SubBass       = 0,
	EFrequencyRange__Bass          = 1,
	EFrequencyRange__LowMid        = 2,
	EFrequencyRange__Mid           = 3,
	EFrequencyRange__UpperMid      = 4,
	EFrequencyRange__High          = 5,
	EFrequencyRange__VeryHigh      = 6,
	EFrequencyRange__Decibal       = 7,
	EFrequencyRange__EFrequencyRange_MAX = 8
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AkAudio.AkCombinedInfo
// 0x00B0
struct FAkCombinedInfo
{
	TArray<struct FString>                             EventList;                                                // 0x0000(0x0010) (ZeroConstructor)
	TMap<struct FString, float>                        RTPCList;                                                 // 0x0010(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FString>               SwitchList;                                               // 0x0060(0x0050) (ZeroConstructor)
};

// ScriptStruct AkAudio.AKFunctionInfo
// 0x0028
struct FAKFunctionInfo
{
	struct FString                                     FunctionName;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     StrParam;                                                 // 0x0010(0x0010) (ZeroConstructor)
	int                                                NumParam;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AkAudio.AKErrorInfo
// 0x0018
struct FAKErrorInfo
{
	unsigned char                                      AKRESULT_ID;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FAKFunctionInfo>                     DetailInfo;                                               // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct AkAudio.AudioOfflineVisualBeatData
// 0x0018
struct FAudioOfflineVisualBeatData
{
	float                                              BeatTime;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<float>                                      Intensity;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AkAudio.AkPoly
// 0x0010
struct FAkPoly
{
	class UAkAcousticTexture*                          Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableSurface;                                            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AkAudio.AkAudioEventTrackKey
// 0x0020
struct FAkAudioEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkAmbSoundCheckpointRecord
// 0x0001
struct FAkAmbSoundCheckpointRecord
{
	bool                                               bCurrentlyPlaying;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AKAreaVolumeArray
// 0x0010
struct FAKAreaVolumeArray
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
// 0x0008 (0x0020 - 0x0018)
struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAkAudioEventSection*              Section;                                                  // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
// 0x0008 (0x0020 - 0x0018)
struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAkAudioRTPCSection*               Section;                                                  // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCSectionData
// 0x0080
struct FMovieSceneAkAudioRTPCSectionData
{
	struct FString                                     RTPCName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FRichCurve                                  RTPCCurve;                                                // 0x0010(0x0070)
};

}

