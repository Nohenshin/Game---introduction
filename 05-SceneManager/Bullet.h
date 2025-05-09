#pragma once
#include "GameObject.h"

#define BULLET_SPEED_X 0.02f
#define BULLET_SPEED_Y 0.02f#pragma once

class CBullet :public CGameObject
{
public:
	CBullet(float x, float y, int type) : CGameObject(x, y)
	{
		_type = type;
		vx = 0;
		vy = 0;
	}

	void SetDirection(float d1, float d2)
	{
		vx = d1 * BULLET_SPEED_X;
		vy = d2 * BULLET_SPEED_Y;
	}
};

