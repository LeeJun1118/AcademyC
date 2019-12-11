#pragma once
#include "Headers.h"


class CursorManager
{
public:
	static void SetCursorPosition(float _x, float _y)
	{
		COORD Pos = { (SHORT)_x , (SHORT)_y };

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	}

	static void OnDrawText(float _x, float _y, char* _pTexture)
	{
		SetCursorPosition(_x, _y);
		cout << _pTexture << endl;
	}

	static void OnDrawFloat(float _x, float _y, float _pValue)
	{
		SetCursorPosition(_x, _y);
		cout << _pValue << endl;
	}

	static void SetCursorDisable()
	{
		CONSOLE_CURSOR_INFO cursorInfo = { 0 };
		cursorInfo.dwSize = 1;
		cursorInfo.bVisible = FALSE;
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
	}
};

