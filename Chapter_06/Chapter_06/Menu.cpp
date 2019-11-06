#include "Menu.h"
#include "Student.h"

Menu::Menu():m_iChoice(0)
{
}

Menu::~Menu()
{
}

void Menu::Initialize()
{
}

void Menu::Progress()
{
	if (!m_iChoice)
		return;
	
	switch (m_iChoice)
	{
	case 1:
		for (list<Object*>::iterator iter = StudentList.begin(); 
			iter != StudentList.end(); ++iter)
		{
			(*iter)->Render();
		}
		break;
	case 2:
	{
		Object* pTemp = new Student;
		pTemp->Initialize();

		StudentList.push_back(pTemp);
	}
	break;
		

	case 3:
		//** 삭제
		cout << "삭제" << endl;
		StudentList.pop_back();
		break;

	default:
		//** 잘못 입력 하였습니다.
		cout << "잘못 입력 하였습니다." << endl;
		break;
	}
	m_iChoice = 0;
	system("pause");

}

void Menu::Render()
{
	system("cls");
	cout << "** Info" << endl;
	cout << " 1. 학생 목록" << endl;
	cout << " 2. 추가" << endl;
	cout << " 3. 삭제" << endl << endl;
	cout << "입력 : " << endl;

	m_iChoice = _getch();
	m_iChoice -= 48;
}

void Menu::Release()
{
}
