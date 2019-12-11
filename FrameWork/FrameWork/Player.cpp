#include "Player.h"
#include "CursorManager.h"

Player::Player()
{
}

Player::~Player()
{
	Release();
}

void Player::Initialize()
{
	m_pTexture = (char*)"¡Ú";
	m_tInfo.Position = Vector3(59.f, 15.f);
	//m_tInfo.Rotate = Vector3(0.f, 0.f);

	m_tInfo.Rotate = DIRIDS_RIGHT;

	m_tInfo.Scale = Vector3(2.f, 1.f);
}

void Player::Progress()
{
	int OldRotate = m_tInfo.Rotate;


	if (GetAsyncKeyState('W'))
		FrameTime += 10;

	if (GetAsyncKeyState('S'))
		FrameTime -= 10;


	if (GetAsyncKeyState(VK_UP))
		if(m_tInfo.Rotate != DIRIDS_DOWN)
			m_tInfo.Rotate = DIRIDS_UP;

	if (GetAsyncKeyState(VK_DOWN))
		if (m_tInfo.Rotate != DIRIDS_UP)
			m_tInfo.Rotate = DIRIDS_DOWN;

	if (GetAsyncKeyState(VK_LEFT))
		if (m_tInfo.Rotate != DIRIDS_RIGHT)
			m_tInfo.Rotate = DIRIDS_LEFT;

	if (GetAsyncKeyState(VK_RIGHT))
		if (m_tInfo.Rotate != DIRIDS_LEFT)
			m_tInfo.Rotate = DIRIDS_RIGHT;



	switch (m_tInfo.Rotate)
	{
	case DIRIDS_UP:
		if (m_tInfo.Position.x > 1 && m_tInfo.Position.x < 117 && m_tInfo.Position.y != 1)
			m_tInfo.Position.y -= 1;
		else if (m_tInfo.Position.y != 14 && m_tInfo.Position.y != 1)
			m_tInfo.Position.y -= 1;
		else
			m_tInfo.Rotate = OldRotate;
		break;

	case DIRIDS_DOWN:
		if (m_tInfo.Position.x > 1 && m_tInfo.Position.x < 117 && m_tInfo.Position.y != 27)
			m_tInfo.Position.y += 1;
		else if (m_tInfo.Position.y != 15 && m_tInfo.Position.y != 27)
			m_tInfo.Position.y += 1;
		else
			m_tInfo.Rotate = OldRotate;
		break;

	case DIRIDS_LEFT:
		if ((m_tInfo.Position.y == 14 || m_tInfo.Position.y == 15))
		{
			m_tInfo.Position.x -= 2;

			if (m_tInfo.Position.x < 0)
				m_tInfo.Position.x = 118;
		}
		else if (m_tInfo.Position.x > 2)
			m_tInfo.Position.x -= 2;
		break;

	case DIRIDS_RIGHT:
		if ((m_tInfo.Position.y == 14 || m_tInfo.Position.y == 15))
		{
			m_tInfo.Position.x += 2;

			if (m_tInfo.Position.x > 118)
				m_tInfo.Position.x = 0;
		}
		else if (m_tInfo.Position.x < 116)
			m_tInfo.Position.x += 2;
		break;
	}
}
	
void Player::Render()
{
	CursorManager::OnDrawFloat(5, 1, FrameTime);

	CursorManager::OnDrawFloat(30, 1, m_tInfo.Position.x);
	CursorManager::OnDrawFloat(34, 1, m_tInfo.Position.y);

	CursorManager::OnDrawText(
		m_tInfo.Position.x,
		m_tInfo.Position.y,
		m_pTexture);
}

void Player::Release()
{
}
