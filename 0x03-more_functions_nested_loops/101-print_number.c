#include "holberton.h"

/**
 * print_number - Print any integer using putchar
 * @n: Integer to print.
 *
 *Return: void.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if ((n / 10) > 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
