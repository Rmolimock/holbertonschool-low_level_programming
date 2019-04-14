#include <stdio.h>
#include "holberton.h"

/**
 *print_to_98 - prints all numbers from n to 98, whether n is >< or = 98.
 *@n: integer to be counted up/down from to 98
 *
 *Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
		printf("98");
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	printf("\n");
}
