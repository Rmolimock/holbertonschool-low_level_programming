#include "holberton.h"

/**
 *_memset - fills the first n bytes of location s with constant byte b
 *@s: memory location to be filled
 *@b: constant bytes to fill in at location s
 *@n: number of b bytes to fill at s
 *
 *Return: pointer to the memory area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
		}
	return (s);
}
