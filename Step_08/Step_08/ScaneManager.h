#pragma once
#include "Headers.h"

class Scane; // 정반 선언.
class ScaneManager
{
private:
	ScaneManager();
public:
	~ScaneManager();
private:
	static ScaneManager* m_pInstance;
public:
	static ScaneManager* GetInstance()
	{
		if (m_pInstance == NULL)
			m_pInstance = new ScaneManager;

		return m_pInstance;
	}

private:
	//** 현재 씬이 어디에 위치해 있는지 확인하기 위한 용도.
	Scane* m_pScane;

public:
	void SetScane(SCANEID _StateID);
	void Progress();
	void Render();
};

