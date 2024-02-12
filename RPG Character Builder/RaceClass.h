#pragma once
#include"Utility.h"

class Race {

public:
	virtual Attribs raceTraits() = 0;
};


class Human : public Race {
public:
	Attribs raceTraits();
};

class Elf : public Race {
public:
	Attribs raceTraits();
};

class Dwarf : public Race {
public:
	Attribs raceTraits();
};

std::string raceConvert(RaceTitle);