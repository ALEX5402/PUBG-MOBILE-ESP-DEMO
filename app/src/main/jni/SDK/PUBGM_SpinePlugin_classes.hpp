#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SpinePlugin.SpineAtlasAsset
// 0x0030 (0x0058 - 0x0028)
class USpineAtlasAsset : public UObject
{
public:
	TArray<class UTexture2D*>                          atlasPages;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FString                                     rawData;                                                  // 0x0040(0x0010) (ZeroConstructor)
	struct FName                                       atlasFileName;                                            // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineAtlasAsset");
		return pStaticClass;
	}

};


// Class SpinePlugin.SpineBoneDriverComponent
// 0x0030 (0x0300 - 0x02D0)
class USpineBoneDriverComponent : public USceneComponent
{
public:
	class AActor*                                      Target;                                                   // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BoneName;                                                 // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               UseComponentTransform;                                    // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UsePosition;                                              // 0x02E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseRotation;                                              // 0x02EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseScale;                                                 // 0x02EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x02EC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineBoneDriverComponent");
		return pStaticClass;
	}


	void BeforeUpdateWorldTransform(class USpineSkeletonComponent* Skeleton);
};


// Class SpinePlugin.SpineBoneFollowerComponent
// 0x0020 (0x02F0 - 0x02D0)
class USpineBoneFollowerComponent : public USceneComponent
{
public:
	class AActor*                                      Target;                                                   // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BoneName;                                                 // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               UseComponentTransform;                                    // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UsePosition;                                              // 0x02E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseRotation;                                              // 0x02EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseScale;                                                 // 0x02EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineBoneFollowerComponent");
		return pStaticClass;
	}

};


// Class SpinePlugin.TrackEntry
// 0x0068 (0x0090 - 0x0028)
class UTrackEntry : public UObject
{
public:
	struct FScriptMulticastDelegate                    animationStart;                                           // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationInterrupt;                                       // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationEvent;                                           // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationComplete;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    animationEnd;                                             // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationDispose;                                         // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.TrackEntry");
		return pStaticClass;
	}


	void SetTrackTime(float trackTime);
	void SetTrackEnd(float trackEnd);
	void SetTimeScale(float TimeScale);
	void SetMixTime(float mixTime);
	void SetMixDuration(float mixDuration);
	void SetLoop(bool Loop);
	void SetEventThreshold(float eventThreshold);
	void SetDrawOrderThreshold(float drawOrderThreshold);
	void SetDelay(float Delay);
	void SetAttachmentThreshold(float attachmentThreshold);
	void SetAnimationStart(float animationStart);
	void SetAnimationLast(float animationLast);
	void SetAnimationEnd(float animationEnd);
	void SetAlpha(float Alpha);
	bool isValidAnimation();
	float GetTrackTime();
	int GetTrackIndex();
	float GetTrackEnd();
	float GetTimeScale();
	float GetMixTime();
	float GetMixDuration();
	bool GetLoop();
	float GetEventThreshold();
	float GetDrawOrderThreshold();
	float GetDelay();
	float GetAttachmentThreshold();
	float GetAnimationStart();
	struct FString getAnimationName();
	float GetAnimationLast();
	float GetAnimationEnd();
	float getAnimationDuration();
	float GetAlpha();
};


// Class SpinePlugin.SpineSkeletonComponent
// 0x0058 (0x0168 - 0x0110)
class USpineSkeletonComponent : public UActorComponent
{
public:
	class USpineAtlasAsset*                            Atlas;                                                    // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpineSkeletonDataAsset*                     SkeletonData;                                             // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    BeforeUpdateWorldTransform;                               // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AfterUpdateWorldTransform;                                // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0140(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineSkeletonComponent");
		return pStaticClass;
	}


	void UpdateWorldTransform();
	void SetToSetupPose();
	void SetSlotsToSetupPose();
	void SetSlotColor(const struct FString& SlotName, const struct FColor& Color);
	bool SetSkins(TArray<struct FString>* SkinNames);
	bool SetSkin(const struct FString& SkinName);
	void SetScaleY(float ScaleY);
	void SetScaleX(float ScaleX);
	void SetBoneWorldPosition(const struct FString& BoneName, const struct FVector& Position);
	void SetBonesToSetupPose();
	bool SetAttachment(const struct FString& SlotName, const struct FString& AttachmentName);
	bool HasSlot(const struct FString& SlotName);
	bool HasSkin(const struct FString& SkinName);
	bool HasBone(const struct FString& BoneName);
	bool HasAnimation(const struct FString& AnimationName);
	void GetSlots(TArray<struct FString>* Slots);
	void GetSkins(TArray<struct FString>* Skins);
	float GetScaleY();
	float GetScaleX();
	struct FTransform GetBoneWorldTransform(const struct FString& BoneName);
	void GetBones(TArray<struct FString>* Bones);
	void GetAnimations(TArray<struct FString>* Animations);
	float getAnimationDuration(const struct FString& AnimationName);
};


// Class SpinePlugin.SpineSkeletonAnimationComponent
// 0x0100 (0x0268 - 0x0168)
class USpineSkeletonAnimationComponent : public USpineSkeletonComponent
{
public:
	struct FScriptMulticastDelegate                    animationStart;                                           // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationInterrupt;                                       // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationEvent;                                           // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationComplete;                                        // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    animationEnd;                                             // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationDispose;                                         // 0x01B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     PreviewAnimation;                                         // 0x01C8(0x0010) (Edit, ZeroConstructor)
	struct FString                                     PreviewSkin;                                              // 0x01D8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E8(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x01E8(0x0050) UNKNOWN PROPERTY: SetProperty SpinePlugin.SpineSkeletonAnimationComponent.trackEntries
	bool                                               bAutoPlaying;                                             // 0x0240(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x27];                                      // 0x0241(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineSkeletonAnimationComponent");
		return pStaticClass;
	}


	void SetTimeScale(float TimeScale);
	void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);
	class UTrackEntry* SetEmptyAnimation(int TrackIndex, float mixDuration);
	void SetAutoPlay(bool bInAutoPlays);
	class UTrackEntry* SetAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop);
	float GetTimeScale();
	class UTrackEntry* GetCurrent(int TrackIndex);
	void ClearTracks();
	void ClearTrack(int TrackIndex);
	class UTrackEntry* AddEmptyAnimation(int TrackIndex, float mixDuration, float Delay);
	class UTrackEntry* AddAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop, float Delay);
};


// Class SpinePlugin.SpineSkeletonDataAsset
// 0x00D0 (0x00F8 - 0x0028)
class USpineSkeletonDataAsset : public UObject
{
public:
	float                                              DefaultMix;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FSpineAnimationStateMixData>         MixData;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             Bones;                                                    // 0x0040(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<struct FString>                             Slots;                                                    // 0x0050(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<struct FString>                             Skins;                                                    // 0x0060(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<struct FString>                             Animations;                                               // 0x0070(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<struct FString>                             Events;                                                   // 0x0080(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<unsigned char>                              rawData;                                                  // 0x0090(0x0010) (ZeroConstructor)
	struct FName                                       skeletonDataFileName;                                     // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00A8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineSkeletonDataAsset");
		return pStaticClass;
	}

};


// Class SpinePlugin.SpineSkeletonRendererComponent
// 0x03B0 (0x0BB0 - 0x0800)
class USpineSkeletonRendererComponent : public UProceduralMeshComponent
{
public:
	class UMaterialInterface*                          AdditiveBlendMaterial;                                    // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MultiplyBlendMaterial;                                    // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ScreenBlendMaterial;                                      // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            atlasNormalBlendMaterials;                                // 0x0818(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0828(0x0050) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasAdditiveBlendMaterials;                              // 0x0878(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0888(0x0050) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasMultiplyBlendMaterials;                              // 0x08D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x50];                                      // 0x08E8(0x0050) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasScreenBlendMaterials;                                // 0x0938(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0948(0x0050) MISSED OFFSET
	float                                              DepthOffset;                                              // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x099C(0x0004) MISSED OFFSET
	struct FName                                       TextureParameterName;                                     // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x09A8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bCreateCollision;                                         // 0x09B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1F7];                                     // 0x09B9(0x01F7) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineSkeletonRendererComponent");
		return pStaticClass;
	}

};


// Class SpinePlugin.SpineWidget
// 0x05A8 (0x06A8 - 0x0100)
class USpineWidget : public UWidget
{
public:
	float                                              Scale;                                                    // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FString                                     InitialSkin;                                              // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USpineAtlasAsset*                            Atlas;                                                    // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpineSkeletonDataAsset*                     SkeletonData;                                             // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          NormalBlendMaterial;                                      // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          AdditiveBlendMaterial;                                    // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MultiplyBlendMaterial;                                    // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ScreenBlendMaterial;                                      // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       TextureParameterName;                                     // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOffset;                                              // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0154(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	struct FSlateBrush                                 Brush;                                                    // 0x0168(0x00B8) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptMulticastDelegate                    BeforeUpdateWorldTransform;                               // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AfterUpdateWorldTransform;                                // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    animationStart;                                           // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationInterrupt;                                       // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationEvent;                                           // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationComplete;                                        // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    animationEnd;                                             // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationDispose;                                         // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x40];                                      // 0x02A0(0x0040) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasNormalBlendMaterials;                                // 0x02E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x50];                                      // 0x02F0(0x0050) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasAdditiveBlendMaterials;                              // 0x0340(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x50];                                      // 0x0350(0x0050) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasMultiplyBlendMaterials;                              // 0x03A0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x50];                                      // 0x03B0(0x0050) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasScreenBlendMaterials;                                // 0x0400(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData06[0x240];                                     // 0x0410(0x0240) MISSED OFFSET
	unsigned char                                      UnknownData07[0x50];                                      // 0x0410(0x0050) UNKNOWN PROPERTY: SetProperty SpinePlugin.SpineWidget.trackEntries
	bool                                               bAutoPlaying;                                             // 0x06A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x06A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineWidget");
		return pStaticClass;
	}


	void UpdateWorldTransform();
	void Tick(float DeltaTime, bool CallDelegates);
	void SetToSetupPose();
	void SetTimeScale(float TimeScale);
	void SetSlotsToSetupPose();
	bool SetSkins(TArray<struct FString>* SkinNames);
	bool SetSkin(const struct FString& SkinName);
	void SetScaleY(float ScaleY);
	void SetScaleX(float ScaleX);
	void SetScale(float inScale);
	void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);
	class UTrackEntry* SetEmptyAnimation(int TrackIndex, float mixDuration);
	void SetColor(const struct FLinearColor& InColor);
	void SetBonesToSetupPose();
	void SetAutoPlay(bool bInAutoPlays);
	bool SetAttachment(const struct FString& SlotName, const struct FString& AttachmentName);
	class UTrackEntry* SetAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop);
	bool HasSlot(const struct FString& SlotName);
	bool HasSkin(const struct FString& SkinName);
	bool HasBone(const struct FString& BoneName);
	bool HasAnimation(const struct FString& AnimationName);
	float GetTimeScale();
	void GetSlots(TArray<struct FString>* Slots);
	void GetSkins(TArray<struct FString>* Skins);
	float GetScaleY();
	float GetScaleX();
	float GetScale();
	class UTrackEntry* GetCurrent(int TrackIndex);
	struct FLinearColor GetColor();
	void GetBones(TArray<struct FString>* Bones);
	void GetAnimations(TArray<struct FString>* Animations);
	float getAnimationDuration(const struct FString& AnimationName);
	void ClearTracks();
	void ClearTrack(int TrackIndex);
	class UTrackEntry* AddEmptyAnimation(int TrackIndex, float mixDuration, float Delay);
	class UTrackEntry* AddAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop, float Delay);
};


}

