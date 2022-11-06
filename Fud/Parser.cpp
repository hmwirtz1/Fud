#include "Parser.h"
#include "Product.h"
#include<vector>


Parser parser;
std::string filePath;
std::vector<Product> currentproduct;
Product product;
Product* ptr = &product;


void Parser::readFile()
{
	
	parser.read.open(filePath);
	if (parser.read)
	{
		while (parser.read)
		{
			parser.read >> product.UI_productName;
			std::cout << product.UI_productName << "\n";

			parser.read >> product.UI_cambrosPerBox;
			std::cout << product.UI_cambrosPerBox << "\n";

			parser.read >> product.UI_productInHand;
			std::cout << product.UI_productInHand << "\n";


			parser.read >> product.UI_salesPerCambro;
			std::cout << product.UI_salesPerCambro << "\n";

			//Add file close
			

			currentproduct.push_back(product);
			
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
	std::cin >> filePath;

}

void Parser::checkVector()
{
	std::cout << currentproduct[0].UI_productName << std::endl;
	std::cout << currentproduct[1].UI_productName << std::endl;


}
