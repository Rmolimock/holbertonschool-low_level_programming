#include "holberton.h"

/**
 *puts_half - prints second half of a string, rounded down for odd strings
 *@str: string to be partially printed
 *
 *Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i + 1])
		i++;
	n = i / 2;
	while (n < i)
	{
		n++;
		_putchar(str[n]);
	}
	_putchar('\n');
}
