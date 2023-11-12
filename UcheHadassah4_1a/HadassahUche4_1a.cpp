/*Name:Uche Hadassah
This program receives numbers from the user until a sentinel is entered,
stores it in an array,copies it into another array, and outputs the two arrays
*/
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
			if (arr1[i] == -1)//Iff this happens, the loop ends
			{
				break;
			}
			i++;
		} while (arr1[i] != -1 && i < MAX);//While the sentinel is not reached
		CopyArray(arr1, arr2);//Function call
	return 0;
}

void CopyArray(int source[], int destination[])
{
	int j = 0;
	while (source[j] != -1 && j < MAX)
	{
		destination[j] = source[j];//Equates the two arrays
		j++;
	}
	destination[j] = -1;//sets the last value in the dest. array to the sentinel since we want to output that too
	cout << "\nSource Array:";
	for (int i = 0; i <= j; i++)//Outputs the source array
	{
		cout << source[i] << " ";
	}
	cout << "\nDestination Array:";
	for (int k = 0; k <= j; k++)//Outputs the dest. array
	{
		cout << destination[k]<<" ";
	}
}
