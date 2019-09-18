#include <iostream>

using namespace std;




//** 상속

//** 꼭 피해야 될 상속 관계.
//** 다중 상속.
//** 다이아몬드 상속.
class ObjectA
{
public:
	void Output() 
	{
		cout << "AAA" << endl;
	}
public:
	ObjectA()
	{
		cout << "A생성자" << endl;
	}
	~ObjectA()
	{
		cout << "A소멸자" << endl << endl;
	}
};

//** 생성자는 클래스가 생성된 직후에 호출됨.
//** 소멸자는 클래스가 소멸되기 직전에 호출됨.


class ObjectB : public ObjectA
{
public:
	void Output()
	{
		cout << "BBB" << endl;
	}
public:
	ObjectB()
	{
		cout << "B생성자" << endl;
	}
	~ObjectB()
	{
		cout << "B소멸자" << endl;
	}
};


class ObjectC : public ObjectA
{
public:
	void Output()
	{
		cout << "CCC" << endl;
	}
public:
	ObjectC()
	{
		cout << "C생성자" << endl;
	}
	~ObjectC()
	{
		cout << "C소멸자" << endl;
	}
};


class ObjectD : public ObjectB
{
public:
	void Output()
	{
		cout << "DDD" << endl;
	}
public:
	ObjectD()
	{
		cout << "D생성자" << endl;
	}
	~ObjectD()
	{
		cout << "D소멸자" << endl;
	}
};


int main(void)
{
	ObjectA A;
	A.Output();
	cout << endl;

	ObjectB B;
	B.Output();
	cout << endl;

	ObjectC C;
	C.Output();
	cout << endl;

	ObjectD D;
	D.Output();
	cout << endl;


	return 0;
}