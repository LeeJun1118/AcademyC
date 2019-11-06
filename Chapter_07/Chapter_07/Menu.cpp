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
			cout << "현재 등록된 학생이 없습니다." << endl << endl;
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
		//** 삭제
		cout << "삭제" << endl;
		{
			int iCheck = 0;

			system("cls");
			cout << "** 방법" << endl;
			cout << " 1. 이름 검색" << endl;
			cout << " 2. 번호 검색" << endl;
			cout << " 3. 전체 삭제" << endl << endl;

			cout << "입력 : " << endl;
			iCheck = _getch();
			iCheck -= 48;

			cout << iCheck << endl;

			switch (iCheck)
			{
			case 1:
			{
				char str[128] = "";

				cout << "이름 입력: ";
				cin >> str;

				char* pName = new char[strlen(str)];
				strcpy(pName, str);

				for (list<Object*>::iterator iter = StudentList.begin();
					iter != StudentList.end();)
				{
					if (!strcmp((*iter)->GetName(),pName)) //맞으면 false가 나오니까 !붙여준다
					{
						cout << "학생 정보확인" << endl;
						(*iter)->Render();

						cout << endl << "학생 맞습니까? (y/n)" << endl;

						char c = _getch();
						cout << c << endl;

						if (c == 'y' || c == 'Y')
						{
							cout << endl << "정말 삭제하시겠습니까? (y/n)" << endl;

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
				cout << "번호 입력: ";
				cin >> stuNum;

				for (list<Object*>::iterator iter = StudentList.begin();
					iter != StudentList.end();)
				{
					if ((*iter)->GetNum() == stuNum) //맞으면 false가 나오니까 !붙여준다
					{
						cout << "학생 정보확인" << endl;
						(*iter)->Render();

						cout << endl << "학생 맞습니까? (y/n)";

						char c = _getch();
						cout << c << endl;

						if (c == 'y' || c == 'Y')
						{
							cout << endl << "정말 삭제하시겠습니까? (y/n)" ;

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
	cout << "입력 : ";

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
