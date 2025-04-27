#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int size;

	cout << "input size of array: ";
	cin >> size;

	if (size <= 0) {
		return 0;
	}

	double* array = new double[size];

	cout << "Input elements of array: ";

	for (int i = 0; i < size; i++)
	{
		//cin >> array [i];
		cin >> *(array + i);
	}

	cout << "Count of extreme elements of array = "
		<< count_of_extreme_elements(array, size) << endl;

	return 0;
}