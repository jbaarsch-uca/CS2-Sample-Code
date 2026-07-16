#include "MathHelper.h"


const double MathHelper::PI = 3.1415;
const double MathHelper::e = 2.71828;
double MathHelper::getMean(int* arr, int size) {
	double sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];

	return sum / size;
}
int MathHelper::getMin(int* arr, int size) {
	int min = arr[0];
	for (int i = 1; i < size; i++)
		if (min > arr[i])
			min = arr[i];
	return min;
}
int MathHelper::getMax(int* arr, int size) {
	int max = arr[0];
	for (int i = 1; i < size; i++)
		if (max < arr[i])
			max = arr[i];
	return max;
}