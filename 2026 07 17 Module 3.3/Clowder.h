#pragma once
#include "Cat.h"
#include <iostream>
class Clowder
{
private:
	Cat* cats;
	int size;
public:
	Clowder();
	Clowder(Cat*, int);
	Clowder(const Clowder& clowder);
	~Clowder();
	Clowder operator=(Clowder& clowder);
	Clowder operator+(Clowder otherClowder);
	Clowder operator+(Cat otherCat);


};

