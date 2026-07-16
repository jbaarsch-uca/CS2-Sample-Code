#pragma once
#include <iostream>
class Integer
{
private:
	int num;
	void setNum(int number);
public:
	Integer();
	Integer(int i);
	Integer(const Integer& i);
	Integer operator=(Integer& right);
	Integer operator+(Integer& otherInt);
	Integer operator-(Integer& otherInt);
	Integer operator*(Integer& otherInt);
	Integer operator/(Integer& otherInt);

	friend std::ostream& operator<<(std::ostream& o, Integer thisInt);
};

