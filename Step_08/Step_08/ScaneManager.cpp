#include "ScaneManager.h"

#include "Logo.h"
#include "Menu.h"
#include "Stage.h"


ScaneManager* ScaneManager::m_pInstance = NULL;


ScaneManager::ScaneManager() : m_pScane(NULL)
{
}

ScaneManager::~ScaneManager()
{
}

void ScaneManager::SetScane(SCANEID _StateID)
{
	//** 만약에 현재 함수에 진입했을 당시에 씬 상태가 NULL값이 아니라면 NULL 값으로 초기화를 해준다.
	if (m_pScane != NULL)
	{
		delete m_pScane;
		m_pScane = NULL;
	}

	//** 다 지워진 깨끗한 상태로 새로운 씬을 할당 받기 위함.
	switch (_StateID)
	{
	case SCANEIDS_LOGO:
		m_pScane = new Logo;
		break;
	case SCANEIDS_MENU:
		m_pScane = new Menu;
		break;
	case SCANEIDS_STAGE:
		m_pScane = new Stage;
		break;
	case SCANEIDS_EXIT:
		exit(NULL);
		break;
	}

	//** 새롭게 할당된 씬을 초기화 해준다.
	m_pScane->Initialize();
}

void ScaneManager::Progress()
{
	//** 해당 씬의 프로그래스 함수를 실행 시킴.
	m_pScane->Progress();
}

void ScaneManager::Render()
{
	//** 해당 씬의 랜더 함수를 실행 시킴.
	m_pScane->Render();
}
