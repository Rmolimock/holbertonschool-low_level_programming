#include "holberton.h"

/**
 *rev_string - reverses the content of a string
 *@s: pointer to a char array to be reversed
 *Return: void
 */
void rev_string(char *s)
{
	int tail = 0;
	int head = 0;
	char tmp;

	while (s[tail + 1])
		tail++;
	for (; head < tail; head++, tail--)
	{
		tmp = s[head];
		s[head] = s[tail];
		s[tail] = tmp;
	}
}
