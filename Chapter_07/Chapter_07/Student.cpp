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

	cout << "학생 이름 입력 : ";
	cin >> str;

	char* pName = (char*)malloc(strlen(str));
	strcpy(pName, str);
	m_Info.Name = pName;

	cout << "학생 번호 입력: ";
	cin >> m_Info.iIndex;

	cout << "국어 점수 입력: ";
	cin >> m_Info.iKor;

	cout << "영어 점수 입력 : ";
	cin >> m_Info.iEng;

	cout << "수학 점수 입력 : ";
	cin >> m_Info.iMath;
}

void Student::Progress()
{
}

void Student::Render()
{
	cout << "학생 이름 : " << m_Info.Name << endl;
	cout << "학생 번호 : " << m_Info.iIndex << endl;
	cout << "국어 점수 : " << m_Info.iKor << endl;
	cout << "영어 점수 : " << m_Info.iEng << endl;
	cout << "수학 점수 : " << m_Info.iMath << endl << endl;
}

void Student::Release()
{
}
