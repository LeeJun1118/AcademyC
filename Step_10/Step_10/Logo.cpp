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
	b_NextScene = false;
}

void Logo::Progress()
{
	if (b_NextScene)
		SceneManager::GetInstance()->SetScene(SCENEID_MENU);
	else
	{
		cout << "Logo::Progress" << endl;
		b_NextScene = true;
	}

}

void Logo::Render()
{
	cout << "Logo::Render" << endl;
}

void Logo::Release()
{
}
