#include "BackGround.h"
#include "CursorManager.h"

BackGround::BackGround()
{

}

BackGround::~BackGround()
{

}

void BackGround::Initialize()
{

}

void BackGround::Progress()
{

}

void BackGround::Render()
{
	CursorManager::OnDrawText(0, 0, (char*)"¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
	
	for (int y = 0; y < 29; y++)
	{
		if (y == 14 || y == 15)
			continue;
		CursorManager::OnDrawText(0, y, (char*)"¡á");
		CursorManager::OnDrawText(118, y, (char*)"¡á");
	}

	CursorManager::OnDrawText(0, 28, (char*)"¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
}

void BackGround::Release()
{

}
