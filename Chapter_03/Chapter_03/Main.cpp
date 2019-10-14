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

	//첫번쨰 원소의 위치 반환
	NumberList.begin();
	//마지막 위치 반환
	NumberList.end();

	//가장 앞에 있는 원소 반환
	NumberList.front();
	//가장 마지막에 있는 원소 반환
	NumberList.back();
	//현재 리스트가 가지고 있는 모든 원소의 개수 반환
	NumberList.size();

	// 가장 첫번째 위치에 x를 삽입
	NumberList.insert(NumberList.begin(), x);
	// 가장 마지막의 위치에 x를 삽입
	NumberList.push_back(x);
	// 첫 번째 위치에 x 삽입
	NumberList.push_front(x);

	//마지막 원소를 삭제
	NumberList.pop_back();
	//첫번째 원소를 삭제
	NumberList.pop_front();

	//리스트의 순서를 뒤집는다.
	NumberList.reverse();
	//모든 원소 삭제
	NumberList.clear();

	*/
	vector<int> NumList;
	int x = 0;

	//시작 위치 반환
	NumList.begin();
	//마지막 위치 반환
	NumList.end();

	//가장 앞에 있는 원소 반환
	NumList.front();
	//가장 마지막에 있는 원소 반환
	NumList.back();
	//현재 리스트가 가지고 있는 모든 원소의 개수 반환
	NumList.size();


	//현재 남은 여유 공간 반환
	NumList.capacity();

	//
	NumList.insert(NumList.begin(), x);
	//모든 원소 삭제
	NumList.clear();

	return 0;
}



//** 재귀함수
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