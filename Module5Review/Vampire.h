#pragma once
#include <iostream>

struct Human {
	int bloodUnits = 50;
	bool isBlessed = false;
};

struct Werewolf {
	int furThickness;
	int moonPower;
};

struct WoodenDummy {
	std::string woodType;
};


class Vampire
{
private:
	int hp;
	int bloodReservoir;
public:
	template <class T> void siphonBlood(T& prey);
//	template <class FormType> FormType shapeshift();
//	template <class ItemType> void corruptArtifact(ItemType& item);
};

template <class T> void Vampire::siphonBlood(T& prey) {
	if (dynamic_cast<Human>(prey)) {
		if (!prey.isBlessed) {
			bloodReservoir += prey.bloodUnits;
			prey.bloodUnits = 0;
		}
		else
			std::cout << "This being of light and goodness cannot be consumed." << std::endl;
	}





}
//template <class FormType> FormType shapeshift() {

//}
//template <class ItemType> void corruptArtifact(ItemType& item) {

//}

