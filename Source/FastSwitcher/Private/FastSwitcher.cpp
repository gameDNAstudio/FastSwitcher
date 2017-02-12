// Fast Switcher Plugin
// Created by Patryk Stepniewski
// Copyright (c) 2014-2017 gameDNA. All Rights Reserved.

#include "FastSwitcherPrivatePCH.h"
#include "ISettingsModule.h"

DEFINE_LOG_CATEGORY(LogFastSwitcher);

#define LOCTEXT_NAMESPACE "FastSwitcher"

class FFastSwitcher : public IFastSwitcher
{
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE(FFastSwitcher, FastSwitcher)

// Startup Module
void FFastSwitcher::StartupModule()
{
}

// Shutdown Module
void FFastSwitcher::ShutdownModule()
{
}


#undef LOCTEXT_NAMESPACE
