#pragma once
#include "Headers.h"

class Scene; // ���� ����.
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
	//** ���� ���� ��� ��ġ�� �ִ��� Ȯ���ϱ� ���� �뵵.
	Scene* m_pScene;

public:
	void SetScene(SCENEID _StateID);
	void Progress();
	void Render();
};

