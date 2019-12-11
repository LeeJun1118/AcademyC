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
	static ObjectManager* GetInstance()
	{
		if (m_pInstance == NULL)
			m_pInstance = new ObjectManager;
		return m_pInstance;
	}
private:
	vector<Object*> m_Player;
	Object* m_pBackground;
public:
	vector<Object*>* GetPlayerList() { return &m_Player; }

	void Initialize();
	void Progress();
	void Render();
};

