#include <stdio.h>

/**
 *main - print sum of even fibinacci numbers < 4million
 *
 *Return: 0 for success
 */
int main(void)
{
	long prev = 1;
	long curr = 2;
	long tmp = 0;
	long sum = 0;

	while (curr < 4000000)
	{
		if (!(curr % 2))
			sum += curr;
		tmp = curr + prev;
		prev = curr;
		curr = tmp;
	}
	printf("%ld\n", sum);
	return (0);
}
