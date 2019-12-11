/*
 * e-mail : winstonegames@naver.com
 */
#include "Headers.h"
#include "MainUpdate.h"

int FrameTime = 0;



int main(void)
{
	MainUpdate Main;
	Main.Initialize();
	
	FrameTime = 50;
	DWORD dwTime = GetTickCount();

	while (true)
	{
		if (dwTime + FrameTime < GetTickCount())
		{
			dwTime = GetTickCount();
			system("cls");

			Main.Progress();
			Main.Render();
		}
	}

	return 0;
}

