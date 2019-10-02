#include <iostream>
#include <Windows.h>

using namespace std;

int MAX = 10;

int* piArray;

int main(void)
{
	// Enter 칠 때마다 1씩 증가해서 출력되게 
	
	DWORD dwTime = GetTickCount();

	while (true)
	{
		if (dwTime + 50 < GetTickCount())
		{
			dwTime = GetTickCount();
			system("cls");
			piArray = new int[10];

			for (int i = 0; i < 10; i++)
			{
				piArray[i] = i;
				printf_s("%d\n", piArray[i]);
			}

			if (GetAsyncKeyState(VK_RETURN))
			{
				int* iTemp = new int[MAX + 1];
				for (int i = 0; i < MAX; i++)
				{
					iTemp[i] = piArray[i];
				}
				iTemp[MAX] = iTemp[MAX - 1] + 1;
				printf_s("%d\n", iTemp[MAX]);
				MAX++;
			}
		}
		
			
			
		
	}

	return 0;
}