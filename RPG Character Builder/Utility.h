#pragma once
#include <random>
#include <string>
#include <vector>

enum RaceTitle
{
	NONE,
	HUMAN,
	ELF,
	DWARF
};

enum ClassTitle {
	NONE,
	FIGHTER,
	WIZARD,
	THEIF
};



enum Dice
{
	D4 = 4,
	D6 = 6,
	D8 = 8,
	D10 = 10,
	D12 = 12,
	D20 = 20
};

struct Item {
	std::string name;
	std::string desc;

	Item(std::string n, std::string d) :
		name{ n },
		desc{ d }{}
};

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


int diceRoller(const Dice& d);
std::string raceConvert(RaceTitle rtEnum);
