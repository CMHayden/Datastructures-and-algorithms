/* Quick sort:
	Quicksort is a fast sorting algorithm, which is used not only for educational purposes, but widely applied in practice. On the 
	average, it has O(n log n) complexity, making quicksort suitable for sorting big data volumes. The idea of the algorithm is quite 
	simple and once you realize it, you can write quicksort as fast as bubble sort.
	Algorithm:
		1.	Choose a pivot value. We take the value of the middle element as pivot value, but it can be any value, which is in range of 
			sorted values, even if it doesn't present in the array.
		2.	Partition. Rearrange elements in such a way, that all elements which are lesser than the pivot go to the left part of the 
			array and all elements greater than the pivot, go to the right part of the array. Values equal to the pivot can stay in any part 
			of the array. Notice, that array may be divided in non-equal parts.
		3.	Sort both parts. Apply quicksort algorithm recursively to the left and the right parts.
	Methods:
	*swap() - swaps two elements.
	*partition() - divides array into two halves where left side is only values smaller than pivot value, and right half is only values larger than pivot value
	*quickSort() - sorts an array from smallest to largest.
	*printArray() - Prints all values stored in array.
*/
#include "pch.h"
#include <iostream>
using namespace std;

// A utility function to swap two elements 
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
	array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition(int arr[], int low, int high)
{
	int pivot = arr[high];    // pivot 
	int i = (low - 1);  // Index of smaller element 

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than or 
		// equal to pivot 
		if (arr[j] <= pivot)
		{
			i++;    // increment index of smaller element 
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		   at right place */
		int pi = partition(arr, low, high);

		// Separately sort elements before 
		// partition and after partition 
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
}

// Driver program to test above functions 
int main()
{
	int array[] = { 1,4,2,8,6,7,2,9 };
	int n = sizeof(array) / sizeof(array[0]);
	cout << "\n--------------------------------------------------\n";
	cout << "-----------Displaying All Values of Array-----------";
	cout << "\n--------------------------------------------------\n";
	printArray(array, 7);
	cout << "\n--------------------------------------------------\n";
	cout << "------------Sorting the Values of Array------------";
	cout << "\n--------------------------------------------------\n";
	quickSort(array, 0, n - 1);
	printArray(array, 7);
	cout << "\n";
	system("pause");
	return 0;
}