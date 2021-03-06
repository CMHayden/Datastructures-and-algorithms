/* Selection sort:
	Selection sort is one of the O(n2) sorting algorithms, which makes it quite inefficient for sorting large data volumes. Selection 
	sort is notable for its programming simplicity and it can over perform other sorts in certain situations

	Algorithm:
		The idea of algorithm is quite simple. Array is imaginary divided into two parts - sorted one and unsorted one. At the beginning, 
		sorted part is empty, while unsorted one contains whole array. At every step, algorithm finds minimal element in the unsorted part 
		and adds it to the end of the sorted one. When unsorted part becomes empty, algorithm stops.

		When algorithm sorts an array, it swaps first element of unsorted part with minimal element and then it is included to the sorted 
		part. This implementation of selection sort in not stable. In case of linked list is sorted, and, instead of swaps, minimal element 
		is linked to the unsorted part, selection sort is stable.

	Methods:
	*selectionSort() - sorts an array from smallest to largest.
	*printArray() - Prints all values stored in array.
*/
#include "pch.h"
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
	int i, j, minIndex, tmp;
	for (i = 0; i < n - 1; i++)
	{
		minIndex = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[minIndex])
				minIndex = j;

		if (minIndex != i) 
		{
			tmp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = tmp;
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
	cout << "----------Displaying All Values of Array----------";
	cout << "\n--------------------------------------------------\n";
	printArray(array, 7);
	cout << "\n--------------------------------------------------\n";
	cout << "-----------Sorting the Values of Array------------";
	cout << "\n--------------------------------------------------\n";
	selectionSort(array, 7);
	printArray(array, 7);
	cout << "\n";
	system("pause");
	return 0;
}