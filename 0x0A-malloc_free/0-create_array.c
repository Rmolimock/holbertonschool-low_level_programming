#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - creates an array of chars and initializes with array of chars
 *@size: size of the array
 *@c: char whos size determines size of elements in the array
 *
 *Return: pointer to malloc allocated allocated memory.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(size * sizeof(*p));
	if ((size == 0) || (p == NULL))
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
