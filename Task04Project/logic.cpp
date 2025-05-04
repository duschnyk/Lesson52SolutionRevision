
#include "logic.h"
void changeling(int* array, int size) {
	if (size <= 1 || array == nullptr)
	{
		return;
	}

	for (int i = 0; i < size - size / 2; i++)
	{
		int t = *(array + i);
		*(array + i) = *(array + (size - 1 - i));
		*(array + (size - 1 - i)) = t;
	}
}