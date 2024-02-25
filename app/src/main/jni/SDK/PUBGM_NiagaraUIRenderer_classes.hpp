#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NiagaraUIRenderer.NiagaraSystemWidget
// 0x0098 (0x0198 - 0x0100)
class UNiagaraSystemWidget : public UWidget
{
public:
	class UNiagaraSystem*                              NiagaraSystemReference;                                   // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<class UMaterialInterface*, class UMaterialInterface*> MaterialRemapList;                                        // 0x0108(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FVector2D                                   Offset2D;                                                 // 0x0158(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Rotation3D;                                               // 0x0160(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               AutoActivate;                                             // 0x016C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               TickWhenPaused;                                           // 0x016D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               FakeDepthScale;                                           // 0x016E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x016F(0x0001) MISSED OFFSET
	float                                              FakeDepthScaleDistance;                                   // 0x0170(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsActivated : 1;                                         // 0x0174(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x13];                                      // 0x0175(0x0013) MISSED OFFSET
	class ANiagaraUIActor*                             NiagaraActor;                                             // 0x0188(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNiagaraUIComponent*                         NiagaraComponent;                                         // 0x0190(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class NiagaraUIRenderer.NiagaraSystemWidget");
		return pStaticClass;
	}


	void SetIsActivated(bool bInIsActive);
	class UNiagaraUIComponent* GetNiagaraComponent();
	bool GetIsActivated();
	void DeactivateSystem();
	void ActivateSystem(bool Reset);
};


// Class NiagaraUIRenderer.NiagaraUIActor
// 0x0000 (0x03F0 - 0x03F0)
class ANiagaraUIActor : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class NiagaraUIRenderer.NiagaraUIActor");
		return pStaticClass;
	}

};


// Class NiagaraUIRenderer.NiagaraUIComponent
// 0x0020 (0x0950 - 0x0930)
class UNiagaraUIComponent : public UNiagaraComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0930(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class NiagaraUIRenderer.NiagaraUIComponent");
		return pStaticClass;
	}

};


}

