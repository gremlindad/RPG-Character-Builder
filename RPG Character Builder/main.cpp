#include "CharacterClass.h"
#include <iostream>




int main() {
	Character c;

	std::vector<std::string> deets = { "bimmy","32","male","6 foot 2","lawful good" };
	
	Human* h = new Human{};

	c.setDetails(deets);
	c.setRace(h);


	std::cout << c.getDeets()<<c.getAttributes();

	//for (int i = 0; i < 10;i++)std::cout << diceRoller(D4)<<'\n';

	delete h;

}