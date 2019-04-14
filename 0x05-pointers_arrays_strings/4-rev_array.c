#include "holberton.h"

/**
 *reverse_array - reverses the values inside an array of integers
 *@a: array to be reversed
 *@n: number of elements to be reversed
 *
 *
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;
	int i;

	n--;
	for (i = 0; i < n; i++)
	{
		x = a[i];
		y = a[n];
		a[i] = y;
		a[n] = x;
		n--;
		}
}
