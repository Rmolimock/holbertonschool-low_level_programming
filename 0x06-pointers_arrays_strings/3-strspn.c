#include "holberton.h"

/**
 *_strspn - finds 1st subtstring in s that consists only of chars from accept
 *@s: string to be searched through
 *@accept: string of character that substring must consist of
 *
 *Return: number of bytes of substring if found, otherwise null
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int k;
	int size = 0;
	int b = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if ((accept[k + 1] == '\0') && (s[i] != accept[k]) && (b == 1))
			{
				return (size);
				}
			else if (s[i] == accept[k])
			{
				size++;
				b = 1;
				break;
				}
			}
		}
	return (0);
}
