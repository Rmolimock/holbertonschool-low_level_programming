#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d and is ", n, n % 10);
	if ((n % 10) == 0)
		puts("0");
	else if ((n % 10) > 5)
		puts("greater than 5");
	else
		puts("less than 6 and not 0");
	return (0);
}
