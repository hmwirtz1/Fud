//	
//	Parse a text file, and place all data into a new product in a product vector.
//  Currently the file has the format of:
//										String   : Name of product
//										UINT32_t : Amount of cambros per box of product. 
//										UINT32_t : Amount of product in boxes.
//										Float    : Amount of sales of product per cambro
//	
//	
//	
//	
//		
//	

#pragma once
#include <fstream>
#include <iostream>
#include "Product.h"
#include <string>



class Parser
{
public:
	std::fstream read;
	std::fstream write;

	
	void readFile();
	void writeFile();
	void getFilePath();
	void checkVector();
};

