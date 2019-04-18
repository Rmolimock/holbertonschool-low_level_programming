#include "holberton.h"

/**
 *rev_string - reverses the content of a string
 *@s: pointer to a char array to be reversed
 *Return: void
 */
void rev_string(char *s)
{
	int tail_posit = 0;
	int head_posit;
	char tail;
	char head;
	
	while (s[tail_posit + 1])
		tail_posit++;
	for (head_posit = 0; head_posit < tail_posit; head_posit++)
	{
		tail = s[tail_position];
		head = s[head_position];
		s[head_position] = tail;
		s[tail_position] = head;
		tail_position++;
	}
}
