#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// 0x0020 (0x0E80 - 0x0E60)
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0E60(0x0018) MISSED OFFSET
	unsigned char                                      bAutoRegisterWithBudgetAllocator : 1;                     // 0x0E78(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAutoCalculateSignificance : 1;                           // 0x0E78(0x0001) (Edit)
	unsigned char                                      bShouldUseActorRenderedFlag : 1;                          // 0x0E78(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0E79(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted");
		return pStaticClass;
	}


	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
};


// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary");
		return pStaticClass;
	}


	void SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters);
	void EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);
};


}

