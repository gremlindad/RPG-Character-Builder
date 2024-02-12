#include "CharacterClass.h"
#include <iostream>




int main() {
	Character c;

	std::vector<std::string> deets = { "bimmy","32","male","6 foot 2","lawful good" };
	
	std::unique_ptr<Human> h(new Human());
	std::unique_ptr<Fighter> f(new Fighter());

	c.setDetails(deets);
	c.setRace(h.get());
	c.setClass(f.get());


	std::cout << c.getDeets()<<c.getAttributes()<<c.getInventory();


	

}