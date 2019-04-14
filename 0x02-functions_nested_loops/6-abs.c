#include "holberton.h"

/**
 *_abs - computes the absolute value of an int
 *@n: integer checked for absolute value
 *
 *Return: n for success
 */
int _abs(int n)
{
	return (n < 0) ? (n *= -1) : n;
}
