#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CinematicCamera.CameraRig_Crane
// 0x0030 (0x0420 - 0x03F0)
class ACameraRig_Crane : public AActor
{
public:
	float                                              CraneYaw;                                                 // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CraneArmLength;                                           // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMountPitch;                                          // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMountYaw;                                            // 0x03F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03FA(0x0006) MISSED OFFSET
	class USceneComponent*                             TransformComponent;                                       // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CraneYawControl;                                          // 0x0408(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CranePitchControl;                                        // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CraneCameraMount;                                         // 0x0418(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CinematicCamera.CameraRig_Crane");
		return pStaticClass;
	}

};


// Class CinematicCamera.CameraRig_Rail
// 0x0018 (0x0408 - 0x03F0)
class ACameraRig_Rail : public AActor
{
public:
	class USceneComponent*                             TransformComponent;                                       // 0x03F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USplineComponent*                            RailSplineComponent;                                      // 0x03F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RailCameraMount;                                          // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CinematicCamera.CameraRig_Rail");
		return pStaticClass;
	}

};


// Class CinematicCamera.CineCameraActor
// 0x0040 (0x09B0 - 0x0970)
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings               LookatTrackingSettings;                                   // 0x0970(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x09A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CinematicCamera.CineCameraActor");
		return pStaticClass;
	}


	class UCineCameraComponent* GetCineCameraComponent();
};


// Class CinematicCamera.CineCameraComponent
// 0x00B0 (0x0970 - 0x08C0)
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraLensSettings                         LensSettings;                                             // 0x08C0(0x0014) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08D4(0x0004) MISSED OFFSET
	struct FCameraFocusSettings                        FocusSettings;                                            // 0x08D8(0x0038) (Edit, BlueprintVisible)
	float                                              CurrentFocalLength;                                       // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentAperture;                                          // 0x0914(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentFocusDistance;                                     // 0x0918(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x091C(0x000C) MISSED OFFSET
	TArray<struct FNamedFilmbackPreset>                FilmbackPresets;                                          // 0x0928(0x0010) (ZeroConstructor, Config)
	TArray<struct FNamedLensPreset>                    LensPresets;                                              // 0x0938(0x0010) (ZeroConstructor, Config)
	struct FString                                     DefaultFilmbackPresetName;                                // 0x0948(0x0010) (ZeroConstructor, Config)
	struct FString                                     DefaultLensPresetName;                                    // 0x0958(0x0010) (ZeroConstructor, Config)
	float                                              DefaultLensFocalLength;                                   // 0x0968(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultLensFStop;                                         // 0x096C(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CinematicCamera.CineCameraComponent");
		return pStaticClass;
	}


	void SetLensPresetByName(const struct FString& InPresetName);
	void SetFilmbackPresetByName(const struct FString& InPresetName);
	float GetVerticalFieldOfView();
	struct FString GetLensPresetName();
	float GetHorizontalFieldOfView();
	struct FString GetFilmbackPresetName();
};


}

