#pragma once
#include <iostream>
class Die
{
private:
	static bool seeded;
	int faceValue;
	const int numSides;
	int generateRandomNumber();
public:
	Die();
	Die(int numSides);
	Die(int numSides, int faceValue);
	// Don't use this function! It's cheating.
	void setFaceValue(int fv);
	int getNumSides() const;
	int getFaceValue() const;
	void roll();

};

