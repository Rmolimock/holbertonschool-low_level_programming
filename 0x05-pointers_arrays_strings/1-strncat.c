#include "holberton.h"

/**
 *_strncat - appends one string to another up to n bytes
 *@dest: destination string to be appended
 *@src: source string to be copied
 *@n: number of maximum bytes
 *
 *Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int src_size = 0;
	int dest_size = 0;

	while (dest[dest_size] != '\0')
	{
		dest_size++;
		}
	while ((src[src_size] != '\0') && (src_size < n))
	{
		dest[dest_size] = src[src_size];
		src_size++;
		dest_size++;
		}
	dest[dest_size] = '\0';
	return (dest);
}
