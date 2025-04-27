#include "logic.h"
#include <iostream>
using namespace std;

int main() {

	int size;

	cout << "Imput size of array: ";
	cin >> size;
	

	double* array = new double[size];


	cout << "Imput elements of array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
 

	cout << "Extreme elements is: " 

	delete[] array;

	return 0;
}