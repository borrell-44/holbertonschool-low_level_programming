#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - entry point
 * @nmemb: Variable to be evaluated
 * @size: Variable to be evaluated
 *
 * Return: Aways 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;
	int i;
	int n = size;
	int *cero;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(size * nmemb);
	if (ar == NULL)
		return (NULL);

	*ar = cero;

	return (ar);
}

