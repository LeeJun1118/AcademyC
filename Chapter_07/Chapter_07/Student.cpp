#include "Student.h"

Student::Student()
{
}

Student::~Student()
{
}

void Student::Initialize()
{
	char str[128] = "";

	cout << "�л� �̸� �Է� : ";
	cin >> str;

	char* pName = (char*)malloc(strlen(str));
	strcpy(pName, str);
	m_Info.Name = pName;

	cout << "�л� ��ȣ �Է�: ";
	cin >> m_Info.iIndex;

	cout << "���� ���� �Է�: ";
	cin >> m_Info.iKor;

	cout << "���� ���� �Է� : ";
	cin >> m_Info.iEng;

	cout << "���� ���� �Է� : ";
	cin >> m_Info.iMath;
}

void Student::Progress()
{
}

void Student::Render()
{
	cout << "�л� �̸� : " << m_Info.Name << endl;
	cout << "�л� ��ȣ : " << m_Info.iIndex << endl;
	cout << "���� ���� : " << m_Info.iKor << endl;
	cout << "���� ���� : " << m_Info.iEng << endl;
	cout << "���� ���� : " << m_Info.iMath << endl << endl;
}

void Student::Release()
{
}
