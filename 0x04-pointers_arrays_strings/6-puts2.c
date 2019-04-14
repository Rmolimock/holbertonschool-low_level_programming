#include "holberton.h"

/**
 *puts2 - prints every even numbered character in a string
 *@str: pointer to a char string to be printed
 *
 *Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!(i % 2))
		{
			_putchar(str[i]);
			}
		i++;
		}
	_putchar('\n');
}
