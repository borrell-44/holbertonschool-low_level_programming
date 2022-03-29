#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* create_file - creates a file
* @filename: the name of the new file
* @text_content: what will be inside the new file
*
* Return: 1 on success and -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, fd_w;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		fd_w = write(fd, text_content, strlen(text_content));
		if (fd_w == -1)
		{
			return (-1);
		}
	}

	close(fd);
	return (1);
}

