#ifndef _HEADER_
#define _HEADER_
#include "dog.h"
#include <stdlib.h>

/**
 * struct dog - main struct for project
 * @name: Declared variable
 * @age: Declared variable
 * @owner: Declared variable
 *
 * Return: nothing
 */

struct dog
{
        char *name;
        float age;
        char *owner;
};

/**
 * init_dog - entry point
 * @d: Variable to be evaluated
 * @name: Variable to be evaluated
 * @age: Variable to be evaluated
 * @owner: Variable to be evaluated
 *
 * Return: create struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#endif

