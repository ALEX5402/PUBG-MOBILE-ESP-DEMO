// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MRMesh.MeshReconstructorBase.StopReconstruction
// ()

void UMeshReconstructorBase::StopReconstruction()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.StopReconstruction");

	UMeshReconstructorBase_StopReconstruction_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MRMesh.MeshReconstructorBase.StartReconstruction
// ()

void UMeshReconstructorBase::StartReconstruction()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.StartReconstruction");

	UMeshReconstructorBase_StartReconstruction_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MRMesh.MeshReconstructorBase.PauseReconstruction
// ()

void UMeshReconstructorBase::PauseReconstruction()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.PauseReconstruction");

	UMeshReconstructorBase_PauseReconstruction_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshReconstructorBase::IsReconstructionStarted()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.IsReconstructionStarted");

	UMeshReconstructorBase_IsReconstructionStarted_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshReconstructorBase::IsReconstructionPaused()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.IsReconstructionPaused");

	UMeshReconstructorBase_IsReconstructionPaused_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
// ()

void UMeshReconstructorBase::DisconnectMRMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.DisconnectMRMesh");

	UMeshReconstructorBase_DisconnectMRMesh_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MRMesh.MeshReconstructorBase.ConnectMRMesh
// ()
// Parameters:
// class UMRMeshComponent*        Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FMRMeshConfiguration    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMRMeshConfiguration UMeshReconstructorBase::ConnectMRMesh(class UMRMeshComponent* Mesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.ConnectMRMesh");

	UMeshReconstructorBase_ConnectMRMesh_Params params;
	params.Mesh = Mesh;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MRMesh.MRMeshComponent.GetReconstructor
// ()
// Parameters:
// class UMeshReconstructorBase*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMeshReconstructorBase* UMRMeshComponent::GetReconstructor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.GetReconstructor");

	UMRMeshComponent_GetReconstructor_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MRMesh.MRMeshComponent.ConnectReconstructor
// ()
// Parameters:
// class UMeshReconstructorBase*  Reconstructor                  (Parm, ZeroConstructor, IsPlainOldData)

void UMRMeshComponent::ConnectReconstructor(class UMeshReconstructorBase* Reconstructor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.ConnectReconstructor");

	UMRMeshComponent_ConnectReconstructor_Params params;
	params.Reconstructor = Reconstructor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

