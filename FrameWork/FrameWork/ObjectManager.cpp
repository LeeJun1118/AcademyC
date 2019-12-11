#include "ObjectManager.h"

#include "Player.h"
#include "BackGround.h"

ObjectManager* ObjectManager::m_pInstance = NULL;


ObjectManager::ObjectManager()
{

}

ObjectManager::~ObjectManager()
{

}

void ObjectManager::Initialize()
{
	Object* pObj = new Player;
	pObj->Initialize();

	m_pBackground = new BackGround;
	m_pBackground->Initialize();

	ObjectManager::GetInstance()->Initialize();

	m_Player.push_back(pObj);
}

void ObjectManager::Progress()
{
	if (GetAsyncKeyState(VK_SPACE))
	{
		Object* pObj = new Player;
		pObj->Initialize();

		pObj->SetRotate(m_Player.back()->GetTransform().Rotate);
		pObj->SetTexture((char*)"¡Û");

		switch (pObj->GetTransform().Rotate)
		{
		case DIRIDS_UP:
		{
			float fy = m_Player.back()->GetTransform().Position.y + 1;

			pObj->SetPosition(
				Vector3(m_Player.back()->GetTransform().Position.x, fy));
		}
		break;

		case DIRIDS_DOWN:
		{
			float fy = m_Player.back()->GetTransform().Position.y - 1;

			pObj->SetPosition(
				Vector3(m_Player.back()->GetTransform().Position.x, fy));
		}
		break;

		case DIRIDS_LEFT:
		{
			pObj->SetPosition(
				Vector3(m_Player.back()->GetTransform().Position.x + 2, 
					m_Player.back()->GetTransform().Position.y));
		}
		break;

		case DIRIDS_RIGHT:
		{
			pObj->SetPosition(
				Vector3(m_Player.back()->GetTransform().Position.x - 2,
					m_Player.back()->GetTransform().Position.y) );
		}
		break;
		}

		m_Player.push_back(pObj);
	}
	
	for (int i = m_Player.size() - 1; i > 0; --i)
	{
		if (i != 0)
		{
			m_Player[i]->SetPosition(
				m_Player[i - 1]->GetTransform().Position);

			m_Player[i]->SetRotate(
				m_Player[i - 1]->GetTransform().Rotate);
		}
	}

	m_Player.front()->Progress();

	ObjectManager::GetInstance()->Progress();

	m_pBackground->Render();


}

void ObjectManager::Render()
{
	for (vector<Object*>::iterator iter = m_Player.begin();
		iter != m_Player.end(); ++iter)
	{
		(*iter)->Render();
	}


	delete m_pBackground;
	m_pBackground = NULL;
	//system("pause");
}