#ifndef __CELL_H_
#define __CELL_H_

class Cell {
public:
	// Fields
	int x ;
	int y ;
	bool piece ;
	char icon ;

public:
	//Methods
	Cell(int x, int y) ;
	bool isFull() ;
	void addPiece() ;
	void deletePiece() ;
	int getColumn() ;
	int getRow() ;	
};

#endif
