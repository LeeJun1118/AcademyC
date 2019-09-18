#include "Logo.h"
#include "ScaneManager.h"

Logo::Logo()
{
}

Logo::~Logo()
{
}

void Logo::Initialize()
{
	cout << "Logo::Initialize" << endl;
	m_bNextScane = false;
}

void Logo::Progress()
{
	if(m_bNextScane)
		ScaneManager::GetInstance()->SetScane(SCANEIDS_MENU);
	else
	{
		cout << "Logo::Progress" << endl;
		m_bNextScane = true;
	}
}

void Logo::Render()
{
	cout << "Logo::Render" << endl;
}

void Logo::Release()
{
}
