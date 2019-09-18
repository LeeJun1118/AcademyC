#pragma once
#include "Scane.h"

class Logo : public Scane
{
public:
	Logo();
	virtual ~Logo();
public:
	virtual void Initialize()override;
	virtual void Progress()override;
	virtual void Render()override;
	virtual void Release()override;

private:
	bool m_bNextScane;
};

