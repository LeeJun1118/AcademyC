#include "ScaneManager.h"

#include "Logo.h"
#include "Menu.h"
#include "Stage.h"


SceneManager* SceneManager::m_pInstance = NULL;


SceneManager::SceneManager():m_pScene(NULL)
{
}

SceneManager::~SceneManager()
{
}

void SceneManager::SetScene(SCENEID _StateID)
{
	//** 만약에 현재 함수에 진입했을 당시에 씬 상태가 NULL값이 아니라면 NULL 값으로 초기화를 해준다.
	if (m_pScene != NULL)
	{
		delete m_pScene;
		m_pScene = NULL;
	}

	//** 다 지워진 깨끗한 상태로 새로운 씬을 할당 받기 위함.
	switch (_StateID)
	{
	case SCENEIDS_LOGO:
		m_pScene = new Logo;
		break;
	case SCENEIDS_MENU:
		m_pScene = new Menu;
		break;
	case SCENEIDS_STAGE:
		m_pScene = new Stage;
		break;
	case SCENEIDS_EXIT:
		exit(NULL);
		break;
	}

	//** 새롭게 할당된 씬을 초기화 해준다.
	m_pScene->Initialize();
}

void SceneManager::Progress()
{
	//** 해당 씬의 프로그래스 함수를 실행 시킴.
	m_pScene->Progress();
}

void SceneManager::Render()
{
	//** 해당 씬의 랜더 함수를 실행 시킴.


	m_pScene->Render();
}
