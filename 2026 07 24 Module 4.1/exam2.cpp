#include <iostream>
#include "Companion.h"
#include "Falcon.h"
#include "Wolf.h"
#include "Adventurer.h"
using namespace std;

int main() {
	Falcon redFeather("Red Feather");
	redFeather.performAction();

	Wolf fenrir("Fenrir", "Old Norse Pack");
	fenrir.performAction();

	Adventurer sinbad("Sinbad", new Falcon("Abbacus"));
	sinbad.explore();

	Adventurer peter("Peter", new Wolf("Big Bad", "Packless"));
	peter.explore();

}
