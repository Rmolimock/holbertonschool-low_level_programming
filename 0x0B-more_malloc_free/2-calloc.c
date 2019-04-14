#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc - allocates memory for an array using malloc
 *@nmemb: number of rows in the array
 *@size: number of elements in each row
 *
 *Return: pointer to the newly allocated array on success, else NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *r;
	char *p;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	r = malloc(size * nmemb);
	if (r)
	{
		p = (char *)r;
		while (i < nmemb * size)
		{
			p[i] = 0;
			i++;
		}
	}
	return (r);
}
