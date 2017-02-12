// Fast Switcher Plugin
// Created by Patryk Stepniewski
// Copyright (c) 2014-2017 gameDNA. All Rights Reserved.

#pragma once

#include "ModuleManager.h"

class IFastSwitcher : public IModuleInterface
{
public:
	static inline IFastSwitcher& Get()
	{
		return FModuleManager::LoadModuleChecked< IFastSwitcher >("FastSwitcher");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("FastSwitcher");
	}
};
