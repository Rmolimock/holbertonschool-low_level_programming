#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *op_add - adds int parameters
 *@a: int to be added
 *@b: int to be added
 *
 *Return: Sum of a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtracts one int parameter from the other
 *@a: int from which to subtract b
 *@b: int to be subtracted from a
 *
 *Return: Difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two ints
 *@a: int to be multiplied
 *@b: int to be multiplied
 *
 *Return: Product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides one int by another
 *@a: dividend
 *@b: divisor
 *
 *Return: Quotient of a / b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - finds the remainder of the division of one int by another
 *@a: dividend
 *@b: divisor
 *
 *Return: Remainder of the division if true, else 0.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
