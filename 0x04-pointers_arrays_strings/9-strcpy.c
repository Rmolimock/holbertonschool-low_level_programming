#include <stdio.h>

/**
 *_strcpy - copies src into dest
 *@src: string to be copied
 *@dest: copy of src to be made
 *
 *Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (!src)
		return (dest);
	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
