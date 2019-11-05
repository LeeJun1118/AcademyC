#pragma once
#include "Headers.h"

class Scene;
class SceneManager
{
public:
	SceneManager();
	~SceneManager();
public:
	static SceneManager* m_pInstance;
	static SceneManager* GetInstance() 
	{
		if (m_pInstance == NULL)
			m_pInstance = new SceneManager;
		return m_pInstance;
	}

private:
	Scene* m_pSceneState;
public:
	void SetScene(SCENEID _eState);
	void Progress();
	void Render();

};

