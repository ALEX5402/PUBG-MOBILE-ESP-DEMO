#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Foliage.FoliageInstancedStaticMeshComponent
// 0x0020 (0x0B60 - 0x0B40)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B40(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInstanceTakeRadialDamage;                               // 0x0B48(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0B58(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.FoliageInstancedStaticMeshComponent");
		return pStaticClass;
	}

};


// Class Foliage.FoliageStatistics
// 0x0000 (0x0028 - 0x0028)
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.FoliageStatistics");
		return pStaticClass;
	}


	int FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);
	int FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box);
};


// Class Foliage.FoliageType
// 0x0358 (0x0380 - 0x0028)
class UFoliageType : public UObject
{
public:
	struct FGuid                                       UpdateGuid;                                               // 0x0028(0x0010) (IsPlainOldData)
	float                                              Density;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DensityAdjustmentFactor;                                  // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EFoliageScaling                                    Scaling;                                                  // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	struct FFloatInterval                              ScaleX;                                                   // 0x0048(0x0008) (Edit)
	struct FFloatInterval                              ScaleY;                                                   // 0x0050(0x0008) (Edit)
	struct FFloatInterval                              ScaleZ;                                                   // 0x0058(0x0008) (Edit)
	struct FFoliageVertexColorChannelMask              VertexColorMaskByChannel[0x4];                            // 0x0060(0x000C) (Edit)
	TEnumAsByte<EFoliageVertexColorMask>               VertexColorMask;                                          // 0x0090(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              VertexColorMaskThreshold;                                 // 0x0094(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      VertexColorMaskInvert : 1;                                // 0x0098(0x0001) (Deprecated)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	struct FFloatInterval                              ZOffset;                                                  // 0x009C(0x0008) (Edit)
	unsigned char                                      AlignToNormal : 1;                                        // 0x00A4(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	float                                              AlignMaxAngle;                                            // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RandomYaw : 1;                                            // 0x00AC(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	float                                              RandomPitchAngle;                                         // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              GroundSlopeAngle;                                         // 0x00B4(0x0008) (Edit)
	struct FFloatInterval                              Height;                                                   // 0x00BC(0x0008) (Edit)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	TArray<struct FName>                               LandscapeLayers;                                          // 0x00C8(0x0010) (Edit, ZeroConstructor)
	struct FName                                       LandscapeLayer;                                           // 0x00D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      CollisionWithWorld : 1;                                   // 0x00E0(0x0001) (Edit)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	struct FVector                                     CollisionScale;                                           // 0x00E4(0x000C) (Edit, IsPlainOldData)
	float                                              MinimumLayerWeight;                                       // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoxSphereBounds                            MeshBounds;                                               // 0x00F4(0x001C) (IsPlainOldData)
	struct FVector                                     LowBoundOriginRadius;                                     // 0x0110(0x000C) (IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    Mobility;                                                 // 0x011C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	struct FInt32Interval                              CullDistance;                                             // 0x0120(0x0008) (Edit)
	unsigned char                                      bEnableStaticLighting : 1;                                // 0x0128(0x0001) (Deprecated)
	unsigned char                                      CastShadow : 1;                                           // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAffectDynamicIndirectLighting : 1;                       // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAffectDistanceFieldLighting : 1;                         // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCastDynamicShadow : 1;                                   // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bReceivesDecals : 1;                                      // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOverrideLightMapRes : 1;                                 // 0x0129(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData08[0x2];                                       // 0x012A(0x0002) MISSED OFFSET
	int                                                OverriddenLightMapRes;                                    // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ELightmapType                                      LightmapType;                                             // 0x0130(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseAsOccluder : 1;                                       // 0x0131(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData09[0x6];                                       // 0x0132(0x0006) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x0138(0x0180) (Edit)
	TEnumAsByte<EHasCustomNavigableGeometry>           CustomNavigableGeometry;                                  // 0x02B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLightingChannels                           LightingChannels;                                         // 0x02B9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x02BA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData10[0x1];                                       // 0x02BB(0x0001) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x02BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x02C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShadeRadius;                                              // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSteps;                                                 // 0x02C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialSeedDensity;                                       // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AverageSpreadDistance;                                    // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpreadVariance;                                           // 0x02D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SeedsPerStep;                                             // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DistributionSeed;                                         // 0x02DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInitialSeedOffset;                                     // 0x02E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanGrowInShade;                                          // 0x02E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnsInShade;                                           // 0x02E5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x02E6(0x0002) MISSED OFFSET
	float                                              MaxInitialAge;                                            // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAge;                                                   // 0x02EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverlapPriority;                                          // 0x02F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ProceduralScale;                                          // 0x02F4(0x0008) (Edit)
	unsigned char                                      UnknownData12[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          ScaleCurve;                                               // 0x0300(0x0078) (Edit)
	int                                                ChangeCount;                                              // 0x0378(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReapplyDensity : 1;                                       // 0x037C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyRadius : 1;                                        // 0x037C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyAlignToNormal : 1;                                 // 0x037C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyRandomYaw : 1;                                     // 0x037C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaling : 1;                                       // 0x037C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaleX : 1;                                        // 0x037C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaleY : 1;                                        // 0x037C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaleZ : 1;                                        // 0x037C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyRandomPitchAngle : 1;                              // 0x037D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyGroundSlope : 1;                                   // 0x037D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyHeight : 1;                                        // 0x037D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyLandscapeLayers : 1;                               // 0x037D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyZOffset : 1;                                       // 0x037D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyCollisionWithWorld : 1;                            // 0x037D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyVertexColorMask : 1;                               // 0x037D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bEnableDensityScaling : 1;                                // 0x037D(0x0001) (Edit)
	unsigned char                                      UnknownData13[0x2];                                       // 0x037E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.FoliageType");
		return pStaticClass;
	}

};


// Class Foliage.FoliageType_Actor
// 0x0010 (0x0390 - 0x0380)
class UFoliageType_Actor : public UFoliageType
{
public:
	class UClass*                                      ActorClass;                                               // 0x0380(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldAttachToBaseComponent;                             // 0x0388(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.FoliageType_Actor");
		return pStaticClass;
	}

};


// Class Foliage.FoliageType_InstancedStaticMesh
// 0x0020 (0x03A0 - 0x0380)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	class UStaticMesh*                                 Mesh;                                                     // 0x0380(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x0388(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      ComponentClass;                                           // 0x0398(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.FoliageType_InstancedStaticMesh");
		return pStaticClass;
	}

};


// Class Foliage.InstancedFoliageActor
// 0x0050 (0x0440 - 0x03F0)
class AInstancedFoliageActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03F0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.InstancedFoliageActor");
		return pStaticClass;
	}

};


// Class Foliage.InteractiveFoliageActor
// 0x0060 (0x0460 - 0x0400)
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0400(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     TouchingActorEntryPosition;                               // 0x0408(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     FoliageVelocity;                                          // 0x0414(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     FoliageForce;                                             // 0x0420(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     FoliagePosition;                                          // 0x042C(0x000C) (Transient, IsPlainOldData)
	float                                              FoliageDamageImpulseScale;                                // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageTouchImpulseScale;                                 // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageStiffness;                                         // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageStiffnessQuadratic;                                // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageDamping;                                           // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDamageImpulse;                                         // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTouchImpulse;                                          // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxForce;                                                 // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0458(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x045C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.InteractiveFoliageActor");
		return pStaticClass;
	}


	void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};


// Class Foliage.InteractiveFoliageComponent
// 0x0000 (0x0900 - 0x0900)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.InteractiveFoliageComponent");
		return pStaticClass;
	}

};


// Class Foliage.ProceduralFoliageBlockingVolume
// 0x0008 (0x0430 - 0x0428)
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	class AProceduralFoliageVolume*                    ProceduralFoliageVolume;                                  // 0x0428(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.ProceduralFoliageBlockingVolume");
		return pStaticClass;
	}

};


// Class Foliage.ProceduralFoliageComponent
// 0x0028 (0x0138 - 0x0110)
class UProceduralFoliageComponent : public UActorComponent
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TileOverlap;                                              // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	class AVolume*                                     SpawningVolume;                                           // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ProceduralGuid;                                           // 0x0128(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.ProceduralFoliageComponent");
		return pStaticClass;
	}

};


// Class Foliage.ProceduralFoliageSpawner
// 0x0048 (0x0070 - 0x0028)
class UProceduralFoliageSpawner : public UObject
{
public:
	int                                                RandomSeed;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TileSize;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumUniqueTiles;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumQuadTreeSize;                                      // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	TArray<struct FFoliageTypeObject>                  FoliageTypes;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	bool                                               bNeedsSimulation;                                         // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0051(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.ProceduralFoliageSpawner");
		return pStaticClass;
	}


	void Simulate(int NumSteps);
};


// Class Foliage.ProceduralFoliageTile
// 0x0130 (0x0158 - 0x0028)
class UProceduralFoliageTile : public UObject
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0030(0x00A0) MISSED OFFSET
	TArray<struct FProceduralFoliageInstance>          InstancesArray;                                           // 0x00D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x78];                                      // 0x00E0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.ProceduralFoliageTile");
		return pStaticClass;
	}

};


// Class Foliage.ProceduralFoliageVolume
// 0x0008 (0x0430 - 0x0428)
class AProceduralFoliageVolume : public AVolume
{
public:
	class UProceduralFoliageComponent*                 ProceduralComponent;                                      // 0x0428(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.ProceduralFoliageVolume");
		return pStaticClass;
	}

};


}

