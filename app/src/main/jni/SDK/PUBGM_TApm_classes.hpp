#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TApm.TApmHelper
// 0x0000 (0x0028 - 0x0028)
class UTApmHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TApm.TApmHelper");
		return pStaticClass;
	}


	struct FString ValidateDevice();
	void UpdateGameStatusToVmp(int Key, const struct FString& Value);
	void SetVersionIden(const struct FString& versionName);
	void SetUserID(const struct FString& userId);
	void SetTragetFrameRate(int Target);
	void SetQuality(int Quality);
	void SetPssManualMode();
	void SetLocale(const struct FString& Locale);
	void SetDeviceLevel(int DeviceLevel);
	void setAffinityForThread(int tid);
	void requestResourceGuarantee(int Condition, int loadType, int applyType);
	void RequestPssSample();
	void ReleaseStepEventContext();
	void RegisterRomCallBackMeta(const struct FString& OpenID, const struct FString& ZoneID);
	void PutKVS(const struct FString& Key, const struct FString& Value);
	void PutKVI(const struct FString& Key, int Value);
	void PutKVD(const struct FString& Key, float Value);
	void PostValueS(const struct FString& catgory, const struct FString& Key, const struct FString& Value);
	void PostValueI3(const struct FString& catgory, const struct FString& Key, int A, int B, int C);
	void PostValueI2(const struct FString& catgory, const struct FString& Key, int A, int B);
	void PostValueI1(const struct FString& catgory, const struct FString& Key, int A);
	void PostValueF3(const struct FString& catgory, const struct FString& Key, float A, float B, float C);
	void PostValueF2(const struct FString& catgory, const struct FString& Key, float A, float B);
	void PostValueF1(const struct FString& catgory, const struct FString& Key, float A);
	void PostTrackState(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
	void PostStreamEvent(int stepId, int Status, int code, const struct FString& Info);
	void PostStepEvent(const struct FString& eventCategory, int stepId, int Status, int code, const struct FString& Msg, const struct FString& extraKey);
	void PostNTL(int latency);
	void PostLargeValueS(const struct FString& catgory, const struct FString& Key, const struct FString& Value);
	void PostLagStatus(float Distance);
	void PostGameStatusToTGPASS(const struct FString& Key, const struct FString& Value);
	void PostGameStatusToTGPASMap(const struct FString& Key, TMap<struct FString, struct FString> mapData);
	void PostGameStatusToTGPAIS(int Key, const struct FString& Value);
	void PostFrame(float DeltaTime);
	void PostEvent(int Key, const struct FString& Info, bool savetolocal);
	void MarkLevelLoadCompleted();
	void MarkLevelLoad(const struct FString& SceneName, int Quality);
	void MarkLevelFin();
	void MarkHideLoadingUI();
	void MarkAppFinishLaunch();
	void LinkLastStepEventSession(const struct FString& eventCategory);
	void InitTGPA();
	void InitStepEventContext();
	struct FString GetOptCfgStr();
	int GetDeviceLevelByQcc(const struct FString& ConfigName, const struct FString& GPUFamily);
	int GetDeviceLevel();
	struct FString GetDataFromTGPA(const struct FString& Key, const struct FString& Value);
	void EndTupleWrap();
	void EndTag();
	void EndExclude();
	void EnableDebugMode();
	void DumpEvent(const struct FString& dumpfile);
	void cancelAffinityForThread(int tid);
	void BeginTupleWrap(const struct FString& Key);
	void BeginExclude();
	void AddTag(const struct FString& TagName);
};


// Class TApm.TApmSceneMarker
// 0x0000 (0x0028 - 0x0028)
class UTApmSceneMarker : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TApm.TApmSceneMarker");
		return pStaticClass;
	}


	void SetEnable(bool Enabled);
	void MarkOPScene(int ID);
	void MarkFlowScene(int ID);
	void CancelOPScene(int ID);
};


}

