#include "Integer.h"

void Integer::setNum(int number) {
	num = number;
}

Integer::Integer() : Integer(0) {
}
Integer::Integer(int i) {
	num = i;
}
Integer::Integer(const Integer& i) {
	num = i.num;
}

Integer Integer::operator=(Integer& right) {
	num = right.num;
	return *this;
}

Integer Integer::operator+(Integer& otherInt) {
	Integer number(num + otherInt.num);
	return number;
}
Integer Integer::operator-(Integer& otherInt) {
	Integer number(num - otherInt.num);
	return number;
}
Integer Integer::operator*(Integer& otherInt) {
	Integer number(num * otherInt.num);
	return number;
}
Integer Integer::operator/(Integer& otherInt) {
	Integer number(num / otherInt.num);
	return number;
}

std::ostream& operator<<(std::ostream& o, Integer thisInt) {
	o << thisInt.num;
	return o;
}
