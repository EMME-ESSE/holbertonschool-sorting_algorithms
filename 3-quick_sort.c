#include "sort.h"
/*
* quick_sort - Pass the parameters to the quicksort_recursion function
* @array: The array of integers
* @size: Size of the array
**/
void quick_sort(int *array, size_t size)
{
	quicksort_recursion(array, 0, size - 1);
}
/**
 * quicksort_recursion - Sorts an array of integers in ascending order
 * @array: The array of integers
 * @first: first parameter to compare
 * @last: last parameter to compare
**/
void quicksort_recursion(int array[], int first, int last)
{
	int temp, def, i, j;

	if (first < last)
	{
		def = first;
		i = first;
		j = last;
		while (i < j)
		{
			while (array[i] <= array[def] && i < last)
				i++;
			while (array[j] > array[def])
				j--;
			if (i < j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				printf("%d, ", array[i]);
			}
		}
		temp = array[def];
		array[def] = array[j];
		array[j] = temp;
		quicksort_recursion(array,first,j-1);
		quicksort_recursion(array,j+1,last);
	}
}
