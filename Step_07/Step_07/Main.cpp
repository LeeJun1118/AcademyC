#include <iostream>

using namespace std;


/*
class Object
{
protected:
	int iNumber;

public:
	int GetNumber()
	{
		return iNumber;
	}

public:
	Object() : iNumber(0) {  };
};

class Player : public Object
{
public:
	void Init()
	{
		iNumber = 10;
	}
	void Output()
	{
		cout << iNumber << endl;
	}
};

class Monster : public Object
{
public:
	void Init()
	{
		iNumber = 100;
	}
	void Output()
	{
		cout << iNumber << endl;
	}
};
*/






//** 추상 클래스
class Object
{
public:
	//** 순수 가상 함수
	virtual void Initialize() = 0;
	virtual void Progress() = 0;
	virtual void Render() = 0;
	virtual void Release() = 0;
};




class Player : public Object
{
public:
	virtual void Initialize()override;
	virtual void Progress()override;
	virtual void Render()override;
	virtual void Release()override;
};

void Player::Initialize()
{
	cout << "Player::Initialize" << endl;
}

void Player::Progress()
{
	cout << "Player::Progress" << endl;
}

void Player::Render()
{
	cout << "Player::Render" << endl;
}

void Player::Release()
{
	cout << "Player::Release" << endl;
}




class Monster : public Object
{
public:
	virtual void Initialize()override;
	virtual void Progress()override;
	virtual void Render()override;
	virtual void Release()override;
};

void Monster::Initialize()
{
	cout << "Monster::Initialize" << endl;
}

void Monster::Progress()
{
	cout << "Monster::Progress" << endl;
}

void Monster::Render()
{
	cout << "Monster::Render" << endl;
}

void Monster::Release()
{
	cout << "Monster::Release" << endl;
}



int main(void)
{
	/*
	Player p;
	Monster m;

	p.Init();
	m.Init();


	p.Output();
	m.Output();

	p.Output();
	m.Output();


	Object o;
	cout << o.GetNumber() << endl;
	*/




	/*
	Object* pObj1 = new Player;
	pObj1->Initialize();

	Object* pObj2 = new Monster;
	pObj2->Initialize();
	*/



	Object* pObj[2];

	pObj[0] = new Player;
	pObj[1] = new Monster;

	for (int i = 0; i < 2; i++)
	{
		pObj[i]->Initialize();
	}



	return 0;
}





//** OOP 틍징 5가지.

// 1. 정보은닉.
// 2. 캡슐화.
// 3. 추상화.
// 4. 상속.

// 5. 다형성.

