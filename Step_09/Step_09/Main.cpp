#include "MainUpdate.h"

int main(void)
{
	MainUpdate Main;
	Main.Initialize();

	DWORD dwTime = GetTickCount();

	system("pause");
	while (true)
	{
		if (dwTime + 50 < GetTickCount())
		{
			system("cls");
			dwTime = GetTickCount();

			Main.Progress();
			Main.Render();
		}
	}


	Main.Progress();
	Main.Render();

	return 0;
}