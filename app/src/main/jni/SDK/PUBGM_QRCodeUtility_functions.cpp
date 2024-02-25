// Pubg Mobile (2.6.1) SDKGen by @XNinja_Leaks | @talhaeens
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QRCodeUtility.ZXingScanner.Encode
// ()
// Parameters:
// struct FString                 Text                           (Parm, ZeroConstructor)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UZXingScanner::Encode(const struct FString& Text)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QRCodeUtility.ZXingScanner.Encode");

	UZXingScanner_Encode_Params params;
	params.Text = Text;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QRCodeUtility.ZXingScanner.Decode
// ()
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FZXingScanResult        OutResult                      (Parm, OutParm)
// struct FVector4                InRect                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UZXingScanner::Decode(class UTexture2D* Texture, const struct FVector4& InRect, struct FZXingScanResult* OutResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QRCodeUtility.ZXingScanner.Decode");

	UZXingScanner_Decode_Params params;
	params.Texture = Texture;
	params.InRect = InRect;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;

	return params.ReturnValue;
}


}

