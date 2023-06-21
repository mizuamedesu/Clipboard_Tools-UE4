// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLIPBOARD_TOOLS_Clipboard_ToolsBPLibrary_generated_h
#error "Clipboard_ToolsBPLibrary.generated.h already included, missing '#pragma once' in Clipboard_ToolsBPLibrary.h"
#endif
#define CLIPBOARD_TOOLS_Clipboard_ToolsBPLibrary_generated_h

#define ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_11_SPARSE_DATA
#define ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPasteFromClipboard); \
	DECLARE_FUNCTION(execCopyToClipboard);


#define ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPasteFromClipboard); \
	DECLARE_FUNCTION(execCopyToClipboard);


#define ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClipboard_ToolsBPLibrary(); \
	friend struct Z_Construct_UClass_UClipboard_ToolsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UClipboard_ToolsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Clipboard_Tools"), NO_API) \
	DECLARE_SERIALIZER(UClipboard_ToolsBPLibrary)


#define ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUClipboard_ToolsBPLibrary(); \
	friend struct Z_Construct_UClass_UClipboard_ToolsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UClipboard_ToolsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Clipboard_Tools"), NO_API) \
	DECLARE_SERIALIZER(UClipboard_ToolsBPLibrary)


#define ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClipboard_ToolsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClipboard_ToolsBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClipboard_ToolsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClipboard_ToolsBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClipboard_ToolsBPLibrary(UClipboard_ToolsBPLibrary&&); \
	NO_API UClipboard_ToolsBPLibrary(const UClipboard_ToolsBPLibrary&); \
public:


#define ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClipboard_ToolsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClipboard_ToolsBPLibrary(UClipboard_ToolsBPLibrary&&); \
	NO_API UClipboard_ToolsBPLibrary(const UClipboard_ToolsBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClipboard_ToolsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClipboard_ToolsBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClipboard_ToolsBPLibrary)


#define ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_11_PRIVATE_PROPERTY_OFFSET
#define ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_8_PROLOG
#define ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_11_SPARSE_DATA \
	ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_11_RPC_WRAPPERS \
	ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_11_INCLASS \
	ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_11_SPARSE_DATA \
	ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_11_INCLASS_NO_PURE_DECLS \
	ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Clipboard_ToolsBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIPBOARD_TOOLS_API UClass* StaticClass<class UClipboard_ToolsBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ASCII_Plugins_Clipboard_Tools_Source_Clipboard_Tools_Public_Clipboard_ToolsBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
