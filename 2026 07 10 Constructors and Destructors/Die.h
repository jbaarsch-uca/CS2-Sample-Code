#pragma once
#include <iostream>
class Die
{
private:
	static bool seeded;
	int faceValue;
	const int numSides;
public:
	Die();
	Die(int numSides);
	// Don't use this function! It's cheating.
	void setFaceValue(int fv);
	int getNumSides() const;
	int getFaceValue() const;
	void roll();

};

