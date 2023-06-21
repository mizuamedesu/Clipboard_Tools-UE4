// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Clipboard_ToolsBPLibrary.generated.h"

UCLASS()
class UClipboard_ToolsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Copy to Clipboard", Keywords = "Clipboard copy"), Category = "Clipboard")
		static void CopyToClipboard(const FString& InString);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Paste from Clipboard", Keywords = "Clipboard paste"), Category = "Clipboard")
		static FString PasteFromClipboard();
};

