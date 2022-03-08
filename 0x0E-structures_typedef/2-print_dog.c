#include "dog.h"
#include <stdio.h>

/**
 * print_dog - entry point
 * @d: pointer to the struct
 *
 * Return: Values of variables in the struct
 */

void print_dog(struct dog *d)
{
	char *nul = "(nil)";
	float c = 0;

	if (d != NULL)
	{
		if (&d->name == NULL)
			printf("Name: %s\n", nul);
		else
			printf("Name: %s\n", d->name);

		if (&d->age == NULL)
			printf("Age: %f\n", c);
		else
			printf("Age: %f\n", b->age);

		if (&d->owner == NULL)
			printf("Owner: %s\n", nul);
		else
			printf("Owner: %s\n", b->owner);
	}
}

