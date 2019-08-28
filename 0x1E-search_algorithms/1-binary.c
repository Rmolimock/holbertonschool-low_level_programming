#include <stdio.h>
#include "search_algos.h"

/**
 *binary_search - simple binary search algorithm to find value in an array
 *@array: the array to be searched
 *@size: size of the array
 *@value: the value being searched for
 *
 *Return: index of array at which value is found, -1 for failure
 */
int binary_search(int *array, size_t size, int value)
{
	size -= 1;
	if (!array)
		return (-1);
	return (bin_search(array, 0, size, value));
}
/**
 *bin_search - simple binary search algorithm to find value in an array
 *@array: the array to be searched
 *@start: the position in the array to start searching (for recursion)
 *@size: size of the array
 *@value: the value being searched for
 *
 *Return: index of array at which value is found, -1 for failure
 */
int bin_search(int *array, size_t start, size_t size, int value)
{
	size_t i;
	size_t mid;

	printf("Searching in array: ");
	for (i = 0; i <= size; i++)
	{
		printf("%d", array[start + i]);
		if (i < size)
			printf(", ");
	}
	printf("\n");
	mid = size / 2;
	if (array[start + mid] == value)
		return (start + mid);
	if (start > size)
		return (-1);
	if (value > array[start + mid])
	{
		if (mid % 2 == 0)
			return (bin_search(array, mid + 1, mid - 1, value));
		return (bin_search(array, mid + 1, mid, value));
	}
	if (value < array[start + mid])
		return (bin_search(array, 0, mid - 1, value));
	return (-1);
}
