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

//** Àç±Í ÇÔ¼ö
void AddObject(List* _pList, Object* _pObj)
{
	if (_pList->pBack != NULL)
		return;
	else
		AddObject(_pList->pBack, _pList->pBack->pObj);
}

void Output(List* _pList)
{
	cout << _pList->pObj->Index << endl;

	if (_pList->pBack == NULL)
	{
		return;
	}
	else
	{
		Output(_pList->pBack);
	}
}

int main(void)
{
	tagList* pList = new List;

	Object* pObj1 = new Object;
	pObj1->Index = 0;

	AddObject(pList, pObj1);

	Output(pList);

	return 0;
}