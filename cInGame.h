#pragma once
#include "cScene.h"
class cInGame :
	public cScene
{
public:
	// cScene��(��) ���� ��ӵ�
	virtual void Init() override;
	virtual void Update() override;
	virtual void Render() override;
	virtual void Release() override;
};
