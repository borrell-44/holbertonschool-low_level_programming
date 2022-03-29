#include "main.h"
#include <stdio.h>

/**
* main - entry point
* @ac: number of elements passed
* @av: vector of all the elements passed
*
* Return: 0 on succes
*/

int main(int ac, char **av)
{
	int fd_from, fd_to, letters = 1, written, close_to, close_from;
	char *buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/*Openning a file and copying its content*/
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDIN_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd_to = open(av[2], O_RDWR | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
	{
		dprintf(STDIN_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	while (letters > 0)
	{
		letters = read(fd_from, buf, 1024);
		if (letters == -1)
		{
			dprintf(STDIN_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}

		written = write(fd_to, buf, letters);
		if (written == -1)
		{
			dprintf(STDIN_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}

	/*Closing files*/
	close_from = close(fd_from);
	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_from);
		exit(100);
	}

	close_to = close(fd_to);
	if (close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_to);
		exit(100);
	}

	return (0);
}

