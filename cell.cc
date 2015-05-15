#include <iostream>
#include "cell.h"

Cell::Cell(int x, int y) : x(x), y(y)
{
	icon = 'o' ;
	piece = false ;
}

bool Cell::isFull()
{
	std::cout << "we got here" << std::endl ;
	return piece ;
}

void Cell::addPiece()
{
	piece = true ;
	icon = 'P' ;
}

void Cell::deletePiece()
{
	piece = false ;
	icon = ' ' ;
}
 
int Cell::getColumn()
{
	return x ;
}

int Cell::getRow()
{
	return y ;
}
