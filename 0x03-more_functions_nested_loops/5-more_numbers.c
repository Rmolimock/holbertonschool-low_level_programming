#include "holberton.h"

/**
 *more_numbers - prints 0-14, 10x
 *
 *Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int ten;

	for (ten = 0; ten < 10; ten++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
	}
}
