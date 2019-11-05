#include "SceneManager.h"
#include "Menu.h"

SceneManager* SceneManager::m_pInstance = NULL;

SceneManager::SceneManager():m_pSceneState(NULL)
{
}

SceneManager::~SceneManager()
{
}

void SceneManager::SetScene(SCENEID _eState)
{
	if (m_pSceneState != NULL)
	{
		delete m_pSceneState;
		m_pSceneState = NULL;
	}

	switch (_eState)
	{
	case SCENEID_MENU:
		m_pSceneState = new Menu;
		break;
	case SCENEID_INFO:
		break;
	case SCENEID_ADD:
		break;
	case SCENEID_DELETE:
		break;
	default:
		break;
	}
	m_pSceneState->Initialize();
}

void SceneManager::Progress()
{
	m_pSceneState->Progress();
}

void SceneManager::Render()
{
	m_pSceneState->Render();
}
