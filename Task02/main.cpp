#include "logic.h"
#include <iostream>
using namespace std;

int main() {

	int size;
	do {
		cout << "Imput size of array: ";
		cin >> size;
	} while (size <= 0);

	int* array = new int[size];

	cout << "Imput elements of array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}

	int sum = sum_elements(array, size);

	cout <<"Sum of elements: = " << sum << endl;

	delete[] array;

	return 0;
}