#include "holberton.h"
#include <stdlib.h>

/**
 *alloc_grid - allocates memory space for a 2d array using malloc
 *@width: number of elements in each array row
 *@height: number of arrays (rows)
 *
 *Return: pointer to the newly created 2d array on success, otherwise NULL.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int k;
	int **r;

	if (width <= 0 || height <= 0)
		return (NULL);
	r = malloc(sizeof(int *) * height);
	if (r)
	{
		for (i = 0; i < height; i++)
		{
			r[i] = malloc(sizeof(int) * width);
			if (!r[i])
			{
				while (i >= 0)
				{
					free(r[i]);
					i--;
				}
				free(r);
				return (NULL);
			}
			for (k = 0; k < width; k++)
			{
				r[i][k] = 0;
			}
		}
	}
	return (r);
}
