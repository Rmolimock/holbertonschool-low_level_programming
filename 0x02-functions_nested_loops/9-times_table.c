#include "holberton.h"

/**
 *times_table - prints the 9 times table, starting with 0
 *
 *Return: Void.
 */
void times_table(void)
{
	int l;
	int r;
	int n = 0;

	for (l = 0; l < 10; l++)
	{
		for (r = 0; r < 10; r++)
		{
			n = l * r;
			
			/**
			*print extra space for single digit 
			*numbers to keep table aligned 
			*/
			if (n < 10)
			{
				if (r > 0 && r <  10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + n);
			}
			
			else if (n >= 10)
			{
				if (r > 0 && r < 10)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
		}
		_putchar('\n');
	}
}
