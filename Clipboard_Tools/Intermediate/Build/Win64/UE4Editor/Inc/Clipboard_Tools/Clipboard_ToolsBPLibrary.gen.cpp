// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Clipboard_Tools/Public/Clipboard_ToolsBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClipboard_ToolsBPLibrary() {}
// Cross Module References
	CLIPBOARD_TOOLS_API UClass* Z_Construct_UClass_UClipboard_ToolsBPLibrary_NoRegister();
	CLIPBOARD_TOOLS_API UClass* Z_Construct_UClass_UClipboard_ToolsBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Clipboard_Tools();
// End Cross Module References
	DEFINE_FUNCTION(UClipboard_ToolsBPLibrary::execPasteFromClipboard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UClipboard_ToolsBPLibrary::PasteFromClipboard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClipboard_ToolsBPLibrary::execCopyToClipboard)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UClipboard_ToolsBPLibrary::CopyToClipboard(Z_Param_InString);
		P_NATIVE_END;
	}
	void UClipboard_ToolsBPLibrary::StaticRegisterNativesUClipboard_ToolsBPLibrary()
	{
		UClass* Class = UClipboard_ToolsBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyToClipboard", &UClipboard_ToolsBPLibrary::execCopyToClipboard },
			{ "PasteFromClipboard", &UClipboard_ToolsBPLibrary::execPasteFromClipboard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UClipboard_ToolsBPLibrary_CopyToClipboard_Statics
	{
		struct Clipboard_ToolsBPLibrary_eventCopyToClipboard_Parms
		{
			FString InString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClipboard_ToolsBPLibrary_CopyToClipboard_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UClipboard_ToolsBPLibrary_CopyToClipboard_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Clipboard_ToolsBPLibrary_eventCopyToClipboard_Parms, InString), METADATA_PARAMS(Z_Construct_UFunction_UClipboard_ToolsBPLibrary_CopyToClipboard_Statics::NewProp_InString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UClipboard_ToolsBPLibrary_CopyToClipboard_Statics::NewProp_InString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClipboard_ToolsBPLibrary_CopyToClipboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClipboard_ToolsBPLibrary_CopyToClipboard_Statics::NewProp_InString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClipboard_ToolsBPLibrary_CopyToClipboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clipboard" },
		{ "DisplayName", "Copy to Clipboard" },
		{ "Keywords", "Clipboard copy" },
		{ "ModuleRelativePath", "Public/Clipboard_ToolsBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClipboard_ToolsBPLibrary_CopyToClipboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClipboard_ToolsBPLibrary, nullptr, "CopyToClipboard", nullptr, nullptr, sizeof(Clipboard_ToolsBPLibrary_eventCopyToClipboard_Parms), Z_Construct_UFunction_UClipboard_ToolsBPLibrary_CopyToClipboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClipboard_ToolsBPLibrary_CopyToClipboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClipboard_ToolsBPLibrary_CopyToClipboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClipboard_ToolsBPLibrary_CopyToClipboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClipboard_ToolsBPLibrary_CopyToClipboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClipboard_ToolsBPLibrary_CopyToClipboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClipboard_ToolsBPLibrary_PasteFromClipboard_Statics
	{
		struct Clipboard_ToolsBPLibrary_eventPasteFromClipboard_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UClipboard_ToolsBPLibrary_PasteFromClipboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Clipboard_ToolsBPLibrary_eventPasteFromClipboard_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClipboard_ToolsBPLibrary_PasteFromClipboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClipboard_ToolsBPLibrary_PasteFromClipboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClipboard_ToolsBPLibrary_PasteFromClipboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clipboard" },
		{ "DisplayName", "Paste from Clipboard" },
		{ "Keywords", "Clipboard paste" },
		{ "ModuleRelativePath", "Public/Clipboard_ToolsBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClipboard_ToolsBPLibrary_PasteFromClipboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClipboard_ToolsBPLibrary, nullptr, "PasteFromClipboard", nullptr, nullptr, sizeof(Clipboard_ToolsBPLibrary_eventPasteFromClipboard_Parms), Z_Construct_UFunction_UClipboard_ToolsBPLibrary_PasteFromClipboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClipboard_ToolsBPLibrary_PasteFromClipboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClipboard_ToolsBPLibrary_PasteFromClipboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClipboard_ToolsBPLibrary_PasteFromClipboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClipboard_ToolsBPLibrary_PasteFromClipboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClipboard_ToolsBPLibrary_PasteFromClipboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UClipboard_ToolsBPLibrary_NoRegister()
	{
		return UClipboard_ToolsBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UClipboard_ToolsBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClipboard_ToolsBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Clipboard_Tools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UClipboard_ToolsBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UClipboard_ToolsBPLibrary_CopyToClipboard, "CopyToClipboard" }, // 1755604011
		{ &Z_Construct_UFunction_UClipboard_ToolsBPLibrary_PasteFromClipboard, "PasteFromClipboard" }, // 1365796342
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClipboard_ToolsBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Clipboard_ToolsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/Clipboard_ToolsBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClipboard_ToolsBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClipboard_ToolsBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClipboard_ToolsBPLibrary_Statics::ClassParams = {
		&UClipboard_ToolsBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClipboard_ToolsBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClipboard_ToolsBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClipboard_ToolsBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClipboard_ToolsBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClipboard_ToolsBPLibrary, 3463077433);
	template<> CLIPBOARD_TOOLS_API UClass* StaticClass<UClipboard_ToolsBPLibrary>()
	{
		return UClipboard_ToolsBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClipboard_ToolsBPLibrary(Z_Construct_UClass_UClipboard_ToolsBPLibrary, &UClipboard_ToolsBPLibrary::StaticClass, TEXT("/Script/Clipboard_Tools"), TEXT("UClipboard_ToolsBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClipboard_ToolsBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
