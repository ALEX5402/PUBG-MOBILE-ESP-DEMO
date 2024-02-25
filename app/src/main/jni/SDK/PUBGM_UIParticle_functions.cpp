// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UIParticle.UIParticle.StopEmit
// ()

void UUIParticle::StopEmit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UIParticle.UIParticle.StopEmit");

	UUIParticle_StopEmit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UIParticle.UIParticle.Stop
// ()

void UUIParticle::Stop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UIParticle.UIParticle.Stop");

	UUIParticle_Stop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UIParticle.UIParticle.SetPlayParticle
// ()
// Parameters:
// bool                           InPlayParticle                 (Parm, ZeroConstructor, IsPlainOldData)

void UUIParticle::SetPlayParticle(bool InPlayParticle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UIParticle.UIParticle.SetPlayParticle");

	UUIParticle_SetPlayParticle_Params params;
	params.InPlayParticle = InPlayParticle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UIParticle.UIParticle.Play
// ()

void UUIParticle::Play()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UIParticle.UIParticle.Play");

	UUIParticle_Play_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UIParticle.UIParticleEmitter.StopEmit
// ()

void UUIParticleEmitter::StopEmit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UIParticle.UIParticleEmitter.StopEmit");

	UUIParticleEmitter_StopEmit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UIParticle.UIParticleEmitter.Stop
// ()

void UUIParticleEmitter::Stop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UIParticle.UIParticleEmitter.Stop");

	UUIParticleEmitter_Stop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UIParticle.UIParticleEmitter.SetPlayParticle
// ()
// Parameters:
// bool                           InPlayParticle                 (Parm, ZeroConstructor, IsPlainOldData)

void UUIParticleEmitter::SetPlayParticle(bool InPlayParticle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UIParticle.UIParticleEmitter.SetPlayParticle");

	UUIParticleEmitter_SetPlayParticle_Params params;
	params.InPlayParticle = InPlayParticle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UIParticle.UIParticleEmitter.Play
// ()

void UUIParticleEmitter::Play()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UIParticle.UIParticleEmitter.Play");

	UUIParticleEmitter_Play_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

