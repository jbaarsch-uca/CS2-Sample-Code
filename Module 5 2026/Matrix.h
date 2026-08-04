#pragma once
#include <string>
//#include <vector>
using namespace std;
template <typename T>
class Matrix
{
private: 
	T* contents;
	int rows;
	int cols;

public:
	Matrix(int row, int col);
	T get(int row, int col);
	void set(int row, int col, T item);
	string toString();
};

template <typename T>
Matrix<T>::Matrix(int row, int col)  {
	rows = row;
	cols = col;
	contents = new T[row * col];
}

template <typename T>
T Matrix<T>::get(int row, int col) {
	return contents[row * col + col];
}

template <typename T>
void Matrix<T>::set(int row, int col, T item) {
	contents[row * cols + col] = item;
}

template <typename T>
string Matrix<T>::toString() {
	string result = "";
		for (int r = 0; r < rows; r++) {
			for (int c = 0; c < cols; c++) {
				result += contents[r * cols + c] + "\t";
			}
			result += "\n";
		}
	return result;
}

