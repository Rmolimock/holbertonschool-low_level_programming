#include "holberton.h"
#include <stdio.h>

/**
 *main - entry point.
 *@argc: number of arguments
 *@argv: array of pointers to argument strings
 *
 *Return: 0 for success.
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
