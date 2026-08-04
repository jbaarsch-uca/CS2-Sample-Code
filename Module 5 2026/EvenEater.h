#pragma once
#include <iostream>
#include <string>
class EvenEater
{

public:
	class OddFoodException {
	private:
		int oddFood;
	public:
		OddFoodException(int oddFood) {
			this->oddFood = oddFood;
		}
		std::string getMessage() {
			return std::to_string(oddFood)
				+ " tastes odd.";
		}
	};

	std::string eat(int num);

};

