#include "Menu.h"
#include "Student.h"

Menu::Menu():m_iChoice(0), m_iIndex(0)
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
		if (StudentList.empty())
		{
			cout << "���� ��ϵ� �л��� �����ϴ�." << endl << endl;
		}
		else
		{
			for (list<Object*>::iterator iter = StudentList.begin();
				iter != StudentList.end(); ++iter)
			{
				(*iter)->Render();
			}
		}
		
		break;
	case 2:
	{
		Object* pTemp = new Student;
		pTemp->Initialize();
		pTemp->SetIndex(++m_iIndex);

		StudentList.push_back(pTemp);
	}
	break;
		

	case 3:
		//** ����
		cout << "����" << endl;
		{
			int iCheck = 0;

			system("cls");
			cout << "** ���" << endl;
			cout << " 1. �̸� �˻�" << endl;
			cout << " 2. ��ȣ �˻�" << endl;
			cout << " 3. ��ü ����" << endl << endl;

			cout << "�Է� : " << endl;
			iCheck = _getch();
			iCheck -= 48;

			cout << iCheck << endl;

			switch (iCheck)
			{
			case 1:
			{
				char str[128] = "";

				cout << "�̸� �Է�: ";
				cin >> str;

				char* pName = new char[strlen(str)];
				strcpy(pName, str);

				for (list<Object*>::iterator iter = StudentList.begin();
					iter != StudentList.end();)
				{
					if (!strcmp((*iter)->GetName(),pName)) //������ false�� �����ϱ� !�ٿ��ش�
					{
						cout << "�л� ����Ȯ��" << endl;
						(*iter)->Render();

						cout << endl << "�л� �½��ϱ�? (y/n)" << endl;

						char c = _getch();
						cout << c << endl;

						if (c == 'y' || c == 'Y')
						{
							cout << endl << "���� �����Ͻðڽ��ϱ�? (y/n)" << endl;

							if (c == 'y' || c == 'Y')
								iter = StudentList.erase(iter);
						}
					}
					else
						++iter;
				}
				
			}
				break;
			case 2:
			{
				int stuNum = NULL;
				cout << "��ȣ �Է�: ";
				cin >> stuNum;

				for (list<Object*>::iterator iter = StudentList.begin();
					iter != StudentList.end();)
				{
					if ((*iter)->GetNum() == stuNum) //������ false�� �����ϱ� !�ٿ��ش�
					{
						cout << "�л� ����Ȯ��" << endl;
						(*iter)->Render();

						cout << endl << "�л� �½��ϱ�? (y/n)";

						char c = _getch();
						cout << c << endl;

						if (c == 'y' || c == 'Y')
						{
							cout << endl << "���� �����Ͻðڽ��ϱ�? (y/n)" ;

							if (c == 'y' || c == 'Y')
								iter = StudentList.erase(iter);
						}

					

					}
					else
						++iter;
				}
			}
			
				break;
			case 3:
				StudentList.clear();
				break;
			default:
				break;
			}
		}

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
	cout << "�Է� : ";

	m_iChoice = _getch();
	if (m_iChoice)
	{
		m_iChoice -= 48;
	}

	cout << m_iChoice << endl;
}

void Menu::Release()
{
}
