#include <iostream>
#include <list>
#include <vector>

using namespace std;


class Object
{
private:
	int Age;
	string Name;

public:
	void Initialize()
	{
		Age = 0;
		Name = " ";
	}

	void Progress() { }

	void Render()
	{
		cout << Age << endl;
		cout << Name << endl;
	}

public:
	void SetName(string _str) { Name = _str; }
	void SetAge(int _Age) { Age = _Age; }
};


list<Object*> ObjectList;

void AddObject(Object* _pObj);



int main(void)
{
	for (int i = 20; i < 30; i++)
	{
		Object* pObj = new Object;
		pObj->Initialize();
		pObj->SetAge(i);
		ObjectList.push_back(pObj);
	}


	for (list<Object*>::iterator iter = ObjectList.begin();
		iter != ObjectList.end(); ++iter)
	{
		(*iter)->Progress();
		(*iter)->Render();
	}




	/*
	//** ²ÜÆÁ 1
	for (int num : NumberList)
	{
		cout << num << endl;
	}
	*/



	//** ²ÜÆÁ 2 
	//** ¹®ÀÚ¿­
	/*
	string str1;
	str1 = "ABCD";

	cout << str1.size() << endl;

	string str2;
	str2 = "EFGH";

	str1 += str2;

	cout << str1 << endl;

	for (int i = 0; i < str1.size(); i++)
	{
		cout << str1[i] << endl;
	}
	*/

	return 0;
}

void AddObject(Object* _pObj)
{
	ObjectList.push_back(_pObj);
}
