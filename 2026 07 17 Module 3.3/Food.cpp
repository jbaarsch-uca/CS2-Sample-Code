#include "Food.h"


Food::Food() : Food("edible substance") {

}
Food::Food(string name, int calories, string type) {
	this->name = name;
	this->calories = calories;
	this->type = type;
}
Food::Food(string name) : Food(name, 100, "vegetable") {

}
string Food::getName() {
	return name;
}
int Food::getCalories() {
	return calories;
}
string Food::getType() {
	return type;
}
void Food::setName(string name) {
	this->name = name;
}
void Food::setCalories(int calories) {
	this->calories = calories;
}
void Food::setType(string type) {
	this->type = type;
}
Food Food::operator+(Food food) {
	string newName = this->name + " and " + food.name;
	int newCalories = this->calories + food.calories;
	string newType = (this->type != food.type)? 
		"Mixed" : food.type;
	return Food(newName, newCalories, newType);
}

string Food::eat() {
	return "yum";
}

Food::operator string() {
	return name;
}
