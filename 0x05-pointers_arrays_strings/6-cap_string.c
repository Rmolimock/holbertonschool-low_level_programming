#include "holberton.h"

/**
 *cap_string - converts uppercase string to lowercase
 *@n: pointer to string to have case converted
 *
 *Return: pointer to converted n
 */
char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if ((n[i] > 96) && (n[i] < 123))
		{
			if (i != 0)
			{
				if (n[i - 1] == 32 || n[i - 1] == '\t'
				|| n[i - 1] == '\n' || n[i - 1] == ','
				|| n[i - 1] == '.' || n[i - 1] == '"'
				|| n[i - 1] == '!' || n[i - 1] == '?'
				|| n[i - 1] == ';' || n[i - 1] == '{'
				|| n[i - 1] == '}' || n[i - 1] == '('
				|| n[i - 1] == ')')
				{
					n[i] -= 32;
					}
				else
				{
					continue;
					}
				}
			else if (i == 0)
			{
				n[i] -= 32;
				}
			}
		}
	return (n);
}
