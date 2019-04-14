#include <stdio.h>

unsigned long print_fib(unsigned long prev, unsigned long curr, int limit);

int main(void)
{
	printf("1, ");
	return (print_fib(1, 2, 96));
}

unsigned long print_fib(unsigned long prev, unsigned long curr, int limit)
{
	if (limit == 1)
	{
		printf("%ld\n", curr);
		return (0);
	}
	printf("%ld, ", curr);
	return (print_fib(curr, (prev + curr), limit - 1));
}
