#include "main.h"
#include <stdio.h>

void error_from(char *name)
{
	dprintf(STDERR_FILENO, "Error: Can'r read from file %s\n", name);
}

void error_to(char *name)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
}

/**
* main - entry point
* @ac: number of elements passed
* @av: vector of all the elements passed
*
* Return: 0 on succes
*/

int main(int ac, char **av)
{
	int fd_from, fd_to, letters, written, close_to, close_from;
	char *buf[1024];
	
	/*Openning a file*/
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		error_from(av[1]);
		exit(98);
	}

	letters = read(fd_from, buf, 1024);
	if (letters == -1)
	{
		error_from(av[1]);
		exit(98);
	}

	close_from = close(fd_from);
	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", close_from);
		exit(100);
	}


	/*Making a file*/
	fd_to = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		error_to(av[2]);
		exit(99);
	}

	written = write(fd_to, buf, letters);
	if (written == -1)
	{
		error_to(av[2]);
		exit(99);
	}

	close_to = close(fd_to);

	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", close_from);
		exit(100);
	}

	if (close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", close_to);
		exit(100);
	}

	return (0);
}

