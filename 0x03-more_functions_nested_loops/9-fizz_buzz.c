#include "holberton.h"
#include <stdio.h>

/**
 *main - entry point.
 *
 *Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 && i % 5)
			printf("%d ", i);
		else if (!(i % 3) && i % 5)
			printf("Fizz ");
		else if (i == 100)
			printf("Buzz\n");
		else if (i % 3 && !(i % 5))
			printf("Buzz ");
		else
			printf("FizzBuzz ");
	}
	return (0);
}
