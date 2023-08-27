/*
Selection Sort
Vinayak Ramesh Sutar
*/

#include<iostream>
using namespace std;

void printArray(int array[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << " " << array[i];	
	}
}

void insertionSort(int array[], int size)
{
	int smallestElement, smallestElementIndex;

	for(int i = 0; i < size; i++)
	{
		// let's assume that the i^th element is the 
		// smallest element of the array
		
		smallestElement = array[i];
		for(int j = i; j < size ; j++)
		{
			// find the smallest element
			if(smallestElement > array[j])
			{
				smallestElement = array[j];
				smallestElementIndex = j;
			}	

		}
		cout << "Iteration " << i << " Smallest Element : " << smallestElement; 	
		
		// swapping the smallest element with the i^th element
		int temp = array[i];
		array[i] = array[smallestElementIndex];
		array[smallestElementIndex] = temp;
		
		cout << endl;
	}
	
}

int main()
{
	int array[] = {52,14,26,32,54,47};
	int size= sizeof(array)/sizeof(array[0]);
	
	insertionSort(array,size);
	
	printArray(array,size);
	
	return 0;
}
