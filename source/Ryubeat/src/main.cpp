#include "DxLib.h"
#include "..\include\RyuBeat.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow){

	// Game pointer
	RyuBeat *game = NULL;
	game = new RyuBeat;

	ChangeWindowMode(true);
	SetGraphMode(gameNS::WINDOW_W, gameNS::WINDOW_H, 32);

	if (DxLib_Init() == -1 || SetDrawScreen(DX_SCREEN_BACK) != 0)
		return false;

	try{
		game->initialize();

		while (!ProcessMessage())
		{	// run the game loop
			game->run();
		}

		DxLib_End();
	}
	catch (...)
	{
		DxLib_End();
	}

	
	return 0;
}