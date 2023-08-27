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
	// let's assume that the first element of the array is already sorted
	// then we will start from the send element

	for (int i = 1; i < size; i++)
	{
		// starting from the send element of index '1'
		for (int j = i; j > 0; j--)
		{
			if (array[j] < array[j - 1])
			{
				int temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
			}
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
