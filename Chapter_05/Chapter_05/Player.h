#pragma once
#include "Object.h"


class Player:public Object
{
public:
	Player();
	virtual ~Player();

public:
	virtual void Initialize()override;
	virtual void Progress()override;
	virtual void Render()override;
	virtual void Release()override;
private:
	int m_iCount;
	int number;
	string name;
public:
	void SetNumber(int _num) {  number = _num; };
	void SetName(string _str) {  name = _str; };


};

