// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.IsSegmentStarSwitchOpen
// (NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           isStarOpen                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::IsSegmentStarSwitchOpen(bool* isStarOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.IsSegmentStarSwitchOpen");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_IsSegmentStarSwitchOpen_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (isStarOpen != nullptr)
		*isStarOpen = params.isStarOpen;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetArenaRankInteralWithCustomColor
// (NetReliable, Native, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            RankInteral                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              TextIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::STATIC_SetArenaRankInteralWithCustomColor(int RankInteral, class UTextBlock* TextIntegralName, const struct FSlateColor& Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetArenaRankInteralWithCustomColor");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetArenaRankInteralWithCustomColor_Params params;
	params.RankInteral = RankInteral;
	params.TextIntegralName = TextIntegralName;
	params.Color = Color;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteralBySeason
// (Native, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              TextIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SeasonID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::STATIC_SetRankInteralBySeason(int rankIntegral, class UTextBlock* TextIntegralName, int SeasonID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteralBySeason");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetRankInteralBySeason_Params params;
	params.rankIntegral = rankIntegral;
	params.TextIntegralName = TextIntegralName;
	params.SeasonID = SeasonID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankCustomColor
// (NetReliable, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              TextIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            SeasonID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::STATIC_SetRankCustomColor(int rankIntegral, class UTextBlock* TextIntegralName, const struct FSlateColor& Color, int SeasonID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankCustomColor");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetRankCustomColor_Params params;
	params.rankIntegral = rankIntegral;
	params.TextIntegralName = TextIntegralName;
	params.Color = Color;
	params.SeasonID = SeasonID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteralJaguar
// (Net, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              TextIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::STATIC_SetRankInteralJaguar(int rankIntegral, class UTextBlock* TextIntegralName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteralJaguar");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetRankInteralJaguar_Params params;
	params.rankIntegral = rankIntegral;
	params.TextIntegralName = TextIntegralName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteral
// (Net, NetReliable, Exec, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              TextIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::STATIC_SetRankInteral(int rankIntegral, class UTextBlock* TextIntegralName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteral");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetRankInteral_Params params;
	params.rankIntegral = rankIntegral;
	params.TextIntegralName = TextIntegralName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteralInXMission
// (Net, Exec, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              TextIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::STATIC_SetRankInteralInXMission(int rankIntegral, class UTextBlock* TextIntegralName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteralInXMission");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetRankInteralInXMission_Params params;
	params.rankIntegral = rankIntegral;
	params.TextIntegralName = TextIntegralName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetArenaRankInteral
// (Net, NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              TextIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::STATIC_SetArenaRankInteral(int rankIntegral, class UTextBlock* TextIntegralName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetArenaRankInteral");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetArenaRankInteral_Params params;
	params.rankIntegral = rankIntegral;
	params.TextIntegralName = TextIntegralName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteralCommon
// (NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              TextIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SeasonID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::STATIC_SetRankInteralCommon(int rankIntegral, class UTextBlock* TextIntegralName, int SeasonID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteralCommon");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetRankInteralCommon_Params params;
	params.rankIntegral = rankIntegral;
	params.TextIntegralName = TextIntegralName;
	params.SeasonID = SeasonID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.PreConstruct
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.PreConstruct");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.Construct
// ()

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.Construct");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.ConstructItem
// ()

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::ConstructItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.ConstructItem");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_ConstructItem_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.Destruct
// ()

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::Destruct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.Destruct");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_Destruct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.ExecuteUbergraph_Common_RankIntegralLevel_Style_Small_UIBP
// (NetRequest, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::STATIC_ExecuteUbergraph_Common_RankIntegralLevel_Style_Small_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.ExecuteUbergraph_Common_RankIntegralLevel_Style_Small_UIBP");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_ExecuteUbergraph_Common_RankIntegralLevel_Style_Small_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

