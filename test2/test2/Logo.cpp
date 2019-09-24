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
}

void Logo::Progress()
{
	if (GetAsyncKeyState('A'))
	{
		SceneManager::GetInstance()->SetScene(SCENEIDS_MENU);
		cout << "Logo::Progress" << endl;
	}
}

void Logo::Render()
{
	cout << "Logo::Render" << endl;
}

void Logo::Release()
{
}
