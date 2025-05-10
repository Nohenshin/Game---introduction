#include "PiranhaPlant.h"

void CPlant::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{
		left = x - PLANT_GREEN_BBOX_WIDTH / 2;
		top = y - PLANT_GREEN_BBOX_HEIGHT / 2;
		right = left + PLANT_GREEN_BBOX_WIDTH;
		bottom = top + PLANT_GREEN_BBOX_HEIGHT;
}

void CPlant::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	vy += ay * dt;
	y += vy * dt;
	CGameObject::Update(dt, coObjects);
}

void CPlant::SetState(int State)
{
	CGameObject::SetState(state);
	switch (state)
	{
	case PLANT_STATE_RISE:
		ay = 0;
		break;
	case PLANT_STATE_DOWN:
		ay = 0;
		break;
	case PLANT_STATE_ATTACK:
		ay = 0;
		break;
	}
}


void CPlant::Render()
{
	int aniId = GetAniId();

	CAnimations::GetInstance()->Get(7000)->Render(x, y);
	RenderBoundingBox();
}