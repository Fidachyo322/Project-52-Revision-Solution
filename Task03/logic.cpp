#include "logic.h"

int get_extreme_index(double* array, int size, int max, int min) {

	for (int i = 0; i < size; i++)
	{
		if (array[i] > array[max]) {
			array[i] = max;
		}

		if (array[i] < array[min]) {
			array[i] = min;
		}
	}
