#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UIParticle.UIParticle
// 0x0030 (0x0130 - 0x0100)
class UUIParticle : public UWidget
{
public:
	class UUIParticleAsset*                            Asset;                                                    // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    EventOnEnd;                                               // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bPlayParticle : 1;                                        // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               IsPlaying;                                                // 0x0119(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x011A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UIParticle.UIParticle");
		return pStaticClass;
	}


	void StopEmit();
	void Stop();
	void SetPlayParticle(bool InPlayParticle);
	void Play();
};


// Class UIParticle.UIParticleAsset
// 0x0010 (0x0038 - 0x0028)
class UUIParticleAsset : public UObject
{
public:
	TArray<struct FUIParticleEmitterInfo>              Emitters;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UIParticle.UIParticleAsset");
		return pStaticClass;
	}

};


// Class UIParticle.UIParticleEmitter
// 0x0030 (0x0130 - 0x0100)
class UUIParticleEmitter : public UWidget
{
public:
	class UUIParticleEmitterAsset*                     Asset;                                                    // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    EventOnEnd;                                               // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bPlayParticle : 1;                                        // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               IsPlaying;                                                // 0x0119(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x011A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UIParticle.UIParticleEmitter");
		return pStaticClass;
	}


	void StopEmit();
	void Stop();
	void SetPlayParticle(bool InPlayParticle);
	void Play();
};


// Class UIParticle.UIParticleEmitterAsset
// 0xBCA8 (0xBCD0 - 0x0028)
class UUIParticleEmitterAsset : public UObject
{
public:
	EEmitterType                                       EmitterType;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              EmitSeconds;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FUIParticleProperty                         MaxParticleCount;                                         // 0x0030(0x06F8) (Edit)
	struct FUIParticleProperty                         SpawnParticlePerSecond;                                   // 0x0728(0x06F8) (Edit)
	struct FUIParticleProperty                         ParticleEmitAngle;                                        // 0x0E20(0x06F8) (Edit)
	struct FRange_Vector2D                             EmitPosRange;                                             // 0x1518(0x0014) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x152C(0x0004) MISSED OFFSET
	struct FPosotion_Vector2DCurve                     EmitPosition;                                             // 0x1530(0x0DF0) (Edit)
	bool                                               AutoEmitPosRange;                                         // 0x2320(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AutoScale;                                                // 0x2321(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ScaleByX;                                                 // 0x2322(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x2323(0x0001) MISSED OFFSET
	struct FVector2D                                   DesignSize;                                               // 0x2324(0x0008) (Edit, IsPlainOldData)
	EPositionType                                      PositionType;                                             // 0x232C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x232D(0x0003) MISSED OFFSET
	struct FUIParticleProperty                         LifeSpan;                                                 // 0x2330(0x06F8) (Edit)
	struct FUIParticleProperty                         Size;                                                     // 0x2A28(0x06F8) (Edit)
	struct FUIParticleProperty                         Pivot;                                                    // 0x3120(0x06F8) (Edit)
	struct FUIParticleProperty                         RotationStart;                                            // 0x3818(0x06F8) (Edit)
	struct FUIParticleProperty                         RotationSpeed;                                            // 0x3F10(0x06F8) (Edit)
	struct FUIParticleProperty                         Color;                                                    // 0x4608(0x06F8) (Edit)
	class UObject*                                     ResourceObject;                                           // 0x4D00(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RotationFollowSpeed;                                      // 0x4D08(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseSeparateSize;                                          // 0x4D09(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x4D0A(0x0006) MISSED OFFSET
	struct FUIParticleProperty                         Gravity;                                                  // 0x4D10(0x06F8) (Edit)
	struct FUIParticleProperty                         StartSpeed;                                               // 0x5408(0x06F8) (Edit)
	struct FUIParticleProperty                         AirResistance;                                            // 0x5B00(0x06F8) (Edit)
	struct FUIParticleProperty                         RadialAcceleration;                                       // 0x61F8(0x06F8) (Edit)
	struct FUIParticleProperty                         TangentialAcceleration;                                   // 0x68F0(0x06F8) (Edit)
	struct FUIParticleProperty                         Radius;                                                   // 0x6FE8(0x06F8) (Edit)
	struct FUIParticleProperty                         DegreePerSecond;                                          // 0x76E0(0x06F8) (Edit)
	struct FUIParticleProperty                         PositionX;                                                // 0x7DD8(0x06F8) (Edit)
	struct FUIParticleProperty                         PositionY;                                                // 0x84D0(0x06F8) (Edit)
	TArray<struct FChildEmitter>                       ChildrenEmitters;                                         // 0x8BC8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FScalarParamCurve>                   ScalarParams;                                             // 0x8BD8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FScalarParamCurve>                   ScalarParamsWhenStart;                                    // 0x8BE8(0x0010) (Edit, ZeroConstructor)
	EParticleDrawEffect                                DrawEffect;                                               // 0x8BF8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseScaleFollowSpeedDirection;                             // 0x8BF9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x8BFA(0x0006) MISSED OFFSET
	struct FUIParticleProperty                         ScaleFollowSpeedDirection;                                // 0x8C00(0x06F8) (Edit)
	bool                                               UseScaleFollowSpeedVertical;                              // 0x92F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x92F9(0x0007) MISSED OFFSET
	struct FUIParticleProperty                         ScaleFollowSpeedVertical;                                 // 0x9300(0x06F8) (Edit)
	struct FUIParticleProperty                         DirectionScale;                                           // 0x99F8(0x06F8) (Edit)
	struct FUIParticleProperty                         VerticalDirectionScale;                                   // 0xA0F0(0x06F8) (Edit)
	struct FUIParticleProperty                         SineDirectionStart;                                       // 0xA7E8(0x06F8) (Edit)
	struct FUIParticleProperty                         SineDirectionSpeed;                                       // 0xAEE0(0x06F8) (Edit)
	struct FUIParticleProperty                         SineDirectionRange;                                       // 0xB5D8(0x06F8) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UIParticle.UIParticleEmitterAsset");
		return pStaticClass;
	}

};


}

