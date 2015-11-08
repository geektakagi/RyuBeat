#include "DxLib.h"
#include "RyuBeat.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow){

	// Game pointer
	RyuBeat *game = NULL;
	game = new RyuBeat;

	ChangeWindowMode(true);
	

	try{
		game->initialize();
		int done = 0;
		while (!done)
		{	// run the game loop
			if (!game->run())	done = 1;
		}

		// game->deleteAll();
	}
	catch (...)
	{
		// game->deleteAll();
	}

	
	return 0;
}