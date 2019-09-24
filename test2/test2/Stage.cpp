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
	ObjectManager::GetInstance()->SetPlayer(pPlayer);
	pPlayer->Initialize();

	Object* pMonster = new Monster;
	ObjectManager::GetInstance()->SetMonster(pMonster);
	pMonster->Initialize();
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
	delete pPlayer;
	pPlayer = NULL;

	delete pMonster;
	pMonster = NULL;
}
