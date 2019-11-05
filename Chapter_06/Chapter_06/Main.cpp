#include "Headers.h"
#include "MainUpdate.h"

int main(void)
{
	MainUpdate Main;
	Main.Initialize();

	DWORD dwTime = GetTickCount();

	while (true)
	{
		if (dwTime + 50 < GetTickCount())
		{
			dwTime = GetTickCount();
			
			Main.Progress();
			Main.Render();

		}
	}

	return 0;
}