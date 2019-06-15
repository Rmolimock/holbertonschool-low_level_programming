#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 *bubble_sort - bubble sorting algorithm swaps values until array is sorted
 *@array: array being sorted
 *@size: size of the array
 *
 *Return: Void.
 */
void bubble_sort(int *array, size_t size)
{
	int i, flag, save;
	int a_size = size - 1;

	flag = 0;
	while (!flag)
	{
		flag = 1;
		for (i = 0; i < a_size; i++)
			if (array[i] > array[i + 1])
			{
				flag = 0;
				save = array[i];
				array[i] = array[i + 1]; /* swap */
				array[i + 1] = save;
				print_array(array, size);
		}
		a_size--;
	}
}
