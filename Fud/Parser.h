//	
//	Parse 
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

