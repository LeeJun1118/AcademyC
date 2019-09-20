////   �����������������������   ????????????????????????????????????
#pragma once
#include "Headers.h"

class Manager
{
public:
	Manager();
	virtual ~Manager();

public:
	virtual void Initialize() = 0;
	virtual void Progress() = 0;
	virtual void Render() = 0;
	virtual void Release() = 0;
};
////  �������������������������   ????????????????????????????????????
