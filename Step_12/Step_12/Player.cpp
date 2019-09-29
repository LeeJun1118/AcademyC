#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::Initialize()
{
	m_tInfo.Position = Vector3(0.f, 0.f, 0.f);
	m_tInfo.Scale = Vector3(1.f, 1.f, 0.f);
	m_tInfo.Rotate = Vector3(0.f, 0.f, 0.f);
}

void Player::Progress()
{
	if (GetAsyncKeyState(VK_UP))
	{
		m_tInfo.Position.y += 1;
	}
	if (GetAsyncKeyState(VK_DOWN))
	{
		m_tInfo.Position.y -= 1;
	}
	if (GetAsyncKeyState(VK_RIGHT))
	{
		m_tInfo.Position.x += 1;
	}
	if (GetAsyncKeyState(VK_LEFT))
	{
		m_tInfo.Position.x -= 1;
	}
}

void Player::Render()
{
	cout << endl << "X: " << m_tInfo.Position.x << endl << "Y: " << m_tInfo.Position.y << endl;
}

void Player::Release()
{
}
