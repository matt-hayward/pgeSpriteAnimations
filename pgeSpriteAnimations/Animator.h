#pragma once

#include "olcPixelGameEngine.h"

class Game;

class Animator
{
public:
	Animator(Game* game);

public:
	void SetState(std::string newState);
	olc::Sprite* GetCurrentFrame(float fElapsedTime);
	void DrawSelf(float fElapsedTime);

protected:
	Game* game;
	float frameTimer = 0.0f;
	float frameDuration = 0.1f;
	float spriteScale;
	int currentFrame = 0;
	int spriteWidth, spriteHeight;
	std::map<std::string, std::vector<olc::Sprite*>> frames;

public:
	std::string state;
	bool flipped = false;
	olc::vf2d position;
	olc::vf2d velocity = { 1.0f, 1.0f };
};

