#include "holberton.h"
#include <stdio.h>

/**
 *print_array - prints a given number of elements of array
 *@a: int array from which elements are printed
 *@n: number of elements to be printed
 *
 *Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
