#include "holberton.h"

/**
 *print_rev - prints a string in reverse, followed by a newline
 *@s: pointer to a char to be printed
 *
 *Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i + 1])
		i++;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
