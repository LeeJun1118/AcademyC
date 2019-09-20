#include "Menu.h"
#include "SceneManager.h"

Menu::Menu()
{
}

Menu::~Menu()
{
}

void Menu::Initialize()
{
	cout << "Menu::Initialize" << endl;
	b_NextScene = false;
}

void Menu::Progress()
{
	if (b_NextScene)
		SceneManager::GetInstance()->SetScene(SCENEID_STAGE);
	else
	{
		cout << "Menu::Progress" << endl;
		b_NextScene = true;
	}

	}

void Menu::Render()
{
	cout << "Menu::Render" << endl;
}

void Menu::Release()
{
}
