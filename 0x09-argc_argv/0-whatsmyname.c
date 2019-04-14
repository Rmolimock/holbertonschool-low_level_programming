#include "holberton.h"
#include <stdio.h>

/**
 *main - entry point
 *@argc: number of arguments
 *@argv: array of pointers to argument strings
 *
 *Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
