#include "ClassTypeClass.h"
#include "ItemList.h"


std::vector<Item> Fighter::updateInventory() {

	std::vector<Item> items = {
	sword,
	shield,
	apple,
	apple,
	bedroll
	};
	return items;
}

Attribs Fighter::updateAttribs() {
	return Attribs{3, 2, 3, 0, 0, 1};
}

ClassTitle Fighter::setTitle() {
	return ClassTitle::FIGHTER;
}


std::vector<Item> Wizard::updateInventory() {

	std::vector<Item> items = {
	staff,
	bedroll,
	grimoire,
	apple
	};
	return items;
}


Attribs Wizard::updateAttribs() {
	return Attribs{ 0, 0, 0, 5, 4, 0 };
}

ClassTitle Wizard::setTitle() {
	return ClassTitle::WIZARD;
}




std::vector<Item> Theif::updateInventory() {

	std::vector<Item> items = {
	knife,
	apple,
	apple,
	rope,
	bedroll
	};
	return items;
}



Attribs Theif::updateAttribs() {
	return Attribs{ 0, 4, 1, 2, 0, 2 };
}

ClassTitle Theif::setTitle() {
	return ClassTitle::THEIF;
}