
#include "logic.h"

double get_max_ex_el(double* array, int size) {
	double max = 0.0;

	for (int i = 0; i < size; i++)
	{
		if (max > *(array + i)) {
			max = *(array + i);
		}
	}

	return max;
}

double get_min_ex_el(double* array, int size) {
	double min = 0.0;

	for (int i = 0; i < size; i++)
	{
		if (min < *(array + i)) {
			min = *(array + i);
		}
	}

	return min;
}

int count_of_extreme_elements(double* array, int size) {
	int count = 0;

	if (get_max_ex_el(array, size) == get_min_ex_el(array, size)) {
		return size;
	}

	for (int i = 0; i < size; i++)
	{
		if (*(array + i) == get_max_ex_el(array, size)
			|| *(array + i) == get_min_ex_el(array, size)) 
		{
			count++;
		}
	}

	return count;
}