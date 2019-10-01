#include "ObjectManager.h"
#include "Object.h"
#include "CollisionManager.h"

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

	if (CollisionManager::CollisionRect(m_pPlayer, m_pMonster))
	{ 
		cout << "Ãæµ¹!!!!!" << endl;

		m_pPlayer->SetPosition(Vector3(0.f, 0.f, 0.f));
	}
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
