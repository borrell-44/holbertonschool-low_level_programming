#include "main.h"
#include "stdio.h"

/**
* read_textfile - reads a text file and prints it to POSIX standard output
* @filename: Name of the file to read
* @letters: number of letters it should read and print
*
* Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, size, fd_w;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	size = read(fd, buf, letters);
	printf("%i\n", size);
	if (size == -1)
	{
		return (0);
	}

	fd_w = write(1, buf, size);
	if (fd_w != size)
	{
		return (0);
	}

	free(buf);
	close(fd);
	return (fd_w);
}

