#include <iostream>
#include <Windows.h>

using namespace std;

int MAX = 0;
int iCount = 0;
int* piArray;

int main(void)
{
	// Enter ĥ ������ 1�� �����ؼ� ��µǰ� 
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

			}
		}
	}

	return 0;
}