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
	cout << "Logo::Progress" << endl;

	if (GetAsyncKeyState('A'))
		SceneManager::GetInstance()->SetScene(SCENEID_MENU);
}

void Logo::Render()
{
	cout << "Logo::Render" << endl;
}

void Logo::Release()
{
}
