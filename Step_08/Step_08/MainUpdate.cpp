#include "MainUpdate.h"
#include "ScaneManager.h"

MainUpdate::MainUpdate()
{
}

MainUpdate::~MainUpdate()
{
}

void MainUpdate::Initialize()
{
	ScaneManager::GetInstance()->SetScane(SCANEIDS_LOGO);
}

void MainUpdate::Progress()
{
	ScaneManager::GetInstance()->Progress();
}

void MainUpdate::Render()
{
	ScaneManager::GetInstance()->Render();
}

void MainUpdate::Release()
{
}
