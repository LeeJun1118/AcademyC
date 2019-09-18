#include <iostream>

using namespace std;




//** ���

//** �� ���ؾ� �� ��� ����.
//** ���� ���.
//** ���̾Ƹ�� ���.
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
		cout << "A������" << endl;
	}
	~ObjectA()
	{
		cout << "A�Ҹ���" << endl << endl;
	}
};

//** �����ڴ� Ŭ������ ������ ���Ŀ� ȣ���.
//** �Ҹ��ڴ� Ŭ������ �Ҹ�Ǳ� ������ ȣ���.


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
		cout << "B������" << endl;
	}
	~ObjectB()
	{
		cout << "B�Ҹ���" << endl;
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
		cout << "C������" << endl;
	}
	~ObjectC()
	{
		cout << "C�Ҹ���" << endl;
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
		cout << "D������" << endl;
	}
	~ObjectD()
	{
		cout << "D�Ҹ���" << endl;
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