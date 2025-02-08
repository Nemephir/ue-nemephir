// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLMRQPipeline/Public/OWL360Camera/OWL360CameraMoviePipelinePass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWL360CameraMoviePipelinePass() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPassBase();
	OWL360CAMERA_API UEnum* Z_Construct_UEnum_OWL360Camera_E360ProjectionType();
	OWL360CAMERA_API UEnum* Z_Construct_UEnum_OWL360Camera_EStreamResolution_360();
	OWLMRQPIPELINE_API UClass* Z_Construct_UClass_UOWL360CameraMoviePipelinePass();
	OWLMRQPIPELINE_API UClass* Z_Construct_UClass_UOWL360CameraMoviePipelinePass_NoRegister();
	OWLMRQPIPELINE_API UEnum* Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth();
	UPackage* Z_Construct_UPackage__Script_OWLMRQPipeline();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOWLBitDepth;
	static UEnum* EOWLBitDepth_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOWLBitDepth.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOWLBitDepth.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth, (UObject*)Z_Construct_UPackage__Script_OWLMRQPipeline(), TEXT("EOWLBitDepth"));
		}
		return Z_Registration_Info_UEnum_EOWLBitDepth.OuterSingleton;
	}
	template<> OWLMRQPIPELINE_API UEnum* StaticEnum<EOWLBitDepth>()
	{
		return EOWLBitDepth_StaticEnum();
	}
	struct Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth_Statics::Enumerators[] = {
		{ "EOWLBitDepth::BT_8Bit", (int64)EOWLBitDepth::BT_8Bit },
		{ "EOWLBitDepth::BT_16Bit", (int64)EOWLBitDepth::BT_16Bit },
		{ "EOWLBitDepth::BT_32Bit", (int64)EOWLBitDepth::BT_32Bit },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth_Statics::Enum_MetaDataParams[] = {
		{ "BT_16Bit.DisplayName", "16 Bit" },
		{ "BT_16Bit.Name", "EOWLBitDepth::BT_16Bit" },
		{ "BT_32Bit.DisplayName", "32 Bit" },
		{ "BT_32Bit.Name", "EOWLBitDepth::BT_32Bit" },
		{ "BT_8Bit.DisplayName", "8 Bit" },
		{ "BT_8Bit.Name", "EOWLBitDepth::BT_8Bit" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OWLMRQPipeline,
		nullptr,
		"EOWLBitDepth",
		"EOWLBitDepth",
		Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth()
	{
		if (!Z_Registration_Info_UEnum_EOWLBitDepth.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOWLBitDepth.InnerSingleton, Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOWLBitDepth.InnerSingleton;
	}
	DEFINE_FUNCTION(UOWL360CameraMoviePipelinePass::execSetCustomOutputResolution)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_InRes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomOutputResolution(Z_Param_InRes);
		P_NATIVE_END;
	}
	void UOWL360CameraMoviePipelinePass::StaticRegisterNativesUOWL360CameraMoviePipelinePass()
	{
		UClass* Class = UOWL360CameraMoviePipelinePass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCustomOutputResolution", &UOWL360CameraMoviePipelinePass::execSetCustomOutputResolution },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics
	{
		struct OWL360CameraMoviePipelinePass_eventSetCustomOutputResolution_Parms
		{
			FIntPoint InRes;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::NewProp_InRes = { "InRes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWL360CameraMoviePipelinePass_eventSetCustomOutputResolution_Parms, InRes), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::NewProp_InRes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWL360CameraMoviePipelinePass, nullptr, "SetCustomOutputResolution", nullptr, nullptr, Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::OWL360CameraMoviePipelinePass_eventSetCustomOutputResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::OWL360CameraMoviePipelinePass_eventSetCustomOutputResolution_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWL360CameraMoviePipelinePass);
	UClass* Z_Construct_UClass_UOWL360CameraMoviePipelinePass_NoRegister()
	{
		return UOWL360CameraMoviePipelinePass::StaticClass();
	}
	struct Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPathTracing_MetaData[];
#endif
		static void NewProp_bPathTracing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPathTracing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReferenceMotionBlur_MetaData[];
#endif
		static void NewProp_bReferenceMotionBlur_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReferenceMotionBlur;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ProjectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StereoEyeSeparation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StereoEyeSeparation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DomeAngle_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DomeAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DomeRotatorOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DomeRotatorOffset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputResolution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputResolution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomOutputResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomOutputResolution;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IntermediateBitDepth_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateBitDepth_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IntermediateBitDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableParallelRendering_MetaData[];
#endif
		static void NewProp_bDisableParallelRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableParallelRendering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableMultipleSceneViewStates_MetaData[];
#endif
		static void NewProp_bDisableMultipleSceneViewStates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableMultipleSceneViewStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderFrontFace_MetaData[];
#endif
		static void NewProp_RenderFrontFace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderFrontFace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderBackFace_MetaData[];
#endif
		static void NewProp_RenderBackFace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderBackFace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderLeftFace_MetaData[];
#endif
		static void NewProp_RenderLeftFace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderLeftFace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderRightFace_MetaData[];
#endif
		static void NewProp_RenderRightFace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderRightFace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTopFace_MetaData[];
#endif
		static void NewProp_RenderTopFace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderTopFace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderBottomFace_MetaData[];
#endif
		static void NewProp_RenderBottomFace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderBottomFace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineDeferredPassBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLMRQPipeline,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWL360CameraMoviePipelinePass_SetCustomOutputResolution, "SetCustomOutputResolution" }, // 2513209374
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OWL360Camera/OWL360CameraMoviePipelinePass.h" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bPathTracing_MetaData[] = {
		{ "Category", "Path Tracer" },
		{ "Comment", "// Path Tracing\n" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
		{ "ToolTip", "Path Tracing" },
	};
#endif
	void Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bPathTracing_SetBit(void* Obj)
	{
		((UOWL360CameraMoviePipelinePass*)Obj)->bPathTracing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bPathTracing = { "bPathTracing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWL360CameraMoviePipelinePass), &Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bPathTracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bPathTracing_MetaData), Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bPathTracing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bReferenceMotionBlur_MetaData[] = {
		{ "Category", "Reference Motion Blur" },
		{ "Comment", "/** When enabled, the path tracer will blend all spatial and temporal samples prior to the denoising and will disable post-processed motion blur.\n     *  In this mode it is possible to use higher temporal sample counts to improve the motion blur quality.\n     *  When this option is disabled, the path tracer will accumulate spatial samples, but denoise them prior to accumulation of temporal samples.\n     */" },
		{ "EditCondition", "bPathTracing" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
		{ "ToolTip", "When enabled, the path tracer will blend all spatial and temporal samples prior to the denoising and will disable post-processed motion blur.\nIn this mode it is possible to use higher temporal sample counts to improve the motion blur quality.\nWhen this option is disabled, the path tracer will accumulate spatial samples, but denoise them prior to accumulation of temporal samples." },
	};
#endif
	void Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bReferenceMotionBlur_SetBit(void* Obj)
	{
		((UOWL360CameraMoviePipelinePass*)Obj)->bReferenceMotionBlur = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bReferenceMotionBlur = { "bReferenceMotionBlur", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWL360CameraMoviePipelinePass), &Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bReferenceMotionBlur_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bReferenceMotionBlur_MetaData), Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bReferenceMotionBlur_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_ProjectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_ProjectionType_MetaData[] = {
		{ "Category", "Output Options" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_ProjectionType = { "ProjectionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWL360CameraMoviePipelinePass, ProjectionType), Z_Construct_UEnum_OWL360Camera_E360ProjectionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_ProjectionType_MetaData), Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_ProjectionType_MetaData) }; // 1372482811
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_StereoEyeSeparation_MetaData[] = {
		{ "Category", "Output Options" },
		{ "Comment", "/* Set the gap between left eye and right eye in world units */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "EditCondition", "ProjectionType == E360ProjectionType::CT_StereoVR180" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
		{ "ToolTip", "Set the gap between left eye and right eye in world units" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_StereoEyeSeparation = { "StereoEyeSeparation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWL360CameraMoviePipelinePass, StereoEyeSeparation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_StereoEyeSeparation_MetaData), Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_StereoEyeSeparation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_DomeAngle_MetaData[] = {
		{ "Category", "Output Options" },
		{ "EditCondition", "ProjectionType == E360ProjectionType::CT_DomeMaster" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_DomeAngle = { "DomeAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWL360CameraMoviePipelinePass, DomeAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_DomeAngle_MetaData), Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_DomeAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_DomeRotatorOffset_MetaData[] = {
		{ "Category", "Output Options" },
		{ "EditCondition", "ProjectionType == E360ProjectionType::CT_DomeMaster" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_DomeRotatorOffset = { "DomeRotatorOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWL360CameraMoviePipelinePass, DomeRotatorOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_DomeRotatorOffset_MetaData), Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_DomeRotatorOffset_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_OutputResolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_OutputResolution_MetaData[] = {
		{ "Category", "Output Options" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_OutputResolution = { "OutputResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWL360CameraMoviePipelinePass, OutputResolution), Z_Construct_UEnum_OWL360Camera_EStreamResolution_360, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_OutputResolution_MetaData), Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_OutputResolution_MetaData) }; // 517733388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_CustomOutputResolution_MetaData[] = {
		{ "BlueprintSetter", "SetCustomOutputResolution" },
		{ "Category", "Output Options" },
		{ "EditCondition", "OutputResolution == EStreamResolution_360::RS_360_Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_CustomOutputResolution = { "CustomOutputResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWL360CameraMoviePipelinePass, CustomOutputResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_CustomOutputResolution_MetaData), Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_CustomOutputResolution_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_IntermediateBitDepth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_IntermediateBitDepth_MetaData[] = {
		{ "Category", "Output Options|Advanced" },
		{ "Comment", "/* To target specific outputs you may find you get a better result by forcing intermediate processing to a given bit rate */" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
		{ "ToolTip", "To target specific outputs you may find you get a better result by forcing intermediate processing to a given bit rate" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_IntermediateBitDepth = { "IntermediateBitDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWL360CameraMoviePipelinePass, IntermediateBitDepth), Z_Construct_UEnum_OWLMRQPipeline_EOWLBitDepth, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_IntermediateBitDepth_MetaData), Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_IntermediateBitDepth_MetaData) }; // 152751592
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableParallelRendering_MetaData[] = {
		{ "Category", "Output Options|Advanced" },
		{ "Comment", "/* Ensures that each frame completes before rendering the next. Very important with large resolutions */" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
		{ "ToolTip", "Ensures that each frame completes before rendering the next. Very important with large resolutions" },
	};
#endif
	void Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableParallelRendering_SetBit(void* Obj)
	{
		((UOWL360CameraMoviePipelinePass*)Obj)->bDisableParallelRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableParallelRendering = { "bDisableParallelRendering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWL360CameraMoviePipelinePass), &Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableParallelRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableParallelRendering_MetaData), Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableParallelRendering_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableMultipleSceneViewStates_MetaData[] = {
		{ "Category", "Output Options|Advanced" },
		{ "Comment", "/* Scene View States store large amount of temporal information to improve Nanite rendering, motion blur and other\n\x09 intra-frame post-process optimisations. Disabling multiple view states reduces GPU load at the cost\n\x09 of these effects. GPU Memory requirements are reduced at the cost of output quality. */" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
		{ "ToolTip", "Scene View States store large amount of temporal information to improve Nanite rendering, motion blur and other\n       intra-frame post-process optimisations. Disabling multiple view states reduces GPU load at the cost\n       of these effects. GPU Memory requirements are reduced at the cost of output quality." },
	};
#endif
	void Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableMultipleSceneViewStates_SetBit(void* Obj)
	{
		((UOWL360CameraMoviePipelinePass*)Obj)->bDisableMultipleSceneViewStates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableMultipleSceneViewStates = { "bDisableMultipleSceneViewStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWL360CameraMoviePipelinePass), &Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableMultipleSceneViewStates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableMultipleSceneViewStates_MetaData), Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableMultipleSceneViewStates_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderFrontFace_MetaData[] = {
		{ "Category", "Output Options|Advanced" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
#endif
	void Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderFrontFace_SetBit(void* Obj)
	{
		((UOWL360CameraMoviePipelinePass*)Obj)->RenderFrontFace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderFrontFace = { "RenderFrontFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWL360CameraMoviePipelinePass), &Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderFrontFace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderFrontFace_MetaData), Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderFrontFace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBackFace_MetaData[] = {
		{ "Category", "Output Options|Advanced" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
#endif
	void Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBackFace_SetBit(void* Obj)
	{
		((UOWL360CameraMoviePipelinePass*)Obj)->RenderBackFace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBackFace = { "RenderBackFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWL360CameraMoviePipelinePass), &Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBackFace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBackFace_MetaData), Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBackFace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderLeftFace_MetaData[] = {
		{ "Category", "Output Options|Advanced" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
#endif
	void Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderLeftFace_SetBit(void* Obj)
	{
		((UOWL360CameraMoviePipelinePass*)Obj)->RenderLeftFace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderLeftFace = { "RenderLeftFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWL360CameraMoviePipelinePass), &Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderLeftFace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderLeftFace_MetaData), Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderLeftFace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderRightFace_MetaData[] = {
		{ "Category", "Output Options|Advanced" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
#endif
	void Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderRightFace_SetBit(void* Obj)
	{
		((UOWL360CameraMoviePipelinePass*)Obj)->RenderRightFace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderRightFace = { "RenderRightFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWL360CameraMoviePipelinePass), &Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderRightFace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderRightFace_MetaData), Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderRightFace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderTopFace_MetaData[] = {
		{ "Category", "Output Options|Advanced" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
#endif
	void Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderTopFace_SetBit(void* Obj)
	{
		((UOWL360CameraMoviePipelinePass*)Obj)->RenderTopFace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderTopFace = { "RenderTopFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWL360CameraMoviePipelinePass), &Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderTopFace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderTopFace_MetaData), Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderTopFace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBottomFace_MetaData[] = {
		{ "Category", "Output Options|Advanced" },
		{ "ModuleRelativePath", "Public/OWL360Camera/OWL360CameraMoviePipelinePass.h" },
	};
#endif
	void Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBottomFace_SetBit(void* Obj)
	{
		((UOWL360CameraMoviePipelinePass*)Obj)->RenderBottomFace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBottomFace = { "RenderBottomFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWL360CameraMoviePipelinePass), &Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBottomFace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBottomFace_MetaData), Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBottomFace_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bPathTracing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bReferenceMotionBlur,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_ProjectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_ProjectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_StereoEyeSeparation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_DomeAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_DomeRotatorOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_OutputResolution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_OutputResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_CustomOutputResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_IntermediateBitDepth_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_IntermediateBitDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableParallelRendering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_bDisableMultipleSceneViewStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderFrontFace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBackFace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderLeftFace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderRightFace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderTopFace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::NewProp_RenderBottomFace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWL360CameraMoviePipelinePass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::ClassParams = {
		&UOWL360CameraMoviePipelinePass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOWL360CameraMoviePipelinePass()
	{
		if (!Z_Registration_Info_UClass_UOWL360CameraMoviePipelinePass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWL360CameraMoviePipelinePass.OuterSingleton, Z_Construct_UClass_UOWL360CameraMoviePipelinePass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOWL360CameraMoviePipelinePass.OuterSingleton;
	}
	template<> OWLMRQPIPELINE_API UClass* StaticClass<UOWL360CameraMoviePipelinePass>()
	{
		return UOWL360CameraMoviePipelinePass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWL360CameraMoviePipelinePass);
	UOWL360CameraMoviePipelinePass::~UOWL360CameraMoviePipelinePass() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_Statics::EnumInfo[] = {
		{ EOWLBitDepth_StaticEnum, TEXT("EOWLBitDepth"), &Z_Registration_Info_UEnum_EOWLBitDepth, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 152751592U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOWL360CameraMoviePipelinePass, UOWL360CameraMoviePipelinePass::StaticClass, TEXT("UOWL360CameraMoviePipelinePass"), &Z_Registration_Info_UClass_UOWL360CameraMoviePipelinePass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWL360CameraMoviePipelinePass), 1204441014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_279688327(TEXT("/Script/OWLMRQPipeline"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360CameraMoviePipelinePass_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
