#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TableResInclude.AudioVehicle_TabRes
// 0x0028
struct FAudioVehicle_TabRes
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	int                                                MinValue;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxValue;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Distance;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IsOpen;                                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct TableResInclude.CarMusic_TabRes
// 0x00B8
struct FCarMusic_TabRes
{
	int                                                ItemID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Music5;                                                   // 0x0008(0x0010) (ZeroConstructor)
	int                                                Music1Probability;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     Music3;                                                   // 0x0020(0x0010) (ZeroConstructor)
	int                                                Music7Probability;                                        // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     Music2;                                                   // 0x0038(0x0010) (ZeroConstructor)
	int                                                Music2Probability;                                        // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     Music1;                                                   // 0x0050(0x0010) (ZeroConstructor)
	int                                                Music4Probability;                                        // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Music5Probability;                                        // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Music6;                                                   // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     Music7;                                                   // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     Music8;                                                   // 0x0088(0x0010) (ZeroConstructor)
	struct FString                                     Music4;                                                   // 0x0098(0x0010) (ZeroConstructor)
	int                                                Music8Probability;                                        // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Music6Probability;                                        // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Music3Probability;                                        // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct TableResInclude.CollectedEvent_TabRes
// 0x0008
struct FCollectedEvent_TabRes
{
	int                                                EventId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bWeSeeNeeded;                                             // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct TableResInclude.DropConfig_TabRes
// 0x00C0
struct FDropConfig_TabRes
{
	int                                                DropPercent3;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropMode9;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MonsterID;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleStart7;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleStart2;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleStart3;                                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleEnd9;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropMode4;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropPercent10;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropPercent7;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleStart5;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleEnd5;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleStart6;                                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleStart8;                                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleEnd8;                                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropMode8;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleEnd7;                                             // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropMode6;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropPercent5;                                             // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropMode10;                                               // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleEnd2;                                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleEnd3;                                             // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleEnd10;                                            // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropMode5;                                                // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropPercent8;                                             // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropPercent6;                                             // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleStart9;                                           // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleStart10;                                          // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropMode7;                                                // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleEnd6;                                             // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleIDNumber;                                         // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropPercent1;                                             // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropPercent9;                                             // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropMode1;                                                // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TreasureBoxName;                                          // 0x0088(0x0010) (ZeroConstructor)
	int                                                DropPercent4;                                             // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TreasureBoxType;                                          // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropMode2;                                                // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleStart1;                                           // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropPercent2;                                             // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleStart4;                                           // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropMode3;                                                // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleEnd4;                                             // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropRuleEnd1;                                             // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
};

// ScriptStruct TableResInclude.EvoBaseMapUIMarkTable
// 0x0028 (0x0030 - 0x0008)
struct FEvoBaseMapUIMarkTable : public FTableRowBase
{
	int                                                ID;                                                       // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                UIBPSrcID;                                                // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     UIBPSoftPtr;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     UIDescription;                                            // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct TableResInclude.EvoBaseModTableTestTable
// 0x0020 (0x0028 - 0x0008)
struct FEvoBaseModTableTestTable : public FTableRowBase
{
	int                                                ID;                                                       // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     TestString;                                               // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TestNumber;                                               // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               TestBool;                                                 // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct TableResInclude.GrenadeSortPriority_TabRes
// 0x0050
struct FGrenadeSortPriority_TabRes
{
	int                                                ItemID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GrenadeEnumValue;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     BPPath;                                                   // 0x0010(0x0010) (ZeroConstructor)
	int                                                SwitchOrder;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     pressedimagepath;                                         // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     ImagePath;                                                // 0x0038(0x0010) (ZeroConstructor)
	int                                                CountDown;                                                // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                skillindex;                                               // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TableResInclude.ItemSpawnDataSub_TabRes
// 0x0078
struct FItemSpawnDataSub_TabRes
{
	int                                                Weight;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     CategoryFilter;                                           // 0x0008(0x0010) (ZeroConstructor)
	int                                                KeyID;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     ItemPath;                                                 // 0x0020(0x0010) (ZeroConstructor)
	int                                                CountMin;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     ValueFilter;                                              // 0x0040(0x0010) (ZeroConstructor)
	int                                                CountMax;                                                 // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     ItemTogetherPath;                                         // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     SubCategoryFilter;                                        // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct TableResInclude.ItemSpawnData_TabRes
// 0x0060
struct FItemSpawnData_TabRes
{
	struct FString                                     ItemPath;                                                 // 0x0000(0x0010) (ZeroConstructor)
	int                                                Weight;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ValueFilter;                                              // 0x0018(0x0010) (ZeroConstructor)
	int                                                KeyID;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     CategoryFilter;                                           // 0x0030(0x0010) (ZeroConstructor)
	int                                                CountMax;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CountMin;                                                 // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemTogetherPath;                                         // 0x0048(0x0010) (ZeroConstructor)
	int                                                Count;                                                    // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct TableResInclude.ItemTag_TabRes
// 0x0020
struct FItemTag_TabRes
{
	int                                                TagValue;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TagName;                                                  // 0x0008(0x0010) (ZeroConstructor)
	int                                                ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct TableResInclude.Item_TabRes
// 0x01D8
struct FItem_TabRes
{
	struct FString                                     ItemBigIcon;                                              // 0x0000(0x0010) (ZeroConstructor)
	int                                                MaxCount;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BPID;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ItemType;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               AutoEquipandDrop;                                         // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                ItemID;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Consumable;                                               // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FString                                     ItemDesc;                                                 // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     ItemSmallIcon;                                            // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     ItemName;                                                 // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     WardrobeTab;                                              // 0x0058(0x0010) (ZeroConstructor)
	int                                                ItemSubType;                                              // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Equippable;                                               // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              UnitWeight_f;                                             // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FString                                     ItemWhiteIcon;                                            // 0x0078(0x0010) (ZeroConstructor)
	int                                                ItemQuality;                                              // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SellTokenType;                                            // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SellPrice;                                                // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FString                                     PickupSound;                                              // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     UnEquipSound;                                             // 0x00A8(0x0010) (ZeroConstructor)
	struct FString                                     DropSound;                                                // 0x00B8(0x0010) (ZeroConstructor)
	struct FString                                     EquipSound;                                               // 0x00C8(0x0010) (ZeroConstructor)
	struct FString                                     UnEquipBank;                                              // 0x00D8(0x0010) (ZeroConstructor)
	struct FString                                     EquipBank;                                                // 0x00E8(0x0010) (ZeroConstructor)
	struct FString                                     DropBank;                                                 // 0x00F8(0x0010) (ZeroConstructor)
	struct FString                                     PickUpBank;                                               // 0x0108(0x0010) (ZeroConstructor)
	struct FString                                     KillWhiteIcon;                                            // 0x0118(0x0010) (ZeroConstructor)
	bool                                               NeedShare;                                                // 0x0128(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	int                                                WeightforOrder;                                           // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Preview;                                                  // 0x0130(0x0010) (ZeroConstructor)
	struct FString                                     ExTime;                                                   // 0x0140(0x0010) (ZeroConstructor)
	struct FString                                     JumpUrl;                                                  // 0x0150(0x0010) (ZeroConstructor)
	int                                                SourceBookEnable;                                         // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	struct FString                                     PickupDesc;                                               // 0x0168(0x0010) (ZeroConstructor)
	int                                                WardrobeMainTab;                                          // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Durability;                                               // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     JumpExchangeUrl;                                          // 0x0180(0x0010) (ZeroConstructor)
	int                                                LongDescID;                                               // 0x0190(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AIFullVaule;                                              // 0x0194(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemSmallIcon2;                                           // 0x0198(0x0010) (ZeroConstructor)
	struct FString                                     ItemBigIcon2;                                             // 0x01A8(0x0010) (ZeroConstructor)
	struct FString                                     BackpackSimple;                                           // 0x01B8(0x0010) (ZeroConstructor)
	int                                                UseType;                                                  // 0x01C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                gender;                                                   // 0x01CC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmoryJumpId;                                             // 0x01D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CharmValue;                                               // 0x01D4(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TableResInclude.MonsterSpawnData_TabRes
// 0x0070
struct FMonsterSpawnData_TabRes
{
	struct FString                                     ValueFilter;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     ItemTogetherPath;                                         // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     MetaData;                                                 // 0x0020(0x0010) (ZeroConstructor)
	int                                                Count;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CountMin;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     CategoryFilter;                                           // 0x0040(0x0010) (ZeroConstructor)
	int                                                Weight;                                                   // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KeyID;                                                    // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemPath;                                                 // 0x0058(0x0010) (ZeroConstructor)
	int                                                CountMax;                                                 // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MonsterID;                                                // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TableResInclude.PawnStateInvisUI_TabRes
// 0x0020
struct FPawnStateInvisUI_TabRes
{
	struct FString                                     UIClassName;                                              // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        InvisPawnState_a;                                         // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct TableResInclude.RoleUpgradeTable_TabRes
// 0x0014
struct FRoleUpgradeTable_TabRes
{
	int                                                Capacity;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ZombieInjury_f;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MovingSpeed_f;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Exp;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TableResInclude.VehicleMaxHP_TabRes
// 0x0040
struct FVehicleMaxHP_TabRes
{
	int                                                HPNum;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                VehicleItemID;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     EndTime;                                                  // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     ModuleTypeID;                                             // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     StartTime;                                                // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct TableResInclude.VehicleSpawn_TabRes
// 0x0030
struct FVehicleSpawn_TabRes
{
	struct FString                                     VehicleType;                                              // 0x0000(0x0010) (ZeroConstructor)
	int                                                KeyID;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               SnapFloor;                                                // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                Weight;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     Vehicle;                                                  // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct TableResInclude.VibrateAssetsConfig_TabRes
// 0x0140
struct FVibrateAssetsConfig_TabRes
{
	int                                                AssetId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     AssetRelativePath;                                        // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     PlayVibrateParam;                                         // 0x0018(0x0010) (ZeroConstructor)
	int                                                TriggerEventType;                                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayPriority;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlayDuration_f;                                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyMatchMainItemType;                                   // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                TriggerMainItemType;                                      // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     TriggerMainItemData;                                      // 0x0040(0x0010) (ZeroConstructor)
	int                                                TriggerSubItem1Type;                                      // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     TriggerSubItem1Data;                                      // 0x0058(0x0010) (ZeroConstructor)
	int                                                TriggerSubItem2Type;                                      // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FString                                     TriggerSubItem2Data;                                      // 0x0070(0x0010) (ZeroConstructor)
	int                                                TriggerSubItem3Type;                                      // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FString                                     TriggerSubItem3Data;                                      // 0x0088(0x0010) (ZeroConstructor)
	int                                                TriggerSubItem4Type;                                      // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FString                                     TriggerSubItem4Data;                                      // 0x00A0(0x0010) (ZeroConstructor)
	int                                                TriggerSubItem5Type;                                      // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	struct FString                                     TriggerSubItem5Data;                                      // 0x00B8(0x0010) (ZeroConstructor)
	int                                                TriggerSubItem6Type;                                      // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FString                                     TriggerSubItem6Data;                                      // 0x00D0(0x0010) (ZeroConstructor)
	int                                                TriggerSubItem7Type;                                      // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FString                                     TriggerSubItem7Data;                                      // 0x00E8(0x0010) (ZeroConstructor)
	int                                                TriggerSubItem8Type;                                      // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FString                                     TriggerSubItem8Data;                                      // 0x0100(0x0010) (ZeroConstructor)
	int                                                TriggerSubItem9Type;                                      // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	struct FString                                     TriggerSubItem9Data;                                      // 0x0118(0x0010) (ZeroConstructor)
	int                                                TriggerSubItem10Type;                                     // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	struct FString                                     TriggerSubItem10Data;                                     // 0x0130(0x0010) (ZeroConstructor)
};

// ScriptStruct TableResInclude.WeaponAttachments_TabRes
// 0x0084
struct FWeaponAttachments_TabRes
{
	int                                                Magazine1ID;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Stock2ID;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Lower1ID;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Lower2ID;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Magazine3ID;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Stock1ID;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Magazine2ID;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Muzzle2ID;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Upper1ID;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Upper2ID;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Muzzle1ID;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Upper4ID;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KeyID;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Muzzle3ID;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Upper3ID;                                                 // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Upper5ID;                                                 // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletID;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ProposeBulletNum;                                         // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Lower3ID;                                                 // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Lower5ID;                                                 // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Lower4ID;                                                 // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Upper7ID;                                                 // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Muzzle5ID;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Muzzle6ID;                                                // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Muzzle4ID;                                                // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Magazine6ID;                                              // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Magazine4ID;                                              // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Magazine5ID;                                              // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Upper6ID;                                                 // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AIMaxAttackDist;                                          // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AIMinAttackDist;                                          // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Lower6ID;                                                 // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UpperSide1ID;                                             // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TableResInclude.ZombieTreasureBox_TabRes
// 0x0020
struct FZombieTreasureBox_TabRes
{
	struct FString                                     BoxPath;                                                  // 0x0000(0x0010) (ZeroConstructor)
	int                                                ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BoxHealth;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TimeToCount;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BoxDropPlan;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

