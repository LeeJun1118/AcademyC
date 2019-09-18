#pragma once
#include "Headers.h"

class Scene; // 정반 선언.
class SceneManager
{
private:
	SceneManager();
public:
	~SceneManager();
private:
	static SceneManager* m_pInstance;
public:
	static SceneManager* GetInstance()
	{
		if (m_pInstance == NULL)
			m_pInstance = new SceneManager;

		return m_pInstance;
	}

private:
	//** 현재 씬이 어디에 위치해 있는지 확인하기 위한 용도.
	Scene* m_pScene;

public:
	void SetScene(SCENEID _StateID);
	void Progress();
	void Render();
};

