#include <iostream>
using namespace std;

int main()
{
  int size, temp;
  int array[] = {54, 74, 12, 32, 52, 14, 11, 23, 25, 65};

  size = sizeof(array) / sizeof(array[0]);

  // bubble sort
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size - i; j++)
    {
      if (array[j] > array[j + 1])
      {
        // swap the elements
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }

  // printing output

  for (int k = 0; k < size; k++)
  {
    cout << " " << array[k];
  }

  return 0;
}