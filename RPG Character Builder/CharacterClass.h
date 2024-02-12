#pragma once
#include "Utility.h"
#include "RaceClass.h"
#include "ClassTypeClass.h"
#include <unordered_map>





class Character
{
public:

	Character() = default;

	
	void setDetails(const std::vector<std::string>& deets);
	void setRace(Race* race);
	void setClass(CharClass* cla);
	void setAbilityScores();
	//void addToBag(Item itm);
	//void setBio();

	std::string getDeets() const;
	std::string getAttributes() const;
	std::string getInventory() const;

private:
	//character data
	std::string name{};
	std::string age{};
	std::string gender{};
	std::string height{};
	std::string alignment{};

	Attribs attributes;

	RaceTitle rt = RaceTitle::NONE;
	ClassTitle ct = ClassTitle::NONE;
	//int ac{};
	//std::string bio{};
	//std::vector<Item> inventory;
	std::unordered_map<Item, int> inventory;

};




