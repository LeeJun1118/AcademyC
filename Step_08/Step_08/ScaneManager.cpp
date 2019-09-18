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
	//** ���࿡ ���� �Լ��� �������� ��ÿ� �� ���°� NULL���� �ƴ϶�� NULL ������ �ʱ�ȭ�� ���ش�.
	if (m_pScane != NULL)
	{
		delete m_pScane;
		m_pScane = NULL;
	}

	//** �� ������ ������ ���·� ���ο� ���� �Ҵ� �ޱ� ����.
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

	//** ���Ӱ� �Ҵ�� ���� �ʱ�ȭ ���ش�.
	m_pScane->Initialize();
}

void ScaneManager::Progress()
{
	//** �ش� ���� ���α׷��� �Լ��� ���� ��Ŵ.
	m_pScane->Progress();
}

void ScaneManager::Render()
{
	//** �ش� ���� ���� �Լ��� ���� ��Ŵ.
	m_pScane->Render();
}
