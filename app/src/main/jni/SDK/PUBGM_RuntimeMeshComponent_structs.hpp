#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum RuntimeMeshComponent.EUpdateFrequency
enum class EUpdateFrequency : uint8_t
{
	EUpdateFrequency__Average      = 0,
	EUpdateFrequency__Frequent     = 1,
	EUpdateFrequency__Infrequent   = 2,
	EUpdateFrequency__EUpdateFrequency_MAX = 3
};


// Enum RuntimeMeshComponent.ERuntimeMeshCollisionCookingMode
enum class ERuntimeMeshCollisionCookingMode : uint8_t
{
	ERuntimeMeshCollisionCookingMode__CollisionPerformance = 0,
	ERuntimeMeshCollisionCookingMode__CookingPerformance = 1,
	ERuntimeMeshCollisionCookingMode__ERuntimeMeshCollisionCookingMode_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RuntimeMeshComponent.RuntimeMeshCollisionSection
// 0x0020
struct FRuntimeMeshCollisionSection
{
	TArray<struct FVector>                             VertexBuffer;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        IndexBuffer;                                              // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct RuntimeMeshComponent.RuntimeConvexCollisionSection
// 0x0030
struct FRuntimeConvexCollisionSection
{
	TArray<struct FVector>                             VertexBuffer;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FBox                                        BoundingBox;                                              // 0x0010(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct RuntimeMeshComponent.RuntimeMeshComponentPrePhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FRuntimeMeshComponentPrePhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct RuntimeMeshComponent.RuntimeMeshTangent
// 0x0010
struct FRuntimeMeshTangent
{
	struct FVector                                     TangentX;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bFlipTangentY;                                            // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct RuntimeMeshComponent.RunTimeMeshFrustumCullNode
// 0x0038
struct FRunTimeMeshFrustumCullNode
{
	struct FBox                                        Bounds;                                                   // 0x0000(0x001C) (Edit, IsPlainOldData)
	uint16_t                                           StartIndex;                                               // 0x001C(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           IndexCount;                                               // 0x001E(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     LandScapeName;                                            // 0x0020(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

}

