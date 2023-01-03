#include "sort.h"
/**
** quick_sort - Pass the parameters to the quicksort_recursion function
** @array: The array of integers
** @size: Size of the array
**/
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	quick(array, 0, size - 1, size);
}
/**
* partition - Partitions the array around a pivot and returns the pivot index
* @array: array
* @lower: lower index
* @higher: higher index
* @size: array size
* Return: The index
**/
size_t partition(int *array, size_t lower, size_t higher, size_t size)
{
	int pivot = array[higher];
	int temp;
	size_t i = lower, j;

	for (j = i; j < higher; j++)
	{
		if (i == j && array[j] <= pivot)
			i++;
		else if (array[j] <= pivot)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			print_array(array, size);
		}
	}
	if (higher != i)
	{
		array[higher] = array[i];
		array[i] = pivot;
		print_array(array, size);
	}
	return (i);
}
/**
** quick - Partitions the array around a pivot and returns the pivot index
** @array: The array of integers
** @higher: the highest start value
** @lower: the lowest start value
** @size: array size
**/
void quick(int *array, size_t lower, size_t higher, size_t size)
{
        size_t par;

        if (lower >= higher)
                return;
        par = partition(array, lower, higher, size);
        if (par > 0)
                quick(array, lower, par - 1, size);
        quick(array, par + 1, higher, size);
}
