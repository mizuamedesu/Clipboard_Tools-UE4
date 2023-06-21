// Copyright Epic Games, Inc. All Rights Reserved.

#include "Clipboard_ToolsBPLibrary.h"
#include "Clipboard_Tools.h"
#include "GenericPlatform/GenericPlatformMisc.h"  // Need this for the clipboard functions

UClipboard_ToolsBPLibrary::UClipboard_ToolsBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UClipboard_ToolsBPLibrary::CopyToClipboard(const FString& InString)
{
	FGenericPlatformMisc::ClipboardCopy(*InString);
}

FString UClipboard_ToolsBPLibrary::PasteFromClipboard()
{
	FString ClipboardContent;
	FGenericPlatformMisc::ClipboardPaste(ClipboardContent);
	return ClipboardContent;
}
