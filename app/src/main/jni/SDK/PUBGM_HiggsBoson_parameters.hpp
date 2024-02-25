#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HiggsBoson.ClientGlueHiaSystem.SetGameModeMoveSpeedModifier
struct UClientGlueHiaSystem_SetGameModeMoveSpeedModifier_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.ClientGlueHiaSystem.IsTimeNearInvalidMoveState
struct UClientGlueHiaSystem_IsTimeNearInvalidMoveState_Params
{
	class AActor*                                      CharacterPtr;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeInSeconds;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MarginInSeconds;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.ClientGlueHiaSystem.IsGMCheatingSpeed
struct UClientGlueHiaSystem_IsGMCheatingSpeed_Params
{
	class AActor*                                      CharacterPtr;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.ClientGlueHiaSystem.IsDuringFightingState
struct UClientGlueHiaSystem_IsDuringFightingState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.ClientGlueHiaSystem.GetGameModeMoveSpeedModifier
struct UClientGlueHiaSystem_GetGameModeMoveSpeedModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.ClientGlueHiaSystem.GetGameModeMaxRunningMoveSpeed
struct UClientGlueHiaSystem_GetGameModeMaxRunningMoveSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.FuzzyObject.SetUInt8ValueByName
struct UFuzzyObject_SetUInt8ValueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	unsigned char                                      Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.FuzzyObject.SetUInt64ValueByName
struct UFuzzyObject_SetUInt64ValueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	uint64_t                                           Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.FuzzyObject.SetUInt32ValueByName
struct UFuzzyObject_SetUInt32ValueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	uint32_t                                           Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.FuzzyObject.SetUInt16ValueByName
struct UFuzzyObject_SetUInt16ValueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	uint16_t                                           Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.FuzzyObject.SetInt8ValueByName
struct UFuzzyObject_SetInt8ValueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int8_t                                             Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.FuzzyObject.SetInt64ValueByName
struct UFuzzyObject_SetInt64ValueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int64_t                                            Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.FuzzyObject.SetInt32ValueByName
struct UFuzzyObject_SetInt32ValueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.FuzzyObject.SetInt16ValueByName
struct UFuzzyObject_SetInt16ValueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int16_t                                            Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.FuzzyObject.SetFloatValueByName
struct UFuzzyObject_SetFloatValueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.FuzzyObject.SetBoolValueByName
struct UFuzzyObject_SetBoolValueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.FuzzyObject.GetUInt8ValueByName
struct UFuzzyObject_GetUInt8ValueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	unsigned char                                      OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.FuzzyObject.GetUInt64ValueByName
struct UFuzzyObject_GetUInt64ValueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	uint64_t                                           OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.FuzzyObject.GetUInt32ValueByName
struct UFuzzyObject_GetUInt32ValueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	uint32_t                                           OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.FuzzyObject.GetUInt16ValueByName
struct UFuzzyObject_GetUInt16ValueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	uint16_t                                           OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.FuzzyObject.GetInt8ValueByName
struct UFuzzyObject_GetInt8ValueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int8_t                                             OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.FuzzyObject.GetInt64ValueByName
struct UFuzzyObject_GetInt64ValueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int64_t                                            OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.FuzzyObject.GetInt32ValueByName
struct UFuzzyObject_GetInt32ValueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.FuzzyObject.GetInt16ValueByName
struct UFuzzyObject_GetInt16ValueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int16_t                                            OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.FuzzyObject.GetFloatValueByName
struct UFuzzyObject_GetFloatValueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	float                                              OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.FuzzyObject.GetBoolValueByName
struct UFuzzyObject_GetBoolValueByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	bool                                               OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.CamoyoHelper.MakeRectTu
struct UCamoyoHelper_MakeRectTu_Params
{
	struct FScriptDelegate                             CamoyoRetDelegate;                                        // (Parm, ZeroConstructor)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	int                                                Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowUI;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.CamoyoHelper.MakeMemPerform
struct UCamoyoHelper_MakeMemPerform_Params
{
	int                                                InbOpen;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.CamoyoHelper.MakeFitRectTu
struct UCamoyoHelper_MakeFitRectTu_Params
{
	struct FScriptDelegate                             CamoyoRetDelegate;                                        // (Parm, ZeroConstructor)
	struct FVector4                                    InCutParam;                                               // (Parm, IsPlainOldData)
	int                                                InTuType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isShowUI;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.UpdateFeiji
struct UHiggsBosonComponent_UpdateFeiji_Params
{
	float                                              Param1;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.SyncServerParam
struct UHiggsBosonComponent_SyncServerParam_Params
{
	bool                                               Param1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.SwiftHawk
struct UHiggsBosonComponent_SwiftHawk_Params
{
	TArray<unsigned char>                              Hawks;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	uint32_t                                           Magic;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.ShowABCD
struct UHiggsBosonComponent_ShowABCD_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	bool                                               bIsClientShowWindow;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsServerReportRobot;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSimilarMessageReportOnlyOnce;                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.SetSchemeForInitialize
struct UHiggsBosonComponent_SetSchemeForInitialize_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           VerifyLen;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              VerifyHashArray;                                          // (Parm, ZeroConstructor)
	TArray<struct FPatchPoint>                         PatchPointArray;                                          // (Parm, ZeroConstructor)
};

// Function HiggsBoson.HiggsBosonComponent.SetSchemeForGet
struct UHiggsBosonComponent_SetSchemeForGet_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           VerifyLen;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              VerifyHashArray;                                          // (Parm, ZeroConstructor)
	TArray<struct FPatchPoint>                         PatchPointArray;                                          // (Parm, ZeroConstructor)
};

// Function HiggsBoson.HiggsBosonComponent.ServerWheat
struct UHiggsBosonComponent_ServerWheat_Params
{
	float                                              Param1;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Param2;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              param3;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Param4;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Param5;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Param6;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Param7;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Param8;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Param9;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.ServerPoPo
struct UHiggsBosonComponent_ServerPoPo_Params
{
	TArray<unsigned char>                              Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function HiggsBoson.HiggsBosonComponent.RPC_ServerGlueHiaPark
struct UHiggsBosonComponent_RPC_ServerGlueHiaPark_Params
{
	int8_t                                             HeShui;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              GlueHiaParkArr;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	uint32_t                                           HiaStatus;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              GlueArg;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              GlueHiaParkArr2;                                          // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	uint32_t                                           HiaStatus2;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.RPC_ServerCapbo
struct UHiggsBosonComponent_RPC_ServerCapbo_Params
{
	int8_t                                             BoCapC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int8_t                                             InBoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              BoDataArr;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function HiggsBoson.HiggsBosonComponent.RPC_ClientCoronaLab
struct UHiggsBosonComponent_RPC_ClientCoronaLab_Params
{
	unsigned char                                      bAllSwitch;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              CoronaLab;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	uint32_t                                           CoronaState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.OnWeaponAimInput
struct UHiggsBosonComponent_OnWeaponAimInput_Params
{
	float                                              InDistToEnemy;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InYaw;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPitch;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRoll;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.OnTouchInput
struct UHiggsBosonComponent_OnTouchInput_Params
{
	float                                              InYaw;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPitch;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRoll;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.OnStopFireEvent
struct UHiggsBosonComponent_OnStopFireEvent_Params
{
};

// Function HiggsBoson.HiggsBosonComponent.OnStartFireEvent
struct UHiggsBosonComponent_OnStartFireEvent_Params
{
};

// Function HiggsBoson.HiggsBosonComponent.OnSkillInteruptVisual
struct UHiggsBosonComponent_OnSkillInteruptVisual_Params
{
	class AActor*                                      InTarget;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InCauser;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.OnSkillEndVisual
struct UHiggsBosonComponent_OnSkillEndVisual_Params
{
	class AActor*                                      InTarget;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InCauser;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.OnSkillEndTrans
struct UHiggsBosonComponent_OnSkillEndTrans_Params
{
	class AActor*                                      InTarget;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InCauser;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.OnSkillBeginVisual
struct UHiggsBosonComponent_OnSkillBeginVisual_Params
{
	class AActor*                                      InTarget;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InCauser;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.OnSkillBeginTrans
struct UHiggsBosonComponent_OnSkillBeginTrans_Params
{
	class AActor*                                      InTarget;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InCauser;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.OnPlayerScopeOut
struct UHiggsBosonComponent_OnPlayerScopeOut_Params
{
	bool                                               bBegan;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.OnPlayerScopeIn
struct UHiggsBosonComponent_OnPlayerScopeIn_Params
{
	bool                                               bBegan;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.OnMyPawnRespawn
struct UHiggsBosonComponent_OnMyPawnRespawn_Params
{
	class AUAEPlayerController*                        InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.OnKillSomeOneEvent
struct UHiggsBosonComponent_OnKillSomeOneEvent_Params
{
	class AActor*                                      InSomeOne;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.OnGyroInput
struct UHiggsBosonComponent_OnGyroInput_Params
{
	float                                              InYaw;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPitch;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRoll;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.OnClientAdjustPosition
struct UHiggsBosonComponent_OnClientAdjustPosition_Params
{
	struct FVector                                     NewLoc;                                                   // (Parm, IsPlainOldData)
	ECharacterMoveDragReason                           Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.OnCapboReturn
struct UHiggsBosonComponent_OnCapboReturn_Params
{
	int                                                BoCapC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InBoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              RetData;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HiggsBoson.HiggsBosonComponent.OnBulletImpactEvent
struct UHiggsBosonComponent_OnBulletImpactEvent_Params
{
	class AActor*                                      InCauser;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  InImpactResult;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.HandleClientReconnect
struct UHiggsBosonComponent_HandleClientReconnect_Params
{
};

// Function HiggsBoson.HiggsBosonComponent.GetServerGuey
struct UHiggsBosonComponent_GetServerGuey_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.FlushGameEnd
struct UHiggsBosonComponent_FlushGameEnd_Params
{
};

// Function HiggsBoson.HiggsBosonComponent.EnableTickEncrypt
struct UHiggsBosonComponent_EnableTickEncrypt_Params
{
};

// Function HiggsBoson.HiggsBosonComponent.EnableEnhancedDynamicActors
struct UHiggsBosonComponent_EnableEnhancedDynamicActors_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.DispatchIntegrityCheckItem
struct UHiggsBosonComponent_DispatchIntegrityCheckItem_Params
{
	uint32_t                                           PlatID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           AreaID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           GameBits;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Len;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.ControlRoofTouch
struct UHiggsBosonComponent_ControlRoofTouch_Params
{
	int                                                Switch;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.ClientSwiftHawkWithParams
struct UHiggsBosonComponent_ClientSwiftHawkWithParams_Params
{
	TArray<unsigned char>                              Hawks;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function HiggsBoson.HiggsBosonComponent.ClientSwiftHawk
struct UHiggsBosonComponent_ClientSwiftHawk_Params
{
	unsigned char                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.HiggsBosonComponent.ClientReceiveEx
struct UHiggsBosonComponent_ClientReceiveEx_Params
{
	TArray<unsigned char>                              RPCConstArray;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function HiggsBoson.HiggsBosonComponent.ClientDoJT
struct UHiggsBosonComponent_ClientDoJT_Params
{
	bool                                               bDelayUntilShot;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.SecurityImprisonComp.ReleaseTeammate
struct USecurityImprisonComp_ReleaseTeammate_Params
{
	uint64_t                                           PlayerUID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.SecurityImprisonComp.ImprisonmentUIUpdate
struct USecurityImprisonComp_ImprisonmentUIUpdate_Params
{
	uint64_t                                           PlayerUID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsImprison;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.SecurityImprisonComp.ImprisonmentTeammate
struct USecurityImprisonComp_ImprisonmentTeammate_Params
{
	uint64_t                                           PlayerUID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIscomplaint;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiggsBoson.SecurityImprisonComp.ImprisonmentReport
struct USecurityImprisonComp_ImprisonmentReport_Params
{
	uint64_t                                           PlayerUID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

