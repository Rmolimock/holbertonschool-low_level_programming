#include "holberton.h"

/**
 *_strcat - appends one string onto the end of another
 *@dest: destination string
 *@src: source string to be copied
 *
 *Return: pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int src_size = 0;
	int dest_size = 0;

	while (dest[dest_size] != '\0')
	{
		dest_size++;
		}

	while (src[src_size] != '\0')
	{
		dest[dest_size] = src[src_size];
		src_size++;
		dest_size++;
		}
	dest[dest_size] = '\0';
	return (dest);
}
