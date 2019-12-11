#pragma once
#include "Headers.h"

class Object;
class MainUpdate
{
public:
	MainUpdate();
	~MainUpdate();
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
	
};

