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
	m_bNextScene = false;
}

void Menu::Progress()
{
	if (m_bNextScene)
		SceneManager::GetInstance()->SetScene(SCENEIDS_STAGE);
	else
	{
		cout << "Menu::Progress" << endl;
		m_bNextScene = true;
	}
	//cout << "Menu::Progress" << endl;
}

void Menu::Render()
{
	cout << "Menu::Render" << endl;
}

void Menu::Release()
{
}
