#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *main - Entry point.
 *@argc: Number of arguments
 *@argv: String containing filenames as arguments
 *
 *Return: 1 for success.
 */

int main(int argc, char *argv[])
{
	int r;

	r = cp(argc, argv);
	return (r);
}

/**
 *cp - copies the contents of one file into another
 *@argc: Number of arguments
 *@argv: String containing name of file to copy and file to be copied into
 *
 *Return: 1 for success
 */
int cp(int argc, char **argv)
{
	char *buf;
	int f1, r, t1, t2;
	int f2 = 0;
	int wr = 0;

	buf = malloc(sizeof(*buf) * 1024);
	f1 = open(argv[1], O_RDONLY);
	t1 = tests(argc, argv, buf, f1);
	if (t1 != 1)
		exit(t1);
	r = read(f1, buf, 1024);
	if (r >= 0)
	{
		f2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC,
S_IRUSR | S_IWUSR);
		wr = write(f2, buf, r);
		if (wr < 0)
		{
			free(buf);
			wr = close(f1);
			return (-1);
		}
		t2 = tests2(argv, buf, r, f1, f2, wr);
		t2++;
	}
	else
		t2 = tests2(argv, buf, r, f1, f2, wr);
	return (1);
}
/**
 *tests - check for various errors
 *@argc: number of arguments to main
 *@buf: string containing contents of first file
 *@argv: string containing arguments to main
 *@f1: file descriptor for file 1
 *
 *Return: 1 for success, else value to pass to exit.
 */
int tests(int argc, char **argv, char *buf, int f1)
{
	if (argc != 3 && argv[1] && argv[2])
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[2]);
		return (97);
	}
	else if (argc != 3 && argv[1])
	{
		dprintf(STDERR_FILENO, "Usage: cp %s (nil)\n", argv[1]);
		return (97);
	}
	else if (argc != 3 && !argv[1])
	{
		dprintf(STDERR_FILENO, "Usage: cp (nil) (nil)\n");
		return (97);
	}
	if (!buf)
		return (-1);
	if (f1 == -1)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
, argv[1]);
		return (98);
	}
	return (1);
}
/**
 *tests2 - check for various errors and close files
 *@argv: string containing arguments to main
 *@buf: string containing contents of first file
 *@r: return value of read function
 *@wr: return value of write function
 *@f1: file descriptor for file 1
 *@f2: file descriptor for file 2
 *
 *Return: 1 for success, else exit with appropriate code.
 */
int tests2(char **argv, char *buf, int r, int f1, int f2, int wr)
{
	if (r < 0)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		r = close(f1);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %d\n", f1);
			exit(100);
		}
		exit(99);
	}
	else
	{
		free(buf);
		r = close(f1);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %d\n", f1);
			exit(100);
		}
		wr = close(f2);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %d\n", f2);
			exit(100);
		}
	}
	return (1);
}
