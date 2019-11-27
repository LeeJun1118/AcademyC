#include "SceneManager.h"

#include "Logo.h"
#include "Menu.h"
#include "Stage.h"
#include "SceneManager.h"

SceneManager* SceneManager::m_pInstance = NULL;
SceneManager::SceneManager()
{
}

SceneManager::~SceneManager()
{
}



void SceneManager::SetScene(STATEID _State)
{
	if (m_pSceneState != NULL)
	{
		delete m_pSceneState;
		m_pSceneState = NULL;
	}

	switch (_State)
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
}

void SceneManager::Render()
{
}

