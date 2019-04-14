#include "holberton.h"
/**
 *get_bit - finds value of an int's bit at a given index
 *@n: integer being checked
 *@index: bit of n to be checked
 *
 *Return: Value of the index bit of n.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((n >> index & 1) != 0 && (n >> index & 1) != 1)
		return (-1);
	if (index > (sizeof(n) * 8))
		return (-1);
	n = n >> index & 1;
	return (n);
}
