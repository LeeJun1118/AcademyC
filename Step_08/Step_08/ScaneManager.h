#pragma once
#include "Headers.h"

class Scane; // ���� ����.
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
	//** ���� ���� ��� ��ġ�� �ִ��� Ȯ���ϱ� ���� �뵵.
	Scane* m_pScane;

public:
	void SetScane(SCANEID _StateID);
	void Progress();
	void Render();
};

