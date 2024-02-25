#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UIParticleSystem2.ParticleSystemWidget2.SetParticleSystem
struct UParticleSystemWidget2_SetParticleSystem_Params
{
	class UParticleSystem*                             ParticleSystem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIParticleSystem2.ParticleSystemWidget2.SetNiagaraSystem
struct UParticleSystemWidget2_SetNiagaraSystem_Params
{
	class UNiagaraSystem*                              ParticleSystem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIParticleSystem2.ParticleSystemWidget2.SetActivate
struct UParticleSystemWidget2_SetActivate_Params
{
	bool                                               bIsActivate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIParticleSystem2.ParticleSystemWidget2.GetParticleComponent
struct UParticleSystemWidget2_GetParticleComponent_Params
{
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UIParticleSystem2.ParticleSystemWidget2.GetNiagaraComponent
struct UParticleSystemWidget2_GetNiagaraComponent_Params
{
	class UNiagaraComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

