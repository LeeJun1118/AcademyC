#pragma once
#include "Scane.h"

class Menu : public Scane
{
public:
	Menu();
	virtual ~Menu();
public:
	virtual void Initialize()override;
	virtual void Progress()override;
	virtual void Render()override;
	virtual void Release()override;
};

