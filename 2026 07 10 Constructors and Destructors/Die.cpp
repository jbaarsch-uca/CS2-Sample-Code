#include "Die.h"

bool Die::seeded = false;

Die::Die(): numSides(6) {
	roll();
}
Die::Die(int nS): numSides(nS) {
	roll();
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
	if (!seeded) {
		srand(time(0));
		seeded = true;
	}
	faceValue = rand() % (numSides - 1 + 1) + 1;
}
