#pragma once
#include "Headers.h"


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
		{
			m_pInstance = new SceneManager;
		}
		return m_pInstance;

	}

private:
	class Scene* m_pSceneState;
public:
	void SetScene(SCENEIDS _eState);
	void Progress();
	void Render();
	void Release();



};

