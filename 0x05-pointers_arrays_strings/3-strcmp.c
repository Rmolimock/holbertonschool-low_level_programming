#include "holberton.h"

/**
 *_strcmp - compares the dictionary value of two strings
 *@s1: string one to be compared
 *@s2: string two to be compared
 *
 *Return: +/-[difference] if s1 >/< s2, respectively, and zero if equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return ((int) s1[i] - s2[i]);
			}
		i++;
		}
	return (0);
}
