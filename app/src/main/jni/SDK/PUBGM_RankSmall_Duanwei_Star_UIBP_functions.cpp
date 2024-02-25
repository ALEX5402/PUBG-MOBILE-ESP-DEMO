// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RankSmall_Duanwei_Star_UIBP.RankSmall_Duanwei_Star_UIBP_C.SetRankIntegral
// (Event, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FBP_STRUCT_RankIntegralLevel_type RankIntegralLevel_Info         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           isStarOpen                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankSmall_Duanwei_Star_UIBP_C::SetRankIntegral(const struct FBP_STRUCT_RankIntegralLevel_type& RankIntegralLevel_Info, bool isStarOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RankSmall_Duanwei_Star_UIBP.RankSmall_Duanwei_Star_UIBP_C.SetRankIntegral");

	URankSmall_Duanwei_Star_UIBP_C_SetRankIntegral_Params params;
	params.RankIntegralLevel_Info = RankIntegralLevel_Info;
	params.isStarOpen = isStarOpen;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RankSmall_Duanwei_Star_UIBP.RankSmall_Duanwei_Star_UIBP_C.SetRankText
// (NetReliable, Event, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor             ShadowColor                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateFontInfo          FontInfo                       (BlueprintVisible, BlueprintReadOnly, Parm)

void URankSmall_Duanwei_Star_UIBP_C::SetRankText(const struct FSlateColor& Color, const struct FSlateColor& ShadowColor, const struct FSlateFontInfo& FontInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RankSmall_Duanwei_Star_UIBP.RankSmall_Duanwei_Star_UIBP_C.SetRankText");

	URankSmall_Duanwei_Star_UIBP_C_SetRankText_Params params;
	params.Color = Color;
	params.ShadowColor = ShadowColor;
	params.FontInfo = FontInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RankSmall_Duanwei_Star_UIBP.RankSmall_Duanwei_Star_UIBP_C.ExecuteUbergraph_RankSmall_Duanwei_Star_UIBP
// (NetRequest, Exec, NetResponse, Static, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankSmall_Duanwei_Star_UIBP_C::STATIC_ExecuteUbergraph_RankSmall_Duanwei_Star_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RankSmall_Duanwei_Star_UIBP.RankSmall_Duanwei_Star_UIBP_C.ExecuteUbergraph_RankSmall_Duanwei_Star_UIBP");

	URankSmall_Duanwei_Star_UIBP_C_ExecuteUbergraph_RankSmall_Duanwei_Star_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

