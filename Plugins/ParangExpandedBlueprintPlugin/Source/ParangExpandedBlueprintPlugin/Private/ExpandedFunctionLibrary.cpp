// Fill out your copyright notice in the Description page of Project Settings.


#include "ExpandedFunctionLibrary.h"
#include "GameFramework/GameUserSettings.h"
#include "Sound/SoundWave.h"

DEFINE_LOG_CATEGORY(ParangExpandedBlueprintPluginLog);

void UExpandedFunctionLibrary::SetScreenPosition(int NewXCoord, int NewYCoord)
{
	if (GEngine)
	{
		if (GEngine->GameViewport)
		{
			FVector2D NewWindowPosition = FVector2D(NewXCoord, NewYCoord);
			GEngine->GameViewport->GetWindow()->MoveWindowTo(NewWindowPosition);
			MakeLog("Finisehd Moving Window to Target Location", EExpandedFunctionLibraryLogType::Log);
		}
		else
		{
			MakeLog("Failed Moving Window, Inavlid GameViewport", EExpandedFunctionLibraryLogType::Error);
		}
	}
	else
	{
		MakeLog("Failed Moving Window, Check GEngine Reference", EExpandedFunctionLibraryLogType::Error);
	}
}

void UExpandedFunctionLibrary::SetScreenResolution(int NewScreenWidth, int NewScreenHeight)
{
	if (!GEngine)
	{
		MakeLog("Failed Changing Resolution, While Getting GEngine Reference", EExpandedFunctionLibraryLogType::Error);
		return;
	}
	UGameUserSettings* GameUserSettings = GEngine->GetGameUserSettings();
	if (!GameUserSettings)
	{
		MakeLog("Failed Changing Resolution, While Getting GameUserSettings Info", EExpandedFunctionLibraryLogType::Error);
		return;
	}
	if (NewScreenWidth <= 0 || NewScreenHeight <= 0)
	{
		MakeLog("Failed Changing Resolution, Check New Resolution Input", EExpandedFunctionLibraryLogType::Warning);
		return;
	}
	FIntPoint NewScreenResolution = FIntPoint(NewScreenWidth, NewScreenHeight);
	GameUserSettings->SetScreenResolution(NewScreenResolution);
	GameUserSettings->ApplySettings(false);
	GameUserSettings->SaveSettings();
}

void UExpandedFunctionLibrary::SetWindowMode(EWindowMode::Type NewWindowMode)
{
	if (!GEngine)
	{
		MakeLog("Failed Setting Window Mode, While Getting GEngine Reference", EExpandedFunctionLibraryLogType::Error);
		return;
	}
	UGameUserSettings* GameUserSettings = GEngine->GetGameUserSettings();
	if (!GameUserSettings)
	{
		MakeLog("Failed Setting Window Mode, While Getting GameUserSettings Info", EExpandedFunctionLibraryLogType::Error);
		return;
	}
	GameUserSettings->SetFullscreenMode(NewWindowMode);
	GameUserSettings->ApplySettings(false);
	GameUserSettings->SaveSettings();
}

TArray<uint8> UExpandedFunctionLibrary::ConvertStringToBytes(FString InString)
{
	TArray<uint8> Result;

	FTCHARToUTF8 Converter(*InString);

	int BytesLength = Converter.Length();
	uint8* Bridge = reinterpret_cast<uint8*>(FMemory::Malloc(BytesLength));
	FMemory::Memcpy(Bridge, (uint8*)TCHAR_TO_UTF8(InString.GetCharArray().GetData()), BytesLength);

	for (int i = 0; i < BytesLength; i++)
	{
		Result.Add(Bridge[i]);
	}

	FMemory::Free(Bridge);

	return Result;
}

TArray<uint8> UExpandedFunctionLibrary::ConvertIntToBytes(int32 InInt)
{
	TArray<uint8> Result;

	for (int i = 0; i < 4; i++)
	{
		Result.Add(InInt >> i * 8);
	}
	
	return Result;
}

TArray<uint8> UExpandedFunctionLibrary::ConvertFloatToBytes(float InFloat)
{
	TArray<uint8> Result;

	unsigned char* Interpreter = reinterpret_cast<unsigned char*>(&InFloat);
	for (int i = 0; i < sizeof(float); i++)
	{
		Result.Add((uint8)Interpreter[i]);
	}

	return Result;
}


FString UExpandedFunctionLibrary::ConvertBytesToString(UPARAM(ref) TArray<uint8>& InBytes)
{
	FString ResultString;

	InBytes.Add(0);

	ResultString = FString(UTF8_TO_TCHAR(InBytes.GetData()));

	return ResultString;
}

int32 UExpandedFunctionLibrary::ConvertBytesToInt(UPARAM(ref) TArray<uint8>& InBytes)
{
	int32 Result;

	if (InBytes.Num() < 4)
	{
		return INT_MIN;
	}

	unsigned char ByteArray[4];

	for (int i = 0; i < 4; i++)
	{
		ByteArray[i] = InBytes[0];
		InBytes.RemoveAt(0);
	}

	FMemory::Memcpy(&Result, ByteArray, 4);

	return Result;
}

float UExpandedFunctionLibrary::ConvertBytesToFloat(UPARAM(ref) TArray<uint8>& InBytes)
{
	float Result;

	if (InBytes.Num() < 4)
	{
		return -1.0f;
	}

	unsigned char ByteArray[4];

	for (int i = 0; i < 4; i++)
	{
		ByteArray[i] = InBytes[0];
		InBytes.RemoveAt(0);
	}

	FMemory::Memcpy(&Result, ByteArray, 4);

	return Result;
}

bool UExpandedFunctionLibrary::DeleteFile(FString Path)
{
	IFileManager& FileManager = IFileManager::Get();
	
	Path.ReplaceCharInline(TCHAR('\\'), TCHAR('/'));

	if (FileManager.FileExists(*Path))
	{
		FileManager.Delete(*Path, true, true);
		if (FileManager.FileExists(*Path))
		{
			MakeLog("Return False, target file still exists after deleting", EExpandedFunctionLibraryLogType::Error);
			return false;
		}
		MakeLog("Success deleting target file", EExpandedFunctionLibraryLogType::Log);
		return true;
	}

	MakeLog("Return False, target file does not exist", EExpandedFunctionLibraryLogType::Warning);

	return false;
}

FString UExpandedFunctionLibrary::ReadFile(FString Path)
{
	FString Result;

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (PlatformFile.CreateDirectory(*Path))
	{
		MakeLog("Found the file, Loading Begins", EExpandedFunctionLibraryLogType::Log);
		FFileHelper::LoadFileToString(Result, *Path);
	}
	else
	{
		MakeLog("No Such File in the Directory", EExpandedFunctionLibraryLogType::Warning);
	}

	return Result;
}

USoundWave* UExpandedFunctionLibrary::OpenSoundWave(FString Path)
{
	USoundWave* TargetSoundWave = nullptr;

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (!PlatformFile.CreateDirectory(*Path))
	{
		return nullptr;
	}

	TArray<uint8> RawSoundWave;

	FFileHelper::LoadFileToArray(RawSoundWave, *Path);

	if (RawSoundWave.IsEmpty())
	{
		return nullptr;
	}

	FWaveModInfo WaveInfo;

	if (!WaveInfo.ReadWaveInfo(RawSoundWave.GetData(), RawSoundWave.Num()))
	{
		return nullptr;
	}

	TargetSoundWave = NewObject<USoundWave>();

	TargetSoundWave->SetSampleRate(*WaveInfo.pSamplesPerSec);
	TargetSoundWave->NumChannels = *WaveInfo.pChannels;

	const int32 BytesDatatPerSecond = *WaveInfo.pChannels * (*WaveInfo.pBitsPerSample / 8.0f) * (*WaveInfo.pSamplesPerSec);

	if (BytesDatatPerSecond)
	{
		TargetSoundWave->Duration = WaveInfo.SampleDataSize / BytesDatatPerSecond;
	}
	else
	{
		return nullptr;
	}

	TargetSoundWave->RawPCMDataSize = WaveInfo.SampleDataSize;
	TargetSoundWave->RawPCMData = static_cast<uint8*>(FMemory::Malloc(WaveInfo.SampleDataSize));
	FMemory::Memcpy(TargetSoundWave->RawPCMData, WaveInfo.SampleDataStart, WaveInfo.SampleDataSize);

	FMemory::Free(&WaveInfo);

	return TargetSoundWave;
}

void UExpandedFunctionLibrary::MakeLog(FString LogContent, EExpandedFunctionLibraryLogType ExpandedFunctionLibraryLogType)
{
	switch (ExpandedFunctionLibraryLogType)
	{
	case EExpandedFunctionLibraryLogType::Log:
		MakeLog_Internal_Log(LogContent);
		break;
	case EExpandedFunctionLibraryLogType::Warning:
		MakeLog_Internal_Warning(LogContent);
		break;
	case EExpandedFunctionLibraryLogType::Error:
		MakeLog_Internal_Error(LogContent);
		break;
	}
}

void UExpandedFunctionLibrary::MakeLog_Internal_Log(FString LogContent)
{
	UE_LOG(ParangExpandedBlueprintPluginLog, Log, TEXT("%s"), *LogContent);
}

void UExpandedFunctionLibrary::MakeLog_Internal_Warning(FString LogContent)
{
	UE_LOG(ParangExpandedBlueprintPluginLog, Warning, TEXT("%s"), *LogContent);
}

void UExpandedFunctionLibrary::MakeLog_Internal_Error(FString LogContent)
{
	UE_LOG(ParangExpandedBlueprintPluginLog, Error, TEXT("%s"), *LogContent);
}

bool UExpandedFunctionLibrary::IsAlmostSameFloat(float inFloatA, float inFloatB)
{
	return FMath::Abs(inFloatA - inFloatB) <= KINDA_SMALL_NUMBER;
}

bool UExpandedFunctionLibrary::IsAlmostSameVector(FVector inVectorA, FVector inVectorB)
{
	bool CompareX = IsAlmostSameFloat(inVectorA.X, inVectorB.X);
	bool CompareY = IsAlmostSameFloat(inVectorA.Y, inVectorB.Y);
	bool CompareZ = IsAlmostSameFloat(inVectorA.Z, inVectorB.Z);

	if (CompareX && CompareY && CompareZ)
	{
		return true;
	}
	return false;
}

TArray<FString> UExpandedFunctionLibrary::ParseTable(FString Path, FString Delimiter)
{
	TArray<FString> ParsedData = TArray<FString>();

	if (Delimiter.IsEmpty())
	{
		return ParsedData;
	}

	FString OriginalText = ReadFile(Path);

	if (OriginalText.IsEmpty())
	{
		return ParsedData;
	}

	OriginalText.ParseIntoArray(ParsedData, *Delimiter);

	return ParsedData;
}