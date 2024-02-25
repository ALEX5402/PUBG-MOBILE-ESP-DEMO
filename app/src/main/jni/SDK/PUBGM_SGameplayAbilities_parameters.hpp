#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirementsInTick
struct UAbilityTask_Tick_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirementsInTick_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagRequirements                    TagRequirements;                                          // (Parm)
	bool                                               IncludeTriggeredAbilities;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_Tick_WaitAbilityActivate*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate.WaitForAbilityActivateInTick_Query
struct UAbilityTask_Tick_WaitAbilityActivate_WaitForAbilityActivateInTick_Query_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagQuery                           Query;                                                    // (Parm)
	bool                                               IncludeTriggeredAbilities;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_Tick_WaitAbilityActivate*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate.WaitForAbilityActivateInTick
struct UAbilityTask_Tick_WaitAbilityActivate_WaitForAbilityActivateInTick_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                WithTag;                                                  // (Parm)
	struct FGameplayTag                                WithoutTag;                                               // (Parm)
	bool                                               IncludeTriggeredAbilities;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_Tick_WaitAbilityActivate*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SGameplayAbilities.SAbilitySystemBlueprintLibrary.RequestGameplayTag
struct USAbilitySystemBlueprintLibrary_RequestGameplayTag_Params
{
	struct FString                                     InTagName;                                                // (Parm, ZeroConstructor)
	bool                                               ErrorIfNotFound;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SGameplayAbilities.SAbilitySystemBlueprintLibrary.CreateGameplayTagContainer
struct USAbilitySystemBlueprintLibrary_CreateGameplayTagContainer_Params
{
	TArray<struct FGameplayTag>                        SourceTags;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SGameplayAbilities.SAbilitySystemComponent.TryActivateAbilitiesByTagString
struct USAbilitySystemComponent_TryActivateAbilitiesByTagString_Params
{
	struct FString                                     AbilityTag;                                               // (ConstParm, Parm, ZeroConstructor)
	bool                                               bAllowRemoteActivation;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SGameplayAbilities.SAbilitySystemComponent.ReloadAbilities
struct USAbilitySystemComponent_ReloadAbilities_Params
{
};

// Function SGameplayAbilities.SAbilitySystemComponent.GiveAbilityByClass
struct USAbilitySystemComponent_GiveAbilityByClass_Params
{
	class UClass*                                      AbilityClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SGameplayAbilities.SAbilitySystemComponent.CancelAbilitiesByTagString
struct USAbilitySystemComponent_CancelAbilitiesByTagString_Params
{
	struct FString                                     AbilityTag;                                               // (ConstParm, Parm, ZeroConstructor)
};

// Function SGameplayAbilities.SGameplayAbility.K2_OnGiveAbility
struct USGameplayAbility_K2_OnGiveAbility_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayAbilitySpec                        Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function SGameplayAbilities.SGameplayAbility.AddTargetRequiredTag
struct USGameplayAbility_AddTargetRequiredTag_Params
{
	struct FString                                     TagName;                                                  // (Parm, ZeroConstructor)
};

// Function SGameplayAbilities.SGameplayAbility.AddTargetBlockedTag
struct USGameplayAbility_AddTargetBlockedTag_Params
{
	struct FString                                     TagName;                                                  // (Parm, ZeroConstructor)
};

// Function SGameplayAbilities.SGameplayAbility.AddSourceRequiredTag
struct USGameplayAbility_AddSourceRequiredTag_Params
{
	struct FString                                     TagName;                                                  // (Parm, ZeroConstructor)
};

// Function SGameplayAbilities.SGameplayAbility.AddSourceBlockedTag
struct USGameplayAbility_AddSourceBlockedTag_Params
{
	struct FString                                     TagName;                                                  // (Parm, ZeroConstructor)
};

// Function SGameplayAbilities.SGameplayAbility.AddCancelAbilityTag
struct USGameplayAbility_AddCancelAbilityTag_Params
{
	struct FString                                     TagName;                                                  // (Parm, ZeroConstructor)
};

// Function SGameplayAbilities.SGameplayAbility.AddBlockAbilityTag
struct USGameplayAbility_AddBlockAbilityTag_Params
{
	struct FString                                     TagName;                                                  // (Parm, ZeroConstructor)
};

// Function SGameplayAbilities.SGameplayAbility.AddActivationRequiredTag
struct USGameplayAbility_AddActivationRequiredTag_Params
{
	struct FString                                     TagName;                                                  // (Parm, ZeroConstructor)
};

// Function SGameplayAbilities.SGameplayAbility.AddActivationOwnedTag
struct USGameplayAbility_AddActivationOwnedTag_Params
{
	struct FString                                     TagName;                                                  // (Parm, ZeroConstructor)
};

// Function SGameplayAbilities.SGameplayAbility.AddActivationBlockedTag
struct USGameplayAbility_AddActivationBlockedTag_Params
{
	struct FString                                     TagName;                                                  // (Parm, ZeroConstructor)
};

// Function SGameplayAbilities.SGameplayAbility.AddAbilityTag
struct USGameplayAbility_AddAbilityTag_Params
{
	struct FString                                     TagName;                                                  // (Parm, ZeroConstructor)
};

}

