#include "holberton.h"

/**
 *print_times_table - prints the n times table, starting with 0
 *@n: size of the times table
 *
 *Return: Void.
 */
void print_times_table(int n)
{
	int a;
        int b;
	char *c;
        int multiple = 0;

	c = "0\n";
        if (n > 15 || n < 0 || !n)
	{
		write(2, c, 1));
		return;
	}
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			multiple = a * b;

			/* how many spaces needed after comma */
			if (b == 0)
				_putchar('0' + multiple);
			else if (multiple < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + multiple);
			}
			else if (multiple < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + multiple / 10);
				_putchar('0' + multiple % 10);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + multiple / 100);
				_putchar('0' + ((multiple / 10) % 10));
				_putchar('0' + multiple % 10);
			}
		}
		_putchar('\n');
	}
}
