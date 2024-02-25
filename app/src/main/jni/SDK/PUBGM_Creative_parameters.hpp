#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Creative.CreativeAbilitySystemComponent.UpdateGhostBuildingTransform
struct UCreativeAbilitySystemComponent_UpdateGhostBuildingTransform_Params
{
};

// Function Creative.CreativeAbilitySystemComponent.SetSnapTargetTransform
struct UCreativeAbilitySystemComponent_SetSnapTargetTransform_Params
{
	struct FTransform                                  SnapTargetTransform;                                      // (Parm, OutParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformScale
struct UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformScale_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformRotation
struct UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformRotation_Params
{
	float                                              Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformLocation
struct UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformLocation_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.ReceiveGetSnapTargetTransform
struct UCreativeAbilitySystemComponent_ReceiveGetSnapTargetTransform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.GetSnappedLocAxis
struct UCreativeAbilitySystemComponent_GetSnappedLocAxis_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.GetSetupBuildingID
struct UCreativeAbilitySystemComponent_GetSetupBuildingID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.GetGhostBuildingTransform
struct UCreativeAbilitySystemComponent_GetGhostBuildingTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.GetBuildingInstanceID
struct UCreativeAbilitySystemComponent_GetBuildingInstanceID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeAbilitySystemComponent.GetBuildDistance
struct UCreativeAbilitySystemComponent_GetBuildDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.SortCanEditParamsObjs
struct UCreativeModeActorInteractionComponent_SortCanEditParamsObjs_Params
{
};

// Function Creative.CreativeModeActorInteractionComponent.SetCrossHairTransformObjInstanceID
struct UCreativeModeActorInteractionComponent_SetCrossHairTransformObjInstanceID_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeActorInteractionComponent.SetCrossHairSelectedObjInstanceID
struct UCreativeModeActorInteractionComponent_SetCrossHairSelectedObjInstanceID_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckIntervalCfg
struct UCreativeModeActorInteractionComponent_GetSectorCheckIntervalCfg_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckDistance
struct UCreativeModeActorInteractionComponent_GetSectorCheckDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckAngle
struct UCreativeModeActorInteractionComponent_GetSectorCheckAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.GetPlayerHalfHeight
struct UCreativeModeActorInteractionComponent_GetPlayerHalfHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckIntervalCfg
struct UCreativeModeActorInteractionComponent_GetCrossHairCheckIntervalCfg_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckDistanceCfg
struct UCreativeModeActorInteractionComponent_GetCrossHairCheckDistanceCfg_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.ClearCanEditParamsObjs
struct UCreativeModeActorInteractionComponent_ClearCanEditParamsObjs_Params
{
};

// Function Creative.CreativeModeActorInteractionComponent.AddCanEditObject
struct UCreativeModeActorInteractionComponent_AddCanEditObject_Params
{
	class UObject*                                     uCanEditObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeAssetManager.ReceiveOnGameStateBeginPlay
struct UCreativeModeAssetManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeAssetManager.ReceiveInitAssetInfo
struct UCreativeModeAssetManager_ReceiveInitAssetInfo_Params
{
	int                                                AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeAssetManager.OnGameStateBeginPlay
struct UCreativeModeAssetManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeAssetManager.GetObbyMeshPath
struct UCreativeModeAssetManager_GetObbyMeshPath_Params
{
	int                                                AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeAssetManager.GetMaterialPath
struct UCreativeModeAssetManager_GetMaterialPath_Params
{
	int                                                MaterialID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeAssetManager.Get
struct UCreativeModeAssetManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeModeAssetManager*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeAssetManager.AddAssetInfo
struct UCreativeModeAssetManager_AddAssetInfo_Params
{
	int                                                AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FCreativeAssetInfo                          AssetInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Creative.CreativeModeBackpackUtils.ResCanAddToBackpackNum
struct UCreativeModeBackpackUtils_ResCanAddToBackpackNum_Params
{
	class UBackpackComponent*                          BackpackComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                resID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.TransformMultiplyBy
struct UCreativeModeBlueprintLibrary_TransformMultiplyBy_Params
{
	struct FTransform                                  Source;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FTransform                                  M;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.TransformBounds
struct UCreativeModeBlueprintLibrary_TransformBounds_Params
{
	struct FBoxSphereBounds                            Bounds;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FTransform                                  M;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.SetStaticMeshMobility
struct UCreativeModeBlueprintLibrary_SetStaticMeshMobility_Params
{
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    NewMobility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.SetSpeedOverLimit
struct UCreativeModeBlueprintLibrary_SetSpeedOverLimit_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.SetInstanceValue
struct UCreativeModeBlueprintLibrary_SetInstanceValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeBlueprintLibrary.SetEditorActorTransform
struct UCreativeModeBlueprintLibrary_SetEditorActorTransform_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FTransform                                  NewTransform;                                             // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.SetCollisionMobility
struct UCreativeModeBlueprintLibrary_SetCollisionMobility_Params
{
	class UShapeComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    NewMobility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.SaveAssetStringToFile
struct UCreativeModeBlueprintLibrary_SaveAssetStringToFile_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeBlueprintLibrary.RenameObject
struct UCreativeModeBlueprintLibrary_RenameObject_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NewName;                                                  // (ConstParm, Parm, ZeroConstructor)
};

// Function Creative.CreativeModeBlueprintLibrary.QuatCross
struct UCreativeModeBlueprintLibrary_QuatCross_Params
{
	struct FQuat                                       Quat1;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FQuat                                       Quat2;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.ProjectSavedDir
struct UCreativeModeBlueprintLibrary_ProjectSavedDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.MinAreaRectangle
struct UCreativeModeBlueprintLibrary_MinAreaRectangle_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             InPoints;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     SampleSurfaceNormal;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutRectCenter;                                            // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    OutRectRotation;                                          // (Parm, OutParm, IsPlainOldData)
	float                                              OutRectLengthX;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutRectLengthY;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDraw;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        PolyVertIndices;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeBlueprintLibrary.MD5HashByteArray
struct UCreativeModeBlueprintLibrary_MD5HashByteArray_Params
{
	TArray<unsigned char>                              inArray;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.MD5HashAnsiString
struct UCreativeModeBlueprintLibrary_MD5HashAnsiString_Params
{
	struct FString                                     str;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.LoadAssetFileToString
struct UCreativeModeBlueprintLibrary_LoadAssetFileToString_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.IsCreativeMode
struct UCreativeModeBlueprintLibrary_IsCreativeMode_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.IgnoreClientMovementErrorChecksAndCorrection
struct UCreativeModeBlueprintLibrary_IgnoreClientMovementErrorChecksAndCorrection_Params
{
	class ACharacter*                                  Charcter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsIgnore;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetReplicateAddDataArrayVaildNum
struct UCreativeModeBlueprintLibrary_GetReplicateAddDataArrayVaildNum_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FReplicateAddDataArray                      ReplicateAddDataArray;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                StartIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetObjectScreenPos
struct UCreativeModeBlueprintLibrary_GetObjectScreenPos_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FVector2D                                   pos;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetObjectMap
struct UCreativeModeBlueprintLibrary_GetObjectMap_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, class UObject*>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.GetGameTypeAsString
struct UCreativeModeBlueprintLibrary_GetGameTypeAsString_Params
{
	ECreativeModeGameType                              GameType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.GetActorMeshBoundsByTag
struct UCreativeModeBlueprintLibrary_GetActorMeshBoundsByTag_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, IsPlainOldData)
	struct FString                                     IgnoreTag;                                                // (Parm, ZeroConstructor)
	struct FString                                     IncludeTag;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeBlueprintLibrary.GenerateGuid
struct UCreativeModeBlueprintLibrary_GenerateGuid_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.DrawLine
struct UCreativeModeBlueprintLibrary_DrawLine_Params
{
	struct FPaintContext                               InContext;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector2D                                   Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                LayerOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LineThickness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAntiAlias;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.DrawGrids
struct UCreativeModeBlueprintLibrary_DrawGrids_Params
{
	struct FPaintContext                               InContext;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              CellSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellCountX;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellCountY;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosOffsetX;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosOffsetY;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              LineThickness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAntiAlias;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.DrawGridCell
struct UCreativeModeBlueprintLibrary_DrawGridCell_Params
{
	struct FPaintContext                               InContext;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              CellSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellIndexX;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellIndexY;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosOffsetX;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosOffsetY;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                LayerOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.DestroyInstance
struct UCreativeModeBlueprintLibrary_DestroyInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.ClearGrassByMaskTexture
struct UCreativeModeBlueprintLibrary_ClearGrassByMaskTexture_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MaskTexture;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   WorldStart;                                               // (Parm, IsPlainOldData)
	struct FVector2D                                   WorldEnd;                                                 // (Parm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.BoxOverlapComponents
struct UCreativeModeBlueprintLibrary_BoxOverlapComponents_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxPos;                                                   // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, IsPlainOldData)
	TArray<int>                                        ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      CompClassFilter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UPrimitiveComponent*>                 OutComps;                                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.BoxOverlapActors
struct UCreativeModeBlueprintLibrary_BoxOverlapActors_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxPos;                                                   // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, IsPlainOldData)
	TArray<int>                                        ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ActorClassFilter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.BeginDeferredActorSpawnWithName
struct UCreativeModeBlueprintLibrary_BeginDeferredActorSpawnWithName_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	ESpawnActorCollisionHandlingMethod                 CollisionHandlingOverride;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.AddOnScreenDebugMessage
struct UCreativeModeBlueprintLibrary_AddOnScreenDebugMessage_Params
{
	struct FString                                     Msg;                                                      // (ConstParm, Parm, ZeroConstructor)
};

// Function Creative.CreativeModeCheatManager.SetInstanceValue
struct UCreativeModeCheatManager_SetInstanceValue_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeCheatManager.SetCurrentGameType
struct UCreativeModeCheatManager_SetCurrentGameType_Params
{
	ECreativeModeGameType                              NewGameType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeCheatManager.DestroyInstance
struct UCreativeModeCheatManager_DestroyInstance_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeLiteComponent.OnReturnToPool
struct UCreativeModeLiteComponent_OnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RecycledSeq;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeLiteComponent.GetObjectFromPool
struct UCreativeModeLiteComponent_GetObjectFromPool_Params
{
	int                                                PoolID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, OutParm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameModeBaseComponent.SetGameStateComponent
struct UCreativeModeGameModeBaseComponent_SetGameStateComponent_Params
{
	class UCreativeModeGameStateBaseComponent*         NewGameStateComponent;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameModeBaseComponent.ReceivePostInitializeComponents
struct UCreativeModeGameModeBaseComponent_ReceivePostInitializeComponents_Params
{
};

// Function Creative.CreativeModeGameModeBaseComponent.GetGameType
struct UCreativeModeGameModeBaseComponent_GetGameType_Params
{
	ECreativeModeGameType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameModeBaseComponent.GetGameMode
struct UCreativeModeGameModeBaseComponent_GetGameMode_Params
{
	class ACreativeModeGameMode*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameModeBaseComponent.FindPlayerStartOverride
struct UCreativeModeGameModeBaseComponent_FindPlayerStartOverride_Params
{
	class AController*                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     IncomingName;                                             // (Parm, ZeroConstructor)
	bool                                               bIsRevive;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.UnregisterLiteComponent
struct ACreativeModeEditorObject_UnregisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Destroy;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.ShowSelectedEffect
struct ACreativeModeEditorObject_ShowSelectedEffect_Params
{
	bool                                               ShowEff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutlineColor;                                             // (Parm, IsPlainOldData)
	float                                              OutlineThickness;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.ShowOutlineEffect
struct ACreativeModeEditorObject_ShowOutlineEffect_Params
{
	bool                                               ShowEff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     IgnoreTag;                                                // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeEditorObject.SetLiteComponentTickEnable
struct ACreativeModeEditorObject_SetLiteComponentTickEnable_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.SetActorState
struct ACreativeModeEditorObject_SetActorState_Params
{
	ECreativeModeActorState                            NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.RegisterLiteComponent
struct ACreativeModeEditorObject_RegisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.ReceivePostBeginPlay
struct ACreativeModeEditorObject_ReceivePostBeginPlay_Params
{
};

// Function Creative.CreativeModeEditorObject.ReceiveIsDedicatedServer
struct ACreativeModeEditorObject_ReceiveIsDedicatedServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.ReceiveInitializeLiteComponent
struct ACreativeModeEditorObject_ReceiveInitializeLiteComponent_Params
{
};

// Function Creative.CreativeModeEditorObject.ReceiveHasAuthority
struct ACreativeModeEditorObject_ReceiveHasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.OnRepActorStateOverride
struct ACreativeModeEditorObject_OnRepActorStateOverride_Params
{
	ECreativeModeActorState                            NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.OnRep_ActorState
struct ACreativeModeEditorObject_OnRep_ActorState_Params
{
	ECreativeModeActorState                            LastState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.GetObjectFromPool
struct ACreativeModeEditorObject_GetObjectFromPool_Params
{
	int                                                PoolID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, OutParm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.GetActorState
struct ACreativeModeEditorObject_GetActorState_Params
{
	ECreativeModeActorState                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.FindLiteComponentByClass
struct ACreativeModeEditorObject_FindLiteComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ULiteComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.CanEditParameters
struct ACreativeModeEditorObject_CanEditParameters_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameStateBaseComponent.ReceivePostInitializeComponents
struct UCreativeModeGameStateBaseComponent_ReceivePostInitializeComponents_Params
{
};

// Function Creative.CreativeModeGameStateBaseComponent.GetPlayState
struct UCreativeModeGameStateBaseComponent_GetPlayState_Params
{
	ECreativeModePlayState                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameStateBaseComponent.GetGameType
struct UCreativeModeGameStateBaseComponent_GetGameType_Params
{
	ECreativeModeGameType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameStateBaseComponent.GetGameState
struct UCreativeModeGameStateBaseComponent_GetGameState_Params
{
	class ACreativeModeGameState*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.UnregisterLiteComponent
struct ACreativeModeGameMode_UnregisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.SetLiteComponentTickEnable
struct ACreativeModeGameMode_SetLiteComponentTickEnable_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.SetItemGenerate
struct ACreativeModeGameMode_SetItemGenerate_Params
{
	bool                                               bIsOpen;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.SetCurrentGameType
struct ACreativeModeGameMode_SetCurrentGameType_Params
{
	ECreativeModeGameType                              NewGameType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.RegisterLiteComponent
struct ACreativeModeGameMode_RegisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.ReceiveInitializeLiteComponent
struct ACreativeModeGameMode_ReceiveInitializeLiteComponent_Params
{
};

// Function Creative.CreativeModeGameMode.IsRestartPlayerUsePawnRotation
struct ACreativeModeGameMode_IsRestartPlayerUsePawnRotation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.GetCurrentModeComponent
struct ACreativeModeGameMode_GetCurrentModeComponent_Params
{
	class UCreativeModeGameModeBaseComponent*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamNum
struct ACreativeModeGameMode_GetCreativeModeRealTeamNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamIDs
struct ACreativeModeGameMode_GetCreativeModeRealTeamIDs_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeGameMode.FindLiteComponentByClass
struct ACreativeModeGameMode_FindLiteComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ULiteComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.CreativeModeFindPlayerStart
struct ACreativeModeGameMode_CreativeModeFindPlayerStart_Params
{
	class AController*                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     IncomingName;                                             // (Parm, ZeroConstructor)
	bool                                               bIsRevive;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameModeComponent.ReceiveCallPlayStateFunction
struct UCreativeModeGameModeComponent_ReceiveCallPlayStateFunction_Params
{
};

// Function Creative.CreativeModeGameObject.UnregisterLiteComponent
struct UCreativeModeGameObject_UnregisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Destroy;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameObject.RegisterLiteComponent
struct UCreativeModeGameObject_RegisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameObject.ReceivePostBeginPlay
struct UCreativeModeGameObject_ReceivePostBeginPlay_Params
{
};

// Function Creative.CreativeModeGameObject.ReceiveIsDedicatedServer
struct UCreativeModeGameObject_ReceiveIsDedicatedServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameObject.ReceiveHasAuthority
struct UCreativeModeGameObject_ReceiveHasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameObject.ReceiveEndPlay
struct UCreativeModeGameObject_ReceiveEndPlay_Params
{
};

// Function Creative.CreativeModeGameObject.ReceiveBeginPlay
struct UCreativeModeGameObject_ReceiveBeginPlay_Params
{
};

// Function Creative.CreativeModeGameObject.GetObjectFromPool
struct UCreativeModeGameObject_GetObjectFromPool_Params
{
	int                                                PoolID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, OutParm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameParameterManager.RemoveGameParameter
struct UCreativeModeGameParameterManager_RemoveGameParameter_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (ConstParm, Parm, ZeroConstructor)
};

// Function Creative.CreativeModeGameParameterManager.ReceiveOnGameStateBeginPlay
struct UCreativeModeGameParameterManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameParameterManager.OnReceivePreGameParameterRemove
struct UCreativeModeGameParameterManager_OnReceivePreGameParameterRemove_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeGameParameterManager.OnReceivePostGameParameterChange
struct UCreativeModeGameParameterManager_OnReceivePostGameParameterChange_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (Parm, ZeroConstructor)
	struct FString                                     Desc;                                                     // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeGameParameterManager.OnReceivePostGameParameterAdd
struct UCreativeModeGameParameterManager_OnReceivePostGameParameterAdd_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (Parm, ZeroConstructor)
	struct FString                                     Desc;                                                     // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeGameParameterManager.OnGameStateBeginPlay
struct UCreativeModeGameParameterManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameParameterManager.GetGameParameterDesc
struct UCreativeModeGameParameterManager_GetGameParameterDesc_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeGameParameterManager.Get
struct UCreativeModeGameParameterManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeModeGameParameterManager*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameParameterManager.ChangeGameParameter
struct UCreativeModeGameParameterManager_ChangeGameParameter_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     Desc;                                                     // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeGameParameterManager.AddGameParameter
struct UCreativeModeGameParameterManager_AddGameParameter_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     Desc;                                                     // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeGameState.UnregisterLiteComponent
struct ACreativeModeGameState_UnregisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.SetLiteComponentTickEnable
struct ACreativeModeGameState_SetLiteComponentTickEnable_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.SetCurrentGameType
struct ACreativeModeGameState_SetCurrentGameType_Params
{
	ECreativeModeGameType                              NewGameType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.RegisterLiteComponent
struct ACreativeModeGameState_RegisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.ReceiveInitializeLiteComponent
struct ACreativeModeGameState_ReceiveInitializeLiteComponent_Params
{
};

// Function Creative.CreativeModeGameState.OnRep_InitializeGameType
struct ACreativeModeGameState_OnRep_InitializeGameType_Params
{
	ECreativeModeGameType                              LastInitializeGameType;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.OnRep_CurrentStateComponent
struct ACreativeModeGameState_OnRep_CurrentStateComponent_Params
{
	class UCreativeModeGameStateBaseComponent*         LastComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.IsCreativeEditor
struct ACreativeModeGameState_IsCreativeEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetPlayState
struct ACreativeModeGameState_GetPlayState_Params
{
	ECreativeModePlayState                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetIsOfficialGame
struct ACreativeModeGameState_GetIsOfficialGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetIsEditorMode
struct ACreativeModeGameState_GetIsEditorMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetIsDemoGame
struct ACreativeModeGameState_GetIsDemoGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetIsCreative
struct ACreativeModeGameState_GetIsCreative_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetInitializeGameType
struct ACreativeModeGameState_GetInitializeGameType_Params
{
	ECreativeModeGameType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetCurrentStateComponent
struct ACreativeModeGameState_GetCurrentStateComponent_Params
{
	class UCreativeModeGameStateBaseComponent*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetCurrentGameType
struct ACreativeModeGameState_GetCurrentGameType_Params
{
	ECreativeModeGameType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.FindLiteComponentByClass
struct ACreativeModeGameState_FindLiteComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ULiteComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.ClearInstance
struct ACreativeModeGameState_ClearInstance_Params
{
};

// Function Creative.CreativeModeGameState.ClearAndReImportInstance
struct ACreativeModeGameState_ClearAndReImportInstance_Params
{
};

// Function Creative.CreativeModeGameStateComponent.SetPlayState
struct UCreativeModeGameStateComponent_SetPlayState_Params
{
	ECreativeModePlayState                             newPlayState;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameStateComponent.OnRep_RuntimePlayerBattleDataObject
struct UCreativeModeGameStateComponent_OnRep_RuntimePlayerBattleDataObject_Params
{
};

// Function Creative.CreativeModeGameStateComponent.OnRep_IntegralMechanismComponent
struct UCreativeModeGameStateComponent_OnRep_IntegralMechanismComponent_Params
{
};

// Function Creative.CreativeModeGameStateComponent.OnRep_CurPlayState
struct UCreativeModeGameStateComponent_OnRep_CurPlayState_Params
{
};

// Function Creative.CreativeModeGameStateComponent.GetPlayState
struct UCreativeModeGameStateComponent_GetPlayState_Params
{
	ECreativeModePlayState                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.UpdateBatchActorInstances
struct UCreativeModeGridLevelsManager_UpdateBatchActorInstances_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	int                                                AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaterialID;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceAll;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.UnLoadGridLevelsBatchActor
struct UCreativeModeGridLevelsManager_UnLoadGridLevelsBatchActor_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FIntVector                                  CellIndex;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.StaticMeshObjectRelieveBatch
struct UCreativeModeGridLevelsManager_StaticMeshObjectRelieveBatch_Params
{
	struct FString                                     InstanceID;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeGridLevelsManager.StaticMeshObjectReBatch
struct UCreativeModeGridLevelsManager_StaticMeshObjectReBatch_Params
{
	struct FString                                     InstanceID;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeGridLevelsManager.RemoveObject
struct UCreativeModeGridLevelsManager_RemoveObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.ReceiveRegistInstanceValueListener
struct UCreativeModeGridLevelsManager_ReceiveRegistInstanceValueListener_Params
{
};

// Function Creative.CreativeModeGridLevelsManager.ReceiveDelayUpdateBatchActorInstances
struct UCreativeModeGridLevelsManager_ReceiveDelayUpdateBatchActorInstances_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	int                                                AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaterialID;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceAll;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.ReceiveClearAllData
struct UCreativeModeGridLevelsManager_ReceiveClearAllData_Params
{
};

// Function Creative.CreativeModeGridLevelsManager.ReceiveCheckObjectCanBatch
struct UCreativeModeGridLevelsManager_ReceiveCheckObjectCanBatch_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.ObjectAddToGridCellMap
struct UCreativeModeGridLevelsManager_ObjectAddToGridCellMap_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FIntVector                                  Index;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FString                                     InstanceID;                                               // (ConstParm, Parm, ZeroConstructor)
};

// Function Creative.CreativeModeGridLevelsManager.LoadGridLevelsBatchActor
struct UCreativeModeGridLevelsManager_LoadGridLevelsBatchActor_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FIntVector                                  CellIndex;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.IsCreativeEidtMode
struct UCreativeModeGridLevelsManager_IsCreativeEidtMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.GridCellMapRemoveObject
struct UCreativeModeGridLevelsManager_GridCellMapRemoveObject_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FIntVector                                  Index;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FString                                     InstanceID;                                               // (ConstParm, Parm, ZeroConstructor)
};

// Function Creative.CreativeModeGridLevelsManager.GetStaticMeshBatchActorPath
struct UCreativeModeGridLevelsManager_GetStaticMeshBatchActorPath_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeGridLevelsManager.GetRelieveBatchDistance
struct UCreativeModeGridLevelsManager_GetRelieveBatchDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.GetReBatchDistance
struct UCreativeModeGridLevelsManager_GetReBatchDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.GetOnCellIndex
struct UCreativeModeGridLevelsManager_GetOnCellIndex_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FIntVector                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.GetObjectTransform
struct UCreativeModeGridLevelsManager_GetObjectTransform_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.GetObjectStreamingType
struct UCreativeModeGridLevelsManager_GetObjectStreamingType_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	ECreativeModeActorStreamingType                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.GetObjectRuntimeGrid
struct UCreativeModeGridLevelsManager_GetObjectRuntimeGrid_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeGridLevelsManager.GetObjectIsPrefab
struct UCreativeModeGridLevelsManager_GetObjectIsPrefab_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.GetObjectAssetID
struct UCreativeModeGridLevelsManager_GetObjectAssetID_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.GetGridLoadingRange
struct UCreativeModeGridLevelsManager_GetGridLoadingRange_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.GetGridList
struct UCreativeModeGridLevelsManager_GetGridList_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeGridLevelsManager.GetDefaultGridName
struct UCreativeModeGridLevelsManager_GetDefaultGridName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeGridLevelsManager.GetCellWidthHeight
struct UCreativeModeGridLevelsManager_GetCellWidthHeight_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.GetCellCenterLocation
struct UCreativeModeGridLevelsManager_GetCellCenterLocation_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FIntVector                                  CellIndex;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.GetAxisIndex
struct UCreativeModeGridLevelsManager_GetAxisIndex_Params
{
	float                                              pos;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlockLenght;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.Get
struct UCreativeModeGridLevelsManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeModeGridLevelsManager*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.CheckObjectBeRelieveBatch
struct UCreativeModeGridLevelsManager_CheckObjectBeRelieveBatch_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.CheckObjectBeBatch
struct UCreativeModeGridLevelsManager_CheckObjectBeBatch_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.CheckAndRemoveObjectForBatchData
struct UCreativeModeGridLevelsManager_CheckAndRemoveObjectForBatchData_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.CheckAndAddObjectToBatchData
struct UCreativeModeGridLevelsManager_CheckAndAddObjectToBatchData_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.ChangeObjectTransform
struct UCreativeModeGridLevelsManager_ChangeObjectTransform_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.ChangeObjectStreamingType
struct UCreativeModeGridLevelsManager_ChangeObjectStreamingType_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	ECreativeModeActorStreamingType                    NewStremaingType;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.ChangeObjectMaterialId
struct UCreativeModeGridLevelsManager_ChangeObjectMaterialId_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	int                                                MaterialID;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.ChangeObjectIsPrefab
struct UCreativeModeGridLevelsManager_ChangeObjectIsPrefab_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               bIsPrefab;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGridLevelsManager.AddObjectToGridLevels
struct UCreativeModeGridLevelsManager_AddObjectToGridLevels_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeInstanceManager.UpdateModBinInstanceCount
struct UCreativeModeInstanceManager_UpdateModBinInstanceCount_Params
{
};

// Function Creative.CreativeModeInstanceManager.SetModBinInstanceCount
struct UCreativeModeInstanceManager_SetModBinInstanceCount_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeInstanceManager.SetInstanceValue
struct UCreativeModeInstanceManager_SetInstanceValue_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeInstanceManager.SetInstanceTransform
struct UCreativeModeInstanceManager_SetInstanceTransform_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
};

// Function Creative.CreativeModeInstanceManager.SendModBinaryDataToReplay
struct UCreativeModeInstanceManager_SendModBinaryDataToReplay_Params
{
	TArray<unsigned char>                              InBinaryData;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeInstanceManager.RemoveInstance
struct UCreativeModeInstanceManager_RemoveInstance_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeInstanceManager.RemoveCppInstanceNode
struct UCreativeModeInstanceManager_RemoveCppInstanceNode_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeInstanceManager.ReceiveOnGameStateBeginPlay
struct UCreativeModeInstanceManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeInstanceManager.OnRep_ModBinInstanceCount
struct UCreativeModeInstanceManager_OnRep_ModBinInstanceCount_Params
{
};

// Function Creative.CreativeModeInstanceManager.OnReceivePreInstanceRemove
struct UCreativeModeInstanceManager_OnReceivePreInstanceRemove_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeInstanceManager.OnReceivePostInstanceChange
struct UCreativeModeInstanceManager_OnReceivePostInstanceChange_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeModeInstanceManager.OnReceivePostInstanceAdd
struct UCreativeModeInstanceManager_OnReceivePostInstanceAdd_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeModeInstanceManager.OnReadyToAddInstance
struct UCreativeModeInstanceManager_OnReadyToAddInstance_Params
{
};

// Function Creative.CreativeModeInstanceManager.OnGameTypeChanged
struct UCreativeModeInstanceManager_OnGameTypeChanged_Params
{
	unsigned char                                      LastGameType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CurrentGameType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeInstanceManager.OnGameStateBeginPlay
struct UCreativeModeInstanceManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeInstanceManager.IsInstanceReplicatTreeReplicateComplete
struct UCreativeModeInstanceManager_IsInstanceReplicatTreeReplicateComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeInstanceManager.IsInstanceDataTreeReplicateComplete
struct UCreativeModeInstanceManager_IsInstanceDataTreeReplicateComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeInstanceManager.HasReadyToAddInstance
struct UCreativeModeInstanceManager_HasReadyToAddInstance_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeInstanceManager.HasAuthorityOrReplay
struct UCreativeModeInstanceManager_HasAuthorityOrReplay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeInstanceManager.GetModBinInstanceCount
struct UCreativeModeInstanceManager_GetModBinInstanceCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeInstanceManager.GetModBinaryDataFromReplay
struct UCreativeModeInstanceManager_GetModBinaryDataFromReplay_Params
{
	TArray<unsigned char>                              InBinaryData;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeInstanceManager.GetInstanceContainerCount
struct UCreativeModeInstanceManager_GetInstanceContainerCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeInstanceManager.GetCppInstanceNode
struct UCreativeModeInstanceManager_GetCppInstanceNode_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FCreativeInstancceNode                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeModeInstanceManager.Get
struct UCreativeModeInstanceManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeModeInstanceManager*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeInstanceManager.DestroyInstance
struct UCreativeModeInstanceManager_DestroyInstance_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeInstanceManager.ChangeInstance
struct UCreativeModeInstanceManager_ChangeInstance_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeModeInstanceManager.ChangeCppInstanceNode
struct UCreativeModeInstanceManager_ChangeCppInstanceNode_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FCreativeInstancceNode                      Node;                                                     // (Parm, OutParm)
};

// Function Creative.CreativeModeInstanceManager.AddInstance
struct UCreativeModeInstanceManager_AddInstance_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeModeInstanceManager.AddCppInstanceNode
struct UCreativeModeInstanceManager_AddCppInstanceNode_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FCreativeInstancceNode                      Node;                                                     // (Parm, OutParm)
};

// Function Creative.CreativeModeInstanceManager.AddBuildingFlag
struct UCreativeModeInstanceManager_AddBuildingFlag_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeIntegralMechanismComponent.SetPlayerIntegral
struct UCreativeModeIntegralMechanismComponent_SetPlayerIntegral_Params
{
	struct FString                                     UId;                                                      // (Parm, ZeroConstructor)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                curIntegral;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                curStageIntegral;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                integralAddSeq;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeIntegralMechanismComponent.OnRepPlayerIntegralsOverride
struct UCreativeModeIntegralMechanismComponent_OnRepPlayerIntegralsOverride_Params
{
};

// Function Creative.CreativeModeIntegralMechanismComponent.OnRep_PlayerIntegrals
struct UCreativeModeIntegralMechanismComponent_OnRep_PlayerIntegrals_Params
{
};

// Function Creative.CreativeModeIntegralMechanismComponent.ClearPlayerIntegrals
struct UCreativeModeIntegralMechanismComponent_ClearPlayerIntegrals_Params
{
};

// Function Creative.CreativeModeIntegralMechanismLiteComponent.SetPlayerIntegral
struct UCreativeModeIntegralMechanismLiteComponent_SetPlayerIntegral_Params
{
	struct FString                                     UId;                                                      // (Parm, ZeroConstructor)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                curIntegral;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                curStageIntegral;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                integralAddSeq;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeIntegralMechanismLiteComponent.PlayerIntegralContains
struct UCreativeModeIntegralMechanismLiteComponent_PlayerIntegralContains_Params
{
	struct FString                                     UId;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRepPlayerIntegralsOverride
struct UCreativeModeIntegralMechanismLiteComponent_OnRepPlayerIntegralsOverride_Params
{
};

// Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_TestIndex
struct UCreativeModeIntegralMechanismLiteComponent_OnRep_TestIndex_Params
{
	int                                                LastIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_PlayerIntegrals
struct UCreativeModeIntegralMechanismLiteComponent_OnRep_PlayerIntegrals_Params
{
};

// Function Creative.CreativeModeIntegralMechanismLiteComponent.ClearPlayerIntegrals
struct UCreativeModeIntegralMechanismLiteComponent_ClearPlayerIntegrals_Params
{
};

// Function Creative.CreativeItemGeneratorComponent.SetWeightMul
struct UCreativeItemGeneratorComponent_SetWeightMul_Params
{
	TMap<struct FString, int>                          Weight;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeItemGeneratorComponent.SetAddSpotPercentMul
struct UCreativeItemGeneratorComponent_SetAddSpotPercentMul_Params
{
	float                                              percent;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeItemGeneratorComponent.ClearWeightMul
struct UCreativeItemGeneratorComponent_ClearWeightMul_Params
{
};

// Function Creative.CreativeModeModDataCheckManager.ReceiveOnPreAddInstance
struct UCreativeModeModDataCheckManager_ReceiveOnPreAddInstance_Params
{
};

// Function Creative.CreativeModeModDataCheckManager.ReceiveOnPostAddInstance
struct UCreativeModeModDataCheckManager_ReceiveOnPostAddInstance_Params
{
};

// Function Creative.CreativeModeModDataCheckManager.OnPreAddInstance
struct UCreativeModeModDataCheckManager_OnPreAddInstance_Params
{
};

// Function Creative.CreativeModeModDataCheckManager.OnPostAddInstance
struct UCreativeModeModDataCheckManager_OnPostAddInstance_Params
{
};

// Function Creative.CreativeModeModDataCheckManager.Get
struct UCreativeModeModDataCheckManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeModeModDataCheckManager*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeLuaSpectatorPawn.UnRegistLuaTick
struct ACreativeModeLuaSpectatorPawn_UnRegistLuaTick_Params
{
};

// Function Creative.CreativeModeLuaSpectatorPawn.SetAbilitySystemComponentAvatar
struct ACreativeModeLuaSpectatorPawn_SetAbilitySystemComponentAvatar_Params
{
};

// Function Creative.CreativeModeLuaSpectatorPawn.RegistLuaTick
struct ACreativeModeLuaSpectatorPawn_RegistLuaTick_Params
{
	float                                              TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeLuaSpectatorPawn.MoveRight
struct ACreativeModeLuaSpectatorPawn_MoveRight_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeLuaSpectatorPawn.MoveForward
struct ACreativeModeLuaSpectatorPawn_MoveForward_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeLuaSpectatorPawn.GetActiveSpringArm
struct ACreativeModeLuaSpectatorPawn_GetActiveSpringArm_Params
{
	class USpringArmComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Creative.CreativeModeStaticMeshBatchActor.SetISMStaticMeshAndMaterials
struct ACreativeModeStaticMeshBatchActor_SetISMStaticMeshAndMaterials_Params
{
	class UInstancedStaticMeshComponent*               InstancedStaticMeshComponent;                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                AssetId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StaticMeshIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaterialID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeStaticMeshBatchActor.GetBatchStaticMeshInfo
struct ACreativeModeStaticMeshBatchActor_GetBatchStaticMeshInfo_Params
{
	class UInstancedStaticMeshComponent*               InstancedStaticMeshComponent;                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCreativeBatchStaticMeshInfo                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeModeNavigationManager.SetDynamicModeEnable
struct UCreativeModeNavigationManager_SetDynamicModeEnable_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.ReceiveOnUnInit
struct UCreativeModeNavigationManager_ReceiveOnUnInit_Params
{
};

// Function Creative.CreativeModeNavigationManager.ReceiveOnInit
struct UCreativeModeNavigationManager_ReceiveOnInit_Params
{
};

// Function Creative.CreativeModeNavigationManager.RebuildDynamicTiles
struct UCreativeModeNavigationManager_RebuildDynamicTiles_Params
{
	TArray<class AActor*>                              Actors;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeNavigationManager.GetDynamicTilesCount
struct UCreativeModeNavigationManager_GetDynamicTilesCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.GetDynamicTileMemCost
struct UCreativeModeNavigationManager_GetDynamicTileMemCost_Params
{
	int                                                Total;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OctTree;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TileCache;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                DynamicTile;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                DynamicTileCount;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.GetAllAssociateActors
struct UCreativeModeNavigationManager_GetAllAssociateActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeNavigationManager.Get
struct UCreativeModeNavigationManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeModeNavigationManager*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.ExportDynamicTile
struct UCreativeModeNavigationManager_ExportDynamicTile_Params
{
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeNavigationManager.ClearNavCollision
struct UCreativeModeNavigationManager_ClearNavCollision_Params
{
};

// Function Creative.CreativeModeNavigationManager.ClearDynamicOctreeData
struct UCreativeModeNavigationManager_ClearDynamicOctreeData_Params
{
};

// Function Creative.CreativeModeNavigationManager.ClearDynamicNavMesh
struct UCreativeModeNavigationManager_ClearDynamicNavMesh_Params
{
};

// Function Creative.CreativeModeNavigationManager.ClearAssociateActors
struct UCreativeModeNavigationManager_ClearAssociateActors_Params
{
};

// Function Creative.CreativeModeNavigationManager.CalSamplePointsInBox
struct UCreativeModeNavigationManager_CalSamplePointsInBox_Params
{
	struct FVector                                     BoxMin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     BoxMax;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              StepSize;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxPoints;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeNavigationManager.CalSamplePoints
struct UCreativeModeNavigationManager_CalSamplePoints_Params
{
	struct FVector                                     StartPos;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              StepSize;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxPoints;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeNavigationManager.AddNavAffectedObjects
struct UCreativeModeNavigationManager_AddNavAffectedObjects_Params
{
	TArray<class AActor*>                              Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeModeNavigationManager.AddNavAffectedObject
struct UCreativeModeNavigationManager_AddNavAffectedObject_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeObjectInterface.ReceiveOnPostSetInstanceId
struct UCreativeModeObjectInterface_ReceiveOnPostSetInstanceId_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeObjectManager.SpawnObjectForStreaming
struct UCreativeModeObjectManager_SpawnObjectForStreaming_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeObjectManager.SpawnObjectForBatchManager
struct UCreativeModeObjectManager_SpawnObjectForBatchManager_Params
{
	struct FString                                     InstanceID;                                               // (Parm, OutParm, ZeroConstructor)
	struct FTransform                                  SpawnTransform;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function Creative.CreativeModeObjectManager.SpawnObject
struct UCreativeModeObjectManager_SpawnObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeObjectManager.SetObjectTempStreamingType
struct UCreativeModeObjectManager_SetObjectTempStreamingType_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	ECreativeModeActorStreamingType                    TempStreamingType;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeObjectManager.ResetObjectStreamingType
struct UCreativeModeObjectManager_ResetObjectStreamingType_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeObjectManager.RemoveSpawnObjectInfoFormQueue
struct UCreativeModeObjectManager_RemoveSpawnObjectInfoFormQueue_Params
{
	struct FString                                     InstanceID;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeObjectManager.RemovePhysicsObject
struct UCreativeModeObjectManager_RemovePhysicsObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeObjectManager.RemoveObject
struct UCreativeModeObjectManager_RemoveObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeObjectManager.ReceiveUnregisterObject
struct UCreativeModeObjectManager_ReceiveUnregisterObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class UObject*                                     NewObject;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeObjectManager.ReceiveRegisterObject
struct UCreativeModeObjectManager_ReceiveRegisterObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class UObject*                                     NewObject;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeObjectManager.ReceiveClearAllObjects
struct UCreativeModeObjectManager_ReceiveClearAllObjects_Params
{
};

// Function Creative.CreativeModeObjectManager.OnObjectSpawnComplete
struct UCreativeModeObjectManager_OnObjectSpawnComplete_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeObjectManager.GetObjectTransform
struct UCreativeModeObjectManager_GetObjectTransform_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeObjectManager.GetObjectNum
struct UCreativeModeObjectManager_GetObjectNum_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeObjectManager.GetObjectAssetPath
struct UCreativeModeObjectManager_GetObjectAssetPath_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeObjectManager.GetObjectAssetID
struct UCreativeModeObjectManager_GetObjectAssetID_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeObjectManager.GetObject
struct UCreativeModeObjectManager_GetObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeObjectManager.GetActiveObjectNum
struct UCreativeModeObjectManager_GetActiveObjectNum_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeObjectManager.Get
struct UCreativeModeObjectManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeModeObjectManager*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeObjectManager.DestroyObjectForStreaming
struct UCreativeModeObjectManager_DestroyObjectForStreaming_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeObjectManager.DestroyObjectForBatchManager
struct UCreativeModeObjectManager_DestroyObjectForBatchManager_Params
{
	struct FString                                     InstanceID;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeObjectManager.DestroyObject
struct UCreativeModeObjectManager_DestroyObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeObjectManager.CheckObjectBeBatch
struct UCreativeModeObjectManager_CheckObjectBeBatch_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeObjectManager.ChangeObjectTransform
struct UCreativeModeObjectManager_ChangeObjectTransform_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeObjectManager.AddSpawnObjectToQueue
struct UCreativeModeObjectManager_AddSpawnObjectToQueue_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
};

// Function Creative.CreativeModeObjectManager.AddPhysicsObject
struct UCreativeModeObjectManager_AddPhysicsObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeObjectManager.AddObject
struct UCreativeModeObjectManager_AddObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FCreativeModeStreamingParameters            StreamingParameters;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsBatchActor.UpdatePhysicsComponentMaterial
struct ACreativePhysicsBatchActor_UpdatePhysicsComponentMaterial_Params
{
	struct FString                                     ComponentID;                                              // (Parm, OutParm, ZeroConstructor)
	struct FString                                     MaterialPath;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativePhysicsBatchActor.UpdatePhysicsComponent
struct ACreativePhysicsBatchActor_UpdatePhysicsComponent_Params
{
	struct FString                                     ComponentID;                                              // (Parm, OutParm, ZeroConstructor)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhysicsBatchActor.SetPhysicsComponentEnabled
struct ACreativePhysicsBatchActor_SetPhysicsComponentEnabled_Params
{
	struct FString                                     ComponentID;                                              // (Parm, OutParm, ZeroConstructor)
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhysicsBatchActor.ClearAllPhysicsComponent
struct ACreativePhysicsBatchActor_ClearAllPhysicsComponent_Params
{
};

// Function Creative.CreativePhysicsComponent.SetIsReplicatedOnly
struct UCreativePhysicsComponent_SetIsReplicatedOnly_Params
{
	bool                                               ShouldReplicate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.SetStreamingEnable
struct UCreativePhysicsManager_SetStreamingEnable_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.SetPhysicsActorVisible
struct UCreativePhysicsManager_SetPhysicsActorVisible_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.RemovePhysicsObject
struct UCreativePhysicsManager_RemovePhysicsObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativePhysicsManager.IsPhysicsActorVisible
struct UCreativePhysicsManager_IsPhysicsActorVisible_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.GetPhysicsBatchActorByInstanceID
struct UCreativePhysicsManager_GetPhysicsBatchActorByInstanceID_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class ACreativePhysicsBatchActor*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.GetPhysicsBatchActor
struct UCreativePhysicsManager_GetPhysicsBatchActor_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ACreativePhysicsBatchActor*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.GetLandscapeIndex
struct UCreativePhysicsManager_GetLandscapeIndex_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.Get
struct UCreativePhysicsManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativePhysicsManager*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.ClearAllPhysicsBatchActor
struct UCreativePhysicsManager_ClearAllPhysicsBatchActor_Params
{
};

// Function Creative.CreativePhysicsManager.AddPhysicsObject
struct UCreativePhysicsManager_AddPhysicsObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModePlayerState.ServerSetInstanceTransfrom
struct ACreativeModePlayerState_ServerSetInstanceTransfrom_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FTransform                                  InstanceTransform;                                        // (Parm, IsPlainOldData)
};

// Function Creative.CreativeModePlayerState.ServerRPC_RequestPullData
struct ACreativeModePlayerState_ServerRPC_RequestPullData_Params
{
	uint32_t                                           Seq;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<uint32_t>                                   InstanceIds;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeModePlayerState.ServerLoadBinaryData
struct ACreativeModePlayerState_ServerLoadBinaryData_Params
{
	TArray<unsigned char>                              PbBuffer;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeModePlayerState.ServerAddInstance
struct ACreativeModePlayerState_ServerAddInstance_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeModePlayerState.GM_LoadBinaryData
struct ACreativeModePlayerState_GM_LoadBinaryData_Params
{
	TArray<unsigned char>                              PbBuffer;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeModePlayerState.ClientRPC_RespondPullData
struct ACreativeModePlayerState_ClientRPC_RespondPullData_Params
{
	uint32_t                                           Seq;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCreativeInstanceDataContent>        InstanceDatas;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativePoolInterface.SetRecycleTime
struct UCreativePoolInterface_SetRecycleTime_Params
{
	float                                              RecycleTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePoolInterface.SetIsRecycled
struct UCreativePoolInterface_SetIsRecycled_Params
{
	bool                                               IsRecycled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePoolInterface.ReceiveOnReturnToPool
struct UCreativePoolInterface_ReceiveOnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RecycledSeq;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePoolInterface.ReceiveOnPickFromPool
struct UCreativePoolInterface_ReceiveOnPickFromPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
};

// Function Creative.CreativePoolInterface.OnReturnToPool
struct UCreativePoolInterface_OnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RecycledSeq;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePoolInterface.OnPickFromPool
struct UCreativePoolInterface_OnPickFromPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
};

// Function Creative.CreativePoolInterface.GetRecycleTime
struct UCreativePoolInterface_GetRecycleTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePoolInterface.CheckIsRecycled
struct UCreativePoolInterface_CheckIsRecycled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePoolManager.SetPoolManagerEnable
struct UCreativePoolManager_SetPoolManagerEnable_Params
{
	bool                                               bPoolManagerEnable;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePoolManager.ReturnObject
struct UCreativePoolManager_ReturnObject_Params
{
	int                                                PoolID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePoolManager.OnReceiveDestroyHandle
struct UCreativePoolManager_OnReceiveDestroyHandle_Params
{
	int                                                ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     InObj;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePoolManager.OnReceiveCreateHandle
struct UCreativePoolManager_OnReceiveCreateHandle_Params
{
	int                                                ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePoolManager.InitPool
struct UCreativePoolManager_InitPool_Params
{
	int                                                PoolID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCreativeObjectPoolClassConfig              PoolConfig;                                               // (Parm, OutParm)
	bool                                               bPoolEnable;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePoolManager.GetObject
struct UCreativePoolManager_GetObject_Params
{
	int                                                PoolID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, OutParm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePoolManager.Get
struct UCreativePoolManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativePoolManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.SetTeamGameOutcomeCondition
struct ACreativeRuntimePlayerBattleDataObject_SetTeamGameOutcomeCondition_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimeTeamGameOutcomeConditionInfo        TeamGameOutcomeCondition;                                 // (Parm, OutParm)
	bool                                               bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.SetPlayerBattleData
struct ACreativeRuntimePlayerBattleDataObject_SetPlayerBattleData_Params
{
	uint64_t                                           UId;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimePlayerBattleDataInfo                PlayerBattleData;                                         // (Parm, OutParm)
	bool                                               bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.OnRepTeamGameOutcomeConditionInfo
struct ACreativeRuntimePlayerBattleDataObject_OnRepTeamGameOutcomeConditionInfo_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.OnRepCurRoundPlayerBattleDataInfo
struct ACreativeRuntimePlayerBattleDataObject_OnRepCurRoundPlayerBattleDataInfo_Params
{
	uint64_t                                           PlayerUID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ChangeTeamID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.GetTeamGameOutcomeCondition
struct ACreativeRuntimePlayerBattleDataObject_GetTeamGameOutcomeCondition_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimeTeamGameOutcomeConditionInfo        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundPlayerBattleData
struct ACreativeRuntimePlayerBattleDataObject_GetCurRoundPlayerBattleData_Params
{
	uint64_t                                           PlayerUID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimePlayerBattleDataInfo                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundAllPlayerBattleData
struct ACreativeRuntimePlayerBattleDataObject_GetCurRoundAllPlayerBattleData_Params
{
	TArray<struct FRuntimePlayerBattleDataInfo>        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundPlayerBattleData
struct ACreativeRuntimePlayerBattleDataObject_GetCacheRoundPlayerBattleData_Params
{
	int                                                RoundIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           PlayerUID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimePlayerBattleDataInfo                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundBattleData
struct ACreativeRuntimePlayerBattleDataObject_GetCacheRoundBattleData_Params
{
	int                                                RoundIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimeCacheRoundBattleDataInfo            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.GetAllRoundPlayerBattleData
struct ACreativeRuntimePlayerBattleDataObject_GetAllRoundPlayerBattleData_Params
{
	uint64_t                                           PlayerUID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimePlayerBattleDataInfo                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.CacheCurRoundBattleData
struct ACreativeRuntimePlayerBattleDataObject_CacheCurRoundBattleData_Params
{
	int                                                RoundIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSceneQueryManager.RemoveReplicateObject
struct UCreativeSceneQueryManager_RemoveReplicateObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSceneQueryManager.RemoveReplicateData
struct UCreativeSceneQueryManager_RemoveReplicateData_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeSceneQueryManager.OnReceivePreReplicateDataRemove
struct UCreativeSceneQueryManager_OnReceivePreReplicateDataRemove_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Creative.CreativeSceneQueryManager.OnReceivePostReplicateDataChange
struct UCreativeSceneQueryManager_OnReceivePostReplicateDataChange_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	TArray<class UObject*>                             Objects;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeSceneQueryManager.OnReceivePostReplicateDataAdd
struct UCreativeSceneQueryManager_OnReceivePostReplicateDataAdd_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	TArray<class UObject*>                             Objects;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeSceneQueryManager.GetReplicatedObjects
struct UCreativeSceneQueryManager_GetReplicatedObjects_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeSceneQueryManager.Get
struct UCreativeSceneQueryManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeSceneQueryManager*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeSceneQueryManager.AddReplicateObjectPostDeferred
struct UCreativeSceneQueryManager_AddReplicateObjectPostDeferred_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
	class UObject*                                     ReplicatedObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSceneQueryManager.AddReplicateObjectDeferred
struct UCreativeSceneQueryManager_AddReplicateObjectDeferred_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class UClass*                                      ObjectClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
	ESpawnActorCollisionHandlingMethod                 CollisionHandlingOverride;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeSceneQueryManager.AddReplicateObject
struct UCreativeSceneQueryManager_AddReplicateObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class UClass*                                      ObjectClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
	ESpawnActorCollisionHandlingMethod                 CollisionHandlingOverride;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeSoftComponentManager.Get
struct UCreativeModeSoftComponentManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeModeSoftComponentManager*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeStaticMeshComponent.OnReturnToPool
struct UCreativeStaticMeshComponent_OnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RecycledSeq;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeStaticMeshComponent.OnPickFromPool
struct UCreativeStaticMeshComponent_OnPickFromPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeStreamingManager.StreamingManagerEnable
struct UCreativeModeStreamingManager_StreamingManagerEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeStreamingManager.RemoveStreamingObject
struct UCreativeModeStreamingManager_RemoveStreamingObject_Params
{
	struct FString                                     InstanceID;                                               // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeStreamingManager.GetOnGridCellIndex
struct UCreativeModeStreamingManager_GetOnGridCellIndex_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FIntVector                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeStreamingManager.GetGridLoadingRange
struct UCreativeModeStreamingManager_GetGridLoadingRange_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeStreamingManager.GetGridList
struct UCreativeModeStreamingManager_GetGridList_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeStreamingManager.GetGridCellWidthHeight
struct UCreativeModeStreamingManager_GetGridCellWidthHeight_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeStreamingManager.Get
struct UCreativeModeStreamingManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeModeStreamingManager*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeStreamingManager.ChangeStreamingObjectStreamingType
struct UCreativeModeStreamingManager_ChangeStreamingObjectStreamingType_Params
{
	struct FString                                     InstanceID;                                               // (ConstParm, Parm, ZeroConstructor)
	ECreativeModeActorStreamingType                    NewStremaingType;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ECreativeModeActorStreamingType                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeStreamingManager.AddStreamingObject
struct UCreativeModeStreamingManager_AddStreamingObject_Params
{
	struct FString                                     InstanceID;                                               // (ConstParm, Parm, ZeroConstructor)
	struct FCreativeModeStreamingParameters            StreamingParameters;                                      // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeWorldSubSystem.GetPhysicsBatchActor
struct UCreativeWorldSubSystem_GetPhysicsBatchActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.SoftStaticMeshComponent.SetSoftStaticMeshAsync
struct USoftStaticMeshComponent_SetSoftStaticMeshAsync_Params
{
	class UStaticMesh*                                 NewMesh;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.SoftStaticMeshComponent.SetSoftStaticMesh
struct USoftStaticMeshComponent_SetSoftStaticMesh_Params
{
	class UStaticMesh*                                 NewMesh;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetStaticMesh;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.SoftStaticMeshComponent.OnClientAsyncLoaded
struct USoftStaticMeshComponent_OnClientAsyncLoaded_Params
{
	struct FSoftObjectPath                             SoftObjectPath;                                           // (Parm)
};

}

