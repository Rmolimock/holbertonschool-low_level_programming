#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 *main - Entry point. Perform a given operation on integers passed by user
 *@argc: number of arguments to main
 *@argv: string of arguments to main
 *
 *Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*(argv[2]) == '/' || '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = (get_op_func(argv[2]))(a, b);
	printf("%d\n", result);
	return (0);
}
