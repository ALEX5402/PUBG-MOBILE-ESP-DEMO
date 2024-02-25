// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OceanPlugin.AdvancedBuoyancyComponent.TriangleArea
// ()
// Parameters:
// struct FVector                 A                              (Parm, IsPlainOldData)
// struct FVector                 B                              (Parm, IsPlainOldData)
// struct FVector                 C                              (Parm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAdvancedBuoyancyComponent::TriangleArea(const struct FVector& A, const struct FVector& B, const struct FVector& C)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.TriangleArea");

	UAdvancedBuoyancyComponent_TriangleArea_Params params;
	params.A = A;
	params.B = B;
	params.C = C;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.SplitTriangle
// ()
// Parameters:
// struct FBuoyancyVertex         H                              (Parm)
// struct FBuoyancyVertex         M                              (Parm)
// struct FBuoyancyVertex         L                              (Parm)
// struct FVector                 InArrow                        (Parm, IsPlainOldData)
// TArray<struct FForceTriangle>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FForceTriangle> UAdvancedBuoyancyComponent::SplitTriangle(const struct FBuoyancyVertex& H, const struct FBuoyancyVertex& M, const struct FBuoyancyVertex& L, const struct FVector& InArrow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.SplitTriangle");

	UAdvancedBuoyancyComponent_SplitTriangle_Params params;
	params.H = H;
	params.M = M;
	params.L = L;
	params.InArrow = InArrow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.SetMeshDensity
// ()
// Parameters:
// float                          NewDensity                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewWaterDensity                (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedBuoyancyComponent::SetMeshDensity(float NewDensity, float NewWaterDensity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.SetMeshDensity");

	UAdvancedBuoyancyComponent_SetMeshDensity_Params params;
	params.NewDensity = NewDensity;
	params.NewWaterDensity = NewWaterDensity;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.GetOceanDepthFromGrid
// ()
// Parameters:
// struct FVector                 Position                       (Parm, IsPlainOldData)
// bool                           bJustGetHeightAtLocation       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAdvancedBuoyancyComponent::GetOceanDepthFromGrid(const struct FVector& Position, bool bJustGetHeightAtLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.GetOceanDepthFromGrid");

	UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Params params;
	params.Position = Position;
	params.bJustGetHeightAtLocation = bJustGetHeightAtLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.GetOcean
// ()

void UAdvancedBuoyancyComponent::GetOcean()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.GetOcean");

	UAdvancedBuoyancyComponent_GetOcean_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.DrawDebugStuff
// ()
// Parameters:
// struct FForceTriangle          TriForce                       (Parm)
// struct FColor                  DebugColor                     (Parm, IsPlainOldData)

void UAdvancedBuoyancyComponent::DrawDebugStuff(const struct FForceTriangle& TriForce, const struct FColor& DebugColor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.DrawDebugStuff");

	UAdvancedBuoyancyComponent_DrawDebugStuff_Params params;
	params.TriForce = TriForce;
	params.DebugColor = DebugColor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.ApplySlamForce
// ()
// Parameters:
// struct FVector                 SlamForce                      (Parm, IsPlainOldData)
// struct FVector                 TriCenter                      (Parm, IsPlainOldData)

void UAdvancedBuoyancyComponent::ApplySlamForce(const struct FVector& SlamForce, const struct FVector& TriCenter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.ApplySlamForce");

	UAdvancedBuoyancyComponent_ApplySlamForce_Params params;
	params.SlamForce = SlamForce;
	params.TriCenter = TriCenter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.ApplyForce
// ()
// Parameters:
// struct FForceTriangle          TriForce                       (Parm)

void UAdvancedBuoyancyComponent::ApplyForce(const struct FForceTriangle& TriForce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.ApplyForce");

	UAdvancedBuoyancyComponent_ApplyForce_Params params;
	params.TriForce = TriForce;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function OceanPlugin.BuoyancyForceComponent.SetUpdatedComponent
// ()
// Parameters:
// class USceneComponent*         NewUpdatedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBuoyancyForceComponent::SetUpdatedComponent(class USceneComponent* NewUpdatedComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.BuoyancyForceComponent.SetUpdatedComponent");

	UBuoyancyForceComponent_SetUpdatedComponent_Params params;
	params.NewUpdatedComponent = NewUpdatedComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction OceanPlugin.BuoyancyForceComponent.OnEnterWaterDelegate__DelegateSignature
// ()
// Parameters:
// bool                           IsUnderWater                   (Parm, ZeroConstructor, IsPlainOldData)

void UBuoyancyForceComponent::OnEnterWaterDelegate__DelegateSignature(bool IsUnderWater)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction OceanPlugin.BuoyancyForceComponent.OnEnterWaterDelegate__DelegateSignature");

	UBuoyancyForceComponent_OnEnterWaterDelegate__DelegateSignature_Params params;
	params.IsUnderWater = IsUnderWater;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction OceanPlugin.BuoyancyForceComponent.OnContactWaterDelegate__DelegateSignature
// ()
// Parameters:
// bool                           IsContactingWater              (Parm, ZeroConstructor, IsPlainOldData)

void UBuoyancyForceComponent::OnContactWaterDelegate__DelegateSignature(bool IsContactingWater)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction OceanPlugin.BuoyancyForceComponent.OnContactWaterDelegate__DelegateSignature");

	UBuoyancyForceComponent_OnContactWaterDelegate__DelegateSignature_Params params;
	params.IsContactingWater = IsContactingWater;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function OceanPlugin.BuoyancyForceComponent.NativeSetEnableCustomWaveForce
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UBuoyancyForceComponent::NativeSetEnableCustomWaveForce(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.BuoyancyForceComponent.NativeSetEnableCustomWaveForce");

	UBuoyancyForceComponent_NativeSetEnableCustomWaveForce_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function OceanPlugin.BuoyancyForceComponent.IsEntirelyUnderWater
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuoyancyForceComponent::IsEntirelyUnderWater()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.BuoyancyForceComponent.IsEntirelyUnderWater");

	UBuoyancyForceComponent_IsEntirelyUnderWater_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.BuoyancyForceComponent.IsContactedWater
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuoyancyForceComponent::IsContactedWater()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.BuoyancyForceComponent.IsContactedWater");

	UBuoyancyForceComponent_IsContactedWater_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.BuoyancyForceComponent.EndableUprightConstraint
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UBuoyancyForceComponent::EndableUprightConstraint(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.BuoyancyForceComponent.EndableUprightConstraint");

	UBuoyancyForceComponent_EndableUprightConstraint_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function OceanPlugin.BuoyancyForceComponent.CheckPointInWater
// ()
// Parameters:
// struct FVector                 Point                          (Parm, IsPlainOldData)
// bool                           isWorldPosition                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuoyancyForceComponent::CheckPointInWater(const struct FVector& Point, bool isWorldPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.BuoyancyForceComponent.CheckPointInWater");

	UBuoyancyForceComponent_CheckPointInWater_Params params;
	params.Point = Point;
	params.isWorldPosition = isWorldPosition;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.FlockFish.OnEndOverlap
// ()
// Parameters:
// class UPrimitiveComponent*     activatedComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AFlockFish::OnEndOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.FlockFish.OnEndOverlap");

	AFlockFish_OnEndOverlap_Params params;
	params.activatedComp = activatedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function OceanPlugin.FlockFish.OnBeginOverlap
// ()
// Parameters:
// class UPrimitiveComponent*     activatedComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFlockFish::OnBeginOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.FlockFish.OnBeginOverlap");

	AFlockFish_OnBeginOverlap_Params params;
	params.activatedComp = activatedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function OceanPlugin.OceanManager.OnRep_ReplicatedWorldRealTimeSeconds
// ()

void AOceanManager::OnRep_ReplicatedWorldRealTimeSeconds()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.OceanManager.OnRep_ReplicatedWorldRealTimeSeconds");

	AOceanManager_OnRep_ReplicatedWorldRealTimeSeconds_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function OceanPlugin.OceanManager.LoadLandscapeHeightmap
// ()
// Parameters:
// class UTexture2D*              Tex2D                          (Parm, ZeroConstructor, IsPlainOldData)

void AOceanManager::LoadLandscapeHeightmap(class UTexture2D* Tex2D)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.OceanManager.LoadLandscapeHeightmap");

	AOceanManager_LoadLandscapeHeightmap_Params params;
	params.Tex2D = Tex2D;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function OceanPlugin.OceanManager.GetHeightmapPixel
// ()
// Parameters:
// float                          U                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          V                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor AOceanManager::GetHeightmapPixel(float U, float V)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.OceanManager.GetHeightmapPixel");

	AOceanManager_GetHeightmapPixel_Params params;
	params.U = U;
	params.V = V;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.SegmentOceanManager.RemoveBoxComponent
// ()
// Parameters:
// class UWaterBoxComponent*      InBoxComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ASegmentOceanManager::RemoveBoxComponent(class UWaterBoxComponent* InBoxComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.SegmentOceanManager.RemoveBoxComponent");

	ASegmentOceanManager_RemoveBoxComponent_Params params;
	params.InBoxComponent = InBoxComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function OceanPlugin.SegmentOceanManager.AddBoxComponent
// ()
// Parameters:
// class UWaterBoxComponent*      InBoxComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USplineComponent*        InDirectionSpline              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ASegmentOceanManager::AddBoxComponent(class UWaterBoxComponent* InBoxComponent, class USplineComponent* InDirectionSpline)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.SegmentOceanManager.AddBoxComponent");

	ASegmentOceanManager_AddBoxComponent_Params params;
	params.InBoxComponent = InBoxComponent;
	params.InDirectionSpline = InDirectionSpline;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function OceanPlugin.TimeManager.SetCurrentLocalTime
// ()
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void ATimeManager::SetCurrentLocalTime(float Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.SetCurrentLocalTime");

	ATimeManager_SetCurrentLocalTime_Params params;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function OceanPlugin.TimeManager.IsLeapYear
// ()
// Parameters:
// int                            Year                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATimeManager::IsLeapYear(int Year)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.IsLeapYear");

	ATimeManager_IsLeapYear_Params params;
	params.Year = Year;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.InitializeCalendar
// ()
// Parameters:
// struct FTimeDate               Time                           (Parm)

void ATimeManager::InitializeCalendar(const struct FTimeDate& Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.InitializeCalendar");

	ATimeManager_InitializeCalendar_Params params;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function OceanPlugin.TimeManager.IncrementTime
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATimeManager::IncrementTime(float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.IncrementTime");

	ATimeManager_IncrementTime_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function OceanPlugin.TimeManager.GetYearPhase
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATimeManager::GetYearPhase()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetYearPhase");

	ATimeManager_GetYearPhase_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetElapsedDayInMinutes
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATimeManager::GetElapsedDayInMinutes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetElapsedDayInMinutes");

	ATimeManager_GetElapsedDayInMinutes_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDaysInYear
// ()
// Parameters:
// int                            Year                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATimeManager::GetDaysInYear(int Year)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetDaysInYear");

	ATimeManager_GetDaysInYear_Params params;
	params.Year = Year;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDaysInMonth
// ()
// Parameters:
// int                            Year                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Month                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATimeManager::GetDaysInMonth(int Year, int Month)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetDaysInMonth");

	ATimeManager_GetDaysInMonth_Params params;
	params.Year = Year;
	params.Month = Month;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDayPhase
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATimeManager::GetDayPhase()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetDayPhase");

	ATimeManager_GetDayPhase_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDayOfYear
// ()
// Parameters:
// struct FTimeDate               Time                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATimeManager::GetDayOfYear(const struct FTimeDate& Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetDayOfYear");

	ATimeManager_GetDayOfYear_Params params;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateSunAngle
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ATimeManager::CalculateSunAngle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.CalculateSunAngle");

	ATimeManager_CalculateSunAngle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateMoonPhase
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATimeManager::CalculateMoonPhase()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.CalculateMoonPhase");

	ATimeManager_CalculateMoonPhase_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateMoonAngle
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ATimeManager::CalculateMoonAngle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.CalculateMoonAngle");

	ATimeManager_CalculateMoonAngle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

