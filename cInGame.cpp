#include "DXUT.h"
#include "cInGame.h"

void cInGame::Init()
{
}

void cInGame::Update()
{
}

void cInGame::Render()
{
	RENDER->UIRender(RENDER->GetTexture("fog"), Vec2(800, 450));
}

void cInGame::Release()
{
}
