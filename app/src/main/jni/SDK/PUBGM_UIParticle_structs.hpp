#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum UIParticle.EUIParticlePropertyType
enum class EUIParticlePropertyType : uint8_t
{
	EUIParticlePropertyType__Float = 0,
	EUIParticlePropertyType__FloatRange = 1,
	EUIParticlePropertyType__FloatCurve = 2,
	EUIParticlePropertyType__FloatCurveRange = 3,
	EUIParticlePropertyType__Vector2D = 4,
	EUIParticlePropertyType__Vector2DRange = 5,
	EUIParticlePropertyType__LinearColorCurve = 6,
	EUIParticlePropertyType__LinearColorCurveRange = 7,
	EUIParticlePropertyType__EUIParticlePropertyType_MAX = 8
};


// Enum UIParticle.EParticleDrawEffect
enum class EParticleDrawEffect : uint8_t
{
	EParticleDrawEffect__None      = 0,
	EParticleDrawEffect__NoBlending = 1,
	EParticleDrawEffect__PreMultipliedAlpha = 2,
	EParticleDrawEffect__NoGamma   = 3,
	EParticleDrawEffect__InvertAlpha = 4,
	EParticleDrawEffect__NoPixelSnapping = 5,
	EParticleDrawEffect__DisabledEffect = 6,
	EParticleDrawEffect__IgnoreTextureAlpha = 7,
	EParticleDrawEffect__ReverseGamma = 8,
	EParticleDrawEffect__EParticleDrawEffect_MAX = 9
};


// Enum UIParticle.EPositionType
enum class EPositionType : uint8_t
{
	EPositionType__FREE            = 0,
	EPositionType__RELATIVE        = 1,
	EPositionType__EPositionType_MAX = 2
};


// Enum UIParticle.EEmitterType
enum class EEmitterType : uint8_t
{
	EEmitterType__Gravity          = 0,
	EEmitterType__Radial           = 1,
	EEmitterType__Curve            = 2,
	EEmitterType__EEmitterType_MAX = 3
};


// Enum UIParticle.ECurveType
enum class ECurveType : uint8_t
{
	ECurveType__ParticleLifePercent = 0,
	ECurveType__ParticleLifeTime   = 1,
	ECurveType__EmitLifeTime       = 2,
	ECurveType__ECurveType_MAX     = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UIParticle.UIParticleEmitterInfo
// 0x0018
struct FUIParticleEmitterInfo
{
	bool                                               Disable;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ActiveDelay;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UUIParticleEmitterAsset*                     Asset;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UIParticle.Range_Float
// 0x0008
struct FRange_Float
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UIParticle.UIParticleFloatCurve
// 0x0078
struct FUIParticleFloatCurve
{
	struct FRichCurve                                  CurveData;                                                // 0x0000(0x0070) (Edit)
	ECurveType                                         CurveType;                                                // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Loop;                                                     // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0072(0x0006) MISSED OFFSET
};

// ScriptStruct UIParticle.Range_FloatCurve
// 0x00F0
struct FRange_FloatCurve
{
	struct FUIParticleFloatCurve                       Min;                                                      // 0x0000(0x0078) (Edit)
	struct FUIParticleFloatCurve                       Max;                                                      // 0x0078(0x0078) (Edit)
};

// ScriptStruct UIParticle.Range_Vector2D
// 0x0014
struct FRange_Vector2D
{
	struct FVector2D                                   Min;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   Max;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               RandomKey_X_Y;                                            // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct UIParticle.UIParticleLinearColorCurve
// 0x01C8
struct FUIParticleLinearColorCurve
{
	struct FRichCurve                                  ColorCurves[0x4];                                         // 0x0000(0x0070) (Edit)
	ECurveType                                         CurveType;                                                // 0x01C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Loop;                                                     // 0x01C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x01C2(0x0006) MISSED OFFSET
};

// ScriptStruct UIParticle.Range_LinearColorCurve
// 0x0398
struct FRange_LinearColorCurve
{
	struct FUIParticleLinearColorCurve                 Min;                                                      // 0x0000(0x01C8) (Edit)
	struct FUIParticleLinearColorCurve                 Max;                                                      // 0x01C8(0x01C8) (Edit)
	bool                                               RandomKey_R_G;                                            // 0x0390(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RandomKey_R_B;                                            // 0x0391(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RandomKey_R_A;                                            // 0x0392(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RandomKey_G_B;                                            // 0x0393(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RandomKey_G_A;                                            // 0x0394(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RandomKey_B_A;                                            // 0x0395(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0396(0x0002) MISSED OFFSET
};

// ScriptStruct UIParticle.UIParticleProperty
// 0x06F8
struct FUIParticleProperty
{
	EUIParticlePropertyType                            Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FloatValue;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRange_Float                                FloatRangeValue;                                          // 0x0008(0x0008) (Edit, IsPlainOldData)
	struct FUIParticleFloatCurve                       FloatCurveValue;                                          // 0x0010(0x0078) (Edit)
	struct FRange_FloatCurve                           FloatCurveRangeValue;                                     // 0x0088(0x00F0) (Edit)
	struct FVector2D                                   Vector2DValue;                                            // 0x0178(0x0008) (Edit, IsPlainOldData)
	struct FRange_Vector2D                             Vector2DRangeValue;                                       // 0x0180(0x0014) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	struct FUIParticleLinearColorCurve                 LinearColorCurveValue;                                    // 0x0198(0x01C8) (Edit)
	struct FRange_LinearColorCurve                     LinearColorCurveRangeValue;                               // 0x0360(0x0398) (Edit)
};

// ScriptStruct UIParticle.Posotion_Vector2DCurve
// 0x0DF0
struct FPosotion_Vector2DCurve
{
	struct FUIParticleProperty                         X;                                                        // 0x0000(0x06F8) (Edit)
	struct FUIParticleProperty                         Y;                                                        // 0x06F8(0x06F8) (Edit)
};

// ScriptStruct UIParticle.ChildEmitter
// 0x0018
struct FChildEmitter
{
	float                                              ActivityInParentLifeTime;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FollowParentPosition;                                     // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              FollowParentSpeedPercent;                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ZOrderOffset;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUIParticleEmitterAsset*                     ChildrenAsset;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UIParticle.ScalarParamCurve
// 0x0700
struct FScalarParamCurve
{
	struct FName                                       ScalarParamName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FUIParticleProperty                         Value;                                                    // 0x0008(0x06F8) (Edit)
};

// ScriptStruct UIParticle.EasyParticleChildEmitterArray
// 0x0038
struct FEasyParticleChildEmitterArray
{
	class UUIParticleEmitterAsset*                     ChildrenAsset;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   EmitterStartTime;                                         // 0x0008(0x0008)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct UIParticle.Size_Vector2DCurve
// 0x0DF0
struct FSize_Vector2DCurve
{
	struct FUIParticleProperty                         Min;                                                      // 0x0000(0x06F8) (Edit)
	struct FUIParticleProperty                         Max;                                                      // 0x06F8(0x06F8) (Edit)
};

// ScriptStruct UIParticle.ScalarParamFloat
// 0x0010
struct FScalarParamFloat
{
	struct FName                                       ScalarParamName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRange_Float                                Value;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct UIParticle.LerpKeyColor
// 0x0010
struct FLerpKeyColor
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct UIParticle.LerpKeyVector2D
// 0x0008
struct FLerpKeyVector2D
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

}

