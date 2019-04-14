#include "holberton.h"
#include <stdlib.h>

/**
 *malloc_checked - allocates a given number of bytes in memory using malloc
 *@b: number of bytes to be allocated.
 *
 *Return: pointer to mem on success, else normal process term w/ value of 98
 */
void *malloc_checked(unsigned int b)
{
	 void *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
