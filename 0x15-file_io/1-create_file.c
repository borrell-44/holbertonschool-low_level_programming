#include "main.h"
#include <stdio.h>

/**
* create_file - creates a file
* @filename: the name of the new file
* @text_content: what will be inside the new file
*
* Return: 1 on success and -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_EXCL, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (i = 0; filename[i] != '\0'; i++)
		{
			write(fd, &text_content[i], 1);
		}
	}

	return (1);
}

