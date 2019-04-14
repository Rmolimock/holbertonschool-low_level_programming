#include "holberton.h"

/**
 *jack_bauer - prints every number from 00:00 to 23:59
 *
 *Return: return 0 for success
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar('0' + (a / 10));
			_putchar('0' + (a % 10));
			_putchar(':');
			_putchar('0' + (b / 10));
			_putchar('0' + (b % 10));
			_putchar('\n');
		}
		b = 0;
	}
}
