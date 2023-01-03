#include "sort.h"
/**
 * selection_sort - Sorts an array of integers with selection sort
 * @array: The array
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, min;

	if (!array || !size)
		return;
	for (i = 0; i < size; i++)
	{
		for (min = array[i], j = i + 1; j < size; j++)
		{
			if (min > array[j])
			{
				temp = j, min = array[j];
			}
		}
		if (array[j] > min)
		{
			array[temp] = array[i];
			array[i] = min;
			print_array(array, size);
		}
	}
}
