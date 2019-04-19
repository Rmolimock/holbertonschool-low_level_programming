#include <stdio.h>
#include "holberton.h"

/**
 *_atoi - convert string of numbers to ints
 *@s: string to be converted into an integer
 *
 *Return: integer form of number in string s
 */
int _atoi(char *s)
{
	int i, n;
	int sign = 1;

	for (i = 0, n = 0; s[i]; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			n = (n * 10) + (s[i] - '0');
		else if (n > 0)
			break;
	}
	return (n * sign);
}
