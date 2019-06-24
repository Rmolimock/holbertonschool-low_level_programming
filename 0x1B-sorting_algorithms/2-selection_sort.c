#include <stdlib.h>
#include <stdio.h>
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
	int smallest, idx_smallest = 0, tmp;

	if (!array || size == 1)
		return;
	for (y = 0; array[y]; y++)
	{
		smallest = array[y];
		flag = 0;
		for (x = y; array[x]; x++)
		{
			if (array[x] < smallest)
			{
				smallest = array[x];
				flag = 1;
				idx_smallest = x;
			}
		}
		if (flag)
		{
			tmp = array[idx_smallest];
			array[idx_smallest] = array[y];
			array[y] = tmp;
			print_array(array, size);
		}
	}
}
