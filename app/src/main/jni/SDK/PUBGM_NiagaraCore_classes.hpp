#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NiagaraCore.NiagaraMergeable
// 0x0000 (0x0028 - 0x0028)
class UNiagaraMergeable : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class NiagaraCore.NiagaraMergeable");
		return pStaticClass;
	}

};


// Class NiagaraCore.NiagaraDataInterfaceBase
// 0x0000 (0x0028 - 0x0028)
class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class NiagaraCore.NiagaraDataInterfaceBase");
		return pStaticClass;
	}

};


}

