#pragma once

#include "Animator.h"

class Player : public Animator
{
public:
	Player(Game* game);

protected:
	std::string state = "idle";

public:
	float speed = 120.0f;
};

