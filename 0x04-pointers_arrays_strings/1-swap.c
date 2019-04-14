#include "holberton.h"

/**
 *swap_int - swaps the values of two pointer integers
 *@a: first pointer to an int to be modified
 *@b: second pointer to an int to be modified
 *
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
