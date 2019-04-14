#include "holberton.h"

/**
 *_isupper - checks if character is uppercase
 *@c: character checked for case
 *
 *Return: 1 if upper, 0 otherwise
 */
int _isupper(int c)
{
	return ((c >= 65 && c <= 90) ? 1 : 0);
}
