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
	CursorManager::OnDrawText(0, 0, (char*)"�������������������������������������������������������������");
	
	for (int y = 0; y < 29; y++)
	{
		if (y == 14 || y == 15)
			continue;
		CursorManager::OnDrawText(0, y, (char*)"��");
		CursorManager::OnDrawText(118, y, (char*)"��");
	}

	CursorManager::OnDrawText(0, 28, (char*)"�������������������������������������������������������������");
}

void BackGround::Release()
{

}
