#include "Game.h"

int main()
{
	Game game;

	if (game.Construct(1024, 768, 1, 1, false, true)) {
		game.Start();
	}

	return 0;
}