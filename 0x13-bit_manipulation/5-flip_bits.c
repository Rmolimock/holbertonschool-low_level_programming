#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 *flip_bits - finds number of bits two numbers do not share
 *@n: number one
 *@m: number two
 *
 *Return: Number of bits n and m do not share.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int r;
	int i;
	int and_count = 0;
	int or_count = 0;

	for (i = (sizeof(n) * 8) - 1; i >= 0; i--)
	{
		if ((n >> i & 1) && (m >> i & 1))
		{
			and_count++;
		}
		if ((n >> i & 1) || (m >> i & 1))
		{
			or_count++;
		}
	}
	r = or_count - and_count;
	return (r);
}
