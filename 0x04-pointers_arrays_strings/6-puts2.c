#include "holberton.h"

/**
 *puts2 - prints every even numbered char in a string
 *@str: pointer to a string to be printed
 *
 *Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (!(i % 2))
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
