#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - main struct for project
 * @name: Declared variable
 * @age: Declared variable
 * @owner: Declared variable
 *
 * Return: nothing
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

