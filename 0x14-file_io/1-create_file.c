#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 *create_file - creates a file
 *@filename: name of file to be created
 *@text_content: string to append to the file
 *
 *Return: 1 for Success, -1 for Failure.
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0;
	int fn;
	int wr;

	if (!filename)
		return (-1);
	fn = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fn == -1)
		return (-1);

	while (text_content && text_content[i])
		i++;
	wr = write(fn, text_content, i);
	close(fn);
	if (wr < 0)
		return (-1);
	return (1);
}
