#include "Logo.h"

#include "CursorManager.h"
#include "SceneManaer.h"


Logo::Logo()
{
}

Logo::~Logo()
{
}

void Logo::Initialize()
{
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			m_pLogo[i][j] = new Texture;
		}
	}
	//** 9 줄
	m_pLogo[0][0]->pTexture = (char*)"";
	m_pLogo[0][1]->pTexture = (char*)"_.-.";
	m_pLogo[0][2]->pTexture = (char*)".-,.'|";
	m_pLogo[0][3]->pTexture = (char*)"|==|, |";
	m_pLogo[0][4]->pTexture = (char*)"|==|- |";
	m_pLogo[0][5]->pTexture = (char*)"|==|, |";
	m_pLogo[0][6]->pTexture = (char*)"|==|- `-._";
	m_pLogo[0][7]->pTexture = (char*)"/==/ - , ,/";
	m_pLogo[0][8]->pTexture = (char*)"`--`-----'";

	m_pLogo[0][0]->Position = Vector3(0, 0);
	m_pLogo[0][1]->Position = Vector3(3, 1);
	m_pLogo[0][2]->Position = Vector3(1, 2);
	m_pLogo[0][3]->Position = Vector3(0, 3);
	m_pLogo[0][4]->Position = Vector3(0, 4);
	m_pLogo[0][5]->Position = Vector3(0, 5);
	m_pLogo[0][6]->Position = Vector3(0, 6);
	m_pLogo[0][7]->Position = Vector3(0, 7);
	m_pLogo[0][8]->Position = Vector3(0, 8);
	//** 1. 0
	//** 2. 3
	//** 3. 1
	//** 4. 0
	//** 5. 0
	//** 6. 0
	//** 7. 0
	//** 8. 0
	//** 9. 0
	

	



	//** 9 줄
	m_pLogo[1][0]->pTexture = (char*)"_,.---._";
	m_pLogo[1][1]->pTexture = (char*)",-.' , -  `.";
	m_pLogo[1][2]->pTexture = (char*)"/==/_,  ,  - \\";
	m_pLogo[1][3]->pTexture = (char*)"|==|   .=.     |";
	m_pLogo[1][4]->pTexture = (char*)"|==|_ : ;=:  - |";
	m_pLogo[1][5]->pTexture = (char*)"|==| , '='     |";
	m_pLogo[1][6]->pTexture = (char*)"\\==\\ -    ,_ /";
	m_pLogo[1][7]->pTexture = (char*)"'.='. -   .'";
	m_pLogo[1][8]->pTexture = (char*)"`--`--''";

	m_pLogo[1][0]->Position = Vector3(9 + 3, 0);
	m_pLogo[1][1]->Position = Vector3(9 + 2, 1);
	m_pLogo[1][2]->Position = Vector3(9 + 1, 2);
	m_pLogo[1][3]->Position = Vector3(9 + 0, 3);
	m_pLogo[1][4]->Position = Vector3(9 + 0, 4);
	m_pLogo[1][5]->Position = Vector3(9 + 0, 5);
	m_pLogo[1][6]->Position = Vector3(9 + 1, 6);
	m_pLogo[1][7]->Position = Vector3(9 + 2, 7);
	m_pLogo[1][8]->Position = Vector3(9 + 4, 8);
	//** 1. 3
	//** 2. 2
	//** 3. 1
	//** 4. 0
	//** 5. 0
	//** 6. 0
	//** 7. 1
	//** 8. 2
	//** 9. 4





	//** 9 줄
	m_pLogo[3][0]->pTexture = (char*)"_,---.";
	m_pLogo[3][1]->pTexture = (char*)"_.='.'-,  \\";
	m_pLogo[3][2]->pTexture = (char*)"/==.'-     /";
	m_pLogo[3][3]->pTexture = (char*)"/==/ -   .-'";
	m_pLogo[3][4]->pTexture = (char*)"|==|_   /_,-. ";
	m_pLogo[3][5]->pTexture = (char*)"|==|  , \\_.' )";
	m_pLogo[3][6]->pTexture = (char*)"\\==\\-  ,    (";
	m_pLogo[3][7]->pTexture = (char*)"/==/ _  ,  /";
	m_pLogo[3][8]->pTexture = (char*)"`--`------'";
	m_pLogo[3][0]->Position = Vector3(23 + 5, 0);
	m_pLogo[3][1]->Position = Vector3(23 + 2, 1);
	m_pLogo[3][2]->Position = Vector3(23 + 1, 2);
	m_pLogo[3][3]->Position = Vector3(23 + 0, 3);
	m_pLogo[3][4]->Position = Vector3(23 + 0, 4);
	m_pLogo[3][5]->Position = Vector3(23 + 0, 5);
	m_pLogo[3][6]->Position = Vector3(23 + 0, 6);
	m_pLogo[3][7]->Position = Vector3(23 + 1, 7);
	m_pLogo[3][8]->Position = Vector3(23 + 1, 8);
	//** 1. 5
	//** 2. 2
	//** 3. 1
	//** 4. 0
	//** 5. 0
	//** 6. 0
	//** 7. 0
	//** 8. 1
	//** 9. 1






	//** 9 줄
	m_pLogo[2][0]->pTexture = (char*)"_,.---._";
	m_pLogo[2][1]->pTexture = (char*)",-.' , -  `.";
	m_pLogo[2][2]->pTexture = (char*)"/==/_,  ,  - \\";
	m_pLogo[2][3]->pTexture = (char*)"|==|   .=.     |";
	m_pLogo[2][4]->pTexture = (char*)"|==|_ : ;=:  - |";
	m_pLogo[2][5]->pTexture = (char*)"|==| , '='     |";
	m_pLogo[2][6]->pTexture = (char*)"\\==\\ -    ,_ / ";
	m_pLogo[2][7]->pTexture = (char*)"'.='. -   .'";
	m_pLogo[2][8]->pTexture = (char*)"`--`--''";
	m_pLogo[2][0]->Position = Vector3(36 + 3, 0);
	m_pLogo[2][1]->Position = Vector3(36 + 2, 1);
	m_pLogo[2][2]->Position = Vector3(36 + 1, 2);
	m_pLogo[2][3]->Position = Vector3(36 + 0, 3);
	m_pLogo[2][4]->Position = Vector3(36 + 0, 4);
	m_pLogo[2][5]->Position = Vector3(36 + 0, 5);
	m_pLogo[2][6]->Position = Vector3(36 + 1, 6);
	m_pLogo[2][7]->Position = Vector3(36 + 2, 7);
	m_pLogo[2][8]->Position = Vector3(36 + 4, 8);
	//** 1. 3
	//** 2. 2
	//** 3. 1
	//** 4. 0
	//** 5. 0
	//** 6. 0
	//** 7. 1
	//** 8. 2
	//** 9. 4
	if (GetAsyncKeyState(VK_SPACE))
	{
		Logo::Progress();
	}
}

void Logo::Progress()
{
	//SceneManaer::GetInstance()->Progress();
	SceneManaer::GetInstance()->SetScene(STATEIDS_STAGE);
}

void Logo::Render()
{
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			CursorManager::OnDrawText(
				m_pLogo[i][j]->Position.x,
				m_pLogo[i][j]->Position.y,
				m_pLogo[i][j]->pTexture);
		}
	}
}

void Logo::Release()
{
}




	
	
	
	
	
	
	
	
	