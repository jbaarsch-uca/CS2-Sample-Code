#include "HuntingDog.h"


HuntingDog::HuntingDog() : HuntingDog("Pointer", 4) {

}
HuntingDog::HuntingDog(std::string name, int age) :
	Dog(name, age) {

}
std::string HuntingDog::doTrick() {
	return this->getName() + " runs after its quarry and brings it back without mangling.";
}