#include "holberton.h"

/**
 *_pow_recursion - raises one variable to the power of another
 *@x: variable to be raised to the power of y
 *@y: the power to which to raise x
 *
 *Return: x to the power of y if y > 0, otherwise -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	x = x * _pow_recursion(x, y - 1);
	return (x);
}
