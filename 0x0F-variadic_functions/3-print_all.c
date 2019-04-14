#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *_chr - prints the argument from valist as a char
 *@valist: list containing the arguments passed to main
 *
 *Return: Void.
 */
void _chr(va_list *valist)
{
	char c;

	c = va_arg(*valist, int);
	printf("%c", c);
}
/**
 *_int - prints the argument from valist as an int
 *@valist: list containing the arguments passed to main
 *
 *Return: Void.
 */
void _int(va_list *valist)
{
	int tmp;

	tmp = va_arg(*valist, int);
	printf("%d", tmp);
}
/**
 *_flt - prints the argument from valist as a float
 *@valist: list containing the arguments passed to main
 *
 *Return: Void.
 */
void _flt(va_list *valist)
{
	float tmp;

	tmp = va_arg(*valist, double);
	printf("%f", tmp);
}
/**
 *_str - prints the argument from valist as a string
 *@valist: list containing the arguments passed to main
 *
 *Return: Void.
 */
void _str(va_list *valist)
{
	char *s;

	s = va_arg(*valist, char *);
	if (s == NULL || *s == '\0')
		s = "(nil)";
	printf("%s", s);
}
/**
 *print_all - prints a variable number of char, int, float, & char * parameters
 *@format: list of types of arguments that can be passed
 *
 *Return: Void.
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int i = 0;
	int k = 0;
	va_list valist;
	data data[] = {
		{"c", _chr},
		{"i", _int},
		{"f", _flt},
		{"s", _str},
		{NULL, NULL}
	};

	va_start(valist, format);
	while (format[i] != '\0' && format)
	{
		k = 0;
		while (data[k].name != NULL && *(data[k].name) != format[i])
			k++;
		if (data[k].type != NULL)
		{
			printf("%s", separator);
			data[k].type(&valist);
			separator = ", ";
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
