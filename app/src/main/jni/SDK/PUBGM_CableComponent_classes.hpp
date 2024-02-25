#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CableComponent.CableActor
// 0x0008 (0x03F8 - 0x03F0)
class ACableActor : public AActor
{
public:
	class UCableComponent*                             CableComponent;                                           // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CableComponent.CableActor");
		return pStaticClass;
	}

};


// Class CableComponent.CableComponent
// 0x0080 (0x0810 - 0x0790)
class UCableComponent : public UMeshComponent
{
public:
	struct FComponentReference                         AttachEndTo;                                              // 0x0790(0x0018) (Edit)
	struct FName                                       AttachEndToSocketName;                                    // 0x07A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // 0x07B0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CableLength;                                              // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSegments;                                              // 0x07C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SubstepTime;                                              // 0x07C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SolverIterations;                                         // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableStiffness;                                         // 0x07CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x07CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x07CE(0x0002) MISSED OFFSET
	float                                              CollisionFriction;                                        // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CableForce;                                               // 0x07D4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CableGravityScale;                                        // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CableWidth;                                               // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSides;                                                 // 0x07E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TileMaterial;                                             // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x07F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CableComponent.CableComponent");
		return pStaticClass;
	}


	void SetAttachEndTo(class AActor* Actor, const struct FName& ComponentProperty, const struct FName& SocketName);
	void GetCableParticleLocations(TArray<struct FVector>* Locations);
	class USceneComponent* GetAttachedComponent();
	class AActor* GetAttachedActor();
};


}

