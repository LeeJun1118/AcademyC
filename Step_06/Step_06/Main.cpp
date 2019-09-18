#include <iostream>

using namespace std;

/*
//** [1] Getter, Setter
class Object
{
private:
	int iNumber;
	char str;

public:
	void Initialize();
	void Output();
public:
	void SetNumber(int _iNumber) { iNumber = _iNumber; }
	int GetNumber()  { return iNumber; }

public:
	Object() : iNumber(0) { }
	~Object() { }
};

void Object::Initialize()
{
	iNumber = 0;
}

void Object::Output()
{
	cout << iNumber << endl;
}
*/


/*
//** [2] Singleton
*/

// static  Á¤Àû.





class Singleton
{
private:
	static Singleton* m_pInstance;
public:
	static Singleton* GetInstance()
	{
		if (m_pInstance == NULL)
			m_pInstance = new Singleton;

		return m_pInstance;
	}

private:
	int iNumber;
public:
	void SetNumber(int _iNumber) { iNumber = _iNumber; }
	int GetNumber() { return iNumber; }

private:
	Singleton() {}
public:
	~Singleton() {}
};

Singleton* Singleton::m_pInstance = NULL;




int main(void)
{

	/*
	//** [1]

	Object Obj;
	Obj.Initialize();
	Obj.SetNumber(365);

	int iNumber = Obj.GetNumber();

	cout << iNumber << endl;
	*/




	/*
	//** [2]
	*/

	Singleton::GetInstance()->SetNumber(365);
	cout << Singleton::GetInstance()->GetNumber() << endl;




	return 0;
}

