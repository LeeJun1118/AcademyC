#pragma once
#include "Object.h"

class Student :public Object
{
public:
	Student();
	virtual ~Student();
public:
	virtual void Initialize()override;
	virtual void Progress()override;
	virtual void Render()override;
	virtual void Release()override;
};