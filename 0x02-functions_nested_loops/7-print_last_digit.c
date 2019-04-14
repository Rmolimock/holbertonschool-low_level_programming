#include "holberton.h"

/**
 *print_last_digit - prints the last digit of 2 digit number
 *@n: integer whos last digit is printed
 *
 *Return: the last digit of n for success (n % 10)
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (n < 0)
		x *= -1;
	_putchar('0' + x);
	return (x);
	}
