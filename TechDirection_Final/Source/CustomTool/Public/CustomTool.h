﻿#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FCustomToolModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
    void AddMenu(FMenuBarBuilder& MenuBarBuilder);
    void FillMenu(FMenuBuilder& MenuBuilder);
};
