// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ApexDestruction.DestructibleComponent.SetDestructibleMesh
// ()
// Parameters:
// class UDestructibleMesh*       NewMesh                        (Parm, ZeroConstructor, IsPlainOldData)

void UDestructibleComponent::SetDestructibleMesh(class UDestructibleMesh* NewMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ApexDestruction.DestructibleComponent.SetDestructibleMesh");

	UDestructibleComponent_SetDestructibleMesh_Params params;
	params.NewMesh = NewMesh;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ApexDestruction.DestructibleComponent.GetDestructibleMesh
// ()
// Parameters:
// class UDestructibleMesh*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDestructibleMesh* UDestructibleComponent::GetDestructibleMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ApexDestruction.DestructibleComponent.GetDestructibleMesh");

	UDestructibleComponent_GetDestructibleMesh_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage
// ()
// Parameters:
// float                          BaseDamage                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HurtOrigin                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          DamageRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ImpulseStrength                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFullDamage                    (Parm, ZeroConstructor, IsPlainOldData)

void UDestructibleComponent::ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage");

	UDestructibleComponent_ApplyRadiusDamage_Params params;
	params.BaseDamage = BaseDamage;
	params.HurtOrigin = HurtOrigin;
	params.DamageRadius = DamageRadius;
	params.ImpulseStrength = ImpulseStrength;
	params.bFullDamage = bFullDamage;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ApexDestruction.DestructibleComponent.ApplyDamage
// ()
// Parameters:
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpulseDir                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ImpulseStrength                (Parm, ZeroConstructor, IsPlainOldData)

void UDestructibleComponent::ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ApexDestruction.DestructibleComponent.ApplyDamage");

	UDestructibleComponent_ApplyDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.HitLocation = HitLocation;
	params.ImpulseDir = ImpulseDir;
	params.ImpulseStrength = ImpulseStrength;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

