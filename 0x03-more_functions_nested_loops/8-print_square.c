#include "holberton.h"

/**
 *print_square - prints sqaure of # symbols
 *@size: variable for size of square
 *
 *Return: void
 */
void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
		_putchar('\n');
	for (y = 1; y <= size; y++)
	{
		for (x = 0; x < size; x++)
			_putchar('#');
		_putchar('\n');
	}
}
