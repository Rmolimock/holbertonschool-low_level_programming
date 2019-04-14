#include "holberton.h"

/**
 *_islower - checks if character is lower case
 *@c: character checked for case
 *
 *Return: 1 if lowercase, 0 otherwise
*/
int _islower(int c)
{
	/* uses Ternary Operator to check binary condition */
	/* syntax: result (condition) ? If_True : If_False; */
	return (c >= 97 && c <= 122) ? 1 : 0;
}
