#include <stdio.h>
#include <unistd.h>

/**
 *main - entry point.
 *
 *Return: 1
 */
int main(void)
{
	char *s;
	int i = 0;

	s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	while (s[i])
		i++;
	write(STDERR_FILENO, s, i);
	return (1);
}
