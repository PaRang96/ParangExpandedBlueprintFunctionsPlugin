// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParangExpandedBlueprintPlugin/Public/ExpandedFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpandedFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWindowMode();
	PARANGEXPANDEDBLUEPRINTPLUGIN_API UClass* Z_Construct_UClass_UExpandedFunctionLibrary();
	PARANGEXPANDEDBLUEPRINTPLUGIN_API UClass* Z_Construct_UClass_UExpandedFunctionLibrary_NoRegister();
	PARANGEXPANDEDBLUEPRINTPLUGIN_API UEnum* Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType();
	UPackage* Z_Construct_UPackage__Script_ParangExpandedBlueprintPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EExpandedFunctionLibraryLogType;
	static UEnum* EExpandedFunctionLibraryLogType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EExpandedFunctionLibraryLogType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EExpandedFunctionLibraryLogType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType, (UObject*)Z_Construct_UPackage__Script_ParangExpandedBlueprintPlugin(), TEXT("EExpandedFunctionLibraryLogType"));
		}
		return Z_Registration_Info_UEnum_EExpandedFunctionLibraryLogType.OuterSingleton;
	}
	template<> PARANGEXPANDEDBLUEPRINTPLUGIN_API UEnum* StaticEnum<EExpandedFunctionLibraryLogType>()
	{
		return EExpandedFunctionLibraryLogType_StaticEnum();
	}
	struct Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType_Statics::Enumerators[] = {
		{ "EExpandedFunctionLibraryLogType::Log", (int64)EExpandedFunctionLibraryLogType::Log },
		{ "EExpandedFunctionLibraryLogType::Warning", (int64)EExpandedFunctionLibraryLogType::Warning },
		{ "EExpandedFunctionLibraryLogType::Error", (int64)EExpandedFunctionLibraryLogType::Error },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Error.DisplayName", "Error" },
		{ "Error.Name", "EExpandedFunctionLibraryLogType::Error" },
		{ "Log.DisplayName", "Log" },
		{ "Log.Name", "EExpandedFunctionLibraryLogType::Log" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
		{ "Warning.DisplayName", "Warning" },
		{ "Warning.Name", "EExpandedFunctionLibraryLogType::Warning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ParangExpandedBlueprintPlugin,
		nullptr,
		"EExpandedFunctionLibraryLogType",
		"EExpandedFunctionLibraryLogType",
		Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType()
	{
		if (!Z_Registration_Info_UEnum_EExpandedFunctionLibraryLogType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EExpandedFunctionLibraryLogType.InnerSingleton, Z_Construct_UEnum_ParangExpandedBlueprintPlugin_EExpandedFunctionLibraryLogType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EExpandedFunctionLibraryLogType.InnerSingleton;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execParseTable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_PROPERTY(FStrProperty,Z_Param_Delimiter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UExpandedFunctionLibrary::ParseTable(Z_Param_Path,Z_Param_Delimiter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execIsAlmostSameVector)
	{
		P_GET_STRUCT(FVector,Z_Param_inVectorA);
		P_GET_STRUCT(FVector,Z_Param_inVectorB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UExpandedFunctionLibrary::IsAlmostSameVector(Z_Param_inVectorA,Z_Param_inVectorB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execIsAlmostSameFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inFloatA);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inFloatB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UExpandedFunctionLibrary::IsAlmostSameFloat(Z_Param_inFloatA,Z_Param_inFloatB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execOpenSoundWave)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundWave**)Z_Param__Result=UExpandedFunctionLibrary::OpenSoundWave(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execReadFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UExpandedFunctionLibrary::ReadFile(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execDeleteFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UExpandedFunctionLibrary::DeleteFile(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execConvertBytesToFloat)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UExpandedFunctionLibrary::ConvertBytesToFloat(Z_Param_Out_InBytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execConvertBytesToInt)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UExpandedFunctionLibrary::ConvertBytesToInt(Z_Param_Out_InBytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execConvertBytesToString)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UExpandedFunctionLibrary::ConvertBytesToString(Z_Param_Out_InBytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execConvertFloatToBytes)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFloat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UExpandedFunctionLibrary::ConvertFloatToBytes(Z_Param_InFloat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execConvertIntToBytes)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InInt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UExpandedFunctionLibrary::ConvertIntToBytes(Z_Param_InInt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execConvertStringToBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UExpandedFunctionLibrary::ConvertStringToBytes(Z_Param_InString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execSetWindowMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewWindowMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UExpandedFunctionLibrary::SetWindowMode(EWindowMode::Type(Z_Param_NewWindowMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execSetScreenResolution)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewScreenWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewScreenHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		UExpandedFunctionLibrary::SetScreenResolution(Z_Param_NewScreenWidth,Z_Param_NewScreenHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedFunctionLibrary::execSetScreenPosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewXCoord);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewYCoord);
		P_FINISH;
		P_NATIVE_BEGIN;
		UExpandedFunctionLibrary::SetScreenPosition(Z_Param_NewXCoord,Z_Param_NewYCoord);
		P_NATIVE_END;
	}
	void UExpandedFunctionLibrary::StaticRegisterNativesUExpandedFunctionLibrary()
	{
		UClass* Class = UExpandedFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertBytesToFloat", &UExpandedFunctionLibrary::execConvertBytesToFloat },
			{ "ConvertBytesToInt", &UExpandedFunctionLibrary::execConvertBytesToInt },
			{ "ConvertBytesToString", &UExpandedFunctionLibrary::execConvertBytesToString },
			{ "ConvertFloatToBytes", &UExpandedFunctionLibrary::execConvertFloatToBytes },
			{ "ConvertIntToBytes", &UExpandedFunctionLibrary::execConvertIntToBytes },
			{ "ConvertStringToBytes", &UExpandedFunctionLibrary::execConvertStringToBytes },
			{ "DeleteFile", &UExpandedFunctionLibrary::execDeleteFile },
			{ "IsAlmostSameFloat", &UExpandedFunctionLibrary::execIsAlmostSameFloat },
			{ "IsAlmostSameVector", &UExpandedFunctionLibrary::execIsAlmostSameVector },
			{ "OpenSoundWave", &UExpandedFunctionLibrary::execOpenSoundWave },
			{ "ParseTable", &UExpandedFunctionLibrary::execParseTable },
			{ "ReadFile", &UExpandedFunctionLibrary::execReadFile },
			{ "SetScreenPosition", &UExpandedFunctionLibrary::execSetScreenPosition },
			{ "SetScreenResolution", &UExpandedFunctionLibrary::execSetScreenResolution },
			{ "SetWindowMode", &UExpandedFunctionLibrary::execSetWindowMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToFloat_Statics
	{
		struct ExpandedFunctionLibrary_eventConvertBytesToFloat_Parms
		{
			TArray<uint8> InBytes;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InBytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InBytes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToFloat_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToFloat_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventConvertBytesToFloat_Parms, InBytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventConvertBytesToFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToFloat_Statics::NewProp_InBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToFloat_Statics::NewProp_InBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "ConvertBytesToFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToFloat_Statics::ExpandedFunctionLibrary_eventConvertBytesToFloat_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToInt_Statics
	{
		struct ExpandedFunctionLibrary_eventConvertBytesToInt_Parms
		{
			TArray<uint8> InBytes;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InBytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InBytes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToInt_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToInt_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventConvertBytesToInt_Parms, InBytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventConvertBytesToInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToInt_Statics::NewProp_InBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToInt_Statics::NewProp_InBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "ConvertBytesToInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToInt_Statics::ExpandedFunctionLibrary_eventConvertBytesToInt_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToString_Statics
	{
		struct ExpandedFunctionLibrary_eventConvertBytesToString_Parms
		{
			TArray<uint8> InBytes;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InBytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InBytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToString_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToString_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventConvertBytesToString_Parms, InBytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventConvertBytesToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToString_Statics::NewProp_InBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToString_Statics::NewProp_InBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "ConvertBytesToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToString_Statics::ExpandedFunctionLibrary_eventConvertBytesToString_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertFloatToBytes_Statics
	{
		struct ExpandedFunctionLibrary_eventConvertFloatToBytes_Parms
		{
			float InFloat;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFloat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertFloatToBytes_Statics::NewProp_InFloat = { "InFloat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventConvertFloatToBytes_Parms, InFloat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertFloatToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertFloatToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventConvertFloatToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertFloatToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertFloatToBytes_Statics::NewProp_InFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertFloatToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertFloatToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertFloatToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertFloatToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "ConvertFloatToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertFloatToBytes_Statics::ExpandedFunctionLibrary_eventConvertFloatToBytes_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertFloatToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertFloatToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertFloatToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertFloatToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertFloatToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertFloatToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertIntToBytes_Statics
	{
		struct ExpandedFunctionLibrary_eventConvertIntToBytes_Parms
		{
			int32 InInt;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InInt;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertIntToBytes_Statics::NewProp_InInt = { "InInt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventConvertIntToBytes_Parms, InInt), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertIntToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertIntToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventConvertIntToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertIntToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertIntToBytes_Statics::NewProp_InInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertIntToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertIntToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertIntToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertIntToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "ConvertIntToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertIntToBytes_Statics::ExpandedFunctionLibrary_eventConvertIntToBytes_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertIntToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertIntToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertIntToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertIntToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertIntToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertIntToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertStringToBytes_Statics
	{
		struct ExpandedFunctionLibrary_eventConvertStringToBytes_Parms
		{
			FString InString;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertStringToBytes_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventConvertStringToBytes_Parms, InString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertStringToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertStringToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventConvertStringToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertStringToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertStringToBytes_Statics::NewProp_InString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertStringToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertStringToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertStringToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertStringToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "ConvertStringToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertStringToBytes_Statics::ExpandedFunctionLibrary_eventConvertStringToBytes_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertStringToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertStringToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertStringToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertStringToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertStringToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertStringToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics
	{
		struct ExpandedFunctionLibrary_eventDeleteFile_Parms
		{
			FString Path;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventDeleteFile_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExpandedFunctionLibrary_eventDeleteFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ExpandedFunctionLibrary_eventDeleteFile_Parms), &Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "DeleteFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::ExpandedFunctionLibrary_eventDeleteFile_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameFloat_Statics
	{
		struct ExpandedFunctionLibrary_eventIsAlmostSameFloat_Parms
		{
			float inFloatA;
			float inFloatB;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_inFloatA;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_inFloatB;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameFloat_Statics::NewProp_inFloatA = { "inFloatA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventIsAlmostSameFloat_Parms, inFloatA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameFloat_Statics::NewProp_inFloatB = { "inFloatB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventIsAlmostSameFloat_Parms, inFloatB), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExpandedFunctionLibrary_eventIsAlmostSameFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ExpandedFunctionLibrary_eventIsAlmostSameFloat_Parms), &Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameFloat_Statics::NewProp_inFloatA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameFloat_Statics::NewProp_inFloatB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Number" },
		{ "DisplayName", "IsAlmostSameFloat" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "IsAlmostSameFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameFloat_Statics::ExpandedFunctionLibrary_eventIsAlmostSameFloat_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameVector_Statics
	{
		struct ExpandedFunctionLibrary_eventIsAlmostSameVector_Parms
		{
			FVector inVectorA;
			FVector inVectorB;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inVectorA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_inVectorB;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameVector_Statics::NewProp_inVectorA = { "inVectorA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventIsAlmostSameVector_Parms, inVectorA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameVector_Statics::NewProp_inVectorB = { "inVectorB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventIsAlmostSameVector_Parms, inVectorB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExpandedFunctionLibrary_eventIsAlmostSameVector_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ExpandedFunctionLibrary_eventIsAlmostSameVector_Parms), &Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameVector_Statics::NewProp_inVectorA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameVector_Statics::NewProp_inVectorB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Number" },
		{ "DisplayName", "IsAlmostSameVector" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "IsAlmostSameVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameVector_Statics::ExpandedFunctionLibrary_eventIsAlmostSameVector_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics
	{
		struct ExpandedFunctionLibrary_eventOpenSoundWave_Parms
		{
			FString Path;
			USoundWave* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventOpenSoundWave_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventOpenSoundWave_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "OpenSoundWave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::ExpandedFunctionLibrary_eventOpenSoundWave_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_ParseTable_Statics
	{
		struct ExpandedFunctionLibrary_eventParseTable_Parms
		{
			FString Path;
			FString Delimiter;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Delimiter;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ParseTable_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventParseTable_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ParseTable_Statics::NewProp_Delimiter = { "Delimiter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventParseTable_Parms, Delimiter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ParseTable_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ParseTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventParseTable_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_ParseTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ParseTable_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ParseTable_Statics::NewProp_Delimiter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ParseTable_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ParseTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_ParseTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_ParseTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "ParseTable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_ParseTable_Statics::ExpandedFunctionLibrary_eventParseTable_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_ParseTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_ParseTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_ParseTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_ParseTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_ParseTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_ParseTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics
	{
		struct ExpandedFunctionLibrary_eventReadFile_Parms
		{
			FString Path;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventReadFile_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventReadFile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "ReadFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::ExpandedFunctionLibrary_eventReadFile_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics
	{
		struct ExpandedFunctionLibrary_eventSetScreenPosition_Parms
		{
			int32 NewXCoord;
			int32 NewYCoord;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewXCoord;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewYCoord;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::NewProp_NewXCoord = { "NewXCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventSetScreenPosition_Parms, NewXCoord), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::NewProp_NewYCoord = { "NewYCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventSetScreenPosition_Parms, NewYCoord), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::NewProp_NewXCoord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::NewProp_NewYCoord,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Screen" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "SetScreenPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::ExpandedFunctionLibrary_eventSetScreenPosition_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics
	{
		struct ExpandedFunctionLibrary_eventSetScreenResolution_Parms
		{
			int32 NewScreenWidth;
			int32 NewScreenHeight;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewScreenWidth;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewScreenHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::NewProp_NewScreenWidth = { "NewScreenWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventSetScreenResolution_Parms, NewScreenWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::NewProp_NewScreenHeight = { "NewScreenHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventSetScreenResolution_Parms, NewScreenHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::NewProp_NewScreenWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::NewProp_NewScreenHeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Screen" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "SetScreenResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::ExpandedFunctionLibrary_eventSetScreenResolution_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics
	{
		struct ExpandedFunctionLibrary_eventSetWindowMode_Parms
		{
			TEnumAsByte<EWindowMode::Type> NewWindowMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewWindowMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::NewProp_NewWindowMode = { "NewWindowMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedFunctionLibrary_eventSetWindowMode_Parms, NewWindowMode), Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(nullptr, 0) }; // 2666347754
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::NewProp_NewWindowMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Screen" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedFunctionLibrary, nullptr, "SetWindowMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::ExpandedFunctionLibrary_eventSetWindowMode_Parms), Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExpandedFunctionLibrary);
	UClass* Z_Construct_UClass_UExpandedFunctionLibrary_NoRegister()
	{
		return UExpandedFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UExpandedFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExpandedFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ParangExpandedBlueprintPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExpandedFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToFloat, "ConvertBytesToFloat" }, // 2406870090
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToInt, "ConvertBytesToInt" }, // 3178033171
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertBytesToString, "ConvertBytesToString" }, // 2324060364
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertFloatToBytes, "ConvertFloatToBytes" }, // 120556836
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertIntToBytes, "ConvertIntToBytes" }, // 3532932477
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_ConvertStringToBytes, "ConvertStringToBytes" }, // 2686454017
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_DeleteFile, "DeleteFile" }, // 2898114434
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameFloat, "IsAlmostSameFloat" }, // 3888141862
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_IsAlmostSameVector, "IsAlmostSameVector" }, // 580429782
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_OpenSoundWave, "OpenSoundWave" }, // 1548592366
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_ParseTable, "ParseTable" }, // 3754427770
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_ReadFile, "ReadFile" }, // 2228539931
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenPosition, "SetScreenPosition" }, // 1821653411
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_SetScreenResolution, "SetScreenResolution" }, // 624673571
		{ &Z_Construct_UFunction_UExpandedFunctionLibrary_SetWindowMode, "SetWindowMode" }, // 468733353
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandedFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ExpandedFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ExpandedFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExpandedFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExpandedFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExpandedFunctionLibrary_Statics::ClassParams = {
		&UExpandedFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExpandedFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExpandedFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UExpandedFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExpandedFunctionLibrary.OuterSingleton, Z_Construct_UClass_UExpandedFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExpandedFunctionLibrary.OuterSingleton;
	}
	template<> PARANGEXPANDEDBLUEPRINTPLUGIN_API UClass* StaticClass<UExpandedFunctionLibrary>()
	{
		return UExpandedFunctionLibrary::StaticClass();
	}
	UExpandedFunctionLibrary::UExpandedFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExpandedFunctionLibrary);
	UExpandedFunctionLibrary::~UExpandedFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_ExpandedBlueprint_Plugins_ParangExpandedBlueprintPlugin_Source_ParangExpandedBlueprintPlugin_Public_ExpandedFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExpandedBlueprint_Plugins_ParangExpandedBlueprintPlugin_Source_ParangExpandedBlueprintPlugin_Public_ExpandedFunctionLibrary_h_Statics::EnumInfo[] = {
		{ EExpandedFunctionLibraryLogType_StaticEnum, TEXT("EExpandedFunctionLibraryLogType"), &Z_Registration_Info_UEnum_EExpandedFunctionLibraryLogType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 678392273U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExpandedBlueprint_Plugins_ParangExpandedBlueprintPlugin_Source_ParangExpandedBlueprintPlugin_Public_ExpandedFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExpandedFunctionLibrary, UExpandedFunctionLibrary::StaticClass, TEXT("UExpandedFunctionLibrary"), &Z_Registration_Info_UClass_UExpandedFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExpandedFunctionLibrary), 4145191456U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExpandedBlueprint_Plugins_ParangExpandedBlueprintPlugin_Source_ParangExpandedBlueprintPlugin_Public_ExpandedFunctionLibrary_h_181651330(TEXT("/Script/ParangExpandedBlueprintPlugin"),
		Z_CompiledInDeferFile_FID_ExpandedBlueprint_Plugins_ParangExpandedBlueprintPlugin_Source_ParangExpandedBlueprintPlugin_Public_ExpandedFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExpandedBlueprint_Plugins_ParangExpandedBlueprintPlugin_Source_ParangExpandedBlueprintPlugin_Public_ExpandedFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ExpandedBlueprint_Plugins_ParangExpandedBlueprintPlugin_Source_ParangExpandedBlueprintPlugin_Public_ExpandedFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExpandedBlueprint_Plugins_ParangExpandedBlueprintPlugin_Source_ParangExpandedBlueprintPlugin_Public_ExpandedFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
