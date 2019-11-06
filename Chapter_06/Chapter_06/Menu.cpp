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
		//** ����
		cout << "����" << endl;
		StudentList.pop_back();
		break;

	default:
		//** �߸� �Է� �Ͽ����ϴ�.
		cout << "�߸� �Է� �Ͽ����ϴ�." << endl;
		break;
	}
	m_iChoice = 0;
	system("pause");

}

void Menu::Render()
{
	system("cls");
	cout << "** Info" << endl;
	cout << " 1. �л� ���" << endl;
	cout << " 2. �߰�" << endl;
	cout << " 3. ����" << endl << endl;
	cout << "�Է� : " << endl;

	m_iChoice = _getch();
	m_iChoice -= 48;
}

void Menu::Release()
{
}
