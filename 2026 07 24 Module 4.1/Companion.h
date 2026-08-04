#pragma once
#include <iostream>

class Companion
{
private:
	std::string name;
public:
	Companion();
	Companion(std::string name);
	std::string getName();
	void setName(std::string name);
	virtual void performAction() = 0;
};

