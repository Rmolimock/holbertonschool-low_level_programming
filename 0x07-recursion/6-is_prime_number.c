#include "holberton.h"

/**
 *is_prime_number - checks whether or not a number is prime
 *@n: number to be checked
 *
 *Return: 1 if n is prime, otherwise 0.
 */
int is_prime_number(int n)
{
	if ((n == 2) || (n == 3) || (n == 5))
		return (1);
	if (n < 0)
		return (0);
	if ((n == 1) || (n == 0))
		return (0);
	return (count_a(n, 2, 2));
}
/**
 *count_a - counts up a and checks if x is prime
 *@a: number counted up
 *@b: constant
 *@x: checked if prime
 *
 *Return: 1 if prime, otherwise 0.
 */
int count_a(int x, int a, int b)
{
	if (a * b == x && (a < x) && (b < x))
		return (0);
	if ((a < x) && (b < x))
		return (count_b(x, a + 1, b));
	return (1);
}
/**
 *count_b - counts up a and checks if x is prime
 *@b: number counted up
 *@a: constant
 *@x: checked if prime
 *
 *Return: 1 if prime, otherwise 0.
 */
int count_b(int x, int a, int b)
{
	if ((a * b == x) && (a < x) && (b < x))
		return (0);
	if (a == b)
		return (count_a(x, a, 1));
	if (a * b < x)
		return (count_b(x, a, b + 1));
	return (count_a(x, a, 1));
}
