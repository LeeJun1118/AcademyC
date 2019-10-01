#pragma once
#include "Object.h"

class CollisionManager
{
public:
	static bool CollisionRect(Object* _Temp, Object* _Dest)
	{
		if (_Temp->GetPosition().x < _Dest->GetPosition().x + _Dest->GetScale().x &&
			_Temp->GetPosition().x + _Temp->GetScale().x > _Dest->GetPosition().x && 
			_Temp->GetPosition().y < _Dest->GetPosition().y + _Dest->GetScale().y &&
			_Temp->GetPosition().y + _Temp->GetScale().y > _Dest->GetPosition().y )
			return true;

		return false;
	}
};

