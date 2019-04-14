#include "holberton.h"

/**
 *print_sign - prints the sign of a number (positive/negative)
 *@n: integer tested for positive negative or zero value
 *
 *Return: 1 if positive, 0 if zero, -1 if negative.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
	return (-1);
}
