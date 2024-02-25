#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieScene.MovieSceneSignedObject
// 0x0028 (0x0050 - 0x0028)
class UMovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                       Signature;                                                // 0x0028(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneSignedObject");
		return pStaticClass;
	}

};


// Class MovieScene.MovieScene
// 0x0088 (0x00D8 - 0x0050)
class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>                Spawnables;                                               // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FMovieScenePossessable>              Possessables;                                             // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneBinding>                  ObjectBindings;                                           // 0x0070(0x0010) (ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                             // 0x0080(0x0010) (ExportObject, ZeroConstructor)
	class UMovieSceneTrack*                            CameraCutTrack;                                           // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FFloatRange                                 SelectionRange;                                           // 0x0098(0x0010)
	struct FFloatRange                                 PlaybackRange;                                            // 0x00A8(0x0010)
	bool                                               bForceFixedFrameIntervalPlayback;                         // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              FixedFrameInterval;                                       // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InTime;                                                   // 0x00C0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              OutTime;                                                  // 0x00C4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              StartTime;                                                // 0x00C8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              EndTime;                                                  // 0x00CC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bLowDeviceFrameRateLimitEnabled;                          // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	int                                                LowDeviceFrameLimit;                                      // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieScene");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneBindingOverrides
// 0x0070 (0x0098 - 0x0028)
class UMovieSceneBindingOverrides : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FMovieSceneBindingOverrideData>      BindingData;                                              // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneBindingOverrides");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneBindingOverridesInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneBindingOverridesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneBindingOverridesInterface");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneBindingOwnerInterface");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneBuiltInEasingFunction
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	EMovieSceneBuiltInEasing                           Type;                                                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneBuiltInEasingFunction");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneEasingExternalCurve
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UCurveFloat*                                 Curve;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneEasingExternalCurve");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneEasingFunction
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneEasingFunction : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneEasingFunction");
		return pStaticClass;
	}


	float OnEvaluate(float Interp);
};


// Class MovieScene.MovieSceneFolder
// 0x0048 (0x0070 - 0x0028)
class UMovieSceneFolder : public UObject
{
public:
	struct FName                                       FolderName;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMovieSceneFolder*>                   ChildFolders;                                             // 0x0030(0x0010) (ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    ChildMasterTracks;                                        // 0x0040(0x0010) (ExportObject, ZeroConstructor)
	TArray<struct FString>                             ChildObjectBindingStrings;                                // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneFolder");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneTrack
// 0x0008 (0x0058 - 0x0050)
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions                 EvalOptions;                                              // 0x0050(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneTrack");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneNameableTrack");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneSection
// 0x0060 (0x00B0 - 0x0050)
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions               EvalOptions;                                              // 0x0050(0x0002) (Edit)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	struct FMovieSceneEasingSettings                   Easing;                                                   // 0x0058(0x0038) (Edit)
	float                                              StartTime;                                                // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RowIndex;                                                 // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OverlapPriority;                                          // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsActive : 1;                                            // 0x00A0(0x0001) (Edit)
	unsigned char                                      bIsLocked : 1;                                            // 0x00A0(0x0001) (Edit)
	unsigned char                                      bIsInfinite : 1;                                          // 0x00A0(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              PrerollTime;                                              // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PostrollTime;                                             // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FOptionalMovieSceneBlendType                BlendType;                                                // 0x00AC(0x0002)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00AE(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneSection");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneSegmentCompilerTestTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneSegmentCompilerTestTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  SectionArray;                                             // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneSegmentCompilerTestTrack");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneSegmentCompilerTestSection
// 0x0000 (0x00B0 - 0x00B0)
class UMovieSceneSegmentCompilerTestSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneSegmentCompilerTestSection");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneSequence
// 0x0290 (0x02E0 - 0x0050)
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	struct FCachedMovieSceneEvaluationTemplate         EvaluationTemplate;                                       // 0x0050(0x0220)
	struct FMovieSceneTrackCompilationParams           TemplateParameters;                                       // 0x0270(0x0002)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0272(0x0006) MISSED OFFSET
	TMap<class UObject*, struct FCachedMovieSceneEvaluationTemplate> InstancedSubSequenceEvaluationTemplates;                  // 0x0278(0x0050) (ZeroConstructor)
	bool                                               bParentContextsAreSignificant;                            // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x02C9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneSequence");
		return pStaticClass;
	}

};


// Class MovieScene.MovieSceneSequencePlayer
// 0x0790 (0x07B8 - 0x0028)
class UMovieSceneSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x348];                                     // 0x0028(0x0348) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlay;                                                   // 0x0370(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayReverse;                                            // 0x0380(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStop;                                                   // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPreStop;                                                // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               FreezeEndFrame;                                           // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPause;                                                  // 0x03B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnObjectSpawnedEvent;                                     // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TEnumAsByte<EMovieScenePlayerStatus>               Status;                                                   // 0x03E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bReversePlayback : 1;                                     // 0x03E9(0x0001)
	unsigned char                                      bPendingFirstUpdate : 1;                                  // 0x03E9(0x0001)
	unsigned char                                      UnknownData02[0x6];                                       // 0x03EA(0x0006) MISSED OFFSET
	class UMovieSceneSequence*                         Sequence;                                                 // 0x03F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeCursorPosition;                                       // 0x03F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x03FC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x0400(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentNumLoops;                                          // 0x0404(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0408(0x0010) MISSED OFFSET
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x0418(0x0028)
	unsigned char                                      UnknownData04[0x378];                                     // 0x0440(0x0378) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneSequencePlayer");
		return pStaticClass;
	}


	void Stop();
	void StartPlayingNextTick();
	void SetPlayRate(float PlayRate);
	void SetPlayLoopCount(int NumLoops);
	void SetPlaybackRange(float NewStartTime, float NewEndTime);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void Scrub();
	void PlayReverse();
	void PlayLooping(int NumLoops);
	void Play();
	void Pause();
	void JumpToPositionEx(float NewPlaybackPosition);
	void JumpToPosition(float NewPlaybackPosition);
	bool IsPlaying();
	bool IsPaused();
	void GoToEndAndStop();
	float GetPlayRate();
	float GetPlaybackStart();
	float GetPlaybackPosition();
	float GetPlaybackEnd();
	float GetLength();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	void ChangePlaybackDirection();
};


}

