#include <stdio.h>

/**
 *main - entry point.
 *
 *Return: void.
 */
int main(void)
{
	int i = 0;
	long int sum = 0;

	while (i < 1025)
	{
		if (!(i % 3) || !(i % 5))
			sum += i;
		i++;
	}
	printf("%ld\n", sum);
	return (0);
}
