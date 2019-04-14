#include "holberton.h"
#include <stdlib.h>

/**
 *array_range - allocates memory for an array of integers using malloc
 *@min: starting value of elements in the array, counting up to max
 *@max: ending value of elements in the array
 *
 *Return: pointer to the new array on success, else NULL.
 */
int *array_range(int min, int max)
{
	int i;
	int range = max - (min - 1);
	int *r;
	int lmin = min;
	int lmax = max;

	if (max == 0 || max < min)
		return (NULL);
	r = malloc(sizeof(int) * range);
	if (r)
	{
		for (i = 0; lmin <= lmax; i++, lmin++)
			r[i] = lmin;
	}
	return (r);
}
