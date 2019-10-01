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
	Release();
}

void SceneManager::SetScene(STATEID _eStage)
{
	if (m_pSceneState != NULL)
	{
		delete m_pSceneState;
		m_pSceneState = NULL;
	}

	switch (_eStage)
	{
	case STATEIDS_LOGO:
		m_pSceneState = new Logo;
		break;
	case STATEIDS_MENU:
		m_pSceneState = new Menu;
		break;
	case STATEIDS_STAGE:
		m_pSceneState = new Stage;
		break;
	case STATEIDS_EXIT:

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
