#pragma once
#include "Manager.h"
#include "Scene.h"   //  <= ????????

class SetScene;	//  <= ????????

class SceneManager
{
private:
	SceneManager();
public:
	~SceneManager();

private:
	static SceneManager* m_pInstance;
public:
	static SceneManager* GetInstance() {
		if (m_pInstance == NULL)
			m_pInstance = new SceneManager();
		return m_pInstance;
	}

private:
	Scene* m_pScene;
public:
	void SetScene(/* SCENEID _eState*/);
	//void Progress();
	//void Render();

public:  // <= ???
	bool b_next; // ???

};

