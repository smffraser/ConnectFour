#ifndef __BOARD_H_
#define __BOARD_H_

#include "cell.h"
#include "row.h"
#include <fstream>

class Board
{

private:
	static const int width = 7 ;
	static const int height = 6;

public:
	// Fields
	static Board *instance ;
	Row** theBoard ;
	
	//Methods
	Board() ;
	//~Board() ;
	static Board *getInstance() ;
	void clearBoard() ;
	void printBoard() ;
	int dropPiece(int col) ;
};

#endif
	
