#include "SceneManaer.h"

#include "Logo.h"
#include "Menu.h"
#include "Stage.h"

SceneManaer* SceneManaer::m_pInstance = NULL;

SceneManaer::SceneManaer() : m_pSceneState(NULL)
{
}

SceneManaer::~SceneManaer()
{
}

void SceneManaer::SetScene(STATEID _State)
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
		exit(NULL);
		break;
	}
	m_pSceneState->Initialize();
}

void SceneManaer::Progress()
{
	m_pSceneState->Progress();
}

void SceneManaer::Render()
{
	m_pSceneState->Render();
}
