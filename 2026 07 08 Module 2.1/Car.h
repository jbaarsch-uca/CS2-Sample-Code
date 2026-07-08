#pragma once
#include <iostream>
using namespace std;

class Car
{
private: 
	string tires;
	string color;
	double gas;
	const double PRICE_OF_GAS = 3.45;
public:
	string getTires();
	string getColor();
	double getGas();
	void setTires(string tires);
	void setColor(string color);
	void setGas(double gas);

	string honkHorn(int times);
	double getValue();
};

