#include "Headers.h"
#include "MainUpdate.h"

int main(void)
{
	MainUpdate Main;
	Main.Initialize();
	

	DWORD dwTime = GetTickCount();
	
	while (true)
	{
		if (dwTime < GetTickCount())
		{
			dwTime = GetTickCount();
			system("cls");

			Main.Progress();
			Main.Render();
		}
	}

	return 0;
}




/*
BackGround class ����

BackGround Render �Լ��� ȣ���Ͽ� �׸���.


��Ʈ 1
for(int y = 0 ; y < 30 ; y++)
{
	for(int x = 0 ; x < 120 ; x += 2)
	{

	}
}

*/
