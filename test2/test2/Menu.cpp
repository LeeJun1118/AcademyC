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
	cout << "Logo::Initialize" << endl;
}

void Menu::Progress()
{
	if (GetAsyncKeyState('S'))
	{
		SceneManager::GetInstance()->SetScene(SCENEIDS_STAGE);
		cout << " Menu::Progress" << endl;
	}
}

void Menu::Render()
{
	cout << "Menu::Render" << endl;

}

void Menu::Release()
{
}
