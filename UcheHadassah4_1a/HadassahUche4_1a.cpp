/*a) Write a void function called CopyArray that takes two arrays of integers as 
parameters, called source and destination, and copies the elements from the array 
source into the array destination. You should assume that there is a -1 at the end of 
the array source. Write a main program to test your function with a user defined array 
(-1 to signal end of input). The program should output both arrays.*/
#include<iostream>
using namespace std;
const int MAX = 100;
void CopyArray(int[], int[]);//Function prototype
int main()
{
	int arr1[MAX];
	int arr2[MAX];
	int i = 0;
	cout << "\nEnter the numbers(-1 to end):";
		do
		{
			cin >> arr1[i];
			if (arr1[i] == -1)
			{
				break;
			}
			i++;
		} while (arr1[i] != -1 && i < MAX);
		CopyArray(arr1, arr2);
	return 0;
}

void CopyArray(int source[], int destination[])
{
	int j = 0;
	while (source[j] != -1 && j < MAX)
	{
		destination[j] = source[j];
		j++;
	}
	destination[j] = -1;
	cout << "\nSource Array:";
	for (int i = 0; i <= j; i++)
	{
		cout << source[i] << " ";
	}
	cout << "\nDestination Array:";
	for (int k = 0; k <= j; k++)
	{
		cout << destination[k]<<" ";
	}
}
