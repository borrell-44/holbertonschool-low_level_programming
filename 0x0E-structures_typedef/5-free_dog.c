#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - main function
 * @d: Pointer to the struct
 *
 * Return: free pointer
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

