#include "holberton.h"

/**
 *print_alphabet_x10 - prints the alphabet in lowercase 10x using _putchar
 *
 *Return: void
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
{
	int c;

	for (c = 97; c < 123; c++)
{
	_putchar(c);
	}
	_putchar('\n');
	}
	}
