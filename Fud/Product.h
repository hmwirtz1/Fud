//	UI_ indicates a user inputted value.
//  PC_ indicates a value calculated by the program
//	
//	
//	
//	
//	
//	


#pragma once
#include <cstdint>
#include <string>
class Product
{
public:
	std::string	    UI_productName;
	//float			UI_salesTarget		= 0.0f;
	float		    UI_salesPerCambro	= 0.0f;
	uint32_t		UI_cambrosPerBox	= 0;
	uint32_t		UI_productInHand	= 0;
	float			UI_productUsed		= 0.0f;
	


	float   PC_salesPerBox			= 0.0f;
	uint32_t PC_amountToOrder		= 0;
	



};

