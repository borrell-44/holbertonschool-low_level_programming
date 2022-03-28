#include "main.h"

/**
* read_textfile - reads a text file and prints it to POSIX standard output
* @filename: Name of the file to read
* @letters: number of letters it should read and print
*
* Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i;
	int count = 0;
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

	buf = malloc(letters);
	if (buf == NULL)
	{
		return (0);
	}

	read(fd, buf, letters);
	buf[letters] = '\0';

	for (i = 0; buf[i] != '\0'; i++)
	{
		write(1, &buf[i], 1);
		count++;
	}

	close(fd);
	return (count);
}

