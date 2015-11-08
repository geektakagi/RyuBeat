#ifndef _RYUBEAT_H
#define _RYUBEAT_H
#define WIN32_LEAN_AND_MEAN

#include <string>
#include <sstream>
#include "game.h"

namespace ryubeatNS
{
	const char FONT[] = "Arial Bold";  // font
	const int FONT_BIG_SIZE = 256;     // font height
	const int FONT_SCORE_SIZE = 48;
}

class RyuBeat : public Game
{
private:
	bool    menuOn;
	bool    countDownOn;
	float   countDownTimer;

public:
	// Constructor
	RyuBeat();

	// Destructor
	virtual ~RyuBeat();

	void initialize();
	void update();

};

#endif // _RYUBEAT_H