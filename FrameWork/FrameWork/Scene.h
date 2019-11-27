#pragma once

class Scene 
{
public:
	Scene();
	virtual ~Scene();
public:
	virtual void Initialize() = 0;
	virtual void Progress() = 0;
	virtual void Render() = 0;
	virtual void Release() = 0;
}