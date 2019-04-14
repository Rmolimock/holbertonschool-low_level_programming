#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 *append_text_to_file - append text to the end of a file
 *@filename: name of file to be appended
 *@text_content: string to be appended to file
 *
 *Return: 1 for success, -1 for failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
		char *buf;
	int l = 0;
	int i = 0;
	int fn;
	int wr;

	if (!filename)
		return (-1);
	while (text_content[l])
		l++;
	buf = malloc(sizeof(char) * (l + 1));
	while (text_content[i])
	{
		buf[i] = text_content[i];
		i++;
	}
	fn = open(filename, O_RDWR | O_APPEND, S_IRUSR | S_IWUSR);
	if (fn == -1 || fn == 2)
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
