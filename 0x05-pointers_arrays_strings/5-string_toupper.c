#include "holberton.h"

/**
 *string_toupper - converts lowercase string to uppercase
 *@n: pointer to string to have case converted
 *
 *Return: pointer to reversed n
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] > 96)
		{
			n[i] -= 32;
			}
		}
	return (n);
}
