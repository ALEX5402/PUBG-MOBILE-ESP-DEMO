#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ImmediatePhysics.ESimulationSpace
enum class ESimulationSpace : uint8_t
{
	ESimulationSpace__ComponentSpace = 0,
	ESimulationSpace__WorldSpace   = 1,
	ESimulationSpace__RootBoneSpace = 2,
	ESimulationSpace__ESimulationSpace_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ImmediatePhysics.AnimNode_RigidBody
// 0x0260 (0x02D8 - 0x0078)
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
	class UPhysicsAsset*                               OverridePhysicsAsset;                                     // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideWorldGravity;                                     // 0x0080(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     ExternalForce;                                            // 0x008C(0x000C) (Edit, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                           // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableWorldGeometry;                                     // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x009A(0x0002) MISSED OFFSET
	ESimulationSpace                                   SimulationSpace;                                          // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x009A(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bOverrideWorldGravity;                                    // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              CachedBoundsScale;                                        // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bComponentSpaceSimulation;                                // 0x00A8(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData03[0x22F];                                     // 0x00A9(0x022F) MISSED OFFSET
};

}

