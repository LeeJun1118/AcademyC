#include "MainUpdate.h"
#include "SceneManager.h"


MainUpdate::MainUpdate()
{
}

MainUpdate::~MainUpdate()
{
}

void MainUpdate::Initialize()
{
	SceneManager::GetInstance()->SetScene(SCENEIDS_LOGO);
}

void MainUpdate::Progress()
{
	SceneManager::GetInstance()->Progress();
}

void MainUpdate::Render()
{
	SceneManager::GetInstance()->Render();
}

void MainUpdate::Release()
{
}
