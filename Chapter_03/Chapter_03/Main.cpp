#include <iostream>
#include <Windows.h>

#include <list>
#include <vector>

using namespace std;


typedef struct tagVector3
{
	float x, y, z;

	tagVector3() {};

	tagVector3(float _x, float _y) :x(_x), y(_y), z(0) {};

	tagVector3(float _x, float _y, float _z)
		: x(_x), y(_y), z(_z) {};
}Vector3;

typedef struct tagTransform
{
	Vector3 Position;
	Vector3 Rotation;
	Vector3 Scale;

}Transform;

typedef struct tagObject
{
	int Index;
	Transform TransPos;

}Object;


typedef struct tagList
{
	Object* pObj;
	tagList* pFront;
	tagList* pBack;
}List;



int iCount = 1;



void AddObject(List* _pList, Object* _pObj);
void Output(List* _pList);
void ROutput(List* _pList);



int main(void)
{
	/*
	tagList* pList = new List;
	pList->pBack = NULL;
	pList->pFront = NULL;
	pList->pObj = new Object;
	pList->pObj->Index = 0;

	for (int i = 0; i < 10; i++)
	{
		Object* pObj = new Object;
		pObj->Index = i + 1;
		AddObject(pList, pObj);
	}

	Output(pList);

	cout << endl << endl << endl;
	tagList* pTemp = pList->pBack->pBack->pBack->pBack->pBack->pBack->pBack->pBack->pBack;

	ROutput(pTemp);
	*/
	/*
	
	list<int> NumberList;
	int x = 0;

	//ù���� ������ ��ġ ��ȯ
	NumberList.begin();
	//������ ��ġ ��ȯ
	NumberList.end();

	//���� �տ� �ִ� ���� ��ȯ
	NumberList.front();
	//���� �������� �ִ� ���� ��ȯ
	NumberList.back();
	//���� ����Ʈ�� ������ �ִ� ��� ������ ���� ��ȯ
	NumberList.size();

	// ���� ù��° ��ġ�� x�� ����
	NumberList.insert(NumberList.begin(), x);
	// ���� �������� ��ġ�� x�� ����
	NumberList.push_back(x);
	// ù ��° ��ġ�� x ����
	NumberList.push_front(x);

	//������ ���Ҹ� ����
	NumberList.pop_back();
	//ù��° ���Ҹ� ����
	NumberList.pop_front();

	//����Ʈ�� ������ �����´�.
	NumberList.reverse();
	//��� ���� ����
	NumberList.clear();

	*/
	vector<int> NumList;
	int x = 0;

	//���� ��ġ ��ȯ
	NumList.begin();
	//������ ��ġ ��ȯ
	NumList.end();

	//���� �տ� �ִ� ���� ��ȯ
	NumList.front();
	//���� �������� �ִ� ���� ��ȯ
	NumList.back();
	//���� ����Ʈ�� ������ �ִ� ��� ������ ���� ��ȯ
	NumList.size();


	//���� ���� ���� ���� ��ȯ
	NumList.capacity();

	//
	NumList.insert(NumList.begin(), x);
	//��� ���� ����
	NumList.clear();

	return 0;
}



//** ����Լ�
void AddObject(List* _pList, Object* _pObj)
{
	if (_pList->pBack == NULL)
	{
		tagList* pTemp = new List;
		pTemp->pFront = NULL;
		pTemp->pBack = NULL;

		pTemp->pObj = _pObj;

		_pList->pBack = pTemp;
		pTemp->pFront = _pList;
	}
	else
	{
		AddObject(_pList->pBack, _pObj);
	}
}

void Output(List* _pList)
{
	if (_pList->pBack == NULL)
		return;
	else
	{
		cout << _pList->pObj->Index << endl;
		Output(_pList->pBack);
	}
}
void ROutput(List* _pList)
{
	cout << _pList->pObj->Index << endl;
	if (_pList->pFront == NULL)
		return;
	else
	{
		ROutput(_pList->pFront);
	}
}