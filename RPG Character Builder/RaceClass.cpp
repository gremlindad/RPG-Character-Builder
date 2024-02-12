#include "RaceClass.h"


Attribs Human::raceTraits() {
	
	Attribs attrib;

	attrib.str = 1;
	attrib.dex = 1;
	attrib.con = 1;
	attrib.intel = 1;
	attrib.wis = 1;
	attrib.cha = 1;

	attrib.rt = HUMAN;


	return attrib;
}

Attribs Elf::raceTraits() {

	Attribs attrib;

	attrib.str = 0;
	attrib.dex = 2;
	attrib.con = 0;
	attrib.intel = 2;
	attrib.wis = 2;
	attrib.cha = 0;

	attrib.rt = ELF;

	return attrib;
}

Attribs Dwarf::raceTraits() {

	Attribs attrib;

	attrib.str = 3;
	attrib.dex = 0;
	attrib.con = 3;
	attrib.intel = 0;
	attrib.wis = 0;
	attrib.cha = 0;

	attrib.rt = DWARF;

	return attrib;
}



