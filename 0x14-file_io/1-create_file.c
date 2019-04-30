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
	char *buf;
	int l = 0;
	int i = 0;
	int fn;
	int wr;

	if (text_content == NULL)
		return (-1);
	if (!filename)
		return (-1);
	while (text_content && text_content[l])
		l++;
	buf = malloc(sizeof(char) * (l + 1));
	while (text_content[i])
	{
		buf[i] = text_content[i];
		i++;
	}
	fn = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fn == -1)
	{
		free(buf);
		return (-1);
	}
	wr = write(fn, buf, l);
	if (wr < 0)
	{
		free(buf);
		wr = close(fn);
		return (-1);
	}
	free(buf);
	wr = close(fn);
	return (1);
}
