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

	int* array = new int[size];

	cout << "Input elements of array: ";

	for (int i = 0; i < size; i++)
	{
		//cin >> array [i];
		cin >> *(array + i);
	}

	cout << "Sum between first and last zeroes = "
		<< get_sum_between_zeroes(array, size) << endl;

	return 0;
}