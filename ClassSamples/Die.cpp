#include "Die.h"

bool Die::seeded = false;

int Die::generateRandomNumber() {
	//Really long and complex algorithm here.
	return 1;
}

Die::Die(): numSides(6) {
	roll();
}
Die::Die(int nS): numSides(nS) {
	roll();
}
Die::Die(int numSides, int fV): numSides(numSides) {
	faceValue = fV;
}

// Don't use this function! It's cheating.
void Die::setFaceValue(int fv) {
	faceValue = fv;
}
int Die::getNumSides() const {
	return numSides;
}

int Die::getFaceValue() const {
	return faceValue;
}

void Die::roll() {
	/*
	if (!seeded) {
		srand(time(0));
		seeded = true;
	}
	*/
	faceValue = generateRandomNumber() % (numSides - 1 + 1) + 1;
}
