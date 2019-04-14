#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - dynamically allocates memory for a string
 *@str: string to be allocated for
 *
 *Return: pointer to malloc allocated string in memory.
*/
char *_strdup(char *str)
{
	int i = 1;
	int c;
	char *p;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	p = malloc(i * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	for (c = 0; c < i; c++)
	{
		p[c] = str[c];
	}
	p[c] = '\0';
	return (p);
}
