#pragma once
#include "GameObject.h"

#define PLANT_RISING_DOWNING_SPEED 0.02f

#define PLANT_TYPE_GREEN 1


#define PLANT_STATE_RISE 111
#define PLANT_STATE_DOWN 222
#define PLANT_STATE_ATTACK 333

#define PLANT_GREEN_BBOX_WIDTH 15
#define PLANT_GREEN_BBOX_HEIGHT 23


class CPlant :public CGameObject
{
protected:
	float ay;
	int _type;

	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	virtual void Render();


	virtual int IsCollidable() { return 0; }
	virtual int IsBlocking() { return 0; }

	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
	virtual void OnNoCollision(DWORD dt) {}
	virtual void OnCollisionWith(LPCOLLISIONEVENT e) {}
public:
	CPlant(float x, float y) :CGameObject(x, y)
	{
		SetState(PLANT_STATE_RISE);
	}
	virtual void SetState(int state);
};

