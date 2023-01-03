#include "sort.h"
/**
 * selection_sort - Sorts an array of integers with selection sort
 * @array: The array
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min, index;

	if (!array)
		return;

	for (i = 0; i < size; i++)
	{
		for (min = array[i], j = i + 1; j < size; j++)
		{
			if (min > array[j])
				min = array[j], index = j;
		}
		if (array[i] > min)
		{
			array[index] = array[i];
			array[i] = min;
			print_array(array, size);
		}
	}
}
