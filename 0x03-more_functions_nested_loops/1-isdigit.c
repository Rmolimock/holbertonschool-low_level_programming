#include "holberton.h"

/**
 *_isdigit - checks if c is a digit
 *@c: variable checked for digit
 *
 *Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
