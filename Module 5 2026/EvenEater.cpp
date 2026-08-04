#include "EvenEater.h"

std::string EvenEater::eat(int num) {
	if (num % 2 == 0)
		return "Yum!";
	else
		throw EvenEater::OddFoodException(num);
}
