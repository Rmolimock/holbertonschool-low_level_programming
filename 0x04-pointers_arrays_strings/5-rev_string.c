#include "holberton.h"

/**
 *rev_string - reverses the content of a string
 *@s: pointer to a char array to be reversed
 *
 *Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int n;
	char a;
	char b;

	while (s[i] != '\0')
	{
		i++;
		}
	i -= 1;
	for (n = 0; n < i; n++)
	{
		a = s[i];
		b = s[n];
		s[n] = a;
		s[i] = b;
		i--;
		}
}
