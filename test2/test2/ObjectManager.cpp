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

}

void ObjectManager::Render()
{
	

}

void ObjectManager::Release()
{
}
