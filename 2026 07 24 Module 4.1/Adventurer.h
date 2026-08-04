#pragma once
#include <iostream>
#include "Companion.h"
class Adventurer
{ private:
	std::string name;
	Companion* companion;

public:
	Adventurer();
	Adventurer(std::string name, Companion* companion);
	std::string getName();
	Companion* getCompanion();
	void setName(std::string name);
	void setCompanion(Companion* companion);
	void explore();
};

