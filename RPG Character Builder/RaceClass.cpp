#include "RaceClass.h"


Attribs Human::updateAttribs() {
	
	return Attribs{ 1,1,1,1,1,1 };
}

RaceTitle Human::setTitle() {
	return RaceTitle::HUMAN;
}




Attribs Elf::updateAttribs() {
	return Attribs{ 0,2,0,2,2,0 };
}

RaceTitle Elf::setTitle() {
	return RaceTitle::ELF;
}




Attribs Dwarf::updateAttribs() {
	return Attribs{ 3,0,3,0,0,0 };
}

RaceTitle Dwarf::setTitle() {
	return RaceTitle::DWARF;
}

