#include <iostream>
#include <string>
#include "logic.h"
using namespace std;

int main() {
	int size;

	cout << "input size of array: ";
	cin >> size;

	if (size <= 0) {
		return -1;
	}

	int* array = new int[size];

	cout << "Input elements of array: ";

	for (int i = 0; i < size; i++)
	{
		cin >> *(array + i);
	}

	changeling(array, size);

	string s = "";

	for (int i = 0; i < size; i++)
	{
		s += to_string(*(array + i)) + " ";
	}

	cout << "Vector elements after transformation: " << s << endl;

	return 0;
}