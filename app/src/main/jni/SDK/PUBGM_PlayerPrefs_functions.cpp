// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerPrefs.PlayerPrefs_C.SetPopupPolicyVersion
// (Net, NetRequest, Exec, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            PolicyVersion                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetPopupPolicyVersion(int PolicyVersion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetPopupPolicyVersion");

	UPlayerPrefs_C_SetPopupPolicyVersion_Params params;
	params.PolicyVersion = PolicyVersion;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetGuaranteeFlag
// (NetReliable, Event, Static, NetMulticast, MulticastDelegate, Public, HasDefaults, DLLImport, BlueprintPure, Const)
// Parameters:
// bool                           clicked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_SetGuaranteeFlag(bool clicked)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetGuaranteeFlag");

	UPlayerPrefs_C_SetGuaranteeFlag_Params params;
	params.clicked = clicked;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.GetGuaranteeClickFlag
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Public, HasDefaults, DLLImport, BlueprintPure, Const)
// Parameters:
// bool                           clicked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_GetGuaranteeClickFlag(bool* clicked)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetGuaranteeClickFlag");

	UPlayerPrefs_C_GetGuaranteeClickFlag_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (clicked != nullptr)
		*clicked = params.clicked;
}


// Function PlayerPrefs.PlayerPrefs_C.GetDecomposeIndexTriggerTime
// (NetRequest, Exec, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            DecomposeTriggerTim            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::GetDecomposeIndexTriggerTime(int* DecomposeTriggerTim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetDecomposeIndexTriggerTime");

	UPlayerPrefs_C_GetDecomposeIndexTriggerTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DecomposeTriggerTim != nullptr)
		*DecomposeTriggerTim = params.DecomposeTriggerTim;
}


// Function PlayerPrefs.PlayerPrefs_C.SetDecomposeIndexTriggerTime
// (Net, NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            TimeStamp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetDecomposeIndexTriggerTime(int TimeStamp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetDecomposeIndexTriggerTime");

	UPlayerPrefs_C_SetDecomposeIndexTriggerTime_Params params;
	params.TimeStamp = TimeStamp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetClickTimeAnniversary
// (Exec, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetClickTimeAnniversary(const struct FString& UId, int Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetClickTimeAnniversary");

	UPlayerPrefs_C_SetClickTimeAnniversary_Params params;
	params.UId = UId;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.GetClickTimeAnniversary
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::GetClickTimeAnniversary(const struct FString& UId, int* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetClickTimeAnniversary");

	UPlayerPrefs_C_GetClickTimeAnniversary_Params params;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function PlayerPrefs.PlayerPrefs_C.GetCliickVehicleAcitivtyGuideExchange
// (Net, NetRequest, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           hasClick                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::GetCliickVehicleAcitivtyGuideExchange(const struct FString& Key, bool* hasClick)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetCliickVehicleAcitivtyGuideExchange");

	UPlayerPrefs_C_GetCliickVehicleAcitivtyGuideExchange_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (hasClick != nullptr)
		*hasClick = params.hasClick;
}


// Function PlayerPrefs.PlayerPrefs_C.SetCliickVehicleAcitivtyGuideExchange
// (Net, NetReliable, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           isClick                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetCliickVehicleAcitivtyGuideExchange(const struct FString& Key, bool isClick)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetCliickVehicleAcitivtyGuideExchange");

	UPlayerPrefs_C_SetCliickVehicleAcitivtyGuideExchange_Params params;
	params.Key = Key;
	params.isClick = isClick;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetClickTimeIceLucky
// (Net, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UUID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::SetClickTimeIceLucky(int Time, const struct FString& UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetClickTimeIceLucky");

	UPlayerPrefs_C_SetClickTimeIceLucky_Params params;
	params.Time = Time;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.GetClickTimeIceLucky
// (NetRequest, Exec, Native, Event, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// struct FString                 UUID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::GetClickTimeIceLucky(const struct FString& UUID, int* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetClickTimeIceLucky");

	UPlayerPrefs_C_GetClickTimeIceLucky_Params params;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function PlayerPrefs.PlayerPrefs_C.SetIsVNGAdult
// (NetReliable, NetRequest, Event, Public, Protected, NetClient, DLLImport, BlueprintPure, Const)

void UPlayerPrefs_C::SetIsVNGAdult()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetIsVNGAdult");

	UPlayerPrefs_C_SetIsVNGAdult_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetHasClickHalloweenExchange
// (NetReliable, NetRequest, Exec, NetResponse, Public, Protected, NetClient, DLLImport, BlueprintPure, Const)
// Parameters:
// bool                           isClick                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UUID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::SetHasClickHalloweenExchange(bool isClick, const struct FString& UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetHasClickHalloweenExchange");

	UPlayerPrefs_C_SetHasClickHalloweenExchange_Params params;
	params.isClick = isClick;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.GetHasClickHalloweenExchange
// (Net, NetRequest, Native, Event, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// struct FString                 UUID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           hasClick                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::GetHasClickHalloweenExchange(const struct FString& UUID, bool* hasClick)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetHasClickHalloweenExchange");

	UPlayerPrefs_C_GetHasClickHalloweenExchange_Params params;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (hasClick != nullptr)
		*hasClick = params.hasClick;
}


// Function PlayerPrefs.PlayerPrefs_C.SetClickTimeHalloweenVehicle
// (Net, Native, Event, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UUID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::STATIC_SetClickTimeHalloweenVehicle(int Time, const struct FString& UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetClickTimeHalloweenVehicle");

	UPlayerPrefs_C_SetClickTimeHalloweenVehicle_Params params;
	params.Time = Time;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.GetClickTimeHalloweenVehicle
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// struct FString                 UUID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_GetClickTimeHalloweenVehicle(const struct FString& UUID, int* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetClickTimeHalloweenVehicle");

	UPlayerPrefs_C_GetClickTimeHalloweenVehicle_Params params;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function PlayerPrefs.PlayerPrefs_C.GetFaceInfoClickedIDAndTime
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// struct FString                 faceid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 TimeStamp                      (Parm, OutParm, ZeroConstructor)

void UPlayerPrefs_C::STATIC_GetFaceInfoClickedIDAndTime(const struct FString& faceid, struct FString* TimeStamp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetFaceInfoClickedIDAndTime");

	UPlayerPrefs_C_GetFaceInfoClickedIDAndTime_Params params;
	params.faceid = faceid;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TimeStamp != nullptr)
		*TimeStamp = params.TimeStamp;
}


// Function PlayerPrefs.PlayerPrefs_C.SetFaceInfoClickedIDAndTime
// (Net, NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// struct FString                 faceid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::STATIC_SetFaceInfoClickedIDAndTime(const struct FString& faceid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetFaceInfoClickedIDAndTime");

	UPlayerPrefs_C_SetFaceInfoClickedIDAndTime_Params params;
	params.faceid = faceid;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.GetCursorFaceInfoID
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            CursorFaceInfoID               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_GetCursorFaceInfoID(int* CursorFaceInfoID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetCursorFaceInfoID");

	UPlayerPrefs_C_GetCursorFaceInfoID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CursorFaceInfoID != nullptr)
		*CursorFaceInfoID = params.CursorFaceInfoID;
}


// Function PlayerPrefs.PlayerPrefs_C.SetCursorFaceInfoID
// (Exec, Event, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            LastFace                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_SetCursorFaceInfoID(int LastFace)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetCursorFaceInfoID");

	UPlayerPrefs_C_SetCursorFaceInfoID_Params params;
	params.LastFace = LastFace;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetHasClickInviteTeamAct
// (NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)
// Parameters:
// bool                           isClick                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UUID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::SetHasClickInviteTeamAct(bool isClick, const struct FString& UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetHasClickInviteTeamAct");

	UPlayerPrefs_C_SetHasClickInviteTeamAct_Params params;
	params.isClick = isClick;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.GetHasClickInviteTeamAct
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// struct FString                 UUID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           hasClick                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_GetHasClickInviteTeamAct(const struct FString& UUID, bool* hasClick)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetHasClickInviteTeamAct");

	UPlayerPrefs_C_GetHasClickInviteTeamAct_Params params;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (hasClick != nullptr)
		*hasClick = params.hasClick;
}


// Function PlayerPrefs.PlayerPrefs_C.GetHasClickUPassAct
// (NetRequest, Event, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// struct FString                 UUID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           hasClick                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_GetHasClickUPassAct(const struct FString& UUID, bool* hasClick)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetHasClickUPassAct");

	UPlayerPrefs_C_GetHasClickUPassAct_Params params;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (hasClick != nullptr)
		*hasClick = params.hasClick;
}


// Function PlayerPrefs.PlayerPrefs_C.SetHasClickUPassAct
// (NetReliable, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)
// Parameters:
// bool                           isClick                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UUID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::SetHasClickUPassAct(bool isClick, const struct FString& UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetHasClickUPassAct");

	UPlayerPrefs_C_SetHasClickUPassAct_Params params;
	params.isClick = isClick;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetShowSwitchSecondLanguageNextTime
// (Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)
// Parameters:
// struct FDateTime               DateTime                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerPrefs_C::SetShowSwitchSecondLanguageNextTime(const struct FDateTime& DateTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetShowSwitchSecondLanguageNextTime");

	UPlayerPrefs_C_SetShowSwitchSecondLanguageNextTime_Params params;
	params.DateTime = DateTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.GetShowSwitchSecondLanguageNextTime
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)
// Parameters:
// struct FDateTime               DateTime                       (Parm, OutParm)

void UPlayerPrefs_C::GetShowSwitchSecondLanguageNextTime(struct FDateTime* DateTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetShowSwitchSecondLanguageNextTime");

	UPlayerPrefs_C_GetShowSwitchSecondLanguageNextTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DateTime != nullptr)
		*DateTime = params.DateTime;
}


// Function PlayerPrefs.PlayerPrefs_C.GetLoginFrequency
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            loginfreq                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_GetLoginFrequency(int* loginfreq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetLoginFrequency");

	UPlayerPrefs_C_GetLoginFrequency_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (loginfreq != nullptr)
		*loginfreq = params.loginfreq;
}


// Function PlayerPrefs.PlayerPrefs_C.SetLoginFrequency
// (Net, Event, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            CurrentDay                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_SetLoginFrequency(int CurrentDay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetLoginFrequency");

	UPlayerPrefs_C_SetLoginFrequency_Params params;
	params.CurrentDay = CurrentDay;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.GetAirDropTime
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            outAirDropTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_GetAirDropTime(const struct FString& UId, int* outAirDropTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetAirDropTime");

	UPlayerPrefs_C_GetAirDropTime_Params params;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (outAirDropTime != nullptr)
		*outAirDropTime = params.outAirDropTime;
}


// Function PlayerPrefs.PlayerPrefs_C.SetAirDropTime
// (Net, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            InTime                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::STATIC_SetAirDropTime(int InTime, const struct FString& UId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetAirDropTime");

	UPlayerPrefs_C_SetAirDropTime_Params params;
	params.InTime = InTime;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetMystery2LastTime
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_SetMystery2LastTime(int Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetMystery2LastTime");

	UPlayerPrefs_C_SetMystery2LastTime_Params params;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetStoreGiftBoxList
// (NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)
// Parameters:
// TArray<int>                    BoxList                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPlayerPrefs_C::SetStoreGiftBoxList(TArray<int>* BoxList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetStoreGiftBoxList");

	UPlayerPrefs_C_SetStoreGiftBoxList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BoxList != nullptr)
		*BoxList = params.BoxList;
}


// Function PlayerPrefs.PlayerPrefs_C.GetClickTimeAboutBind
// (Exec, Native, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            TimeNotBind                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TimeBind                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_GetClickTimeAboutBind(const struct FString& UId, int* TimeNotBind, int* TimeBind)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.GetClickTimeAboutBind");

	UPlayerPrefs_C_GetClickTimeAboutBind_Params params;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TimeNotBind != nullptr)
		*TimeNotBind = params.TimeNotBind;
	if (TimeBind != nullptr)
		*TimeBind = params.TimeBind;
}


// Function PlayerPrefs.PlayerPrefs_C.SetClickTimeAboutBind
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            TimeNotBind                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TimeBind                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::STATIC_SetClickTimeAboutBind(int TimeNotBind, int TimeBind, const struct FString& UId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetClickTimeAboutBind");

	UPlayerPrefs_C_SetClickTimeAboutBind_Params params;
	params.TimeNotBind = TimeNotBind;
	params.TimeBind = TimeBind;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.IsEqualCurID
// (Net, NetRequest, Native, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            ids                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Has                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_IsEqualCurID(int ids, bool* Has)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.IsEqualCurID");

	UPlayerPrefs_C_IsEqualCurID_Params params;
	params.ids = ids;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Has != nullptr)
		*Has = params.Has;
}


// Function PlayerPrefs.PlayerPrefs_C.SetNewsIds
// (Net, NetReliable, Native, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            ids                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_SetNewsIds(int ids)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetNewsIds");

	UPlayerPrefs_C_SetNewsIds_Params params;
	params.ids = ids;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetMallSeeDict
// (NetReliable, Native, Event, Static, MulticastDelegate, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// TMap<int, bool>                Dict                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::STATIC_SetMallSeeDict(TMap<int, bool> Dict)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetMallSeeDict");

	UPlayerPrefs_C_SetMallSeeDict_Params params;
	params.Dict = Dict;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetStoreBosList
// (Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)
// Parameters:
// TArray<int>                    BoxList                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPlayerPrefs_C::SetStoreBosList(TArray<int>* BoxList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetStoreBosList");

	UPlayerPrefs_C_SetStoreBosList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BoxList != nullptr)
		*BoxList = params.BoxList;
}


// Function PlayerPrefs.PlayerPrefs_C.SetFirstEnterMall
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)

void UPlayerPrefs_C::SetFirstEnterMall()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetFirstEnterMall");

	UPlayerPrefs_C_SetFirstEnterMall_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetMysteryLastTime
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_SetMysteryLastTime(int Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetMysteryLastTime");

	UPlayerPrefs_C_SetMysteryLastTime_Params params;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.RejectUserAgreement
// (NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)

void UPlayerPrefs_C::RejectUserAgreement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.RejectUserAgreement");

	UPlayerPrefs_C_RejectUserAgreement_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.AcceptUserAgreement
// (NetRequest, Exec, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            newVersion                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_AcceptUserAgreement(int newVersion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.AcceptUserAgreement");

	UPlayerPrefs_C_AcceptUserAgreement_Params params;
	params.newVersion = newVersion;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.ServerListClick
// (Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)

void UPlayerPrefs_C::ServerListClick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.ServerListClick");

	UPlayerPrefs_C_ServerListClick_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.HasCloseLocation
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)
// Parameters:
// bool                           UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Has                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::HasCloseLocation(bool UId, bool* Has)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.HasCloseLocation");

	UPlayerPrefs_C_HasCloseLocation_Params params;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Has != nullptr)
		*Has = params.Has;
}


// Function PlayerPrefs.PlayerPrefs_C.SetCloseLocation
// (NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)
// Parameters:
// bool                           CloseLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::SetCloseLocation(bool CloseLocation, const struct FString& UId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetCloseLocation");

	UPlayerPrefs_C_SetCloseLocation_Params params;
	params.CloseLocation = CloseLocation;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.HasNearByNewTips
// (NetReliable, Exec, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Has                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_HasNearByNewTips(const struct FString& UId, bool* Has)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.HasNearByNewTips");

	UPlayerPrefs_C_HasNearByNewTips_Params params;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Has != nullptr)
		*Has = params.Has;
}


// Function PlayerPrefs.PlayerPrefs_C.SetNearByNewTipsRead
// (Exec, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// struct FString                 UId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::STATIC_SetNearByNewTipsRead(const struct FString& UId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetNearByNewTipsRead");

	UPlayerPrefs_C_SetNearByNewTipsRead_Params params;
	params.UId = UId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetYXXYRedPoint
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            isRed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_SetYXXYRedPoint(int isRed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetYXXYRedPoint");

	UPlayerPrefs_C_SetYXXYRedPoint_Params params;
	params.isRed = isRed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.AcceptGuestWarning
// (NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)

void UPlayerPrefs_C::AcceptGuestWarning()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.AcceptGuestWarning");

	UPlayerPrefs_C_AcceptGuestWarning_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.RejectPolicy
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)

void UPlayerPrefs_C::RejectPolicy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.RejectPolicy");

	UPlayerPrefs_C_RejectPolicy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.AcceptPolicy
// (Net, NetRequest, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            newVersion                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_AcceptPolicy(int newVersion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.AcceptPolicy");

	UPlayerPrefs_C_AcceptPolicy_Params params;
	params.newVersion = newVersion;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetFirstInLobby
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)

void UPlayerPrefs_C::SetFirstInLobby()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetFirstInLobby");

	UPlayerPrefs_C_SetFirstInLobby_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetTime
// (Net, NetReliable, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            arg                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_SetTime(int arg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetTime");

	UPlayerPrefs_C_SetTime_Params params;
	params.arg = arg;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.ClearCount
// (NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)

void UPlayerPrefs_C::ClearCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.ClearCount");

	UPlayerPrefs_C_ClearCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetCount
// (Net, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::STATIC_SetCount(int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetCount");

	UPlayerPrefs_C_SetCount_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.LoadData
// (NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)
// Parameters:
// class USaveGame*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USaveGame* UPlayerPrefs_C::LoadData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.LoadData");

	UPlayerPrefs_C_LoadData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerPrefs.PlayerPrefs_C.SaveData
// (Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const)
// Parameters:
// bool                           SaveDataState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SaveData(bool* SaveDataState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SaveData");

	UPlayerPrefs_C_SaveData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SaveDataState != nullptr)
		*SaveDataState = params.SaveDataState;
}


}

