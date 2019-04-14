#include "holberton.h"

/**
 *_strstr - locates a srting within a string
 *@haystack: string to be searched through
 *@needle: string to be searched for
 *
 *Return: pointer to the beginning of needle if found, otherwise null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int k;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = i, k = 0; needle[k] != '\0'; j++, k++)
		{
			if (needle[k] != haystack[j] || haystack[j] == '\0')
			{
				break;
			}
		}
		if (needle[k] == '\0')
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
