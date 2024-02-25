#pragma once

// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function QRCodeUtility.ZXingScanner.Encode
struct UZXingScanner_Encode_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QRCodeUtility.ZXingScanner.Decode
struct UZXingScanner_Decode_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FZXingScanResult                            OutResult;                                                // (Parm, OutParm)
	struct FVector4                                    InRect;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

