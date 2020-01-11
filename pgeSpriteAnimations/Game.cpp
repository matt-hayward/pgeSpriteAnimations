#include "Game.h"

Game::Game() : player(this)
{
	sAppName = "pgeSpriteAnimations";
}

bool Game::OnUserCreate()
{
	player.position = { -20.0f, 20.0f };
	player.SetState("idle");

	return true;
}

bool Game::OnUserUpdate(float fElapsedTime)
{
	Clear(olc::BLACK);

	// handle some input
	if (GetKey(olc::RIGHT).bHeld) {
		player.position.x += player.velocity.x * player.speed * fElapsedTime;

		if (player.position.x > (ScreenWidth() - 80)) {
			player.position.x = (ScreenWidth() - 80);
		}
		player.SetState("running");
		player.flipped = false;
	}
	else if (GetKey(olc::LEFT).bHeld) {
		player.position.x -= player.velocity.x * player.speed * fElapsedTime;

		if (player.position.x < -20) {
			player.position.x = -20;
		}
		player.SetState("running");
		player.flipped = true;
	}
	else {
		player.SetState("idle");
	}

	SetPixelMode(olc::Pixel::ALPHA);
	player.DrawSelf(fElapsedTime);
	SetPixelMode(olc::Pixel::NORMAL);

	return true;
}