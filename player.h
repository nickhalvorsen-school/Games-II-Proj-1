//=======================================================================================
// player.h by Nick Halvorsen (C) 2015 All Rights Reserved.
//=======================================================================================

#ifndef Player_H
#define Player_H

#include "d3dUtil.h"
#include "GameObject.h"

class Player : public GameObject
{
public:
	void draw();
	void increaseScale(float);
	void decreaseScale(float);
	void update(float dt);
};


#endif // Player_H