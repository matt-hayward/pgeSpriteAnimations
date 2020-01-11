#include "Player.h"

Player::Player(Game *game) : Animator(game)
{
	spriteWidth = 50;
	spriteHeight = 37;
	spriteScale = 2;

	frames["idle"].push_back(new olc::Sprite("gfx//adventurer-idle-00.png"));
	frames["idle"].push_back(new olc::Sprite("gfx//adventurer-idle-01.png"));
	frames["idle"].push_back(new olc::Sprite("gfx//adventurer-idle-02.png"));
	frames["idle"].push_back(new olc::Sprite("gfx//adventurer-idle-03.png"));

	frames["running"].push_back(new olc::Sprite("gfx//adventurer-run-00.png"));
	frames["running"].push_back(new olc::Sprite("gfx//adventurer-run-01.png"));
	frames["running"].push_back(new olc::Sprite("gfx//adventurer-run-02.png"));
	frames["running"].push_back(new olc::Sprite("gfx//adventurer-run-03.png"));
	frames["running"].push_back(new olc::Sprite("gfx//adventurer-run-04.png"));
	frames["running"].push_back(new olc::Sprite("gfx//adventurer-run-05.png"));
}