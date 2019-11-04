#include "MainUpdate.h"
#include "Player.h"

MainUpdate::MainUpdate()
{
}

MainUpdate::~MainUpdate()
{
}


void MainUpdate::Initialize()
{

}

void MainUpdate::Progress()
{
	/*for (vector<Object*>::iterator iter = m_ObjList.begin();
		iter != m_ObjList.end(); )
	{
		int iResult = (*iter)->Progress();

		if (iResult == 1)
		{
			iter = m_ObjList.erase(iter);
		}
		else
			++iter;
	}*/

	if (GetAsyncKeyState(VK_RETURN))
	{
		Object* pObj = new Player;
		pObj->Initialize();

		m_ObjList.push_back(pObj);
	}

}

void MainUpdate::Render()
{
	for (vector<Object*>::iterator iter = m_ObjList.begin();
		iter != m_ObjList.end(); ++iter)
	{
		(*iter)->Render();
	}
}

void MainUpdate::Release()
{

}