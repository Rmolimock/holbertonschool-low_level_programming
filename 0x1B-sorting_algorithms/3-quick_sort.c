#include <stdlib.h>
#include "sort.h"

/**
 *quick_recursion - recursively implement quick sort on an array
 *@array: array to be sorted
 *@less: the end position of elements less than pivot
 *@greater: the position compared to pivot
 *@size: size of the array
 *
 *Return: Void.
 */
void quick_recursion(int *array, int first, int last, size_t size)
{
	int piv;

	if (last > first)
	{
		piv = partition(array, first, last, size);
		quick_recursion(array, first, piv - 1, size);
		quick_recursion(array, piv + 1, last, size);
	}
}

/**
 * partition - partition the array
 * @array: the array to be partitioned
 * @first: lowest sorted element of partition
 * @last: end of unsorted elements of partition
 * @size: size of the array
 * Return: index of the new pivot
 */
int partition(int *array, int first, int last, size_t size)
{
	int i, j, piv, tmp;

	piv = array[last];
	for (j = first, i = first - 1; j < last; j++)
	{
		if (array[j] < piv)
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			if (array[i] != array[j])
				print_array(array, size);
		}
	}
	tmp = array[i + 1];
	array[i + 1] = piv;
	array[last] = tmp;
	if (array[last] != array[i + 1])
		print_array(array, size);
	return (i + 1);
}
/**
 * quick_sort - sorts random array of integers with quick sort method
 * @array: pointer to first element of array
 * @size: size of the array
 * Return: No Value
 */
void quick_sort(int *array, size_t size)
{
        if (!array)
                return;
        quick_recursion(array, 0, size - 1, size);
}
