/* Bubble sort:
	Bubble sort is a simple and well-known sorting algorithm. It is used in practice once in a blue moon and its main 
	application is to make an introduction to the sorting algorithms. Bubble sort belongs to O(n2) sorting algorithms, 
	which makes it quite inefficient for sorting large data volumes. Bubble sort is stable and adaptive.

	Algorithm:
		1. Compare each pair of adjacent elements from the beginning of an array and, if they are in reversed order, swap them.
		2. If at least one swap has been done, repeat step 1.

	Methods:
	*bubbleSort() - sorts an array from smallest to largest.
	*printArray() - Prints all values stored in array.
*/
#include "pch.h"
#include <iostream>
using namespace std;

void bubbleSort(int array[], int n)
{
	bool swapped = true;
	int j = 0;
	int tmp;
	while (swapped) {
		swapped = false;
		j++;
		for (int i = 0; i < n - j; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swapped = true;

			}
		}
	}
}

void printArray(int array[], int n)
{
	for (int i = 0; i <= n; i++)
	{
		cout << array[i];
	}
}

int main()
{
	int array[] = { 1,4,2,8,6,7,2,9 };
	cout << "\n--------------------------------------------------\n";
	cout << "-----------Displaying All Values of Array-----------";
	cout << "\n--------------------------------------------------\n";
	printArray(array, 7);
	cout << "\n--------------------------------------------------\n";
	cout << "------------Sorting the Values of Array------------";
	cout << "\n--------------------------------------------------\n";
	bubbleSort(array, 7);
	printArray(array, 7);
	cout << "\n";
	system("pause");
	return 0;
}