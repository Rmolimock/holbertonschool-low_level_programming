#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *string_nconcat - concatenates 2 strings up to a given number of byes
 *@s1: string to be concatenated onto
 *@s2: string to concatenate onto s1
 *@n: number of bytes of s2 to concatenate onto s1
 *
 *Return: pointer to space in memory allocated for new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s2_size = 0;
	unsigned int s1_size = 0;
	char *p;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[s1_size])
		s1_size++;
	while ((s2[s2_size]) && (s2_size < n))
	{
		s2_size++;
		s1_size++;
		}
	p = malloc(sizeof(char) + (s1_size));
	if (p)
	{
		s1_size = 0;
		s2_size = 0;
		while (s1[s1_size])
		{
			p[s1_size] = s1[s1_size];
			s1_size++;
		}
		while ((s2[s2_size]) && s2_size < n)
		{
			p[s1_size] = s2[s2_size];
			s1_size++;
			s2_size++;
		}
		p[s1_size] = '\0';
		return (p);
	}
	return (NULL);
}
