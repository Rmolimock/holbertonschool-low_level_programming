#include <stdio.h>

/**
 *main - Entry point.
 *
 *Return: 0 for success.
 */
int main(void)
{
	int l;
	int m;
	int r;

	for (l = 0; l < 10; l++)
	{
		for (m = l + 1; m < 10; m++)
		{
			for (r = m + 1; r < 10; r++)
			{
				putchar('0' + l);
				putchar('0' + m);
				putchar('0' + r);
				if (!(l == 7 && m == 8 && r == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
