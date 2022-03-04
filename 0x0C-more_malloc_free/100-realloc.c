#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - entry point
 * @ptr: Variable to be evaluated
 * @old_size: Variable to be evaluated
 * @new_size: Variable to be evaluated
 *
 * Return: Reallocated memory that was specified
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, size;
	void *ar;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ar = malloc(new_size);
		if (ar == NULL)
			return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	ar = malloc(new_size * sizeof(ptr[0]));
	if (ar == NULL)
		return (NULL);

	if (new_size > old_size)
		size = new_size;
	else
		size = old_size;

	for (i = 0; i < size; i++)
	{
		((sizeof(ptr[0])*)ar)[i] = ((sizeof(ptr[0])*)ptr)[i];
	}

	return (ar);
}

