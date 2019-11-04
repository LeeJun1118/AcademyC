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
	name = "홍길동";
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
	cout << "학번 입력 :" << number << endl;
	cout << "이름 입력 :" << name << endl;
}

void Player::Release()
{
}
