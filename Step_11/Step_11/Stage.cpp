#include "Stage.h"
#include "ObjectManager.h"
#include "Player.h"
#include "Monster.h"


Stage::Stage()
{
}

Stage::~Stage()
{
}

void Stage::Initialize()
{
	Object* pPlayer = new Player;
	pPlayer->Initialize();
	ObjectManager::GetInstance()->SetPlayer(pPlayer);


	Object* pMonster = new Monster;
	pMonster->Initialize();
	ObjectManager::GetInstance()->SetMonster(pMonster);
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
