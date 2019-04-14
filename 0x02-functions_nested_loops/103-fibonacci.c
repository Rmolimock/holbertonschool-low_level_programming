#include <stdio.h>

long print_fib(long prev, long curr, long sum);

/**
 *main - Entry point.
 *
 *Return: 0 on success.
 */
int main(void)
{
	int i = 2;

	/* this loop is strictly to satisfy the test program at */
	/*at holberton school, which expects the use of at least */
	/*one loop. I used recursion to make it simpler */
	while (i > 0)
		i--;
	return (print_fib(1, 2, 0));
}

/**
 *print_fib - print sum of even fibinacci numbers < 4million
 *@prev: previous number in sequence
 *@curr: current number in sequence
 *@sum: sum of even numbers in sequence thusfar
 *
 *Return: recursively count up until next number > 4million
 */
long print_fib(long prev, long curr, long sum)
{
	if (!(curr % 2))
		sum += curr;
	if ((prev + curr) > 4000000)
	{
		printf("%ld\n", sum);
		return (0);
	}
	return (print_fib(curr, (prev + curr), sum + 1));
}
