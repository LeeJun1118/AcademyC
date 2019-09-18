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

	//** 이곳에서 Stage 가 출력되게 하고, 스테이지에서 Player 를 출력시키시오.
	cout << endl << "[Stage]" << endl;
	Main.Progress();
	Main.Render();

	return 0;
}