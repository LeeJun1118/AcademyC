#include "SceneManager.h"
#include "Logo.h"
#include "Menu.h"
#include "Stage.h"

SceneManager* SceneManager::m_pInstance = NULL;


SceneManager::SceneManager():m_pSceneState(NULL)
{
}

SceneManager::~SceneManager()
{
}

void SceneManager::SetScene(SCENEIDS _eState)
{
	if (m_pSceneState != NULL)
	{
		delete m_pSceneState;
		m_pSceneState = NULL;
	}

	switch (_eState)
	{
	case SCENEIDS_LOGO:
		m_pSceneState = new Logo;
		break;
	case SCENEIDS_MENU:
		m_pSceneState = new Menu;
		break;
	case SCENEIDS_STAGE:
		m_pSceneState = new Stage;
		break;
	case SCENEIDS_EXIT:
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

void SceneManager::Release()
{
}
