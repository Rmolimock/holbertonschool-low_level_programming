#include "holberton.h"

/**
 *clear_bit - sets value of a bit at a given index to zero
 *@n: integer to be changed
 *@index: index of bit to be changed in n
 *
 *Return: Success 1, Fail -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int i = 1;

	if ((*n >> index & 1) != 0 && (*n >> index & 1) != 1)
		return (-1);
	if (index > (sizeof(*n) * sizeof(unsigned long int)))
		return (-1);
	if (*n >> index & 1)
		*n = *n & ~(i << index);
	return (1);
}
