#include "logic.h"

int get_extreme_index(double* array, int size, int max, int min) {
	int index = 0;

	for (int i = 0; i < size; i++)
	{
		if (max > array[i] ) {
			array[i] = max;
		}
		if (min < array[i]) {
			array[i] = min;
		}
	}

}