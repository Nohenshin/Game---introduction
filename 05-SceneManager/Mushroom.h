#pragma once
#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"
#include "AssetIDs.h"
#define MUSHROOM_GRAVITY 0.002f
#define MUSHROOM_WALKING_SPEED 0.05f


class CMushroom : public CGameObject
{
protected:
	float ax;
	float ay;
public:
	CMushroom(float x, float y);
};

