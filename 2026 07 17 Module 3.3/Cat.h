#pragma once
#include <iostream>
#include "Food.h"
#include "Clowder.h"
using namespace std;


class Cat


{
private:
	std::string name;
	int age;
	std::string coloration;
	bool isHeterochromatic;
	Food* favoriteFood;

public:
	Cat();
	Cat(string name, int age, string coloration, 
		bool isHeterochromatic, Food* favoriteFood);
	Cat(string name);
	Cat(const Cat& otherCat);
	~Cat();
	Cat& operator=(const Cat& otherCat);
	Food* getFood();
	void setFood(Food* favoriteFood);
	bool operator<(Cat otherCat);
	bool operator>(Cat otherCat);
	bool operator==(Cat otherCat);
	Clowder operator+(Cat otherCat);
	operator string();
	friend ostream& operator<<(ostream& strm, const Cat& cat);
};

