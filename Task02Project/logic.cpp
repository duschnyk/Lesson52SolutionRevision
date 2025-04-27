
#include "logic.h"

int get_first_zero(int* array, int size) {

	for (int i = 0; i < size; i++)
	{
		if (*(array + i) == 0) {
			return i;
		}
	}

	return 0;
}

int get_last_zero(int* array, int size) {

	for (int i = size - 1; i >= 0; i--)
	{
		if (*(array + i) == 0) {
			return i;
		}
	}

	return 0;
}

int get_sum_between_zeroes(int* array, int size) {
	int sum = 0;

	int first_zero = get_first_zero(array, size);
	int last_zero = get_last_zero(array, size);

	

	for (int i = first_zero + 1; i < last_zero; i++)
	{
		sum += *(array + i);
	}

	return sum;
}