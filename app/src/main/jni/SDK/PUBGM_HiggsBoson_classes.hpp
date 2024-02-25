#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class HiggsBoson.ClientGlueHiaSystem
// 0x01E0 (0x0210 - 0x0030)
class UClientGlueHiaSystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x1D4];                                     // 0x0030(0x01D4) MISSED OFFSET
	int                                                ParamWall01;                                              // 0x0204(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0208(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.ClientGlueHiaSystem");
		return pStaticClass;
	}


	void SetGameModeMoveSpeedModifier(float Value);
	bool IsTimeNearInvalidMoveState(class AActor* CharacterPtr, float TimeInSeconds, float MarginInSeconds);
	bool IsGMCheatingSpeed(class AActor* CharacterPtr);
	bool IsDuringFightingState();
	float GetGameModeMoveSpeedModifier();
	float GetGameModeMaxRunningMoveSpeed();
};


// Class HiggsBoson.FuzzyObject
// 0x0328 (0x0350 - 0x0028)
class UFuzzyObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x320];                                     // 0x0028(0x0320) MISSED OFFSET
	int                                                Param1;                                                   // 0x0348(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x034C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.FuzzyObject");
		return pStaticClass;
	}


	bool SetUInt8ValueByName(const struct FString& Name, unsigned char Value);
	bool SetUInt64ValueByName(const struct FString& Name, uint64_t Value);
	bool SetUInt32ValueByName(const struct FString& Name, uint32_t Value);
	bool SetUInt16ValueByName(const struct FString& Name, uint16_t Value);
	bool SetInt8ValueByName(const struct FString& Name, int8_t Value);
	bool SetInt64ValueByName(const struct FString& Name, int64_t Value);
	bool SetInt32ValueByName(const struct FString& Name, int Value);
	bool SetInt16ValueByName(const struct FString& Name, int16_t Value);
	bool SetFloatValueByName(const struct FString& Name, float Value);
	bool SetBoolValueByName(const struct FString& Name, bool Value);
	bool GetUInt8ValueByName(const struct FString& Name, unsigned char* OutValue);
	bool GetUInt64ValueByName(const struct FString& Name, uint64_t* OutValue);
	bool GetUInt32ValueByName(const struct FString& Name, uint32_t* OutValue);
	bool GetUInt16ValueByName(const struct FString& Name, uint16_t* OutValue);
	bool GetInt8ValueByName(const struct FString& Name, int8_t* OutValue);
	bool GetInt64ValueByName(const struct FString& Name, int64_t* OutValue);
	bool GetInt32ValueByName(const struct FString& Name, int* OutValue);
	bool GetInt16ValueByName(const struct FString& Name, int16_t* OutValue);
	bool GetFloatValueByName(const struct FString& Name, float* OutValue);
	bool GetBoolValueByName(const struct FString& Name, bool* OutValue);
};


// Class HiggsBoson.SCoronaClientData
// 0x0000 (0x0350 - 0x0350)
class USCoronaClientData : public UFuzzyObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.SCoronaClientData");
		return pStaticClass;
	}

};


// Class HiggsBoson.CamoyoHelper
// 0x0000 (0x0028 - 0x0028)
class UCamoyoHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.CamoyoHelper");
		return pStaticClass;
	}


	void MakeRectTu(const struct FScriptDelegate& CamoyoRetDelegate, const struct FString& Filename, int Quality, bool bShowUI);
	void MakeMemPerform(int InbOpen);
	void MakeFitRectTu(const struct FScriptDelegate& CamoyoRetDelegate, const struct FVector4& InCutParam, int InTuType, bool isShowUI);
};


// Class HiggsBoson.HiggsBosonComponent
// 0x0A40 (0x0C18 - 0x01D8)
class UHiggsBosonComponent : public ULuaActorComponent
{
public:
	unsigned char                                      UnknownData00[0x1F];                                      // 0x01D8(0x001F) MISSED OFFSET
	bool                                               bOpenActorChannelErrorReport;                             // 0x01F7(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x100];                                     // 0x01F8(0x0100) MISSED OFFSET
	struct FString                                     TraceData;                                                // 0x02F8(0x0010) (ZeroConstructor)
	struct FString                                     GameTraceData;                                            // 0x0308(0x0010) (ZeroConstructor)
	uint32_t                                           HeartBreaks;                                              // 0x0318(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x031C(0x0004) MISSED OFFSET
	struct FString                                     HeartInfo;                                                // 0x0320(0x0010) (ZeroConstructor)
	struct FScriptMulticastDelegate                    OnSwiftHawkDelegate;                                      // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGlueHiaRayResult;                                       // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class ASTExtraBaseCharacter*                       CharacterOwner;                                           // 0x0350(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerController*                    PlayerController;                                         // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bClientInfoReceived;                                      // 0x0360(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	TArray<uint32_t>                                   ClientInfoAsUInt32Array;                                  // 0x0368(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              IntegrityItemCheckResultAsBytes;                          // 0x0378(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x40];                                      // 0x0388(0x0040) MISSED OFFSET
	bool                                               bRoofTouchActive;                                         // 0x03C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xB];                                       // 0x03C9(0x000B) MISSED OFFSET
	int                                                RoofTouchStatus;                                          // 0x03D4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x748];                                     // 0x03D8(0x0748) MISSED OFFSET
	class USCoronaClientData*                          SecurityCoronaLabClientDataPointer;                       // 0x0B20(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0xE4];                                      // 0x0B28(0x00E4) MISSED OFFSET
	float                                              TouchScreenActiveTimeRatioThreshold;                      // 0x0C0C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x8];                                       // 0x0C10(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.HiggsBosonComponent");
		return pStaticClass;
	}


	void UpdateFeiji(float Param1);
	void SyncServerParam(bool Param1);
	void SwiftHawk(TArray<unsigned char> Hawks, uint32_t Magic);
	void ShowABCD(const struct FString& Message, bool bIsClientShowWindow, bool bIsServerReportRobot, bool bIsSimilarMessageReportOnlyOnce);
	void SetSchemeForInitialize(int Index, uint32_t VerifyLen, TArray<unsigned char> VerifyHashArray, TArray<struct FPatchPoint> PatchPointArray);
	void SetSchemeForGet(int Index, uint32_t VerifyLen, TArray<unsigned char> VerifyHashArray, TArray<struct FPatchPoint> PatchPointArray);
	void ServerWheat(float Param1, float Param2, float param3, float Param4, float Param5, float Param6, float Param7, float Param8, float Param9);
	void ServerPoPo(TArray<unsigned char>* Array);
	void RPC_ServerGlueHiaPark(int8_t HeShui, TArray<unsigned char> GlueHiaParkArr, uint32_t HiaStatus, TArray<unsigned char> GlueArg, TArray<unsigned char> GlueHiaParkArr2, uint32_t HiaStatus2);
	void RPC_ServerCapbo(int8_t BoCapC, int8_t InBoType, TArray<unsigned char> BoDataArr);
	void RPC_ClientCoronaLab(unsigned char bAllSwitch, TArray<unsigned char> CoronaLab, uint32_t CoronaState);
	void OnWeaponAimInput(float InDistToEnemy, float InYaw, float InPitch, float InRoll);
	void OnTouchInput(float InYaw, float InPitch, float InRoll);
	void OnStopFireEvent();
	void OnStartFireEvent();
	void OnSkillInteruptVisual(class AActor* InTarget, class AActor* InCauser);
	void OnSkillEndVisual(class AActor* InTarget, class AActor* InCauser);
	void OnSkillEndTrans(class AActor* InTarget, class AActor* InCauser);
	void OnSkillBeginVisual(class AActor* InTarget, class AActor* InCauser);
	void OnSkillBeginTrans(class AActor* InTarget, class AActor* InCauser);
	void OnPlayerScopeOut(bool bBegan);
	void OnPlayerScopeIn(bool bBegan);
	void OnMyPawnRespawn(class AUAEPlayerController* InPlayerController);
	void OnKillSomeOneEvent(class AActor* InSomeOne);
	void OnGyroInput(float InYaw, float InPitch, float InRoll);
	void OnClientAdjustPosition(const struct FVector& NewLoc, ECharacterMoveDragReason Reason);
	void OnCapboReturn(int BoCapC, int InBoType, TArray<unsigned char> RetData);
	void OnBulletImpactEvent(class AActor* InCauser, const struct FHitResult& InImpactResult);
	void HandleClientReconnect();
	float GetServerGuey();
	void FlushGameEnd();
	void EnableTickEncrypt();
	void EnableEnhancedDynamicActors(int Index);
	void DispatchIntegrityCheckItem(uint32_t PlatID, uint32_t AreaID, uint32_t GameBits, uint32_t Index, int Offset, uint32_t Len, uint32_t Type);
	void ControlRoofTouch(int Switch);
	void ClientSwiftHawkWithParams(TArray<unsigned char> Hawks);
	void ClientSwiftHawk(unsigned char Type, int SequenceID);
	void ClientReceiveEx(TArray<unsigned char> RPCConstArray);
	void ClientDoJT(bool bDelayUntilShot);
};


// Class HiggsBoson.SecurityImprisonComp
// 0x0030 (0x0140 - 0x0110)
class USecurityImprisonComp : public UActorComponent
{
public:
	class ASTExtraPlayerController*                    OwnerPC;                                                  // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       CharacterWaitForOp;                                       // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<uint64_t>                                   TeammateKillerUID;                                        // 0x0120(0x0010) (Net, ZeroConstructor)
	TArray<unsigned char>                              TeammateKillType;                                         // 0x0130(0x0010) (Net, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.SecurityImprisonComp");
		return pStaticClass;
	}


	void ReleaseTeammate(uint64_t PlayerUID);
	void ImprisonmentUIUpdate(uint64_t PlayerUID, bool bIsImprison);
	void ImprisonmentTeammate(uint64_t PlayerUID, bool bIscomplaint);
	void ImprisonmentReport(uint64_t PlayerUID);
};


// Class HiggsBoson.TickAsTimer
// 0x0000 (0x0028 - 0x0028)
class UTickAsTimer : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.TickAsTimer");
		return pStaticClass;
	}

};


// Class HiggsBoson.TimeConsuming
// 0x0000 (0x0028 - 0x0028)
class UTimeConsuming : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.TimeConsuming");
		return pStaticClass;
	}

};


}

