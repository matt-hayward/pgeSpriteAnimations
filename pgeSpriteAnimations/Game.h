#pragma once

#include "olcPixelGameEngine.h"
#include "olcPGEX_Graphics2D.h"
#include "Player.h"

class Game : public olc::PixelGameEngine
{
public:
	Game();
	
public:
	bool OnUserCreate() override;
	bool OnUserUpdate(float fElapsedTime) override;

protected:
	Player player;
};

