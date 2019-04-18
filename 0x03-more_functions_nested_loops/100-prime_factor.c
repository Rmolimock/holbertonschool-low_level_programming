#include <stdio.h>

/**
 *main - print largest prime factor of number
 *
 *Return: 0 for success, -1 for failure.
 */
int main(void)
{
	long prime = 612852475143;
	long factor = 3;

	while (factor < (prime / 2))
	{
		for (factor = 3; factor < (prime / 2); factor += 2)
		{
			if ((prime % factor) == 0)
				prime /= factor;
		}
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
