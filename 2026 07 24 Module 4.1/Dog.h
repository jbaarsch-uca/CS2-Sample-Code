#pragma once

#include <iostream>
class Dog 
{
private:
	std::string name;
	int age;
public:
	Dog();
	Dog(std::string name, int age);
	virtual ~Dog() {
	
	}
	int getAge();
	std::string getName();
	void setAge(int age);
	void setName(std::string name);
	virtual std::string doTrick();

};

