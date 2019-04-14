#include "holberton.h"

/**
 *_sqrt_recursion - finds the square root of a given number using recursion
 *@n: number for which the square will be returned
 *
 *Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n < 4)
		return (-1);
	return (count_up_recursively(n, 2));
}
/**
 *count_up_recursively - checks for a numbers square root
 *@a: number to be checked for square root
 *@b: lowest number from which to begin the count
 *
 *Return: square root of a.
 */
int count_up_recursively(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b == (a / 2) + 1)
		return (-1);
	return (count_up_recursively(a, b + 1));
}
