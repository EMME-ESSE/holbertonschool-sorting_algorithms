#include "sort.h"
/**
 * * quick_sort - Pass the parameters to the quicksort_recursion function
 * * @array: The array of integers
 * * @size: Size of the array
**/
void quick_sort(int *array, size_t size)
{
	int low = 0;
	int high = size - 1;
	
	if (low < high)
	{
		int pivot_index = partition(array, low, high);

		quick_sort(array, pivot_index);
		quick_sort(array + pivot_index + 1, size - pivot_index - 1);
	}
}
/**
 * * partition - Partitions the array around a pivot and returns the pivot index
 * * @array: The array of integers
 * * @high: the highest start value
 * * @low: the lowest start value
**/
int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1, j;

	for (j = low; j <= high - 1; j++)
	{
		printf("%d, ", array[j]);
        	if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	printf("\n");
	swap(&array[i + 1], &array[high]);
	return i + 1;
}
/**
* * swap - Swaps the values
* * @a: array of i
* * @b: array of high
**/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
