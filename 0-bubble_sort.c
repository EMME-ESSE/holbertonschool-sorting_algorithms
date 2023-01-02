#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>
#include <stdbool.h>
#include "sort.h"
/**
 * * bubble_sort - Sorts an array of integer in ascending order
 * * @array: The array to sort
 * * @size: Size of the array
**/
void bubble_sort(int *array, size_t size)
{
	bool ord = false;
	unsigned int i;
	int temp;
	
	if (!array || size < 2)
		return;
	while (!ord)
	{
		ord = true;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				ord = false;
			}
		}
	}
}
