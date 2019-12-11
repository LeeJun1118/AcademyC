#pragma once
#include "Headers.h"

class Scene;
class SceneManaer
{
private:
	SceneManaer();
public:
	~SceneManaer();

private:
	static SceneManaer* m_pInstance;
public:
	static SceneManaer* GetInstance()
	{
		if (m_pInstance == NULL)
			m_pInstance = new SceneManaer;
		return m_pInstance;
	}
	
private:
	Scene* m_pSceneState;
public:
	void SetScene(STATEID _State);
	void Progress();
	void Render();
};

