#pragma once
#include "Scane.h"

class Stage : public Scane
{
public:
	Stage();
	virtual ~Stage();
public:
	virtual void Initialize()override;
	virtual void Progress()override;
	virtual void Render()override;
	virtual void Release()override;
};

