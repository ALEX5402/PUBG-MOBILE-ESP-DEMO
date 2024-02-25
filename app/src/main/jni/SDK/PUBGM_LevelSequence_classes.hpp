#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LevelSequence.LevelSequenceActor
// 0x00A0 (0x0490 - 0x03F0)
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03F0(0x0008) MISSED OFFSET
	bool                                               bAutoPlay;                                                // 0x03F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x0400(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	class ULevelSequencePlayer*                        SequencePlayer;                                           // 0x0428(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FSoftObjectPath                             LevelSequence;                                            // 0x0430(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<class AActor*>                              AdditionalEventReceivers;                                 // 0x0448(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                            // 0x0458(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                         // 0x0460(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bReduceFrequency;                                         // 0x0468(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0469(0x0003) MISSED OFFSET
	int                                                ReduceFrameCount;                                         // 0x046C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IgnoreFrameTolerance;                                     // 0x0470(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverrideInstanceData : 1;                                // 0x0474(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	class UObject*                                     DefaultInstanceData;                                      // 0x0478(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bForceAsync;                                              // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	class ULevelSequenceBurnIn*                        BurnInInstance;                                           // 0x0488(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return pStaticClass;
	}


	void SetSequence(class ULevelSequence* InSequence);
	void SetEventReceivers(TArray<class AActor*> AdditionalReceivers);
	void SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
	void SetAllMovieSceneSectionsToKeepState();
	void ResetBindings();
	void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
	void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
	void ReceiveInitailizePlayer();
	class ULevelSequence* GetSequence(bool bLoad, bool bInitializePlayer);
	struct FMovieSceneObjectBindingID GetPossessableByName(const struct FString& NameKeyString);
	void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};


// Class LevelSequence.DefaultLevelSequenceInstanceData
// 0x0048 (0x0070 - 0x0028)
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class AActor*                                      TransformOriginActor;                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  TransformOrigin;                                          // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.DefaultLevelSequenceInstanceData");
		return pStaticClass;
	}

};


// Class LevelSequence.LevelSequence
// 0x00F8 (0x03D8 - 0x02E0)
class ULevelSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLevelSequenceObjectReferenceMap            ObjectReferences;                                         // 0x02E8(0x0050)
	struct FLevelSequenceBindingReferences             BindingReferences;                                        // 0x0338(0x0050)
	TMap<struct FString, struct FLevelSequenceObject>  PossessedObjects;                                         // 0x0388(0x0050) (ZeroConstructor, Deprecated)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequence");
		return pStaticClass;
	}

};


// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000 (0x0028 - 0x0028)
class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return pStaticClass;
	}

};


// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0028 (0x0050 - 0x0028)
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                               bUseBurnIn;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FSoftClassPath                              BurnInClass;                                              // 0x0030(0x0018) (Edit)
	class ULevelSequenceBurnInInitSettings*            Settings;                                                 // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return pStaticClass;
	}

};


// Class LevelSequence.LevelSequenceBurnIn
// 0x0060 (0x02C0 - 0x0260)
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot                FrameInformation;                                         // 0x0260(0x0058) (BlueprintVisible, BlueprintReadOnly)
	class ALevelSequenceActor*                         LevelSequenceActor;                                       // 0x02B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return pStaticClass;
	}


	void SetSettings(class UObject* InSettings);
	class UClass* GetSettingsClass();
};


// Class LevelSequence.LevelSequencePlayer
// 0x00B0 (0x0868 - 0x07B8)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	struct FScriptMulticastDelegate                    OnCameraCut;                                              // 0x07B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTrackEvent;                                             // 0x07C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x07D8(0x0030) MISSED OFFSET
	TArray<class UObject*>                             AdditionalEventReceivers;                                 // 0x0808(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0818(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return pStaticClass;
	}


	class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);
};


}

