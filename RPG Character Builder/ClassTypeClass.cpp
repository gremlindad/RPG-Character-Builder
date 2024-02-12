#include "ClassTypeClass.h"
#include "ItemList.h"


std::vector<Item> Fighter::updateInventory() {

	std::vector<Item> items = {
	sword,
	shield,
	apple,
	apple
	};
	return items;
}

Attribs Fighter::updateAttribs() {
	return Attribs{3, 2, 3, 0, 0, 1};
}

ClassTitle Fighter::setTitle() {
	return ClassTitle::FIGHTER;
}