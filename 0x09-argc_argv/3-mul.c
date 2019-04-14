#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point.
 *@argc: argument count
 *@argv: array of pointers to argument strings
 *
 *Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	sum = x * y;
	printf("%d\n", sum);
	return (0);
}
