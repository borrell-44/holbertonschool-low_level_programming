#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - entry point
 * @str: Variable to be evaluated
 *
 * Return: Always 0
 */

char *_strdup(char *str)
{
	char *buffer;
	int i, size;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size] != '\0'; size++)
	{
	}

	size++;
	buffer = malloc(size * sizeof(char));

	if (buffer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		buffer[i] = str[i];
	}

	return (buffer);
}

