/*
Bubble Sort Algorithm
Vinayak Ramesh Sutar
1459
*/
#include <iostream>
using namespace std;

// print array
void printArray(int array[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    cout << "  " << array[i];
  }
  cout << "\n";
}

void bubbleSort(int array[], int size)
{
  int temp;
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < (size - i) - 1; j++)
    {
      if (array[j] < array[j + 1])
      {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

int main()
{
  int data[] = {54, 12, 36, 25, 48, 57, 41, 52, 54};

  // find array's length
  int size = sizeof(data) / sizeof(data[1]);

  bubbleSort(data, size);

  cout << "Sorted Array in Ascending Order:\n";
  printArray(data, size);
}
