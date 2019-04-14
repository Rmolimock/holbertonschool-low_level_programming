#include "holberton.h"

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char *s;
	short i;
	
	s = "Holberton";
	for (i = 0; i < 10; i++)
		_putchar(s[i]);
	_putchar('\n');
	return (0);
}
