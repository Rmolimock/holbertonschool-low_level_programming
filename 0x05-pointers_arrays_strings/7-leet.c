#include "holberton.h"

/**
 *leet - encodes a string to 1337
 *@s:  string to be encoded
 *
 *Return: pointer to s
 */
char *leet(char *s)
{
	int i;
	int k;
	char characters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replacements[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; characters[k] != '\0'; k++)
		{
			if (s[i] == characters[k])
			{
				s[i] = replacements[k];
				}
			}
		}
	return (s);
}
