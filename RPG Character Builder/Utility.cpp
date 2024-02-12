#include "Utility.h"

int diceRoller(const Dice& d) {

	std::random_device dev;
	std::mt19937 rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type> dist(1, d); // distribution in range [1, 6]

	return dist(rng);

}






std::string raceConvert(RaceTitle rtEnum) {

	switch (rtEnum)
	{
	case RaceTitle::NONE:
		return "No Assigned Class";
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