#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Spectating.OBHttpComponent
// 0x0070 (0x0248 - 0x01D8)
class UOBHttpComponent : public ULuaActorComponent
{
public:
	TArray<struct FPlayerRealTimeAPI>                  RealTimeAPIList;                                          // 0x01D8(0x0010) (Net, ZeroConstructor)
	TArray<struct FPlayerAfterMatchAPI>                AfterMatchAPIList;                                        // 0x01E8(0x0010) (Net, ZeroConstructor)
	bool                                               bSwitchOBHttpComponent;                                   // 0x01F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET
	struct FString                                     IPAddr;                                                   // 0x0200(0x0010) (ZeroConstructor, Config)
	int                                                Port;                                                     // 0x0210(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0214(0x0004) MISSED OFFSET
	struct FString                                     URLSetting;                                               // 0x0218(0x0010) (ZeroConstructor)
	int                                                MaxFailedTimes;                                           // 0x0228(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	TArray<int>                                        NeedItems;                                                // 0x0230(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0240(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Spectating.OBHttpComponent");
		return pStaticClass;
	}


	void ServerGetBackPackInfo(int TeamID, TArray<int> ObserveReplicateItems);
	void ServerGetAllPlayerThrowInfo();
	void ServerCollectTeammateItemList(int TeamID);
	void PostTeamWeaponInfo(const struct FString& TeamWeaponInfoJsonStr);
	void PostTeamBackPackInfoByTeamID(int TeamID, TArray<int> ObserveReplicateItems);
	void OnRep_RealTimeAPIList();
	void OnRep_AfterMatchAPIList();
	void ClientUpdateTeammateItemList();
	void ClientGetBackPackInfo(TArray<struct FPlayerBackPackInfo> TeamBackPackInfo);
	void ClientGetAllPlayerThrowInfo(TArray<struct FPlayerThrowInfo> AllPlayerThrowInfo);
};


// Class Spectating.ObserverProbeComponent
// 0x00C8 (0x01D8 - 0x0110)
class UObserverProbeComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0110(0x0070) MISSED OFFSET
	TArray<class ABaseAIController*>                   MLAIControllerList;                                       // 0x0180(0x0010) (ZeroConstructor)
	TArray<class ASTExtraPlayerController*>            APIControllerList;                                        // 0x0190(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01A0(0x0020) MISSED OFFSET
	class AUAEGameMode*                                OwnerGameMode;                                            // 0x01C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASTExtraGameStateBase*                       CachedGameState;                                          // 0x01C8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Spectating.ObserverProbeComponent");
		return pStaticClass;
	}

};


// Class Spectating.OBSubSystem
// 0x0000 (0x0030 - 0x0030)
class UOBSubSystem : public UWorldSubsystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Spectating.OBSubSystem");
		return pStaticClass;
	}

};


}

