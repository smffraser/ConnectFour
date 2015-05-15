#ifndef __ROW_H_
#define __ROW_H_

#include <fstream>
#include "cell.h"

class Row
{

private:
	static const int height = 6;

public:
	// Fields
	Cell** columns ;
	
	//Methods
	Row(int index) ;
	//~Row() ;
	void PrintRow();
};

#endif