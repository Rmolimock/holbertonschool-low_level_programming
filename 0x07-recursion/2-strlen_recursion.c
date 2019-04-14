#include "holberton.h"

/**
 *_strlen_recursion - returns the length of a string using recursion
 *@s: string to be checked for length
 *
 *Return: number of bytes in a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
