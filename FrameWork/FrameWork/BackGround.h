#pragma once
#include "Object.h"

class BackGround : public Object
{
public:
	BackGround();
	virtual ~BackGround();
public:
	virtual void Initialize()override;
	virtual void Progress()override;
	virtual void Render()override;
	virtual void Release()override;
};

