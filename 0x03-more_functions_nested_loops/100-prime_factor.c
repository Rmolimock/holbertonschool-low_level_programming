#include <stdio.h>

/**
 *main - print largest prime factor of number
 *
 *Return: 0 for success, -1 for failure.
 */
int main(void)
{
	long number = 612852475143;
	long prime;
	long factor;
	
	for (factor = number; factor > 2; factor -= 2)
	{
		if (!(number % factor)) /* for each factor of number */
		{
			for (prime = factor; prime > 2; prime -= 2)
			{
				if (!(factor % prime))
					break;
			}
			if (factor == 1)
			{
				printf("%ld\n", prime);
				return (0);
			}
		}
	}
	return (-1);
}
