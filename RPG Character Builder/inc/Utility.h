#pragma once
#include <random>
#include <string>
#include <vector>

enum class RaceTitle
{
	NONE,
	HUMAN,
	ELF,
	DWARF
};

enum class ClassTitle {
	NONE,
	FIGHTER,
	WIZARD,
	THEIF
};





struct Item {
	std::string name;
	std::string desc;

	Item(std::string n, std::string d) :
		name{ n },
		desc{ d }{}


	bool operator==(const Item& other) const {
		return (name == other.name && desc == other.desc);
	}
};



//custom hash function template specialization
namespace std {

	template<>
	struct std::hash<Item> {

		size_t operator()(const Item& key) const {
			return std::hash<std::string>()(key.name);
		}
	};

}




struct Attribs {

	Attribs() {};
	Attribs(int s, int d, int co, int i, int w, int ch)
		:str{ s }, dex{ d }, con{ co }, intel{ i }, wis{ w }, cha{ch}
	{};
	
	int str{};
	int dex{};
	int con{};
	int cha{};
	int intel{};
	int wis{};


	Attribs operator+(const Attribs& b) {

		Attribs a;
		a.str = this->str + b.str;
		a.dex = this->dex + b.dex;
		a.con = this->con + b.con;
		a.cha = this->cha + b.cha;
		a.intel = this->intel + b.intel;
		a.wis = this->wis + b.wis;

		return a;
	}
};


std::string raceConvert(const RaceTitle& rtEnum);
std::string classConvert(const ClassTitle& ctEnum);


enum Dice
{
	D4 = 4,
	D6 = 6,
	D8 = 8,
	D10 = 10,
	D12 = 12,
	D20 = 20
};

int diceRoller(const Dice& d);
Attribs randomAttribsRoller();
