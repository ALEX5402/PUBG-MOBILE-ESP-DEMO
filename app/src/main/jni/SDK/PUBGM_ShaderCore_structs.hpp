#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ShaderCore.CollectSwitchs
// 0x000D
struct FCollectSwitchs
{
	bool                                               LevelStaticMeshMobile;                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               LevelStaticMeshShadowDepth;                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               LevelStaticMeshDepth;                                     // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               SkeletalMeshMobile;                                       // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               SkeletalMeshShadowDepth;                                  // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               SkeletalMeshDepth;                                        // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ParticleSpriteMobile;                                     // 0x0006(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               MeshParticleMobile;                                       // 0x0007(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               LandscapeMobile;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               LandscapeShadowDepth;                                     // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               LandscapeDepth;                                           // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               SlateDefaultBase;                                         // 0x000B(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               SlateFontBase;                                            // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShaderCore.RenderConfig
// 0x0070
struct FRenderConfig
{
	struct FName                                       FormatName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FeatureLevel;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                QualityType;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UserQualitySetting;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialQualityLevel;                                     // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                PUBGLDR;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MobileHDR;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MobileSimplerShader;                                      // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShadowQuality;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxCSMShadowResolution;                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MobileEnableHardwarePCF;                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MobileEnableIBL;                                          // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MobileEarlyZPass;                                         // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MobileEnableEarlyZDepthBias;                              // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MobileUseAlphaToCoverage;                                 // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MobileBypassTranslucentMaterialPointLight;                // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MobileMSAA;                                               // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllowStaticLighting;                                      // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SupportAllShaderPermutations;                             // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SupportLowQualityLightmaps;                               // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MobileEnableVertexPointLight;                             // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MobileFallbackMSAAToFXAA;                                 // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IndirectLightingCache;                                    // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MobileNumDynamicPointLights;                              // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               RHISupportsTexLod;                                        // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               RHISupportsHardwarePCF;                                   // 0x006D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x006E(0x0002) MISSED OFFSET
};

// ScriptStruct ShaderCore.DeviceRenderConfig
// 0x0078
struct FDeviceRenderConfig
{
	struct FName                                       ConfigName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FRenderConfig                               RenderConfig;                                             // 0x0008(0x0070)
};

// ScriptStruct ShaderCore.OverrideRenderConfig
// 0x0004
struct FOverrideRenderConfig
{
	unsigned char                                      bFormatName : 1;                                          // 0x0000(0x0001)
	unsigned char                                      bFeatureLevel : 1;                                        // 0x0000(0x0001)
	unsigned char                                      bQualityType : 1;                                         // 0x0000(0x0001)
	unsigned char                                      bUserQualitySetting : 1;                                  // 0x0000(0x0001)
	unsigned char                                      bMaterialQualityLevel : 1;                                // 0x0000(0x0001)
	unsigned char                                      bPUBGLDR : 1;                                             // 0x0000(0x0001)
	unsigned char                                      bMobileHDR : 1;                                           // 0x0000(0x0001)
	unsigned char                                      bMobileSimplerShader : 1;                                 // 0x0000(0x0001)
	unsigned char                                      bShadowQuality : 1;                                       // 0x0001(0x0001)
	unsigned char                                      bMaxCSMShadowResolution : 1;                              // 0x0001(0x0001)
	unsigned char                                      bMobileEnableHardwarePCF : 1;                             // 0x0001(0x0001)
	unsigned char                                      bMobileEnableIBL : 1;                                     // 0x0001(0x0001)
	unsigned char                                      bMobileEarlyZPass : 1;                                    // 0x0001(0x0001)
	unsigned char                                      bMobileEnableEarlyZDepthBias : 1;                         // 0x0001(0x0001)
	unsigned char                                      bMobileUseAlphaToCoverage : 1;                            // 0x0001(0x0001)
	unsigned char                                      bMobileBypassTranslucentMaterialPointLight : 1;           // 0x0001(0x0001)
	unsigned char                                      bMobileMSAA : 1;                                          // 0x0002(0x0001)
	unsigned char                                      bAllowStaticLighting : 1;                                 // 0x0002(0x0001)
	unsigned char                                      bSupportAllShaderPermutations : 1;                        // 0x0002(0x0001)
	unsigned char                                      bSupportLowQualityLightmaps : 1;                          // 0x0002(0x0001)
	unsigned char                                      bMobileEnableVertexPointLight : 1;                        // 0x0002(0x0001)
	unsigned char                                      bMobileFallbackMSAAToFXAA : 1;                            // 0x0002(0x0001)
	unsigned char                                      bIndirectLightingCache : 1;                               // 0x0002(0x0001)
	unsigned char                                      bMobileNumDynamicPointLights : 1;                         // 0x0002(0x0001)
	unsigned char                                      bRHISupportsTexLod : 1;                                   // 0x0003(0x0001)
	unsigned char                                      bRHISupportsHardwarePCF : 1;                              // 0x0003(0x0001)
};

// ScriptStruct ShaderCore.MapRenderConfig
// 0x0098
struct FMapRenderConfig
{
	struct FName                                       ConfigName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MapName;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // 0x0010(0x0010) (ZeroConstructor)
	struct FOverrideRenderConfig                       OverrideRenderConfig;                                     // 0x0020(0x0004) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FRenderConfig                               RenderConfig;                                             // 0x0028(0x0070)
};

// ScriptStruct ShaderCore.ShaderGroupDesc
// 0x0040
struct FShaderGroupDesc
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (ZeroConstructor, Config)
	struct FString                                     Parent;                                                   // 0x0018(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
};

// ScriptStruct ShaderCore.ShaderLevel
// 0x0020 (0x0060 - 0x0040)
struct FShaderLevel : public FShaderGroupDesc
{
	TArray<struct FString>                             Include;                                                  // 0x0040(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             Quality;                                                  // 0x0050(0x0010) (ZeroConstructor, Config)
};

// ScriptStruct ShaderCore.ShaderPak
// 0x0020 (0x0060 - 0x0040)
struct FShaderPak : public FShaderGroupDesc
{
	TArray<struct FString>                             Include;                                                  // 0x0040(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             Exclude;                                                  // 0x0050(0x0010) (ZeroConstructor, Config)
};

}

