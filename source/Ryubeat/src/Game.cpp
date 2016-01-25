#include "..\include\game.h"

Game::Game()
{

}

Game::~Game()
{
	
}


void Game::initialize()
{

}

void Game::renderGame()
{
	ClearDrawScreen();
	// start rendering
	// graphics->beginScene()
	// render();           // call render() in derived object

	// Draw FPS
	// console->draw();    // console is drawn here so it appears on top of game

	// stop rendering
	// graphics->endScene();

	// DrawCircle(gameNS::WINDOW_W / 2, gameNS::WINDOW_H / 2, (gameNS::WINDOW_H + gameNS::WINDOW_W) / 8, -1);

	ScreenFlip();
}

bool Game::run()
{
	/*
	// calculate elapsed time of last frame, save in frameTime
	QueryPerformanceCounter(&timeEnd);
	frameTime = (float)(timeEnd.QuadPart - timeStart.QuadPart) / (float)timerFreq.QuadPart;

	// Power saving code, requires winmm.lib
	// if not enough time has elapsed for desired frame rate
	if (frameTime < MIN_FRAME_TIME)
	{
		sleepTime = (DWORD)((MIN_FRAME_TIME - frameTime) * 1000);
		timeBeginPeriod(1);         // Request 1mS resolution for windows timer
		Sleep(sleepTime);           // release cpu for sleepTime
		timeEndPeriod(1);           // End 1mS timer resolution
		return;
	}
	

	if (frameTime > 0.0)
		fps = (fps*0.99f) + (0.01f / frameTime);  // average fps
	if (frameTime > MAX_FRAME_TIME) // if frame rate is very slow
		frameTime = MAX_FRAME_TIME; // limit maximum frameTime
	timeStart = timeEnd;

	*/

	update();
	renderGame();                   // draw all game items

	// messageDialog->update();

	// if Esc key, exit game
	if (CheckHitKey(KEY_INPUT_ESCAPE) == 1)
		return false;

	return true;

}