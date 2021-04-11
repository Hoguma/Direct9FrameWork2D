#pragma once
#include "singleton.h"


class cGameManager :
	public singleton<cGameManager>
{
public:
	
};

#define GAME cGameManager::Get()