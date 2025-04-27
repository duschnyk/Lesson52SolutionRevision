#include "logic.h"

//Виктор, я не понял, почему при векторе (1,2), программа должна выдавать 0,
//хотя локальным максимумом поидее должна являться двойка

int find_last_local_maximum_index(int* array, int size) {
	int index = 0;

	for (int i = size - 1; i >= 0; i--)
	{
		if (*(array + i) == *(array + size - 1)&& *(array + i)> *(array + i - 1))
		{
			index = i;
			return index;
		}

		if (*(array + i) > *(array + i - 1) && *(array + i) > *(array + i + 1)) {
			index = i;
			return index;
		}
	}

	return 0;
}