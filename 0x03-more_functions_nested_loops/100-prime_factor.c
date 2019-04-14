#include <stdio.h>

long prime_factor(long factor, long number, long count);

/**
 *main - Entry point.
 *
 *Return: 0 for success..
 */
int main(void)
{
	long largest = 0;

	largest = prime_factor(612852475142, 612852475143, 612852475141);
	return ((largest) ? largest : -1);
}

/**
 *prime_factor - check if factor is prime and number % factor
 *@factor: factors of number checked if prime
 *@number: threshold to stop checking factors
 *
 *Return: largest prime factor of number.
 */
long prime_factor(long factor, long number, long count)
{
	/* find factor that is prime */
	while (count > 1)
	{
		if (factor % count)
		{
			printf("HERE\n");
			prime_factor(factor, number, count - 1);
		}
		else
		{
			prime_factor(factor - 1, number, factor - 2);
		}
	}
	printf("prime number = %ld\n", factor);

	/* if escape while loop, factor is prime */

	/* check if factor is factor of number */
	if (!(number % factor))
		return (factor);
	else
		prime_factor(factor - 1, number, factor - 2);
	return (0);
}
