#pragma once
#include "Player.h"
#include "Monster.h"


class ObjectFactory
{
public:
	static Object* CreatePlayer()
	{
		Object* pPlayer = new Player;
		pPlayer->Initialize();

		return pPlayer;
	}
	static Object* CreatePlayer(Vector3 _vPosition)
	{
		Object* pPlayer = new Player;
		pPlayer->Initialize();
		pPlayer->SetPosition(_vPosition);
		return pPlayer;
	}

	static Object* CreateMonster() {
		Object* pMonster = new Monster;
		pMonster->Initialize();
		
		return pMonster;

	}

	static Object* CreateMonster(Vector3 _vPosition)
	{
		Object* pMonster = new Monster;
		pMonster->Initialize();
		pMonster->SetPosition(_vPosition);
			
		return pMonster;
	}


};

