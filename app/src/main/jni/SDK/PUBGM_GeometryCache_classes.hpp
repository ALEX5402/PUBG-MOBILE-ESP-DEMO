#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GeometryCache.GeometryCache
// 0x0040 (0x0068 - 0x0028)
class UGeometryCache : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<class UGeometryCacheTrack*>                 Tracks;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0050(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCache");
		return pStaticClass;
	}

};


// Class GeometryCache.GeometryCacheActor
// 0x0008 (0x03F8 - 0x03F0)
class AGeometryCacheActor : public AActor
{
public:
	class UGeometryCacheComponent*                     GeometryCacheComponent;                                   // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCacheActor");
		return pStaticClass;
	}


	class UGeometryCacheComponent* GetGeometryCacheComponent();
};


// Class GeometryCache.GeometryCacheComponent
// 0x0070 (0x0800 - 0x0790)
class UGeometryCacheComponent : public UMeshComponent
{
public:
	class UGeometryCache*                              GeometryCache;                                            // 0x0790(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRunning;                                                 // 0x0798(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // 0x0799(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x079A(0x0002) MISSED OFFSET
	float                                              StartTimeOffset;                                          // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumTracks;                                                // 0x07A4(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x07A8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x54];                                      // 0x07AC(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCacheComponent");
		return pStaticClass;
	}


	void Stop();
	void SetStartTimeOffset(float NewStartTimeOffset);
	void SetPlaybackSpeed(float NewPlaybackSpeed);
	void SetLooping(bool bNewLooping);
	bool SetGeometryCache(class UGeometryCache* NewGeomCache);
	void PlayReversedFromEnd();
	void PlayReversed();
	void PlayFromStart();
	void Play();
	void Pause();
	bool IsPlayingReversed();
	bool IsPlaying();
	bool IsLooping();
	float GetStartTimeOffset();
	float GetPlaybackSpeed();
};


// Class GeometryCache.GeometryCacheTrack
// 0x0028 (0x0050 - 0x0028)
class UGeometryCacheTrack : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCacheTrack");
		return pStaticClass;
	}

};


// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// 0x0020 (0x0070 - 0x0050)
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_FlipbookAnimation");
		return pStaticClass;
	}


	void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime);
};


// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// 0x0050 (0x00A0 - 0x0050)
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_TransformAnimation");
		return pStaticClass;
	}


	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};


// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// 0x0050 (0x00A0 - 0x0050)
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation");
		return pStaticClass;
	}


	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};


}

