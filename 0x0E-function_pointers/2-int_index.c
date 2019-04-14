#include <stdlib.h>
#include "function_pointers.h"

/**
 *int_index - checks elements of a given array for an int using cmp()
 *@array: array to be checked for an int
 *@size: how many elements to be checked
 *@cmp: pointer to the function that checks if a number is an int
 *
 *Return: Success: index of first int element, Fail: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int n;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (size--)
	{
		n = cmp(array[i++]);
		if (n != 0)
			return (i - 1);
	}
	return (-1);
}
