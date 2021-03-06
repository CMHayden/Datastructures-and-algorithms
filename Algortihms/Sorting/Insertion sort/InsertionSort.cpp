/* Bubble sort:
	Insertion sort belongs to the O(n2) sorting algorithms. Unlike many sorting algorithms with quadratic complexity, it is 
	actually applied in practice for sorting small arrays of data. For instance, it is used to improve quicksort routine. Some 
	sources notice, that people use same algorithm ordering items, for example, hand of cards.
	Algorithm:
		Insertion sort algorithm somewhat resembles selection sort. Array is imaginary divided into two parts - sorted one and 
		unsorted one. At the beginning, sorted part contains first element of the array and unsorted one contains the rest. 
		At every step, algorithm takes first element in the unsorted part and inserts it to the right place of the sorted one.
		When unsorted part becomes empty, algorithm stops.
	Methods:
	*insertionSort() - sorts an array from smallest to largest.
	*printArray() - Prints all values stored in array.
*/
#include "pch.h"
#include <iostream>
using namespace std;

void insertionSort(int arr[], int length)
{
	int i, j, tmp;
	for (i = 1; i < length; i++)
	{
		j = i;
		while (j > 0 && arr[j - 1] > arr[j])
		{
			tmp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = tmp;
			j--;
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
	insertionSort(array, 7);
	printArray(array, 7);
	cout << "\n";
	system("pause");
	return 0;
}