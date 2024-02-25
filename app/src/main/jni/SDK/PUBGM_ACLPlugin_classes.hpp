#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ACLPlugin.ACLStatsDumpCommandlet
// 0x0000 (0x0080 - 0x0080)
class UACLStatsDumpCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ACLPlugin.ACLStatsDumpCommandlet");
		return pStaticClass;
	}

};


// Class ACLPlugin.AnimCompress_ACLBase
// 0x0000 (0x0040 - 0x0040)
class UAnimCompress_ACLBase : public UAnimCompress
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ACLPlugin.AnimCompress_ACLBase");
		return pStaticClass;
	}

};


// Class ACLPlugin.AnimCompress_ACL
// 0x0018 (0x0058 - 0x0040)
class UAnimCompress_ACL : public UAnimCompress_ACLBase
{
public:
	TEnumAsByte<EACLCompressionLevel>                  CompressionLevel;                                         // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              DefaultVirtualVertexDistance;                             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SafeVirtualVertexDistance;                                // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SafetyFallbackThreshold;                                  // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorThreshold;                                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ACLPlugin.AnimCompress_ACL");
		return pStaticClass;
	}

};


// Class ACLPlugin.AnimCompress_ACLCustom
// 0x0028 (0x0068 - 0x0040)
class UAnimCompress_ACLCustom : public UAnimCompress_ACLBase
{
public:
	float                                              DefaultVirtualVertexDistance;                             // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SafeVirtualVertexDistance;                                // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EACLCompressionLevel>                  CompressionLevel;                                         // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EACLRotationFormat>                    RotationFormat;                                           // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EACLVectorFormat>                      TranslationFormat;                                        // 0x004A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EACLVectorFormat>                      ScaleFormat;                                              // 0x004B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorThreshold;                                           // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstantRotationThresholdAngle;                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstantTranslationThreshold;                             // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstantScaleThreshold;                                   // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bClipRangeReduceRotations : 1;                            // 0x005C(0x0001) (Edit)
	unsigned char                                      bClipRangeReduceTranslations : 1;                         // 0x005C(0x0001) (Edit)
	unsigned char                                      bClipRangeReduceScales : 1;                               // 0x005C(0x0001) (Edit)
	unsigned char                                      bEnableSegmenting : 1;                                    // 0x005C(0x0001) (Edit)
	unsigned char                                      bSegmentRangeReduceRotations : 1;                         // 0x005C(0x0001) (Edit)
	unsigned char                                      bSegmentRangeReduceTranslations : 1;                      // 0x005C(0x0001) (Edit)
	unsigned char                                      bSegmentRangeReduceScales : 1;                            // 0x005C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x005D(0x0001) MISSED OFFSET
	uint16_t                                           IdealNumKeyFramesPerSegment;                              // 0x005E(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           MaxNumKeyFramesPerSegment;                                // 0x0060(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0062(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ACLPlugin.AnimCompress_ACLCustom");
		return pStaticClass;
	}

};


}

