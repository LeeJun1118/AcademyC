#include "Monster.h"

Monster::Monster()
{
}

Monster::~Monster()
{
}

void Monster::Initialize()
{
	m_tInfo.Position = Vector3(10.f, 8.f, 0.f);
	m_tInfo.Scale= Vector3(2.f, 2.f, 0.f);
	m_tInfo.Rotate= Vector3(0.f, 0.f, 0.f);
}

void Monster::Progress()
{
}

void Monster::Render()
{
	cout << endl << "Left : " << m_tInfo.Position.x << endl <<
		"Top : " << m_tInfo.Position.y << endl <<
		"Right : " << m_tInfo.Position.x + m_tInfo.Scale.x << endl <<
		"Battom : " << m_tInfo.Position.y + m_tInfo.Scale.y << endl;

}

void Monster::Release()
{
}
