#include "MainUpdate.h"
#include "Player.h"
#include "CursorManager.h"
#include "BackGround.h"


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

	m_pBackGround = new BackGround;
	m_pBackGround->Initialize();
}

void MainUpdate::Progress()
{
	m_pPlayer->Progress();
	m_pBackGround->Progress();
}

void MainUpdate::Render()
{
	m_pPlayer->Render();
	m_pBackGround->Render();
}

void MainUpdate::Release()
{
	delete m_pPlayer;
	m_pPlayer = NULL;
}
