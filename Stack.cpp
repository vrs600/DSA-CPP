/*
Stack

Vinayak Ramesh Sutar
*/

#include <iostream>
using namespace std;

int array[10];
int top = -1;
bool takeInput = true;
int optionIndex;

void push(int value)
{
	top++;
	array[top] = value;
	cout << "top => " << top;
}

void pop()
{
}

void printArray(int array[], int size)
{
	if (size == -1)
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		cout << "=== Printing Stack ===" << endl;
		{
			for (int i = 0; i <= top; ++i)
				cout << "  " << array[i];
		}
	}
}
int main()
{
	while (takeInput)
	{
		cout << "\n*** SELECT OPTION ***" << endl;
		cout << "1.push\n2.pop\n3.print\n4.terminate" << endl;
		cout << "Option: ";
		cin >> optionIndex;
		switch (optionIndex)
		{
		case 1:
		{
			int element;
			cout << "Enter element : ";
			cin >> element;
			push(element);
		}
		break;
		case 2:
		{
			pop();
		}
		break;
		case 3:
		{
			printArray(array, top);
		}
		break;

		default:
		{

			takeInput = false;
			cout << "Program terminated";
		}
		}
	}

	return 0;
}
