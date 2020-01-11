#include "Animator.h"
#include "Game.h"

Animator::Animator(Game* game)
{
	this->game = game;
}

olc::Sprite* Animator::GetCurrentFrame(float fElapsedTime)
{
	frameTimer += fElapsedTime;

	if (frameTimer >= frameDuration) {
		currentFrame++;
		frameTimer = 0.0f;

		if (currentFrame >= frames[state].size()) {
			currentFrame = 0;
		}
	}

	return frames[state][currentFrame];
}

void Animator::SetState(std::string newState)
{
	if (newState != state) {
		state = newState;
		currentFrame = 0;
	}
}

void Animator::DrawSelf(float fElapsedTime)
{
	olc::GFX2D::Transform2D t;

	if (flipped) {
		t.Translate(-((spriteWidth / 2) * spriteScale), 0);
		t.Scale(-spriteScale, spriteScale);
	}
	else {
		t.Scale(spriteScale, spriteScale);
	}

	t.Translate(position.x, position.y);

	olc::GFX2D::DrawSprite(GetCurrentFrame(fElapsedTime), t);
}