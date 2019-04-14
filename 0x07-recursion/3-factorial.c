#include "holberton.h"

/**
 *factorial - returns the factorial of a number, if n > 0
 *@n: number for which to find the factorial
 *
 *Return: facorial of n.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
