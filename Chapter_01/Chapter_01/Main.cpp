#include <iostream>
#include <Windows.h>

using namespace std;

int MAX = 0;
int iCount = 0;
int* piArray;

int main(void)
{
	// Enter 칠 때마다 1씩 증가해서 출력되게 
	piArray = NULL;
	DWORD dwTime = GetTickCount();

	while (true)
	{
		if (dwTime + 50 < GetTickCount())
		{
			dwTime = GetTickCount();
			system("cls");

			if (GetAsyncKeyState(VK_RETURN))
			{
				iCount++;
				MAX++;

				if (piArray == NULL)
				{
					piArray = new int[MAX];
					piArray[MAX - 1] = iCount;
				}
				else
				{
					int* iTemp = new int[MAX - 1];

					for (int i = 0; i < MAX -1; i++)
					{
						iTemp[i] = piArray[i];
					}
					piArray = NULL;
					piArray = new  int[MAX - 1];

					for (int i = 0; i < MAX -1; i++)
					{
						piArray[i] = iTemp[i];
					}
					piArray[MAX - 1] = iCount;
				}
			}

			for (int i = 0; i < MAX; i++)
			{
				printf_s("%d \n", piArray[i]);
			}
		}
	}

	return 0;
}