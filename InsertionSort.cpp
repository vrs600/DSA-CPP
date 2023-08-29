/*
Insertion Sort
Vinayak Ramesh Sutar
*/

#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << " " << array[i];
	}
}

void insertionSort(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		// let's assume that the first element of the array is
		//  already sorted

		for (int j = 1; j  > 0; j++)
		{

		}
	}
}

int main()
{
	int array[] = {52, 41, 32, 65, 95};
	int size = sizeof(array) / sizeof(array[0]);

	insertionSort(array, size);

	printArray(array, size);

	return 0;
}
