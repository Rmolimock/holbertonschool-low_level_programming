#include "holberton.h"
#include <stdio.h>

/**
 *print_array - prints a given number of elements of an array
 *@a: int array from which elements are printed
 *@n: number of elements to be printed
 *
 *Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
			}
		i++;
		}
	printf("\n");
}
