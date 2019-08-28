#include <stdio.h>
#include "search_algos.h"

/**
 *linear_search - simple linear search algorithm to find value in an array
 *@array: the array to be searched
 *@size: size of the array
 *@value: the value being searched for
 *
 *Return: index of array at which value is found, -1 for failure
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);
	for (i = 0; array[i]; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
