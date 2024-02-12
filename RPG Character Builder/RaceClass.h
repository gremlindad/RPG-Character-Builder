#pragma once
#include"Utility.h"

class Race {

public:
	virtual Attribs updateAttribs() = 0;
	virtual RaceTitle setTitle() = 0;
};


class Human : public Race {
public:
	Attribs updateAttribs();
	RaceTitle setTitle();
};

class Elf : public Race {
public:
	Attribs updateAttribs();
	RaceTitle setTitle();

};

class Dwarf : public Race {
public:
	Attribs updateAttribs();
	RaceTitle setTitle();
};

std::string raceConvert(RaceTitle);