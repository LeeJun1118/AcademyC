#include "Logo.h"
#include "SceneManager.h"
#include "Scene.h"

Logo::Logo()
{
}

Logo::~Logo()
{
}

void Logo::Initialize()
{
	//next가 false로 초기화
	
	cout << "Logo::Initialize" << endl;
}

void Logo::Progress()
{
	//if문써서 true로 바꾸고 true이면 ~
	cout << "Logo::Progress" << endl;
}

void Logo::Render()
{
	cout << "Logo::Progress" << endl;
}

void Logo::Release()
{
}
