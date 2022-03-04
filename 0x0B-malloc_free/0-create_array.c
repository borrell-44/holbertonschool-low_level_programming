#include "main.h"
#include <stdlib.h>

/**
 * *create_array - entry point
 * @size: Variable to be evaluated
 * @c: Variable to be evaluated
 *
 * Return: Always 0
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}

	buffer = malloc(size * sizeof(char));

	if (buffer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}

	return (buffer);
}

