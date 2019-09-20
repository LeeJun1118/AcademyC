#include "SceneManager.h"

#include "Logo.h"
#include "Menu.h"
#include "Stage.h"


SceneManager* SceneManager::m_pInstance = NULL;


SceneManager::SceneManager() : m_pScene(NULL)
{
}

SceneManager::~SceneManager()
{
}

void SceneManager::SetScene(SCENEID _StateID)
{
	//** ���࿡ ���� �Լ��� �������� ��ÿ� �� ���°� NULL���� �ƴ϶�� NULL ������ �ʱ�ȭ�� ���ش�.
	if (m_pScene != NULL)
	{
		delete m_pScene;
		m_pScene = NULL;
	}

	//** �� ������ ������ ���·� ���ο� ���� �Ҵ� �ޱ� ����.
	switch (_StateID)
	{
	case SCENEID_LOGO:
		m_pScene = new Logo;
		break;
	case SCENEID_MENU:
		m_pScene = new Menu;
		break;
	case SCENEID_STAGE:
		m_pScene = new Stage;
		break;
	case SCENEID_EXIT:
		exit(NULL);
		break;
	}

	//** ���Ӱ� �Ҵ�� ���� �ʱ�ȭ ���ش�.
	m_pScene->Initialize();
}

void SceneManager::Progress()
{
	//** �ش� ���� ���α׷��� �Լ��� ���� ��Ŵ.
	m_pScene->Progress();
}

void SceneManager::Render()
{
	//** �ش� ���� ���� �Լ��� ���� ��Ŵ.
	m_pScene->Render();
}
