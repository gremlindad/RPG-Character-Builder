#pragma once
#include "Utility.h"

// doesnt need to know about the character
//just classes 

// have a base abstract class
// it assigns weapons
//it assigns items
//it adds ability scores

class CharClass {

	//it needs to return a vector of items
	virtual std::vector<Item> updateInventory() = 0;
	//needs to return class specific attribute enhancements
	virtual Attribs updateAttribs() = 0;
};

class Fighter : CharClass {

	std::vector<Item> updateInventory();
};