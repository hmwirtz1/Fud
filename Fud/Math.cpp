#include "Math.h"
#include "Product.h"
#include "Sales.h"
#include <iostream>
Product product;
Sales sales;


void Math::productUsed(Product* ptr)
{
	product = *ptr;
	product.UI_productUsed = sales.salesPerPeriod / product.UI_salesPerCambro;
	std::cout << "Amount of " << product.UI_productName << " used is: " << product.UI_productUsed << "\n";

}

void Math::amountToOrder()
{
	
	product.PC_amountToOrder = product.UI_productUsed - product.UI_productInHand;
	std::cout << "Amount of " << product.UI_productName << " to order is: " << product.PC_amountToOrder;

}
