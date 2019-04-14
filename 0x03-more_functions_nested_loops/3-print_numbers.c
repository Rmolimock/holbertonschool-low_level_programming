#include "holberton.h"

/**
 *print_numbers - prints 0-9 using only _putchar
 *
 *Return: Always 0.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar('0' + i);
	_putchar('\n');
}
