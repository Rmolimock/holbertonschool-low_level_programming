#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_numbers - prints a variable number of integer parameters
 *@separator: string that separates numbers
 *@n: number of integers passed
 *
 *Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
