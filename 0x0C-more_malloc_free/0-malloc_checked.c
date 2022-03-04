#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - entry point
 * @b: Variable to be evaluated
 *
 * Return: Always 0
 */

void *malloc_checked(unsigned int b)
{
	void *buffer;

	buffer = malloc(b);
	if (buffer == NULL)
	{
		exit(98);
	}

	return (buffer);
}

