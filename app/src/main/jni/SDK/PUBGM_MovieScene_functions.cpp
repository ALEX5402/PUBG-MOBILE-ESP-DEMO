// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MovieScene.MovieSceneEasingFunction.OnEvaluate
// ()
// Parameters:
// float                          Interp                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneEasingFunction::OnEvaluate(float Interp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneEasingFunction.OnEvaluate");

	UMovieSceneEasingFunction_OnEvaluate_Params params;
	params.Interp = Interp;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.Stop
// ()

void UMovieSceneSequencePlayer::Stop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Stop");

	UMovieSceneSequencePlayer_Stop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.StartPlayingNextTick
// ()

void UMovieSceneSequencePlayer::StartPlayingNextTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.StartPlayingNextTick");

	UMovieSceneSequencePlayer_StartPlayingNextTick_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
// ()
// Parameters:
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlayRate");

	UMovieSceneSequencePlayer_SetPlayRate_Params params;
	params.PlayRate = PlayRate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.SetPlayLoopCount
// ()
// Parameters:
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequencePlayer::SetPlayLoopCount(int NumLoops)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlayLoopCount");

	UMovieSceneSequencePlayer_SetPlayLoopCount_Params params;
	params.NumLoops = NumLoops;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
// ()
// Parameters:
// float                          NewStartTime                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewEndTime                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequencePlayer::SetPlaybackRange(float NewStartTime, float NewEndTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange");

	UMovieSceneSequencePlayer_SetPlaybackRange_Params params;
	params.NewStartTime = NewStartTime;
	params.NewEndTime = NewEndTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
// ()
// Parameters:
// float                          NewPlaybackPosition            (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition");

	UMovieSceneSequencePlayer_SetPlaybackPosition_Params params;
	params.NewPlaybackPosition = NewPlaybackPosition;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.Scrub
// ()

void UMovieSceneSequencePlayer::Scrub()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Scrub");

	UMovieSceneSequencePlayer_Scrub_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
// ()

void UMovieSceneSequencePlayer::PlayReverse()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayReverse");

	UMovieSceneSequencePlayer_PlayReverse_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
// ()
// Parameters:
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequencePlayer::PlayLooping(int NumLoops)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayLooping");

	UMovieSceneSequencePlayer_PlayLooping_Params params;
	params.NumLoops = NumLoops;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.Play
// ()

void UMovieSceneSequencePlayer::Play()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Play");

	UMovieSceneSequencePlayer_Play_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.Pause
// ()

void UMovieSceneSequencePlayer::Pause()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Pause");

	UMovieSceneSequencePlayer_Pause_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.JumpToPositionEx
// ()
// Parameters:
// float                          NewPlaybackPosition            (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequencePlayer::JumpToPositionEx(float NewPlaybackPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToPositionEx");

	UMovieSceneSequencePlayer_JumpToPositionEx_Params params;
	params.NewPlaybackPosition = NewPlaybackPosition;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.JumpToPosition
// ()
// Parameters:
// float                          NewPlaybackPosition            (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequencePlayer::JumpToPosition(float NewPlaybackPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToPosition");

	UMovieSceneSequencePlayer_JumpToPosition_Params params;
	params.NewPlaybackPosition = NewPlaybackPosition;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneSequencePlayer::IsPlaying()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPlaying");

	UMovieSceneSequencePlayer_IsPlaying_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.IsPaused
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneSequencePlayer::IsPaused()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPaused");

	UMovieSceneSequencePlayer_IsPaused_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
// ()

void UMovieSceneSequencePlayer::GoToEndAndStop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop");

	UMovieSceneSequencePlayer_GoToEndAndStop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneSequencePlayer::GetPlayRate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlayRate");

	UMovieSceneSequencePlayer_GetPlayRate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneSequencePlayer::GetPlaybackStart()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart");

	UMovieSceneSequencePlayer_GetPlaybackStart_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneSequencePlayer::GetPlaybackPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition");

	UMovieSceneSequencePlayer_GetPlaybackPosition_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneSequencePlayer::GetPlaybackEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd");

	UMovieSceneSequencePlayer_GetPlaybackEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetLength
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneSequencePlayer::GetLength()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetLength");

	UMovieSceneSequencePlayer_GetLength_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
// ()
// Parameters:
// struct FMovieSceneObjectBindingID ObjectBinding                  (Parm)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UMovieSceneSequencePlayer::GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects");

	UMovieSceneSequencePlayer_GetBoundObjects_Params params;
	params.ObjectBinding = ObjectBinding;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
// ()

void UMovieSceneSequencePlayer::ChangePlaybackDirection()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection");

	UMovieSceneSequencePlayer_ChangePlaybackDirection_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

