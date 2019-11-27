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
	m_pBlock.Position = Vector3(0.f, 0.f);
	m_pBlock.Rotate = Vector3(0.f, 0.f);
	m_pBlock.Scale = Vector3(2.f, 1.f);
}

void BackGround::Progress()
{
}


void BackGround::Render()
{
	CursorManager::OnDrawText(0, 0, (char*)"���������������������������������������������������");
	CursorManager::OnDrawText(0, WINSIZEY - 2, (char*)"���������������������������������������������������");

	for (int y = 0; y < WINSIZEY - 1; y++)
	{
		CursorManager::OnDrawText(0, y, (char*)"��");
		CursorManager::OnDrawText(WINSIZEX - 2, y, (char*)"��");

	}
}

void BackGround::Release()
{
}
