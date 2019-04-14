#include "holberton.h"

/**
 *_strpbrk - finds only the first occurance of char from subsrting in string
 *@s: string to be searched through
 *@accept: string of characters searched for
 *
 *Return: pointer to the accept char's place in s if found, otherwise null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
