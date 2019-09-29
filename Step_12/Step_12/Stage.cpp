#include "Stage.h"
#include "ObjectManager.h"
#include "Player.h"
#include "Monster.h"
#include "ObjectFactory.h"

Stage::Stage()
{
}

Stage::~Stage()
{
}

void Stage::Initialize()
{
	ObjectManager::GetInstance()->SetPlayer(ObjectFactory::CreatePlayer());
	ObjectManager::GetInstance()->SetMonster(ObjectFactory::CreateMonster());
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
