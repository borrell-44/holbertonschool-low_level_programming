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
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}

