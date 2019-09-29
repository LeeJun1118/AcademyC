#pragma once
#include "Headers.h"

class Object;

class ObjectManager
{
private:
	ObjectManager();
public:
	~ObjectManager();

private:
	static ObjectManager* m_pInstance;
public:
	static ObjectManager* GetInstance() {
		if (m_pInstance == NULL)
			m_pInstance = new ObjectManager;
		return m_pInstance;
	}

private:
	class Object* m_pPlayer;
	class Object* m_pMonster;

public:
	void SetPlayer(Object* _pPlayer) { m_pPlayer = _pPlayer; }
	void SetMonster(Object* _pMonster) { m_pMonster = _pMonster; }

	void Progress();
	void Render();
	void Release();
};

