#ifndef _GAME_H
#define _GAME_H
#define WIN32_LEAN_AND_MEAN

#include "Dxlib.h"

namespace gameNS
{
	const char FONT[] = "Courier New";  // font
	const int POINT_SIZE = 14;          // point size
	const int WINDOW_H = 960;					// Window Height
	const int WINDOW_W = 1280;					// Window Width
}

class Game
{
protected:

public:
	// Constructor
	Game();
	// Destructor
	virtual ~Game();

	// Initialize the game
	virtual void initialize();

	// Call run repeatedly by the main message loop in WinMain
	virtual bool run();

	// Render game items.
	virtual void renderGame();

	virtual void update() = 0;
};

#endif // _GAME_H
