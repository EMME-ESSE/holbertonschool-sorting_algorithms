#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending order
 * @array: The array
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int min_index;
	
	for(unsigned int i = 0; i < size - 1; i++) 
	{
		min_index = i;
		for(unsigned int j = i + 1; j < size; j++) 
		{
			if(array[min_index] > array[j]) 
			{
				min_index = j;
			}
			if(min_index != i)
			{
				int temp = array[i];
				array[i] = array[min_index];
				array[min_index] = temp;
			}
		 }
	}
}