#include "holberton.h"

/**
 *print_diagonal - prints a diagonal line
 *@n: number of backslashes/size of line
 *
 *Return: void
 */
void print_diagonal(int n)
{
	int bsl;
	int spaces;

	if (n > 0)
	{
		for (bsl = 0; bsl < n; bsl++)
		{
			_putchar('\\');
			_putchar('\n');
			for (spaces = 0; spaces <= bsl; spaces++)
			{
				if (bsl < n - 1)
				_putchar(' ');
			}
			spaces = 1;
		}
	}
	if (n <= 0)
		_putchar('\n');
}
