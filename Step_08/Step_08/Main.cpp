#include "Headers.h"
#include "MainUpdate.h"


int main(void)
{
	MainUpdate Main;
	Main.Initialize();

	cout << "[Logo]" << endl;
	Main.Progress();
	Main.Render();

	cout << endl << "[Menu]" << endl;
	Main.Progress();
	Main.Render();

	Main.Progress();
	Main.Render();

	//** �̰����� Stage �� ��µǰ� �ϰ�, ������������ Player �� ��½�Ű�ÿ�.
	cout << endl << "[Stage]" << endl;
	Main.Progress();
	Main.Render();

	return 0;
}