#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l = 0;
	int r = 0;

	while (l <= 9)
	{
		while (r <= 9)
		{
			putchar('0' + l);
			putchar('0' + r);
			if (l != 57 || r != 57)
			{
				putchar(',');
				putchar(' ');
			}
			r++;
		}
		r = 0;
		l++;
	}
	putchar('\n');
	return (0);
}
