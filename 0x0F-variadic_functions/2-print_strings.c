#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_strings - prints a variable number of string parameters
 *@separator: string printed between strings (such as ", ")
 *@n: number of strings passed
 *
 *Return: Void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;
	char *arg;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(valist, char *);
		if (arg)
			printf("%s", arg);
		else
			printf("(nil)");
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
