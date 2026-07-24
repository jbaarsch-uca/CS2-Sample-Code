#include "LapDog.h"

LapDog::LapDog() : LapDog("Bambi", 10) {

}
LapDog::LapDog(std::string name, int age) :
	Dog(name, age) {}
std::string LapDog::doTrick() {
	return getName() + " yaps angrily and ineffectually at the mailman.";
}