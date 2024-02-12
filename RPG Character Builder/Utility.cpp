#include "Utility.h"

std::string raceConvert(const RaceTitle& rtEnum) {

	switch (rtEnum)
	{
	case RaceTitle::NONE:
		return "No Assigned Race";
	case RaceTitle::HUMAN:
		return "Human";
	case RaceTitle::ELF:
		return "Elf";
	case RaceTitle::DWARF:
		return "Dwarf";
	default:
		return "Not Recognised";
	}
}

std::string classConvert(const ClassTitle& ctEnum) {

	switch (ctEnum)
	{
	case ClassTitle::NONE:
		return "No Assigned Class";
	case ClassTitle::FIGHTER:
		return "Fighter";
	case ClassTitle::WIZARD:
		return "Wizard";
	case ClassTitle::THEIF:
		return "Theif";
	default:
		return "Not Recognised";
	}
}



int diceRoller(const Dice& d) {

	std::random_device dev;
	std::mt19937 rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type> dist(1, d); // distribution in range [1, 6]

	return dist(rng);

}


Attribs randomAttribsRoller() {

	//distributes 96 points randomly

	int v[6];
	int totalPoints = 0;

	std::random_device dev;
	std::mt19937 rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type> dist(8,16);

	for (int i = 0; i < 6; i++) {
		v[i] = dist(rng);
		totalPoints += v[i];
	}

	int leftoverPool = 96 - totalPoints;
	int distrib = leftoverPool / 6;


	for (int i = 0; i < 6; i++) {
		v[i] += distrib;
	}

	std::uniform_int_distribution<std::mt19937::result_type> dist2(0, 5);
	for (int i = 0; i < leftoverPool % 6; i++) v[dist2(rng)] += 1;

	return Attribs(v[0], v[1], v[2], v[3], v[4], v[5]);
}



