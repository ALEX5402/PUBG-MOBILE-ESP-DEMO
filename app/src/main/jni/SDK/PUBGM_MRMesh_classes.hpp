#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MRMesh.MeshReconstructorBase
// 0x0000 (0x0028 - 0x0028)
class UMeshReconstructorBase : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MRMesh.MeshReconstructorBase");
		return pStaticClass;
	}


	void StopReconstruction();
	void StartReconstruction();
	void PauseReconstruction();
	bool IsReconstructionStarted();
	bool IsReconstructionPaused();
	void DisconnectMRMesh();
	struct FMRMeshConfiguration ConnectMRMesh(class UMRMeshComponent* Mesh);
};


// Class MRMesh.MRMeshComponent
// 0x0050 (0x07C0 - 0x0770)
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x0770(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMeshReconstructorBase*                      MeshReconstructor;                                        // 0x0778(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x0780(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0781(0x0007) MISSED OFFSET
	TArray<class UBodySetup*>                          BodySetups;                                               // 0x0788(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0798(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MRMesh.MRMeshComponent");
		return pStaticClass;
	}


	class UMeshReconstructorBase* GetReconstructor();
	void ConnectReconstructor(class UMeshReconstructorBase* Reconstructor);
};


}

