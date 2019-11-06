#pragma once
#include "Headers.h"

class Object
{
protected:
	Student_Info m_Info;
public:
	Object();
	virtual~Object();
public:
	virtual void Initialize() = 0;
	virtual void Progress() = 0;
	virtual void Render() = 0;
	virtual void Release() = 0;

public:
	char* GetName() {
		return m_Info.Name;
	}
	int GetNum() {
		return m_Info.iIndex;
	}
	void SetIndex(int _iIndex) { m_Info.iIndex = _iIndex; }
};

