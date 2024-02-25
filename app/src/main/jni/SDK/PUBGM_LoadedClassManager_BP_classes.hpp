#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LoadedClassManager_BP.LoadedClassManager_BP_C
// 0x0058 (0x03A0 - 0x0348)
class ULoadedClassManager_BP_C : public UUAELoadedClassManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)
	TMap<struct FString, struct FString>               BPTableName2TableName;                                    // 0x0350(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass LoadedClassManager_BP.LoadedClassManager_BP_C");
		return pStaticClass;
	}


	void LoadBPTableData_Mod(const struct FString& BPTableName, const struct FString& tableName);
	void LoadBPTableData(const struct FString& BPTableName, const struct FString& tableName);
	void STATIC_Load3DIconBPTable(const struct FString& BPTableName);
	void STATIC_LoadInFillingBPTable(const struct FString& BPTableName);
	void STATIC_LoadVehiclePropsBPTable(const struct FString& BPTableName);
	void STATIC_LoadDecalBPTable(const struct FString& BPTableName);
	void STATIC_LoadSkillPropsBPTable(const struct FString& BPTableName);
	void STATIC_LoadVehilceRefitPartternBPTable(const struct FString& BPTableName);
	void STATIC_LoadVehilceRefitColorBPTable(const struct FString& BPTableName);
	void STATIC_LoadVehilceRefitParticleBPTable(const struct FString& BPTableName);
	void STATIC_LoadPetAvatarBPTable(const struct FString& BPTableName);
	void STATIC_LoadVehilceRefitBPTable(const struct FString& BPTableName);
	void STATIC_LoadSeasonMissionBPTable(const struct FString& BPTableName);
	void STATIC_LoadAvatarPatternBPTable(const struct FString& BPTableName);
	void STATIC_LoadAvatarColorBPTable(const struct FString& BPTableName);
	void STATIC_LoadVehicleBPTable(const struct FString& BPTableName);
	void STATIC_LoadPlaneBPTable(const struct FString& BPTableName);
	void STATIC_LoadEmoteBPTable(const struct FString& BPTableName);
	void STATIC_LoadConsumableBPTable(const struct FString& BPTableName);
	void STATIC_LoadGameModeBPTable(const struct FString& BPTableName);
	void STATIC_LoadAvatarBPTable(const struct FString& BPTableName);
	void STATIC_LoadWeaponBPTable(const struct FString& BPTableName);
	void InitBPTableMap();
	void InitBPTableMap_Mod();
	void STATIC_ExecuteUbergraph_LoadedClassManager_BP(int EntryPoint);
};


}

