#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
		putchar((char) c);
	putchar('\n');
	return (0);
}
