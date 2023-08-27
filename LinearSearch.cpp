#include<iostream>
using namespace std;

int main()
{
	int size = 0, i, key;
	int number[20];
	bool flag = false;
	
	cout << "Enter size of the array : ";
	cin >> size;
	
	for(i=0; i < size; i++)
	{
		cout << "Enter value of index " << i << " : ";
		cin >> number[i];	
	}
	
	cout << "Enter key to find : ";
	cin >> key;
	
	for(i = 0; i < size; i++)
	{
		if(key == number[i])
		{
			flag = true;
			break;
		}
	}
	
	if(flag == true)
	{
		cout << "Key found at the index " << i << " in the array" << endl;
	}
	else 
	{
		cout << "Key not found in the array" << endl;
	}
	
	return 0;
}
