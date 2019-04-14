#include"holberton.h"

/**
 *print_alphabet - prints the alphabet in lowercase using _putchar
 *
 *Return: void
*/
void print_alphabet(void)
{
	int c;

	for (c = 97; c < 123; c++)
		_putchar(c);
	_putchar('\n');
	}
