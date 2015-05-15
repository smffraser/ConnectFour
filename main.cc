#include "game.h"
#include "board.h"
#include "cell.h"

#include <iostream>

using namespace std ;

int main()
{
	cout << "Welcome to Connect Four" << endl;
	Game *currGame = Game::getInstance() ;
	cout << "We made the game" << endl ;
	currGame->currBoard->printBoard() ;
	while(currGame->takeTurn() != 1)
	{
		currGame->printScore() ;
	}
	cout << "Thanks for playing!" << endl ;
//	delete currGame->currBoard ;
//	delete currGame ;
}
