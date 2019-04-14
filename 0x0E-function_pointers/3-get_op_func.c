#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 *get_op_func - checks which operator uses on a and b
 *@s: operator char used to select function to perform on a and b
 *
 *Return: Number of element containing correct operator function.
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
