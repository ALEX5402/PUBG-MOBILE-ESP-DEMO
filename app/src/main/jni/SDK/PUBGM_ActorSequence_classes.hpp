#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ActorSequence.ActorSequence
// 0x0028 (0x0308 - 0x02E0)
class UActorSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FActorSequenceObjectReferenceMap            ObjectReferences;                                         // 0x02E8(0x0020)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ActorSequence.ActorSequence");
		return pStaticClass;
	}

};


// Class ActorSequence.ActorSequenceComponent
// 0x0040 (0x0150 - 0x0110)
class UActorSequenceComponent : public UActorComponent
{
public:
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x0110(0x0028) (Edit)
	class UActorSequence*                              Sequence;                                                 // 0x0138(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActorSequencePlayer*                        SequencePlayer;                                           // 0x0140(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAutoPlay;                                                // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRunOnServer;                                             // 0x0149(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableOptimize;                                          // 0x014A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x014B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ActorSequence.ActorSequenceComponent");
		return pStaticClass;
	}


	void StopPlay();
	void StartPlay(float StartTime);
	void OnStopOrFinsh();
	float GetLength();
};


// Class ActorSequence.ActorSequencePlayer
// 0x0000 (0x07B8 - 0x07B8)
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ActorSequence.ActorSequencePlayer");
		return pStaticClass;
	}

};


}

