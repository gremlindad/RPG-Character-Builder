#include "CharacterClass.h"



//SETTERS///////////

void Character::setDetails(const std::vector<std::string>& deets) 
{
	if (deets.size() != 5) return;

	name = deets[0];
	age = deets[1];
	height = deets[2];
	gender = deets[3];
	alignment = deets[4];
}

void Character::setRace(Race* r) {

	//polymorphically update character attributes
	attributes = attributes + r->updateAttribs();
	rt = r->setTitle();
}



void Character::setClass(CharClass* cc) {

	//update attributes
	attributes = attributes + cc->updateAttribs();

	
	//fill inventory
	for (auto& it : cc->updateInventory()) {
		if (inventory.find(it) == inventory.end())inventory.insert({it, 1});
		else { inventory[it]++; }
	}
	ct = cc->setTitle();
}


void Character::setAbilityScores() {
	attributes = attributes + randomAttribsRoller();
}








//// GETTERS


std::string Character::getDeets() const {
	std::string deetString = "";

	deetString += "Name:\t\t" + name;
	deetString += "\nAge:\t\t" + age;
	deetString += "\nGender:\t\t" + gender;
	deetString += "\nHeight:\t\t" + height;
	deetString += "\nAlignment:\t" + alignment;
	deetString += "\nRace:\t\t" + raceConvert(rt);
	deetString += "\nClass:\t\t" + classConvert(ct) + "\n\n";

	return deetString;
}



std::string Character::getAttributes() const {
	std::string attribString = "";

	attribString += "Strength: \t" + std::to_string(attributes.str);
	attribString += "\nDexterity: \t" + std::to_string(attributes.dex);
	attribString += "\nConstitution: \t" + std::to_string(attributes.con);
	attribString += "\nIntelligence: \t" + std::to_string(attributes.intel);
	attribString += "\nWisdom: \t" + std::to_string(attributes.wis);
	attribString += "\nCharisma: \t" + std::to_string(attributes.cha)+"\n\n";
	
	return attribString;
	
}

std::string Character::getInventory() const {
	std::string inventoryString = "";

	if (inventory.size() == 0)return"";

	for (auto& it : inventory) {
		inventoryString += it.first.name + ": " + it.first.desc + " \t* " + std::to_string(it.second) + "\n";
	}
	inventoryString += '\n';
	return inventoryString;
}



