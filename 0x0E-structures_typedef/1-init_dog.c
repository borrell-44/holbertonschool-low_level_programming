#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - entry point
 * @d: Variable to be evaluated
 * @name: Variable to be evaluated
 * @age: Variable to be evaluated
 * @owner: Variable to be evaluated
 *
 * Return: add parameters
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

