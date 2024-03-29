#pragma once
#include "Headers.h"


class Scene;

class SceneManager
{
public:
	SceneManager();
private:
	~SceneManager();

private:
	static SceneManager* m_pInstance;
public:
	static SceneManager* GetInstance()
	{
		if (m_pInstance == NULL)
		{
			m_pInstance = new SceneManager;
		}
		return m_pInstance;
	}

private:
	Scene* m_pSceneState;
public:
	void SetScene();

};

