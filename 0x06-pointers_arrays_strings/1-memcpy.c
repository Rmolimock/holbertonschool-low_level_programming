#include "holberton.h"

/**
 *_memcpy - copies n bytes of memory from src to dest
 *@dest: destination where mn bytes will be copied to
 *@src: source from which n bytes are copied
 *@n: number of bytes to be copied
 *
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int size = 0;

	while ((src[size] != '\0') && (size < n))
	{
		dest[size] = src[size];
		size++;
		}
	if (n > size)
	{
		dest[size] = '\0';
		size++;
		while ((dest[size] != '\0') && (size < n))
		{
			dest[size] = '\0';
			size++;
			}
		}
	if (n <= size)
	{
		size = 0;
		while (dest[size] != '\0')
		{
			size++;
			}
		dest[size] = '\0';
		}
	return (dest);
}
