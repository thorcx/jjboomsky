#include "SanwuUEUtilitesPrivatePCH.h"
#include "SanwuPaths.h"

FString USanwuPaths::GetEngineDir()
{
	return FPaths::EngineDir();
	
}
FString USanwuPaths::GetGameSaveDir()
{
	return FPaths::GameSavedDir();
}
FString USanwuPaths::GetGameContentDir()
{
	return FPaths::GameContentDir();
}
FString USanwuPaths::GetGamePaksDir()
{
	return FPaths::GameContentDir() / "Paks/";
}