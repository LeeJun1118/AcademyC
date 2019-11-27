#include "Headers.h"
#include "MainUpdate.h"
#include "BackGround.h"

int main(void)
{
	MainUpdate Main;
	Main.Initialize();

	BackGround Back;
	Back.Inititalize();
	
	DWORD dwTime = GetTickCount();
	
	while (true)
	{
		if (dwTime < GetTickCount())
		{
			dwTime = GetTickCount();
			system("cls");

			Back.Render();
			Main.Progress();
			Main.Render();
		}
	}

	return 0;
}




/*
BackGround class 생성

BackGround Render 함수를 호출하여 그리기.


힌트 1
for(int y = 0 ; y < 30 ; y++)
{
	for(int x = 0 ; x < 120 ; x += 2)
	{

	}
}

*/
