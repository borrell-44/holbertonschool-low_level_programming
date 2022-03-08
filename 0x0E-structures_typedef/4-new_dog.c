#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - main function
 * @name: Value for the new struct
 * @age: Value for the new struct
 * @owner: Value for the new struct
 *
 * Return: New struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}

