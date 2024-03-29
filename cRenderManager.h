#pragma once
#include "singleton.h"

class texture
{
public:
	LPDIRECT3DTEXTURE9 tex;
	D3DXIMAGE_INFO info;
	texture(LPDIRECT3DTEXTURE9 tex, D3DXIMAGE_INFO info) : tex(tex), info(info) {}
};

class cRenderManager :
	public singleton<cRenderManager>
{
public:
	LPD3DXSPRITE Sprite;
	LPD3DXFONT Font;

	map<string, texture*> texList;
	cRenderManager();
	~cRenderManager();

	void AddTexture(string key, string path, int count = 0);
	texture* GetTexture(string key);
	vector<texture*> VecTexture(string key, int count = 0);

	void Render(texture* tex, Vec2 pos, float rot = 0, float size = 1, Color color = Color(1, 1, 1, 1));
	void UIRender(texture* tex, Vec2 pos, float rot = 0, float size = 1, Color color = Color(1, 1, 1, 1));
	void Render(string str, Vec2 pos, float size = 1, Color color = Color(1, 1, 1, 1));
	void UIRender(string str, Vec2 pos, float size = 1, Color color = Color(1, 1, 1, 1));

	void Begin();
	void End();
	void Reset();
	void Lost();
};

#define RENDER cRenderManager::Get()