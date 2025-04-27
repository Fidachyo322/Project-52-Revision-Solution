#include "logic.h"
#include <iostream>
#include <string>
using namespace std;

int main() {

	int size;
	do {
	cout << "Imput size of array: ";
	cin >> size;
	} while (size <= 0);
	
	size = size <= 0 ? 5 : size;

	double* array = new double[size];


	cout << "Imput elements of array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}

	int count = cound_zero_elements(array, size);

	string s = (count == -1) ? "Error..." 
		: "Count of zero elements is " + to_string(count);
	

	cout << s << endl;

	delete[] array;

	return 0;
}