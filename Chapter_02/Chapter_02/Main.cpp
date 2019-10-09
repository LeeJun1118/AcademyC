#include <iostream>	
#include <Windows.h>

using namespace std;

typedef struct tagVector3
{
	float x, y, z;

	tagVector3() {};

	tagVector3(float _x, float _y) :x(_x), y(_y), z(0) {};
	tagVector3(float _x, float _y, float _z) :x(_x), y(_y), z(_z) {};
}Vector3;

typedef struct tagTramsform
{
	Vector3 Position;
	Vector3 Scale;
	Vector3 Rotate;
}Transform;


typedef struct tagObject
{
	int Index;
	Transform TransPos;
}Object;

typedef struct tagList
{
	Object* pObj;
	tagList* pBack;
}List;

int iCount = 0;


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

//** Àç±Í ÇÔ¼ö
void AddObject(List* _pList, Object* _pObj)
{
	if (_pList->pBack == NULL)
	{
		tagList* pTemp = new List;
		pTemp->pObj = new Object;
		pTemp->pBack = NULL;

		_pList->pObj = _pObj;
		_pList->pBack = pTemp;

		return;
	}
	else
		AddObject(_pList->pBack,_pObj);
}
int main(void)
{
	tagList* pList = new List;
	pList->pBack = NULL;

	Object* pObj1 = new Object;
	pObj1->Index = 0;
	AddObject(pList, pObj1);

	Object* pObj2 = new Object;
	pObj2->Index = 1;
	AddObject(pList, pObj2);

	Object* pObj3 = new Object;
	pObj3->Index = 2;
	AddObject(pList, pObj3);

	Output(pList);
	return 0;
}