#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 *read_textfile - reads and prints given # of chars from given file
 *@filename: file to be read
 *@letters: number of chars to be read
 *
 *Return: Number of chars read for success, 0 for failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, i = 0;
	char *buf;
	ssize_t n;

	if (!filename || !letters)
		return (0);


	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);


	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);


	n = read(file, buf, letters);
	if (n < 0)
	{
		free(buf);
		return (0);
	}


	while (buf && buf[i])
		i++;
	n = write(STDOUT_FILENO, buf, i);
	free(buf);
	close(file);
	if (n < 0)
		return (0);

	return (n);
}
