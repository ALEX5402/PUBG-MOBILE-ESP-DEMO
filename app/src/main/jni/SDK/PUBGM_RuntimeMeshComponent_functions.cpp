// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RuntimeMeshComponent.RuntimeMeshComponent.UpdateMeshSection_Blueprint
// ()
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FRuntimeMeshTangent> Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV1                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FLinearColor>    Colors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bCalculateNormalTangent        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bGenerateTessellationTriangles (Parm, ZeroConstructor, IsPlainOldData)

void URuntimeMeshComponent::UpdateMeshSection_Blueprint(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FRuntimeMeshTangent> Tangents, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FLinearColor> Colors, bool bCalculateNormalTangent, bool bGenerateTessellationTriangles)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.UpdateMeshSection_Blueprint");

	URuntimeMeshComponent_UpdateMeshSection_Blueprint_Params params;
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.Tangents = Tangents;
	params.UV0 = UV0;
	params.UV1 = UV1;
	params.Colors = Colors;
	params.bCalculateNormalTangent = bCalculateNormalTangent;
	params.bGenerateTessellationTriangles = bGenerateTessellationTriangles;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.SetSectionTessellationTriangles
// ()
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    TessellationTriangles          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bShouldMoveArray               (Parm, ZeroConstructor, IsPlainOldData)

void URuntimeMeshComponent::SetSectionTessellationTriangles(int SectionIndex, TArray<int> TessellationTriangles, bool bShouldMoveArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.SetSectionTessellationTriangles");

	URuntimeMeshComponent_SetSectionTessellationTriangles_Params params;
	params.SectionIndex = SectionIndex;
	params.TessellationTriangles = TessellationTriangles;
	params.bShouldMoveArray = bShouldMoveArray;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.SetMeshSectionVisible
// ()
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNewVisibility                 (Parm, ZeroConstructor, IsPlainOldData)

void URuntimeMeshComponent::SetMeshSectionVisible(int SectionIndex, bool bNewVisibility)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.SetMeshSectionVisible");

	URuntimeMeshComponent_SetMeshSectionVisible_Params params;
	params.SectionIndex = SectionIndex;
	params.bNewVisibility = bNewVisibility;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.SetMeshSectionCollisionEnabled
// ()
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNewCollisionEnabled           (Parm, ZeroConstructor, IsPlainOldData)

void URuntimeMeshComponent::SetMeshSectionCollisionEnabled(int SectionIndex, bool bNewCollisionEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.SetMeshSectionCollisionEnabled");

	URuntimeMeshComponent_SetMeshSectionCollisionEnabled_Params params;
	params.SectionIndex = SectionIndex;
	params.bNewCollisionEnabled = bNewCollisionEnabled;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.SetMeshSectionCastsShadow
// ()
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNewCastsShadow                (Parm, ZeroConstructor, IsPlainOldData)

void URuntimeMeshComponent::SetMeshSectionCastsShadow(int SectionIndex, bool bNewCastsShadow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.SetMeshSectionCastsShadow");

	URuntimeMeshComponent_SetMeshSectionCastsShadow_Params params;
	params.SectionIndex = SectionIndex;
	params.bNewCastsShadow = bNewCastsShadow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.SetMeshCollisionSection
// ()
// Parameters:
// int                            CollisionSectionIndex          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void URuntimeMeshComponent::SetMeshCollisionSection(int CollisionSectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.SetMeshCollisionSection");

	URuntimeMeshComponent_SetMeshCollisionSection_Params params;
	params.CollisionSectionIndex = CollisionSectionIndex;
	params.Vertices = Vertices;
	params.Triangles = Triangles;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction RuntimeMeshComponent.RuntimeMeshComponent.RuntimeMeshCollisionUpdatedDelegate__DelegateSignature
// ()

void URuntimeMeshComponent::RuntimeMeshCollisionUpdatedDelegate__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction RuntimeMeshComponent.RuntimeMeshComponent.RuntimeMeshCollisionUpdatedDelegate__DelegateSignature");

	URuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.IsMeshSectionVisible
// ()
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URuntimeMeshComponent::IsMeshSectionVisible(int SectionIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.IsMeshSectionVisible");

	URuntimeMeshComponent_IsMeshSectionVisible_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.IsMeshSectionCollisionEnabled
// ()
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URuntimeMeshComponent::IsMeshSectionCollisionEnabled(int SectionIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.IsMeshSectionCollisionEnabled");

	URuntimeMeshComponent_IsMeshSectionCollisionEnabled_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.IsMeshSectionCastingShadows
// ()
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URuntimeMeshComponent::IsMeshSectionCastingShadows(int SectionIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.IsMeshSectionCastingShadows");

	URuntimeMeshComponent_IsMeshSectionCastingShadows_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.GetNumSections
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URuntimeMeshComponent::GetNumSections()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.GetNumSections");

	URuntimeMeshComponent_GetNumSections_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.GetLastSectionIndex
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URuntimeMeshComponent::GetLastSectionIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.GetLastSectionIndex");

	URuntimeMeshComponent_GetLastSectionIndex_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.FirstAvailableMeshSectionIndex
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URuntimeMeshComponent::FirstAvailableMeshSectionIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.FirstAvailableMeshSectionIndex");

	URuntimeMeshComponent_FirstAvailableMeshSectionIndex_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.EndBatchUpdates
// ()

void URuntimeMeshComponent::EndBatchUpdates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.EndBatchUpdates");

	URuntimeMeshComponent_EndBatchUpdates_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.DoesSectionExist
// ()
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URuntimeMeshComponent::DoesSectionExist(int SectionIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.DoesSectionExist");

	URuntimeMeshComponent_DoesSectionExist_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.CreateMeshSection_Blueprint
// ()
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FRuntimeMeshTangent> Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV1                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FLinearColor>    Colors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bCreateCollision               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCalculateNormalTangent        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bGenerateTessellationTriangles (Parm, ZeroConstructor, IsPlainOldData)
// EUpdateFrequency               UpdateFrequency                (Parm, ZeroConstructor, IsPlainOldData)

void URuntimeMeshComponent::CreateMeshSection_Blueprint(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FRuntimeMeshTangent> Tangents, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FLinearColor> Colors, bool bCreateCollision, bool bCalculateNormalTangent, bool bGenerateTessellationTriangles, EUpdateFrequency UpdateFrequency)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.CreateMeshSection_Blueprint");

	URuntimeMeshComponent_CreateMeshSection_Blueprint_Params params;
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.Tangents = Tangents;
	params.UV0 = UV0;
	params.UV1 = UV1;
	params.Colors = Colors;
	params.bCreateCollision = bCreateCollision;
	params.bCalculateNormalTangent = bCalculateNormalTangent;
	params.bGenerateTessellationTriangles = bGenerateTessellationTriangles;
	params.UpdateFrequency = UpdateFrequency;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.CookCollisionNow
// ()

void URuntimeMeshComponent::CookCollisionNow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.CookCollisionNow");

	URuntimeMeshComponent_CookCollisionNow_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.ClearMeshSection
// ()
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void URuntimeMeshComponent::ClearMeshSection(int SectionIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.ClearMeshSection");

	URuntimeMeshComponent_ClearMeshSection_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.ClearMeshCollisionSection
// ()
// Parameters:
// int                            CollisionSectionIndex          (Parm, ZeroConstructor, IsPlainOldData)

void URuntimeMeshComponent::ClearMeshCollisionSection(int CollisionSectionIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.ClearMeshCollisionSection");

	URuntimeMeshComponent_ClearMeshCollisionSection_Params params;
	params.CollisionSectionIndex = CollisionSectionIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.ClearCollisionConvexMeshes
// ()

void URuntimeMeshComponent::ClearCollisionConvexMeshes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.ClearCollisionConvexMeshes");

	URuntimeMeshComponent_ClearCollisionConvexMeshes_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.ClearAllMeshSections
// ()

void URuntimeMeshComponent::ClearAllMeshSections()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.ClearAllMeshSections");

	URuntimeMeshComponent_ClearAllMeshSections_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.ClearAllMeshCollisionSections
// ()

void URuntimeMeshComponent::ClearAllMeshCollisionSections()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.ClearAllMeshCollisionSections");

	URuntimeMeshComponent_ClearAllMeshCollisionSections_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.BeginBatchUpdates
// ()

void URuntimeMeshComponent::BeginBatchUpdates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.BeginBatchUpdates");

	URuntimeMeshComponent_BeginBatchUpdates_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RuntimeMeshComponent.RuntimeMeshComponent.AddCollisionConvexMesh
// ()
// Parameters:
// TArray<struct FVector>         ConvexVerts                    (Parm, ZeroConstructor)

void URuntimeMeshComponent::AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.AddCollisionConvexMesh");

	URuntimeMeshComponent_AddCollisionConvexMesh_Params params;
	params.ConvexVerts = ConvexVerts;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RuntimeMeshComponent.RuntimeMeshLibrary.GetSectionFromStaticMesh
// ()
// Parameters:
// class UStaticMesh*             InMesh                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            LODIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       UVs                            (Parm, OutParm, ZeroConstructor)
// TArray<struct FRuntimeMeshTangent> Tangents                       (Parm, OutParm, ZeroConstructor)

void URuntimeMeshLibrary::GetSectionFromStaticMesh(class UStaticMesh* InMesh, int LODIndex, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FRuntimeMeshTangent>* Tangents)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshLibrary.GetSectionFromStaticMesh");

	URuntimeMeshLibrary_GetSectionFromStaticMesh_Params params;
	params.InMesh = InMesh;
	params.LODIndex = LODIndex;
	params.SectionIndex = SectionIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
}


// Function RuntimeMeshComponent.RuntimeMeshLibrary.GenerateTessellationIndexBuffer
// ()
// Parameters:
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UVs                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FRuntimeMeshTangent> Tangents                       (Parm, OutParm, ZeroConstructor)
// TArray<int>                    OutTessTriangles               (Parm, OutParm, ZeroConstructor)

void URuntimeMeshLibrary::GenerateTessellationIndexBuffer(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FRuntimeMeshTangent>* Tangents, TArray<int>* OutTessTriangles)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshLibrary.GenerateTessellationIndexBuffer");

	URuntimeMeshLibrary_GenerateTessellationIndexBuffer_Params params;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.UVs = UVs;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Normals != nullptr)
		*Normals = params.Normals;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
	if (OutTessTriangles != nullptr)
		*OutTessTriangles = params.OutTessTriangles;
}


// Function RuntimeMeshComponent.RuntimeMeshLibrary.CreateGridMeshTriangles
// ()
// Parameters:
// int                            NumX                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumY                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWinding                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor)

void URuntimeMeshLibrary::CreateGridMeshTriangles(int NumX, int NumY, bool bWinding, TArray<int>* Triangles)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshLibrary.CreateGridMeshTriangles");

	URuntimeMeshLibrary_CreateGridMeshTriangles_Params params;
	params.NumX = NumX;
	params.NumY = NumY;
	params.bWinding = bWinding;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Triangles != nullptr)
		*Triangles = params.Triangles;
}


// Function RuntimeMeshComponent.RuntimeMeshLibrary.CreateBoxMesh
// ()
// Parameters:
// struct FVector                 BoxRadius                      (Parm, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       UVs                            (Parm, OutParm, ZeroConstructor)
// TArray<struct FRuntimeMeshTangent> Tangents                       (Parm, OutParm, ZeroConstructor)

void URuntimeMeshLibrary::CreateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FRuntimeMeshTangent>* Tangents)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshLibrary.CreateBoxMesh");

	URuntimeMeshLibrary_CreateBoxMesh_Params params;
	params.BoxRadius = BoxRadius;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
}


// Function RuntimeMeshComponent.RuntimeMeshLibrary.CopyRuntimeMeshFromStaticMeshComponent
// ()
// Parameters:
// class UStaticMeshComponent*    StaticMeshComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            LODIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// class URuntimeMeshComponent*   RuntimeMeshComp                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bShouldCreateCollision         (Parm, ZeroConstructor, IsPlainOldData)

void URuntimeMeshLibrary::CopyRuntimeMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComp, int LODIndex, class URuntimeMeshComponent* RuntimeMeshComp, bool bShouldCreateCollision)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshLibrary.CopyRuntimeMeshFromStaticMeshComponent");

	URuntimeMeshLibrary_CopyRuntimeMeshFromStaticMeshComponent_Params params;
	params.StaticMeshComp = StaticMeshComp;
	params.LODIndex = LODIndex;
	params.RuntimeMeshComp = RuntimeMeshComp;
	params.bShouldCreateCollision = bShouldCreateCollision;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RuntimeMeshComponent.RuntimeMeshLibrary.ConvertQuadToTriangles
// ()
// Parameters:
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Vert0                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Vert1                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Vert2                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Vert3                          (Parm, ZeroConstructor, IsPlainOldData)

void URuntimeMeshLibrary::ConvertQuadToTriangles(int Vert0, int Vert1, int Vert2, int Vert3, TArray<int>* Triangles)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshLibrary.ConvertQuadToTriangles");

	URuntimeMeshLibrary_ConvertQuadToTriangles_Params params;
	params.Vert0 = Vert0;
	params.Vert1 = Vert1;
	params.Vert2 = Vert2;
	params.Vert3 = Vert3;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Triangles != nullptr)
		*Triangles = params.Triangles;
}


// Function RuntimeMeshComponent.RuntimeMeshLibrary.CalculateTangentsForMesh
// ()
// Parameters:
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UVs                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FRuntimeMeshTangent> Tangents                       (Parm, OutParm, ZeroConstructor)

void URuntimeMeshLibrary::CalculateTangentsForMesh(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FRuntimeMeshTangent>* Tangents)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshLibrary.CalculateTangentsForMesh");

	URuntimeMeshLibrary_CalculateTangentsForMesh_Params params;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.UVs = UVs;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Normals != nullptr)
		*Normals = params.Normals;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
}


}

