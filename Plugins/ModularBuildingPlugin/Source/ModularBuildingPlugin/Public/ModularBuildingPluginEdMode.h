// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "UnrealEd.h" 
#include "Editor.h"

class FModularBuildingPluginEdMode : public FEdMode
{
public:
	const static FEditorModeID EM_ModularBuildingPluginEdModeId;
public:
	FModularBuildingPluginEdMode();
	virtual ~FModularBuildingPluginEdMode();

	// FEdMode interface
	virtual void Enter() override;
	virtual void Exit() override;
	//virtual void Tick(FEditorViewportClient* ViewportClient, float DeltaTime) override;
	//virtual void Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI) override;
	//virtual void ActorSelectionChangeNotify() override;
	bool UsesToolkits() const override;
	// End of FEdMode interface
};
