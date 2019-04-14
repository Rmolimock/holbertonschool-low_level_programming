#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - mallocs mem space for a copy of two concatenated strings
 *@s1: String that s2 will be concatenated onto the end of.
 *@s2: String to be concatenated onto the end of s1.
 *
 *Return: Pointer to the new copy of the string, or NULL for failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i1 = 0;
	int i2 = 0;
	char *r, *ret;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i1])
		i1++;
	while (s2[i2])
		i2++;
	r = malloc((i1 + i2 + 1) * sizeof(char));
	if (r)
	{
		ret = r;
		while (*s1)
		{
			*r++ = *s1++;
		}
		while (*s2)
		{
			*r++ = *s2++;
		}
		r = '\0';
	}
	return (ret);
}
