#include "MainUpdate.h"

#include "CursorManager.h"
#include "SceneManaer.h"



MainUpdate::MainUpdate()
{
	CursorManager::SetCursorDisable();
}

MainUpdate::~MainUpdate()
{
	Release();
}

void MainUpdate::Initialize()
{
	SceneManaer::GetInstance()->SetScene(STATEIDS_LOGO);
}

void MainUpdate::Progress()
{
	SceneManaer::GetInstance()->Progress();
}

void MainUpdate::Render()
{
	SceneManaer::GetInstance()->Render();
}

void MainUpdate::Release()
{
	
}
