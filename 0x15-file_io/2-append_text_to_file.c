#include "main.h"

/**
* append_text_to_file - appends at the end of a file
* @filename: name of the file to append
* @text_content: wath will be appended in the given file
*
* Return: 1 on succes and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			write(fd, &text_content[i], 1);
		}
	}

	return (1);
}

