#include <stdio.h>
#include "holberton.h"

/**
 *print_binary - prints the binary representation of a number
 *@n: number to be printed in binary
 *
 *Return: Void.
 */
void print_binary(unsigned long int n)
{
	int i;
	int flag = 0;

	if (n == 0)
		_putchar('0');
	if (n == 1)
		_putchar('1');
	for (i = (sizeof(n) * 8) - 1; i >= 0; i--)
	{
		if (n >> i & 1)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag)
			_putchar('0');
	}
}
