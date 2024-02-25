#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ClothingSystemRuntime.ClothingAssetCustomData
// 0x0000 (0x0028 - 0x0028)
class UClothingAssetCustomData : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClothingSystemRuntime.ClothingAssetCustomData");
		return pStaticClass;
	}

};


// Class ClothingSystemRuntime.ClothingAsset
// 0x0118 (0x0160 - 0x0048)
class UClothingAsset : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                               PhysicsAsset;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FClothConfig                                ClothConfig;                                              // 0x0050(0x00BC) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	TArray<struct FClothLODData>                       LODData;                                                  // 0x0110(0x0010) (ZeroConstructor)
	TArray<int>                                        LodMap;                                                   // 0x0120(0x0010) (ZeroConstructor)
	TArray<struct FName>                               UsedBoneNames;                                            // 0x0130(0x0010) (ZeroConstructor)
	TArray<int>                                        UsedBoneIndices;                                          // 0x0140(0x0010) (ZeroConstructor)
	int                                                ReferenceBoneIndex;                                       // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	class UClothingAssetCustomData*                    CustomData;                                               // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClothingSystemRuntime.ClothingAsset");
		return pStaticClass;
	}

};


// Class ClothingSystemRuntime.ClothingSimulationFactoryNv
// 0x0000 (0x0028 - 0x0028)
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClothingSystemRuntime.ClothingSimulationFactoryNv");
		return pStaticClass;
	}

};


}

