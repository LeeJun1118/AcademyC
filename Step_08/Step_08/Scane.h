#pragma once
#include "Headers.h"

class Scane
{
public:
	Scane();
	virtual ~Scane();
public:
	virtual void Initialize() = 0;
	virtual void Progress() = 0;
	virtual void Render() = 0;
	virtual void Release() = 0;
};

