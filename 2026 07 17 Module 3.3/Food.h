#pragma once
#include <iostream>
using namespace std;
class Food
{
private:
	std::string name;
	int calories;
	std::string type;

public:
	Food();
	Food(string name, int calories, string type);
	Food(string name);
	string getName();
	int getCalories();
	string getType();
	void setName(string name);
	void setCalories(int calories);
	void setType(string type);
	Food operator+(Food food);
	operator string();

	string eat();

};

