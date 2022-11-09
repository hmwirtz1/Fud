#include "Parser.h"
#include "Product.h"




Parser parser;


void Parser::readFile()
{
	//HRESULT hr;

	parser.read.open(parser.filePath);
	if (parser.read.fail())
	{
		//hr == E_FAIL;
		std::cout << "Invalid file name, exiting the program \n";
		
	}
	
	{
		while (parser.read)
		{
			parser.read >> parser.product.UI_productName;
			std::cout << parser.product.UI_productName << "\n";

			parser.read >> parser.product.UI_cambrosPerBox;
			std::cout << parser.product.UI_cambrosPerBox << "\n";

			parser.read >> parser.product.UI_productInHand;
			std::cout << parser.product.UI_productInHand << "\n";


			parser.read >> parser.product.UI_salesPerCambro;
			std::cout << parser.product.UI_salesPerCambro << "\n";

			//Add file close
			
			
			
			parser.currentProduct.push_back(product);
			
			ptr = NULL;
		}
	}
}

void Parser::writeFile()
{
	parser.write.open(filePath);


}

void Parser::getFilePath()
{

	std::cout << "Enter file path:" << std::endl;
	std::cin >> parser.filePath;

}

void Parser::checkVector()
{
	std::cout << parser.currentProduct[0].UI_productName << std::endl;
	std::cout << parser.currentProduct[1].UI_productName << std::endl;


}
