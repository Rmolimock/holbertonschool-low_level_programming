#include "holberton.h"

/**
 *_isalpha - checks if character is a letter
 *@c: integer whos ascii value is checked against upper and lowercase letters
 *
 *Return: 1 if c is a letter, 0 otherwise.
*/
int _isalpha(int c)
{
	return (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90))) ? 1 : 0;
}
