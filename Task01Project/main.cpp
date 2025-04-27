#include"logic.h"
#include<iostream>
#include <string>
using namespace std;

int main() {
	int size;

	do
	{
		cout << "input srze of array: ";
		cin >> size;
	} while (size<=0);

	double* array = new double[size];

	cout << "Input elements of array: ";

	for (int i = 0; i < size; i++)
	{
		//cin >> array [i];
		cin >> *(array + i);
	}

	int count = count_zero_elements(array, size);

	string s = (count == -1?"Error":"Count of zero elements is: " + to_string(count));

	cout << s << endl;

	delete[] array;

	return 0;
}