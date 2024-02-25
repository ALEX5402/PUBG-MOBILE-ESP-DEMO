#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LightningComponent.LightningActor
// 0x0008 (0x03F8 - 0x03F0)
class ALightningActor : public AActor
{
public:
	class ULightningComponent*                         LightningComponent;                                       // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LightningComponent.LightningActor");
		return pStaticClass;
	}

};


// Class LightningComponent.LightningComponent
// 0x00C0 (0x0850 - 0x0790)
class ULightningComponent : public UMeshComponent
{
public:
	int                                                MaxFractalTime;                                           // 0x0790(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PatternMask;                                              // 0x0794(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LightningWidth;                                           // 0x0798(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WidthDecay;                                               // 0x079C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BrightnessDecay;                                          // 0x07A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShrinkWidth;                                             // 0x07A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07A5(0x0003) MISSED OFFSET
	int                                                AtlasNum;                                                 // 0x07A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SeedStart;                                                // 0x07AC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SeedEnd;                                                  // 0x07B8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ZigZagFraction;                                           // 0x07C4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ZigZagDeviationRight;                                     // 0x07CC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ZigZagDeviationUp;                                        // 0x07D4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ZigZagDeviationDecay;                                     // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ForkFraction;                                             // 0x07E0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ForkZigZagDeviationRight;                                 // 0x07E8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ForkZigZagDeviationUp;                                    // 0x07F0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ForkZigZagDeviationDecay;                                 // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ForkDeviationRight;                                       // 0x07FC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ForkDeviationUp;                                          // 0x0804(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ForkDeviationForward;                                     // 0x080C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ForkDeviationDecay;                                       // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ForkLength;                                               // 0x0818(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ForkLengthDecay;                                          // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x0824(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LightningComponent.LightningComponent");
		return pStaticClass;
	}


	void SetWidthDecay(float InDecay);
	void SetShrinkWidth(bool InBool);
	void SetPatternMask(int InPatternMask);
	void SetMaxFractalTime(int InMaxFractalTime);
	void SetLightningWidth(float InWidth);
	void SetBrightnessDecay(float InDecay);
	void SetAtlasNum(int InVal);
	void RefreshLightningMesh();
	bool IsShrinkWidth();
	float GetWidthDecay();
	int GetPatternMask();
	int GetMaxFractalTime();
	float GetLightningWidth();
	float GetBrightnessDecay();
	float GetAtlasNum();
};


}

