#include "holberton.h"

/**
 *set_string - sets the value of a pointer to a char
 *@s: the pointer whos value will be assigned to char
 *@to: the char that will be assigned the value of s
 *
 *Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
