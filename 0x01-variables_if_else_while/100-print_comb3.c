#include <stdio.h>

/**
 *main - entry point.
 *
 *Return: 0 for success.
 */
int main(void)
{
	int l = 0;
	int r = 1;

	while (l < 9)
	{
		while (r <= 9)
		{
			putchar('0' + l);
			putchar('0' + r);
			if (l < 8)
			{
				putchar(',');
				putchar(' ');
			}
			r++;
		}
		l++;
		r = l + 1;
	}
	putchar('\n');
	return (0);
}
