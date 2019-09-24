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
	//** 만약에 현재 함수에 진입했을 당시에 씬 상태가 NULL값이 아니라면 NULL 값으로 초기화를 해준다.
	if (m_pSceneState != NULL)
	{
		delete m_pSceneState;
		m_pSceneState = NULL;
	}

	//** 다 지워진 깨끗한 상태로 새로운 씬을 할당 받기 위함.
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

	//** 새롭게 할당된 씬을 초기화 해준다.
	m_pSceneState->Initialize();
}

void SceneManager::Progress()
{
	//** 해당 씬의 프로그래스 함수를 실행 시킴.
	m_pSceneState->Progress();
}

void SceneManager::Render()
{
	//** 해당 씬의 랜더 함수를 실행 시킴.
	m_pSceneState->Render();
}

void SceneManager::Release()
{
}
