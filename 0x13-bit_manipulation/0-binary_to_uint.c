#include "holberton.h"

/**
 *binary_to_uint - converts a byte into an unsigned integer
 *@b: byte to be converted into integer
 *
 *Return: Success - integer form of binary
 */
unsigned int binary_to_uint(const char *b)
{
	int n = 0;
	int i;

	for (i = 0; b[i]; i++)
	{
		n = n << 1;
		if (b[i] == '1')
			n = n | 1;
		else if (b[i] != '0')
			return (0);
	}
	return (n);
}
