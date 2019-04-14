#include "holberton.h"

/**
 *_strchr - searches for an instance of a given character in a given string
 *@s: string to be searched through
 *@c: character to be searched for
 *
 *Return: pointer to c if found, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
			}
		}
	if (s[i] == c)
	{
		return (s + i);
		}
	return ('\0');
}
