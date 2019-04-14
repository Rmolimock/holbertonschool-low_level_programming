#include "holberton.h"

/**
 *print_line - prints line of n length with "_" character
 *@n: number of times to print "_"
 *
 *Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (; n > 0; n--)
			_putchar('_');
	}
	_putchar('\n');
}
