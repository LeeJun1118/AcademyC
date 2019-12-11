#pragma once
#include "Headers.h"

class Object
{
public:
	Object();
	virtual ~Object();
public:
	virtual void Initialize() = 0;
	virtual void Progress() = 0;
	virtual void Render() = 0;
	virtual void Release() = 0;
public:
	Transform GetTransform() { return m_tInfo; }
	
	void SetPosition(Vector3 _vPos) { m_tInfo.Position.x = _vPos.x;  m_tInfo.Position.y = _vPos.y; }
	void SetRotate(int _iRotate) { m_tInfo.Rotate = _iRotate; }
	void SetTexture(char* _pTexture) { m_pTexture = _pTexture; }

protected:
	Transform m_tInfo;
	char* m_pTexture;
};

