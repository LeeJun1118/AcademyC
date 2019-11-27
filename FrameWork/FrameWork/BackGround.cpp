#include "BackGround.h"
#include "CursorManager.h"

void BackGround::Inititalize()
{
	m_pBlock.Position = Vector3(0.f, 0.f);
	m_pBlock.Rotate = Vector3(0.f, 0.f);
	m_pBlock.Scale = Vector3(2.f, 1.f);
}


void BackGround::Render()
{
	for (int y = 0; y < WINSIZEY - 1; y++)
	{
		if (y == 0 || y == (WINSIZEY - 2))
		{
			CursorManager::SetCursorPosition(0, y, (char*)"¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
		}
		else
		{
			CursorManager::SetCursorPosition(0, y, (char*)"¡á");
			CursorManager::SetCursorPosition(WINSIZEX - 2, y, (char*)"¡á");

		}
	}
}
