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
	char *nil = "(nil)";
	float c = 0;

	if (d != NULL)
	{
		printf("Name: %s\n" (&d->name == NULL) ? d->name : "(nil)");
		printf("Age: %f\n" (&d->age == NULL) ? d->age : 0);
		printf("Owner: %s\n" (&d->owner == NULL) ? d->owner : "(nil)");
	}
}

