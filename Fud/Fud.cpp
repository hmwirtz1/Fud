// Fud.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Parser.h"
#include "Product.h"



int main()
{
    std::cout << "Hello Fud\n";
    Parser parser;
    parser.getFilePath();
    parser.readFile();
   // parser.doMaths();
    //parser.checkVector();
}
