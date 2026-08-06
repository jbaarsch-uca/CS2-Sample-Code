#pragma once
class FloatingPointNumberException
{
private:
	double num;
public:
	FloatingPointNumberException() {
		num = 0;
	}
	FloatingPointNumberException(double num) {
		this->num = num;
	}

	double getNumber() {
		return num;
	}

};

