#include "Player.h"
#include "Enum.h"
#include "CursorManager.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::Initialize()
{
	m_pTexture = (char*)"¡Ú";
	m_tInfo.Position = Vector3(5.f, 5.f);
	m_tInfo.Rotate = Vector3(0.f, 0.f);
	m_tInfo.Scale = Vector3(2.f, 1.f);
}

void Player::Progress()
{
	if (GetAsyncKeyState(VK_UP))
		m_tInfo.Rotate = DIRIDS_RIGHT;

	if (GetAsyncKeyState(VK_DOWN))
		m_tInfo.Rotate = DIRIDS_RIGHT;

	if (GetAsyncKeyState(VK_LEFT))
		m_tInfo.Rotate = DIRIDS_RIGHT;

	if (GetAsyncKeyState(VK_RIGHT))
		m_tInfo.Rotate = DIRIDS_RIGHT;

	switch (m_tInfo.Rotate)
	{
	case DIRIDS_UP:
		if (m_tInfo.Position.y != 1)
			m_tInfo.Position.y -= 1;
		break;

	case DIRIDS_DOWN:
		if (m_tInfo.Position.y != 27)
			m_tInfo.Position.y += 1;
		break;

	case DIRIDS_LEFT:
		if ((m_tInfo.Position.y == 14 || m_tInfo.Position.y == 15))
		{
			m_tInfo.Position.x -= 1;

			if (m_tInfo.Position.x < 0)
				m_tInfo.Position.x = 118;
		}
		else if (m_tInfo.Position.x > 2)
			m_tInfo.Position.x -= 1;
		break;

	case DIRIDS_RIGHT:
		if ((m_tInfo.Position.y == 14 || m_tInfo.Position.y == 15))
		{
			m_tInfo.Position.x += 1;

			if (m_tInfo.Position.x > 118)
				m_tInfo.Position.x = 0;
		}
		else if (m_tInfo.Position.x > 118)
			m_tInfo.Position.x += 1;
		break;
	}
}

void Player::Render()
{
	CursorManager::OnDrawText(
		m_tInfo.Position.x,
		m_tInfo.Position.y,
		m_pTexture);
}

void Player::Release()
{
}
