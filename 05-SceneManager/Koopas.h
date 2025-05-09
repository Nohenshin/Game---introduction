#pragma once
#include "GameObject.h"

#define KOOPAS_GRAVITY 0.002f
#define KOOPAS_WALKING_SPEED 0.05f
#define KOOPAS_ATTACKING_SPEED 0.2f

class CKoopas :public CGameObject
{
protected:
	float ax;
	float ay;

public:
	CKoopas(float x, float y) :CGameObject(x, y)
	{
	}
};
