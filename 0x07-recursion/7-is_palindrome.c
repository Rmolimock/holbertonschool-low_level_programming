#include "holberton.h"

/**
 *is_palindrome - checks if a string is a palindrome
 *@s: string to be checked
 *
 *Return: 1 if string is palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check_first_last(0, s, len - 1));
}
/**
 *_strlen_recursion - finds and returns te length of a string
 *@s: string checked for length
 *
 *Return: length as an int.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
/**
 *check_first_last - compares the first and last chars in a string
 *@n: counts up the string from the first letter
 *@s: the string being checked
 *@len: counts down the string from the last letter
 *
 *Return: 1 if string is a palindrome, 0 otherwise.
 */
int check_first_last(int n, char *s, int len)
{
	if (n >= len)
		return (1);
	else if (s[n] == s[len])
		return (check_first_last(n + 1, s, len - 1));
	return (0);
}
