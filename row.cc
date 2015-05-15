#include "row.h"
#include <iostream>

Row::Row(int index){
	columns = new (Cell*[height]);
	for (int j = 0; j < height; j++)
	{
		Cell *c = new Cell(index,j) ;
		columns[j] = c ;
		std::cout << columns[j]->icon << std::endl;
	}
}

void Row::PrintRow(){
	std::cout << "printing row" << std::endl;
	for (int j=0; j < this->height; j++){
		std::cout << this->columns[j]->icon ;
	}
}