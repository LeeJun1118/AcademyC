#include "Player.h"


Player::Player()
{
}

Player::~Player()
{
}

void Player::Initialize()
{
	m_iCount = 0;
	number = 0;
	name = "ȫ�浿";
}

void Player::Progress()
{
	
	cin >> number;
	cin >> name;

	/*m_iCount++;
	if (m_iCount == 100)
		return 1;

	return 0;*/

}

void Player::Render()
{
	cout << "�й� �Է� :" << number << endl;
	cout << "�̸� �Է� :" << name << endl;
}

void Player::Release()
{
}
