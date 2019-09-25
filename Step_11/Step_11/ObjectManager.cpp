#include "ObjectManager.h"
#include "Player.h"
#include "Monster.h"


ObjectManager* ObjectManager::m_pInstance = NULL;


ObjectManager::ObjectManager()
{
}

ObjectManager::~ObjectManager()
{
	Release();
}

void ObjectManager::Progress()
{
	m_pPlayer->Progress();
	m_pMonster->Progress();
}

void ObjectManager::Render()
{
	m_pPlayer->Render();
	m_pMonster->Render();
}

void ObjectManager::Release()
{
	delete m_pPlayer;
	m_pPlayer = NULL;

	delete m_pMonster;
	m_pMonster = NULL;
}
