#include "Player.h"
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
	{
		if (m_tInfo.Position.y > 1)
		{
			m_tInfo.Position.y -= 1;
		}
	}

	if (GetAsyncKeyState(VK_DOWN))
	{
		if (m_tInfo.Position.y < WINSIZEY -3)
		{
			m_tInfo.Position.y += 1;
		}

	}

	if (GetAsyncKeyState(VK_LEFT))
	{
		if (m_tInfo.Position.x > 2)
		{
			m_tInfo.Position.x -= 2;
		}
		
	}

	if (GetAsyncKeyState(VK_RIGHT))
	{
		if (m_tInfo.Position.x < WINSIZEX - 4)
		{
			m_tInfo.Position.x += 2;
		}
		
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
