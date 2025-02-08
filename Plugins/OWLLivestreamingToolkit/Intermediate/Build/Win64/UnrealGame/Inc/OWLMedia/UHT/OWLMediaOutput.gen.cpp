// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLMedia/Public/OWLMediaOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLMediaOutput() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	OWLMEDIA_API UClass* Z_Construct_UClass_AOWLMediaOutput();
	OWLMEDIA_API UClass* Z_Construct_UClass_AOWLMediaOutput_NoRegister();
	OWLMEDIA_API UClass* Z_Construct_UClass_UOWLMediaOutputComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OWLMedia();
// End Cross Module References
	DEFINE_FUNCTION(AOWLMediaOutput::execIsReconnecting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReconnecting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLMediaOutput::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLMediaOutput::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Start();
		P_NATIVE_END;
	}
	void AOWLMediaOutput::StaticRegisterNativesAOWLMediaOutput()
	{
		UClass* Class = AOWLMediaOutput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsReconnecting", &AOWLMediaOutput::execIsReconnecting },
			{ "Start", &AOWLMediaOutput::execStart },
			{ "Stop", &AOWLMediaOutput::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics
	{
		struct OWLMediaOutput_eventIsReconnecting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLMediaOutput_eventIsReconnecting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLMediaOutput_eventIsReconnecting_Parms), &Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection State" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLMediaOutput, nullptr, "IsReconnecting", nullptr, nullptr, Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::OWLMediaOutput_eventIsReconnecting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::OWLMediaOutput_eventIsReconnecting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLMediaOutput_Start_Statics
	{
		struct OWLMediaOutput_eventStart_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLMediaOutput_eventStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLMediaOutput_eventStart_Parms), &Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "Output Controls" },
		{ "Comment", "// Blueprint compatibility functions\n" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
		{ "ToolTip", "Blueprint compatibility functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLMediaOutput, nullptr, "Start", nullptr, nullptr, Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::OWLMediaOutput_eventStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::OWLMediaOutput_eventStart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AOWLMediaOutput_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLMediaOutput_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLMediaOutput_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Output Controls" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLMediaOutput_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLMediaOutput, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLMediaOutput_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWLMediaOutput_Stop_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AOWLMediaOutput_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLMediaOutput_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLMediaOutput);
	UClass* Z_Construct_UClass_AOWLMediaOutput_NoRegister()
	{
		return AOWLMediaOutput::StaticClass();
	}
	struct Z_Construct_UClass_AOWLMediaOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaOutputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaOutputComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWLMediaOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWLMediaOutput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting, "IsReconnecting" }, // 3436416119
		{ &Z_Construct_UFunction_AOWLMediaOutput_Start, "Start" }, // 409135412
		{ &Z_Construct_UFunction_AOWLMediaOutput_Stop, "Stop" }, // 474236562
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "OWL Media Output" },
		{ "IncludePath", "OWLMediaOutput.h" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_MediaOutputComponent_MetaData[] = {
		{ "Category", "Media Output" },
		{ "Comment", "// Expose component properties to blueprints\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
		{ "ToolTip", "Expose component properties to blueprints" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_MediaOutputComponent = { "MediaOutputComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLMediaOutput, MediaOutputComponent), Z_Construct_UClass_UOWLMediaOutputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_MediaOutputComponent_MetaData), Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_MediaOutputComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLMediaOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_MediaOutputComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWLMediaOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLMediaOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLMediaOutput_Statics::ClassParams = {
		&AOWLMediaOutput::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOWLMediaOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWLMediaOutput_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AOWLMediaOutput()
	{
		if (!Z_Registration_Info_UClass_AOWLMediaOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLMediaOutput.OuterSingleton, Z_Construct_UClass_AOWLMediaOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOWLMediaOutput.OuterSingleton;
	}
	template<> OWLMEDIA_API UClass* StaticClass<AOWLMediaOutput>()
	{
		return AOWLMediaOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLMediaOutput);
	AOWLMediaOutput::~AOWLMediaOutput() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOWLMediaOutput, AOWLMediaOutput::StaticClass, TEXT("AOWLMediaOutput"), &Z_Registration_Info_UClass_AOWLMediaOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLMediaOutput), 3467783898U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_1845905741(TEXT("/Script/OWLMedia"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
