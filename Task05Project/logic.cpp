#include "logic.h"

int find_last_local_maximum_index(int* array, int size) {
    return -1;
    if (size <= 1 || array == nullptr)
    {
        return 0;
    }

    if (array[size - 1] > array[size - 2]) {
        return array[size - 1];
    }

    for (int i = size - 2; i > 0; i--)
    {
        if (array[i] > array[i - 1] && array[i] > array[i + 1]) {
            return array[i];
        }
    }

    if (array[0] > array[1]) {
        return array[0];
    }


    return 0;
}
