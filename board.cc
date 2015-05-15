#include "board.h"
#include <iostream>

Board *Board::instance = 0 ;

Board *Board::getInstance()
{
	if (!instance)
	{
		instance = new Board ;
	}
	return instance ;
}

Board::Board()
{
	theBoard = new (Row* [width]);
	std::cout << theBoard << std::endl;
	for (int i = 0; i < width; i++)
	{
		Row *r = new Row(i) ;
		theBoard[i] = r ;
		std::cout << theBoard[i] << std::endl ;
		/*for (int j = 0; j < height; j++)
		{
			Cell *c = new Cell(i,j) ;
			theBoard[i]->columns[j] = c ;
			std::cout << theBoard[i]->columns[j]->icon << std::endl;
		}*/
	}
}

/*Board::~Board()
{
	for (int i = 0; i < 7; i++)
	{
		delete theBoard[i] ;
	}
	delete theBoard[] ;
} */

void Board::clearBoard()
{
	/*for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			theBoard[i][j]->deletePiece() ;
		}
	}*/
}

void Board::printBoard()
{	
	std::cout << "+-------+" << std::endl ;
	//std::cout << this->theBoard << std::endl;
	//theBoard[0]->PrintRow() ;
	for (int m = 0; m < 7; m++)
	{
		std::cout << "|" ;
		for (int n = 0; n < 6; n++)
		{ 
			std::cout << theBoard[m]->columns[n]->icon ;
			//std::cout << "This is i,j: " << m << n << std::endl ;
			//if (theBoard[m][n]->piece) {std::cout << "X" ;}
			std::cout << " " ;
		}
		std::cout << "|" << std::endl ;
	}
	std::cout << "+-------+" << std::endl ;
}

int Board::dropPiece(int col)
{
	/*int newCol = col ;
	int columnsFull = 0 ;
	for (int x = 0; x < 6; x++)
	{
		if (theBoard[newCol][x]->isFull())
		{
			if (columnsFull == 7 && x == 0)
			{
				std::cout << "The game has ended!" << std::endl ;
				return 1 ;
			}
			else if(x == 0)
			{
				std::cout << "You cannot move there it is full. Enter a new column." << std::endl ;
				std::cin >> newCol ;
				columnsFull++ ;
			}
			else
			{
				theBoard[newCol][x-1]->addPiece() ;
				return 0 ;
			}
		}
	}*/
	return 0;
}
	  
