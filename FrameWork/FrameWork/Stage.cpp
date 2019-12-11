#include "Stage.h"

#include "ObjectManager.h"

Stage::Stage()
{
}

Stage::~Stage()
{
}

void Stage::Initialize()
{
	ObjectManager::GetInstance()->Initialize();
}

void Stage::Progress()
{
	ObjectManager::GetInstance()->Progress();
}

void Stage::Render()
{
	ObjectManager::GetInstance()->Render();
}

void Stage::Release()
{
}
