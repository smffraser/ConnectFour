#ifndef __GAME_H_
#define __GAME_H_

#include "board.h"
#include <string>

class Game
{
public:
	// Fields
	static Game *instance ;
	Board *currBoard ;
	int turn ;
	int playerOneScore ;
	int playerTwoScore ;

	// Methods
	Game() ;
	static Game *getInstance() ;
	int takeTurn() ;
	void printScore() ;
	void endGame() ;
};

#endif
	

