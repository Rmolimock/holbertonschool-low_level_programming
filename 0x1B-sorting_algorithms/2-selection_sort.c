#include <stdlib.h>
#include "sort.h"

/**
 *selection_sort - sort an array using a selection algorithm
 *@array: array to be sorted
 *@size: size of array
 *
 *Return: Void.
 */
void selection_sort(int *array, size_t size)
{
	size_t y, x, flag;
	int smallest, new_smallest = 0;

	if (!array || size == 1)
		return;
	for (y = 0; y < size; y++)
	{
		smallest = array[y];
		flag = 0;
		for (x = y; array[x]; x++)
		{
			if (array[x] <= smallest)
			{
				if (array[x] < smallest)
					flag = 1;
				smallest = array[x];
				new_smallest = x;
			}
		}
		array[new_smallest] = array[x];
		array[x] = smallest;
		if (flag)
			print_array(array, size);
	}
}
