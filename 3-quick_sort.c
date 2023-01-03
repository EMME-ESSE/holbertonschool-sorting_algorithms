#include "sort.h"
/**
* quick_sort - Pass the parameters to the quicksort_recursion function
* @array: The array of integers
* @size: Size of the array
**/
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	quicksort_recursion(array, size, 0, size - 1);
}
/**
 * quicksort_recursion - Sorts an array of integers in ascending order
 * @array: The array of integers
 * @first: first parameter to compare
 * @last: last parameter to compare
 * @size: Size of the array
**/
void quicksort_recursion(int array[], size_t size, int first, int last)
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
			}
		}
		temp = array[def];
		array[def] = array[j];
		array[j] = temp;
		print_array(array, size);
		quicksort_recursion(array, size, first, j - 1);
		quicksort_recursion(array, size, j + 1, last);
	}
}
