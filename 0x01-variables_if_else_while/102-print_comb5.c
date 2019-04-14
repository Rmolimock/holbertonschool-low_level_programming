#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0 for success.
 */
int main(void)
{
	int l;
	int r;

	for (l = 0; l < 100; l++)
	{
		for (r = l + 1; r < 100; r++)
		{
			putchar('0' + (l / 10));
			putchar('0' + (l % 10));
			putchar(' ');
			putchar('0' + (r / 10));
			putchar('0' + (r % 10));
			if (r != 99 || l != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
			putchar('\n');
	return (0);
}
