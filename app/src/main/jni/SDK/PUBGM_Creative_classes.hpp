#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Creative.CreativeAbilitySystemComponent
// 0x00A8 (0x1260 - 0x11B8)
class UCreativeAbilitySystemComponent : public USAbilitySystemComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x11B8(0x0038) MISSED OFFSET
	float                                              BuildDistance;                                            // 0x11F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LandOnOffsetZ;                                            // 0x11F4(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              GetLocationActorsToIgnore;                                // 0x11F8(0x0010) (ZeroConstructor)
	float                                              LandHitPointZ;                                            // 0x1208(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WaterHeight;                                              // 0x120C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x1210(0x000C) MISSED OFFSET
	bool                                               bOpenLandPosCheckDebug;                                   // 0x121C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSnapTransValid;                                          // 0x121D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSnapGridEnable;                                          // 0x121E(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bForceLandOnGround;                                       // 0x121F(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    BuildingRotation;                                         // 0x1220(0x000C) (IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x122C(0x000C) (IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // 0x1238(0x000C) (IsPlainOldData)
	struct FVector                                     BuildingScale;                                            // 0x1244(0x000C) (IsPlainOldData)
	struct FVector                                     RelativeScale;                                            // 0x1250(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x125C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAbilitySystemComponent");
		return pStaticClass;
	}


	void UpdateGhostBuildingTransform();
	void SetSnapTargetTransform(struct FTransform* SnapTargetTransform);
	void SetLuaGhostBuildingTransformScale(float X, float Y, float Z);
	void SetLuaGhostBuildingTransformRotation(float Roll, float Yaw, float Pitch);
	void SetLuaGhostBuildingTransformLocation(float X, float Y, float Z);
	bool ReceiveGetSnapTargetTransform();
	float GetSnappedLocAxis(float Value);
	int GetSetupBuildingID();
	struct FTransform GetGhostBuildingTransform();
	struct FString GetBuildingInstanceID();
	float GetBuildDistance();
};


// Class Creative.CreativeModeActorInteractionComponent
// 0x0050 (0x0228 - 0x01D8)
class UCreativeModeActorInteractionComponent : public ULuaActorComponent
{
public:
	bool                                               bSectorCheckEnabled;                                      // 0x01D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01D9(0x0003) MISSED OFFSET
	float                                              SectorCheckCD;                                            // 0x01DC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bTransformCrossHairCheckEnabled;                          // 0x01E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01E1(0x0003) MISSED OFFSET
	float                                              TransformCrossHairCheckCD;                                // 0x01E4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x40];                                      // 0x01E8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeActorInteractionComponent");
		return pStaticClass;
	}


	void SortCanEditParamsObjs();
	void SetCrossHairTransformObjInstanceID(const struct FString& InstanceID);
	void SetCrossHairSelectedObjInstanceID(const struct FString& InstanceID);
	float GetSectorCheckIntervalCfg();
	float GetSectorCheckDistance();
	float GetSectorCheckAngle();
	float GetPlayerHalfHeight();
	float GetCrossHairCheckIntervalCfg();
	float GetCrossHairCheckDistanceCfg();
	void ClearCanEditParamsObjs();
	void AddCanEditObject(class UObject* uCanEditObject, float Angle, float Distance);
};


// Class Creative.CreativeModeManagerBase
// 0x0000 (0x0110 - 0x0110)
class UCreativeModeManagerBase : public USTExtraManagerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeManagerBase");
		return pStaticClass;
	}

};


// Class Creative.CreativeModeAssetManager
// 0x0058 (0x0168 - 0x0110)
class UCreativeModeAssetManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0110(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeAssetManager");
		return pStaticClass;
	}


	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void ReceiveInitAssetInfo(int AssetId);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	struct FString GetObbyMeshPath(int AssetId);
	struct FString GetMaterialPath(int MaterialID);
	class UCreativeModeAssetManager* Get(class UObject* WorldContext);
	void AddAssetInfo(int AssetId, const struct FCreativeAssetInfo& AssetInfo);
};


// Class Creative.CreativeModeBackpackUtils
// 0x0000 (0x0028 - 0x0028)
class UCreativeModeBackpackUtils : public UBackpackUtils
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeBackpackUtils");
		return pStaticClass;
	}


	int ResCanAddToBackpackNum(class UBackpackComponent* BackpackComponent, int resID, int AddNum);
};


// Class Creative.CreativeModeBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UCreativeModeBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeBlueprintLibrary");
		return pStaticClass;
	}


	void TransformMultiplyBy(const struct FTransform& M, struct FTransform* Source);
	void TransformBounds(const struct FTransform& M, struct FBoxSphereBounds* Bounds);
	void SetStaticMeshMobility(class UStaticMeshComponent* StaticMeshComponent, TEnumAsByte<EComponentMobility> NewMobility);
	void SetSpeedOverLimit(class AActor* Actor);
	void SetInstanceValue(class UObject* WorldContextObject, const struct FString& InstanceID, const struct FString& Key, const struct FString& Value);
	bool SetEditorActorTransform(class UObject* WorldContextObject, const struct FString& InstanceID, const struct FTransform& NewTransform);
	void SetCollisionMobility(class UShapeComponent* Component, TEnumAsByte<EComponentMobility> NewMobility);
	void SaveAssetStringToFile(const struct FString& String, const struct FString& Filename);
	void RenameObject(class UObject* Object, const struct FString& NewName);
	struct FQuat QuatCross(const struct FQuat& Quat1, const struct FQuat& Quat2);
	struct FString ProjectSavedDir();
	void MinAreaRectangle(class UObject* WorldContextObject, TArray<struct FVector> InPoints, const struct FVector& SampleSurfaceNormal, bool bDebugDraw, struct FRotator* OutRectRotation, float* OutRectLengthX, float* OutRectLengthY, struct FVector* OutRectCenter, TArray<int>* PolyVertIndices);
	struct FString MD5HashByteArray(TArray<unsigned char> inArray);
	struct FString MD5HashAnsiString(const struct FString& str);
	struct FString LoadAssetFileToString(const struct FString& Filename);
	bool IsCreativeMode(class UWorld* World);
	void IgnoreClientMovementErrorChecksAndCorrection(class ACharacter* Charcter, bool bIsIgnore);
	int GetReplicateAddDataArrayVaildNum(class UObject* WorldContextObject, const struct FReplicateAddDataArray& ReplicateAddDataArray, int StartIndex);
	void GetObjectScreenPos(class UObject* WorldContextObject, const struct FString& InstanceID, struct FVector2D* pos);
	TMap<struct FString, class UObject*> GetObjectMap(class UObject* WorldContextObject);
	struct FString GetGameTypeAsString(ECreativeModeGameType GameType);
	void GetActorMeshBoundsByTag(class AActor* Actor, const struct FString& IgnoreTag, const struct FString& IncludeTag, struct FVector* Origin, struct FVector* BoxExtent);
	struct FString GenerateGuid();
	void DrawLine(const struct FPaintContext& InContext, const struct FVector2D& Start, const struct FVector2D& End, const struct FLinearColor& LineColor, int LayerOffset, float LineThickness, bool bAntiAlias);
	void DrawGrids(const struct FPaintContext& InContext, float CellSize, int CellCountX, int CellCountY, float PosOffsetX, float PosOffsetY, const struct FLinearColor& LineColor, float LineThickness, bool bAntiAlias, int LayerOffset);
	void DrawGridCell(const struct FPaintContext& InContext, float CellSize, int CellIndexX, int CellIndexY, float PosOffsetX, float PosOffsetY, const struct FLinearColor& LineColor, int LayerOffset);
	struct FString DestroyInstance(class UObject* WorldContextObject, const struct FString& InstanceID);
	void ClearGrassByMaskTexture(class UObject* WorldContextObject, class UTexture2D* MaskTexture, const struct FVector2D& WorldStart, const struct FVector2D& WorldEnd);
	bool BoxOverlapComponents(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<int> ObjectTypes, class UClass* CompClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComps);
	bool BoxOverlapActors(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<int> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	class AActor* BeginDeferredActorSpawnWithName(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& SpawnTransform, const struct FName& Name, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner);
	void AddOnScreenDebugMessage(const struct FString& Msg);
};


// Class Creative.CreativeModeCheatManager
// 0x0000 (0x0130 - 0x0130)
class UCreativeModeCheatManager : public UGMCheatManager
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeCheatManager");
		return pStaticClass;
	}


	void SetInstanceValue(const struct FString& InstanceID, const struct FString& Key, const struct FString& Value);
	void SetCurrentGameType(ECreativeModeGameType NewGameType);
	void DestroyInstance(const struct FString& InstanceID);
};


// Class Creative.CreativeModeLiteComponent
// 0x0120 (0x0160 - 0x0040)
class UCreativeModeLiteComponent : public ULiteComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0040(0x0070) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x00B0(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0100(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<class UObject*, struct FCreativePoolObjectRecordInfo> PoolObjectRecordMap;                                      // 0x0110(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeLiteComponent");
		return pStaticClass;
	}


	void OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	class UObject* GetObjectFromPool(int PoolID, class UObject* NewOuter, struct FString* InName);
};


// Class Creative.CreativeModeGameModeBaseComponent
// 0x0010 (0x0170 - 0x0160)
class UCreativeModeGameModeBaseComponent : public UCreativeModeLiteComponent
{
public:
	ECreativeModeGameType                              GameType;                                                 // 0x0160(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
	class UCreativeModeGameStateBaseComponent*         GameStateComponent;                                       // 0x0168(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameModeBaseComponent");
		return pStaticClass;
	}


	void SetGameStateComponent(class UCreativeModeGameStateBaseComponent* NewGameStateComponent);
	void ReceivePostInitializeComponents();
	ECreativeModeGameType GetGameType();
	class ACreativeModeGameMode* GetGameMode();
	class AActor* FindPlayerStartOverride(class AController* Player, const struct FString& IncomingName, bool bIsRevive);
};


// Class Creative.CreativeModeEditorModeComponent
// 0x0000 (0x0170 - 0x0170)
class UCreativeModeEditorModeComponent : public UCreativeModeGameModeBaseComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeEditorModeComponent");
		return pStaticClass;
	}

};


// Class Creative.CreativeModeEditorObject
// 0x00E8 (0x05A0 - 0x04B8)
class ACreativeModeEditorObject : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04B8(0x0018) MISSED OFFSET
	ECreativeModeActorState                            ActorState;                                               // 0x04D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04D1(0x0007) MISSED OFFSET
	TArray<struct FCreativeEditorObjectEffectMesheInfo> CachedEffectMesheInfos;                                   // 0x04D8(0x0010) (ZeroConstructor)
	TMap<class UObject*, struct FCreativePoolObjectRecordInfo> PoolObjectRecordMap;                                      // 0x04E8(0x0050) (ZeroConstructor)
	struct FEditorObjectLiteComponentTickFunction      LiteComponentActorTick;                                   // 0x0538(0x0058) (Edit, DisableEditOnInstance)
	TArray<class ULiteComponent*>                      LiteComponents;                                           // 0x0590(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeEditorObject");
		return pStaticClass;
	}


	void UnregisterLiteComponent(class ULiteComponent* Component, bool Destroy);
	void ShowSelectedEffect(bool ShowEff, const struct FLinearColor& OutlineColor, float OutlineThickness);
	void ShowOutlineEffect(bool ShowEff, class UMaterialInstance* Material, const struct FString& IgnoreTag);
	void SetLiteComponentTickEnable(bool bEnabled);
	void SetActorState(ECreativeModeActorState NewState);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceivePostBeginPlay();
	bool ReceiveIsDedicatedServer();
	void ReceiveInitializeLiteComponent();
	bool ReceiveHasAuthority();
	void OnRepActorStateOverride(ECreativeModeActorState NewState);
	void OnRep_ActorState(ECreativeModeActorState LastState);
	class UObject* GetObjectFromPool(int PoolID, class UObject* NewOuter, struct FString* InName);
	ECreativeModeActorState GetActorState();
	class ULiteComponent* FindLiteComponentByClass(class UClass* ComponentClass);
	bool CanEditParameters();
};


// Class Creative.CreativeModeGameStateBaseComponent
// 0x0008 (0x0168 - 0x0160)
class UCreativeModeGameStateBaseComponent : public UCreativeModeLiteComponent
{
public:
	ECreativeModeGameType                              GameType;                                                 // 0x0160(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0161(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameStateBaseComponent");
		return pStaticClass;
	}


	void ReceivePostInitializeComponents();
	ECreativeModePlayState GetPlayState();
	ECreativeModeGameType GetGameType();
	class ACreativeModeGameState* GetGameState();
};


// Class Creative.CreativeModeEditorStateComponent
// 0x0000 (0x0168 - 0x0168)
class UCreativeModeEditorStateComponent : public UCreativeModeGameStateBaseComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeEditorStateComponent");
		return pStaticClass;
	}

};


// Class Creative.CreativeModeGameMode
// 0x0130 (0x25B0 - 0x2480)
class ACreativeModeGameMode : public ABattleRoyaleGameModeTeam
{
public:
	class UCreativeModeGameModeBaseComponent*          CurrentModeComponent;                                     // 0x2480(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UClass*>                              GameModeComponentClassArray;                              // 0x2488(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      GameModeComponentClass;                                   // 0x2498(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, struct FGameModeParam>        MapPlaneRouteConfigs;                                     // 0x24A0(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, struct FString>               MapVehicleClassPathConfigs;                               // 0x24F0(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	ECreativeModeGameType                              EditorStartupGameType;                                    // 0x2540(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x2541(0x0007) MISSED OFFSET
	struct FGameModeLiteComponentTickFunction          LiteComponentActorTick;                                   // 0x2548(0x0058) (Edit, DisableEditOnInstance)
	TArray<class ULiteComponent*>                      LiteComponents;                                           // 0x25A0(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameMode");
		return pStaticClass;
	}


	void UnregisterLiteComponent(class ULiteComponent* Component);
	void SetLiteComponentTickEnable(bool bEnabled);
	void SetItemGenerate(bool bIsOpen);
	void SetCurrentGameType(ECreativeModeGameType NewGameType);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceiveInitializeLiteComponent();
	bool IsRestartPlayerUsePawnRotation();
	class UCreativeModeGameModeBaseComponent* GetCurrentModeComponent();
	int GetCreativeModeRealTeamNum();
	TArray<int> GetCreativeModeRealTeamIDs();
	class ULiteComponent* FindLiteComponentByClass(class UClass* ComponentClass);
	class AActor* CreativeModeFindPlayerStart(class AController* Player, const struct FString& IncomingName, bool bIsRevive);
};


// Class Creative.CreativeModeGameModeComponent
// 0x0030 (0x01A0 - 0x0170)
class UCreativeModeGameModeComponent : public UCreativeModeGameModeBaseComponent
{
public:
	class UClass*                                      RaceCheckPointComponentClass;                             // 0x0170(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCreativeModeRaceCheckPointLiteComponent*    RaceCheckPointComponent;                                  // 0x0178(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      OccupationAreaComponentClass;                             // 0x0180(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCreativeOccupationAreaLiteComponent*        OccupationAreaComponent;                                  // 0x0188(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      TeleporterComponentClass;                                 // 0x0190(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCreativeModeLiteComponent*                  TeleporterComponent;                                      // 0x0198(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameModeComponent");
		return pStaticClass;
	}


	void ReceiveCallPlayStateFunction();
};


// Class Creative.CreativeModeGameObject
// 0x00F0 (0x0118 - 0x0028)
class UCreativeModeGameObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	TMap<class UObject*, struct FCreativePoolObjectRecordInfo> PoolObjectRecordMap;                                      // 0x00B8(0x0050) (ZeroConstructor)
	TArray<class ULiteComponent*>                      LiteComponents;                                           // 0x0108(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameObject");
		return pStaticClass;
	}


	void UnregisterLiteComponent(class ULiteComponent* Component, bool Destroy);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceivePostBeginPlay();
	bool ReceiveIsDedicatedServer();
	bool ReceiveHasAuthority();
	void ReceiveEndPlay();
	void ReceiveBeginPlay();
	class UObject* GetObjectFromPool(int PoolID, class UObject* NewOuter, struct FString* InName);
};


// Class Creative.CreativeModeGameParameterManager
// 0x00D0 (0x01E0 - 0x0110)
class UCreativeModeGameParameterManager : public UCreativeModeManagerBase
{
public:
	struct FCreativeModeGameParameterContainer         GameParameterContainer;                                   // 0x0110(0x00C8) (Net, Transient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01D8(0x0004) MISSED OFFSET
	int                                                SingleSerializeNum;                                       // 0x01DC(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameParameterManager");
		return pStaticClass;
	}


	void RemoveGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID);
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnReceivePreGameParameterRemove(const struct FString& ParameterKey, const struct FString& TemplateID);
	void OnReceivePostGameParameterChange(const struct FString& ParameterKey, const struct FString& TemplateID, const struct FString& Desc);
	void OnReceivePostGameParameterAdd(const struct FString& ParameterKey, const struct FString& TemplateID, const struct FString& Desc);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	struct FString GetGameParameterDesc(const struct FString& ParameterKey, const struct FString& TemplateID);
	class UCreativeModeGameParameterManager* Get(class UObject* WorldContext);
	void ChangeGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID, const struct FString& Desc);
	void AddGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID, const struct FString& Desc);
};


// Class Creative.CreativeModeGameState
// 0x0098 (0x1430 - 0x1398)
class ACreativeModeGameState : public ASTExtraGameStateBase
{
public:
	unsigned char                                      bIsCreativeMode : 1;                                      // 0x1398(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	ECreativeModeGameType                              CurrentGameType;                                          // 0x1399(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECreativeModeGameType                              InitializeGameType;                                       // 0x139A(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x139B(0x0005) MISSED OFFSET
	class UCreativeModeGameStateBaseComponent*         CurrentStateComponent;                                    // 0x13A0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class UCreativeModeGameStateBaseComponent*         LastStateComponent;                                       // 0x13A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UClass*>                              GameStateComponentClassArray;                             // 0x13B0(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      GameStateComponentClass;                                  // 0x13C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameStateLiteComponentTickFunction         LiteComponentActorTick;                                   // 0x13C8(0x0058) (Edit, DisableEditOnInstance)
	TArray<class ULiteComponent*>                      LiteComponents;                                           // 0x1420(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameState");
		return pStaticClass;
	}


	void UnregisterLiteComponent(class ULiteComponent* Component);
	void SetLiteComponentTickEnable(bool bEnabled);
	void SetCurrentGameType(ECreativeModeGameType NewGameType);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceiveInitializeLiteComponent();
	void OnRep_InitializeGameType(ECreativeModeGameType LastInitializeGameType);
	void OnRep_CurrentStateComponent(class UCreativeModeGameStateBaseComponent* LastComponent);
	bool IsCreativeEditor();
	ECreativeModePlayState GetPlayState();
	bool GetIsOfficialGame();
	bool GetIsEditorMode();
	bool GetIsDemoGame();
	bool GetIsCreative();
	ECreativeModeGameType GetInitializeGameType();
	class UCreativeModeGameStateBaseComponent* GetCurrentStateComponent();
	ECreativeModeGameType GetCurrentGameType();
	class ULiteComponent* FindLiteComponentByClass(class UClass* ComponentClass);
	void ClearInstance();
	void ClearAndReImportInstance();
};


// Class Creative.CreativeModeGameStateComponent
// 0x0028 (0x0190 - 0x0168)
class UCreativeModeGameStateComponent : public UCreativeModeGameStateBaseComponent
{
public:
	class UClass*                                      IntegralMechanismComponentClass;                          // 0x0168(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCreativeModeIntegralMechanismLiteComponent* IntegralMechanismComponent;                               // 0x0170(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RuntimePlayerBattleDataObjectClass;                       // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ACreativeRuntimePlayerBattleDataObject*      RuntimePlayerBattleDataObject;                            // 0x0180(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	ECreativeModePlayState                             CurPlayState;                                             // 0x0188(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0189(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameStateComponent");
		return pStaticClass;
	}


	void SetPlayState(ECreativeModePlayState newPlayState);
	void OnRep_RuntimePlayerBattleDataObject();
	void OnRep_IntegralMechanismComponent();
	void OnRep_CurPlayState();
	ECreativeModePlayState GetPlayState();
};


// Class Creative.CreativeModeGridLevelsManager
// 0x0420 (0x0530 - 0x0110)
class UCreativeModeGridLevelsManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0110(0x0028) MISSED OFFSET
	TArray<struct FString>                             GridLevelList;                                            // 0x0138(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FCreativeModeGridLevelConfig> GridLevelConfigs;                                         // 0x0148(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FCreativeModeGridLevelInfo> GridLevelsMap;                                            // 0x0198(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FIntVector>            ObjectCellIndexMap;                                       // 0x01E8(0x0050) (ZeroConstructor)
	TArray<struct FString>                             AlwaysLoadLevel;                                          // 0x0238(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0248(0x0010) MISSED OFFSET
	bool                                               bStaticMeshObjectBatchSwitch;                             // 0x0258(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAroundRelieveBatchSwitch;                                // 0x0259(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x025A(0x0002) MISSED OFFSET
	float                                              EditorModeUpdateTime;                                     // 0x025C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DelayUpdateBatchTime;                                     // 0x0260(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TickUpdateBatchInterval;                                  // 0x0264(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ReBatchDistance;                                          // 0x0268(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RelieveBatchDistance;                                     // 0x026C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UpdateIsmNumPerFrame;                                     // 0x0270(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2BC];                                     // 0x0274(0x02BC) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGridLevelsManager");
		return pStaticClass;
	}


	void UpdateBatchActorInstances(const struct FString& GridName, int AssetId, int MaterialID, bool ReplaceAll);
	void UnLoadGridLevelsBatchActor(const struct FString& GridName, const struct FIntVector& CellIndex);
	void StaticMeshObjectRelieveBatch(struct FString* InstanceID);
	void StaticMeshObjectReBatch(struct FString* InstanceID);
	bool RemoveObject(const struct FString& InstanceID);
	void ReceiveRegistInstanceValueListener();
	void ReceiveDelayUpdateBatchActorInstances(const struct FString& GridName, int AssetId, int MaterialID, bool ReplaceAll);
	void ReceiveClearAllData();
	bool ReceiveCheckObjectCanBatch(const struct FString& InstanceID);
	void ObjectAddToGridCellMap(const struct FString& GridName, const struct FIntVector& Index, const struct FString& InstanceID);
	void LoadGridLevelsBatchActor(const struct FString& GridName, const struct FIntVector& CellIndex);
	bool IsCreativeEidtMode();
	void GridCellMapRemoveObject(const struct FString& GridName, const struct FIntVector& Index, const struct FString& InstanceID);
	struct FString GetStaticMeshBatchActorPath();
	float GetRelieveBatchDistance();
	float GetReBatchDistance();
	struct FIntVector GetOnCellIndex(const struct FString& GridName, const struct FVector& Location);
	struct FTransform GetObjectTransform(const struct FString& ID);
	ECreativeModeActorStreamingType GetObjectStreamingType(const struct FString& ID);
	struct FString GetObjectRuntimeGrid(const struct FString& ID);
	bool GetObjectIsPrefab(const struct FString& ID);
	int GetObjectAssetID(const struct FString& ID);
	float GetGridLoadingRange(const struct FString& GridName);
	TArray<struct FString> GetGridList();
	struct FString GetDefaultGridName();
	struct FVector2D GetCellWidthHeight(const struct FString& GridName);
	struct FVector GetCellCenterLocation(const struct FString& GridName, const struct FIntVector& CellIndex);
	int GetAxisIndex(float pos, float BlockLenght);
	class UCreativeModeGridLevelsManager* Get(class UObject* WorldContext);
	bool CheckObjectBeRelieveBatch(const struct FString& ID);
	bool CheckObjectBeBatch(const struct FString& ID);
	bool CheckAndRemoveObjectForBatchData(const struct FString& ID);
	bool CheckAndAddObjectToBatchData(const struct FString& ID);
	bool ChangeObjectTransform(const struct FString& InstanceID);
	bool ChangeObjectStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType NewStremaingType);
	bool ChangeObjectMaterialId(const struct FString& InstanceID, int MaterialID);
	bool ChangeObjectIsPrefab(const struct FString& InstanceID, bool bIsPrefab);
	bool AddObjectToGridLevels(const struct FString& InstanceID);
};


// Class Creative.CreativeModeInGameManagerCenter
// 0x0048 (0x0438 - 0x03F0)
class ACreativeModeInGameManagerCenter : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03F0(0x0010) MISSED OFFSET
	TArray<class USTExtraManagerBase*>                 ManagerArray;                                             // 0x0400(0x0010) (ZeroConstructor, Transient)
	TArray<class UClass*>                              ManagerClassArray;                                        // 0x0410(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0420(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeInGameManagerCenter");
		return pStaticClass;
	}

};


// Class Creative.CreativeModeInstanceManager
// 0x02D0 (0x03E0 - 0x0110)
class UCreativeModeInstanceManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0110(0x0040) MISSED OFFSET
	TMap<struct FString, struct FCreativeInstanceDataNode> InstanceTreeData;                                         // 0x0150(0x0050) (ZeroConstructor)
	TMap<uint16_t, struct FCreativeBatchPullDataNode>  DataRequestMap;                                           // 0x01A0(0x0050) (ZeroConstructor)
	TArray<struct FCreativePullDataNode>               DataWaitingRquestQueue;                                   // 0x01F0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0200(0x0010) MISSED OFFSET
	struct FCreativeModeNodeContainer                  InstanceContainer;                                        // 0x0210(0x00C8) (Net, Transient)
	unsigned char                                      UnknownData02[0x50];                                      // 0x02D8(0x0050) MISSED OFFSET
	int                                                ModBinInstanceCount;                                      // 0x0328(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	int                                                SingleSerializeNum;                                       // 0x0330(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SinglePullDataNodeNum;                                    // 0x0334(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DataNodePullInterval;                                     // 0x0338(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DataPullTimeroutInterval;                                 // 0x033C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WaitInstanceReplicatTreeTimeout;                          // 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BuildingResTime;                                          // 0x0344(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BuildingTimeoutCheckInterval;                             // 0x0348(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	TMap<struct FString, struct FCreativeInstancceNode> CppInstanceTree;                                          // 0x0350(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x40];                                      // 0x03A0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeInstanceManager");
		return pStaticClass;
	}


	void UpdateModBinInstanceCount();
	void SetModBinInstanceCount(int Count);
	bool SetInstanceValue(const struct FString& InstanceID, const struct FString& Key, const struct FString& Value);
	void SetInstanceTransform(const struct FString& InstanceID, const struct FTransform& Transform);
	void SendModBinaryDataToReplay(TArray<unsigned char>* InBinaryData);
	void RemoveInstance(const struct FString& ID);
	bool RemoveCppInstanceNode(const struct FString& ID);
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnRep_ModBinInstanceCount();
	void OnReceivePreInstanceRemove(const struct FString& ID);
	void OnReceivePostInstanceChange(const struct FString& ID, TArray<unsigned char> Content);
	void OnReceivePostInstanceAdd(const struct FString& ID, TArray<unsigned char> Content);
	void OnReadyToAddInstance();
	void OnGameTypeChanged(unsigned char LastGameType, unsigned char CurrentGameType);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	bool IsInstanceReplicatTreeReplicateComplete();
	bool IsInstanceDataTreeReplicateComplete();
	bool HasReadyToAddInstance();
	bool HasAuthorityOrReplay();
	int GetModBinInstanceCount();
	bool GetModBinaryDataFromReplay(TArray<unsigned char> InBinaryData);
	int GetInstanceContainerCount();
	struct FCreativeInstancceNode GetCppInstanceNode(const struct FString& ID);
	class UCreativeModeInstanceManager* Get(class UObject* WorldContext);
	struct FString DestroyInstance(const struct FString& InstanceID);
	void ChangeInstance(const struct FString& ID, TArray<unsigned char> Content);
	void ChangeCppInstanceNode(const struct FString& ID, const struct FString& Key, struct FCreativeInstancceNode* Node);
	void AddInstance(const struct FString& ID, TArray<unsigned char> Content);
	void AddCppInstanceNode(const struct FString& ID, struct FCreativeInstancceNode* Node);
	void AddBuildingFlag(const struct FString& ID);
};


// Class Creative.CreativeModeIntegralMechanismComponent
// 0x0010 (0x01E8 - 0x01D8)
class UCreativeModeIntegralMechanismComponent : public ULuaActorComponent
{
public:
	TArray<struct FPlayerIntegralInfo>                 PlayerIntegrals;                                          // 0x01D8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeIntegralMechanismComponent");
		return pStaticClass;
	}


	bool SetPlayerIntegral(const struct FString& UId, int TeamID, int curIntegral, int curStageIntegral, int integralAddSeq);
	void OnRepPlayerIntegralsOverride();
	void OnRep_PlayerIntegrals();
	void ClearPlayerIntegrals();
};


// Class Creative.CreativeModeIntegralMechanismLiteComponent
// 0x0018 (0x0178 - 0x0160)
class UCreativeModeIntegralMechanismLiteComponent : public UCreativeModeLiteComponent
{
public:
	TArray<struct FPlayerIntegralInfo>                 PlayerIntegrals;                                          // 0x0160(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                TestIndex;                                                // 0x0170(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0174(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeIntegralMechanismLiteComponent");
		return pStaticClass;
	}


	bool SetPlayerIntegral(const struct FString& UId, int TeamID, int curIntegral, int curStageIntegral, int integralAddSeq);
	bool PlayerIntegralContains(const struct FString& UId);
	void OnRepPlayerIntegralsOverride();
	void OnRep_TestIndex(int LastIndex);
	void OnRep_PlayerIntegrals();
	void ClearPlayerIntegrals();
};


// Class Creative.CreativeItemGeneratorComponent
// 0x0058 (0x0A28 - 0x09D0)
class UCreativeItemGeneratorComponent : public UItemGeneratorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x09D0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeItemGeneratorComponent");
		return pStaticClass;
	}


	void SetWeightMul(TMap<struct FString, int> Weight);
	void SetAddSpotPercentMul(float percent);
	void ClearWeightMul();
};


// Class Creative.CreativeModeModDataCheckManager
// 0x0000 (0x0110 - 0x0110)
class UCreativeModeModDataCheckManager : public UCreativeModeManagerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeModDataCheckManager");
		return pStaticClass;
	}


	void ReceiveOnPreAddInstance();
	void ReceiveOnPostAddInstance();
	void OnPreAddInstance();
	void OnPostAddInstance();
	class UCreativeModeModDataCheckManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeModeLuaSpectatorPawn
// 0x00D0 (0x0548 - 0x0478)
class ACreativeModeLuaSpectatorPawn : public ASpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0478(0x0060) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x04D8(0x0050) (Net)
	bool                                               IsTopView;                                                // 0x0528(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0529(0x0003) MISSED OFFSET
	int                                                TopViewRotateAngle;                                       // 0x052C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FString                                     LuaFilePath;                                              // 0x0530(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0540(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeLuaSpectatorPawn");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void SetAbilitySystemComponentAvatar();
	void RegistLuaTick(float TickInterval);
	void MoveRight(float Val);
	void MoveForward(float Val);
	class USpringArmComponent* GetActiveSpringArm();
};


// Class Creative.CreativeModeStaticMeshBatchActor
// 0x00A8 (0x0560 - 0x04B8)
class ACreativeModeStaticMeshBatchActor : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x04B8(0x0048) MISSED OFFSET
	struct FCreativeBatchInstancedStaticMesh           InstancedStaticMeshInfo;                                  // 0x0500(0x0058)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0558(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeStaticMeshBatchActor");
		return pStaticClass;
	}


	void SetISMStaticMeshAndMaterials(class UInstancedStaticMeshComponent* InstancedStaticMeshComponent, int AssetId, int StaticMeshIndex, int MaterialID);
	struct FCreativeBatchStaticMeshInfo GetBatchStaticMeshInfo(class UInstancedStaticMeshComponent* InstancedStaticMeshComponent);
};


// Class Creative.CreativeModeNavigationManager
// 0x0050 (0x0160 - 0x0110)
class UCreativeModeNavigationManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0110(0x0050) UNKNOWN PROPERTY: SetProperty Creative.CreativeModeNavigationManager.CachedActors

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeNavigationManager");
		return pStaticClass;
	}


	void SetDynamicModeEnable(bool bEnable);
	void ReceiveOnUnInit();
	void ReceiveOnInit();
	void RebuildDynamicTiles(TArray<class AActor*>* Actors);
	int GetDynamicTilesCount();
	bool GetDynamicTileMemCost(int* Total, int* OctTree, int* TileCache, int* DynamicTile, int* DynamicTileCount);
	TArray<class AActor*> GetAllAssociateActors();
	class UCreativeModeNavigationManager* Get(class UObject* WorldContext);
	void ExportDynamicTile(struct FString* Path);
	void ClearNavCollision();
	void ClearDynamicOctreeData();
	void ClearDynamicNavMesh();
	void ClearAssociateActors();
	TArray<struct FVector> CalSamplePointsInBox(const struct FVector& BoxMin, const struct FVector& BoxMax, float StepSize, int MaxPoints);
	TArray<struct FVector> CalSamplePoints(const struct FVector& StartPos, float StepSize, int MaxPoints);
	void AddNavAffectedObjects(TArray<class AActor*> Actors);
	void AddNavAffectedObject(class AActor* Actor);
};


// Class Creative.CreativeModeObjectFuncComponent
// 0x0000 (0x0160 - 0x0160)
class UCreativeModeObjectFuncComponent : public UCreativeModeLiteComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeObjectFuncComponent");
		return pStaticClass;
	}

};


// Class Creative.CreativeModeObjectInterface
// 0x0000 (0x0028 - 0x0028)
class UCreativeModeObjectInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeObjectInterface");
		return pStaticClass;
	}


	void ReceiveOnPostSetInstanceId(const struct FString& InstanceID);
};


// Class Creative.CreativeModeObjectManager
// 0x00F0 (0x0200 - 0x0110)
class UCreativeModeObjectManager : public UCreativeModeManagerBase
{
public:
	TMap<struct FString, class UObject*>               ObjectMap;                                                // 0x0110(0x0050) (ZeroConstructor, Transient)
	TMap<struct FString, bool>                         ObjectActiveMap;                                          // 0x0160(0x0050) (ZeroConstructor)
	bool                                               bContainsSpawnCompleteCallback;                           // 0x01B0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bReordering;                                              // 0x01B1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01B2(0x0002) MISSED OFFSET
	int                                                Client_FrameSpawnNum;                                     // 0x01B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Ds_FrameSpawnNum;                                         // 0x01B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x44];                                      // 0x01BC(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeObjectManager");
		return pStaticClass;
	}


	void SpawnObjectForStreaming(const struct FString& InstanceID);
	void SpawnObjectForBatchManager(struct FString* InstanceID, struct FTransform* SpawnTransform);
	class UObject* SpawnObject(const struct FString& InstanceID, const struct FString& Path, const struct FTransform& SpawnTransform);
	bool SetObjectTempStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType TempStreamingType);
	bool ResetObjectStreamingType(const struct FString& InstanceID);
	bool RemoveSpawnObjectInfoFormQueue(struct FString* InstanceID);
	void RemovePhysicsObject(const struct FString& InstanceID);
	bool RemoveObject(const struct FString& InstanceID);
	void ReceiveUnregisterObject(const struct FString& InstanceID, class UObject* NewObject);
	void ReceiveRegisterObject(const struct FString& InstanceID, class UObject* NewObject);
	void ReceiveClearAllObjects();
	void OnObjectSpawnComplete(const struct FString& ID);
	struct FTransform GetObjectTransform(const struct FString& ID);
	uint32_t GetObjectNum();
	struct FString GetObjectAssetPath(const struct FString& ID);
	int GetObjectAssetID(const struct FString& ID);
	class UObject* GetObject(const struct FString& InstanceID);
	uint32_t GetActiveObjectNum();
	class UCreativeModeObjectManager* Get(class UObject* WorldContext);
	void DestroyObjectForStreaming(const struct FString& InstanceID);
	void DestroyObjectForBatchManager(struct FString* InstanceID);
	bool DestroyObject(const struct FString& InstanceID);
	bool CheckObjectBeBatch(const struct FString& ID);
	bool ChangeObjectTransform(const struct FString& InstanceID, const struct FTransform& Transform);
	void AddSpawnObjectToQueue(const struct FString& InstanceID, const struct FString& Path, const struct FTransform& SpawnTransform);
	void AddPhysicsObject(const struct FString& InstanceID);
	bool AddObject(const struct FString& InstanceID, const struct FCreativeModeStreamingParameters& StreamingParameters);
};


// Class Creative.CreativeOccupationAreaLiteComponent
// 0x0000 (0x0160 - 0x0160)
class UCreativeOccupationAreaLiteComponent : public UCreativeModeLiteComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeOccupationAreaLiteComponent");
		return pStaticClass;
	}

};


// Class Creative.CreativePhysicsBatchActor
// 0x00C8 (0x0580 - 0x04B8)
class ACreativePhysicsBatchActor : public ALuaActor
{
public:
	TMap<struct FString, class UCreativePhysicsComponent*> InstancePhysicsComponentMap;                              // 0x04B8(0x0050) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0508(0x0068) MISSED OFFSET
	int                                                RegisterMaxNum;                                           // 0x0570(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ReplicateLimit;                                           // 0x0574(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0578(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhysicsBatchActor");
		return pStaticClass;
	}


	void UpdatePhysicsComponentMaterial(struct FString* ComponentID, struct FString* MaterialPath);
	void UpdatePhysicsComponent(const struct FTransform& Transform, TEnumAsByte<ECollisionEnabled> CollisionEnabled, struct FString* ComponentID);
	void SetPhysicsComponentEnabled(TEnumAsByte<ECollisionEnabled> CollisionEnabled, struct FString* ComponentID);
	void ClearAllPhysicsComponent();
};


// Class Creative.CreativePhysicsComponent
// 0x0050 (0x07E0 - 0x0790)
class UCreativePhysicsComponent : public UMeshComponent
{
public:
	class UBodySetup*                                  BodySetup;                                                // 0x0790(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceID;                                               // 0x0798(0x0010) (ZeroConstructor)
	struct FName                                       CollisionProfileName;                                     // 0x07A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x07B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhysicsComponent");
		return pStaticClass;
	}


	void SetIsReplicatedOnly(bool ShouldReplicate);
};


// Class Creative.CreativePhysicsManager
// 0x0158 (0x0268 - 0x0110)
class UCreativePhysicsManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0110(0x0010) MISSED OFFSET
	TMap<struct FString, class UBodySetup*>            BodySetupMap;                                             // 0x0120(0x0050) (ZeroConstructor, Transient)
	TMap<struct FString, class UMaterialInterface*>    MaterialInterfaceMap;                                     // 0x0170(0x0050) (ZeroConstructor, Transient)
	TMap<int, class ACreativePhysicsBatchActor*>       PhysicsBatchActorMap;                                     // 0x01C0(0x0050) (ZeroConstructor, Transient)
	bool                                               StreamingEnable;                                          // 0x0210(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsGrid;                                                   // 0x0211(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0212(0x0006) MISSED OFFSET
	TMap<int, bool>                                    VisiblePhysicsBatchActors;                                // 0x0218(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhysicsManager");
		return pStaticClass;
	}


	void SetStreamingEnable(bool Enable);
	void SetPhysicsActorVisible(int Index, bool Visible);
	void RemovePhysicsObject(const struct FString& InstanceID);
	bool IsPhysicsActorVisible(int Index);
	class ACreativePhysicsBatchActor* GetPhysicsBatchActorByInstanceID(const struct FString& InstanceID);
	class ACreativePhysicsBatchActor* GetPhysicsBatchActor(int Index);
	int GetLandscapeIndex(const struct FString& InstanceID);
	class UCreativePhysicsManager* Get(class UObject* WorldContext);
	void ClearAllPhysicsBatchActor();
	void AddPhysicsObject(const struct FString& InstanceID);
};


// Class Creative.CreativeModePlayerState
// 0x0008 (0x19E8 - 0x19E0)
class ACreativeModePlayerState : public ASTExtraPlayerState
{
public:
	bool                                               bEnableAutoPickUp;                                        // 0x19E0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x19E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModePlayerState");
		return pStaticClass;
	}


	void ServerSetInstanceTransfrom(const struct FString& InstanceID, const struct FTransform& InstanceTransform);
	void ServerRPC_RequestPullData(uint32_t Seq, TArray<uint32_t> InstanceIds);
	void ServerLoadBinaryData(TArray<unsigned char> PbBuffer);
	void ServerAddInstance(const struct FString& InstanceID, TArray<unsigned char> Content);
	void GM_LoadBinaryData(TArray<unsigned char> PbBuffer);
	void ClientRPC_RespondPullData(uint32_t Seq, TArray<struct FCreativeInstanceDataContent> InstanceDatas);
};


// Class Creative.CreativePoolInterface
// 0x0000 (0x0028 - 0x0028)
class UCreativePoolInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePoolInterface");
		return pStaticClass;
	}


	void SetRecycleTime(float RecycleTime);
	void SetIsRecycled(bool IsRecycled);
	void ReceiveOnReturnToPool(class UObject* NewOuter, int RecycledSeq);
	void ReceiveOnPickFromPool(class UObject* NewOuter, const struct FString& InName);
	void OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	void OnPickFromPool(class UObject* NewOuter, const struct FString& InName);
	float GetRecycleTime();
	bool CheckIsRecycled();
};


// Class Creative.CreativePoolManager
// 0x0060 (0x0170 - 0x0110)
class UCreativePoolManager : public UCreativeModeManagerBase
{
public:
	bool                                               bPoolManagerEnable;                                       // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0111(0x000F) MISSED OFFSET
	TMap<int, struct FCreativeObjectPool>              CreativePools;                                            // 0x0120(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePoolManager");
		return pStaticClass;
	}


	void SetPoolManagerEnable(bool bPoolManagerEnable);
	void ReturnObject(int PoolID, class UObject* Obj);
	bool OnReceiveDestroyHandle(int ID, class UObject* InObj);
	class UObject* OnReceiveCreateHandle(int ID);
	bool InitPool(int PoolID, bool bPoolEnable, struct FCreativeObjectPoolClassConfig* PoolConfig);
	class UObject* GetObject(int PoolID, class UObject* NewOuter, struct FString* InName);
	class UCreativePoolManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeModeRaceCheckPointComponent
// 0x0000 (0x01D8 - 0x01D8)
class UCreativeModeRaceCheckPointComponent : public ULuaActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeRaceCheckPointComponent");
		return pStaticClass;
	}

};


// Class Creative.CreativeModeRaceCheckPointLiteComponent
// 0x0000 (0x0160 - 0x0160)
class UCreativeModeRaceCheckPointLiteComponent : public UCreativeModeLiteComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeRaceCheckPointLiteComponent");
		return pStaticClass;
	}

};


// Class Creative.CreativeRuntimePlayerBattleDataObject
// 0x02F0 (0x07A8 - 0x04B8)
class ACreativeRuntimePlayerBattleDataObject : public ALuaActor
{
public:
	struct FRuntimePlayerBattleDataInfo                DefaultPlayerBattleDataInfo;                              // 0x04B8(0x0060)
	struct FRuntimeTeamGameOutcomeConditionInfo        DefaultTeamGameOutcomeCondition;                          // 0x0518(0x0018)
	struct FRuntimeCacheRoundBattleDataInfoContainer   RuntimeOldCacheRoundBattleDataContainer;                  // 0x0530(0x00C8) (Transient)
	struct FRuntimeBattleDataInfoContainer             RuntimeCurRoundBattleDataInfoContainer;                   // 0x05F8(0x00C8) (Net, Transient)
	struct FRuntimeTeamGameOutcomeConditionContainer   RuntimeTeamGameOutcomeConditionContainer;                 // 0x06C0(0x00C8) (Net, Transient)
	struct FRuntimeCacheRoundBattleDataInfo            DefaultCacheRoundBattleDataInfo;                          // 0x0788(0x0020)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeRuntimePlayerBattleDataObject");
		return pStaticClass;
	}


	bool SetTeamGameOutcomeCondition(int TeamID, bool bPropagateToChildren, struct FRuntimeTeamGameOutcomeConditionInfo* TeamGameOutcomeCondition);
	bool SetPlayerBattleData(uint64_t UId, uint32_t PlayerKey, bool bPropagateToChildren, struct FRuntimePlayerBattleDataInfo* PlayerBattleData);
	void OnRepTeamGameOutcomeConditionInfo(int TeamID);
	void OnRepCurRoundPlayerBattleDataInfo(uint64_t PlayerUID, uint64_t PlayerKey, int ChangeTeamID);
	struct FRuntimeTeamGameOutcomeConditionInfo GetTeamGameOutcomeCondition(int TeamID);
	struct FRuntimePlayerBattleDataInfo GetCurRoundPlayerBattleData(uint64_t PlayerUID, uint32_t PlayerKey);
	TArray<struct FRuntimePlayerBattleDataInfo> GetCurRoundAllPlayerBattleData();
	struct FRuntimePlayerBattleDataInfo GetCacheRoundPlayerBattleData(int RoundIndex, uint64_t PlayerUID, uint32_t PlayerKey);
	struct FRuntimeCacheRoundBattleDataInfo GetCacheRoundBattleData(int RoundIndex);
	struct FRuntimePlayerBattleDataInfo GetAllRoundPlayerBattleData(uint64_t PlayerUID, uint32_t PlayerKey);
	void CacheCurRoundBattleData(int RoundIndex);
};


// Class Creative.CreativeSceneQueryManager
// 0x0118 (0x0228 - 0x0110)
class UCreativeSceneQueryManager : public UCreativeModeManagerBase
{
public:
	struct FCreativeReplicatedDataContainer            ReplicatedDataContainer;                                  // 0x0110(0x00C8) (Net, Transient)
	TMap<struct FString, struct FCreativeReplicatedObjectsInfo> MapReplicatedObjects;                                     // 0x01D8(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeSceneQueryManager");
		return pStaticClass;
	}


	void RemoveReplicateObject(const struct FString& InstanceID, class UObject* Object);
	void RemoveReplicateData(const struct FString& InstanceID);
	void OnReceivePreReplicateDataRemove(const struct FString& ID);
	void OnReceivePostReplicateDataChange(const struct FString& ID, TArray<class UObject*> Objects);
	void OnReceivePostReplicateDataAdd(const struct FString& ID, TArray<class UObject*> Objects);
	TArray<class UObject*> GetReplicatedObjects(const struct FString& InstanceID);
	class UCreativeSceneQueryManager* Get(class UObject* WorldContext);
	void AddReplicateObjectPostDeferred(const struct FString& InstanceID, const struct FTransform& SpawnTransform, class UObject* ReplicatedObject);
	class UObject* AddReplicateObjectDeferred(const struct FString& InstanceID, class UClass* ObjectClass, const struct FString& Name, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride);
	class UObject* AddReplicateObject(const struct FString& InstanceID, class UClass* ObjectClass, const struct FString& Name, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride);
};


// Class Creative.CreativeModeSoftComponentManager
// 0x0050 (0x0160 - 0x0110)
class UCreativeModeSoftComponentManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0110(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeSoftComponentManager");
		return pStaticClass;
	}


	class UCreativeModeSoftComponentManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeStaticMeshComponent
// 0x0010 (0x0910 - 0x0900)
class UCreativeStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0900(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeStaticMeshComponent");
		return pStaticClass;
	}


	void OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	void OnPickFromPool(class UObject* NewOuter, const struct FString& InName);
};


// Class Creative.CreativeModeStreamingManager
// 0x0218 (0x0328 - 0x0110)
class UCreativeModeStreamingManager : public UCreativeModeManagerBase
{
public:
	bool                                               bStreamingManagerEnable;                                  // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bStreamingStateCheckStartup;                              // 0x0111(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseChildThreads;                                         // 0x0112(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0113(0x0001) MISSED OFFSET
	float                                              StreamingTickFrequency;                                   // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DestroyExtendDistance;                                    // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DelayDestroyTime;                                         // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NeedTickStreamingDistanceScale;                           // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               ChildThreadsReduceTickFrequency;                          // 0x0124(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2B];                                      // 0x0125(0x002B) MISSED OFFSET
	TMap<struct FString, struct FCreativeModeStreamingParameters> ObjectStreamingStateMap;                                  // 0x0150(0x0050) (ZeroConstructor, Transient)
	TArray<struct FString>                             ObjectStreamingStateKeyList;                              // 0x01A0(0x0010) (ZeroConstructor, Transient)
	TMap<struct FString, bool>                         ObjectSpawnStateChangeMaps;                               // 0x01B0(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0200(0x0050) MISSED OFFSET
	TArray<class AActor*>                              OuterStreamingSources;                                    // 0x0250(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0xC8];                                      // 0x0260(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeStreamingManager");
		return pStaticClass;
	}


	bool StreamingManagerEnable();
	bool RemoveStreamingObject(const struct FString& InstanceID);
	struct FIntVector GetOnGridCellIndex(const struct FString& GridName, const struct FVector& Location);
	float GetGridLoadingRange(const struct FString& GridName);
	TArray<struct FString> GetGridList();
	struct FVector2D GetGridCellWidthHeight(const struct FString& GridName);
	class UCreativeModeStreamingManager* Get(class UObject* WorldContext);
	ECreativeModeActorStreamingType ChangeStreamingObjectStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType NewStremaingType);
	bool AddStreamingObject(const struct FString& InstanceID, const struct FCreativeModeStreamingParameters& StreamingParameters);
};


// Class Creative.CreativeWorldSubSystem
// 0x0010 (0x0040 - 0x0030)
class UCreativeWorldSubSystem : public UWorldSubsystem
{
public:
	class AActor*                                      ManagerCenter;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      PhysicsBatchActor;                                        // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeWorldSubSystem");
		return pStaticClass;
	}


	class AActor* GetPhysicsBatchActor();
};


// Class Creative.GameModeStateActive_CreativeMode
// 0x0000 (0x00C8 - 0x00C8)
class UGameModeStateActive_CreativeMode : public UGameModeStateActive
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameModeStateActive_CreativeMode");
		return pStaticClass;
	}

};


// Class Creative.GameModeStateFighting_CreativeMode
// 0x0000 (0x00D8 - 0x00D8)
class UGameModeStateFighting_CreativeMode : public UGameModeStateFightingTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameModeStateFighting_CreativeMode");
		return pStaticClass;
	}

};


// Class Creative.GameModeStateFinished_CreativeMode
// 0x0000 (0x00C0 - 0x00C0)
class UGameModeStateFinished_CreativeMode : public UGameModeStateFinishedTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameModeStateFinished_CreativeMode");
		return pStaticClass;
	}

};


// Class Creative.GameModeStateReady_CreativeMode
// 0x0000 (0x0110 - 0x0110)
class UGameModeStateReady_CreativeMode : public UGameModeStateReady
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameModeStateReady_CreativeMode");
		return pStaticClass;
	}

};


// Class Creative.SoftStaticMeshComponent
// 0x0030 (0x0930 - 0x0900)
class USoftStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0900(0x0020) MISSED OFFSET
	unsigned char                                      bAsyncLoad : 1;                                           // 0x0920(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0921(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.SoftStaticMeshComponent");
		return pStaticClass;
	}


	bool SetSoftStaticMeshAsync(class UStaticMesh* NewMesh);
	bool SetSoftStaticMesh(class UStaticMesh* NewMesh, bool bSetStaticMesh);
	void OnClientAsyncLoaded(const struct FSoftObjectPath& SoftObjectPath);
};


}

