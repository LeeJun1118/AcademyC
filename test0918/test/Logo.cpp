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
	//next�� false�� �ʱ�ȭ
	
	cout << "Logo::Initialize" << endl;
}

void Logo::Progress()
{
	//if���Ἥ true�� �ٲٰ� true�̸� ~
	cout << "Logo::Progress" << endl;
}

void Logo::Render()
{
	cout << "Logo::Progress" << endl;
}

void Logo::Release()
{
}
