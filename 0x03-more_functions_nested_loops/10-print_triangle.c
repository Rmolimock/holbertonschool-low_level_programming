#include "holberton.h"

/**
 *print_triangle - prints a triangle with base of variable size
 *@size: size of triangle's base
 *
 *Return: void.
 */
void print_triangle(int size)
{
	int y;
	int x = 1;

	for (y = size; y > 0; y--)
	{
		for (x = 1; x < y; x++)
			_putchar(' ');
		for (x = (size - y) + 1; x > 0; x--)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
