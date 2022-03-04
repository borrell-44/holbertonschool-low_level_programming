#include "main.h"
#include <stdlib.h>

/**
 * *_strlen - entry point
 * @string: Variable to be evaluated
 *
 * Return: len of string
 */

int _strlen(char *string)
{
	int count;

	if (*string == '\0')
		return (0);

	for (count = 0; string[count] != '\0'; count++)
	{}
	return (count);
}

/**
 * *str_concat - entry point
 * @s1: Variable to be evaluated
 * @s2: Variable to be evaluated
 *
 * Return: Always 0
 */

char *str_concat(char *s1, char *s2)
{
	char *buffer;
	int i1, i2, size;
	int size1, size2;

	if (s1 == NULL)
		size1 = 0;
	else
		size1 = _strlen(s1);
	if (s2 == NULL)
		size2 = 0;
	else
		size2 = _strlen(s2);

	size = size1 + size2 + 1;
	buffer = malloc(size * sizeof(char));

	if (buffer == NULL)
	{
		return (NULL);
	}

	for (i1 = 0; i1 < size1; i1++)
	{
		buffer[i1] = s1[i1];
	}

	for (i2 = 0; i2 < size2; i2++)
	{
		buffer[i1] = s2[i2];
		i1++;
	}

	buffer[i1] = '\0';

	return (buffer);
}

