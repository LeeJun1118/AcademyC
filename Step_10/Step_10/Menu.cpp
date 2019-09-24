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
}

void Menu::Progress()
{
	cout << "Menu::Progress" << endl;

	if (GetAsyncKeyState('S'))
		SceneManager::GetInstance()->SetScene(SCENEID_STAGE);

}

void Menu::Render()
{
	cout << "Menu::Render" << endl;
}

void Menu::Release()
{
}
