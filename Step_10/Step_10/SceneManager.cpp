#include "SceneManager.h"

#include "Logo.h"
#include "Menu.h"
#include "Stage.h"


SceneManager* SceneManager::m_pInstance = NULL;


SceneManager::SceneManager() : m_pSceneState(NULL)
{
}

SceneManager::~SceneManager()
{
}

void SceneManager::SetScene(SCENEID _StateID)
{
	//** ���࿡ ���� �Լ��� �������� ��ÿ� �� ���°� NULL���� �ƴ϶�� NULL ������ �ʱ�ȭ�� ���ش�.
	if (m_pSceneState != NULL)
	{
		delete m_pSceneState;
		m_pSceneState = NULL;
	}

	//** �� ������ ������ ���·� ���ο� ���� �Ҵ� �ޱ� ����.
	switch (_StateID)
	{
	case SCENEID_LOGO:
		m_pSceneState = new Logo;
		break;
	case SCENEID_MENU:
		m_pSceneState = new Menu;
		break;
	case SCENEID_STAGE:
		m_pSceneState = new Stage;
		break;
	case SCENEID_EXIT:
		exit(NULL);
		break;
	}

	//** ���Ӱ� �Ҵ�� ���� �ʱ�ȭ ���ش�.
	m_pSceneState->Initialize();
}

void SceneManager::Progress()
{
	//** �ش� ���� ���α׷��� �Լ��� ���� ��Ŵ.
	m_pSceneState->Progress();
}

void SceneManager::Render()
{
	//** �ش� ���� ���� �Լ��� ���� ��Ŵ.
	m_pSceneState->Render();
}

void SceneManager::Release()
{
}
