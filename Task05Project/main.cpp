#include <iostream>
#include <string>
#include "logic.h"
using namespace std;

int main() {
	int size;

	cout << "input size of array: ";
	cin >> size;
	int* array = new int[size];

	if (size <= 1 || array == nullptr) {
		return 0;
	}

	cout << "Input elements of array: ";

	for (int i = 0; i < size; i++)
	{
		cin >> *(array + i);
	}

	cout << "The Value of the last local maximum is "
		<< *(array + find_last_local_maximum_index(array, size)) << endl;

	return 0;
}