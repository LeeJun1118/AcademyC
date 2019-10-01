#include "Stage.h"
#include "Player.h"
#include "Monster.h"
#include "ObjectManager.h"
#include "ObjectFactory.h"

Stage::Stage()
{
}

Stage::~Stage()
{
}

void Stage::Initialize()
{
	/*
	Object* pPlayer = new Player;
	pPlayer->Initialize();
	ObjectManager::GetInstance()->SetPlayer(pPlayer);
	*/
	
	/*
	Object* pPlayer = ObjectFactory::CreatePlayer();
	ObjectManager::GetInstance()->SetPlayer(pPlayer);
	*/

	ObjectManager::GetInstance()->SetPlayer(ObjectFactory::CreatePlayer());

	/*
	Object* pMonster = new Monster;
	pMonster->Initialize();
	ObjectManager::GetInstance()->SetMonster(pMonster);
	*/

	/*
	Object* pMonster = ObjectFactory::CreateMonster();
	ObjectManager::GetInstance()->SetMonster(pMonster);
	*/

	ObjectManager::GetInstance()->SetMonster(
		ObjectFactory::CreateMonster());
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
