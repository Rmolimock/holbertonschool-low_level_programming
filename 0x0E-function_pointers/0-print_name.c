#include <stdlib.h>
#include "function_pointers.h"

/**
 *print_name - prints a string using a given pointer to a function as parameter
 *@name: string to be printed
 *@f: pointer to the function to be applied to name
 *
 *Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!(name) || !(f))
		return;
	f(name);
}
