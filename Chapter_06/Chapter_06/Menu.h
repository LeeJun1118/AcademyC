#pragma once
#include "Scene.h"

class Object;

class Menu :public Scene
{
public:
	Menu();
	virtual ~Menu();
public:
	virtual void Initialize()override;
	virtual void Progress()override;
	virtual void Render()override;
	virtual void Release()override;
private:
	list<Object*> StudentList;
	int m_iChoice;
};