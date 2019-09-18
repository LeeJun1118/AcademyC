#include "Logo.h"
#include "SceneManager.h"

Logo::Logo()
{
}

Logo::~Logo()
{
}

void Logo::Initialize()
{
	cout << "Logo::Initialize" << endl;
	m_bNextScene = false;
}

void Logo::Progress()
{
	if(m_bNextScene)
		SceneManager::GetInstance()->SetScene(SCENEIDS_MENU);
	else
	{
		cout << "Logo::Progress" << endl;
		m_bNextScene = true;
	}
}

void Logo::Render()
{
	cout << "Logo::Render" << endl;
}

void Logo::Release()
{
}
