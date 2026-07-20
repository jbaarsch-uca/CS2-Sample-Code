#include "Cat.h"
#include <string>

Cat::Cat() : Cat("Fluffy") {}

Cat::Cat(string name, int age, string coloration,
	bool isHeterochromatic, Food* favoriteFood) {
	this->name = name;
	this->age = age;
	this->coloration = coloration;
	this->isHeterochromatic = isHeterochromatic;
	this->favoriteFood = favoriteFood;
}
Cat::Cat(string name) : Cat(name, 0, "Calico", false, new Food("Fish")) {}

Cat::Cat(const Cat& otherCat) {
	name = otherCat.name;
	age = otherCat.age;
	coloration = otherCat.coloration;
	isHeterochromatic = otherCat.isHeterochromatic;
	favoriteFood = new Food();
	*favoriteFood = *(otherCat.favoriteFood);
	
}

Cat::~Cat() {
	delete [] favoriteFood;
	favoriteFood = nullptr;
}
Cat& Cat::operator=(const Cat& otherCat) {
	if (this != &otherCat) {
		name = otherCat.name;
		age = otherCat.age;
		coloration = otherCat.coloration;
		isHeterochromatic = otherCat.isHeterochromatic;
		delete[] favoriteFood;
		favoriteFood = new Food();
		*favoriteFood = *otherCat.favoriteFood;
	}
	return *this;
}
Food* Cat::getFood() {
	return favoriteFood;
}
void Cat::setFood(Food* favoriteFood) {
	this->favoriteFood = favoriteFood;
}
bool Cat::operator<(Cat otherCat) {
	return age > otherCat.age;
}
bool Cat::operator>(Cat otherCat) {
	return age < otherCat.age;
}
bool Cat::operator==(Cat otherCat) {
	return age == otherCat.age;
}

Cat::operator string() {
	return name + " the cat, who is " + to_string(age) + " years old";
}


ostream& operator<<( ostream& strm, const Cat& cat) {
	strm << "  /\\_/\\ \n" <<
		    "  (o.o)\n" <<
		    "  > ^ <\n" <<
		    " /    \\ \n" <<
		    "|      |\n" <<
		   "(___)___)\n" << endl;
	return strm;
}
