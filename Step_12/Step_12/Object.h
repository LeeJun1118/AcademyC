#pragma once
#include "Headers.h"

class Object
{
public:
	Object();
	virtual ~Object();
protected:
	Transform m_tInfo;
public:
	virtual void Initialize() = 0;
	virtual void Progress() = 0;
	virtual void Render() = 0;
	virtual void Release() = 0;

public:
	void SetPosition(Vector3 _vPosition) { m_tInfo.Position = _vPosition; }
	Vector3 GetPosition() { return m_tInfo.Position; }
	Vector3 GetScale() { return m_tInfo.Scale; }
};

