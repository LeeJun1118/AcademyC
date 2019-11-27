#include "MainUpdate.h"
#include "Player.h"
#include "CursorManager.h"



MainUpdate::MainUpdate() : m_pPlayer(NULL)
{
	CursorManager::SetCursorDisable();
}

MainUpdate::~MainUpdate()
{
	Release();
}

void MainUpdate::Initialize()
{
	m_pPlayer = new Player;
	m_pPlayer->Initialize();


}

void MainUpdate::Progress()
{
	m_pPlayer->Progress();
}

void MainUpdate::Render()
{
	m_pPlayer->Render();
}

void MainUpdate::Release()
{
	delete m_pPlayer;
	m_pPlayer = NULL;
}
