#include <stdio.h>

long print_fib(long prev, long curr, int limit);

/**
 *main - Entry point.
 *
 *Return: 0 for success;
 */
int main(void)
{
	printf("1, ");
	return (print_fib(1, 2, 49));
}

/**
 *print_fib - print fibinacci sequence up to limit
 *@prev: previous number in sequence
 *@curr: current number in sequence
 *@limit: threshold to which to print fib numbers
 *
 *Return: recursively count down, 0 at success.
 */
long print_fib(long prev, long curr, int limit)
{
	if (limit == 1)
	{
		printf("%ld\n", curr);
		return (0);
	}
	printf("%ld, ", curr);
	return (print_fib(curr, (prev + curr), limit - 1));
}
