#include "holberton.h"

/**
 *_strncpy - copies a string from one char pointer onto another
 *@dest: destination string
 *@src: source string to be copied
 *@n: maximum number of bytes to be copied
 *
 *Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
		}
	if (n > i)
	{
		dest[i] = '\0';
		i++;
		while ((dest[i] != '\0') && (i < n))
		{
			dest[i] = '\0';
			i++;
			}
		}
	if (n <= i)
	{
		i = 0;
		while (dest[i] != '\0')
		{
			i++;
			}
		dest[i] = '\0';
		}
	return (dest);
}
