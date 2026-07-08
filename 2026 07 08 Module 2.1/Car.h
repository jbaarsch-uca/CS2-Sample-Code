#pragma once
/*
pragma once is Microsoft's way of making sure that none of 
 the h files refer to each other in endless loops or redefine
 classes that already exist.  As far as I understand, it is 
 not 100% standardized, but is very common.

 The equivalent, more standard C++ method is:
 #ifndef CAR_H
 #define CAR_H
 ...
 #endif   <-- goes at the end of the file.

 This means:  if CAR_H is not defined (ifndef) continue, 
 1. define CAR_H
 2. and then you declare your class and stuff.
 3. end the if statement.
 This prevents the program from trying to define the 
 Car class twice.  If it tries, it sees that CAR_H is already
 defined and it skips the definition.
 */

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

