#include "DXUT.h"
#include "cMain.h"
#include "cInGame.h"

void cMain::Init()
{
	Add();
	GAME->Init();
	SCENE->tex = RENDER->GetTexture("change");
	SCENE->AddScene("InGame", new cInGame());
	SCENE->ChangeScene("InGame");
}

void cMain::Update()
{
	SCENE->Update();
	COLL->Update();
	CAMERA->Update();
}

void cMain::Render()
{
	RENDER->Begin();
	CAMERA->SetTransform();
	SCENE->Render();
	RENDER->End();
}

void cMain::Release()
{
	cCameraManager::Del();
	cRenderManager::Del();
	cColliderManager::Del();
	cSceneManager::Del();
	cObjectManager::Del();
	cGameManager::Del();
}

void cMain::Reset()
{
	RENDER->Reset();
}

void cMain::Lost()
{
	RENDER->Lost();
}

void cMain::Add()
{
	RENDER->AddTexture("Virus", "Background/Virus", 3);
	RENDER->AddTexture("Back", "Background/Back", 3);
	RENDER->AddTexture("Line", "Background/Line");
	RENDER->AddTexture("Stroke", "Background/Stroke");

	RENDER->AddTexture("change", "change");
	RENDER->AddTexture("fog", "fog");

	RENDER->AddTexture("Player", "Player");
}
